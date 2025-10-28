int start_api_thread()
{
  int v0; // r5
  int v1; // r0
  int v3; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_178638 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_17863C[1]);
  v0 = pthread_create(
         dword_17863C,
         (const pthread_attr_t *)&dword_17863C[1],
         (void *(*)(void *))sub_4EDE8,
         &dword_178638);
  v1 = pthread_attr_destroy((pthread_attr_t *)&dword_17863C[1]);
  if ( !v0 )
    return 0;
  V_LOCK(v1);
  v3 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "start_api_thread",
    16,
    139,
    100,
    v4);
  return 5;
}
