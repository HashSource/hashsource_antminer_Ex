void *__fastcall sub_E9070(int a1, int a2, int a3)
{
  __int64 v3; // r6
  int v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r5
  size_t v12; // r5
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  void *result; // r0

  LODWORD(v3) = 1 << a2;
  HIDWORD(v3) = (1 << (a2 - 32)) | (1u >> (32 - a2));
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 60) = 2;
  v5 = __PAIR64__(HIDWORD(v3), 1 << a2) >> a3;
  *(_DWORD *)(a1 + 52) = -1;
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 24) = (__PAIR64__(HIDWORD(v3), 1 << a2) >> 1) - 1;
  *(_QWORD *)(a1 + 32) = (__PAIR64__(HIDWORD(v3), 1 << a2) >> 1) - 1;
  *(_DWORD *)(a1 + 40) = v5;
  *(_DWORD *)(a1 + 44) = v5;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 8) = v3;
  v6 = new_compressor(a2, a3);
  v7 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 80) = v6;
  v8 = new_compressor(*(_DWORD *)a1, v7);
  v9 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 84) = v8;
  *(_DWORD *)(a1 + 88) = new_bitmap(2 * v9);
  v10 = new_siphash();
  v11 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 92) = v10;
  v12 = 2 * v11;
  v13 = calloc(v12, 4u);
  *(_DWORD *)(a1 + 68) = v13;
  if ( !v13 )
  {
    puts("graph adjlist calloc failed!");
    v12 = 2 * *(_DWORD *)(a1 + 40);
  }
  v14 = calloc(v12, 8u);
  *(_DWORD *)(a1 + 76) = v14;
  if ( !v14 )
    puts("graph link calloc failed!");
  v15 = calloc(*(_DWORD *)(a1 + 60), 0xACu);
  *(_DWORD *)(a1 + 72) = v15;
  if ( !v15 )
    puts("graph sols calloc failed!");
  result = memset(*(void **)(a1 + 68), *(unsigned __int8 *)(a1 + 52), 8 * *(_DWORD *)(a1 + 40));
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  return result;
}
