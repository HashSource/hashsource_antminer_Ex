int switch_pools()
{
  _BYTE *v0; // r8
  int v1; // r0
  int v2; // r6
  _DWORD *v3; // r7
  int v4; // r12
  int v5; // r4
  int v6; // r3
  int v7; // r2
  pthread_mutex_t *v8; // r11
  pthread_mutex_t *v9; // t1
  int v10; // r0
  int v11; // r9
  int v12; // r4
  int v13; // r0
  int v14; // r0
  int result; // r0
  int lock; // [sp+14h] [bp-1010h]
  _BYTE v17[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = pthread_mutex_lock(&mutex);
  v2 = dword_16541C;
  v3 = (_DWORD *)(unsigned __int16)&g_zc;
  v4 = total_pools;
  if ( total_pools <= 0 )
  {
    v0 = v17;
    HIWORD(v3) = (unsigned int)&g_zc >> 16;
  }
  lock = *(_DWORD *)dword_16541C;
  if ( total_pools > 0 )
  {
    HIWORD(v3) = 22;
    v5 = 0;
    v0 = v17;
    while ( 1 )
    {
      v6 = 0;
      v7 = pools - 4;
      while ( 1 )
      {
        v9 = *(pthread_mutex_t **)(v7 + 4);
        v7 += 4;
        v8 = v9;
        ++v6;
        if ( v9->__count == v5 )
          break;
        if ( v4 <= v6 )
        {
          V_LOCK(v1);
          v10 = logfmt_raw((int)v17, 0x1000u);
          V_UNLOCK(v10);
          zlog(
            *v3,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/pool.c",
            127,
            "priority_pool",
            13,
            249,
            100,
            v17);
          v8 = *(pthread_mutex_t **)(pools + 4 * v5);
          break;
        }
      }
      pthread_mutex_lock(v8 + 83);
      v11 = (unsigned __int8)v8[86].__size[8];
      v1 = pthread_mutex_unlock(v8 + 83);
      if ( !v11 )
        break;
      v4 = total_pools;
      if ( total_pools <= ++v5 )
        goto LABEL_11;
    }
    lock = v8->__lock;
  }
LABEL_11:
  v12 = *(_DWORD *)(pools + 4 * lock);
  pthread_mutex_unlock(&mutex);
  v13 = set_current_pool(v12);
  V_LOCK(v13);
  v14 = logfmt_raw((int)v0, 0x1000u);
  V_UNLOCK(v14);
  result = zlog(
             *v3,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/pool.c",
             127,
             "switch_pools",
             12,
             361,
             60,
             v0);
  if ( v2 != v12 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 1992));
    pthread_cond_broadcast((pthread_cond_t *)(v2 + 2024));
    return pthread_mutex_unlock((pthread_mutex_t *)(v2 + 1992));
  }
  return result;
}
