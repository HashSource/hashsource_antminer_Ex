int start_heartbeat_thread()
{
  char *v0; // r4
  bool v1; // zf
  pthread_attr_t *v2; // r0
  void *v3; // r3
  const pthread_attr_t *v4; // r1
  void *(*v5)(void *); // r2
  int v6; // r5
  int v7; // r3
  int v8; // r1
  int v10; // r3
  int v11; // r1
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  v0 = (char *)calloc(1u, 0x30u);
  *(_DWORD *)v0 = 5;
  v1 = platform_is_pic_mcu_en() == 0;
  v2 = (pthread_attr_t *)(v0 + 8);
  if ( v1 )
  {
    pthread_attr_init(v2);
    LOWORD(v5) = -15872;
    v3 = v0;
    v4 = (const pthread_attr_t *)(v0 + 8);
    HIWORD(v5) = (unsigned int)&loc_5C1E8 >> 16;
  }
  else
  {
    pthread_attr_init(v2);
    LOWORD(v5) = -16240;
    v3 = v0;
    v4 = (const pthread_attr_t *)(v0 + 8);
    HIWORD(v5) = (unsigned int)&loc_5C078 >> 16;
  }
  v6 = pthread_create((pthread_t *)v0 + 1, v4, v5, v3);
  pthread_attr_destroy((pthread_attr_t *)(v0 + 8));
  if ( v6 )
  {
    V_LOCK();
    LOWORD(v10) = 25396;
    HIWORD(v10) = (unsigned int)"mes error, pls check <<" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v11) = 24876;
    HIWORD(v11) = (unsigned int)"ad" >> 16;
    zlog(g_zc, v11, 159, "start_heartbeat_thread", 22, 132, 100, v12);
    return 5;
  }
  else
  {
    pthread_detach(*((_DWORD *)v0 + 1));
    V_LOCK();
    LOWORD(v7) = 25428;
    HIWORD(v7) = (unsigned int)"t thread create failed" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = 24876;
    HIWORD(v8) = (unsigned int)"ad" >> 16;
    zlog(g_zc, v8, 159, "start_heartbeat_thread", 22, 136, 60, v12);
    return 0;
  }
}
