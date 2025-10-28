int __fastcall open_core_dram_clk(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-1020h] BYREF
  int v4; // [sp+44h] [bp-1004h]
  char v5[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 248));
  logfmt_raw(v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "open_core_dram_clk...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "open_core_dram_clk",
    18,
    1431,
    60,
    v5);
  sub_A3F90(a1, 15, 3);
  usleep(0x2710u);
  sub_A3F90(a1, 9, 7);
  usleep(0x2710u);
  return 0;
}
