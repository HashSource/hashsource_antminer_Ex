int __fastcall phy_external_bist_init_rvn(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r3
  _BYTE v10[20]; // [sp+38h] [bp-1094h] BYREF
  _DWORD v11[7]; // [sp+1038h] [bp-94h] BYREF
  int v12; // [sp+1054h] [bp-78h]
  _DWORD v13[7]; // [sp+1058h] [bp-74h] BYREF
  int v14; // [sp+1074h] [bp-58h]
  _DWORD v15[7]; // [sp+1078h] [bp-54h] BYREF
  int v16; // [sp+1094h] [bp-38h]
  _DWORD v17[7]; // [sp+1098h] [bp-34h] BYREF
  int v18; // [sp+10B4h] [bp-18h]
  int v19; // [sp+10B8h] [bp-14h]
  void *v20; // [sp+10BCh] [bp-10h]

  V_LOCK();
  sub_1C61DC((int)v11, *(int *)(a1 + 272));
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v12,
    v11[0],
    v11[1],
    v11[2],
    v11[3],
    v11[4],
    v11[5],
    v11[6],
    v12,
    "%s PHY core %02x start",
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_init_rvn",
    26,
    988,
    60,
    v10);
  v20 = malloc(0x1800u);
  sub_1D0F04(a1, a3, 86, (int)&unk_380008);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 88, -1);
  usleep(0x12Cu);
  v19 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u);
  if ( v19 )
  {
    V_LOCK();
    sub_1C61DC((int)v13, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
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
      "%s PHY core %02x sram boot failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_external_bist_init_rvn",
      26,
      1041,
      100,
      v10);
  }
  sub_1D0F04(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 80, 0);
  usleep(0x12Cu);
  v19 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0);
  if ( v19 )
  {
    V_LOCK();
    sub_1C61DC((int)v15, *(int *)(a1 + 272));
    logfmt_raw(
      v10,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      "%s PHY core %02x wait ack failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_external_bist_init_rvn",
      26,
      1068,
      100,
      v10);
  }
  sub_1D0F04(a1, a3, 82, 0);
  usleep(0x64u);
  V_LOCK();
  sub_1C61DC((int)v17, *(int *)(a1 + 272));
  logfmt_raw(
    v10,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s PHY core %02x sram boot success!",
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_external_bist_init_rvn",
    26,
    1074,
    100,
    v10);
  sub_1DC754(a1, a2, a3, (int)"sram boot");
  phy_pll_switch_rvn(a1, a2, a3, a4);
  usleep(0x64u);
  return v4;
}
