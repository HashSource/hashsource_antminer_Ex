int reload_pool()
{
  int result; // r0
  int v1; // [sp+10h] [bp-1004h] BYREF

  if ( dword_5ACE74 )
  {
    V_LOCK();
    logfmt_raw(&v1, 0x1000u, 0, "config too fast, pool is changing, please wait");
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/pool.c",
             134,
             "reload_pool",
             11,
             1009,
             100,
             &v1);
  }
  else
  {
    result = pthread_create((pthread_t *)&dword_5ACE74, 0, (void *(*)(void *))sub_449CC, 0);
    if ( result )
    {
      V_LOCK();
      logfmt_raw(&v1, 0x1000u, 0, "Failed to create pool_change_thread");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/pool.c",
               134,
               "reload_pool",
               11,
               1007,
               100,
               &v1);
    }
  }
  return result;
}
