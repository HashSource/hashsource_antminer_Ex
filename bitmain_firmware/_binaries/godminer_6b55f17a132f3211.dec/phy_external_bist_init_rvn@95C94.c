int __fastcall phy_external_bist_init_rvn(int a1, int a2, unsigned int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v16; // r0
  _DWORD v17[4]; // [sp+0h] [bp-10DCh] BYREF
  int v18; // [sp+10h] [bp-10CCh]
  int v19; // [sp+14h] [bp-10C8h]
  int v20; // [sp+18h] [bp-10C4h]
  int v21; // [sp+1Ch] [bp-10C0h]
  const char *v22; // [sp+20h] [bp-10BCh]
  const char *v23; // [sp+24h] [bp-10B8h]
  unsigned int v24; // [sp+28h] [bp-10B4h]
  const char *v25; // [sp+2Ch] [bp-10B0h]
  int v26; // [sp+30h] [bp-10ACh]
  _DWORD *v27; // [sp+34h] [bp-10A8h]
  _DWORD v28[8]; // [sp+38h] [bp-10A4h] BYREF
  _BYTE v29[16]; // [sp+58h] [bp-1084h] BYREF
  int v30; // [sp+68h] [bp-1074h]
  int v31; // [sp+6Ch] [bp-1070h]
  int v32; // [sp+70h] [bp-106Ch]
  int v33; // [sp+74h] [bp-1068h]
  _DWORD v34[8]; // [sp+78h] [bp-1064h] BYREF
  _BYTE v35[16]; // [sp+98h] [bp-1044h] BYREF
  int v36; // [sp+A8h] [bp-1034h]
  int v37; // [sp+ACh] [bp-1030h]
  int v38; // [sp+B0h] [bp-102Ch]
  int v39; // [sp+B4h] [bp-1028h]
  _DWORD v40[8]; // [sp+B8h] [bp-1024h] BYREF
  _BYTE v41[4100]; // [sp+D8h] [bp-1004h] BYREF

  v26 = a4;
  V_LOCK(a1);
  V_INT((int)v28, "chain");
  v22 = "%s PHY core %02x start";
  v24 = a3;
  v23 = "phy_external_bist_init_rvn";
  v18 = v28[4];
  v19 = v28[5];
  v20 = v28[6];
  v21 = v28[7];
  v7 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    173,
    "phy_external_bist_init_rvn",
    26,
    988,
    60,
    v41);
  sub_8E400(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 88, -1);
  usleep(0x12Cu);
  v8 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u);
  if ( v8 )
  {
    V_LOCK(v8);
    V_INT((int)v29, "chain");
    v24 = a3;
    v23 = "phy_external_bist_init_rvn";
    v22 = "%s PHY core %02x sram boot failed!";
    v18 = v30;
    v19 = v31;
    v20 = v32;
    v21 = v33;
    v16 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
      173,
      "phy_external_bist_init_rvn",
      26,
      1041,
      100,
      v41);
  }
  sub_8E400(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_8E400(a1, a3, 80, 0);
  usleep(0x12Cu);
  v9 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0);
  if ( v9 )
  {
    V_LOCK(v9);
    V_INT((int)v34, "chain");
    v24 = a3;
    v23 = "phy_external_bist_init_rvn";
    v22 = "%s PHY core %02x wait ack failed!";
    v18 = v34[4];
    v19 = v34[5];
    v20 = v34[6];
    v21 = v34[7];
    v10 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
      173,
      "phy_external_bist_init_rvn",
      26,
      1068,
      100,
      v41);
  }
  sub_8E400(a1, a3, 82, 0);
  v11 = usleep(0x64u);
  V_LOCK(v11);
  V_INT((int)v35, "chain");
  v23 = "phy_external_bist_init_rvn";
  v24 = a3;
  v22 = "%s PHY core %02x sram boot success!";
  v18 = v36;
  v19 = v37;
  v20 = v38;
  v21 = v39;
  v12 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    173,
    "phy_external_bist_init_rvn",
    26,
    1074,
    100,
    v41);
  sub_8E400(a1, a3, 83, 16711935);
  v13 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0);
  if ( v13 )
  {
    V_LOCK(v13);
    V_INT((int)v40, "chain");
    v22 = "%s PHY core %02x %s handshake failed!";
    v25 = "sram boot";
    v24 = a3;
    v23 = "phy_handshake_rvn";
    v27 = v17;
    v17[0] = v40[0];
    v17[1] = v40[1];
    v17[2] = v40[2];
    v17[3] = v40[3];
    v18 = v40[4];
    v19 = v40[5];
    v20 = v40[6];
    v21 = v40[7];
    v14 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
      173,
      "phy_handshake_rvn",
      17,
      827,
      100,
      v41);
  }
  phy_pll_switch_rvn(a1, a2, a3, v26);
  return usleep(0x64u);
}
