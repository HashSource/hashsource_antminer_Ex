int __fastcall dram_bist_check_ltc_status_rvn(unsigned __int8 a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  int v9; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(
    &v9,
    0x1000u,
    0,
    "%s chip-%d err_status-send_status: %03b-%03b",
    "dram_bist_check_ltc_status_rvn",
    a4,
    a1,
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "dram_bist_check_ltc_status_rvn",
    30,
    2557,
    40,
    &v9);
  switch ( a1 )
  {
    case 0u:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      logfmt_raw(&v9, 0x1000u, 0, "%s chip-%d can not repair, not upload data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_ltc_status_rvn",
        30,
        2561,
        40,
        &v9);
      break;
    case 1u:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      logfmt_raw(&v9, 0x1000u, 0, "%s chip-%d no need repair, not upload data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_ltc_status_rvn",
        30,
        2565,
        40,
        &v9);
      break;
    case 2u:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      logfmt_raw(&v9, 0x1000u, 0, "%s chip-%d row repair 1, upload row data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_ltc_status_rvn",
        30,
        2569,
        40,
        &v9);
      break;
    case 4u:
      *(_BYTE *)(a3 + a4) = -30;
      V_LOCK();
      logfmt_raw(
        &v9,
        0x1000u,
        0,
        "%s chip-%d row and col repair, upload all data",
        "dram_bist_check_ltc_status_rvn",
        a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_ltc_status_rvn",
        30,
        2577,
        40,
        &v9);
      break;
    case 6u:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      logfmt_raw(&v9, 0x1000u, 0, "%s chip-%d row repair 2, upload row data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_ltc_status_rvn",
        30,
        2573,
        40,
        &v9);
      break;
    default:
      V_LOCK();
      logfmt_raw(&v9, 0x1000u, 0, "%s chip-%d status not ready!", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
        171,
        "dram_bist_check_ltc_status_rvn",
        30,
        2580,
        40,
        &v9);
      break;
  }
  return 0;
}
