int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int (**v4)(); // r0
  void *thread_return[2]; // [sp+4h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  (*(void (**)(void))(a1 + 48))();
  v2 = *(void (__fastcall **)(int))(a1 + 72);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 656);
  *(_BYTE *)(a1 + 684) = 1;
  *(_BYTE *)(a1 + 685) = 1;
  *(_BYTE *)(a1 + 686) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 660));
  queue_force_wakeup(*(_DWORD *)(a1 + 664));
  queue_force_wakeup(*(_DWORD *)(a1 + 652));
  pthread_join(*(_DWORD *)(a1 + 676), thread_return);
  pthread_join(*(_DWORD *)(a1 + 672), thread_return);
  pthread_join(*(_DWORD *)(a1 + 680), thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 688));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 712));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 736));
  queue_free(*(_DWORD *)(a1 + 656));
  queue_free(*(_DWORD *)(a1 + 660));
  queue_free(*(_DWORD *)(a1 + 664));
  queue_free(*(_DWORD *)(a1 + 652));
  free(*(void **)(a1 + 296));
  free(*(void **)(a1 + 288));
  free(*(void **)(a1 + 292));
  free(*(void **)(a1 + 300));
  free(*(void **)(a1 + 264));
  if ( *(_DWORD *)(a1 + 648) )
    free(*(void **)(a1 + 324));
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 240) = -1;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 668) = 0;
  v4 = dev_ctrl(-1);
  ((void (__fastcall *)(_DWORD))v4[7])(*(_DWORD *)(a1 + 136));
  return 0;
}
