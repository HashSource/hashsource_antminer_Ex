int __fastcall queue_dequeue_for(int a1, char *a2, unsigned int a3, int *a4)
{
  pthread_mutex_t *v4; // r7
  int v9; // r12
  int v10; // r1
  int v11; // r4
  int v13; // r3
  _DWORD *v14; // r2
  int v15; // r1
  struct timespec tp; // [sp+10h] [bp-100Ch] BYREF
  char v17[4100]; // [sp+18h] [bp-1004h] BYREF

  v4 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  clock_gettime(1, &tp);
  v9 = *a4;
  v10 = a4[1] + tp.tv_nsec;
  v11 = 0;
  tp.tv_sec += v10 / 1000000000 + v9;
  tp.tv_nsec = v10 % 1000000000;
  while ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v11 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), v4, &tp);
    if ( v11 == 110 )
      goto LABEL_6;
  }
  if ( pipe_pop(*(int **)(a1 + 8), a2, a3) != a3 )
  {
    V_LOCK();
    LOWORD(v13) = 7552;
    HIWORD(v13) = (unsigned int)&unk_141098 >> 16;
    logfmt_raw(v17, 0x1000u, 0, v13, "queue_dequeue_for");
    V_UNLOCK();
    LOWORD(v14) = -14512;
    HIWORD(v14) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v15) = 7572;
    HIWORD(v15) = (unsigned int)&unk_1410AC >> 16;
    zlog(*v14, v15, 155, "queue_dequeue_for", 17, 106, 100, v17);
    exit(-1);
  }
  *(_DWORD *)(a1 + 12) -= a3;
LABEL_6:
  pthread_mutex_unlock(v4);
  return v11;
}
