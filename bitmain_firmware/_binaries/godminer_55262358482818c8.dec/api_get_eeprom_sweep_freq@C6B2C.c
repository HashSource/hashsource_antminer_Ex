int __fastcall api_get_eeprom_sweep_freq(int a1)
{
  const char *v1; // r2
  int v2; // r1
  int v3; // r3
  int v4; // r1
  int *v6; // r5
  int v7; // r3
  int v8; // r1
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v10[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B3628[0] && *(_BYTE *)(dword_1B3628[0] + 80) )
  {
    v6 = &dword_1B3628[a1];
    V_LOCK();
    LOWORD(v7) = 25212;
    HIWORD(v7) = (unsigned int)"eeprom sweep freq fail" >> 16;
    logfmt_raw(v10, 0x1000u, 0, v7, *(unsigned __int16 *)(*(_DWORD *)(dword_1B3628[0] + 4 * v6[2]) + 187));
    V_UNLOCK();
    LOWORD(v8) = 23232;
    HIWORD(v8) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v8, 173, "api_get_eeprom_sweep_freq", 25, 1270, 20, v10);
    return *(__int16 *)(*(_DWORD *)(dword_1B3628[0] + 4 * v6[2]) + 187);
  }
  else
  {
    LOWORD(v1) = 23812;
    HIWORD(v1) = (unsigned int)"aram, input chain is %d" >> 16;
    snprintf(s, 0x800u, v1, "api_get_eeprom_sweep_freq");
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v2) = 23232;
    HIWORD(v2) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v2, 173, "api_get_eeprom_sweep_freq", 25, 1265, 20, v10);
    V_LOCK();
    LOWORD(v3) = 25184;
    HIWORD(v3) = (unsigned int)"te in eeprom is invalid" >> 16;
    logfmt_raw(v10, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 23232;
    HIWORD(v4) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v4, 173, "api_get_eeprom_sweep_freq", 25, 1266, 60, v10);
    return 0;
  }
}
