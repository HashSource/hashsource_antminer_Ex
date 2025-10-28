int __fastcall phy_external_bist_init_rvn(int a1, int a2, unsigned int a3, int a4)
{
  char *v7; // r1
  int v8; // r7
  int v9; // r1
  char *v10; // r1
  int v11; // r11
  int v12; // r1
  int v13; // r10
  char *v14; // r1
  int v15; // r1
  char *v16; // r1
  int v17; // r10
  int v18; // lr
  int v19; // r1
  char *v21; // r1
  int v22; // r1
  int v23; // [sp+0h] [bp-10DCh] BYREF
  int v24; // [sp+30h] [bp-10ACh]
  int *v25; // [sp+34h] [bp-10A8h]
  _DWORD v26[7]; // [sp+38h] [bp-10A4h] BYREF
  int v27; // [sp+54h] [bp-1088h]
  _DWORD v28[7]; // [sp+58h] [bp-1084h] BYREF
  int v29; // [sp+74h] [bp-1068h]
  _DWORD v30[7]; // [sp+78h] [bp-1064h] BYREF
  int v31; // [sp+94h] [bp-1048h]
  _DWORD v32[7]; // [sp+98h] [bp-1044h] BYREF
  int v33; // [sp+B4h] [bp-1028h]
  _DWORD v34[7]; // [sp+B8h] [bp-1024h] BYREF
  int v35; // [sp+D4h] [bp-1008h]
  char v36[4100]; // [sp+D8h] [bp-1004h] BYREF

  v24 = a4;
  V_LOCK();
  LOWORD(v7) = 23936;
  HIWORD(v7) = (unsigned int)"p" >> 16;
  V_INT((int)v26, v7, *(int *)(a1 + 248));
  LOWORD(v8) = -9628;
  HIWORD(v8) = (unsigned int)" RX coarse adaptation" >> 16;
  logfmt_raw(
    v36,
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
    v8,
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v9) = 7540;
  HIWORD(v9) = (unsigned int)"" >> 16;
  zlog(g_zc, v9, 177, "phy_external_bist_init_rvn", 26, 988, 60, v36);
  sub_AE358(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    LOWORD(v21) = 23936;
    HIWORD(v21) = (unsigned int)"p" >> 16;
    V_INT((int)v28, v21, *(int *)(a1 + 248));
    logfmt_raw(
      v36,
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
      "%s PHY core %02x sram boot failed!",
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    LOWORD(v22) = 7540;
    HIWORD(v22) = (unsigned int)"" >> 16;
    zlog(g_zc, v22, 177, "phy_external_bist_init_rvn", 26, 1041, 100, v36);
  }
  sub_AE358(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_AE358(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    LOWORD(v10) = 23936;
    HIWORD(v10) = (unsigned int)"p" >> 16;
    V_INT((int)v30, v10, *(int *)(a1 + 248));
    LOWORD(v11) = -11744;
    HIWORD(v11) = (unsigned int)"" >> 16;
    logfmt_raw(
      v36,
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
      v11,
      "phy_external_bist_init_rvn",
      a3);
    V_UNLOCK();
    LOWORD(v12) = 7540;
    HIWORD(v12) = (unsigned int)"" >> 16;
    zlog(g_zc, v12, 177, "phy_external_bist_init_rvn", 26, 1068, 100, v36);
  }
  sub_AE358(a1, a3, 82, 0);
  LOWORD(v13) = -11708;
  usleep(0x64u);
  V_LOCK();
  LOWORD(v14) = 23936;
  HIWORD(v14) = (unsigned int)"p" >> 16;
  V_INT((int)v32, v14, *(int *)(a1 + 248));
  HIWORD(v13) = (unsigned int)"%02x wait ack failed!" >> 16;
  logfmt_raw(
    v36,
    0x1000u,
    0,
    v33,
    v32[0],
    v32[1],
    v32[2],
    v32[3],
    v32[4],
    v32[5],
    v32[6],
    v33,
    v13,
    "phy_external_bist_init_rvn",
    a3);
  V_UNLOCK();
  LOWORD(v15) = 7540;
  HIWORD(v15) = (unsigned int)"" >> 16;
  zlog(g_zc, v15, 177, "phy_external_bist_init_rvn", 26, 1074, 100, v36);
  sub_AE358(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data_rvn(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    LOWORD(v16) = 23936;
    HIWORD(v16) = (unsigned int)"p" >> 16;
    V_INT((int)v34, v16, *(int *)(a1 + 248));
    LOWORD(v17) = -14744;
    LOWORD(v18) = -11672;
    HIWORD(v17) = (unsigned int)" reg %02x state %08x" >> 16;
    HIWORD(v18) = (unsigned int)"%02x sram boot success!" >> 16;
    v25 = &v23;
    logfmt_raw(
      v36,
      0x1000u,
      0,
      v35,
      v34[0],
      v34[1],
      v34[2],
      v34[3],
      v34[4],
      v34[5],
      v34[6],
      v35,
      v17,
      "phy_handshake_rvn",
      a3,
      v18,
      v24);
    V_UNLOCK();
    LOWORD(v19) = 7540;
    HIWORD(v19) = (unsigned int)"" >> 16;
    zlog(g_zc, v19, 177, "phy_handshake_rvn", 17, 827, 100, v36);
  }
  phy_pll_switch_rvn(a1, a2, a3, v24);
  return usleep(0x64u);
}
