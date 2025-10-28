int __fastcall pool_tget(pthread_mutex_t *a1, unsigned __int8 *a2)
{
  unsigned __int8 v5; // [sp+Fh] [bp-5h]

  pthread_mutex_lock(a1 + 76);
  v5 = *a2;
  pthread_mutex_unlock(a1 + 76);
  return v5;
}
