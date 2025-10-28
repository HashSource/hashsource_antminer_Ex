void __fastcall queue_dequeue(int a1, char *a2, unsigned int a3)
{
  int v3; // r4
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int v7; // r0
  char *v8; // r1
  unsigned int v9; // r2
  int *v10; // r3
  pthread_mutex_t *mutex; // [sp+14h] [bp-1128h]
  struct __jmp_buf_tag env; // [sp+20h] [bp-111Ch] BYREF
  char v16[4100]; // [sp+138h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)(a1 + 16);
  if ( _sigsetjmp(&env, 0) )
  {
    pthread_mutex_unlock(mutex);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
    queue_dequeue_for(v7, v8, v9, v10);
  }
  else
  {
    _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
    pthread_mutex_lock(mutex);
    while ( *(_DWORD *)(a1 + 12) < a3 )
    {
      if ( *(_BYTE *)(a1 + 92) )
      {
        *(_BYTE *)(a1 + 92) = 0;
        goto LABEL_9;
      }
      pthread_cond_wait((pthread_cond_t *)(a1 + 40), mutex);
    }
    if ( a3 != pipe_pop(*(int **)(a1 + 8), a2, a3) )
    {
      LOWORD(v3) = 7484;
      V_LOCK();
      HIWORD(v3) = (unsigned int)&unk_141054 >> 16;
      LOWORD(v4) = 7552;
      HIWORD(v4) = (unsigned int)&unk_141098 >> 16;
      logfmt_raw(v16, 0x1000u, 0, v4, v3);
      V_UNLOCK();
      LOWORD(v5) = -14512;
      HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v6) = 7572;
      HIWORD(v6) = (unsigned int)&unk_1410AC >> 16;
      zlog(*v5, v6, 155, v3, 13, 81, 100, v16);
      exit(-1);
    }
    *(_DWORD *)(a1 + 12) -= a3;
LABEL_9:
    pthread_mutex_unlock(mutex);
    _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
  }
}
