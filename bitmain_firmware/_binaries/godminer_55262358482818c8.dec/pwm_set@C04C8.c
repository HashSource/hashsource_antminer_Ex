int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  const char *v3; // r2
  int v4; // r1
  unsigned int v6; // r5
  int *v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r1
  _DWORD s[2]; // [sp+10h] [bp-1804h] BYREF
  __int16 v13; // [sp+18h] [bp-17FCh]
  char v14[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v7) = 32188;
    HIWORD(v7) = (unsigned int)"failed!" >> 16;
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    s[0] = v8;
    s[1] = v9;
    v13 = v10;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v11) = 20236;
    HIWORD(v11) = (unsigned int)"uninit" >> 16;
    zlog(g_zc, v11, 174, "pwm_set", 7, 62, 100, v14);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      if ( a2 >= 0x64 )
        a2 = 100;
      v6 = (unsigned __int16)(dword_1B32D8[0] * (100 - a2) / 0x64) | ((dword_1B32D8[0] * a2 / 0x64) << 16);
      fpga_write(132, v6);
      fpga_write(160, v6);
      return v2;
    }
    else
    {
      LOWORD(v3) = 20412;
      HIWORD(v3) = (unsigned int)"atform/7020/7020_pwm.c" >> 16;
      snprintf((char *)s, 0x800u, v3, a1 - 1);
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v4) = 20236;
      HIWORD(v4) = (unsigned int)"uninit" >> 16;
      zlog(g_zc, v4, 174, "pwm_set", 7, 81, 100, v14);
      return 0;
    }
  }
}
