int __fastcall serdes_phy_bist_internal_serial(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  char *v9; // r1
  int v10; // r10
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r11
  int v14; // lr
  int v15; // r12
  int v16; // r9
  int v17; // r10
  int v19; // [sp+28h] [bp-102Ch]
  int v20; // [sp+2Ch] [bp-1028h]
  _DWORD v21[7]; // [sp+30h] [bp-1024h] BYREF
  int v22; // [sp+4Ch] [bp-1008h]
  char v23[4080]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v9) = -7948;
  HIWORD(v9) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v21, v9, *(int *)(a1 + 140));
  LOWORD(v10) = -22412;
  HIWORD(v10) = (unsigned int)&unk_139BA4 >> 16;
  logfmt_raw(
    v23,
    0x1000u,
    0,
    v22,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v22,
    v10,
    "serdes_phy_bist_internal_serial");
  V_UNLOCK();
  LOWORD(v11) = -14512;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  v13 = 61559;
  zlog(*v11, v12, 154, "serdes_phy_bist_internal_serial", 31, 9244, 60, v23);
  v14 = 61454;
  v15 = 61458;
  if ( a4 != 8 )
  {
    v14 = 14;
    v15 = 18;
  }
  v16 = 61441;
  if ( a4 != 8 )
  {
    v16 = 1;
    v13 = 119;
  }
  v20 = v14;
  v17 = 61585;
  v19 = v15;
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
  sub_5D8A4(a1, (unsigned __int8)a3, v19, (2 * a5) & 0xE);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  sub_5C158(a1, (unsigned __int8)a3, 98, 255);
  check_bist_tx_running(a1, a2, a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -13);
  sub_5D8A4(a1, (unsigned __int8)a3, v20, 12);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  config_rxifrx_sigdet_ovr(a1, a2, (unsigned __int8)a3, a4);
  read_rx_debug_reg2(a1, a2, a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v17, 8);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -1073741825);
  sub_5D8A4(a1, (unsigned __int8)a3, v13, 0x40000000);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v17, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  enable_rx_equalizer_tuning(a1, a2, a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v17, 8);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -1073741825);
  sub_5D8A4(a1, (unsigned __int8)a3, v13, 0x40000000);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v17, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  sub_5C158(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}
