int __fastcall disable_cores_rvn(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "disable_cores_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    174,
    "disable_cores_rvn",
    17,
    1033,
    20,
    v3);
  sub_A3F90(a1, 160, 0);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
