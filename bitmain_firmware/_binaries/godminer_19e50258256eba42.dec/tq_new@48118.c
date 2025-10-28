char *tq_new()
{
  char *v2; // [sp+4h] [bp-8h]

  v2 = (char *)calloc(1u, 0x58u);
  if ( !v2 )
    return 0;
  *(_DWORD *)v2 = v2;
  *((_DWORD *)v2 + 1) = v2;
  pthread_mutex_init((pthread_mutex_t *)(v2 + 12), 0);
  pthread_cond_init((pthread_cond_t *)(v2 + 40), 0);
  return v2;
}
