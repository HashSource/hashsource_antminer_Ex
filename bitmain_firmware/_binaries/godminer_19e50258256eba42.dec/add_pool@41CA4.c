char *add_pool()
{
  int v0; // r2
  _BYTE v2[8]; // [sp+14h] [bp-1008h] BYREF
  char *v3; // [sp+1014h] [bp-8h]

  v3 = (char *)calloc(0x7D0u, 1u);
  if ( !v3 )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "Failed to malloc pool in add_pool");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "add_pool",
      8,
      126,
      100,
      v2);
    set_miner_6060info_malloc_failed_err(1);
    exit(1);
  }
  *((_DWORD *)v3 + 1) = total_pools;
  *(_DWORD *)v3 = *((_DWORD *)v3 + 1);
  pools = (int)realloc((void *)pools, 4 * (total_pools + 2));
  v0 = total_pools++;
  *(_DWORD *)(pools + 4 * v0) = v3;
  *((_DWORD *)v3 + 9) = -1;
  *((_DWORD *)v3 + 11) = 0;
  v3[28] = 1;
  v3[1648] = 0;
  v3[1656] = 0;
  *((_DWORD *)v3 + 437) = 0;
  *((_DWORD *)v3 + 439) = 0;
  *((_QWORD *)v3 + 221) = 0;
  *((_DWORD *)v3 + 444) = 0;
  memset(v3 + 1684, 0, 0x40u);
  *((_QWORD *)v3 + 226) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v3 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)v3 + 76, 0);
  pthread_condattr_init((pthread_condattr_t *)v3 + 462);
  pthread_condattr_setclock((pthread_condattr_t *)v3 + 462, 1);
  pthread_cond_init((pthread_cond_t *)(v3 + 1856), (const pthread_condattr_t *)v3 + 462);
  pthread_mutex_init((pthread_mutex_t *)v3 + 2, 0);
  pthread_mutex_init((pthread_mutex_t *)(v3 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)(v3 + 1780), 0);
  pthread_mutex_init((pthread_mutex_t *)(v3 + 1660), 0);
  v3[1916] = 0;
  v3[1904] = 1;
  *((_DWORD *)v3 + 477) = -1;
  return v3;
}
