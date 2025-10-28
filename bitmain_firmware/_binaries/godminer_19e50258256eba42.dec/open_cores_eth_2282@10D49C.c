int __fastcall open_cores_eth_2282(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "open_cores_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "open_cores_eth_2282",
    19,
    1001,
    20,
    &v3);
  sub_106D34(a1, 13, 127);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
