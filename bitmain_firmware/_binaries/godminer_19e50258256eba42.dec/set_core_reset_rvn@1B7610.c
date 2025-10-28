int __fastcall set_core_reset_rvn(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "set_core_reset_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_core_reset_rvn",
    18,
    212,
    40,
    &v3);
  sub_1B4A74(a1, 2, 0);
  usleep(0x2710u);
  sub_1B4A74(a1, 2, 255);
  usleep(0x2710u);
  return 0;
}
