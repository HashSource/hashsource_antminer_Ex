int create_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  int v2; // r3
  int v3; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r8
  int v13; // r5
  const char *v14; // r6
  bool v15; // zf
  bool v16; // r0
  int v17; // r3
  int v18; // r1
  char *all_created_runtime; // r0
  int v20; // r3
  char *v21; // r4
  int v22; // t1
  int v23; // r3
  int v24; // r1
  const char *v25; // r1
  int v26; // [sp+14h] [bp-1010h]
  _DWORD v27[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    LOWORD(v2) = 31420;
    HIWORD(v2) = (unsigned int)"tum+tcp://%s" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = 25608;
    HIWORD(v3) = (unsigned int)"read to low priority" >> 16;
    zlog(g_zc, v3, 154, "create_pool_connect", 19, 153, 100, v27);
    return 1;
  }
  else
  {
    v1 = 60;
    do
    {
      sleep(1u);
      if ( pools_active )
        return 0;
      --v1;
    }
    while ( v1 );
    V_LOCK();
    LOWORD(v5) = 25972;
    HIWORD(v5) = (unsigned int)", exiting and restart." >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 25608;
    HIWORD(v6) = (unsigned int)"read to low priority" >> 16;
    zlog(g_zc, v6, 154, "create_pool_connect", 19, 165, 100, v27);
    V_LOCK();
    LOWORD(v7) = 26032;
    HIWORD(v7) = (unsigned int)"used to get work from." >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = 25608;
    HIWORD(v8) = (unsigned int)"read to low priority" >> 16;
    zlog(g_zc, v8, 154, "create_pool_connect", 19, 166, 100, v27);
    V_LOCK();
    LOWORD(v9) = 26108;
    HIWORD(v9) = (unsigned int)"servers you have input." >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v10) = 25608;
    HIWORD(v10) = (unsigned int)"read to low priority" >> 16;
    zlog(g_zc, v10, 154, "create_pool_connect", 19, 167, 100, v27);
    if ( total_pools > 0 )
    {
      LOWORD(v11) = 25848;
      HIWORD(v11) = (unsigned int)"thread create failed" >> 16;
      v26 = v11;
      LOWORD(v11) = 25608;
      HIWORD(v11) = (unsigned int)"read to low priority" >> 16;
      v12 = v11;
      do
      {
        v13 = *(_DWORD *)(pools + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v27,
          0x1000u,
          0,
          v26,
          *(_DWORD *)v13,
          *(_DWORD *)(v13 + 12),
          *(_DWORD *)(v13 + 16),
          *(_DWORD *)(v13 + 20));
        V_UNLOCK();
        zlog(g_zc, v12, 154, "create_pool_connect", 19, 173, 80, v27);
        if ( *(_DWORD *)(v13 + 20) )
        {
          v14 = *(const char **)(v13 + 16);
          if ( v14 )
          {
            v15 = strstr(*(const char **)(v13 + 20), "stats") == 0;
            v16 = 1;
            if ( v15 )
            {
              LOWORD(v25) = 25892;
              HIWORD(v25) = (unsigned int)"er: %s  Password: %s" >> 16;
              v16 = strcmp(v14, v25) == 0;
            }
            *(_BYTE *)(v13 + 1648) = v16;
          }
        }
        ++v1;
      }
      while ( total_pools > v1 );
      pool_stratum_threads = 0;
    }
    V_LOCK();
    LOWORD(v17) = 25904;
    HIWORD(v17) = (unsigned int)"word: %s" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v18) = 25608;
    HIWORD(v18) = (unsigned int)"read to low priority" >> 16;
    zlog(g_zc, v18, 154, "create_pool_connect", 19, 179, 100, v27);
    v27[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v27);
    v20 = v27[0];
    if ( v27[0] > 0 )
    {
      v21 = all_created_runtime - 4;
      do
      {
        v22 = *((_DWORD *)v21 + 1);
        v21 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v22 + 20))();
        (*(void (**)(void))(*(_DWORD *)v21 + 28))();
        v20 = v27[0];
      }
      while ( pool_stratum_threads < v27[0] );
    }
    if ( v20 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !pools_active )
      sleep(1u);
    V_LOCK();
    LOWORD(v23) = 25932;
    HIWORD(v23) = (unsigned int)"ervers could be used!" >> 16;
    logfmt_raw((char *)v27, 0x1000u, 0, v23);
    V_UNLOCK();
    LOWORD(v24) = 25608;
    HIWORD(v24) = (unsigned int)"read to low priority" >> 16;
    zlog(g_zc, v24, 154, "create_pool_connect", 19, 181, 80, v27);
    return 0;
  }
}
