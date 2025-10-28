int start_watchpool_thread()
{
  void *(*v0)(void *); // r2
  int v1; // r5
  int v3; // r3
  int v4; // r1
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_1B4218 = 2;
  pthread_attr_init(&attr);
  LOWORD(v0) = -14416;
  HIWORD(v0) = (unsigned int)&loc_5C798 >> 16;
  v1 = pthread_create((pthread_t *)&dword_1B421C, &attr, v0, &dword_1B4218);
  pthread_attr_destroy(&attr);
  if ( !v1 )
    return 0;
  V_LOCK();
  LOWORD(v3) = 25788;
  HIWORD(v3) = (unsigned int)"stable for >%d seconds" >> 16;
  logfmt_raw(v5, 0x1000u, 0, v3);
  V_UNLOCK();
  LOWORD(v4) = 25608;
  HIWORD(v4) = (unsigned int)"read to low priority" >> 16;
  zlog(g_zc, v4, 154, "start_watchpool_thread", 22, 127, 100, v5);
  return 5;
}
