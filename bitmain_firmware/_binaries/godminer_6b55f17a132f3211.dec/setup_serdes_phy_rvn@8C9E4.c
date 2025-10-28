int __fastcall setup_serdes_phy_rvn(int a1, int a2)
{
  char *v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // t1
  int v9; // r0
  int v11; // [sp+30h] [bp-1024h] BYREF
  char v12; // [sp+4Fh] [bp-1005h] BYREF
  _DWORD v13[3]; // [sp+50h] [bp-1004h] BYREF
  int v14; // [sp+5Ch] [bp-FF8h] BYREF

  V_LOCK(a1);
  V_INT((int)&v11, "chain");
  v4 = &v12;
  v5 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
         170,
         "setup_serdes_phy_rvn",
         20,
         1041,
         60,
         v13);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "setup_serdes_phy_rvn",
    20,
    1048,
    60,
    v13);
  v13[0] = 50462976;
  v13[1] = 117835012;
  v13[2] = 185207048;
  v14 = 252579084;
  do
  {
    v8 = (unsigned __int8)*++v4;
    phy_external_bist_init_rvn(a1, 0, v8, 2, a2);
  }
  while ( v4 != (char *)&v14 + 3 );
  v9 = phy_external_bist_rvn(a1, 0, v13, 16, 2);
  return set_phy_external_bist_result_rvn(v9);
}
