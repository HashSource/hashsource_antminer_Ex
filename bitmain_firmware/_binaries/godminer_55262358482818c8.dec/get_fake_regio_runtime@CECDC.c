int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  int *v6; // r0
  int v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r1
  int v11; // r2
  int v12; // r3

  if ( dword_1B3C28[a1] )
    return dword_1B3C28[a1];
  v3 = calloc(1u, 0x488u);
  v3[60] = a1;
  dword_1B3C28[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_1B3C28[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 900), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 924), 0);
  v6 = queue_new(1, 0);
  v7 = dword_1B3C28[a1];
  LOWORD(v8) = -17408;
  *(_DWORD *)(v5 + 868) = v6;
  HIWORD(v8) = (unsigned int)&loc_CBBE8 >> 16;
  LOWORD(v9) = -17200;
  LOWORD(v6) = -16872;
  LOWORD(v10) = -16680;
  LOWORD(v11) = -17088;
  HIWORD(v9) = (unsigned int)&loc_CBCB8 >> 16;
  HIWORD(v6) = (unsigned int)&loc_CBE00 >> 16;
  HIWORD(v10) = (unsigned int)&loc_CBEC0 >> 16;
  *(_DWORD *)(v7 + 856) = *(_DWORD *)(v7 + 868);
  LOWORD(v12) = -16480;
  HIWORD(v11) = (unsigned int)&loc_CBD28 >> 16;
  *(_DWORD *)(v7 + 256) = v8;
  HIWORD(v12) = (unsigned int)&loc_CBF88 >> 16;
  *(_DWORD *)(v7 + 264) = v6;
  *(_DWORD *)(v7 + 260) = v9;
  *(_DWORD *)(v7 + 268) = v10;
  *(_DWORD *)(v7 + 284) = v11;
  *(_DWORD *)(v7 + 300) = v12;
  *(_BYTE *)(v7 + 252) = 1;
  return v7;
}
