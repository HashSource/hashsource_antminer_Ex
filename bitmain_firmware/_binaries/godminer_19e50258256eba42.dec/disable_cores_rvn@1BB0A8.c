int __fastcall disable_cores_rvn(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "disable_cores_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "disable_cores_rvn",
    17,
    1033,
    20,
    &v3);
  sub_1B4A74(a1, 160, 0);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
