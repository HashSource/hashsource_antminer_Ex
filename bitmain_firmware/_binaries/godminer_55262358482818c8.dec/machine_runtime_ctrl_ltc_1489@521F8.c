void *machine_runtime_ctrl_ltc_1489()
{
  int v0; // r3
  int v1; // r1
  void *v2; // r0
  void *v3; // r8
  int v4; // r3
  int v5; // r3
  int v6; // r1
  int v8; // r1
  const char *v9; // r0
  _DWORD v10[30]; // [sp+10h] [bp-1078h] BYREF
  char v11[4096]; // [sp+88h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v0) = -15600;
  HIWORD(v0) = (unsigned int)"_bias_ltc_1489() out" >> 16;
  logfmt_raw(v11, 0x1000u, 0, v0);
  V_UNLOCK();
  LOWORD(v1) = -15820;
  HIWORD(v1) = (unsigned int)"tage_bias_ltc_1489() in" >> 16;
  zlog(g_zc, v1, 182, "machine_runtime_ctrl_ltc_1489", 29, 39, 40, v11);
  memset(&v10[4], 0, 0x64u);
  v2 = calloc(1u, 0x78u);
  v3 = v2;
  if ( v2 )
  {
    v10[0] = nullsub_1;
    v10[1] = sub_52088;
    v10[3] = start_voltage_monitor_base;
    v10[2] = get_working_voltage_base;
    v10[7] = set_voltage_base;
    v10[8] = start_freq_compensate_thread_base;
    v10[10] = set_baud_base;
    v10[9] = calc_freq_compensate_by_temp_base;
    v10[11] = set_frequency_with_voltage_base;
    v10[12] = start_mining_base;
    v10[14] = reset_mining_base;
    v10[13] = stop_mining_base;
    v10[15] = check_asic_num_base;
    LOWORD(v4) = -17696;
    HIWORD(v4) = (unsigned int)"ine_runtime_dcr_1727.c" >> 16;
    v10[16] = check_bringup_temperature_base;
    v10[21] = 3000000;
    v10[20] = "l";
    v10[24] = 1680;
    v10[29] = v4;
    memcpy(v2, v10, 0x78u);
    V_LOCK();
    LOWORD(v5) = -15564;
    HIWORD(v5) = (unsigned int)"ime_ctrl_ltc_1489() in" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = -15820;
    HIWORD(v6) = (unsigned int)"tage_bias_ltc_1489() in" >> 16;
    zlog(g_zc, v6, 182, "machine_runtime_ctrl_ltc_1489", 29, 71, 40, v11);
  }
  else
  {
    LOWORD(v8) = -18344;
    LOWORD(v9) = 28808;
    HIWORD(v8) = (unsigned int)&unk_14B840 >> 16;
    HIWORD(v9) = (unsigned int)"." >> 16;
    printf(v9, v8);
  }
  return v3;
}
