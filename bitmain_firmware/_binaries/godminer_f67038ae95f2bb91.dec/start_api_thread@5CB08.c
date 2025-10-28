int start_api_thread()
{
  int v0; // r5
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_1B4248 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_1B424C[1]);
  v0 = pthread_create(
         dword_1B424C,
         (const pthread_attr_t *)&dword_1B424C[1],
         (void *(*)(void *))sub_5CA04,
         &dword_1B4248);
  pthread_attr_destroy((pthread_attr_t *)&dword_1B424C[1]);
  if ( !v0 )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "api thread create failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "start_api_thread",
    16,
    139,
    100,
    v2);
  return 5;
}
