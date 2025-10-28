int sub_4E228()
{
  int working_voltage; // r5
  int current_voltage; // r6
  int temp; // r4
  int result; // r0
  int v4; // r2
  bool v5; // cc
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  _BYTE v14[4100]; // [sp+18h] [bp-1004h] BYREF

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  get_temp(1);
  temp = get_temp(0);
  get_temp(3);
  result = get_temp(2);
  if ( temp > 65 )
  {
    v5 = current_voltage <= working_voltage;
    if ( current_voltage != working_voltage )
      v5 = temp <= 69;
    if ( !v5 )
    {
      V_LOCK(result);
      v6 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v6);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/miner_util/miner_monitor/check_working_voltage.c",
             169,
             "ltc_working_voltage_strategy3",
             29,
             121,
             60,
             v14);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_working_voltage.c",
        169,
        "ltc_working_voltage_strategy3",
        29,
        123,
        60,
        v14);
      v9 = is_power_init();
      return set_voltage_by_steps(working_voltage, v9);
    }
  }
  else
  {
    v4 = working_voltage + 40 - current_voltage;
    if ( v4 < 0 )
      v4 = current_voltage - (working_voltage + 40);
    if ( v4 > 4 )
    {
      V_LOCK(result);
      v10 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v10);
      v11 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/miner_monitor/check_working_voltage.c",
              169,
              "ltc_working_voltage_strategy3",
              29,
              112,
              60,
              v14);
      V_LOCK(v11);
      v12 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v12);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_working_voltage.c",
        169,
        "ltc_working_voltage_strategy3",
        29,
        114,
        60,
        v14);
      v13 = is_power_init();
      return set_voltage_by_steps(working_voltage + 40, v13);
    }
  }
  return result;
}
