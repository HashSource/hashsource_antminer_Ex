void *machine_runtime_ctrl_ltc_1489()
{
  _BYTE v2[8]; // [sp+14h] [bp-1088h] BYREF
  _DWORD s[32]; // [sp+1014h] [bp-88h] BYREF
  void *dest; // [sp+1094h] [bp-8h]

  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "machine_runtime_ctrl_ltc_1489() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v2);
  memset(s, 0, sizeof(s));
  s[0] = 624292;
  s[1] = 624332;
  s[2] = get_working_voltage_base;
  s[3] = start_voltage_monitor_base;
  s[7] = set_voltage_base;
  s[8] = start_freq_compensate_thread_base;
  s[9] = calc_freq_compensate_by_temp_base;
  s[10] = set_baud_base;
  s[11] = set_frequency_with_voltage_base;
  s[12] = start_mining_base;
  s[13] = stop_mining_base;
  s[14] = reset_mining_base;
  s[15] = check_asic_num_base;
  s[16] = check_bringup_temperature_base;
  s[20] = &stru_1C200;
  s[21] = 3000000;
  s[24] = 1680;
  s[29] = "/config/sn";
  dest = calloc(1u, 0x80u);
  if ( dest )
  {
    memcpy(dest, s, 0x80u);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "machine_runtime_ctrl_ltc_1489() out");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      179,
      "machine_runtime_ctrl_ltc_1489",
      29,
      71,
      40,
      v2);
    return dest;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
    return 0;
  }
}
