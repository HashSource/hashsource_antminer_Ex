int __fastcall serdes_phy_bist_external_all_phy(int a1, int a2, int a3, int a4)
{
  char *v8; // r1
  int v9; // r5
  _DWORD *v10; // r11
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int *v14; // r3
  int v15; // r1
  const char *v16; // r1
  int v17; // r1
  int v18; // r10
  int v19; // r1
  int *v21; // r3
  int v22; // r1
  char *v23; // r1
  int v24; // r1
  int *v25; // r3
  int v26; // r1
  int v27; // [sp+30h] [bp-68h] BYREF
  int v28; // [sp+34h] [bp-64h] BYREF
  _DWORD v29[7]; // [sp+38h] [bp-60h] BYREF
  int v30; // [sp+54h] [bp-44h]
  _DWORD v31[7]; // [sp+58h] [bp-40h] BYREF
  int v32; // [sp+74h] [bp-24h]
  _DWORD v33[7]; // [sp+78h] [bp-20h] BYREF
  int v34; // [sp+94h] [bp-4h]
  char v35[4100]; // [sp+98h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v29, v8, *(int *)(a1 + 140));
  LOWORD(v9) = -22412;
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  LOWORD(v10) = -14512;
  HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
  logfmt_raw(
    v35,
    0x1000u,
    0,
    v30,
    v29[0],
    v29[1],
    v29[2],
    v29[3],
    v29[4],
    v29[5],
    v29[6],
    v30,
    v9,
    "serdes_phy_bist_external_all_phy");
  V_UNLOCK();
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  zlog(*v10, v11, 154, "serdes_phy_bist_external_all_phy", 32, 10591, 60, v35);
  sub_5C158(
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
  sub_5D8A4(a1, 0xFFu, 61441, -15);
  sub_5D8A4(a1, 0xFFu, 61458, (2 * (_BYTE)a4) & 0xE);
  sub_5D8A4(a1, 0xFFu, 61441, 0);
  v12 = a4 & 0xF;
  v28 = 0;
  switch ( v12 )
  {
    case 1:
      v13 = 7;
      goto LABEL_5;
    case 2:
      v13 = 9;
LABEL_5:
      LOWORD(v14) = -22428;
      HIWORD(v14) = (unsigned int)&unk_139B94 >> 16;
      v15 = v14[1];
      v27 = *v14;
      LOBYTE(v28) = v15;
LABEL_6:
      LOWORD(v16) = -22344;
      HIWORD(v16) = (unsigned int)"_eth value %08x/%d" >> 16;
      sprintf((char *)&v28, v16, v13);
      goto LABEL_7;
    case 3:
      v13 = 11;
      goto LABEL_5;
    case 4:
      v13 = 13;
      goto LABEL_5;
    case 5:
      v13 = 15;
      goto LABEL_5;
    case 6:
      v13 = 23;
      goto LABEL_5;
    case 7:
      LOWORD(v25) = -22428;
      HIWORD(v25) = (unsigned int)&unk_139B94 >> 16;
      v13 = 31;
      v26 = v25[1];
      v27 = *v25;
      LOBYTE(v28) = v26;
      goto LABEL_6;
  }
  LOWORD(v21) = -22436;
  HIWORD(v21) = (unsigned int)&unk_139B8C >> 16;
  v22 = v21[1];
  v27 = *v21;
  LOWORD(v28) = v22;
LABEL_7:
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, "%s %s...", "serdes_phy_bist_external_all_phy", &v27);
  V_UNLOCK();
  LOWORD(v17) = -25512;
  HIWORD(v17) = (unsigned int)"one" >> 16;
  LOWORD(v18) = -22328;
  zlog(*v10, v17, 154, "serdes_phy_bist_external_all_phy", 32, 10625, 60, v35);
  sub_5C158(a1, 0xFFu, 98, 255);
  enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
  read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
  sub_5D8A4(a1, 0xFFu, 61441, -9);
  sub_5D8A4(a1, 0xFFu, 61585, 8);
  sub_5D8A4(a1, 0xFFu, 61441, -1073741825);
  sub_5D8A4(a1, 0xFFu, 61559, 0x40000000);
  sub_5D8A4(a1, 0xFFu, 61441, 0);
  V_LOCK();
  HIWORD(v18) = (unsigned int)"%d" >> 16;
  V_INT((int)v31, "chain", *(int *)(a1 + 140));
  logfmt_raw(v35, 0x1000u, 0, v32, v31[0], v31[1], v31[2], v31[3], v31[4], v31[5], v31[6], v32, v18);
  V_UNLOCK();
  LOWORD(v19) = -25512;
  HIWORD(v19) = (unsigned int)"one" >> 16;
  zlog(*v10, v19, 154, "serdes_phy_bist_external_all_phy", 32, 10662, 60, v35);
  usleep(0xF42400u);
  check_bist_tx_running(a1, a2, (_DWORD *)0xFF, a3);
  usleep(0x493E0u);
  sub_5D8A4(a1, 0xFFu, 61441, -9);
  sub_5D8A4(a1, 0xFFu, 61585, 0);
  sub_5D8A4(a1, 0xFFu, 61441, 0);
  check_ref_clock_ready_ext(a1, a2, (char *)0xFF, a3, 0);
  check_bist_done(a1, a2, (_BYTE *)0xFF, a3);
  check_bist_error(a1, a2, 255, a3);
  if ( a4 )
  {
    enable_rx_equalizer_tuning(a1, a2, (_BYTE *)0xFF, a3);
    enable_rxbist_autostop(a1, a2, 0xFFu, a3, 0x1Fu);
    read_rx_debug_reg2(a1, a2, (_BYTE *)0xFF, a3);
    sub_5D8A4(a1, 0xFFu, 61441, -9);
    sub_5D8A4(a1, 0xFFu, 61585, 8);
    sub_5D8A4(a1, 0xFFu, 61441, -1073741825);
    sub_5D8A4(a1, 0xFFu, 61559, 0x40000000);
    sub_5D8A4(a1, 0xFFu, 61441, 0);
    V_LOCK();
    LOWORD(v23) = -7948;
    HIWORD(v23) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v33, v23, *(int *)(a1 + 140));
    logfmt_raw(v35, 0x1000u, 0, v34, v33[0], v33[1], v33[2], v33[3], v33[4], v33[5], v33[6], v34, v18);
    V_UNLOCK();
    LOWORD(v24) = -25512;
    HIWORD(v24) = (unsigned int)"one" >> 16;
    zlog(*v10, v24, 154, "serdes_phy_bist_external_all_phy", 32, 10709, 60, v35);
    usleep(0xF42400u);
    check_bist_tx_running(a1, a2, (_DWORD *)0xFF, a3);
    usleep(0x493E0u);
    sub_5D8A4(a1, 0xFFu, 61441, -9);
    sub_5D8A4(a1, 0xFFu, 61585, 0);
    sub_5D8A4(a1, 0xFFu, 61441, 0);
    check_ref_clock_ready_ext(a1, a2, (char *)0xFF, a3, 0);
    check_bist_done(a1, a2, (_BYTE *)0xFF, a3);
    check_bist_error(a1, a2, 255, a3);
  }
  sub_5C158(a1, 0xFFu, 98, 0);
  return 0;
}
