__int64 start_http_thread()
{
  _BYTE v1[52]; // [sp+10h] [bp-1034h] BYREF
  pthread_attr_t attr; // [sp+1010h] [bp-34h] BYREF
  pthread_t newthread; // [sp+1034h] [bp-10h] BYREF
  int v4; // [sp+1038h] [bp-Ch]
  size_t stacksize; // [sp+103Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "start the http thread.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "start_http_thread",
    17,
    273,
    60,
    v1);
  v4 = pthread_attr_init(&attr);
  stacksize = 0x200000;
  v4 = pthread_attr_setstacksize(&attr, 0x200000u);
  v4 = pthread_create(&newthread, &attr, (void *(*)(void *))httpListenThread, 0);
  pthread_detach(newthread);
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "httpListenThread start ret=%d", v4);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/common/general/http.c",
           149,
           "start_http_thread",
           17,
           280,
           60,
           v1);
}
