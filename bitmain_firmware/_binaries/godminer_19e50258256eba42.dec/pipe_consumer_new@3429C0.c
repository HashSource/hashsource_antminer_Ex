int __fastcall pipe_consumer_new(int a1)
{
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
  ++*(_DWORD *)(a1 + 32);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 60));
  return a1;
}
