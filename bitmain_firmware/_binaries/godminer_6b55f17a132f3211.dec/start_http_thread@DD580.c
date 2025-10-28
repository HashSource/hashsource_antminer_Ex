int __fastcall start_http_thread(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  pthread_t v5; // [sp+10h] [bp-1028h] BYREF
  pthread_attr_t attr; // [sp+14h] [bp-1024h] BYREF
  _BYTE v7[4096]; // [sp+38h] [bp-1000h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/common/general/http.c",
    148,
    "start_http_thread",
    17,
    273,
    60,
    v7);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  pthread_create(&v5, &attr, (void *(*)(void *))httpListenThread, 0);
  v2 = pthread_detach(v5);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/common/general/http.c",
           148,
           "start_http_thread",
           17,
           280,
           60,
           v7);
}
