int __fastcall queue_clear(int a1)
{
  pthread_mutex_t *v1; // r6
  size_t v3; // r0
  char *v4; // r5
  int v5; // r3
  bool v6; // zf
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v3 = pipe_elem_size(*(_DWORD *)a1);
  v4 = (char *)calloc(1u, v3);
  if ( *(int *)(a1 + 12) > 0 )
  {
    do
    {
      if ( pipe_pop(*(int **)(a1 + 8), v4, 1) != 1 )
      {
        V_LOCK();
        LOWORD(v8) = 7552;
        HIWORD(v8) = (unsigned int)&unk_141098 >> 16;
        logfmt_raw(v11, 0x1000u, 0, v8, "queue_clear");
        V_UNLOCK();
        LOWORD(v9) = -14512;
        HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
        LOWORD(v10) = 7572;
        HIWORD(v10) = (unsigned int)&unk_1410AC >> 16;
        zlog(*v9, v10, 155, "queue_clear", 11, 121, 100, v11);
        exit(-1);
      }
      v5 = *(_DWORD *)(a1 + 12) - 1;
      v6 = *(_DWORD *)(a1 + 12) == 1;
      *(_DWORD *)(a1 + 12) = v5;
    }
    while ( v5 >= 0 && !v6 );
  }
  free(v4);
  return pthread_mutex_unlock(v1);
}
