int __fastcall set_reset_rvn(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "set_reset_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_reset_rvn",
    13,
    196,
    40,
    &v3);
  sub_1B47A0(a1, 252, -1414856447);
  usleep(0x2710u);
  sub_1B47A0(a1, 68, 29);
  usleep(0x2710u);
  sub_1B47A0(a1, 68, 31);
  usleep(0x2710u);
  sub_1B47A0(a1, 252, -1414856704);
  usleep(0x2710u);
  return 0;
}
