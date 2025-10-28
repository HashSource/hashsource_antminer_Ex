int __fastcall serdes_phy_bist_external_all_phy(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v16; // r0
  int v17; // r0
  _DWORD v18[2]; // [sp+30h] [bp-68h] BYREF
  _BYTE v19[32]; // [sp+38h] [bp-60h] BYREF
  _BYTE v20[32]; // [sp+58h] [bp-40h] BYREF
  _BYTE v21[32]; // [sp+78h] [bp-20h] BYREF
  _BYTE v22[4100]; // [sp+98h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v19, "chain");
  v8 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10591,
    60,
    v22);
  sub_5C968(
    a1,
    0xFFu,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * (_BYTE)a4) & 0x70);
  sub_5E0B4(a1, 0xFFu, 61441, -15);
  sub_5E0B4(a1, 0xFFu, 61458, (2 * (_BYTE)a4) & 0xE);
  sub_5E0B4(a1, 0xFFu, 61441, 0);
  v9 = a4 & 0xF;
  v18[1] = 0;
  switch ( v9 )
  {
    case 1:
      v10 = 7;
      goto LABEL_5;
    case 2:
      v10 = 9;
LABEL_5:
      strcpy((char *)v18, "prbs");
LABEL_6:
      v11 = sprintf((char *)&v18[1], "%2d", v10);
      goto LABEL_7;
    case 3:
      v10 = 11;
      goto LABEL_5;
    case 4:
      v10 = 13;
      goto LABEL_5;
    case 5:
      v10 = 15;
      goto LABEL_5;
    case 6:
      v10 = 23;
      goto LABEL_5;
    case 7:
      v10 = 31;
      strcpy((char *)v18, "prbs");
      goto LABEL_6;
  }
  v11 = *(_DWORD *)"clock";
  strcpy((char *)v18, "clock");
LABEL_7:
  V_LOCK(v11);
  v12 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10625,
    60,
    v22);
  sub_5C968(a1, 0xFFu, 98, 255);
  enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
  read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
  sub_5E0B4(a1, 0xFFu, 61441, -9);
  sub_5E0B4(a1, 0xFFu, 61585, 8);
  sub_5E0B4(a1, 0xFFu, 61441, -1073741825);
  sub_5E0B4(a1, 0xFFu, 61559, 0x40000000);
  v13 = sub_5E0B4(a1, 0xFFu, 61441, 0);
  V_LOCK(v13);
  V_INT((int)v20, "chain");
  v14 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_all_phy",
    32,
    10662,
    60,
    v22);
  usleep(0xF42400u);
  check_bist_tx_running(a1, a2, (_DWORD *)0xFF, a3);
  usleep(0x493E0u);
  sub_5E0B4(a1, 0xFFu, 61441, -9);
  sub_5E0B4(a1, 0xFFu, 61585, 0);
  sub_5E0B4(a1, 0xFFu, 61441, 0);
  check_ref_clock_ready_ext(a1, a2, (_BYTE *)0xFF, a3, 0);
  check_bist_done(a1, a2, (_BYTE *)0xFF, a3);
  check_bist_error(a1, a2, 255, a3);
  if ( a4 )
  {
    enable_rx_equalizer_tuning(a1, a2, (_BYTE *)0xFF, a3);
    enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
    read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
    sub_5E0B4(a1, 0xFFu, 61441, -9);
    sub_5E0B4(a1, 0xFFu, 61585, 8);
    sub_5E0B4(a1, 0xFFu, 61441, -1073741825);
    sub_5E0B4(a1, 0xFFu, 61559, 0x40000000);
    v16 = sub_5E0B4(a1, 0xFFu, 61441, 0);
    V_LOCK(v16);
    V_INT((int)v21, "chain");
    v17 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "serdes_phy_bist_external_all_phy",
      32,
      10709,
      60,
      v22);
    usleep(0xF42400u);
    check_bist_tx_running(a1, a2, (_DWORD *)0xFF, a3);
    usleep(0x493E0u);
    sub_5E0B4(a1, 0xFFu, 61441, -9);
    sub_5E0B4(a1, 0xFFu, 61585, 0);
    sub_5E0B4(a1, 0xFFu, 61441, 0);
    check_ref_clock_ready_ext(a1, a2, (_BYTE *)0xFF, a3, 0);
    check_bist_done(a1, a2, (_BYTE *)0xFF, a3);
    check_bist_error(a1, a2, 255, a3);
  }
  sub_5C968(a1, 0xFFu, 98, 0);
  return 0;
}
