int __fastcall api_get_eeprom_sweep_result(int a1, void *a2, unsigned __int8 a3)
{
  char v5[8]; // [sp+24h] [bp-1888h] BYREF
  _BYTE v6[8]; // [sp+824h] [bp-1088h] BYREF
  _BYTE src[128]; // [sp+1824h] [bp-88h] BYREF
  unsigned int i; // [sp+18A4h] [bp-8h]

  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    for ( i = 0; i <= 0x7F; ++i )
      src[i] = *(_BYTE *)(*(_DWORD *)(dword_C25F58 + 4 * dword_C25F5C[a1]) + i + 63);
    memcpy(a2, src, a3);
    return 0;
  }
  else
  {
    snprintf(
      v5,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_sweep_result",
      dword_C25F5C[a1]);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_result",
      27,
      1431,
      100,
      v6);
    return -1;
  }
}
