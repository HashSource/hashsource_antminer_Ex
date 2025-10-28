int __fastcall pool_tset(int a1, unsigned __int8 *a2, char a3)
{
  unsigned __int8 v7; // [sp+17h] [bp-5h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1824));
  v7 = *a2;
  *a2 = 1;
  if ( a3 )
    pthread_cond_broadcast((pthread_cond_t *)(a1 + 1856));
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1824));
  return v7;
}
