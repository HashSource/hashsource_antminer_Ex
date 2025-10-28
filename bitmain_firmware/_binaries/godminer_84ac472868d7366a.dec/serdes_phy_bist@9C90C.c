int __fastcall serdes_phy_bist(int a1, unsigned __int8 *a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r6
  int v9; // r12
  int v10; // r12
  int v11; // lr
  int v12; // r7
  int v13; // r12
  int v14; // r11
  int v15; // r10
  int v16; // r0
  int v18; // r0
  int v19; // [sp+10h] [bp-101Ch]
  int v20; // [sp+14h] [bp-1018h]
  int v21; // [sp+18h] [bp-1014h]
  int v22; // [sp+1Ch] [bp-1010h]
  _BYTE v24[4100]; // [sp+28h] [bp-1004h] BYREF

  V_LOCK(a1);
  v7 = logfmt_raw((int)v24, 0x1000u);
  V_UNLOCK(v7);
  v8 = 61441;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist",
    15,
    10827,
    60,
    v24);
  v9 = 61467;
  if ( a3 != 8 )
  {
    v9 = 27;
    v8 = 1;
  }
  v22 = v9;
  v10 = 61443;
  if ( a3 != 8 )
    v10 = 3;
  v11 = 61545;
  v12 = 61446;
  if ( a3 != 8 )
  {
    v11 = 105;
    v12 = 6;
  }
  v21 = v10;
  v13 = 61442;
  if ( a3 != 8 )
    v13 = 2;
  v20 = v13;
  v14 = 61500;
  v19 = v11;
  if ( a3 != 8 )
    v14 = 60;
  v15 = 61468;
  if ( a3 != 8 )
    v15 = 28;
  sub_5D9EC(a1, (unsigned __int8)a2, v8, -241);
  sub_5D9EC(a1, (unsigned __int8)a2, v12, 80);
  serdes_apb_write_1_chip(a1, 1, 2u, 4102, 64);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, -13);
  sub_5D9EC(a1, (unsigned __int8)a2, v19, 8);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, -4);
  sub_5D9EC(a1, (unsigned __int8)a2, v20, 2);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, -4);
  sub_5D9EC(a1, (unsigned __int8)a2, v21, 0);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, 0x7FFFFFFF);
  sub_5D9EC(a1, (unsigned __int8)a2, v22, 0);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, -2);
  sub_5D9EC(a1, (unsigned __int8)a2, v15, 0);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, -2);
  sub_5D9EC(a1, (unsigned __int8)a2, v14, 100663296);
  sub_5D9EC(a1, (unsigned __int8)a2, v8, 0);
  sub_5C248(a1, 80, (int)"odminer_fan_monitor");
  usleep(0x2710u);
  sub_5C2A0(a1, (unsigned __int8)a2, 112, 0);
  sub_5C2A0(a1, (unsigned __int8)a2, 113, 0);
  sub_5C2A0(a1, (unsigned __int8)a2, 114, 0);
  sub_5C2A0(a1, (unsigned __int8)a2, 115, 0);
  sub_5C2A0(a1, (unsigned __int8)a2, 116, 0);
  sub_5C2A0(a1, (unsigned __int8)a2, 117, 0);
  check_tx_rx_status(a1, 0, a2);
  v16 = check_ref_clock_ready_ext(a1, 0, a2, a3, a4);
  if ( v16 && (++dword_16B058, dword_16B058 <= 2) )
  {
    V_LOCK(v16);
    v18 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist",
      15,
      11018,
      60,
      v24);
    return -1;
  }
  else
  {
    sub_5C2A0(a1, (unsigned __int8)a2, 87, 255);
    usleep(0x2710u);
    serdes_phy_bist_external_all_phy(a1, 0, a3, 119);
    sub_5C248(a1, 158, 2);
    check_mac_done(a1, 0, (int)a2, 0);
    return 0;
  }
}
