char *add_pool()
{
  char *v0; // r4
  int v1; // r6
  int v2; // r2
  void *v3; // r0
  _DWORD *v4; // r0
  int v5; // lr
  _DWORD *v7; // r3
  int v8; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x870u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, 1245232);
    V_UNLOCK();
    LOWORD(v7) = -14512;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v8) = -216;
    HIWORD(v8) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
    zlog(*v7, v8, 127, "add_pool", 8, 121, 100, v9);
    exit(1);
  }
  LOWORD(v1) = 21504;
  HIWORD(v1) = (unsigned int)&unk_1642D8 >> 16;
  v2 = *(_DWORD *)(v1 + 0x50);
  v3 = *(void **)(v1 + 0x54);
  *((_DWORD *)v0 + 1) = v2;
  *(_DWORD *)v0 = v2;
  v4 = realloc(v3, 4 * (v2 + 2));
  v5 = *(_DWORD *)(v1 + 0x50);
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_DWORD *)(v1 + 0x50) = v5 + 1;
  v4[v5] = v0;
  *((_DWORD *)v0 + 8) = -1;
  *((_DWORD *)v0 + 10) = 0;
  v0[1808] = 0;
  v0[1816] = 0;
  *((_DWORD *)v0 + 477) = 0;
  *((_DWORD *)v0 + 479) = 0;
  v0[24] = 1;
  *((_QWORD *)v0 + 241) = 0;
  *((_DWORD *)v0 + 484) = 0;
  memset(v0 + 1844, 0, 0x40u);
  *((_QWORD *)v0 + 246) = 0;
  pthread_mutex_init((pthread_mutex_t *)v0 + 73, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1984), 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 502);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 502, 1);
  pthread_cond_init((pthread_cond_t *)v0 + 42, (const pthread_condattr_t *)v0 + 502);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 44), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 73, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1940), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1820), 0);
  v0[2064] = 1;
  v0[2076] = 0;
  *((_DWORD *)v0 + 517) = -1;
  return v0;
}
