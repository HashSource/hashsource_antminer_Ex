int __fastcall set_current_pool(int a1)
{
  pthread_mutex_lock(&mutex);
  dword_16642C = a1;
  pthread_cond_broadcast(&cond);
  return pthread_mutex_unlock(&mutex);
}
