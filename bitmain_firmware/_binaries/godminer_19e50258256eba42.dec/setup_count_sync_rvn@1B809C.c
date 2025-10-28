int __fastcall setup_count_sync_rvn(int a1, char a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v5, 0x1000u, 0, "%s...", "setup_count_sync_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "setup_count_sync_rvn",
    20,
    301,
    20,
    &v5);
  sub_1B4CC0(a1, a2, 202, 0);
  sub_1B4CC0(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_1B4CC0(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
