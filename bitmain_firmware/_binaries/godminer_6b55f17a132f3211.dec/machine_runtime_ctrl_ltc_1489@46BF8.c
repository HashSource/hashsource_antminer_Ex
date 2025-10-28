void *__fastcall machine_runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r0
  void *v3; // r8
  void *v4; // r0
  int v5; // r0
  _DWORD v7[27]; // [sp+14h] [bp-106Ch] BYREF
  _BYTE v8[4096]; // [sp+80h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    178,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v8);
  memset(&v7[4], 0, 0x58u);
  v2 = calloc(1u, 0x6Cu);
  v3 = v2;
  if ( v2 )
  {
    v7[1] = sub_46A88;
    v7[0] = nullsub_1;
    v7[2] = get_working_voltage_base;
    v7[3] = start_voltage_monitor_base;
    v7[7] = set_baud_base;
    v7[6] = set_voltage_base;
    v7[8] = set_frequency_with_voltage_base;
    v7[9] = start_mining_base;
    v7[11] = reset_mining_base;
    v7[10] = stop_mining_base;
    v7[12] = check_asic_num_base;
    v7[13] = check_bringup_temperature_base;
    v7[18] = 3000000;
    v7[17] = "r_info_eth_bm2280";
    v7[21] = 1680;
    v7[26] = "/config/sn";
    v4 = memcpy(v2, v7, 0x6Cu);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      178,
      "machine_runtime_ctrl_ltc_1489",
      29,
      69,
      40,
      v8);
  }
  else
  {
    printf("invalid pointer(%s)!\n", "new_machine_runtime");
  }
  return v3;
}
