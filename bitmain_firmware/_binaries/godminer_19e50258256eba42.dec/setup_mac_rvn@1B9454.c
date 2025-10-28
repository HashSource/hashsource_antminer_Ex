int __fastcall setup_mac_rvn(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "setup_mac_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "setup_mac_rvn",
    13,
    524,
    20,
    &v3);
  sub_1B4A74(a1, 143, 33489407);
  usleep(0x2710u);
  return 0;
}
