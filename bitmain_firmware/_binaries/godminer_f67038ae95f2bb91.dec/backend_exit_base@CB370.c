int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int (**v7)(); // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  *(_BYTE *)(a1 + 253) = 0;
  *(_BYTE *)(a1 + 254) = 0;
  *(_BYTE *)(a1 + 252) = 0;
  (*(void (**)(void))(a1 + 56))();
  v2 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 856);
  *(_BYTE *)(a1 + 896) = 1;
  *(_BYTE *)(a1 + 897) = 1;
  *(_BYTE *)(a1 + 898) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 864));
  queue_force_wakeup(*(_DWORD *)(a1 + 868));
  queue_force_wakeup(*(_DWORD *)(a1 + 852));
  pthread_join(*(_DWORD *)(a1 + 884), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 876), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 892), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 900));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 924));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 948));
  queue_free(*(_DWORD *)(a1 + 856));
  queue_free(*(_DWORD *)(a1 + 864));
  queue_free(*(_DWORD *)(a1 + 868));
  queue_free(*(_DWORD *)(a1 + 852));
  free(*(void **)(a1 + 488));
  free(*(void **)(a1 + 480));
  free(*(void **)(a1 + 484));
  free(*(void **)(a1 + 456));
  if ( *(int *)(a1 + 336) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(_DWORD *)(a1 + 528) + v4;
      v4 += 44;
      pthread_mutex_destroy((pthread_mutex_t *)(v6 + 20));
    }
    while ( *(_DWORD *)(a1 + 336) > v5 );
  }
  free(*(void **)(a1 + 528));
  if ( *(_DWORD *)(a1 + 848) )
    free(*(void **)(a1 + 516));
  *(_DWORD *)(a1 + 428) = -1;
  *(_DWORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 872) = 0;
  v7 = dev_ctrl(0);
  ((void (__fastcall *)(_DWORD))v7[8])(*(_DWORD *)(a1 + 240));
  return 0;
}
