int __fastcall start_task_timer(int a1)
{
  int v3; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  *(_BYTE *)(a1 + 6148) = 1;
  v3 = *(_DWORD *)(a1 + 6144);
  for ( i = 0; i < v3; ++i )
    clock_gettime(1, (struct timespec *)(a1 + 16 * (i + 128)));
  return pthread_create((pthread_t *)(a1 + 6152), 0, (void *(*)(void *))task_timer_thread, (void *)a1);
}
