int __fastcall set_misc_control_ks5(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "set_misc_control_ks5");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    171,
    "set_misc_control_ks5",
    20,
    163,
    40,
    &v3);
  sub_18F7C8(a1, 28, -1059971312);
  usleep(0x2710u);
  return 0;
}
