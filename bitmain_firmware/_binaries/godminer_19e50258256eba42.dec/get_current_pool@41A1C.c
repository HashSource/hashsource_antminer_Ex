int get_current_pool()
{
  int v1; // [sp+4h] [bp-8h]

  pthread_mutex_lock(&stru_5AC4FC);
  v1 = dword_5AC4F8;
  pthread_mutex_unlock(&stru_5AC4FC);
  return v1;
}
