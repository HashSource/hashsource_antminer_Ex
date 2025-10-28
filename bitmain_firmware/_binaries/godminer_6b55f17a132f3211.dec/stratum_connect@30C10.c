int __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  const char *v3; // r4
  int server_port_from_url; // r0
  int v5; // r8
  int v6; // r0
  int v8; // r0
  _BYTE *v9; // r0
  int v10; // r0
  int v11; // r0
  int *v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int *v16; // r0
  int v17; // r0
  struct hostent *v18; // r0
  char *v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r12
  int v23; // r2
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  unsigned __int16 v28; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  _DWORD optval[8]; // [sp+40h] [bp-1124h] BYREF
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  _BYTE v32[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(const char **)(a1 + 28);
  server_port_from_url = strncasecmp(v3, "stratum+tcp://", 0xEu);
  if ( server_port_from_url
    || (server_port_from_url = get_server_port_from_url(v3 + 14, cp, &v28), (v5 = server_port_from_url) == 0) )
  {
    v5 = 0;
    V_LOCK(server_port_from_url);
    V_STR((int)optval, "pool");
    v6 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "stratum_connect",
      15,
      117,
      100,
      v32);
    goto LABEL_4;
  }
  V_LOCK(server_port_from_url);
  v8 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/stratum_handler.c",
    144,
    "stratum_connect",
    15,
    120,
    20,
    v32);
  v9 = *(_BYTE **)(a1 + 40);
  if ( !v9 )
  {
    v9 = calloc(0x4000u, 1u);
    *(_DWORD *)(a1 + 40) = v9;
    *(_DWORD *)(a1 + 36) = 0x4000;
  }
  *v9 = 0;
  if ( *(_DWORD *)(a1 + 32) == -1 )
  {
    v14 = socket(2, 1, 6);
    *(_DWORD *)(a1 + 32) = v14;
    if ( v14 == -1 )
    {
      V_LOCK(-1);
      v5 = 0;
      v20 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v20);
      v21 = g_zc;
      v22 = 100;
      v23 = 135;
      goto LABEL_24;
    }
    optval[0] = 1;
    v15 = setsockopt(v14, 1, 2, optval, 4u);
    if ( v15 )
    {
      V_LOCK(v15);
      v16 = _errno_location();
      strerror(*v16);
      v17 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/stratum_handler.c",
        144,
        "stratum_connect",
        15,
        145,
        100,
        v32);
    }
  }
  if ( inet_addr(cp) == -1 )
  {
    if ( _res_init() < 0 )
    {
      v5 = 0;
      v24 = close(*(_DWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 32) = -1;
      V_LOCK(v24);
      v25 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v25);
      v21 = g_zc;
      v22 = 100;
      v23 = 160;
    }
    else
    {
      v18 = gethostbyname(cp);
      if ( v18 )
      {
        v19 = *v18->h_addr_list;
        if ( v19 )
          *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v19;
        goto LABEL_10;
      }
      v5 = 0;
      v26 = close(*(_DWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 32) = -1;
      V_LOCK(v26);
      v27 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v27);
      v21 = g_zc;
      v22 = 20;
      v23 = 169;
    }
LABEL_24:
    zlog(
      v21,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "stratum_connect",
      15,
      v23,
      v22,
      v32);
    goto LABEL_4;
  }
  *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
LABEL_10:
  addr.sa_family = 2;
  v10 = *(_DWORD *)(a1 + 32);
  *(_WORD *)addr.sa_data = __rev16(v28);
  v11 = connect(v10, &addr, 0x10u);
  if ( v11 >= 0 )
  {
    keep_sockalive(*(_DWORD *)(a1 + 32));
  }
  else
  {
    if ( dword_165B14 <= 3 )
    {
      V_LOCK(v11);
      v12 = _errno_location();
      strerror(*v12);
      v13 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/stratum_handler.c",
        144,
        "stratum_connect",
        15,
        197,
        100,
        v32);
    }
    v5 = 0;
    close(*(_DWORD *)(a1 + 32));
    *(_DWORD *)(a1 + 32) = -1;
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return v5;
}
