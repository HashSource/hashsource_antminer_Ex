int __fastcall setup_serdes_phy_rvn(int a1, int a2)
{
  _BYTE v5[12]; // [sp+38h] [bp-104Ch] BYREF
  _DWORD v6[4]; // [sp+1038h] [bp-4Ch] BYREF
  _DWORD v7[7]; // [sp+1048h] [bp-3Ch] BYREF
  int v8; // [sp+1064h] [bp-20h]
  char v9; // [sp+106Bh] [bp-19h]
  int v10; // [sp+106Ch] [bp-18h]
  unsigned __int8 j; // [sp+1073h] [bp-11h]
  int i; // [sp+1074h] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v7, *(int *)(a1 + 272));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "%s using rvn phy seq level = P%d ...",
    "setup_serdes_phy_rvn",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "setup_serdes_phy_rvn",
    20,
    1289,
    60,
    v5);
  v10 = 1;
  for ( i = 0; i < v10; ++i )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s try phy lock times %d", "setup_serdes_phy_rvn", i + 1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "setup_serdes_phy_rvn",
      20,
      1296,
      60,
      v5);
    v9 = -1;
    v6[0] = 50462976;
    v6[1] = 117835012;
    v6[2] = 185207048;
    v6[3] = 252579084;
    for ( j = 0; j <= 0xFu; ++j )
      phy_external_bist_init_rvn(a1, 0, *((_BYTE *)v6 + j), 2u);
    phy_external_bist_rvn(a1, 0, (int)v6, 0x10u);
    set_phy_external_bist_result_rvn();
  }
  return v10;
}
