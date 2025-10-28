void __fastcall pipe_free(int a1)
{
  int v2; // [sp+8h] [bp-Ch]
  int v3; // [sp+Ch] [bp-8h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  v3 = --*(_DWORD *)(a1 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 36));
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
  v2 = --*(_DWORD *)(a1 + 32);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 60));
  if ( v2 )
  {
    if ( !v3 )
      pthread_cond_broadcast((pthread_cond_t *)(a1 + 88));
  }
  else
  {
    free(*(void **)(a1 + 12));
    *(_DWORD *)(a1 + 12) = 0;
    if ( v3 )
      pthread_cond_broadcast((pthread_cond_t *)(a1 + 136));
    else
      sub_342A14(a1);
  }
}
