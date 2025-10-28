int __fastcall queue_try_dequeue(int a1, char *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  unsigned int v7; // r0
  int v8; // r5
  int v10; // r3
  int v11; // r1
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

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
      LOWORD(v10) = -26760;
      HIWORD(v10) = (unsigned int)"oc failed in queue_new" >> 16;
      logfmt_raw(v12, 0x1000u, 0, v10, "queue_try_dequeue");
      V_UNLOCK();
      LOWORD(v11) = -26740;
      HIWORD(v11) = (unsigned int)"ew" >> 16;
      zlog(g_zc, v11, 165, "queue_try_dequeue", 17, 148, 100, v12);
      exit(-1);
    }
    v8 = 1;
    *(_DWORD *)(a1 + 12) -= v7;
  }
  pthread_mutex_unlock(v3);
  return v8;
}
