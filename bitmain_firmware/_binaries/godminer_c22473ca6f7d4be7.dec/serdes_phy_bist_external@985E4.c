int __fastcall serdes_phy_bist_external(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 a5, int a6)
{
  char *v9; // r1
  _DWORD *v10; // r11
  int v11; // r9
  int v12; // r1
  __int16 v13; // r12
  int v14; // r9
  int v15; // r10
  int v16; // r3
  int v17; // r2
  int v18; // r7
  int v19; // r3
  int v20; // r1
  unsigned __int8 *v21; // r9
  unsigned __int8 i; // r3
  unsigned __int8 v23; // t1
  int v24; // r8
  int v25; // r7
  unsigned __int8 *v27; // r10
  unsigned __int8 j; // r3
  unsigned __int8 v29; // t1
  __int16 v31; // [sp+2Ch] [bp-1028h]
  _DWORD v32[7]; // [sp+30h] [bp-1024h] BYREF
  int v33; // [sp+4Ch] [bp-1008h]
  int v34; // [sp+50h] [bp-1004h] BYREF
  int v35; // [sp+54h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v9) = -7948;
  HIWORD(v9) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v32, v9, *(int *)(a1 + 140));
  LOWORD(v11) = -22412;
  HIWORD(v11) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    (char *)&v34,
    0x1000u,
    0,
    v33,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v33,
    v11,
    "serdes_phy_bist_external");
  V_UNLOCK();
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  zlog(*v10, v12, 154, "serdes_phy_bist_external", 24, 9436, 60, &v34);
  v13 = -4096;
  v14 = 61441;
  if ( a4 != 8 )
  {
    v13 = 0;
    v14 = 1;
  }
  v31 = v13;
  v15 = 61458;
  if ( a4 != 8 )
    v15 = 18;
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
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -15);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, (2 * a5) & 0xE);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
  V_LOCK();
  LOWORD(v16) = -22428;
  LOWORD(v17) = -22436;
  if ( a5 )
  {
    HIWORD(v16) = (unsigned int)&unk_139B94 >> 16;
    v18 = v16;
  }
  else
  {
    HIWORD(v17) = (unsigned int)&unk_139B8C >> 16;
    v18 = v17;
  }
  LOWORD(v19) = -22420;
  HIWORD(v19) = (unsigned int)&unk_139B9C >> 16;
  logfmt_raw((char *)&v34, 0x1000u, 0, v19, a6, v18);
  V_UNLOCK();
  LOWORD(v20) = -25512;
  HIWORD(v20) = (unsigned int)"one" >> 16;
  zlog(*v10, v20, 154, "serdes_phy_bist_external", 24, 9459, 60, &v34);
  if ( a6 > 2 )
  {
    sub_5C158(a1, (unsigned __int8)a3, 98, 255);
    read_rx_debug_reg2(a1, a2, a3, a4);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, -2);
    v24 = (unsigned __int16)v31 | 0x91;
    v25 = (unsigned __int16)v31 | 0x77;
    sub_5D8A4(a1, (unsigned __int8)a3, v24, 1);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, -4194305);
    sub_5D8A4(a1, (unsigned __int8)a3, v25, 0x400000);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, -9);
    sub_5D8A4(a1, (unsigned __int8)a3, v24, 8);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, -1073741825);
    sub_5D8A4(a1, (unsigned __int8)a3, v25, 0x40000000);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
    check_bist_tx_running(a1, a2, a3, a4);
    check_bist_rx_running(a1, a2, (int)a3, a4);
    usleep(0x493E0u);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, -9);
    sub_5D8A4(a1, (unsigned __int8)a3, v24, 0);
    sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
    sub_5C158(a1, (unsigned __int8)a3, 98, 0);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done(a1, a2, a3, a4);
    check_bist_error(a1, a2, (int)a3, a4);
    return 0;
  }
  else
  {
    v34 = 336529925;
    sub_5C158(a1, (unsigned __int8)a3, 98, 16);
    v21 = (unsigned __int8 *)&v34 + 1;
    for ( i = 5; ; i = v23 )
    {
      enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, i);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_5C158(a1, (unsigned __int8)a3, 144, -9);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 8);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C158(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_5C158(a1, (unsigned __int8)a3, 144, -9);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 4);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
      if ( v21 == (unsigned __int8 *)&v35 )
        break;
      v23 = *v21++;
    }
    v27 = (unsigned __int8 *)&v34 + 1;
    sub_5C158(a1, (unsigned __int8)a3, 98, 0);
    sub_5C158(a1, 3u, 83, 0);
    sub_5C158(a1, (unsigned __int8)a3, 98, 128);
    for ( j = 5; ; j = v29 )
    {
      enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, j);
      sub_5C158(a1, (unsigned __int8)a3, 144, -13);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 12);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454962);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      config_rxifrx_sigdet_ovr_one_lane(a1, a2, (unsigned __int8)a3, 7);
      read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
      sub_5C158(a1, (unsigned __int8)a3, 144, -9);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 8);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C158(a1, (unsigned __int8)a3, 144, -1073741825);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0x40000000);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454857);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      usleep(0xF4240u);
      check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
      check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
      usleep(0x493E0u);
      sub_5C158(a1, (unsigned __int8)a3, 144, -9);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
      sub_5C158(a1, (unsigned __int8)a3, 144, 0);
      sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
      check_ref_clock_ready(a1, a2, (int)a3);
      check_bist_done_one_lane(a1, a2, (int)a3, 7);
      check_bist_error_one_lane(a1, a2, (int)a3, 7);
      if ( v21 == v27 )
        break;
      v29 = *v27++;
    }
    sub_5C158(a1, (unsigned __int8)a3, 98, 0);
    return 0;
  }
}
