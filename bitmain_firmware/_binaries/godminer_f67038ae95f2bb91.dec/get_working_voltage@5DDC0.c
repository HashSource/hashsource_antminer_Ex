int get_working_voltage()
{
  int v0; // r4
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (unsigned __int8)byte_195C10;
  if ( byte_195C10 )
    return dword_195C1C;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, v0, "Sweep error string = %s.", "V:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/power_api.c",
    153,
    "get_working_voltage",
    19,
    515,
    100,
    v2);
  return -1;
}
