int __fastcall wait_pool_to_be_current(int a1)
{
  pthread_mutex_lock(&stru_5AC4FC);
  while ( a1 != dword_5AC4F8 )
    pthread_cond_wait(&stru_5AC518, &stru_5AC4FC);
  return pthread_mutex_unlock(&stru_5AC4FC);
}
