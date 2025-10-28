void *machine_runtime_ctrl_eth_2282()
{
  _DWORD s[32]; // [sp+4h] [bp-88h] BYREF
  void *dest; // [sp+84h] [bp-8h]

  memset(s, 0, sizeof(s));
  s[0] = 496584;
  s[1] = 496808;
  s[2] = get_working_voltage_base;
  s[3] = start_voltage_monitor_eth_2282;
  s[4] = start_temp_monitor_base;
  s[6] = calc_startup_fan_pwm_eth_2282;
  s[7] = 498248;
  s[8] = start_freq_compensate_thread_base;
  s[9] = calc_freq_compensate_by_temp_base;
  s[10] = set_baud_base;
  s[11] = set_frequency_with_voltage_base;
  s[12] = start_mining_base;
  s[13] = stop_mining_base;
  s[14] = reset_mining_base;
  s[15] = check_asic_num_base;
  s[16] = check_bringup_temperature_base;
  s[19] = 35;
  s[20] = &stru_1C200;
  s[21] = &unk_BEBC20;
  s[22] = 20;
  s[24] = 1480;
  s[25] = 200000;
  s[26] = 1140457472;
  s[28] = 1065353216;
  s[29] = "/config/sn";
  s[30] = 680;
  s[31] = 680;
  dest = calloc(1u, 0x80u);
  if ( dest )
  {
    memcpy(dest, s, 0x80u);
    return dest;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
    return 0;
  }
}
