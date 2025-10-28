int sub_2C12C()
{
  int v0; // r4
  const char *eeprom_chip_ft; // r7
  int eeprom_reserved; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v8; // [sp+14h] [bp-1010h] BYREF
  char v9[8]; // [sp+18h] [bp-100Ch] BYREF
  _BYTE v10[4100]; // [sp+20h] [bp-1004h] BYREF

  v0 = 0;
  v8 = 0;
  get_all_created_runtime(&v8);
  if ( v8 <= 0 )
  {
LABEL_13:
    v6 = 1;
  }
  else
  {
    while ( 1 )
    {
      eeprom_chip_ft = (const char *)api_get_eeprom_chip_ft(v0);
      eeprom_reserved = api_get_eeprom_reserved(v0, v9);
      v9[5] = 0;
      v3 = V_LOCK(eeprom_reserved);
      v4 = dev_ctrl(v3);
      (*(void (__fastcall **)(int))(v4 + 40))(v0++);
      v5 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "select_working_voltage_strategy",
        31,
        1079,
        60,
        v10);
      if ( strncmp(eeprom_chip_ft, "F1V12B2", 7u) || strncmp(v9, "B20", 3u) )
        break;
      if ( v0 >= v8 )
        goto LABEL_13;
    }
    v6 = 0;
  }
  if ( opt_custom_voltage == 1470 )
  {
    if ( opt_custom_freq != 1850 )
      return set_working_voltage_strategy(1, v6);
    return set_working_voltage_strategy(2, v6);
  }
  else
  {
    if ( opt_custom_voltage != 1460 )
      return set_working_voltage_strategy(1, v6);
    if ( opt_custom_freq != 1775 )
      v6 = 0;
    if ( !v6 )
      return set_working_voltage_strategy(1, v6);
    return set_working_voltage_strategy(3, v6);
  }
}
