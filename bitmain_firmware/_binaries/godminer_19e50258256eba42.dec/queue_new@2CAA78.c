char *__fastcall queue_new(int a1, int a2)
{
  char *v6; // [sp+Ch] [bp-8h]

  v6 = (char *)calloc(1u, 0x60u);
  if ( v6 )
  {
    _init_pipe_of_queue((int *)v6, a1, a2);
    pthread_mutex_init((pthread_mutex_t *)(v6 + 16), 0);
    pthread_condattr_init((pthread_condattr_t *)v6 + 22);
    pthread_condattr_setclock((pthread_condattr_t *)v6 + 22, 1);
    pthread_cond_init((pthread_cond_t *)(v6 + 40), (const pthread_condattr_t *)v6 + 22);
    *((_DWORD *)v6 + 3) = 0;
    v6[92] = 0;
    return v6;
  }
  else
  {
    printf("calloc failed in queue_new");
    return 0;
  }
}
