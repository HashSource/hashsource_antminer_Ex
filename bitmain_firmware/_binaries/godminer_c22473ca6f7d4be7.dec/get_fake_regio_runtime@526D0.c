int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int v4; // r0
  int v5; // r7
  __int64 v6; // r0
  int v7; // r4
  int v8; // lr
  int v9; // r12
  int v10; // r2
  int v11; // r3

  if ( dword_16AC2C[a1] )
    return dword_16AC2C[a1];
  v3 = calloc(1u, 0x310u);
  v3[34] = a1;
  dword_16AC2C[a1] = v3;
  v4 = dev_ctrl(v3);
  (*(void (__fastcall **)(int))(v4 + 4))(a1);
  v5 = dword_16AC2C[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 688), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 712), 0);
  LODWORD(v6) = queue_new(1, 0);
  v7 = dword_16AC2C[a1];
  LOWORD(v8) = 2956;
  *(_DWORD *)(v5 + 664) = v6;
  HIWORD(v8) = (unsigned int)&loc_5079C >> 16;
  LOWORD(v9) = 3160;
  LOWORD(v6) = 3488;
  WORD2(v6) = 3680;
  LOWORD(v10) = 3272;
  HIWORD(v9) = (unsigned int)&loc_50868 >> 16;
  WORD1(v6) = (unsigned int)&loc_509B0 >> 16;
  HIWORD(v6) = (unsigned int)&loc_50A70 >> 16;
  *(_DWORD *)(v7 + 656) = *(_DWORD *)(v7 + 664);
  LOWORD(v11) = 3880;
  HIWORD(v10) = (unsigned int)&loc_508D8 >> 16;
  *(_DWORD *)(v7 + 148) = v8;
  HIWORD(v11) = (unsigned int)&loc_50B38 >> 16;
  *(_QWORD *)(v7 + 156) = v6;
  *(_DWORD *)(v7 + 152) = v9;
  *(_DWORD *)(v7 + 176) = v10;
  *(_DWORD *)(v7 + 184) = v11;
  *(_BYTE *)(v7 + 144) = 1;
  return v7;
}
