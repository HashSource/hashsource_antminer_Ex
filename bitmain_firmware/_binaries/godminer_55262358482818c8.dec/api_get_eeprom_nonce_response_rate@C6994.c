int __fastcall api_get_eeprom_nonce_response_rate(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  const char *v4; // r2
  int v5; // r1
  const char *v6; // r2
  int v7; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v9[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = dword_1B3628[a1 + 2];
  if ( dword_1B3628[0] && *(_BYTE *)(dword_1B3628[0] + 80) )
  {
    if ( a2 )
    {
      result = 0;
      *a2 = *(_DWORD *)(*(_DWORD *)(dword_1B3628[0] + 4 * v2) + 39);
    }
    else
    {
      LOWORD(v6) = 25128;
      HIWORD(v6) = (unsigned int)"freq level not match" >> 16;
      snprintf(s, 0x800u, v6, "api_get_eeprom_nonce_response_rate", dword_1B3628[a1 + 2]);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v7) = 23232;
      HIWORD(v7) = (unsigned int)" not ready, chain = %d." >> 16;
      zlog(g_zc, v7, 173, "api_get_eeprom_nonce_response_rate", 34, 1249, 100, v9);
      return -2;
    }
  }
  else
  {
    LOWORD(v4) = 23188;
    HIWORD(v4) = (unsigned int)"get_eeprom_asic_freqs" >> 16;
    snprintf(s, 0x800u, v4, "api_get_eeprom_nonce_response_rate", dword_1B3628[a1 + 2]);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v5) = 23232;
    HIWORD(v5) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v5, 173, "api_get_eeprom_nonce_response_rate", 34, 1240, 100, v9);
    return -1;
  }
  return result;
}
