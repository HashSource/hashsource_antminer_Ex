int start_http_thread()
{
  _DWORD *v0; // r6
  int v1; // r3
  int v2; // r5
  void *(*v3)(void *); // r2
  int v4; // r10
  int v5; // r3
  pthread_t v7; // [sp+10h] [bp-1028h] BYREF
  pthread_attr_t attr; // [sp+14h] [bp-1024h] BYREF
  char v9[4096]; // [sp+38h] [bp-1000h] BYREF

  LOWORD(v0) = -14512;
  V_LOCK();
  LOWORD(v1) = 6636;
  HIWORD(v1) = (unsigned int)&unk_140D04 >> 16;
  LOWORD(v2) = 5632;
  logfmt_raw(v9, 0x1000u, 0, v1);
  HIWORD(v0) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v2) = (unsigned int)&unk_140918 >> 16;
  V_UNLOCK();
  zlog(*v0, v2, 142, "start_http_thread", 17, 272, 60, v9);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  LOWORD(v3) = 16176;
  HIWORD(v3) = (unsigned int)&loc_E3DE8 >> 16;
  v4 = pthread_create(&v7, &attr, v3, 0);
  pthread_detach(v7);
  V_LOCK();
  LOWORD(v5) = 6660;
  HIWORD(v5) = (unsigned int)&unk_140D1C >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v4);
  V_UNLOCK();
  return zlog(*v0, v2, 142, "start_http_thread", 17, 279, 60, v9);
}
