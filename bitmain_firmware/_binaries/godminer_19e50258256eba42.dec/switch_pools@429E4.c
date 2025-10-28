int switch_pools()
{
  int result; // r0
  _BYTE v1[20]; // [sp+10h] [bp-1014h] BYREF
  pthread_mutex_t *v2; // [sp+1010h] [bp-14h]
  pthread_mutex_t *v3; // [sp+1014h] [bp-10h]
  int lock; // [sp+1018h] [bp-Ch]
  int i; // [sp+101Ch] [bp-8h]

  pthread_mutex_lock(&stru_5AC4FC);
  v3 = (pthread_mutex_t *)dword_5AC4F8;
  lock = *(_DWORD *)dword_5AC4F8;
  for ( i = 0; i < total_pools; ++i )
  {
    v2 = (pthread_mutex_t *)sub_425B0(i);
    if ( !sub_42714(v2) )
    {
      lock = v2->__lock;
      break;
    }
  }
  v2 = *(pthread_mutex_t **)(pools + 4 * lock);
  pthread_mutex_unlock(&stru_5AC4FC);
  set_current_pool((int)v2);
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "Switching pool %d to pool %d", v3->__lock, v2->__lock);
  V_UNLOCK();
  result = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/pool.c",
             134,
             "switch_pools",
             12,
             367,
             40,
             v1);
  if ( v2 != v3 )
  {
    pthread_mutex_lock(v3 + 76);
    pthread_cond_broadcast((pthread_cond_t *)(&v3[77].__align + 2));
    return pthread_mutex_unlock(v3 + 76);
  }
  return result;
}
