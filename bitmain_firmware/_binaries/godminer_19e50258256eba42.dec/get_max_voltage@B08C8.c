int get_max_voltage()
{
  double v0; // d0
  int v3; // [sp+10h] [bp-1004h] BYREF

  if ( byte_5AD5F0 != 1 )
  {
    V_LOCK();
    logfmt_raw(&v3, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "get_max_voltage",
      15,
      529,
      100,
      &v3);
    return -1;
  }
  else
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
}
