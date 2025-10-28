int __fastcall set_debug_always_print(int a1, char a2)
{
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  *(_BYTE *)a1 = a2;
  if ( a2 )
    *(_BYTE *)(a1 + 40) = 1;
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 44));
}
