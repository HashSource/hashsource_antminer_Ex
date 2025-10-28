int __fastcall serdes_phy_bist_external_0811(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        int a7)
{
  int v10; // r10
  int v11; // r0
  int v12; // r9
  int v13; // r0
  int v14; // r0
  int v15; // r0
  unsigned __int8 *v16; // r8
  unsigned __int8 v17; // r3
  unsigned __int8 v18; // t1
  unsigned int v20; // r3
  unsigned __int8 v21; // r2
  int v22; // r0
  int *v23; // r9
  unsigned __int8 v24; // t1
  unsigned __int8 v25; // [sp+0h] [bp-106Ch]
  int v27; // [sp+40h] [bp-102Ch]
  int v28; // [sp+48h] [bp-1024h] BYREF
  int v29; // [sp+68h] [bp-1004h] BYREF
  char v30; // [sp+6Ch] [bp-1000h]
  _BYTE _6D[4115]; // [sp+6Dh] [bp-FFFh] BYREF

  V_LOCK(a1);
  V_INT((int)&v28, "chain");
  v10 = 61458;
  v11 = logfmt_raw((int)&v29, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811",
    29,
    9976,
    60,
    &v29);
  v12 = 61441;
  if ( a4 != 8 )
  {
    v12 = 1;
    v10 = 18;
  }
  sub_5C2A0(
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
  sub_5D9EC(a1, (unsigned __int8)a3, v12, -15);
  sub_5D9EC(a1, (unsigned __int8)a3, v10, (2 * a5) & 0xE);
  v13 = sub_5D9EC(a1, (unsigned __int8)a3, v12, 0);
  if ( a6 )
  {
    v20 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v21 = 0;
      do
      {
        v20 >>= 1;
        ++v21;
      }
      while ( v20 );
      v27 = v21;
    }
    else
    {
      v27 = 0;
    }
  }
  else
  {
    v27 = 1;
  }
  V_LOCK(v13);
  v14 = logfmt_raw((int)&v29, 0x1000u);
  V_UNLOCK(v14);
  v15 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_phy_bist_external_0811",
          29,
          9998,
          60,
          &v29);
  switch ( a6 )
  {
    case 2u:
      if ( a7 )
      {
        div2_seq_one_lane(a1, a2, (unsigned __int8)a3, 4u);
        goto LABEL_31;
      }
      div2_seq_one_lane(a1, a2, (unsigned __int8)a3, 7u);
      goto LABEL_16;
    case 4u:
      if ( a7 )
      {
        div4_seq_one_lane(a1, a2, (unsigned __int8)a3, 4u);
        goto LABEL_31;
      }
      div4_seq_one_lane(a1, a2, (unsigned __int8)a3, 7u);
      goto LABEL_16;
    case 8u:
      if ( a7 )
      {
        div8_seq_one_lane(a1, a2, (unsigned __int8)a3, 4u);
        goto LABEL_31;
      }
      div8_seq_one_lane(a1, a2, (unsigned __int8)a3, 7u);
LABEL_16:
      v30 = 28;
      v29 = 336529925;
      goto LABEL_17;
    case 0x20u:
      if ( a7 )
      {
        div32_20210813_500M_one_lane(a1, a2, (unsigned __int8)a3, 4u);
LABEL_31:
        v30 = 28;
        v29 = 336529925;
LABEL_32:
        sub_5C2A0(a1, (unsigned __int8)a3, 98, 16);
        goto LABEL_18;
      }
      div32_20210813_500M_one_lane(a1, a2, (unsigned __int8)a3, 7u);
      goto LABEL_16;
  }
  V_LOCK(v15);
  v22 = logfmt_raw((int)&v29, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811",
    29,
    10021,
    60,
    &v29);
  v30 = 28;
  v29 = 336529925;
  if ( a7 )
    goto LABEL_32;
LABEL_17:
  sub_5C2A0(a1, (unsigned __int8)a3, 98, 128);
LABEL_18:
  v16 = (unsigned __int8 *)&v29 + 1;
  v17 = 5;
  while ( a7 )
  {
    enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, v17);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, 8);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454831);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, -1073741825);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, 0x40000000);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454857);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
    check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
    usleep(0x493E0u);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454831);
    sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
    sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done_one_lane(a1, a2, (int)a3, 4);
    check_bist_done_one_lane(a1, a2, (int)a3, 7);
    check_bist_error_one_lane(a1, a2, (int)a3, 7);
    if ( _6D == v16 )
      goto LABEL_23;
LABEL_20:
    v18 = *v16++;
    v17 = v18;
  }
  enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4u, v17);
  read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
  read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, 8);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467119);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, -1073741825);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, 0x40000000);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467145);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
  usleep((__useconds_t)&loc_F4240);
  check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
  check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
  usleep(0x493E0u);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467119);
  sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
  sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done_one_lane(a1, a2, (int)a3, 4);
  check_bist_done_one_lane(a1, a2, (int)a3, 7);
  check_bist_error_one_lane(a1, a2, (int)a3, 4);
  if ( _6D != v16 )
    goto LABEL_20;
LABEL_23:
  if ( v27 == 4 )
  {
    if ( a7 )
      enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, 7);
    else
      enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, 4);
    v23 = &v29;
    do
    {
      v24 = *(_BYTE *)v23;
      v23 = (int *)((char *)v23 + 1);
      v25 = v24;
      if ( a7 )
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, v25);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 8);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454857);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
        usleep(0x493E0u);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147454975);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 7);
      }
      else
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4u, v25);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 8);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467145);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
        usleep(0x493E0u);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, -9);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_5C2A0(a1, (unsigned __int8)a3, 144, 0);
        sub_5C2A0(a1, (unsigned __int8)a3, 145, -2147467263);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 4);
      }
    }
    while ( v23 != (int *)v16 );
  }
  sub_5C2A0(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
