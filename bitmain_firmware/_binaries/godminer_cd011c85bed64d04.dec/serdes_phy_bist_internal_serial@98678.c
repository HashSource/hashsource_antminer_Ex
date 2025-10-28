int __fastcall serdes_phy_bist_internal_serial(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  int v9; // r0
  int v10; // r11
  int v11; // lr
  int v12; // r12
  int v13; // r9
  int v14; // r10
  int v16; // [sp+28h] [bp-102Ch]
  int v17; // [sp+2Ch] [bp-1028h]
  int v18; // [sp+30h] [bp-1024h] BYREF
  _BYTE v19[4080]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v18, "chain");
  v9 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v9);
  v10 = 61559;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_internal_serial",
    31,
    9244,
    60,
    v19);
  v11 = 61454;
  v12 = 61458;
  if ( a4 != 8 )
  {
    v11 = 14;
    v12 = 18;
  }
  v13 = 61441;
  if ( a4 != 8 )
  {
    v13 = 1;
    v10 = 119;
  }
  v17 = v11;
  v14 = 61585;
  v16 = v12;
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
  sub_5E0B4(a1, (unsigned __int8)a3, v16, (2 * a5) & 0xE);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  sub_5C968(a1, (unsigned __int8)a3, 98, 255);
  check_bist_tx_running(a1, a2, a3, a4);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -13);
  sub_5E0B4(a1, (unsigned __int8)a3, v17, 12);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  config_rxifrx_sigdet_ovr(a1, a2, (unsigned __int8)a3, a4);
  read_rx_debug_reg2(a1, a2, a3, a4);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
  sub_5E0B4(a1, (unsigned __int8)a3, v14, 8);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -1073741825);
  sub_5E0B4(a1, (unsigned __int8)a3, v10, 0x40000000);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
  sub_5E0B4(a1, (unsigned __int8)a3, v14, 0);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  enable_rx_equalizer_tuning(a1, a2, a3, a4);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
  sub_5E0B4(a1, (unsigned __int8)a3, v14, 8);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -1073741825);
  sub_5E0B4(a1, (unsigned __int8)a3, v10, 0x40000000);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, -9);
  sub_5E0B4(a1, (unsigned __int8)a3, v14, 0);
  sub_5E0B4(a1, (unsigned __int8)a3, v13, 0);
  sub_5C968(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}
