int get_max_voltage()
{
  double v0; // d0
  int v1; // r4
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  v1 = (unsigned __int8)byte_195C10;
  if ( byte_195C10 )
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, v1, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/power_api.c",
      153,
      "get_max_voltage",
      15,
      525,
      100,
      v4);
    return -1;
  }
}
