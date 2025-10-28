int __fastcall queue_try_dequeue(int a1, char *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  unsigned int v7; // r0
  int v8; // r5
  int v10; // r3
  _DWORD *v11; // r2
  int v12; // r1
  char v13[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v8 = 0;
  }
  else
  {
    v7 = pipe_pop(*(int **)(a1 + 8), a2, a3);
    if ( v7 != a3 )
    {
      V_LOCK();
      LOWORD(v10) = 7552;
      HIWORD(v10) = (unsigned int)&unk_141098 >> 16;
      logfmt_raw(v13, 0x1000u, 0, v10, "queue_try_dequeue");
      V_UNLOCK();
      LOWORD(v11) = -14512;
      HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v12) = 7572;
      HIWORD(v12) = (unsigned int)&unk_1410AC >> 16;
      zlog(*v11, v12, 155, "queue_try_dequeue", 17, 140, 100, v13);
      exit(-1);
    }
    v8 = 1;
    *(_DWORD *)(a1 + 12) -= v7;
  }
  pthread_mutex_unlock(v3);
  return v8;
}
