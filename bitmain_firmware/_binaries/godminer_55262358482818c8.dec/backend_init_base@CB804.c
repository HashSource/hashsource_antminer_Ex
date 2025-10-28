int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (**v4)(); // r0
  int v5; // r0
  int (**v6)(); // r0
  signed int v7; // r6
  void *v8; // r0
  int v9; // r1
  char *v10; // r0
  int v11; // r5
  signed int v12; // r7
  size_t v13; // r2
  int v14; // r3
  bool v15; // zf
  void (__fastcall *v16)(int); // r3
  void *(*v17)(void *); // r2
  void *(*v18)(void *); // r2
  void *(*v19)(void *); // r2

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[15])(*(_DWORD *)(a1 + 240));
  *(_DWORD *)(a1 + 248) = v3;
  v4 = dev_ctrl(v3);
  v5 = ((int (__fastcall *)(_DWORD))v4[14])(*(_DWORD *)(a1 + 240));
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[1])(*(_DWORD *)(a1 + 240));
  *(_DWORD *)(a1 + 856) = queue_new(1, 0);
  *(_DWORD *)(a1 + 864) = queue_new(*(_DWORD *)(a1 + 832), 0);
  *(_DWORD *)(a1 + 868) = queue_new(1, 0);
  *(_DWORD *)(a1 + 852) = queue_new(*(_DWORD *)(a1 + 828), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 900), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 924), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 948), 0);
  v7 = *(_DWORD *)(a1 + 336);
  *(_DWORD *)(a1 + 488) = calloc(v7, 1u);
  v8 = calloc(v7, 4u);
  v9 = *(_DWORD *)(a1 + 836);
  *(_DWORD *)(a1 + 480) = v8;
  *(_DWORD *)(a1 + 484) = calloc(v7, 2 * v9);
  *(_DWORD *)(a1 + 456) = calloc(v7, 0x30u);
  v10 = (char *)calloc(v7, 0x2Cu);
  *(_DWORD *)(a1 + 528) = v10;
  if ( v7 > 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      ++v12;
      pthread_mutex_init((pthread_mutex_t *)&v10[v11 + 20], 0);
      v7 = *(_DWORD *)(a1 + 336);
      v11 += 44;
      if ( v7 <= v12 )
        break;
      v10 = *(char **)(a1 + 528);
    }
  }
  v13 = *(_DWORD *)(a1 + 848);
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 476) = 0;
  *(_DWORD *)(a1 + 428) = -1;
  *(_BYTE *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 512) = 0;
  if ( v13 )
    *(_DWORD *)(a1 + 516) = calloc(v7, v13);
  *(_DWORD *)(a1 + 520) = 0;
  memset((void *)(a1 + 568), 0, 0x100u);
  v14 = *(_DWORD *)(a1 + 872);
  *(_BYTE *)(a1 + 896) = 0;
  *(_BYTE *)(a1 + 897) = 0;
  v15 = v14 == 0;
  v16 = *(void (__fastcall **)(int))(a1 + 76);
  if ( v15 )
    *(_DWORD *)(a1 + 872) = a1;
  *(_BYTE *)(a1 + 898) = 0;
  if ( v16 )
    v16(a1);
  LOWORD(v17) = -24064;
  HIWORD(v17) = (unsigned int)&loc_CA1E8 >> 16;
  pthread_create((pthread_t *)(a1 + 884), 0, v17, (void *)a1);
  LOWORD(v18) = -22796;
  HIWORD(v18) = (unsigned int)&loc_CA6DC >> 16;
  pthread_create((pthread_t *)(a1 + 876), 0, v18, (void *)a1);
  LOWORD(v19) = -18780;
  HIWORD(v19) = (unsigned int)&loc_CB68C >> 16;
  pthread_create((pthread_t *)(a1 + 892), 0, v19, (void *)a1);
  *(_BYTE *)(a1 + 252) = 1;
  return 0;
}
