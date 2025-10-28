int create_pool_stratum_threads()
{
  int v0; // r0
  char *v1; // r5
  int v2; // r4
  int v3; // r7
  int v4; // r0
  int v5; // r7

  v0 = set_current_pool(*(_DWORD *)pools);
  if ( total_pools <= 0 )
    return 0;
  v1 = (char *)&stratum_thr_info;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(pools + 4 * v2);
    if ( !*(_BYTE *)(v3 + 24) )
      goto LABEL_3;
    *(_DWORD *)v1 = v2 + 4;
    v4 = tq_new(v0);
    *((_DWORD *)v1 + 11) = v4;
    if ( !v4 )
      return -1;
    tq_push(v4, v3);
    pthread_attr_init((pthread_attr_t *)(v1 + 8));
    v5 = pthread_create((pthread_t *)v1 + 1, (const pthread_attr_t *)(v1 + 8), (void *(*)(void *))stratum_thread, v1);
    v0 = pthread_attr_destroy((pthread_attr_t *)(v1 + 8));
    if ( v5 )
      return sub_2E470(v0);
LABEL_3:
    ++v2;
    v1 += 48;
    if ( total_pools <= v2 )
      return 0;
  }
}
