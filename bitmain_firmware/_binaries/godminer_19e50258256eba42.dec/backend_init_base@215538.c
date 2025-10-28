int __fastcall backend_init_base(int a1)
{
  int (**v1)(); // r0
  int (**v2)(); // r0
  int (**v3)(); // r0
  int i; // [sp+Ch] [bp-8h]

  v1 = dev_ctrl();
  *(_DWORD *)(a1 + 272) = ((int (__fastcall *)(_DWORD))v1[15])(*(_DWORD *)(a1 + 264));
  v2 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v2[14])(*(_DWORD *)(a1 + 264));
  v3 = dev_ctrl();
  ((void (__fastcall *)(_DWORD))v3[1])(*(_DWORD *)(a1 + 264));
  *(_DWORD *)(a1 + 896) = queue_new(1, 0);
  *(_DWORD *)(a1 + 904) = queue_new(*(_DWORD *)(a1 + 872), 0);
  *(_DWORD *)(a1 + 908) = queue_new(1, 0);
  *(_DWORD *)(a1 + 892) = queue_new(*(_DWORD *)(a1 + 868), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 944), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 968), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 992), 0);
  *(_DWORD *)(a1 + 528) = calloc(*(_DWORD *)(a1 + 372), 1u);
  *(_DWORD *)(a1 + 520) = calloc(*(_DWORD *)(a1 + 372), 4u);
  *(_DWORD *)(a1 + 524) = calloc(*(_DWORD *)(a1 + 372), 2 * *(_DWORD *)(a1 + 876));
  *(_DWORD *)(a1 + 496) = calloc(*(_DWORD *)(a1 + 372), 0x30u);
  *(_DWORD *)(a1 + 568) = calloc(*(_DWORD *)(a1 + 372), 0x2Cu);
  for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
    pthread_mutex_init((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * i + 20), 0);
  *(_QWORD *)(a1 + 480) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 468) = -1;
  *(_BYTE *)(a1 + 500) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 532) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  if ( *(_DWORD *)(a1 + 888) )
    *(_DWORD *)(a1 + 556) = calloc(*(_DWORD *)(a1 + 372), *(_DWORD *)(a1 + 888));
  *(_DWORD *)(a1 + 560) = 0;
  memset((void *)(a1 + 608), 0, 0x100u);
  *(_BYTE *)(a1 + 936) = 0;
  *(_BYTE *)(a1 + 937) = 0;
  *(_BYTE *)(a1 + 938) = 0;
  *(_BYTE *)(a1 + 939) = 0;
  *(_BYTE *)(a1 + 940) = 0;
  if ( !*(_DWORD *)(a1 + 912) )
    *(_DWORD *)(a1 + 912) = a1;
  if ( *(_DWORD *)(a1 + 92) )
    (*(void (__fastcall **)(int))(a1 + 92))(a1);
  pthread_create((pthread_t *)(a1 + 924), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 916), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 932), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 276) = 1;
  return 0;
}
