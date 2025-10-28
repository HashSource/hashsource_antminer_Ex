int __fastcall serdes_phy_bist_external_0811_all_lane(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  _DWORD *v10; // r12
  char *v11; // r1
  int v12; // r10
  int v13; // r11
  int v14; // r1
  int v15; // r12
  int v16; // r8
  int v17; // r10
  int v18; // r11
  int v19; // r3
  int v20; // r2
  int v21; // r9
  int v22; // r3
  unsigned __int8 *v23; // r9
  unsigned __int8 i; // r3
  unsigned __int8 v25; // t1
  unsigned int v27; // r3
  unsigned __int8 v28; // r2
  unsigned __int8 v29; // r3
  unsigned __int8 *j; // r11
  unsigned __int8 v31; // t1
  int v32; // [sp+28h] [bp-1034h]
  _DWORD *useconds; // [sp+2Ch] [bp-1030h]
  int v34; // [sp+30h] [bp-102Ch]
  _DWORD v35[7]; // [sp+38h] [bp-1024h] BYREF
  int v36; // [sp+54h] [bp-1008h]
  int v37; // [sp+58h] [bp-1004h] BYREF
  char v38; // [sp+5Ch] [bp-1000h]
  char v39; // [sp+5Dh] [bp-FFFh] BYREF

  V_LOCK();
  LOWORD(v10) = -14512;
  LOWORD(v11) = -7948;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v11) = (unsigned int)&loc_12D594 >> 16;
  useconds = v10;
  V_INT((int)v35, v11, *(int *)(a1 + 140));
  LOWORD(v12) = -22412;
  HIWORD(v12) = (unsigned int)&unk_139BA4 >> 16;
  v13 = 61458;
  logfmt_raw(
    (char *)&v37,
    0x1000u,
    0,
    v36,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5],
    v35[6],
    v36,
    v12,
    "serdes_phy_bist_external_0811_all_lane");
  V_UNLOCK();
  LOWORD(v14) = -25512;
  HIWORD(v14) = (unsigned int)"one" >> 16;
  zlog(*useconds, v14, 154, "serdes_phy_bist_external_0811_all_lane", 38, 10290, 60, &v37);
  v15 = 61559;
  v16 = 61441;
  if ( a4 != 8 )
  {
    v15 = 119;
    v16 = 1;
    v13 = 18;
  }
  v32 = v15;
  v17 = 61585;
  if ( a4 != 8 )
    v17 = 145;
  sub_5C158(
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
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -15);
  sub_5D8A4(a1, (unsigned __int8)a3, v13, (2 * a5) & 0xE);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  if ( a6 )
  {
    v27 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v28 = 0;
      do
      {
        v27 >>= 1;
        ++v28;
      }
      while ( v27 );
      v18 = v28;
      v34 = v28;
    }
    else
    {
      v34 = 0;
      v18 = 0;
    }
  }
  else
  {
    v34 = 1;
    v18 = 1;
  }
  V_LOCK();
  LOWORD(v19) = -22428;
  LOWORD(v20) = -22436;
  if ( a5 )
  {
    HIWORD(v19) = (unsigned int)&unk_139B94 >> 16;
    v21 = v19;
  }
  else
  {
    HIWORD(v20) = (unsigned int)&unk_139B8C >> 16;
    v21 = v20;
  }
  logfmt_raw((char *)&v37, 0x1000u, 0, "test %d %s...", v18, v21);
  V_UNLOCK();
  zlog(
    *useconds,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_0811_all_lane",
    38,
    10312,
    60,
    &v37);
  switch ( a6 )
  {
    case 2u:
      div2_seq(a1, a2, (int)a3, a4);
      break;
    case 4u:
      div4_seq(a1, a2, (int)a3, a4);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, (int)a3, a4);
      break;
    case 0x20u:
      div32_20210813_500M_one_lane(a1, a2, (int)a3, a4);
      break;
    default:
      V_LOCK();
      LOWORD(v22) = -22380;
      HIWORD(v22) = (unsigned int)&unk_139BC4 >> 16;
      logfmt_raw((char *)&v37, 0x1000u, 0, v22);
      V_UNLOCK();
      zlog(
        *useconds,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_0811_all_lane",
        38,
        10323,
        60,
        &v37);
      break;
  }
  v37 = 336529925;
  v23 = (unsigned __int8 *)&v37 + 1;
  v38 = 28;
  sub_5C158(a1, (unsigned __int8)a3, 98, 255);
  for ( i = 5; ; i = v25 )
  {
    enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, i);
    read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
    sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
    sub_5D8A4(a1, (unsigned __int8)a3, v17, 8);
    sub_5D8A4(a1, (unsigned __int8)a3, v16, -1073741825);
    sub_5D8A4(a1, (unsigned __int8)a3, v32, 0x40000000);
    sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, (int)a3, a4);
    usleep(0x493E0u);
    sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
    sub_5D8A4(a1, (unsigned __int8)a3, v17, 0);
    sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    if ( &v39 == (char *)v23 )
      break;
    v25 = *v23++;
  }
  if ( v34 == 4 )
  {
    enable_rx_equalizer_tuning(a1, a2, a3, a4);
    v29 = 5;
    for ( j = (unsigned __int8 *)&v37 + 1; ; ++j )
    {
      enable_rxbist_autostop(a1, a2, (unsigned __int8)a3, a4, v29);
      read_rx_debug_reg2_one_lane(a1, a2, a3, a4);
      sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v17, 8);
      sub_5D8A4(a1, (unsigned __int8)a3, v16, -1073741825);
      sub_5D8A4(a1, (unsigned __int8)a3, v32, 0x40000000);
      sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running(a1, a2, a3, a4);
      check_bist_rx_running(a1, a2, (int)a3, a4);
      usleep(0x493E0u);
      sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
      sub_5D8A4(a1, (unsigned __int8)a3, v17, 0);
      sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done(a1, a2, a3, a4);
      check_bist_done(a1, a2, a3, a4);
      check_bist_error(a1, a2, (int)a3, a4);
      if ( j == v23 )
        break;
      v31 = *j;
      v29 = v31;
    }
  }
  sub_5C158(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
