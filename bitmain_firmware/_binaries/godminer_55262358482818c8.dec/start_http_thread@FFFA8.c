int start_http_thread()
{
  int v0; // r3
  int v1; // r5
  void *(*v2)(void *); // r2
  int v3; // r10
  int v4; // r3
  pthread_t v6; // [sp+10h] [bp-1028h] BYREF
  pthread_attr_t attr; // [sp+14h] [bp-1024h] BYREF
  char v8[4096]; // [sp+38h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v0) = -27720;
  HIWORD(v0) = (unsigned int)"nt connected sock=%d" >> 16;
  LOWORD(v1) = -28736;
  logfmt_raw(v8, 0x1000u, 0, v0);
  HIWORD(v1) = (unsigned int)"ceThread recvfrom<=0" >> 16;
  V_UNLOCK();
  zlog(g_zc, v1, 152, "start_http_thread", 17, 273, 60, v8);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  LOWORD(v2) = -816;
  HIWORD(v2) = (unsigned int)&loc_FFCB8 >> 16;
  v3 = pthread_create(&v6, &attr, v2, 0);
  pthread_detach(v6);
  V_LOCK();
  LOWORD(v4) = -27696;
  HIWORD(v4) = (unsigned int)"start the http thread." >> 16;
  logfmt_raw(v8, 0x1000u, 0, v4, v3);
  V_UNLOCK();
  return zlog(g_zc, v1, 152, "start_http_thread", 17, 280, 60, v8);
}
