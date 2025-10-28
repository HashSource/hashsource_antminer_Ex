int __fastcall setup_serdes_phy_rvn(int a1, int a2)
{
  char *v4; // r1
  int v5; // r4
  _DWORD *v6; // r4
  int v7; // r1
  int v8; // r3
  int v9; // r1
  unsigned int v10; // t1
  int v12; // [sp+20h] [bp-1034h]
  _DWORD v13[7]; // [sp+30h] [bp-1024h] BYREF
  int v14; // [sp+4Ch] [bp-1008h] BYREF
  _DWORD v15[3]; // [sp+50h] [bp-1004h] BYREF
  int v16; // [sp+5Ch] [bp-FF8h] BYREF

  V_LOCK();
  LOWORD(v4) = 23936;
  HIWORD(v4) = (unsigned int)"p" >> 16;
  V_INT((int)v13, v4, *(int *)(a1 + 248));
  LOWORD(v5) = 5800;
  HIWORD(v5) = (unsigned int)"led!" >> 16;
  v12 = v5;
  v6 = (int *)((char *)&v14 + 3);
  logfmt_raw(
    (char *)v15,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    v12,
    "setup_serdes_phy_rvn",
    a2);
  V_UNLOCK();
  LOWORD(v7) = 5292;
  HIWORD(v7) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v7, 174, "setup_serdes_phy_rvn", 20, 1289, 60, v15);
  V_LOCK();
  LOWORD(v8) = -16180;
  HIWORD(v8) = (unsigned int)" seq level = P%d ..." >> 16;
  logfmt_raw((char *)v15, 0x1000u, 0, v8, "setup_serdes_phy_rvn", 1);
  V_UNLOCK();
  LOWORD(v9) = 5292;
  HIWORD(v9) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v9, 174, "setup_serdes_phy_rvn", 20, 1296, 60, v15);
  v15[0] = 50462976;
  v15[1] = 117835012;
  v15[2] = 185207048;
  v16 = 252579084;
  do
  {
    v10 = *((unsigned __int8 *)v6 + 1);
    v6 = (_DWORD *)((char *)v6 + 1);
    phy_external_bist_init_rvn(a1, 0, v10, 2);
  }
  while ( v6 != (int *)((char *)&v16 + 3) );
  phy_external_bist_rvn(a1, 0, (unsigned __int8 *)v15, 0x10u);
  return set_phy_external_bist_result_rvn_0();
}
