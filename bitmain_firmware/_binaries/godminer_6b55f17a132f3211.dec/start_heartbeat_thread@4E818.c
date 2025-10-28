int start_heartbeat_thread()
{
  pthread_t *v0; // r4
  pthread_attr_t *v1; // r6
  bool v2; // zf
  pthread_attr_t *v3; // r0
  void *(*v4)(void *); // r2
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v10; // r0
  _BYTE v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = (pthread_t *)calloc(1u, 0x30u);
  *v0 = 5;
  v1 = (pthread_attr_t *)(v0 + 2);
  v2 = platform_is_pic_mcu_en(v0) == 0;
  v3 = (pthread_attr_t *)(v0 + 2);
  if ( v2 )
  {
    pthread_attr_init(v3);
    v4 = (void *(*)(void *))psu_watchdog;
  }
  else
  {
    pthread_attr_init(v3);
    v4 = (void *(*)(void *))heartbeat_on_device;
  }
  v5 = pthread_create(v0 + 1, v1, v4, v0);
  v6 = pthread_attr_destroy(v1);
  if ( v5 )
  {
    V_LOCK(v6);
    v10 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/check_heartbeat.c",
      155,
      "start_heartbeat_thread",
      22,
      132,
      100,
      v11);
    return 5;
  }
  else
  {
    v7 = pthread_detach(v0[1]);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/check_heartbeat.c",
      155,
      "start_heartbeat_thread",
      22,
      136,
      60,
      v11);
    return 0;
  }
}
