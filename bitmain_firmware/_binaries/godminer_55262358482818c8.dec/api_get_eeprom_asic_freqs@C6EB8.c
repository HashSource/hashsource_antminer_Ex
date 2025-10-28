int __fastcall api_get_eeprom_asic_freqs(int a1, void *dest, float *a3)
{
  int v4; // lr
  int v5; // r0
  char *v6; // r3
  int v7; // r1
  float v8; // s13
  float v9; // s14
  int v10; // t1
  int v11; // r5
  const char *v13; // r2
  int v14; // r1
  const char *v15; // r2
  int v16; // r1
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  char v19[4096]; // [sp+A10h] [bp-1000h] BYREF

  v4 = dword_1B3628[a1 + 2];
  if ( dword_1B3628[0] && *(_BYTE *)(dword_1B3628[0] + 80) )
  {
    v5 = *(_DWORD *)(dword_1B3628[0] + 4 * v4);
    v6 = src;
    v7 = v5 + 58;
    v8 = (float)*(unsigned __int16 *)(v5 + 37);
    v9 = (double)*(unsigned __int16 *)(v5 + 57) * 0.01;
    do
    {
      v10 = *(unsigned __int8 *)++v7;
      *(float *)v6 = v8 + (float)((float)v10 * v9);
      v6 += 4;
    }
    while ( s != v6 );
    v11 = (int)a3;
    if ( a3 )
      v11 = 1;
    if ( !dest )
      v11 = 0;
    if ( v11 )
    {
      *a3 = v9;
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      LOWORD(v15) = 25288;
      HIWORD(v15) = (unsigned int)" ready, chain = %d.\n" >> 16;
      snprintf(s, 0x800u, v15, "api_get_eeprom_asic_freqs", v4);
      V_LOCK();
      logfmt_raw(v19, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v16) = 23232;
      HIWORD(v16) = (unsigned int)" not ready, chain = %d." >> 16;
      zlog(g_zc, v16, 173, "api_get_eeprom_asic_freqs", 25, 1390, 100, v19);
      return -2;
    }
  }
  else
  {
    LOWORD(v13) = 25240;
    HIWORD(v13) = (unsigned int)"eeprom sweep freq: %hu" >> 16;
    snprintf(s, 0x800u, v13, "api_get_eeprom_asic_freqs", dword_1B3628[a1 + 2]);
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v14) = 23232;
    HIWORD(v14) = (unsigned int)" not ready, chain = %d." >> 16;
    zlog(g_zc, v14, 173, "api_get_eeprom_asic_freqs", 25, 1371, 100, v19);
    return -1;
  }
}
