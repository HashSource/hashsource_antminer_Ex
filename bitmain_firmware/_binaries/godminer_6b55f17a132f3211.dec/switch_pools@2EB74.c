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
  int *v8; // r11
  int *v9; // t1
  int v10; // r0
  int v11; // r9
  int v12; // r4
  int v13; // r0
  int v14; // r0
  int result; // r0
  int v16; // [sp+14h] [bp-1010h]
  _BYTE v17[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = pthread_mutex_lock(&mutex);
  v2 = dword_1650A4;
  v3 = (_DWORD *)(unsigned __int16)&g_zc;
  v4 = total_pools;
  if ( total_pools <= 0 )
  {
    v0 = v17;
    HIWORD(v3) = (unsigned int)&g_zc >> 16;
  }
  v16 = *(_DWORD *)dword_1650A4;
  if ( total_pools > 0 )
  {
    HIWORD(v3) = 23;
    v5 = 0;
    v0 = v17;
    while ( 1 )
    {
      v6 = 0;
      v7 = pools - 4;
      while ( 1 )
      {
        v9 = *(int **)(v7 + 4);
        v7 += 4;
        v8 = v9;
        ++v6;
        if ( v9[1] == v5 )
          break;
        if ( v4 <= v6 )
        {
          V_LOCK(v1);
          v10 = logfmt_raw((int)v17, 0x1000u);
          V_UNLOCK(v10);
          zlog(
            *v3,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/pool.c",
            133,
            "priority_pool",
            13,
            251,
            100,
            v17);
          v8 = *(int **)(pools + 4 * v5);
          break;
        }
      }
      pthread_mutex_lock((pthread_mutex_t *)(v8 + 454));
      v11 = *((unsigned __int8 *)v8 + 1896);
      v1 = pthread_mutex_unlock((pthread_mutex_t *)(v8 + 454));
      if ( !v11 )
        break;
      v4 = total_pools;
      if ( total_pools <= ++v5 )
        goto LABEL_11;
    }
    v16 = *v8;
  }
LABEL_11:
  v12 = *(_DWORD *)(pools + 4 * v16);
  pthread_mutex_unlock(&mutex);
  v13 = set_current_pool(v12);
  V_LOCK(v13);
  v14 = logfmt_raw((int)v0, 0x1000u);
  V_UNLOCK(v14);
  result = zlog(
             *v3,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/pool.c",
             133,
             "switch_pools",
             12,
             363,
             40,
             v0);
  if ( v2 != v12 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v2 + 1816));
    pthread_cond_broadcast((pthread_cond_t *)(v2 + 1848));
    return pthread_mutex_unlock((pthread_mutex_t *)(v2 + 1816));
  }
  return result;
}
