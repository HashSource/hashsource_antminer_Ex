int __fastcall queue_enqueue(int a1, char *a2, int a3)
{
  unsigned __int8 v7; // [sp+17h] [bp-5h] BYREF

  v7 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  pipe_push(*(_DWORD **)(a1 + 4), a2, a3, &v7);
  *(_DWORD *)(a1 + 12) += a3;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 16));
  return v7;
}
