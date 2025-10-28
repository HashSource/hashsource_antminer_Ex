int switch_pools()
{
  char *v0; // r8
  int v1; // r6
  int v2; // r7
  int v3; // r12
  int v4; // r9
  int v5; // r4
  int v6; // r3
  int v7; // r2
  int *v8; // r11
  int *v9; // t1
  int v10; // r9
  _DWORD *v11; // r4
  int v12; // r1
  int result; // r0
  int v14; // [sp+14h] [bp-1010h]
  int v15; // [sp+1Ch] [bp-1008h]
  char v16[4100]; // [sp+20h] [bp-1004h] BYREF

  pthread_mutex_lock(&mutex);
  v1 = dword_16541C;
  v2 = 51024;
  v3 = total_pools;
  if ( total_pools <= 0 )
  {
    v0 = v16;
    HIWORD(v2) = (unsigned int)&unk_16B55C >> 16;
  }
  v14 = *(_DWORD *)dword_16541C;
  if ( total_pools > 0 )
  {
    LOWORD(v4) = -216;
    HIWORD(v2) = 22;
    v5 = 0;
    v0 = v16;
    HIWORD(v4) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
    v15 = v4;
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
        if ( v3 <= v6 )
        {
          V_LOCK();
          logfmt_raw(v16, 0x1000u, 0, 1245300, v5);
          V_UNLOCK();
          zlog(*(_DWORD *)v2, v15, 127, "priority_pool", 13, 249, 100, v16);
          v8 = *(int **)(pools + 4 * v5);
          break;
        }
      }
      pthread_mutex_lock((pthread_mutex_t *)(v8 + 496));
      v10 = *((unsigned __int8 *)v8 + 2064);
      pthread_mutex_unlock((pthread_mutex_t *)(v8 + 496));
      if ( !v10 )
        break;
      v3 = total_pools;
      if ( total_pools <= ++v5 )
        goto LABEL_11;
    }
    v14 = *v8;
  }
LABEL_11:
  v11 = *(_DWORD **)(pools + 4 * v14);
  pthread_mutex_unlock(&mutex);
  set_current_pool((int)v11);
  V_LOCK();
  logfmt_raw(v0, 0x1000u, 0, "Switching pool %d to pool %d", *(_DWORD *)v1, *v11);
  V_UNLOCK();
  LOWORD(v12) = -216;
  HIWORD(v12) = (unsigned int)"Unknown algo parameter '%s'" >> 16;
  result = zlog(*(_DWORD *)v2, v12, 127, "switch_pools", 12, 361, 60, v0);
  if ( (_DWORD *)v1 != v11 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(v1 + 1984));
    pthread_cond_broadcast((pthread_cond_t *)(v1 + 2016));
    return pthread_mutex_unlock((pthread_mutex_t *)(v1 + 1984));
  }
  return result;
}
