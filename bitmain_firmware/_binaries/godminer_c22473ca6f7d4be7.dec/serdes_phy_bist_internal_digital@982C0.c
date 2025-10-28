int __fastcall serdes_phy_bist_internal_digital(int a1, int a2, _DWORD *a3, int a4, unsigned __int8 a5)
{
  char *v8; // r1
  int v9; // r10
  int v10; // r10
  int v11; // r11
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r8
  int v15; // r9
  int v16; // r12
  int v18; // [sp+20h] [bp-1034h]
  int v19; // [sp+28h] [bp-102Ch]
  _DWORD v21[7]; // [sp+30h] [bp-1024h] BYREF
  int v22; // [sp+4Ch] [bp-1008h]
  char v23[4080]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v8) = -7948;
  HIWORD(v8) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v21, v8, *(int *)(a1 + 140));
  LOWORD(v9) = -22412;
  HIWORD(v9) = (unsigned int)&unk_139BA4 >> 16;
  v18 = v9;
  v10 = 61513;
  v11 = 61458;
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
    v18,
    "serdes_phy_bist_internal_digital");
  V_UNLOCK();
  LOWORD(v12) = -14512;
  HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v13) = -25512;
  HIWORD(v13) = (unsigned int)"one" >> 16;
  v14 = 61441;
  v15 = 61585;
  zlog(*v12, v13, 154, "serdes_phy_bist_internal_digital", 0x20u, 9366, 60, v23);
  v16 = 61559;
  if ( a4 != 8 )
  {
    v14 = 1;
    v16 = 119;
    v10 = 73;
    v15 = 145;
    v11 = 18;
  }
  v19 = v16;
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -521);
  sub_5D8A4(a1, (unsigned __int8)a3, v10, 520);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
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
  sub_5D8A4(a1, (unsigned __int8)a3, v11, (2 * a5) & 0xE);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
  sub_5C158(a1, (unsigned __int8)a3, 98, 255);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 8);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -1073741825);
  sub_5D8A4(a1, (unsigned __int8)a3, v19, 0x40000000);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
  usleep((__useconds_t)&stru_18694.st_info);
  check_bist_tx_running(a1, a2, a3, a4);
  check_bist_rx_running(a1, a2, (int)a3, a4);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, -9);
  sub_5D8A4(a1, (unsigned __int8)a3, v15, 0);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, 0);
  sub_5C158(a1, (unsigned __int8)a3, 98, 0);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done(a1, a2, a3, a4);
  check_bist_error(a1, a2, (int)a3, a4);
  return 0;
}
