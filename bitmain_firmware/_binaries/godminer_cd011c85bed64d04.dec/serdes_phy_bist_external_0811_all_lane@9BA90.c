int __fastcall serdes_phy_bist_external_0811_all_lane(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v10; // r11
  int v11; // r0
  int v12; // r12
  int v13; // r8
  int v14; // r10
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  unsigned __int8 *v19; // r9
  unsigned __int8 i; // r3
  unsigned __int8 v21; // t1
  unsigned int v23; // r3
  unsigned __int8 v24; // r2
  unsigned __int8 v25; // r3
  unsigned __int8 *j; // r11
  unsigned __int8 v27; // t1
  int v28; // [sp+28h] [bp-1034h]
  int v29; // [sp+30h] [bp-102Ch]
  _BYTE v30[32]; // [sp+38h] [bp-1024h] BYREF
  int v31; // [sp+58h] [bp-1004h] BYREF
  char v32; // [sp+5Ch] [bp-1000h]
  char v33; // [sp+5Dh] [bp-FFFh] BYREF

  V_LOCK(a1);
  V_INT((int)v30, "chain");
  v10 = 61458;
  v11 = logfmt_raw((int)&v31, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10290,
    60,
    &v31);
  v12 = 61559;
  v13 = 61441;
  if ( a4 != 8 )
  {
    v12 = 119;
    v13 = 1;
    v10 = 18;
  }
  v28 = v12;
  v14 = 61585;
  if ( a4 != 8 )
    v14 = 145;
  sub_5C968(
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
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -15);
  sub_5E0B4(a1, (unsigned __int8)a3, v10, (2 * a5) & 0xE);
  v15 = sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  if ( a6 )
  {
    v23 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v24 = 0;
      do
      {
        v23 >>= 1;
        ++v24;
      }
      while ( v23 );
      v29 = v24;
    }
    else
    {
      v29 = 0;
    }
  }
  else
  {
    v29 = 1;
  }
  V_LOCK(v15);
  v16 = logfmt_raw((int)&v31, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_phy_bist_external_0811_all_lane",
          38,
          10312,
          60,
          &v31);
  switch ( a6 )
  {
    case 2u:
      div2_seq(a1, a2, (unsigned __int8)a3, a4);
      break;
    case 4u:
      div4_seq(a1, a2, (unsigned __int8)a3, a4);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, (unsigned __int8)a3, a4);
      break;
    case 0x20u:
      div32_20210813_500M_one_lane(a1, a2, (unsigned __int8)a3, a4);
      break;
    default:
      V_LOCK(v17);
      v18 = logfmt_raw((int)&v31, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_0811_all_lane",
        38,
        10323,
        60,
        &v31);
      break;
  }
  v31 = 336529925;
  v19 = (unsigned __int8 *)&v31 + 1;
  v32 = 28;
  sub_5C968(a1, (unsigned __int8)a3, 98, 255);
  for ( i = 5; ; i = v21 )
  {
    enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, i);
    read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
    sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
    sub_5E0B4(a1, (unsigned __int8)a3, v14, 8);
    sub_5E0B4(a1, (unsigned __int8)a3, v13, -1073741825);
    sub_5E0B4(a1, (unsigned __int8)a3, v28, 0x40000000);
    sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, (int)a3, a4);
    usleep(0x493E0u);
    sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
    sub_5E0B4(a1, (unsigned __int8)a3, v14, 0);
    sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    if ( &v33 == (char *)v19 )
      break;
    v21 = *v19++;
  }
  if ( v29 == 4 )
  {
    enable_rx_equalizer_tuning(a1, a2, a3, a4);
    v25 = 5;
    for ( j = (unsigned __int8 *)&v31 + 1; ; ++j )
    {
      enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, v25);
      read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
      sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
      sub_5E0B4(a1, (unsigned __int8)a3, v14, 8);
      sub_5E0B4(a1, (unsigned __int8)a3, v13, -1073741825);
      sub_5E0B4(a1, (unsigned __int8)a3, v28, 0x40000000);
      sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running(a1, a2, a3, a4);
      check_bist_rx_running(a1, a2, (int)a3, a4);
      usleep(0x493E0u);
      sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
      sub_5E0B4(a1, (unsigned __int8)a3, v14, 0);
      sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done(a1, a2, a3, a4);
      check_bist_done(a1, a2, a3, a4);
      check_bist_error(a1, a2, (int)a3, a4);
      if ( j == v19 )
        break;
      v27 = *j;
      v25 = v27;
    }
  }
  sub_5C968(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
