char *__fastcall stratum_recv_line(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r7
  char *spins; // r10
  size_t v4; // r0
  const char *v5; // r1
  signed int v6; // r5
  char *v7; // r0
  char *v8; // r6
  size_t v9; // r0
  _BYTE *v10; // r3
  int v12; // r9
  ssize_t v13; // r10
  int *v14; // r11
  int v15; // r1
  int v16; // r3
  int v17; // r0
  int v18; // r2
  int lock; // r2
  char *v20; // r1
  int v21; // r4
  int v22; // r1
  int v23; // r3
  int v24; // r1
  char *v25; // r1
  int v26; // r1
  int v27; // r3
  int v28; // r1
  time_t v29; // [sp+2Ch] [bp-5028h] BYREF
  _DWORD v30[7]; // [sp+30h] [bp-5024h] BYREF
  int v31; // [sp+4Ch] [bp-5008h]
  _DWORD v32[7]; // [sp+50h] [bp-5004h] BYREF
  int v33; // [sp+6Ch] [bp-4FE8h]
  char v34[16388]; // [sp+1050h] [bp-4004h] BYREF

  v1 = a1 + 2;
  pthread_mutex_lock(a1 + 2);
  spins = (char *)a1[1].__spins;
  if ( !strchr(spins, 10) && a1[1].__kind != -1 )
  {
    LOWORD(v12) = 32696;
    time(&v29);
    while ( 1 )
    {
      memset(v34, 0, 0x4000u);
      v13 = recv(a1[1].__kind, v34, 0x3FFCu, 0);
      if ( !v13 )
      {
        V_LOCK();
        LOWORD(v23) = 32664;
        HIWORD(v23) = (unsigned int)"ew/stratum_handler.c" >> 16;
        logfmt_raw((char *)v32, 0x1000u, 0, v23);
        V_UNLOCK();
        v17 = g_zc;
        v18 = 58;
        goto LABEL_20;
      }
      if ( v13 < 0 )
      {
        V_LOCK();
        v14 = _errno_location();
        HIWORD(v12) = (unsigned int)"recv_line read 0 bytes" >> 16;
        logfmt_raw((char *)v32, 0x1000u, 0, v12, v13, *v14);
        V_UNLOCK();
        LOWORD(v15) = 32512;
        HIWORD(v15) = (unsigned int)"stratum_check" >> 16;
        zlog(g_zc, v15, 148, "stratum_recv_line", 17, 63, 20, v32);
        if ( *v14 != 11 || !socket_full(a1[1].__kind, 1) )
        {
          V_LOCK();
          LOWORD(v16) = 32740;
          HIWORD(v16) = (unsigned int)"cv failed err %zd %d" >> 16;
          logfmt_raw((char *)v32, 0x1000u, 0, v16, *v14);
          V_UNLOCK();
          v17 = g_zc;
          v18 = 65;
LABEL_20:
          LOWORD(v24) = 32512;
          HIWORD(v24) = (unsigned int)"stratum_check" >> 16;
          zlog(v17, v24, 148, "stratum_recv_line", 17, v18, 20, v32);
          V_LOCK();
          LOWORD(v25) = 30344;
          HIWORD(v25) = (unsigned int)&off_147670 >> 16;
          V_INT((int)v30, v25, a1->__lock);
          logfmt_raw(
            v34,
            0x1000u,
            0,
            v31,
            v30[0],
            v30[1],
            v30[2],
            v30[3],
            v30[4],
            v30[5],
            v30[6],
            v31,
            "stratum_recv_line failed");
          V_UNLOCK();
          LOWORD(v26) = 32512;
          HIWORD(v26) = (unsigned int)"stratum_check" >> 16;
          zlog(g_zc, v26, 148, "stratum_recv_line", 17, 74, 20, v34);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append((int)a1, v34);
      }
      if ( time(0) - v29 > 59 )
        break;
      spins = (char *)a1[1].__spins;
      if ( strchr(spins, 10) )
        goto LABEL_2;
    }
    spins = (char *)a1[1].__spins;
  }
LABEL_2:
  v4 = strlen(spins);
  LOWORD(v5) = 28828;
  v6 = v4;
  HIWORD(v5) = (unsigned int)"d!" >> 16;
  v7 = strtok(spins, v5);
  if ( v7 )
  {
    v8 = _strdup(v7);
    v9 = strlen(v8);
    v10 = (_BYTE *)a1[1].__spins;
    if ( (int)(v9 + 1) < v6 )
      memmove(a1[1].__list.__next, &v10[v9 + 1], v6 - v9 + 1);
    else
      *v10 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK();
      lock = a1->__lock;
      LOWORD(v20) = 30344;
      HIWORD(v20) = (unsigned int)&off_147670 >> 16;
      LOWORD(v21) = -32656;
      V_INT((int)v32, v20, lock);
      HIWORD(v21) = (unsigned int)"ine-terminated string" >> 16;
      logfmt_raw(v34, 0x1000u, 0, v33, v32[0], v32[1], v32[2], v32[3], v32[4], v32[5], v32[6], v33, v21, v8);
      V_UNLOCK();
      LOWORD(v22) = 32512;
      HIWORD(v22) = (unsigned int)"stratum_check" >> 16;
      zlog(g_zc, v22, 148, "stratum_recv_line", 17, 97, 60, v34);
    }
    return v8;
  }
  else
  {
    V_LOCK();
    LOWORD(v27) = -32720;
    HIWORD(v27) = (unsigned int)"tum_recv_line failed" >> 16;
    logfmt_raw(v34, 0x1000u, 0, v27);
    V_UNLOCK();
    LOWORD(v28) = 32512;
    HIWORD(v28) = (unsigned int)"stratum_check" >> 16;
    zlog(g_zc, v28, 148, "stratum_recv_line", 17, 82, 100, v34);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
