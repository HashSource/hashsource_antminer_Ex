int __fastcall bringup_eth_2282(int a1)
{
  __int64 v1; // r0
  _BYTE v4[60]; // [sp+30h] [bp-12FCh] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-2FCh] BYREF
  int v6; // [sp+104Ch] [bp-2E0h]
  _DWORD v7[7]; // [sp+1050h] [bp-2DCh] BYREF
  int v8; // [sp+106Ch] [bp-2C0h]
  _DWORD v9[7]; // [sp+1070h] [bp-2BCh] BYREF
  int v10; // [sp+108Ch] [bp-2A0h]
  _DWORD v11[7]; // [sp+1090h] [bp-29Ch] BYREF
  int v12; // [sp+10ACh] [bp-280h]
  _DWORD v13[7]; // [sp+10B0h] [bp-27Ch] BYREF
  int v14; // [sp+10CCh] [bp-260h]
  _DWORD v15[7]; // [sp+10D0h] [bp-25Ch] BYREF
  int v16; // [sp+10ECh] [bp-240h]
  _DWORD v17[7]; // [sp+10F0h] [bp-23Ch] BYREF
  int v18; // [sp+110Ch] [bp-220h]
  _DWORD v19[7]; // [sp+1110h] [bp-21Ch] BYREF
  int v20; // [sp+112Ch] [bp-200h]
  _DWORD v21[7]; // [sp+1130h] [bp-1FCh] BYREF
  int v22; // [sp+114Ch] [bp-1E0h]
  _DWORD v23[7]; // [sp+1150h] [bp-1DCh] BYREF
  int v24; // [sp+116Ch] [bp-1C0h]
  _DWORD v25[7]; // [sp+1170h] [bp-1BCh] BYREF
  int v26; // [sp+118Ch] [bp-1A0h]
  _DWORD v27[7]; // [sp+1190h] [bp-19Ch] BYREF
  int v28; // [sp+11ACh] [bp-180h]
  _DWORD v29[7]; // [sp+11B0h] [bp-17Ch] BYREF
  int v30; // [sp+11CCh] [bp-160h]
  _DWORD v31[7]; // [sp+11D0h] [bp-15Ch] BYREF
  int v32; // [sp+11ECh] [bp-140h]
  _DWORD v33[7]; // [sp+11F0h] [bp-13Ch] BYREF
  int v34; // [sp+120Ch] [bp-120h]
  _DWORD v35[7]; // [sp+1210h] [bp-11Ch] BYREF
  int v36; // [sp+122Ch] [bp-100h]
  _DWORD v37[7]; // [sp+1230h] [bp-FCh] BYREF
  int v38; // [sp+124Ch] [bp-E0h]
  _DWORD v39[7]; // [sp+1250h] [bp-DCh] BYREF
  int v40; // [sp+126Ch] [bp-C0h]
  _DWORD v41[7]; // [sp+1270h] [bp-BCh] BYREF
  int v42; // [sp+128Ch] [bp-A0h]
  _DWORD v43[7]; // [sp+1290h] [bp-9Ch] BYREF
  int v44; // [sp+12ACh] [bp-80h]
  _DWORD v45[7]; // [sp+12B0h] [bp-7Ch] BYREF
  int v46; // [sp+12CCh] [bp-60h]
  _DWORD v47[7]; // [sp+12D0h] [bp-5Ch] BYREF
  int v48; // [sp+12ECh] [bp-40h]
  _DWORD v49[7]; // [sp+12F0h] [bp-3Ch] BYREF
  int v50; // [sp+130Ch] [bp-20h]
  int v51; // [sp+1314h] [bp-18h]
  int j; // [sp+1318h] [bp-14h]
  int i; // [sp+131Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s ...", "bringup_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "bringup_eth_2282",
    16,
    8810,
    40,
    v4);
  if ( case_select == 11 || case_select == 13 )
  {
    V_LOCK();
    sub_FBD60((int)v7, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
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
      "ltc check start...",
      "bringup_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bringup_eth_2282",
      16,
      8813,
      60,
      v4);
    ltc_check_eth_2282(a1);
    if ( case_select != 13 )
    {
      while ( 1 )
        ;
    }
  }
  switch ( case_select )
  {
    case 0:
      V_LOCK();
      sub_FBD60((int)v9, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "top reg check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8820,
        60,
        v4);
      top_reg_check_eth_2282(a1, 0);
      while ( 1 )
        ;
    case 1:
      V_LOCK();
      sub_FBD60((int)v11, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
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
        "core reg check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8826,
        60,
        v4);
      core_reg_check_eth_2282(a1, 0);
      while ( 1 )
        ;
    case 2:
      V_LOCK();
      sub_FBD60((int)v13, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
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
        "temp sensor check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8832,
        60,
        v4);
      read_temperature_hashboard_eth_2282(a1, v51);
      while ( 1 )
        ;
    case 3:
      V_LOCK();
      sub_FBD60((int)v15, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
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
        "pll check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8839,
        60,
        v4);
      for ( i = 1; i <= 19; ++i )
        set_frequency_eth_2282(a1, 0);
      for ( j = 1; j <= 19; ++j )
        set_frequency_eth_2282(a1, 1);
      while ( 1 )
        ;
    case 4:
      V_LOCK();
      sub_FBD60((int)v17, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
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
        "tsv check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8852,
        60,
        v4);
      tsv_test_eth_2282(a1, 0);
      while ( 1 )
        ;
    case 5:
      V_LOCK();
      sub_FBD60((int)v19, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "vmont check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8858,
        60,
        v4);
      vmont_test_eth_2282(a1);
      while ( 1 )
        ;
    case 10:
      V_LOCK();
      sub_FBD60((int)v21, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
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
        "etc bist test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8864,
        60,
        v4);
      ltc_check_eth_2282(a1);
      exit(0);
      break;
  }
  if ( case_select == 14 )
  {
    V_LOCK();
    sub_FBD60((int)v23, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v24,
      v23[0],
      v23[1],
      v23[2],
      v23[3],
      v23[4],
      v23[5],
      v23[6],
      v24,
      "etc mining test start...",
      "bringup_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bringup_eth_2282",
      16,
      8871,
      60,
      v4);
    mining_start_eth_2282(a1);
  }
  if ( case_select == 15 )
  {
    V_LOCK();
    sub_FBD60((int)v25, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v26,
      v25[0],
      v25[1],
      v25[2],
      v25[3],
      v25[4],
      v25[5],
      v25[6],
      v26,
      "etc list freq mining test start...",
      "bringup_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bringup_eth_2282",
      16,
      8877,
      60,
      v4);
    mining_list_freq_eth_2282(a1);
    exit(0);
  }
  if ( case_select == 8 || case_select == 9 )
  {
    V_LOCK();
    sub_FBD60((int)v27, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v28,
      v27[0],
      v27[1],
      v27[2],
      v27[3],
      v27[4],
      v27[5],
      v27[6],
      v28,
      "dag and cache gen test start...",
      "bringup_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bringup_eth_2282",
      16,
      8884,
      60,
      v4);
    fake_dag_gen_eth_2282(a1);
    while ( 1 )
      ;
  }
  if ( case_select == 6 )
  {
    V_LOCK();
    sub_FBD60((int)v29, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      "etc dag bypass mining start...",
      "bringup_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bringup_eth_2282",
      16,
      8896,
      60,
      v4);
    pattern_bypass_test_eth_2282(a1);
  }
  switch ( case_select )
  {
    case 15:
      V_LOCK();
      sub_FBD60((int)v31, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v32,
        v31[0],
        v31[1],
        v31[2],
        v31[3],
        v31[4],
        v31[5],
        v31[6],
        v32,
        "chip status check start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8903,
        60,
        v4);
      chipstatus_test_eth_2282(a1, 1);
      while ( 1 )
        ;
    case 16:
      V_LOCK();
      sub_FBD60((int)v33, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
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
        "hashcounting start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8909,
        60,
        v4);
      hashcounting_test_eth_2282(a1, 0);
      while ( 1 )
        ;
    case 17:
      V_LOCK();
      sub_FBD60((int)v35, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v36,
        v35[0],
        v35[1],
        v35[2],
        v35[3],
        v35[4],
        v35[5],
        v35[6],
        v36,
        "pm test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8915,
        60,
        v4);
      read_pm_test_eth_2282(a1);
      while ( 1 )
        ;
    case 18:
      V_LOCK();
      sub_FBD60((int)v37, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v38,
        v37[0],
        v37[1],
        v37[2],
        v37[3],
        v37[4],
        v37[5],
        v37[6],
        v38,
        "ip3 LONG test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8921,
        60,
        v4);
      ip3_test_eth_2282(a1, 0, 1);
      while ( 1 )
        ;
    case 19:
      V_LOCK();
      sub_FBD60((int)v39, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v40,
        v39[0],
        v39[1],
        v39[2],
        v39[3],
        v39[4],
        v39[5],
        v39[6],
        v40,
        "ip3 SHORT test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8927,
        60,
        v4);
      ip3_test_eth_2282(a1, 2, 3);
      while ( 1 )
        ;
    case 20:
      V_LOCK();
      sub_FBD60((int)v41, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v42,
        v41[0],
        v41[1],
        v41[2],
        v41[3],
        v41[4],
        v41[5],
        v41[6],
        v42,
        "phy12 test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8933,
        60,
        v4);
      ph12test_eth_2282();
      while ( 1 )
        ;
    case 21:
      V_LOCK();
      sub_FBD60((int)v43, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v44,
        v43[0],
        v43[1],
        v43[2],
        v43[3],
        v43[4],
        v43[5],
        v43[6],
        v44,
        "phy13 test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8939,
        60,
        v4);
      ph13test_eth_2282();
      while ( 1 )
        ;
    case 24:
      V_LOCK();
      sub_FBD60((int)v45, *(int *)(a1 + 272));
      logfmt_raw(
        v4,
        0x1000u,
        0,
        v46,
        v45[0],
        v45[1],
        v45[2],
        v45[3],
        v45[4],
        v45[5],
        v45[6],
        v46,
        "etc mining single core test start...",
        "bringup_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "bringup_eth_2282",
        16,
        8947,
        60,
        v4);
      mining_start_eth_2282(a1);
      break;
  }
  if ( case_select == 26 )
  {
    V_LOCK();
    sub_FBD60((int)v47, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v48,
      v47[0],
      v47[1],
      v47[2],
      v47[3],
      v47[4],
      v47[5],
      v47[6],
      v48,
      "dram rw test start...",
      "bringup_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "bringup_eth_2282",
      16,
      8952,
      60,
      v4);
    dag_rx_get_eth_2282(a1);
    while ( 1 )
      ;
  }
  if ( case_select == 27 )
  {
    V_LOCK();
    sub_FBD60((int)v49, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v50,
      v49[0],
      v49[1],
      v49[2],
      v49[3],
      v49[4],
      v49[5],
      v49[6],
      v50,
      "print ltc result...",
      "bringup_eth_2282");
    V_UNLOCK();
    v1 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
           171,
           "bringup_eth_2282",
           16,
           8959,
           60,
           v4);
    print_ltc_bist_eth_2282(a1, HIDWORD(v1));
    while ( 1 )
      ;
  }
  return 0;
}
