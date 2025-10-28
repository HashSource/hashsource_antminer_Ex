int __fastcall pool_tget(int a1, unsigned __int8 *a2)
{
  pthread_mutex_t *v2; // r4
  int v4; // r5

  v2 = (pthread_mutex_t *)(a1 + 1984);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1984));
  v4 = *a2;
  pthread_mutex_unlock(v2);
  return v4;
}
