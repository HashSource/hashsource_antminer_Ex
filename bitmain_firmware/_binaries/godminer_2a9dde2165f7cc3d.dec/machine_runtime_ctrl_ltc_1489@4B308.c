void *__fastcall machine_runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r0
  void *v3; // r8
  void *v4; // r0
  int v5; // r0
  _DWORD v7[28]; // [sp+10h] [bp-1070h] BYREF
  _BYTE v8[4096]; // [sp+80h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    182,
    "machine_runtime_ctrl_ltc_1489",
    29,
    39,
    40,
    v8);
  memset(&v7[4], 0, 0x5Cu);
  v2 = calloc(1u, 0x70u);
  v3 = v2;
  if ( v2 )
  {
    v7[1] = sub_4B198;
    v7[0] = nullsub_1;
    v7[2] = get_working_voltage_base;
    v7[3] = start_voltage_monitor_base;
    v7[8] = set_baud_base;
    v7[7] = set_voltage_base;
    v7[9] = set_frequency_with_voltage_base;
    v7[10] = start_mining_base;
    v7[12] = reset_mining_base;
    v7[11] = stop_mining_base;
    v7[13] = check_asic_num_base;
    v7[14] = check_bringup_temperature_base;
    v7[19] = 3000000;
    v7[18] = "nfo_uneffective_temp_err";
    v7[22] = 1680;
    v7[27] = "/config/sn";
    v4 = memcpy(v2, v7, 0x70u);
    V_LOCK(v4);
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
      182,
      "machine_runtime_ctrl_ltc_1489",
      29,
      69,
      40,
      v8);
  }
  else
  {
    printf(aInvalidPointer, "new_machine_runtime");
  }
  return v3;
}
