int get_current_voltage()
{
  int v2; // [sp+10h] [bp-1004h] BYREF

  if ( byte_5AD5F0 == 1 )
    return dword_5AD60C;
  V_LOCK();
  logfmt_raw(&v2, 0x1000u, 0, "Sweep error string = %s.", "V:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "get_current_voltage",
    19,
    509,
    100,
    &v2);
  return -1;
}
