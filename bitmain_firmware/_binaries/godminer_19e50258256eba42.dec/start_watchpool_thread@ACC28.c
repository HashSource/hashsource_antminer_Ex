int start_watchpool_thread()
{
  _BYTE v2[12]; // [sp+10h] [bp-100Ch] BYREF
  int *v4; // [sp+1014h] [bp-8h]

  v4 = &dword_C26B48;
  dword_C26B48 = 2;
  if ( !sub_AC6B0((int)&dword_C26B48, (void *(*)(void *))watchpool_thread) )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "watchpool thread create failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_pool.c",
    151,
    "start_watchpool_thread",
    22,
    127,
    100,
    v2);
  return 5;
}
