void *machine_runtime_ctrl_ks5_2382()
{
  _DWORD s[32]; // [sp+4h] [bp-88h] BYREF
  void *dest; // [sp+84h] [bp-8h]

  memset(s, 0, sizeof(s));
  s[0] = 617200;
  s[1] = 618232;
  s[2] = get_working_voltage_base;
  s[3] = start_voltage_monitor_base;
  s[6] = 618856;
  s[7] = set_voltage_base;
  s[8] = start_freq_compensate_thread_base;
  s[9] = 617700;
  s[10] = set_baud_base;
  s[11] = set_frequency_with_voltage_ks5;
  s[12] = start_mining_ks5;
  s[13] = stop_mining_base;
  s[14] = reset_mining_base;
  s[15] = check_asic_num_base;
  s[16] = check_bringup_temperature_base;
  s[19] = 35;
  s[20] = &stru_1C200;
  s[21] = 3000000;
  s[22] = 20;
  s[24] = 1500;
  s[25] = 200000;
  s[26] = 1143930880;
  s[28] = 1065353216;
  s[29] = "/config/sn";
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
