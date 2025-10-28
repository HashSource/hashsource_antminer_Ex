int __fastcall dram_bist_check_ltc_status_rvn(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r2
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(
    v11,
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
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "dram_bist_check_ltc_status_rvn",
    30,
    2557,
    40,
    v11);
  switch ( a1 )
  {
    case 0:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s chip-%d can not repair, not upload data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v8 = g_zc;
      v9 = 2561;
      break;
    case 1:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s chip-%d no need repair, not upload data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v8 = g_zc;
      v9 = 2565;
      break;
    case 2:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s chip-%d row repair 1, upload row data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v8 = g_zc;
      v9 = 2569;
      break;
    case 4:
      *(_BYTE *)(a3 + a4) = -30;
      V_LOCK();
      logfmt_raw(
        v11,
        0x1000u,
        0,
        "%s chip-%d row and col repair, upload all data",
        "dram_bist_check_ltc_status_rvn",
        a4);
      V_UNLOCK();
      v8 = g_zc;
      v9 = 2577;
      break;
    case 6:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s chip-%d row repair 2, upload row data", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v8 = g_zc;
      v9 = 2573;
      break;
    default:
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "%s chip-%d status not ready!", "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v8 = g_zc;
      v9 = 2580;
      break;
  }
  zlog(
    v8,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "dram_bist_check_ltc_status_rvn",
    30,
    v9,
    40,
    v11);
  return 0;
}
