int __fastcall set_voltage_and_freq_by_eeprom_chip_ft(_DWORD *a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r2
  _BYTE v8[28]; // [sp+18h] [bp-119Ch] BYREF
  char s[384]; // [sp+1018h] [bp-19Ch] BYREF
  _DWORD v10[2]; // [sp+1198h] [bp-1Ch] BYREF
  int eeprom_chip_bin; // [sp+11A0h] [bp-14h]
  const char *eeprom_chip_ft; // [sp+11A4h] [bp-10h]
  int j; // [sp+11A8h] [bp-Ch]
  int i; // [sp+11ACh] [bp-8h]

  eeprom_chip_ft = 0;
  eeprom_chip_bin = 0;
  *a1 = 0;
  *a2 = 0xFFFF;
  v10[1] = get_all_created_runtime(v10);
  for ( i = 0; i < v10[0]; ++i )
  {
    eeprom_chip_ft = (const char *)api_get_eeprom_chip_ft(i);
    eeprom_chip_bin = api_get_eeprom_chip_bin(i);
    snprintf(s, 0x100u, "%s BIN%d", eeprom_chip_ft, eeprom_chip_bin);
    if ( sub_9DA40(s, &s[4 * i + 320], &s[4 * i + 256]) )
      return 33;
  }
  for ( j = 0; j < v10[0]; ++j )
  {
    v3 = *(_DWORD *)&s[4 * j + 320];
    if ( v3 < *a1 )
      v3 = *a1;
    *a1 = v3;
    v4 = *a2;
    if ( *a2 >= *(_DWORD *)&s[4 * j + 256] )
      v4 = *(_DWORD *)&s[4 * j + 256];
    *a2 = v4;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "%s vol:%d,freq:%d", "set_voltage_and_freq_by_eeprom_chip_ft", *a1, *a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_voltage_and_freq_by_eeprom_chip_ft",
    38,
    1100,
    40,
    v8);
  return 0;
}
