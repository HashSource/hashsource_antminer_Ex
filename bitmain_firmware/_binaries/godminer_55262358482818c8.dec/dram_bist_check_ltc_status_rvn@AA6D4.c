int __fastcall dram_bist_check_ltc_status_rvn(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r0
  int v12; // r2
  int v13; // r1
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  char v20[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v8) = 6036;
  HIWORD(v8) = (unsigned int)"level = P%d is invalid!" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v8, "dram_bist_check_ltc_status_rvn", a4, a1, a2);
  V_UNLOCK();
  LOWORD(v9) = 5292;
  HIWORD(v9) = (unsigned int)&unk_171494 >> 16;
  zlog(g_zc, v9, 174, "dram_bist_check_ltc_status_rvn", 30, 2557, 40, v20);
  switch ( a1 )
  {
    case 0:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      LOWORD(v15) = 6084;
      HIWORD(v15) = (unsigned int)"nd_status: %03b-%03b" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v15, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2561;
      break;
    case 1:
      *(_BYTE *)(a3 + a4) = 0;
      V_LOCK();
      LOWORD(v16) = 6128;
      HIWORD(v16) = (unsigned int)"epair, not upload data" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v16, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2565;
      break;
    case 2:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      LOWORD(v17) = 6172;
      HIWORD(v17) = (unsigned int)"epair, not upload data" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v17, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2569;
      break;
    case 4:
      *(_BYTE *)(a3 + a4) = -30;
      V_LOCK();
      LOWORD(v18) = 6260;
      HIWORD(v18) = (unsigned int)"r 2, upload row data" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v18, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2577;
      break;
    case 6:
      *(_BYTE *)(a3 + a4) = 1;
      V_LOCK();
      LOWORD(v10) = 6216;
      HIWORD(v10) = (unsigned int)"r 1, upload row data" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v10, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2573;
      break;
    default:
      V_LOCK();
      LOWORD(v19) = 6308;
      HIWORD(v19) = (unsigned int)"epair, upload all data" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v19, "dram_bist_check_ltc_status_rvn", a4);
      V_UNLOCK();
      v11 = g_zc;
      v12 = 2580;
      break;
  }
  LOWORD(v13) = 5292;
  HIWORD(v13) = (unsigned int)&unk_171494 >> 16;
  zlog(v11, v13, 174, "dram_bist_check_ltc_status_rvn", 30, v12, 40, v20);
  return 0;
}
