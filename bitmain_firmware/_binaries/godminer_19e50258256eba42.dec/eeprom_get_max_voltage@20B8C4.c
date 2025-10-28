int eeprom_get_max_voltage()
{
  char v2[12]; // [sp+10h] [bp-180Ch] BYREF
  _BYTE v3[12]; // [sp+810h] [bp-100Ch] BYREF
  int v4; // [sp+1810h] [bp-Ch]
  int i; // [sp+1814h] [bp-8h]

  v4 = 0;
  if ( dword_C25F58 && *(_BYTE *)(dword_C25F58 + 80) )
  {
    for ( i = 0; i < dword_C25F9C; ++i )
    {
      if ( v4 < *(unsigned __int16 *)(*(_DWORD *)(dword_C25F58 + 4 * dword_C25F5C[i]) + 39) )
        v4 = *(unsigned __int16 *)(*(_DWORD *)(dword_C25F58 + 4 * dword_C25F5C[i]) + 39);
    }
    return v4;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: eeprom is not ready", "eeprom_get_max_voltage");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "eeprom_get_max_voltage",
      22,
      1117,
      100,
      v3);
    return -1;
  }
}
