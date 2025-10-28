int __fastcall sub_A1D38(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-1014h]
  int v6; // [sp+10h] [bp-1010h] BYREF
  unsigned __int16 v7; // [sp+18h] [bp-1008h]
  unsigned __int16 v8; // [sp+1Ah] [bp-1006h]
  int v9; // [sp+1Ch] [bp-1004h]
  char v10[4096]; // [sp+20h] [bp-1000h] BYREF

  LOBYTE(v7) = 0;
  HIBYTE(v7) = a2;
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, "%s chip_addr %02x reg %02x", "open_33p_double_results_grin29", a2, 2, v5, 0, 0, v7, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_grin29/backend_grin29.c",
    160,
    "open_33p_double_results_grin29",
    30,
    264,
    60,
    v10);
  v6 = 1;
  v8 = 2;
  LOBYTE(v9) = -1;
  if ( (*(int (__fastcall **)(int, int *))(a1 + 160))(a1, &v6) < 0 )
  {
    printf("%s failed, reg:%02x, core_id:%d", "open_33p_double_results_grin29", v8, 0);
    return -1;
  }
  else
  {
    usleep(0x4E20u);
    return 0;
  }
}
