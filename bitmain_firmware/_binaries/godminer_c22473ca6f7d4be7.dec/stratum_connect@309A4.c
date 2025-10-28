bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  char *v5; // r1
  _DWORD *v6; // r3
  _DWORD *v8; // r9
  _BYTE *v9; // r0
  int v10; // r0
  bool v11; // nf
  int v12; // r0
  int v13; // r0
  int *v14; // r0
  char *v15; // r0
  struct hostent *v16; // r0
  char *v17; // r3
  unsigned __int16 v18; // [sp+2Eh] [bp-1126h] BYREF
  _DWORD optval[7]; // [sp+30h] [bp-1124h] BYREF
  int v20; // [sp+4Ch] [bp-1108h]
  char cp[256]; // [sp+50h] [bp-1104h] BYREF
  struct sockaddr v22[256]; // [sp+150h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(_DWORD *)(a1 + 28);
  if ( !strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    && (server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v18)) )
  {
    LOWORD(v8) = -14512;
    V_LOCK();
    logfmt_raw((char *)v22, 0x1000u, 0, 1246612, *(_DWORD *)(a1 + 28), cp, v18);
    HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
    V_UNLOCK();
    zlog(
      *v8,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_connect",
      15,
      113,
      20,
      v22);
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
        server_port_from_url = 0;
        goto LABEL_4;
      }
      optval[0] = 1;
      if ( setsockopt(v13, 1, 2, optval, 4u) )
      {
        V_LOCK();
        v14 = _errno_location();
        v15 = strerror(*v14);
        logfmt_raw((char *)v22, 0x1000u, 0, 1246644, v15);
        V_UNLOCK();
        zlog(
          *v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_connect",
          15,
          137,
          100,
          v22);
      }
    }
    if ( inet_addr(cp) == -1 )
    {
      if ( _res_init() < 0 )
      {
        server_port_from_url = 0;
        close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        V_LOCK();
        logfmt_raw((char *)v22, 0x1000u, 0, 1246696, *(_DWORD *)a1);
        V_UNLOCK();
        zlog(
          *v8,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_connect",
          15,
          152,
          100,
          v22);
        goto LABEL_4;
      }
      v16 = gethostbyname(cp);
      if ( !v16 )
      {
        server_port_from_url = 0;
        close(*(_DWORD *)(a1 + 32));
        *(_DWORD *)(a1 + 32) = -1;
        goto LABEL_4;
      }
      v17 = *v16->h_addr_list;
      if ( v17 )
        *(_DWORD *)&v22[0].sa_data[2] = *(_DWORD *)v17;
    }
    else
    {
      *(_DWORD *)&v22[0].sa_data[2] = inet_addr(cp);
    }
    v22[0].sa_family = 2;
    v10 = *(_DWORD *)(a1 + 32);
    *(_WORD *)v22[0].sa_data = __rev16(v18);
    v11 = connect(v10, v22, 0x10u) < 0;
    v12 = *(_DWORD *)(a1 + 32);
    if ( v11 )
    {
      close(v12);
      server_port_from_url = 0;
      *(_DWORD *)(a1 + 32) = -1;
    }
    else
    {
      keep_sockalive(v12);
    }
  }
  else
  {
    server_port_from_url = 0;
    V_LOCK();
    LOWORD(v5) = -18728;
    HIWORD(v5) = (unsigned int)"lu)" >> 16;
    V_STR(optval, v5, *(const char **)(a1 + 28));
    logfmt_raw(
      (char *)v22,
      0x1000u,
      0,
      v20,
      optval[0],
      optval[1],
      optval[2],
      optval[3],
      optval[4],
      optval[5],
      optval[6],
      v20,
      1246596);
    V_UNLOCK();
    LOWORD(v6) = -14512;
    HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v6,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_connect",
      15,
      110,
      100,
      v22);
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
