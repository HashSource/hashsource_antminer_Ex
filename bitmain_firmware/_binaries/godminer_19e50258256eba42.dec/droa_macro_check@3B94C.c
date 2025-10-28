int droa_macro_check()
{
  int result; // r0
  _BYTE v1[8]; // [sp+14h] [bp-1008h] BYREF
  int v2; // [sp+1014h] [bp-8h]

  result = access("/nvdata/droaswitch", 0);
  if ( !result )
  {
    result = remove("/nvdata/droaswitch");
    v2 = result;
    if ( result )
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "dswitch file ret=%d", v2);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/god-miner.c",
               139,
               "droa_macro_check",
               16,
               1722,
               60,
               v1);
    }
  }
  return result;
}
