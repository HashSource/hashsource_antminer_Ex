bool __fastcall stratum_connect(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  _BOOL4 server_port_from_url; // r8
  char *v5; // r1
  int v6; // r4
  int v7; // r1
  int v9; // r3
  int v10; // r1
  _BYTE *v11; // r0
  int v12; // r0
  int *v13; // r0
  char *v14; // r0
  int v15; // r3
  int v16; // r1
  int v17; // r0
  int *v18; // r0
  char *v19; // r0
  int v20; // r3
  int v21; // r1
  struct hostent *v22; // r0
  char *v23; // r3
  int v24; // r3
  int v25; // r0
  int v26; // r12
  int v27; // r2
  int v28; // r1
  int v29; // r3
  int v30; // r3
  unsigned __int16 v31; // [sp+2Eh] [bp-1136h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1134h] BYREF
  _DWORD optval[7]; // [sp+40h] [bp-1124h] BYREF
  int v34; // [sp+5Ch] [bp-1108h]
  char cp[256]; // [sp+60h] [bp-1104h] BYREF
  char v36[4100]; // [sp+160h] [bp-1004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 48);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 48));
  v3 = *(_DWORD *)(a1 + 32);
  if ( strncasecmp((const char *)v3, "stratum+tcp://", 0xEu)
    || !(server_port_from_url = get_server_port_from_url((char *)(v3 + 14), cp, &v31)) )
  {
    server_port_from_url = 0;
    V_LOCK();
    LOWORD(v5) = 22048;
    HIWORD(v5) = (unsigned int)"nt time %lld ms" >> 16;
    V_STR(optval, v5, *(const char **)(a1 + 32));
    LOWORD(v6) = -32612;
    HIWORD(v6) = (unsigned int)"et_full sockbuf len %zu" >> 16;
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v34,
      optval[0],
      optval[1],
      optval[2],
      optval[3],
      optval[4],
      optval[5],
      optval[6],
      v34,
      v6);
    V_UNLOCK();
    LOWORD(v7) = 32512;
    HIWORD(v7) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v7, 148, "stratum_connect", 15, 117, 100, v36);
    goto LABEL_4;
  }
  V_LOCK();
  LOWORD(v9) = -32596;
  HIWORD(v9) = (unsigned int)"len %zu" >> 16;
  logfmt_raw(v36, 0x1000u, 0, v9, *(_DWORD *)(a1 + 32), cp, v31);
  V_UNLOCK();
  LOWORD(v10) = 32512;
  HIWORD(v10) = (unsigned int)"stratum_check" >> 16;
  zlog(g_zc, v10, 148, "stratum_connect", 15, 120, 20, v36);
  v11 = *(_BYTE **)(a1 + 44);
  if ( !v11 )
  {
    v11 = calloc(0x4000u, 1u);
    *(_DWORD *)(a1 + 44) = v11;
    *(_DWORD *)(a1 + 40) = 0x4000;
  }
  *v11 = 0;
  if ( *(_DWORD *)(a1 + 36) == -1 )
  {
    v17 = socket(2, 1, 6);
    *(_DWORD *)(a1 + 36) = v17;
    if ( v17 == -1 )
    {
      V_LOCK();
      LOWORD(v24) = -32564;
      HIWORD(v24) = (unsigned int)" server: %s, port: %d" >> 16;
      server_port_from_url = 0;
      logfmt_raw(v36, 0x1000u, 0, v24);
      V_UNLOCK();
      v25 = g_zc;
      v26 = 100;
      v27 = 135;
      goto LABEL_24;
    }
    optval[0] = 1;
    if ( setsockopt(v17, 1, 2, optval, 4u) )
    {
      V_LOCK();
      v18 = _errno_location();
      v19 = strerror(*v18);
      LOWORD(v20) = -32536;
      HIWORD(v20) = (unsigned int)"tum socket creat failed" >> 16;
      logfmt_raw(v36, 0x1000u, 0, v20, v19);
      V_UNLOCK();
      LOWORD(v21) = 32512;
      HIWORD(v21) = (unsigned int)"stratum_check" >> 16;
      zlog(g_zc, v21, 148, "stratum_connect", 15, 145, 100, v36);
    }
  }
  if ( inet_addr(cp) == -1 )
  {
    if ( _res_init() < 0 )
    {
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      LOWORD(v29) = -32484;
      HIWORD(v29) = (unsigned int)"failed (ignored): %s" >> 16;
      logfmt_raw(v36, 0x1000u, 0, v29, *(_DWORD *)a1);
      V_UNLOCK();
      v25 = g_zc;
      v26 = 100;
      v27 = 160;
    }
    else
    {
      v22 = gethostbyname(cp);
      if ( v22 )
      {
        v23 = *v22->h_addr_list;
        if ( v23 )
          *(_DWORD *)&addr.sa_data[2] = *(_DWORD *)v23;
        goto LABEL_10;
      }
      server_port_from_url = 0;
      close(*(_DWORD *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = -1;
      V_LOCK();
      LOWORD(v30) = -32456;
      HIWORD(v30) = (unsigned int)"no %d res_init error" >> 16;
      logfmt_raw(v36, 0x1000u, 0, v30);
      V_UNLOCK();
      v25 = g_zc;
      v26 = 20;
      v27 = 169;
    }
LABEL_24:
    LOWORD(v28) = 32512;
    HIWORD(v28) = (unsigned int)"stratum_check" >> 16;
    zlog(v25, v28, 148, "stratum_connect", 15, v27, v26, v36);
    goto LABEL_4;
  }
  *(_DWORD *)&addr.sa_data[2] = inet_addr(cp);
LABEL_10:
  addr.sa_family = 2;
  v12 = *(_DWORD *)(a1 + 36);
  *(_WORD *)addr.sa_data = __rev16(v31);
  if ( connect(v12, &addr, 0x10u) >= 0 )
  {
    keep_sockalive(*(_DWORD *)(a1 + 36));
  }
  else
  {
    if ( dword_1955B4 <= 3 )
    {
      V_LOCK();
      v13 = _errno_location();
      v14 = strerror(*v13);
      LOWORD(v15) = -32432;
      HIWORD(v15) = (unsigned int)"ip address config error" >> 16;
      logfmt_raw(v36, 0x1000u, 0, v15, v14);
      V_UNLOCK();
      LOWORD(v16) = 32512;
      HIWORD(v16) = (unsigned int)"stratum_check" >> 16;
      zlog(g_zc, v16, 148, "stratum_connect", 15, 197, 100, v36);
    }
    server_port_from_url = 0;
    close(*(_DWORD *)(a1 + 36));
    *(_DWORD *)(a1 + 36) = -1;
  }
LABEL_4:
  pthread_mutex_unlock(v1);
  return server_port_from_url;
}
