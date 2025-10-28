void *machine_runtime_ctrl_eth_2282()
{
  void *v0; // r0
  void *v1; // r4
  int v2; // r3
  int v4; // r1
  const char *v5; // r0
  _DWORD v6[30]; // [sp+0h] [bp-78h] BYREF

  memset(&v6[4], 0, 0x60u);
  v0 = calloc(1u, 0x78u);
  v1 = v0;
  if ( v0 )
  {
    v6[0] = sub_4F6F0;
    v6[1] = sub_4F6F0;
    v6[2] = get_working_voltage_base;
    v6[3] = start_voltage_monitor_base;
    v6[6] = calc_startup_fan_pwm_base;
    v6[7] = set_voltage_base;
    v6[8] = start_freq_compensate_thread_base;
    v6[9] = calc_freq_compensate_by_temp_base;
    v6[10] = set_baud_base;
    v6[11] = set_frequency_with_voltage_base;
    v6[12] = start_mining_base;
    v6[13] = stop_mining_base;
    v6[14] = reset_mining_base;
    v6[15] = check_asic_num_base;
    LOWORD(v2) = -17684;
    HIWORD(v2) = (unsigned int)"dcr_1727.c" >> 16;
    v6[16] = check_bringup_temperature_base;
    v6[25] = &loc_30D40;
    v6[29] = v2;
    v6[28] = 1065353216;
    v6[26] = 1140457472;
    v6[19] = 35;
    v6[20] = 9600;
    v6[21] = 9600;
    v6[22] = 20;
    v6[24] = 1480;
    memcpy(v0, v6, 0x78u);
  }
  else
  {
    LOWORD(v4) = -18344;
    LOWORD(v5) = 28808;
    HIWORD(v4) = (unsigned int)&unk_14B840 >> 16;
    HIWORD(v5) = (unsigned int)"." >> 16;
    printf(v5, v4);
  }
  return v1;
}
