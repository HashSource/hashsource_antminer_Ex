int sub_4DA14()
{
  int working_voltage; // r5
  int current_voltage; // r6
  int temp; // r7
  int v3; // r4
  int v4; // r8
  int result; // r0
  int v6; // r9
  int v7; // r2
  bool v8; // cc
  int v9; // r0
  int v10; // r0
  int v11; // [sp+14h] [bp-1008h]
  char v12[4100]; // [sp+18h] [bp-1004h] BYREF

  working_voltage = get_working_voltage();
  current_voltage = get_current_voltage();
  temp = get_temp(1);
  v3 = get_temp(0);
  v4 = get_temp(3);
  result = get_temp(2);
  v6 = result;
  if ( v3 > 65 )
  {
    v8 = current_voltage <= working_voltage;
    if ( current_voltage != working_voltage )
      v8 = v3 <= 69;
    if ( !v8 )
    {
      V_LOCK();
      logfmt_raw(
        v12,
        0x1000u,
        0,
        "recover to working voltage! curr_vol = %d, working_voltage = %d",
        current_voltage,
        working_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_working_voltage.c",
        169,
        "ltc_working_voltage_strategy3",
        29,
        121,
        60,
        v12);
      V_LOCK();
      logfmt_raw(
        v12,
        0x1000u,
        0,
        "min_pcb_temp = %d, max_pcb_temp = %d, min_chip_temp = %d, max_chip_temp = %d",
        temp,
        v3,
        v4,
        v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_working_voltage.c",
        169,
        "ltc_working_voltage_strategy3",
        29,
        123,
        60,
        v12);
      v9 = is_power_init();
      return set_voltage_by_steps(working_voltage, v9);
    }
  }
  else
  {
    v7 = working_voltage + 40 - current_voltage;
    if ( v7 < 0 )
      v7 = current_voltage - (working_voltage + 40);
    if ( v7 > 4 )
    {
      v11 = v7;
      V_LOCK();
      logfmt_raw(
        v12,
        0x1000u,
        0,
        "rise voltage! curr_vol = %d, working_voltage = %d, compensate_voltage = %d, abs = %d",
        current_voltage,
        working_voltage,
        40,
        v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_working_voltage.c",
        169,
        "ltc_working_voltage_strategy3",
        29,
        112,
        60,
        v12);
      V_LOCK();
      logfmt_raw(
        v12,
        0x1000u,
        0,
        "min_pcb_temp = %d, max_pcb_temp = %d, min_chip_temp = %d, max_chip_temp = %d",
        temp,
        v3,
        v4,
        v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_working_voltage.c",
        169,
        "ltc_working_voltage_strategy3",
        29,
        114,
        60,
        v12);
      v10 = is_power_init();
      return set_voltage_by_steps(working_voltage + 40, v10);
    }
  }
  return result;
}
