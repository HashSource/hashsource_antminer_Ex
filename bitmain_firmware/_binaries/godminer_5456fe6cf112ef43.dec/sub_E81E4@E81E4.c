void *__fastcall sub_E81E4(int a1, int a2, int a3)
{
  unsigned int v3; // r3
  int v5; // r12
  int v6; // r3
  int v7; // r5
  unsigned __int64 v8; // kr00_8
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r5
  size_t v15; // r5
  void *v16; // r0
  void *v17; // r0
  void *v18; // r0
  void *result; // r0

  v3 = (1 << (a2 - 32)) | (1u >> (32 - a2));
  *(_DWORD *)(a1 + 20) = v3;
  *(_DWORD *)(a1 + 60) = 2;
  *(_DWORD *)(a1 + 12) = v3;
  v5 = __PAIR64__(v3, 1 << a2) >> a3;
  v8 = __PAIR64__(v3, 1 << a2) - 1;
  v6 = HIDWORD(v8);
  v7 = v8;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 16) = 1 << a2;
  *(_DWORD *)(a1 + 8) = 1 << a2;
  *(_DWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 44) = v5;
  *(_DWORD *)(a1 + 28) = v6;
  *(_DWORD *)(a1 + 36) = v6;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 52) = -1;
  *(_DWORD *)(a1 + 24) = v7;
  *(_DWORD *)(a1 + 32) = v7;
  v9 = new_compressor(a2, a3);
  v10 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 80) = v9;
  v11 = new_compressor(*(_DWORD *)a1, v10);
  v12 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 84) = v11;
  *(_DWORD *)(a1 + 88) = new_bitmap(2 * v12);
  v13 = new_siphash();
  v14 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 92) = v13;
  v15 = 2 * v14;
  v16 = calloc(v15, 4u);
  *(_DWORD *)(a1 + 68) = v16;
  if ( !v16 )
  {
    puts("graph adjlist calloc failed!");
    v15 = 2 * *(_DWORD *)(a1 + 40);
  }
  v17 = calloc(v15, 8u);
  *(_DWORD *)(a1 + 76) = v17;
  if ( !v17 )
    puts("graph link calloc failed!");
  v18 = calloc(*(_DWORD *)(a1 + 60), 0xACu);
  *(_DWORD *)(a1 + 72) = v18;
  if ( !v18 )
    puts("graph sols calloc failed!");
  result = memset(*(void **)(a1 + 68), *(unsigned __int8 *)(a1 + 52), 8 * *(_DWORD *)(a1 + 40));
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
