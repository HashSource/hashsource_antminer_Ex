int fan_init()
{
  int v1; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return 0;
  V_LOCK(*(_DWORD *)"form first!!");
  v1 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_fan.c",
    174,
    "fan_init",
    8,
    25,
    100,
    v2);
  return -1;
}
