int __fastcall sub_48268(int a1, char a2)
{
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 12));
  *(_BYTE *)(a1 + 8) = a2;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 12));
}
