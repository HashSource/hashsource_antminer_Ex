int __fastcall phy_internal_bist_rvn(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r0
  int v7; // r6
  int v8; // r7
  unsigned int v9; // r0
  _BYTE v15[60]; // [sp+60h] [bp-117Ch] BYREF
  int v16; // [sp+1060h] [bp-17Ch]
  int v17; // [sp+1064h] [bp-178h]
  _DWORD v18[7]; // [sp+1068h] [bp-174h] BYREF
  int v19; // [sp+1084h] [bp-158h]
  _DWORD v20[7]; // [sp+1088h] [bp-154h] BYREF
  int v21; // [sp+10A4h] [bp-138h]
  _DWORD v22[7]; // [sp+10A8h] [bp-134h] BYREF
  int v23; // [sp+10C4h] [bp-118h]
  _DWORD v24[7]; // [sp+10C8h] [bp-114h] BYREF
  int v25; // [sp+10E4h] [bp-F8h]
  _DWORD v26[7]; // [sp+10E8h] [bp-F4h] BYREF
  int v27; // [sp+1104h] [bp-D8h]
  _DWORD v28[7]; // [sp+1108h] [bp-D4h] BYREF
  int v29; // [sp+1124h] [bp-B8h]
  _DWORD v30[7]; // [sp+1128h] [bp-B4h] BYREF
  int v31; // [sp+1144h] [bp-98h]
  _DWORD v32[8]; // [sp+1148h] [bp-94h] BYREF
  _DWORD v33[7]; // [sp+1168h] [bp-74h] BYREF
  int v34; // [sp+1184h] [bp-58h]
  _DWORD v35[9]; // [sp+1188h] [bp-54h] BYREF
  unsigned int v36; // [sp+11ACh] [bp-30h]
  int v37; // [sp+11B0h] [bp-2Ch]
  unsigned __int8 k; // [sp+11B7h] [bp-25h]
  unsigned int j; // [sp+11B8h] [bp-24h]
  unsigned __int8 i; // [sp+11BFh] [bp-1Dh]
  unsigned int m; // [sp+11C0h] [bp-1Ch]
  unsigned __int8 *v42; // [sp+11C4h] [bp-18h]

  V_LOCK();
  sub_1C61DC((int)v18, *(int *)(a1 + 272));
  logfmt_raw(
    v15,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s start",
    "phy_internal_bist_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_internal_bist_rvn",
    21,
    870,
    20,
    v15);
  v42 = (unsigned __int8 *)malloc(0x1800u);
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
  v37 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u);
  if ( v37 )
  {
    V_LOCK();
    sub_1C61DC((int)v20, *(int *)(a1 + 272));
    logfmt_raw(
      v15,
      0x1000u,
      0,
      v21,
      v20[0],
      v20[1],
      v20[2],
      v20[3],
      v20[4],
      v20[5],
      v20[6],
      v21,
      "%s PHY core %02x sram boot failed!",
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      902,
      100,
      v15);
  }
  sub_1D0F04(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_1D0F04(a1, a3, 80, 0);
  usleep(0x12Cu);
  v37 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0);
  if ( v37 )
  {
    V_LOCK();
    sub_1C61DC((int)v22, *(int *)(a1 + 272));
    logfmt_raw(
      v15,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "%s PHY core %02x wait ack failed!",
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      915,
      100,
      v15);
  }
  sub_1D0F04(a1, a3, 82, 0);
  usleep(0x64u);
  V_LOCK();
  sub_1C61DC((int)v24, *(int *)(a1 + 272));
  logfmt_raw(
    v15,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s PHY core %02x sram boot success!",
    "phy_internal_bist_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_internal_bist_rvn",
    21,
    921,
    20,
    v15);
  sub_1DC754(a1, a2, a3, (int)"sram boot");
  phy_pll_switch_rvn(a1, a2, a3, a4);
  sub_1D0F04(a1, a3, 98, -1426085121);
  usleep(0x64u);
  v37 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 64, 0xFF000100);
  if ( v37 )
  {
    V_LOCK();
    sub_1C61DC((int)v26, *(int *)(a1 + 272));
    logfmt_raw(
      v15,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "%s PHY core %02x pcs lock failed!",
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      934,
      100,
      v15);
  }
  sub_1D0F04(a1, a3, 133, 255);
  usleep(0x64u);
  sub_1D0F04(a1, a3, 134, 255);
  usleep(0x64u);
  sub_1D0F04(a1, a3, 132, -2147483647);
  sleep(6u);
  v37 = check_core_reg_with_expect_data_rvn(a1, a2, a3, 139, 0xFF0000FF);
  if ( v37 )
  {
    V_LOCK();
    sub_1C61DC((int)v28, *(int *)(a1 + 272));
    logfmt_raw(
      v15,
      0x1000u,
      0,
      v29,
      v28[0],
      v28[1],
      v28[2],
      v28[3],
      v28[4],
      v28[5],
      v28[6],
      v29,
      "%s PHY core %02x mac bist failed!",
      "phy_internal_bist_rvn",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_internal_bist_rvn",
      21,
      950,
      100,
      v15);
  }
  v17 = -1970698105;
  for ( i = 0; i <= 4u; ++i )
  {
    v36 = sub_1D13F0(a1, a3, *((unsigned __int8 *)&v18[-1] + i), v42);
    for ( j = 0; v36 > j; ++j )
    {
      if ( *(_DWORD *)&v42[12 * j] )
      {
        V_LOCK();
        sub_1C61DC((int)v30, *(int *)(a1 + 272));
        sub_1C61DC((int)v32, *(int *)(a1 + 272));
        v4 = v42[12 * j + 8];
        v5 = *(unsigned __int16 *)&v42[12 * j + 6];
        v6 = sub_1C65C0(*(_DWORD *)&v42[12 * j]);
        logfmt_raw(
          v15,
          0x1000u,
          0,
          v31,
          v30[0],
          v30[1],
          v30[2],
          v30[3],
          v30[4],
          v30[5],
          v30[6],
          v31,
          v32[0],
          v32[1],
          v32[2],
          v32[3],
          v32[4],
          v32[5],
          v32[6],
          v32[7],
          "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %08x",
          a2,
          v4,
          v5,
          v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          174,
          "phy_internal_bist_rvn",
          21,
          963,
          60,
          v15);
      }
    }
  }
  v16 = -2088599168;
  for ( k = 0; k <= 4u; ++k )
  {
    v36 = sub_1D13F0(a1, a3, *((unsigned __int8 *)&v16 + k), v42);
    for ( m = 0; v36 > m; ++m )
    {
      if ( *(_DWORD *)&v42[12 * m] )
      {
        V_LOCK();
        sub_1C61DC((int)v33, *(int *)(a1 + 272));
        sub_1C61DC((int)v35, *(int *)(a1 + 272));
        v7 = v42[12 * m + 8];
        v8 = *(unsigned __int16 *)&v42[12 * m + 6];
        v9 = sub_1C65C0(*(_DWORD *)&v42[12 * m]);
        logfmt_raw(
          v15,
          0x1000u,
          0,
          v34,
          v33[0],
          v33[1],
          v33[2],
          v33[3],
          v33[4],
          v33[5],
          v33[6],
          v34,
          v35[0],
          v35[1],
          v35[2],
          v35[3],
          v35[4],
          v35[5],
          v35[6],
          v35[7],
          "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %08x",
          a2,
          v7,
          v8,
          v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
          174,
          "phy_internal_bist_rvn",
          21,
          978,
          60,
          v15);
      }
    }
  }
  return 0;
}
