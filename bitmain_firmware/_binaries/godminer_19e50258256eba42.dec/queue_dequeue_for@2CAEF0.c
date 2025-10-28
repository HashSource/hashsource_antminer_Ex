int __fastcall queue_dequeue_for(int a1, char *a2, unsigned int a3, _DWORD *a4)
{
  _BYTE v9[20]; // [sp+20h] [bp-1014h] BYREF
  struct timespec tp; // [sp+1020h] [bp-14h] BYREF
  int v11; // [sp+1028h] [bp-Ch]
  int v12; // [sp+102Ch] [bp-8h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  clock_gettime(1, &tp);
  v11 = a4[1] + tp.tv_nsec;
  tp.tv_sec += v11 / 1000000000 + *a4;
  tp.tv_nsec = v11 % 1000000000;
  v12 = 0;
  while ( a3 > *(_DWORD *)(a1 + 12) )
  {
    v12 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 16), &tp);
    if ( v12 == 110 )
      goto LABEL_7;
  }
  if ( a3 != pipe_pop(*(_DWORD **)(a1 + 8), a2, a3) )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "%s, unkown error", "queue_dequeue_for");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/thread_safe_queue.c",
      162,
      "queue_dequeue_for",
      17,
      114,
      100,
      v9);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_7:
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  return v12;
}
