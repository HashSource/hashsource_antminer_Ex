int __fastcall set_work_debug_eth_2282(int a1, int a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s...", "set_work_debug_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_work_debug_eth_2282",
    23,
    1050,
    20,
    &v5);
  sub_106D34(a1, 57, a2);
  usleep(0x2710u);
  return 0;
}
