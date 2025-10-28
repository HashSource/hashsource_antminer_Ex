int __fastcall backend_init_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  size_t v7; // r5
  void *v8; // r0
  int v9; // r1
  void *v10; // r0
  size_t v11; // r1
  int v12; // r3
  bool v13; // zf
  void (__fastcall *v14)(int); // r3

  v2 = dev_ctrl(a1);
  v3 = (*(int (__fastcall **)(_DWORD))(v2 + 48))(*(_DWORD *)(a1 + 208));
  *(_DWORD *)(a1 + 212) = v3;
  v4 = dev_ctrl(v3);
  v5 = (*(int (__fastcall **)(_DWORD))(v4 + 44))(*(_DWORD *)(a1 + 208));
  v6 = dev_ctrl(v5);
  (*(void (__fastcall **)(_DWORD))(v6 + 4))(*(_DWORD *)(a1 + 208));
  *(_DWORD *)(a1 + 808) = queue_new(1, 0);
  *(_DWORD *)(a1 + 812) = queue_new(*(_DWORD *)(a1 + 784), 0);
  *(_DWORD *)(a1 + 816) = queue_new(1, 0);
  *(_DWORD *)(a1 + 804) = queue_new(*(_DWORD *)(a1 + 780), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 840), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 864), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 888), 0);
  v7 = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(a1 + 448) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 788);
  *(_DWORD *)(a1 + 440) = v8;
  *(_DWORD *)(a1 + 444) = calloc(v7, 2 * v9);
  v10 = calloc(v7, 0x30u);
  v11 = *(_DWORD *)(a1 + 800);
  *(_DWORD *)(a1 + 416) = v10;
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 388) = -1;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_BYTE *)(a1 + 420) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_DWORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 476) = calloc(v7, v11);
  *(_DWORD *)(a1 + 480) = 0;
  memset((void *)(a1 + 520), 0, 0x100u);
  v12 = *(_DWORD *)(a1 + 820);
  *(_BYTE *)(a1 + 836) = 0;
  *(_BYTE *)(a1 + 837) = 0;
  v13 = v12 == 0;
  v14 = *(void (__fastcall **)(int))(a1 + 76);
  if ( v13 )
    *(_DWORD *)(a1 + 820) = a1;
  *(_BYTE *)(a1 + 838) = 0;
  if ( v14 )
    v14(a1);
  pthread_create((pthread_t *)(a1 + 828), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 824), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 832), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 216) = 1;
  return 0;
}
