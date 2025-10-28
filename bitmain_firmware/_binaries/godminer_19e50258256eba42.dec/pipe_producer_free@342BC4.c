void __fastcall pipe_producer_free(int a1)
{
  int v1; // [sp+Ch] [bp-10h]
  int v2; // [sp+10h] [bp-Ch]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  v2 = --*(_DWORD *)(a1 + 28);
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 36));
  if ( !v2 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
    v1 = *(_DWORD *)(a1 + 32);
    pthread_mutex_unlock((pthread_mutex_t *)(a1 + 60));
    if ( v1 )
      pthread_cond_broadcast((pthread_cond_t *)(a1 + 88));
    else
      sub_342A14(a1);
  }
}
