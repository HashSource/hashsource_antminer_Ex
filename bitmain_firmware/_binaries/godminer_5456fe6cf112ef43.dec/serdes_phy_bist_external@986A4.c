int __fastcall serdes_phy_bist_external(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5, int a6)
{
  int v9; // r0
  __int16 v10; // r12
  int v11; // r9
  int v12; // r10
  int v13; // r0
  int v14; // r0
  unsigned __int8 *v15; // r9
  unsigned __int8 i; // r3
  unsigned __int8 v17; // t1
  int v18; // r8
  int v19; // r7
  unsigned __int8 *v21; // r10
  unsigned __int8 j; // r3
  unsigned __int8 v23; // t1
  __int16 v25; // [sp+2Ch] [bp-1028h]
  _BYTE v26[32]; // [sp+30h] [bp-1024h] BYREF
  int v27; // [sp+50h] [bp-1004h] BYREF
  int v28; // [sp+54h] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v26, "chain");
  v9 = logfmt_raw((int)&v27, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9436,
    60,
    &v27);
  v10 = -4096;
  v11 = 61441;
  if ( a4 != 8 )
  {
    v10 = 0;
    v11 = 1;
  }
  v25 = v10;
  v12 = 61458;
  if ( a4 != 8 )
    v12 = 18;
  sub_5C218(
    a1,
    (unsigned __int8)a3,
    97,
    (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | a5 & 7
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700
  | (16 * a5) & 0x70);
  sub_5D964(a1, (unsigned __int8)a3, v11, -15);
  sub_5D964(a1, (unsigned __int8)a3, v12, (2 * a5) & 0xE);
  v13 = sub_5D964(a1, (unsigned __int8)a3, v11, 0);
  V_LOCK(v13);
  v14 = logfmt_raw((int)&v27, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external",
    24,
    9459,
    60,
    &v27);
  if ( a6 > 2 )
  {
    sub_5C218(a1, (unsigned __int8)a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    sub_5D964(a1, (unsigned __int8)a3, v11, -2);
    v18 = (unsigned __int16)v25 | 0x91;
    v19 = (unsigned __int16)v25 | 0x77;
    sub_5D964(a1, (unsigned __int8)a3, v18, 1);
    sub_5D964(a1, (unsigned __int8)a3, v11, -4194305);
    sub_5D964(a1, (unsigned __int8)a3, v19, 0x400000);
    sub_5D964(a1, (unsigned __int8)a3, v11, 0);
    sub_5D964(a1, (unsigned __int8)a3, v11, -9);
    sub_5D964(a1, (unsigned __int8)a3, v18, 8);
    sub_5D964(a1, (unsigned __int8)a3, v11, -1073741825);
    sub_5D964(a1, (unsigned __int8)a3, v19, 0x40000000);
    sub_5D964(a1, (unsigned __int8)a3, v11, 0);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, (int)a3, a4);
    usleep(0x493E0u);
    sub_5D964(a1, (unsigned __int8)a3, v11, -9);
    sub_5D964(a1, (unsigned __int8)a3, v18, 0);
    sub_5D964(a1, (unsigned __int8)a3, v11, 0);
    sub_5C218(a1, (unsigned __int8)a3, 98, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    return 0;
  }
  else
  {
    v27 = 336529925;
    sub_5C218(a1, (unsigned __int8)a3, 98, 16);
    v15 = (unsigned __int8 *)&v27 + 1;
    for ( i = 5; ; i = v17 )
    {
      enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, i);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_5C218(a1, (unsigned __int8)a3, 144, -9);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 8);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C218(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_5C218(a1, (unsigned __int8)a3, 144, -9);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 4);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
      if ( v15 == (unsigned __int8 *)&v28 )
        break;
      v17 = *v15++;
    }
    v21 = (unsigned __int8 *)&v27 + 1;
    sub_5C218(a1, (unsigned __int8)a3, 98, 0);
    sub_5C218(a1, 3u, 83, 0);
    sub_5C218(a1, (unsigned __int8)a3, 98, 128);
    for ( j = 5; ; j = v23 )
    {
      enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, j);
      sub_5C218(a1, (unsigned __int8)a3, 144, -13);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 12);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454962);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      config_rxifrx_sigdet_ovr_one_lane(a1, a2, (unsigned __int8)a3, 7);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_5C218(a1, (unsigned __int8)a3, 144, -9);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 8);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C218(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_5C218(a1, (unsigned __int8)a3, 144, -9);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C218(a1, (unsigned __int8)a3, 144, 0);
      sub_5C218(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
      if ( v15 == v21 )
        break;
      v23 = *v21++;
    }
    sub_5C218(a1, (unsigned __int8)a3, 98, 0);
    return 0;
  }
}
