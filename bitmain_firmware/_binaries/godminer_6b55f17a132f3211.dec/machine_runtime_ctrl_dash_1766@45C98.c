void *machine_runtime_ctrl_dash_1766()
{
  void *v0; // r0
  void *v1; // r4
  _DWORD src[27]; // [sp+4h] [bp-70h] BYREF

  memset(&src[4], 0, 0x5Cu);
  v0 = calloc(1u, 0x6Cu);
  v1 = v0;
  if ( v0 )
  {
    src[0] = sub_45A28;
    src[1] = sub_45BA8;
    src[2] = get_working_voltage_base;
    src[3] = start_voltage_monitor_base;
    src[5] = sub_45B7C;
    src[6] = set_voltage_base;
    src[7] = set_baud_base;
    src[8] = set_frequency_with_voltage_base;
    src[9] = start_mining_base;
    src[10] = stop_mining_base;
    src[11] = reset_mining_base;
    src[12] = check_asic_num_base;
    src[13] = check_bringup_temperature_base;
    src[17] = "r_info_eth_bm2280";
    src[18] = 3000000;
    src[22] = &loc_30D40;
    src[16] = 51;
    src[23] = 1142292480;
    src[25] = 1065353216;
    src[19] = 17;
    src[21] = 1500;
    memcpy(v0, src, 0x6Cu);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v1;
}
