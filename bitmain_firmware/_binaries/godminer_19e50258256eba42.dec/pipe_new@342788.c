_DWORD *__fastcall pipe_new(int a1, int a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r6
  char *v8; // [sp+Ch] [bp-20h]
  size_t size; // [sp+10h] [bp-1Ch]
  _DWORD *ptr; // [sp+14h] [bp-18h]

  if ( !a1 )
    return 0;
  ptr = malloc(0xB8u);
  size = 32 * a1;
  v8 = (char *)malloc(32 * a1);
  if ( ptr && v8 )
  {
    if ( a2 )
    {
      v3 = 32 * a1;
      if ( (a2 + 1) * a1 >= size )
        v3 = (a2 + 1) * a1;
      v4 = sub_342604(v3);
    }
    else
    {
      v4 = -1;
    }
    memset(ptr, 0, 0xB8u);
    *ptr = a1;
    ptr[1] = size;
    ptr[2] = v4;
    ptr[3] = v8;
    ptr[4] = &v8[size];
    ptr[5] = v8;
    ptr[6] = &v8[a1];
    ptr[7] = 1;
    ptr[8] = 1;
    pthread_mutex_init((pthread_mutex_t *)(ptr + 9), 0);
    pthread_mutex_init((pthread_mutex_t *)(ptr + 15), 0);
    pthread_cond_init((pthread_cond_t *)(ptr + 22), 0);
    pthread_cond_init((pthread_cond_t *)(ptr + 34), 0);
    sub_3426AC(ptr);
    return ptr;
  }
  else
  {
    free(ptr);
    free(v8);
    return 0;
  }
}
