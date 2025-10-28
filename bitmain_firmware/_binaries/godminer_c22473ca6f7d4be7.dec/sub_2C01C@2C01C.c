int sub_2C01C()
{
  int v0; // r4
  const char *eeprom_chip_ft; // r7
  int v2; // r0
  int v3; // r0
  int v4; // r0
  _BOOL4 v5; // r1
  int v6; // r2
  int v8; // [sp+14h] [bp-1010h] BYREF
  char v9[8]; // [sp+18h] [bp-100Ch] BYREF
  char v10[4100]; // [sp+20h] [bp-1004h] BYREF

  v0 = 0;
  v8 = 0;
  get_all_created_runtime(&v8);
  if ( v8 <= 0 )
  {
LABEL_14:
    v5 = 1;
  }
  else
  {
    while ( 1 )
    {
      eeprom_chip_ft = (const char *)api_get_eeprom_chip_ft(v0);
      api_get_eeprom_reserved(v0, v9);
      v9[5] = 0;
      v2 = V_LOCK();
      v3 = dev_ctrl(v2);
      v4 = (*(int (__fastcall **)(int))(v3 + 40))(v0++);
      logfmt_raw(v10, 0x1000u, 0, "Chain [%d] ft %s reserved %s", v4, eeprom_chip_ft, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "select_working_voltage_strategy",
        31,
        1076,
        60,
        v10);
      if ( strncmp(eeprom_chip_ft, "F1V12B2", 7u) || strncmp(v9, "B20", 3u) )
        break;
      if ( v0 >= v8 )
        goto LABEL_14;
    }
    v5 = 0;
  }
  v6 = opt_custom_voltage;
  if ( opt_custom_voltage == 1470 )
  {
    v6 = opt_custom_freq;
    if ( opt_custom_freq != 1850 )
      return set_working_voltage_strategy(1, v5, v6);
    return set_working_voltage_strategy(2, v5, 1850);
  }
  else
  {
    if ( opt_custom_voltage != 1460 )
      return set_working_voltage_strategy(1, v5, v6);
    v6 = opt_custom_freq;
    v5 = opt_custom_freq == 1775 && v5;
    if ( !v5 )
      return set_working_voltage_strategy(1, v5, v6);
    return set_working_voltage_strategy(3, v5, opt_custom_freq);
  }
}
