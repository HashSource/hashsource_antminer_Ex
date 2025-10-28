int __fastcall update_chip_freq(unsigned int a1, unsigned int a2, int a3)
{
  _BYTE v7[36]; // [sp+38h] [bp-1064h] BYREF
  int v8; // [sp+1038h] [bp-64h] BYREF
  char v9; // [sp+103Fh] [bp-5Dh] BYREF
  _DWORD v10[7]; // [sp+1040h] [bp-5Ch] BYREF
  int v11; // [sp+105Ch] [bp-40h]
  _DWORD *all_created_runtime; // [sp+1060h] [bp-3Ch]
  int k; // [sp+1064h] [bp-38h]
  int v14; // [sp+1068h] [bp-34h]
  int j; // [sp+106Ch] [bp-30h]
  int n; // [sp+1070h] [bp-2Ch]
  char v17; // [sp+1077h] [bp-25h]
  int m; // [sp+1078h] [bp-24h]
  int ii; // [sp+107Ch] [bp-20h]
  char v20; // [sp+1083h] [bp-19h]
  int i; // [sp+1084h] [bp-18h]

  v20 = 1;
  if ( *(_BYTE *)(a1 + 1226) || *(_BYTE *)(a1 + 1227) || !*(_BYTE *)(a1 + 1033) )
  {
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "re_dag_gen_ing %d, bypass_baking %d, dag_gen_done %d",
      *(unsigned __int8 *)(a1 + 1226),
      *(unsigned __int8 *)(a1 + 1227),
      *(unsigned __int8 *)(a1 + 1033));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "update_chip_freq",
      16,
      515,
      20,
      v7);
    v20 = 0;
  }
  else if ( ready_to_restart_dag_gen && *(_BYTE *)(a1 + 1225) != 1 && bypass_baking_mode != 1 )
  {
    freq_select = 400;
    for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
      freq_array_f[6 * *(_DWORD *)(a1 + 272) + i] = (float)(unsigned __int16)freq_select;
    V_LOCK();
    sub_B9BE8((int)v10, *(int *)(a1 + 272));
    logfmt_raw(v7, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, "restart_dag_gen!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "update_chip_freq",
      16,
      524,
      20,
      v7);
    (*(void (__fastcall **)(unsigned int, int))(a1 + 204))(a1, 1);
    usleep(0x64u);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "set Logic freq_select: %d", (unsigned __int16)freq_select);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "update_chip_freq",
      16,
      527,
      20,
      v7);
    (*(void (__fastcall **)(unsigned int, _DWORD))(a1 + 204))(a1, 0);
    usleep(0x64u);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "set DRAM freq_select: %d", (unsigned __int16)freq_select);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "update_chip_freq",
      16,
      530,
      20,
      v7);
    for ( j = 0; j < *(_DWORD *)(a1 + 372); ++j )
    {
      set_single_chip_reset_eth_2282(
        a1,
        *(_BYTE *)(*(_DWORD *)(a1 + 528) + j),
        (unsigned __int8)REG_CORE_ROOT_CLK_GATE_ETH,
        3);
      set_single_chip_reset_eth_2282(
        a1,
        *(_BYTE *)(*(_DWORD *)(a1 + 528) + j),
        (unsigned __int8)REG_CORE_RESET_ETH,
        190);
      usleep(0x64u);
      set_single_chip_reset_eth_2282(
        a1,
        *(_BYTE *)(*(_DWORD *)(a1 + 528) + j),
        (unsigned __int8)REG_CORE_RESET_ETH,
        255);
      usleep(0x64u);
      set_single_chip_reset_eth_2282(
        a1,
        *(_BYTE *)(*(_DWORD *)(a1 + 528) + j),
        (unsigned __int8)REG_CORE_ROOT_CLK_GATE_ETH,
        3);
    }
    v8 = 0;
    all_created_runtime = get_all_created_runtime(&v8);
    v14 = 0;
    *(_BYTE *)(a1 + 1225) = 1;
    start_re_dag_gen_signal[*(_DWORD *)(a1 + 272)] = 1;
    for ( k = 0; k < v8; ++k )
      v14 += start_re_dag_gen_signal[*(_DWORD *)(all_created_runtime[k] + 272)];
    start_re_dag_gen = v14 == v8;
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "chain-%d, restart_dag_gen %d, start_re_dag_gen %d, start_re_dag_gen_signal %d, start_re_dag_gen %d, re_dag_gen_ing"
      " %d, bypass_baking %d, case_select %d",
      *(_DWORD *)(a1 + 272),
      (unsigned __int8)ready_to_restart_dag_gen,
      (unsigned __int8)start_re_dag_gen,
      start_re_dag_gen_signal[*(_DWORD *)(a1 + 272)],
      (unsigned __int8)start_re_dag_gen,
      *(unsigned __int8 *)(a1 + 1226),
      *(unsigned __int8 *)(a1 + 1227),
      (unsigned __int8)case_select);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "update_chip_freq",
      16,
      553,
      20,
      v7);
  }
  else if ( dword_5AEF94[*(_DWORD *)(a1 + 272)] )
  {
    if ( *(int *)(a1 + 504) < 400 && bypass_baking_mode != 1 )
    {
      if ( *(int *)(a1 + 1220) > 39 )
        g_fan_control_pwm_percent_min = dword_59B1BC;
      else
        g_fan_control_pwm_percent_min = 5;
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "set pwm_percent_min %d", g_fan_control_pwm_percent_min);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
        193,
        "update_chip_freq",
        16,
        576,
        20,
        v7);
      set_chip_freq_in_low_temp((_DWORD *)a1, &freq_select, &v9);
      if ( v9 )
      {
        for ( m = 0; m < *(_DWORD *)(a1 + 372); ++m )
        {
          set_single_chip_frequency_eth_2282(a1, 1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + m));
          usleep(0x64u);
          set_single_chip_frequency_eth_2282(a1, 0, *(_BYTE *)(*(_DWORD *)(a1 + 528) + m));
          usleep(0x64u);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + m),
            (unsigned __int8)REG_CORE_ROOT_CLK_GATE_ETH,
            3);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + m),
            (unsigned __int8)REG_CORE_RESET_ETH,
            254);
          usleep(0x64u);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + m),
            (unsigned __int8)REG_CORE_RESET_ETH,
            255);
          usleep(0x64u);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + m),
            (unsigned __int8)REG_CORE_ROOT_CLK_GATE_ETH,
            3);
        }
      }
    }
    else
    {
      if ( *(int *)(a1 + 1220) > 39 )
        g_fan_control_pwm_percent_min = dword_59B1BC;
      else
        g_fan_control_pwm_percent_min = 5;
      v17 = 1;
      for ( n = 0; n < *(_DWORD *)(a1 + 372); ++n )
      {
        if ( freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] < target_freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] )
        {
          freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] = freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] + 6.25;
          if ( freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] >= target_freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] )
            freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] = target_freq_array_f[6 * *(_DWORD *)(a1 + 272) + n];
          set_single_chip_frequency_eth_2282(a1, 1, *(_BYTE *)(*(_DWORD *)(a1 + 528) + n));
          usleep(0x64u);
          if ( freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] / 1.2 <= 500.0
            || freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] / 1.2 - 500.0 > 0.0
            && freq_array_f[6 * *(_DWORD *)(a1 + 272) + n] / 1.2 - 500.0 < 6.25 )
          {
            set_single_chip_frequency_eth_2282(a1, 0, *(_BYTE *)(*(_DWORD *)(a1 + 528) + n));
            usleep(0x64u);
          }
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + n),
            (unsigned __int8)REG_CORE_ROOT_CLK_GATE_ETH,
            3);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + n),
            (unsigned __int8)REG_CORE_RESET_ETH,
            254);
          usleep(0x64u);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + n),
            (unsigned __int8)REG_CORE_RESET_ETH,
            255);
          usleep(0x64u);
          set_single_chip_reset_eth_2282(
            a1,
            *(_BYTE *)(*(_DWORD *)(a1 + 528) + n),
            (unsigned __int8)REG_CORE_ROOT_CLK_GATE_ETH,
            3);
          v17 = 0;
        }
      }
      if ( v17 && *(_BYTE *)(a1 + 1228) != 1 )
      {
        set_dram_refresh_eth_2282(a1, 3872);
        *(_BYTE *)(a1 + 1228) = 1;
        (*(void (__fastcall **)(unsigned int))(a1 + 4))(a1);
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "start mining...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
          193,
          "update_chip_freq",
          16,
          663,
          40,
          v7);
      }
    }
  }
  else
  {
    init_chip_freq(a1);
    (*(void (__fastcall **)(unsigned int, int))(a1 + 204))(a1, 1);
    usleep(0x64u);
    (*(void (__fastcall **)(unsigned int, _DWORD))(a1 + 204))(a1, 0);
    usleep(0x64u);
    (*(void (__fastcall **)(unsigned int))(a1 + 4))(a1);
    *(_DWORD *)(a1 + 504) = (unsigned __int16)freq_select;
  }
  if ( v20 )
  {
    *(_DWORD *)(a1 + 504) = 0;
    for ( ii = 0; ii < *(_DWORD *)(a1 + 372); ++ii )
      *(_DWORD *)(a1 + 504) += (int)freq_array_f[6 * *(_DWORD *)(a1 + 272) + ii];
    *(_DWORD *)(a1 + 504) = sub_344EB8(*(_DWORD *)(a1 + 504), *(_DWORD *)(a1 + 372));
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "chain-%d frequency: %d", *(_DWORD *)(a1 + 272), *(_DWORD *)(a1 + 504));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "update_chip_freq",
    16,
    675,
    20,
    v7);
  update_str_and_flag(__SPAIR64__(a2, a1), (__int64 *)(a3 + 80));
  sleep(1u);
  return a3 + 48;
}
