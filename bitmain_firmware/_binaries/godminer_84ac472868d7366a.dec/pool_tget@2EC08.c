int __fastcall pool_tget(pthread_mutex_t *a1, unsigned __int8 *a2)
{
  pthread_mutex_t *v2; // r4
  pthread_mutex_t *v4; // r0
  int v5; // r4

  v2 = a1 + 83;
  pthread_mutex_lock(a1 + 83);
  v4 = v2;
  v5 = *a2;
  pthread_mutex_unlock(v4);
  return v5;
}
