void __noreturn watchpool_thread()
{
  pthread_t v0; // r0
  int v1; // r0
  signed int count; // r4
  _BYTE v3[36]; // [sp+50h] [bp-1064h] BYREF
  struct timeval v4; // [sp+1050h] [bp-64h] BYREF
  _DWORD v5[7]; // [sp+1058h] [bp-5Ch] BYREF
  int v6; // [sp+1074h] [bp-40h]
  const char *v7[8]; // [sp+1078h] [bp-3Ch] BYREF
  pthread_mutex_t *v8; // [sp+1098h] [bp-1Ch]
  pthread_mutex_t *current_pool; // [sp+109Ch] [bp-18h]
  char *s; // [sp+10A0h] [bp-14h]
  int i; // [sp+10A4h] [bp-10h]

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  sub_AC71C();
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "watchpool_thread", 0);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_pool.c",
    151,
    "watchpool_thread",
    16,
    31,
    40,
    v3);
  prctl(15, s);
  while ( 1 )
  {
    cgtime(&v4);
    for ( i = 0; i < total_pools; ++i )
    {
      v8 = *(pthread_mutex_t **)(pools + 4 * i);
      if ( (unsigned __int8)pool_tget(v8, (unsigned __int8 *)&v8[79].__size[8]) != 1 )
      {
        count = v8->__count;
        if ( count < *(_DWORD *)(get_current_pool() + 4) && v4.tv_sec - v8[79].__kind > 120 )
        {
          V_LOCK();
          sub_AC318((int)v5, v8->__lock);
          sub_AC34C(v7, (const char *)v8->__kind);
          logfmt_raw(
            v3,
            0x1000u,
            0,
            v6,
            v5[0],
            v5[1],
            v5[2],
            v5[3],
            v5[4],
            v5[5],
            v5[6],
            v6,
            v7[0],
            v7[1],
            v7[2],
            v7[3],
            v7[4],
            v7[5],
            v7[6],
            v7[7],
            "stable for >%d seconds",
            120);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/check_pool.c",
            151,
            "watchpool_thread",
            16,
            50,
            80,
            v3);
          switch_pools();
        }
      }
    }
    current_pool = (pthread_mutex_t *)get_current_pool();
    if ( pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      switch_pools();
    sleep(0x1Eu);
  }
}
