int __fastcall setup_count_sync_eth_2282(int a1, char a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s...", "setup_count_sync_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "setup_count_sync_eth_2282",
    25,
    675,
    20,
    &v5);
  sub_1070C8(a1, a2, 202, 0);
  sub_1070C8(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_1070C8(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync_eth_2282(a1, a2);
  return 0;
}
