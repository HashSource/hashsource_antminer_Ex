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
  bool v11; // nf
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int *v15; // r0
  int v16; // r0
  struct hostent *v17; // r0
  char *v18; // r3
  int v19; // r0
  int v20; // r0
  unsigned __int16 v21; // [sp+2Eh] [bp-1126h] BYREF
  _DWORD optval[8]; // [sp+30h] [bp-1124h] BYREF
  char cp[256]; // [sp+50h] [bp-1104h] BYREF
  struct sockaddr v24[256]; // [sp+150h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(const char **)(a1 + 28);
  server_port_from_url = strncasecmp(v3, "stratum+tcp://", 0xEu);
  if ( !server_port_from_url
    && (server_port_from_url = get_server_port_from_url(v3 + 14, cp, &v21), (v5 = server_port_from_url) != 0) )
  {
    V_LOCK(server_port_from_url);
    v8 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_connect",
      15,
      113,
      20,
      v24);
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
      v13 = socket(2, 1, 6);
      *(_DWORD *)(a1 + 32) = v13;
      if ( v13 == -1 )
      {
        v5 = 0;
        goto LABEL_4;
      }
      optval[0] = 1;
      v14 = setsockopt(v13, 1, 2, optval, 4u);
      if ( v14 )
      {
        V_LOCK(v14);
        v15 = _errno_location();
        strerror(*v15);
        v16 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_connect",
          15,
          137,
          100,
          v24);
      }
    }
    if ( inet_addr(cp) == -1 )
    {
      if ( _res_init() < 0 )
      {
        v5 = 0;
        v19 = close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        V_LOCK(v19);
        v20 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_connect",
          15,
          152,
          100,
          v24);
        goto LABEL_4;
      }
      v17 = gethostbyname(cp);
      if ( !v17 )
      {
        v5 = 0;
        close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        goto LABEL_4;
      }
      v18 = *v17->h_addr_list;
      if ( v18 )
        *(_DWORD *)&v24[0].sa_data[2] = *(_DWORD *)v18;
    }
    else
    {
      *(_DWORD *)&v24[0].sa_data[2] = inet_addr(cp);
    }
    v24[0].sa_family = 2;
    v10 = *(_DWORD *)(a1 + 32);
    *(_WORD *)v24[0].sa_data = __rev16(v21);
    v11 = connect(v10, v24, 0x10u) < 0;
    v12 = *(_DWORD *)(a1 + 32);
    if ( v11 )
    {
      close(v12);
      v5 = 0;
      *(_DWORD *)(a1 + 32) = -1;
    }
    else
    {
      keep_sockalive(v12);
    }
  }
  else
  {
    v5 = 0;
    V_LOCK(server_port_from_url);
    V_STR((int)optval, "pool");
    v6 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_connect",
      15,
      110,
      100,
      v24);
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return v5;
}
