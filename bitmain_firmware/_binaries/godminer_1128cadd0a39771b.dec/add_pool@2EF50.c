char *add_pool()
{
  char *v0; // r4
  int v1; // r3
  void *v2; // r0
  int v3; // r1
  _DWORD *v4; // r0
  int v5; // r2
  int v7; // r0
  _BYTE v8[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x878u, 1u);
  if ( !v0 )
  {
    V_LOCK(0);
    v7 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "add_pool",
      8,
      121,
      100,
      v8);
    exit(1);
  }
  v1 = total_pools;
  v2 = (void *)pools;
  v3 = total_pools + 2;
  *((_DWORD *)v0 + 1) = total_pools;
  *(_DWORD *)v0 = v1;
  v4 = realloc(v2, 4 * v3);
  v5 = total_pools;
  pools = (int)v4;
  ++total_pools;
  v4[v5] = v0;
  *((_DWORD *)v0 + 8) = -1;
  *((_DWORD *)v0 + 10) = 0;
  v0[1816] = 0;
  v0[1824] = 0;
  *((_DWORD *)v0 + 479) = 0;
  *((_DWORD *)v0 + 481) = 0;
  v0[24] = 1;
  *((_QWORD *)v0 + 242) = 0;
  *((_DWORD *)v0 + 486) = 0;
  memset(v0 + 1852, 0, 0x40u);
  *((_QWORD *)v0 + 247) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1760), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 83, 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 504);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 504, 1);
  pthread_cond_init((pthread_cond_t *)(v0 + 2024), (const pthread_condattr_t *)v0 + 504);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 44), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1760), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1948), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1828), 0);
  v0[2072] = 1;
  v0[2084] = 0;
  *((_DWORD *)v0 + 519) = -1;
  return v0;
}
