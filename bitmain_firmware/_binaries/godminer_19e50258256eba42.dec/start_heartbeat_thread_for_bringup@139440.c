int start_heartbeat_thread_for_bringup()
{
  _BYTE v2[12]; // [sp+10h] [bp-100Ch] BYREF
  _DWORD *v3; // [sp+1010h] [bp-Ch]

  v3 = calloc(1u, 0x30u);
  *v3 = 5;
  if ( sub_FC048((int)v3, (void *(*)(void *))heartbeat_on_device_bringup) )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "heartbeat thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "start_heartbeat_thread_for_bringup",
      34,
      8740,
      100,
      v2);
    return 5;
  }
  else
  {
    pthread_detach(v3[1]);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "start_heartbeat_thread");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "start_heartbeat_thread_for_bringup",
      34,
      8744,
      60,
      v2);
    return 0;
  }
}
