int __fastcall backend_init_base(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  size_t v9; // r5
  void *v10; // r0
  int v11; // r1
  int v12; // r0
  void *v13; // r0
  size_t v14; // r1
  int v15; // r3
  bool v16; // zf
  void (__fastcall *v17)(int); // r3

  v2 = dev_ctrl(a1);
  v3 = (*(int (__fastcall **)(_DWORD))(v2 + 40))(*(_DWORD *)(a1 + 144));
  *(_DWORD *)(a1 + 148) = v3;
  v4 = dev_ctrl(v3);
  v5 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v4 + 24))(
         *(_DWORD *)(a1 + 144),
         *(_DWORD *)(a1 + 772),
         *(_DWORD *)(a1 + 784));
  v6 = dev_ctrl(v5);
  v7 = (*(int (__fastcall **)(_DWORD))(v6 + 36))(*(_DWORD *)(a1 + 144));
  v8 = dev_ctrl(v7);
  (*(void (__fastcall **)(_DWORD))(v8 + 4))(*(_DWORD *)(a1 + 144));
  *(_DWORD *)(a1 + 664) = queue_new(1, 0);
  *(_DWORD *)(a1 + 668) = queue_new(*(_DWORD *)(a1 + 640), 0);
  *(_DWORD *)(a1 + 672) = queue_new(1, 0);
  *(_DWORD *)(a1 + 660) = queue_new(*(_DWORD *)(a1 + 636), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 696), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 720), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 744), 0);
  v9 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 304) = calloc(v9, 1u);
  v10 = calloc(v9, 4u);
  v11 = *(_DWORD *)(a1 + 644);
  *(_DWORD *)(a1 + 296) = v10;
  *(_DWORD *)(a1 + 300) = calloc(v9, 2 * v11);
  if ( (int)(v9 + 31) >= 0 )
    v12 = v9 + 31;
  else
    v12 = v9 + 62;
  *(_DWORD *)(a1 + 308) = calloc(v12 >> 5, 4u);
  v13 = calloc(v9, 0x30u);
  v14 = *(_DWORD *)(a1 + 656);
  *(_DWORD *)(a1 + 272) = v13;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_DWORD *)(a1 + 248) = -1;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)(a1 + 292) = 0;
  *(_BYTE *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  if ( v14 )
    *(_DWORD *)(a1 + 332) = calloc(v9, v14);
  *(_DWORD *)(a1 + 336) = 0;
  memset((void *)(a1 + 376), 0, 0x100u);
  v15 = *(_DWORD *)(a1 + 676);
  *(_BYTE *)(a1 + 692) = 0;
  *(_BYTE *)(a1 + 693) = 0;
  v16 = v15 == 0;
  v17 = *(void (__fastcall **)(int))(a1 + 68);
  if ( v16 )
    *(_DWORD *)(a1 + 676) = a1;
  *(_BYTE *)(a1 + 694) = 0;
  if ( v17 )
    v17(a1);
  pthread_create((pthread_t *)(a1 + 684), 0, (void *(*)(void *))get_response, (void *)a1);
  pthread_create((pthread_t *)(a1 + 680), 0, (void *(*)(void *))scanhash, (void *)a1);
  pthread_create((pthread_t *)(a1 + 688), 0, (void *(*)(void *))send_work, (void *)a1);
  *(_BYTE *)(a1 + 152) = 1;
  return 0;
}
