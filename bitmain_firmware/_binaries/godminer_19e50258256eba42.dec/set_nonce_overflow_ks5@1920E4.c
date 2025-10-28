int __fastcall set_nonce_overflow_ks5(int a1, int a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s %u...", "set_nonce_overflow_ks5", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "set_nonce_overflow_ks5",
    22,
    111,
    40,
    &v5);
  sub_18F954(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
