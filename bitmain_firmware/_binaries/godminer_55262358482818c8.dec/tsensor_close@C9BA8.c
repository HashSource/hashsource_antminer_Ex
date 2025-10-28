int __fastcall tsensor_close(unsigned int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r5
  unsigned int v4; // r4
  int v5; // r0
  const char *v7; // r2
  int v8; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v10[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v7) = 26892;
    HIWORD(v7) = (unsigned int)"write" >> 16;
    snprintf(s, 0x800u, v7, a1);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v8) = 26932;
    HIWORD(v8) = (unsigned int)"ram, input chain is %d" >> 16;
    zlog(g_zc, v8, 175, "tsensor_close", 13, 91, 100, v10);
    return -2147482111;
  }
  else
  {
    v2 = 16 * a1;
    v3 = 68 * a1;
    if ( byte_1B37E0[68 * a1] )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD *)&byte_1B37E0[8 * v4 + 8 + v3];
        if ( v5 )
          iic_uninit(v5);
        v4 = (unsigned __int8)(v4 + 1);
      }
      while ( byte_1B37E0[v3] > v4 );
    }
    return (int)memset(&byte_1B37E0[4 * v2 + 4 * a1], 0, 0x44u);
  }
}
