int __fastcall setup_serdes_phy_x_y(int a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v10; // r3
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r7
  int v14; // r9
  char v16[4100]; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v10) = -22256;
  HIWORD(v10) = (unsigned int)"" >> 16;
  logfmt_raw(v16, 0x1000u, 0, v10, "setup_serdes_phy_x_y", a2, a4, a3, a5);
  V_UNLOCK();
  LOWORD(v11) = -14512;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v12) = -25512;
  HIWORD(v12) = (unsigned int)"one" >> 16;
  v13 = 61441;
  v14 = 61545;
  zlog(*v11, v12, 154, "setup_serdes_phy_x_y", 0x14u, 11095, 60, v16);
  if ( a6 != 8 )
  {
    v13 = 1;
    v14 = 105;
  }
  sub_5D8A4(a1, a2, v13, -13);
  sub_5D8A4(a1, a2, v14, 8);
  sub_5D8A4(a1, a2, v13, 0);
  sub_5D8A4(a1, a3, v13, -13);
  sub_5D8A4(a1, a3, v14, 8);
  sub_5D8A4(a1, a3, v13, 0);
  sub_5C100(a1, 80, (int)"ne_lane");
  usleep(0x2710u);
  sub_5C158(a1, a2, 112, 0);
  sub_5C158(a1, a2, 113, 0);
  sub_5C158(a1, a2, 114, 0);
  sub_5C158(a1, a2, 115, 0);
  sub_5C158(a1, a2, 116, 0);
  sub_5C158(a1, a2, 117, 0);
  check_ref_clock_ready(a1, 0, a2);
  sub_5C158(a1, a3, 112, 0);
  sub_5C158(a1, a3, 113, 0);
  sub_5C158(a1, a3, 114, 0);
  sub_5C158(a1, a3, 115, 0);
  sub_5C158(a1, a3, 116, 0);
  sub_5C158(a1, a3, 117, 0);
  check_ref_clock_ready(a1, 0, a3);
  sub_5C158(a1, a2, 87, 255);
  usleep(0x2710u);
  serdes_phy_bist_external_phy1tx_phy2rx(a1, 0, a6, 17, 0x10u, a2, a3, a4, a5);
  return 0;
}
