int __fastcall pipe_producer_new(int a1)
{
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  ++*(_DWORD *)(a1 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 36));
  return a1;
}
