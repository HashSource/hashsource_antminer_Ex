bool __fastcall current_pool_changed(int a1)
{
  int v2; // r4

  pthread_mutex_lock(&mutex);
  v2 = dword_16541C;
  pthread_mutex_unlock(&mutex);
  return a1 != v2;
}
