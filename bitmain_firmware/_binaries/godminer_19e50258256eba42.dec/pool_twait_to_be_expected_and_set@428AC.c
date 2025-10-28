int __fastcall pool_twait_to_be_expected_and_set(int a1, _BYTE *a2, char a3, char a4, struct timespec *abstime)
{
  int v10; // [sp+14h] [bp-8h]

  v10 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1824));
  if ( abstime )
  {
    while ( a3 != *a2 )
    {
      v10 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 1856), (pthread_mutex_t *)(a1 + 1824), abstime);
      if ( v10 == 110 )
        break;
      if ( !v10 && current_pool_changed(a1) )
      {
        v10 = 1;
        break;
      }
    }
  }
  else
  {
    while ( a3 != *a2 )
      v10 = pthread_cond_wait((pthread_cond_t *)(a1 + 1856), (pthread_mutex_t *)(a1 + 1824));
  }
  if ( !v10 )
    *a2 = a4;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 1824));
  return v10;
}
