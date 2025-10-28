void *machine_runtime_ctrl_eth_2280()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD v3[28]; // [sp+0h] [bp-74h] BYREF

  memset(&v3[4], 0, 0x58u);
  v0 = calloc(1u, 0x70u);
  v1 = v0;
  if ( v0 )
  {
    v3[0] = sub_4964C;
    v3[1] = sub_4964C;
    v3[2] = get_working_voltage_base;
    v3[3] = start_voltage_monitor_base;
    v3[6] = calc_startup_fan_pwm_base;
    v3[7] = set_voltage_base;
    v3[8] = set_baud_base;
    v3[9] = set_frequency_with_voltage_base;
    v3[10] = start_mining_base;
    v3[11] = stop_mining_base;
    v3[12] = reset_mining_base;
    v3[13] = check_asic_num_base;
    v3[14] = check_bringup_temperature_base;
    v3[19] = 3000000;
    v3[18] = "nfo_uneffective_temp_err";
    v3[23] = sub_30D40;
    v3[27] = "/sn/sn";
    v3[26] = 1065353216;
    v3[24] = 1140457472;
    v3[17] = 35;
    v3[20] = 20;
    v3[22] = 1480;
    memcpy(v0, v3, 0x70u);
  }
  else
  {
    printf(aInvalidPointer, "new_machine_runtime");
  }
  return v1;
}
