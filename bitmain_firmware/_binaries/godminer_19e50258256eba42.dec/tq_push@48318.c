int __fastcall tq_push(int a1, int a2)
{
  _DWORD *ptr; // [sp+8h] [bp-Ch]
  unsigned __int8 v7; // [sp+Fh] [bp-5h]

  v7 = 1;
  ptr = calloc(1u, 0xCu);
  if ( !ptr )
    return 0;
  *ptr = a2;
  ptr[1] = ptr + 1;
  ptr[2] = ptr + 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 12));
  if ( *(_BYTE *)(a1 + 8) != 1 )
  {
    list_add_tail((list_head *)(ptr + 1), (list_head *)a1);
  }
  else
  {
    free(ptr);
    v7 = 0;
  }
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 12));
  return v7;
}
