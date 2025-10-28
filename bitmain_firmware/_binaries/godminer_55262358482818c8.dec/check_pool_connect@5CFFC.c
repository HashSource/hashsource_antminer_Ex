int check_pool_connect()
{
  int v1; // r3
  int v2; // r1
  int v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r1
  int v7; // r10
  int v8; // r7
  int v9; // r4
  int v10; // r11
  bool v11; // zf
  bool v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r5
  int i; // r7
  int v17; // r4
  int v18; // r3
  int v19; // r1
  const char *v20; // r1
  char *s1; // [sp+14h] [bp-1008h]
  char v22[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( check_pools_valid() > 0 )
    return 0;
  V_LOCK();
  LOWORD(v1) = 25972;
  HIWORD(v1) = (unsigned int)", exiting and restart." >> 16;
  logfmt_raw(v22, 0x1000u, 0, v1);
  V_UNLOCK();
  LOWORD(v2) = 25608;
  HIWORD(v2) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v2, 154, "check_pool_connect", 18, 202, 100, v22);
  V_LOCK();
  LOWORD(v3) = 26032;
  HIWORD(v3) = (unsigned int)"used to get work from." >> 16;
  logfmt_raw(v22, 0x1000u, 0, v3);
  V_UNLOCK();
  LOWORD(v4) = 25608;
  HIWORD(v4) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v4, 154, "check_pool_connect", 18, 203, 100, v22);
  V_LOCK();
  LOWORD(v5) = 26108;
  HIWORD(v5) = (unsigned int)"servers you have input." >> 16;
  logfmt_raw(v22, 0x1000u, 0, v5);
  V_UNLOCK();
  LOWORD(v6) = 25608;
  HIWORD(v6) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v6, 154, "check_pool_connect", 18, 204, 100, v22);
  if ( total_pools > 0 )
  {
    LOWORD(v7) = 25848;
    LOWORD(v8) = 25608;
    v9 = 0;
    do
    {
      V_LOCK();
      HIWORD(v7) = (unsigned int)"thread create failed" >> 16;
      logfmt_raw(
        v22,
        0x1000u,
        0,
        v7,
        **(_DWORD **)(pools + 4 * v9),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v9) + 12),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v9) + 16),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v9) + 20));
      V_UNLOCK();
      HIWORD(v8) = (unsigned int)"read to low priority" >> 16;
      zlog(g_zc, v8, 154, "check_pool_connect", 18, 208, 80, v22);
      v10 = *(_DWORD *)(pools + 4 * v9);
      if ( *(_DWORD *)(v10 + 20) )
      {
        s1 = *(char **)(v10 + 16);
        if ( s1 )
        {
          v11 = strstr(*(const char **)(v10 + 20), "stats") == 0;
          v12 = 1;
          if ( v11 )
          {
            LOWORD(v20) = 25892;
            HIWORD(v20) = (unsigned int)"er: %s  Password: %s" >> 16;
            v12 = strcmp(s1, v20) == 0;
          }
          *(_BYTE *)(v10 + 1648) = v12;
        }
      }
      ++v9;
    }
    while ( total_pools > v9 );
  }
  V_LOCK();
  LOWORD(v13) = 25904;
  HIWORD(v13) = (unsigned int)"word: %s" >> 16;
  logfmt_raw(v22, 0x1000u, 0, v13);
  V_UNLOCK();
  LOWORD(v14) = 25608;
  HIWORD(v14) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v14, 154, "check_pool_connect", 18, 212, 100, v22);
  if ( !pools_active )
  {
    v15 = 60;
    for ( i = 1; ; v15 = 60 * i )
    {
      v17 = 0;
      do
      {
        ++v17;
        sleep(1u);
      }
      while ( !pools_active && v17 != v15 );
      if ( i >= 19 )
        i = 19;
      check_pools_valid();
      ++i;
      if ( pools_active )
        break;
    }
  }
  V_LOCK();
  LOWORD(v18) = 26236;
  HIWORD(v18) = (unsigned int)"rk was disconnected." >> 16;
  logfmt_raw(v22, 0x1000u, 0, v18);
  V_UNLOCK();
  LOWORD(v19) = 25608;
  HIWORD(v19) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v19, 154, "check_pool_connect", 18, 225, 80, v22);
  return 0;
}
