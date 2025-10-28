int __fastcall set_voltage(int a1, char a2)
{
  int v5; // [sp+18h] [bp-1004h] BYREF

  if ( a2 != 1 )
  {
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, "set_voltage power is not inited");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      453,
      100,
      &v5);
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      454,
      100,
      &v5);
    return -1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(&v5, 0x1000u, 0, "set_voltage to %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/power_api.c",
      150,
      "set_voltage",
      11,
      457,
      40,
      &v5);
    return sub_AEE50(a1, (int)&byte_5AD5F0);
  }
}
