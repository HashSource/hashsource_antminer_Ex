int __fastcall close_core_clk_tops_rvn(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "close_core_clk_tops_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "close_core_clk_tops_rvn",
    23,
    180,
    20,
    &v3);
  sub_1B47A0(a1, 22, -2147483642);
  usleep(0x2710u);
  return 0;
}
