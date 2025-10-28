int __fastcall set_reset_to_normal_rvn(int a1, int a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s...", "set_reset_to_normal_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_reset_to_normal_rvn",
    23,
    246,
    20,
    &v5);
  sub_1B4A74(a1, 155, a2);
  usleep(0x2710u);
  return 0;
}
