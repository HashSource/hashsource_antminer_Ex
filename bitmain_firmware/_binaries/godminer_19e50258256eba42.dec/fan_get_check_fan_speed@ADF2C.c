int __fastcall fan_get_check_fan_speed(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "fan_get_check_fan_speed %d", 90 * a1 / 110);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/fan_speed_moderator.c",
    160,
    "fan_get_check_fan_speed",
    23,
    33,
    20,
    &v3);
  return 90 * a1 / 110;
}
