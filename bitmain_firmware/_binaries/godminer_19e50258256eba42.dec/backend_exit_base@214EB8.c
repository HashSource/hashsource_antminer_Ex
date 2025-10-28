int __fastcall backend_exit_base(int a1)
{
  int (**v1)(); // r0
  void *thread_return; // [sp+8h] [bp-Ch] BYREF
  int i; // [sp+Ch] [bp-8h]

  *(_BYTE *)(a1 + 278) = 0;
  *(_BYTE *)(a1 + 279) = 0;
  *(_BYTE *)(a1 + 276) = 0;
  (*(void (__fastcall **)(int))(a1 + 60))(a1);
  if ( *(_DWORD *)(a1 + 96) )
    (*(void (__fastcall **)(int))(a1 + 96))(a1);
  *(_BYTE *)(a1 + 936) = 1;
  *(_BYTE *)(a1 + 937) = 1;
  *(_BYTE *)(a1 + 938) = 1;
  *(_BYTE *)(a1 + 939) = 1;
  *(_BYTE *)(a1 + 940) = 1;
  queue_force_wakeup(*(_DWORD *)(a1 + 896));
  queue_force_wakeup(*(_DWORD *)(a1 + 904));
  queue_force_wakeup(*(_DWORD *)(a1 + 908));
  queue_force_wakeup(*(_DWORD *)(a1 + 892));
  pthread_join(*(_DWORD *)(a1 + 924), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 916), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 932), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 944));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 968));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 992));
  queue_free(*(_DWORD *)(a1 + 896));
  queue_free(*(_DWORD *)(a1 + 904));
  queue_free(*(_DWORD *)(a1 + 908));
  queue_free(*(_DWORD *)(a1 + 892));
  free(*(void **)(a1 + 528));
  free(*(void **)(a1 + 520));
  free(*(void **)(a1 + 524));
  free(*(void **)(a1 + 496));
  for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
    pthread_mutex_destroy((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * i + 20));
  free(*(void **)(a1 + 568));
  if ( *(_DWORD *)(a1 + 888) )
    free(*(void **)(a1 + 556));
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 468) = -1;
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 912) = 0;
  v1 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v1[8])(*(_DWORD *)(a1 + 264));
  return 0;
}
