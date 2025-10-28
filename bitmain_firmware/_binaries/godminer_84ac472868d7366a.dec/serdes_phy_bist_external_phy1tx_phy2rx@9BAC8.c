int __fastcall serdes_phy_bist_external_phy1tx_phy2rx(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  int v12; // r10
  int v13; // r0
  int v14; // r9
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  unsigned __int8 *v19; // r10
  unsigned __int8 v20; // r2
  unsigned __int8 v21; // t1
  unsigned int v23; // r3
  unsigned __int8 v24; // r2
  unsigned __int8 v25; // r3
  unsigned __int8 *i; // r9
  unsigned __int8 v27; // t1
  int v29; // [sp+30h] [bp-103Ch]
  int v30; // [sp+3Ch] [bp-1030h]
  int v31; // [sp+40h] [bp-102Ch]
  _BYTE v32[32]; // [sp+48h] [bp-1024h] BYREF
  int v33; // [sp+68h] [bp-1004h] BYREF
  char v34; // [sp+6Ch] [bp-1000h] BYREF

  V_LOCK(a1);
  V_INT((int)v32, "chain");
  v12 = 61458;
  v13 = logfmt_raw((int)&v33, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10425,
    60,
    &v33);
  v14 = 61441;
  if ( a3 != 8 )
  {
    v14 = 1;
    v12 = 18;
  }
  sub_5C2A0(
    a1,
    a6,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * a4) & 0x70);
  sub_5D9EC(a1, a7, v14, -15);
  sub_5D9EC(a1, a7, v12, (2 * (_BYTE)a4) & 0xE);
  v15 = sub_5D9EC(a1, a7, v14, 0);
  if ( a5 )
  {
    v23 = a5 >> 1;
    if ( a5 >> 1 )
    {
      v24 = 0;
      do
      {
        v23 >>= 1;
        ++v24;
      }
      while ( v23 );
      v30 = v24;
    }
    else
    {
      v30 = 0;
    }
  }
  else
  {
    v30 = 1;
  }
  V_LOCK(v15);
  v16 = logfmt_raw((int)&v33, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_phy_bist_external_phy1tx_phy2rx",
          38,
          10449,
          60,
          &v33);
  switch ( a5 )
  {
    case 2u:
      div2_seq_one_lane(a1, a2, a6, a8);
      div2_seq_one_lane(a1, a2, a6, a8);
      break;
    case 4u:
      div4_seq_one_lane(a1, a2, a6, a8);
      div4_seq_one_lane(a1, a2, a6, a8);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, a6, a8);
      div8_seq_one_lane(a1, a2, a6, a8);
      break;
    default:
      V_LOCK(v17);
      v18 = logfmt_raw((int)&v33, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_phy1tx_phy2rx",
        38,
        10464,
        60,
        &v33);
      break;
  }
  v33 = 336529925;
  v19 = (unsigned __int8 *)&v33 + 1;
  sub_5C2A0(a1, a6, 98, 1 << a8);
  v20 = 5;
  v31 = (unsigned __int16)(a9 << 12) | 0x91;
  v29 = (unsigned __int16)(a9 << 12) | 0x77;
  while ( 1 )
  {
    enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v20);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 0x91, 8);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, -1073741825);
    sub_5D9EC(a1, a7, v29, 0x40000000);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, a6, a8);
    check_bist_rx_running_one_lane(a1, a2, a7, a9);
    usleep(0x493E0u);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 0x91, 0);
    sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
    check_ref_clock_ready(a1, a2, a6);
    check_bist_done_one_lane(a1, a2, a6, a9);
    check_ref_clock_ready(a1, a2, a7);
    check_bist_done_one_lane(a1, a2, a7, a9);
    check_bist_error_one_lane(a1, a2, a7, a9);
    if ( &v34 == (char *)v19 )
      break;
    v21 = *v19++;
    v20 = v21;
  }
  if ( v30 == 4 )
  {
    enable_rx_equalizer_tuning_one_lane(a1, a2, a7, a9);
    v25 = 5;
    for ( i = (unsigned __int8 *)&v33 + 1; ; ++i )
    {
      enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v25);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
      sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
      sub_5D9EC(a1, a7, v31, 8);
      sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, -1073741825);
      sub_5D9EC(a1, a7, v29, 0x40000000);
      sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running_one_lane(a1, a2, a6, a8);
      check_bist_rx_running_one_lane(a1, a2, a7, a9);
      usleep(0x493E0u);
      sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
      sub_5D9EC(a1, a7, v31, 0);
      sub_5D9EC(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
      check_ref_clock_ready(a1, a2, a6);
      check_bist_done_one_lane(a1, a2, a6, a9);
      check_ref_clock_ready(a1, a2, a7);
      check_bist_done_one_lane(a1, a2, a7, a9);
      check_bist_error_one_lane(a1, a2, a7, a9);
      if ( i == v19 )
        break;
      v27 = *i;
      v25 = v27;
    }
  }
  sub_5C2A0(a1, a6, 98, 0);
  return 0;
}
