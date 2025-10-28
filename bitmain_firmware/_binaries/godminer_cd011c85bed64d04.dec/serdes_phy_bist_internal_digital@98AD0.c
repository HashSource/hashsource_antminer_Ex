int __fastcall serdes_phy_bist_internal_digital(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  int v8; // r10
  int v9; // r11
  int v10; // r0
  int v11; // r8
  int v12; // r9
  int v13; // r12
  int v15; // [sp+28h] [bp-102Ch]
  int v17; // [sp+30h] [bp-1024h] BYREF
  _BYTE v18[4080]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v17, "chain");
  v8 = 61513;
  v9 = 61458;
  v10 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v10);
  v11 = 61441;
  v12 = 61585;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_internal_digital",
    0x20u,
    9366,
    60,
    v18);
  v13 = 61559;
  if ( a4 != 8 )
  {
    v11 = 1;
    v13 = 119;
    v8 = 73;
    v12 = 145;
    v9 = 18;
  }
  v15 = v13;
  sub_5E0B4(a1, (unsigned __int8)a3, v11, -521);
  sub_5E0B4(a1, (unsigned __int8)a3, v8, 520);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, 0);
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
  sub_5E0B4(a1, (unsigned __int8)a3, v11, -15);
  sub_5E0B4(a1, (unsigned __int8)a3, v9, (2 * a5) & 0xE);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, 0);
  sub_5C968(a1, (unsigned __int8)a3, 98, 255);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, -9);
  sub_5E0B4(a1, (unsigned __int8)a3, v12, 8);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, -1073741825);
  sub_5E0B4(a1, (unsigned __int8)a3, v15, 0x40000000);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  check_bist_tx_running(a1, a2, a3, a4);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, -9);
  sub_5E0B4(a1, (unsigned __int8)a3, v12, 0);
  sub_5E0B4(a1, (unsigned __int8)a3, v11, 0);
  sub_5C968(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}
