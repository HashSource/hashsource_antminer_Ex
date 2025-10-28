int start_api_thread()
{
  void *(*v0)(void *); // r2
  int v1; // r5
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_1B4248 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_1B424C[1]);
  LOWORD(v0) = -13796;
  HIWORD(v0) = (unsigned int)&loc_5CA04 >> 16;
  v1 = pthread_create(dword_1B424C, (const pthread_attr_t *)&dword_1B424C[1], v0, &dword_1B4248);
  pthread_attr_destroy((pthread_attr_t *)&dword_1B424C[1]);
  if ( !v1 )
    return 0;
  V_LOCK();
  LOWORD(v3) = 25820;
  HIWORD(v3) = (unsigned int)"l thread create failed" >> 16;
  logfmt_raw(v5, 0x1000u, 0, v3);
  V_UNLOCK();
  LOWORD(v4) = 25608;
  HIWORD(v4) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v4, 154, "start_api_thread", 16, 139, 100, v5);
  return 5;
}
