int __fastcall stratum_connect(int a1)
{
  int *v1; // r0
  char *v2; // r0
  int *v3; // r0
  char *v4; // r0
  _BYTE v7[20]; // [sp+30h] [bp-1154h] BYREF
  int optval; // [sp+1030h] [bp-154h] BYREF
  uint16_t v9; // [sp+1036h] [bp-14Eh] BYREF
  char cp[256]; // [sp+1038h] [bp-14Ch] BYREF
  struct sockaddr addr; // [sp+1138h] [bp-4Ch] BYREF
  const char *v12[7]; // [sp+1148h] [bp-3Ch] BYREF
  int v13; // [sp+1164h] [bp-20h]
  int v14; // [sp+1168h] [bp-1Ch]
  char **h_addr_list; // [sp+116Ch] [bp-18h]
  struct hostent *v16; // [sp+1170h] [bp-14h]
  unsigned __int8 v17; // [sp+1177h] [bp-Dh]

  v17 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 48));
  if ( !strncasecmp(*(const char **)(a1 + 32), "stratum+tcp://", 0xEu)
    && (unsigned __int8)get_server_port_from_url((const char *)(*(_DWORD *)(a1 + 32) + 14), cp, &v9) == 1 )
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "url: %s, server: %s, port: %d", *(_DWORD *)(a1 + 32), cp, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_connect",
      15,
      120,
      20,
      v7);
    if ( !*(_DWORD *)(a1 + 44) )
    {
      *(_DWORD *)(a1 + 44) = calloc(0x4000u, 1u);
      *(_DWORD *)(a1 + 40) = 0x4000;
    }
    **(_BYTE **)(a1 + 44) = 0;
    if ( *(_DWORD *)(a1 + 36) == -1 )
    {
      *(_DWORD *)(a1 + 36) = socket(2, 1, 6);
      if ( *(_DWORD *)(a1 + 36) == -1 )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "stratum socket creat failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          135,
          100,
          v7);
        goto LABEL_24;
      }
      optval = 1;
      if ( setsockopt(*(_DWORD *)(a1 + 36), 1, 2, &optval, 4u) )
      {
        V_LOCK();
        v1 = _errno_location();
        v2 = strerror(*v1);
        logfmt_raw(v7, 0x1000u, 0, "API setsockopt SO_REUSEADDR failed (ignored): %s", v2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          145,
          100,
          v7);
      }
    }
    if ( inet_addr(cp) == -1 )
    {
      if ( _res_init() < 0 )
      {
        close(*(_DWORD *)(a1 + 36));
        *(_DWORD *)(a1 + 36) = -1;
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "poolno %d res_init error", *(_DWORD *)a1);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          160,
          100,
          v7);
        goto LABEL_24;
      }
      v16 = gethostbyname(cp);
      if ( !v16 )
      {
        close(*(_DWORD *)(a1 + 36));
        *(_DWORD *)(a1 + 36) = -1;
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "ip address config error");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          169,
          20,
          v7);
        goto LABEL_24;
      }
      h_addr_list = v16->h_addr_list;
      v14 = 0;
      if ( *h_addr_list )
        *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)h_addr_list[v14];
    }
    else
    {
      *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
    }
    addr.sa_family = 2;
    *(_WORD *)addr.sa_data = htons(v9);
    if ( connect(*(_DWORD *)(a1 + 36), &addr, 0x10u) >= 0 )
    {
      keep_sockalive(*(_DWORD *)(a1 + 36));
      v17 = 1;
    }
    else
    {
      if ( dword_5ACF80 <= 3 )
      {
        V_LOCK();
        v3 = _errno_location();
        v4 = strerror(*v3);
        logfmt_raw(v7, 0x1000u, 0, "Error connecting to server, error code: %s", v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/stratum_handler.c",
          145,
          "stratum_connect",
          15,
          197,
          100,
          v7);
      }
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
    }
  }
  else
  {
    V_LOCK();
    sub_457A8(v12, *(const char **)(a1 + 32));
    logfmt_raw(v7, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, "prase url err!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_connect",
      15,
      117,
      100,
      v7);
  }
LABEL_24:
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 48));
  return v17;
}
