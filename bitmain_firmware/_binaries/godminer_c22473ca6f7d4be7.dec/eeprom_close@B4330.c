int *__fastcall eeprom_close(unsigned int a1)
{
  unsigned int v1; // r4
  int *v2; // r3
  int *result; // r0
  const char *v4; // r2
  _DWORD *v5; // r3
  int v6; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v4) = -4432;
    HIWORD(v4) = (unsigned int)"ed to i2c lock" >> 16;
    snprintf(s, 0x800u, v4, "eeprom_close", a1);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v5) = -14512;
    HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v6) = -4688;
    HIWORD(v6) = (unsigned int)"n_master/backend/device/hal/platform/zynqmp/zynqmp_iic.c" >> 16;
    return (int *)zlog(*v5, v6, 163, "eeprom_close", 12, 74, 100, v8);
  }
  else
  {
    v1 = 2 * a1;
    v2 = &dword_16C55C[2 * a1];
    result = (int *)v2[18];
    if ( result || v2[19] )
    {
      iic_uninit((int)result);
      result = &dword_16C55C[v1];
      result[18] = 0;
      result[19] = 0;
    }
  }
  return result;
}
