int __fastcall open_cores(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "open_cores");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "open_cores",
    10,
    867,
    20,
    v3);
  sub_7915C(a1, 13, 127);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
