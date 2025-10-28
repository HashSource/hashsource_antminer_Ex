int fan_init()
{
  char v2[2048]; // [sp+10h] [bp-1804h] BYREF
  int v3; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited )
    return 0;
  strcpy(v2, "please init platform first!!");
  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007e11/7007e11_fan.c",
    177,
    "fan_init",
    8,
    24,
    100,
    &v3);
  return -1;
}
