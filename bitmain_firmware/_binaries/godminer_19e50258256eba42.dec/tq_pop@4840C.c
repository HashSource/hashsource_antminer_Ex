int __fastcall tq_pop(int a1, const struct timespec *a2)
{
  int *ptr; // [sp+Ch] [bp-10h]
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v7 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 12));
  if ( !list_empty((list_head *)a1)
    || (!a2
      ? (v6 = pthread_cond_wait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 12)))
      : (v6 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), (pthread_mutex_t *)(a1 + 12), a2)),
        !v6 && !list_empty((list_head *)a1)) )
  {
    ptr = (int *)(*(_DWORD *)a1 - 4);
    v7 = *ptr;
    list_del(*(list_head **)a1);
    free(ptr);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 12));
  return v7;
}
