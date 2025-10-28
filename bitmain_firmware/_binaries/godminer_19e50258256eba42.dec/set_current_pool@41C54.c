int __fastcall set_current_pool(int a1)
{
  pthread_mutex_lock(&stru_5AC4FC);
  dword_5AC4F8 = a1;
  pthread_cond_broadcast(&stru_5AC518);
  return pthread_mutex_unlock(&stru_5AC4FC);
}
