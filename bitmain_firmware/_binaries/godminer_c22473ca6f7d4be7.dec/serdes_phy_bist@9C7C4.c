int __fastcall serdes_phy_bist(int a1, unsigned __int8 *a2, int a3, int a4)
{
  int v7; // r3
  _DWORD *v8; // r9
  int v9; // r1
  int v10; // r6
  int v11; // r12
  int v12; // r12
  int v13; // lr
  int v14; // r7
  int v15; // r12
  int v16; // r11
  int v17; // r10
  int v19; // r3
  int v20; // r1
  int v21; // [sp+10h] [bp-101Ch]
  int v22; // [sp+14h] [bp-1018h]
  int v23; // [sp+18h] [bp-1014h]
  int v24; // [sp+1Ch] [bp-1010h]
  char v26[4100]; // [sp+28h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -22308;
  HIWORD(v7) = (unsigned int)"[Core State] asic %02x core %02x reg %04x state %08x" >> 16;
  LOWORD(v8) = -14512;
  logfmt_raw(v26, 0x1000u, 0, v7, "serdes_phy_bist", a2);
  V_UNLOCK();
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v9) = -25512;
  HIWORD(v9) = (unsigned int)"one" >> 16;
  v10 = 61441;
  zlog(*v8, v9, 154, "serdes_phy_bist", 15, 10827, 60, v26);
  v11 = 61467;
  if ( a3 != 8 )
  {
    v11 = 27;
    v10 = 1;
  }
  v24 = v11;
  v12 = 61443;
  if ( a3 != 8 )
    v12 = 3;
  v13 = 61545;
  v14 = 61446;
  if ( a3 != 8 )
  {
    v13 = 105;
    v14 = 6;
  }
  v23 = v12;
  v15 = 61442;
  if ( a3 != 8 )
    v15 = 2;
  v22 = v15;
  v16 = 61500;
  v21 = v13;
  if ( a3 != 8 )
    v16 = 60;
  v17 = 61468;
  if ( a3 != 8 )
    v17 = 28;
  sub_5D8A4(a1, (unsigned __int8)a2, v10, -241);
  sub_5D8A4(a1, (unsigned __int8)a2, v14, 80);
  serdes_apb_write_1_chip(a1, 1, 2u, 4102, 64);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, -13);
  sub_5D8A4(a1, (unsigned __int8)a2, v21, 8);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, -4);
  sub_5D8A4(a1, (unsigned __int8)a2, v22, 2);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, -4);
  sub_5D8A4(a1, (unsigned __int8)a2, v23, 0);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, 0x7FFFFFFF);
  sub_5D8A4(a1, (unsigned __int8)a2, v24, 0);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, -2);
  sub_5D8A4(a1, (unsigned __int8)a2, v17, 0);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, -2);
  sub_5D8A4(a1, (unsigned __int8)a2, v16, 100663296);
  sub_5D8A4(a1, (unsigned __int8)a2, v10, 0);
  sub_5C100(a1, 80, (int)"ne_lane");
  usleep(0x2710u);
  sub_5C158(a1, (unsigned __int8)a2, 112, 0);
  sub_5C158(a1, (unsigned __int8)a2, 113, 0);
  sub_5C158(a1, (unsigned __int8)a2, 114, 0);
  sub_5C158(a1, (unsigned __int8)a2, 115, 0);
  sub_5C158(a1, (unsigned __int8)a2, 116, 0);
  sub_5C158(a1, (unsigned __int8)a2, 117, 0);
  check_tx_rx_status(a1, 0, a2);
  if ( check_ref_clock_ready_ext(a1, 0, (char *)a2, a3, a4) && (++dword_16B050, dword_16B050 <= 2) )
  {
    V_LOCK();
    LOWORD(v19) = -22292;
    HIWORD(v19) = (unsigned int)"c %02x core %02x reg %04x state %08x" >> 16;
    logfmt_raw(v26, 0x1000u, 0, v19);
    V_UNLOCK();
    LOWORD(v20) = -25512;
    HIWORD(v20) = (unsigned int)"one" >> 16;
    zlog(*v8, v20, 154, "serdes_phy_bist", 15, 11018, 60, v26);
    return -1;
  }
  else
  {
    sub_5C158(a1, (unsigned __int8)a2, 87, 255);
    usleep(0x2710u);
    serdes_phy_bist_external_all_phy(a1, 0, a3, 119);
    sub_5C100(a1, 158, 2);
    check_mac_done(a1, 0, (int)a2, 0);
    return 0;
  }
}
