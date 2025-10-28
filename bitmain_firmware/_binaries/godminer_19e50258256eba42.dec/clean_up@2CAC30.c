int __fastcall clean_up(pthread_mutex_t *a1)
{
  return pthread_mutex_unlock(a1);
}
