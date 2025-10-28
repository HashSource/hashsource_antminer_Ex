int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r0
  void *thread_return[2]; // [sp+4h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 217) = 0;
  *(_BYTE *)(a1 + 218) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  (*(void (**)(void))(a1 + 56))();
  v2 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 808);
  *(_BYTE *)(a1 + 836) = 1;
  *(_BYTE *)(a1 + 837) = 1;
  *(_BYTE *)(a1 + 838) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 812));
  queue_force_wakeup(*(_DWORD *)(a1 + 816));
  queue_force_wakeup(*(_DWORD *)(a1 + 804));
  pthread_join(*(_DWORD *)(a1 + 828), thread_return);
  pthread_join(*(_DWORD *)(a1 + 824), thread_return);
  pthread_join(*(_DWORD *)(a1 + 832), thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 840));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 864));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 888));
  queue_free(*(_DWORD *)(a1 + 808));
  queue_free(*(_DWORD *)(a1 + 812));
  queue_free(*(_DWORD *)(a1 + 816));
  queue_free(*(_DWORD *)(a1 + 804));
  free(*(void **)(a1 + 448));
  free(*(void **)(a1 + 440));
  free(*(void **)(a1 + 444));
  free(*(void **)(a1 + 416));
  if ( *(_DWORD *)(a1 + 800) )
    free(*(void **)(a1 + 476));
  *(_DWORD *)(a1 + 388) = -1;
  *(_DWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 820) = 0;
  v4 = dev_ctrl(a1 + 400);
  (*(void (__fastcall **)(_DWORD))(v4 + 28))(*(_DWORD *)(a1 + 208));
  return 0;
}
