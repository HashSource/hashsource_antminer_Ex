int __fastcall setup_serdes_phy_x_y(int a1, int a2, int a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  unsigned __int8 v8; // r11
  int v11; // r8
  int v12; // r0
  int v13; // r7
  int v14; // r9
  _BYTE v16[4100]; // [sp+18h] [bp-1004h] BYREF

  v8 = a5;
  v11 = a6;
  V_LOCK(&a5);
  v12 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v12);
  v13 = 61441;
  v14 = 61545;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_serdes_phy_x_y",
    0x14u,
    11095,
    60,
    v16);
  if ( v11 != 8 )
  {
    v13 = 1;
    v14 = 105;
  }
  sub_5D9EC(a1, a2, v13, -13);
  sub_5D9EC(a1, a2, v14, 8);
  sub_5D9EC(a1, a2, v13, 0);
  sub_5D9EC(a1, a3, v13, -13);
  sub_5D9EC(a1, a3, v14, 8);
  sub_5D9EC(a1, a3, v13, 0);
  sub_5C248(a1, 80, (int)"odminer_fan_monitor");
  usleep(0x2710u);
  sub_5C2A0(a1, a2, 112, 0);
  sub_5C2A0(a1, a2, 113, 0);
  sub_5C2A0(a1, a2, 114, 0);
  sub_5C2A0(a1, a2, 115, 0);
  sub_5C2A0(a1, a2, 116, 0);
  sub_5C2A0(a1, a2, 117, 0);
  check_ref_clock_ready(a1, 0, a2);
  sub_5C2A0(a1, a3, 112, 0);
  sub_5C2A0(a1, a3, 113, 0);
  sub_5C2A0(a1, a3, 114, 0);
  sub_5C2A0(a1, a3, 115, 0);
  sub_5C2A0(a1, a3, 116, 0);
  sub_5C2A0(a1, a3, 117, 0);
  check_ref_clock_ready(a1, 0, a3);
  sub_5C2A0(a1, a2, 87, 255);
  usleep(0x2710u);
  serdes_phy_bist_external_phy1tx_phy2rx(a1, 0, v11, 17, 0x10u, a2, a3, a4, v8);
  return 0;
}
