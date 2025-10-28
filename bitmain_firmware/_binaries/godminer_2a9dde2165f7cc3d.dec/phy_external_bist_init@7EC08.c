int __fastcall phy_external_bist_init(int a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r0
  int v8; // r0
  unsigned __int8 *v9; // r2
  int v10; // r9
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  unsigned __int16 v16; // r8
  int v17; // r0
  int v18; // r0
  int v20; // r0
  int v21; // r0
  unsigned __int8 v22; // [sp+38h] [bp-10DCh]
  unsigned __int8 v23; // [sp+3Ch] [bp-10D8h]
  unsigned __int8 v25; // [sp+48h] [bp-10CCh]
  unsigned __int8 v26; // [sp+4Fh] [bp-10C5h] BYREF
  _BYTE v27[32]; // [sp+50h] [bp-10C4h] BYREF
  int v28; // [sp+70h] [bp-10A4h] BYREF
  _BYTE v29[32]; // [sp+90h] [bp-1084h] BYREF
  int v30; // [sp+B0h] [bp-1064h] BYREF
  _BYTE v31[32]; // [sp+D0h] [bp-1044h] BYREF
  int v32; // [sp+F0h] [bp-1024h] BYREF
  _BYTE v33[4080]; // [sp+110h] [bp-1004h] BYREF

  v26 = a3;
  V_LOCK(a1);
  V_INT((int)v27, "chain");
  v7 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
         177,
         "phy_external_bist_init",
         22,
         1051,
         60,
         v33);
  v9 = (unsigned __int8 *)&eth_2280_phy_eq + 16 * a5;
  v10 = v9[12];
  v22 = *v9;
  v25 = v9[4];
  v23 = v9[8];
  V_LOCK(v8);
  V_INT((int)&v28, "chain");
  v11 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    177,
    "phy_external_bist_init",
    22,
    1071,
    60,
    v33);
  sub_76204(a1, v26, 86, 3670024);
  usleep(0x12Cu);
  sub_76204(a1, v26, 85, 109905420);
  usleep(0x12Cu);
  sub_76204(a1, v26, 101, -268374016);
  usleep(0x12Cu);
  sub_76204(a1, v26, 64, 256);
  usleep(0x12Cu);
  sub_76204(a1, v26, 80, 33423870);
  usleep(0x12Cu);
  sub_76204(a1, v26, 81, 832516511);
  usleep(0x12Cu);
  sub_76204(a1, v26, 88, -1);
  usleep(0x12Cu);
  v12 = check_core_reg_with_expect_data_eth(a1, a2, v26, 125, 0x70007000u);
  if ( v12 )
  {
    V_LOCK(v12);
    V_INT((int)v29, "chain");
    v21 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_external_bist_init",
      22,
      1104,
      100,
      v33);
  }
  phy_eq_main_set_by_apb(a1, a2, &v26, 1, v22);
  phy_eq_pre_set_by_apb(a1, a2, &v26, 1, v25);
  phy_eq_post_set_by_apb(a1, a2, &v26, 1, v23);
  sub_76204(a1, v26, 86, 137889800);
  usleep(0x12Cu);
  sub_76204(a1, v26, 80, 0);
  usleep(0x12Cu);
  v13 = check_core_reg_with_expect_data(a1, a2, v26, 119, 0);
  if ( v13 )
  {
    V_LOCK(v13);
    V_INT((int)&v30, "chain");
    v20 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_external_bist_init",
      22,
      1131,
      100,
      v33);
  }
  sub_76204(a1, v26, 82, 0);
  v14 = usleep(0x64u);
  V_LOCK(v14);
  V_INT((int)v31, "chain");
  v15 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    177,
    "phy_external_bist_init",
    22,
    1137,
    100,
    v33);
  v16 = v26;
  sub_76204(a1, v26, 83, 16711935);
  v17 = check_core_reg_with_expect_data(a1, a2, v16, 83, 0);
  if ( v17 )
  {
    V_LOCK(v17);
    V_INT((int)&v32, "chain");
    v18 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      177,
      "phy_handshake",
      13,
      890,
      100,
      v33);
  }
  phy_pll_switch(a1, a2, v26, a4);
  if ( v10 )
    phy_rx_adapt(a1, a2, v26);
  return usleep(0x64u);
}
