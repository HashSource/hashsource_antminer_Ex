int get_hash_on_plug()
{
  int v0; // r4
  int v1; // r8
  int v2; // r5
  const char *v3; // r10
  int v4; // r0
  int v5; // r7
  int v6; // r1
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r12
  int v14; // r1
  int v15; // [sp+14h] [bp-1808h] BYREF
  _DWORD s[510]; // [sp+18h] [bp-1804h] BYREF
  char v17[4100]; // [sp+818h] [bp-1004h] BYREF

  v0 = 0;
  v15 = 0;
  if ( platform_inited[0] )
  {
    v1 = hal_chain_max_num();
    if ( v1 <= 0 )
      return 0;
    LOWORD(v3) = 17688;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v15 = 0;
        v4 = hal_chain_plug_addr(v0);
        v5 = v4;
        if ( v4 < 0 )
          break;
        gpio_export(v4);
        gpio_direction(v5, 0);
        gpio_read(v5, &v15);
        v2 |= v15 << v0++;
        if ( v1 == v0 )
          return v2;
      }
      HIWORD(v3) = (unsigned int)"led" >> 16;
      snprintf((char *)s, 0x800u, v3, v0);
      V_LOCK();
      ++v0;
      logfmt_raw(v17, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v6) = 17424;
      HIWORD(v6) = (unsigned int)"_control" >> 16;
      zlog(g_zc, v6, 177, "get_hash_on_plug", 16, 326, 80, v17);
    }
    while ( v1 != v0 );
    return v2;
  }
  else
  {
    LOWORD(v8) = 17944;
    HIWORD(v8) = (unsigned int)" end==================" >> 16;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v12 = v8[3];
    v13 = v8[4];
    s[0] = v9;
    s[1] = v10;
    s[2] = v11;
    s[3] = v12;
    s[4] = v13;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v14) = 17424;
    HIWORD(v14) = (unsigned int)"_control" >> 16;
    zlog(g_zc, v14, 177, "get_hash_on_plug", 16, 315, 100, v17);
    return 0;
  }
}
