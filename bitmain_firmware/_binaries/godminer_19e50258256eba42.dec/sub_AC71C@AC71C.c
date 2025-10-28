int sub_AC71C()
{
  int result; // r0
  _DWORD v1[1025]; // [sp+14h] [bp-1008h] BYREF

  result = nice(10);
  v1[1024] = result;
  if ( !result )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "Unable to set thread to low priority");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/miner_util/check_pool.c",
             151,
             "set_lowprio",
             11,
             18,
             20,
             v1);
  }
  return result;
}
