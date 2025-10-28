int *__fastcall eeprom_close(unsigned int a1)
{
  unsigned int v1; // r4
  int *v2; // r3
  int *result; // r0
  const char *v4; // r2
  int v5; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v4) = 23772;
    HIWORD(v4) = (unsigned int)" %d." >> 16;
    snprintf(s, 0x800u, v4, "eeprom_close", a1);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v5) = 23232;
    HIWORD(v5) = (unsigned int)" not ready, chain = %d." >> 16;
    return (int *)zlog(g_zc, v5, 173, "eeprom_close", 12, 74, 100, v7);
  }
  else
  {
    v1 = 2 * a1;
    v2 = &dword_1B3628[2 * a1];
    result = (int *)v2[18];
    if ( result || v2[19] )
    {
      iic_uninit((int)result);
      result = &dword_1B3628[v1];
      result[18] = 0;
      result[19] = 0;
    }
  }
  return result;
}
