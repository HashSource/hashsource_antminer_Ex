int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r0
  void *thread_return[2]; // [sp+4h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 153) = 0;
  *(_BYTE *)(a1 + 154) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  (*(void (**)(void))(a1 + 48))();
  v2 = *(void (__fastcall **)(int))(a1 + 72);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 664);
  *(_BYTE *)(a1 + 692) = 1;
  *(_BYTE *)(a1 + 693) = 1;
  *(_BYTE *)(a1 + 694) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 668));
  queue_force_wakeup(*(_DWORD *)(a1 + 672));
  queue_force_wakeup(*(_DWORD *)(a1 + 660));
  pthread_join(*(_DWORD *)(a1 + 684), thread_return);
  pthread_join(*(_DWORD *)(a1 + 680), thread_return);
  pthread_join(*(_DWORD *)(a1 + 688), thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 696));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 720));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 744));
  queue_free(*(_DWORD *)(a1 + 664));
  queue_free(*(_DWORD *)(a1 + 668));
  queue_free(*(_DWORD *)(a1 + 672));
  queue_free(*(_DWORD *)(a1 + 660));
  free(*(void **)(a1 + 304));
  free(*(void **)(a1 + 296));
  free(*(void **)(a1 + 300));
  free(*(void **)(a1 + 308));
  free(*(void **)(a1 + 272));
  if ( *(_DWORD *)(a1 + 656) )
    free(*(void **)(a1 + 332));
  *(_DWORD *)(a1 + 248) = -1;
  *(_DWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 676) = 0;
  v4 = dev_ctrl(a1 + 256);
  (*(void (__fastcall **)(_DWORD))(v4 + 28))(*(_DWORD *)(a1 + 144));
  return 0;
}
