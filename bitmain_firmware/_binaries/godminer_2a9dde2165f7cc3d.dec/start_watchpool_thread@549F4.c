int start_watchpool_thread()
{
  int v0; // r5
  int v1; // r0
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_18EA80 = 2;
  pthread_attr_init(&attr);
  v0 = pthread_create((pthread_t *)&dword_18EA84, &attr, (void *(*)(void *))watchpool_thread, &dword_18EA80);
  v1 = pthread_attr_destroy(&attr);
  if ( !v0 )
    return 0;
  V_LOCK(v1);
  v3 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "start_watchpool_thread",
    22,
    127,
    100,
    v4);
  return 5;
}
