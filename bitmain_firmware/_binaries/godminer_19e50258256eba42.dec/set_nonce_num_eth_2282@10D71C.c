int __fastcall set_nonce_num_eth_2282(int a1, int a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s...", "set_nonce_num_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_nonce_num_eth_2282",
    22,
    1042,
    20,
    &v5);
  sub_106D34(a1, 55, a2);
  usleep(0x2710u);
  return 0;
}
