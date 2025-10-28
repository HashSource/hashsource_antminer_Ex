int __fastcall backend_init_base(int a1)
{
  int (**v2)(); // r0
  int v3; // r0
  int (**v4)(); // r0
  int v5; // r0
  int (**v6)(); // r0
  int v7; // r0
  int (**v8)(); // r0
  size_t v9; // r5
  void *v10; // r0
  int v11; // r1
  int v12; // r0
  void *v13; // r0
  size_t v14; // r1
  int v15; // r3
  bool v16; // zf
  void (__fastcall *v17)(int); // r3
  void *(*v18)(void *); // r2
  void *(*v19)(void *); // r2
  void *(*v20)(void *); // r2

  v2 = dev_ctrl(a1);
  v3 = ((int (__fastcall *)(_DWORD))v2[10])(*(_DWORD *)(a1 + 136));
  *(_DWORD *)(a1 + 140) = v3;
  v4 = dev_ctrl(v3);
  v5 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))v4[6])(
         *(_DWORD *)(a1 + 136),
         *(_DWORD *)(a1 + 764),
         *(_DWORD *)(a1 + 776));
  v6 = dev_ctrl(v5);
  v7 = ((int (__fastcall *)(_DWORD))v6[9])(*(_DWORD *)(a1 + 136));
  v8 = dev_ctrl(v7);
  ((void (__fastcall *)(_DWORD))v8[1])(*(_DWORD *)(a1 + 136));
  *(_DWORD *)(a1 + 656) = queue_new(1, 0);
  *(_DWORD *)(a1 + 660) = queue_new(*(_DWORD *)(a1 + 632), 0);
  *(_DWORD *)(a1 + 664) = queue_new(1, 0);
  *(_DWORD *)(a1 + 652) = queue_new(*(_DWORD *)(a1 + 628), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 688), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 712), 0);
  pthread_mutex_init((pthread_mutex_t *)(a1 + 736), 0);
  v9 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 296) = calloc(v9, 1u);
  v10 = calloc(v9, 4u);
  v11 = *(_DWORD *)(a1 + 636);
  *(_DWORD *)(a1 + 288) = v10;
  *(_DWORD *)(a1 + 292) = calloc(v9, 2 * v11);
  if ( (int)(v9 + 31) >= 0 )
    v12 = v9 + 31;
  else
    v12 = v9 + 62;
  *(_DWORD *)(a1 + 300) = calloc(v12 >> 5, 4u);
  v13 = calloc(v9, 0x30u);
  v14 = *(_DWORD *)(a1 + 648);
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 264) = v13;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 240) = -1;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_BYTE *)(a1 + 268) = 0;
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  if ( v14 )
    *(_DWORD *)(a1 + 324) = calloc(v9, v14);
  *(_DWORD *)(a1 + 328) = 0;
  memset((void *)(a1 + 368), 0, 0x100u);
  v15 = *(_DWORD *)(a1 + 668);
  *(_BYTE *)(a1 + 684) = 0;
  *(_BYTE *)(a1 + 685) = 0;
  v16 = v15 == 0;
  v17 = *(void (__fastcall **)(int))(a1 + 68);
  if ( v16 )
    *(_DWORD *)(a1 + 668) = a1;
  *(_BYTE *)(a1 + 686) = 0;
  if ( v17 )
    v17(a1);
  LOWORD(v18) = -32384;
  HIWORD(v18) = (unsigned int)push_work_base >> 16;
  pthread_create((pthread_t *)(a1 + 676), 0, v18, (void *)a1);
  LOWORD(v19) = -31380;
  HIWORD(v19) = (unsigned int)&loc_B8E3C >> 16;
  pthread_create((pthread_t *)(a1 + 672), 0, v19, (void *)a1);
  LOWORD(v20) = -29780;
  HIWORD(v20) = (unsigned int)&loc_B947C >> 16;
  pthread_create((pthread_t *)(a1 + 680), 0, v20, (void *)a1);
  *(_BYTE *)(a1 + 144) = 1;
  return 0;
}
