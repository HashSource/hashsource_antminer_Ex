unsigned int __fastcall IsValidSolution(const void *a1, int a2)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r1
  _BYTE v9[8]; // [sp+14h] [bp-8D8h] BYREF
  _BYTE v10[32]; // [sp+48h] [bp-8A4h] BYREF
  int v11; // [sp+68h] [bp-884h] BYREF
  _DWORD v12[512]; // [sp+88h] [bp-864h] BYREF
  unsigned int v13; // [sp+888h] [bp-64h]
  size_t v14; // [sp+88Ch] [bp-60h]
  void *ptr; // [sp+890h] [bp-5Ch]
  void *src; // [sp+894h] [bp-58h]
  void *dest; // [sp+898h] [bp-54h]
  size_t size; // [sp+89Ch] [bp-50h]
  size_t v19; // [sp+8A0h] [bp-4Ch]
  unsigned int v20; // [sp+8A4h] [bp-48h]
  unsigned int v21; // [sp+8A8h] [bp-44h]
  int v22; // [sp+8ACh] [bp-40h]
  unsigned int v23; // [sp+8B0h] [bp-3Ch]
  size_t n; // [sp+8B4h] [bp-38h]
  int v25; // [sp+8B8h] [bp-34h]
  unsigned int v26; // [sp+8BCh] [bp-30h]
  int v27; // [sp+8C0h] [bp-2Ch]
  int v28; // [sp+8C4h] [bp-28h]
  int k; // [sp+8C8h] [bp-24h]
  int j; // [sp+8CCh] [bp-20h]
  size_t v31; // [sp+8D0h] [bp-1Ch]
  int v32; // [sp+8D4h] [bp-18h]
  unsigned int v33; // [sp+8D8h] [bp-14h]
  unsigned int v34; // [sp+8DCh] [bp-10h]
  unsigned int i; // [sp+8E0h] [bp-Ch]
  unsigned int v36; // [sp+8E4h] [bp-8h]

  v28 = 200;
  v27 = 9;
  v2 = sub_344EB8(200, 0xAu);
  v26 = v2;
  v3 = v2 + 7;
  if ( v2 + 7 < 0 )
    v3 = v2 + 14;
  v25 = v3 >> 3;
  n = (v27 + 1) * (v3 >> 3);
  v23 = sub_344EB8(512, v28);
  v22 = (int)(v28 * v23) / 8;
  v21 = ((sub_344EB8(v28, v27 + 1) + 1) << v27) / 8;
  v20 = 512;
  v19 = 4;
  size = 17408;
  dest = malloc(0x4400u);
  src = malloc(0x4400u);
  ptr = 0;
  v36 = 0;
  memset(v12, 0, sizeof(v12));
  i = 0;
  expandArray(a2, v21, (int)v12, 2048, v26 + 1, 1u);
  for ( i = 0; i < v20; ++i )
  {
    v13 = sub_244188(v12[i]);
    v4 = sub_344EB8(v13, v23);
    sub_244998(a1, v4, v9, v22);
    sub_34514C(v13, v23);
    expandArray((int)&v9[v28 * v5 / 8], v28 / 8, (int)&v11, n, v26, 0);
    memcpy((char *)dest + i * (n + v19), &v11, n);
    memcpy((char *)dest + i * (n + v19) + n, &v12[i], v19);
    ptr = abin2hex((int)dest + i * (n + v19), 0x22u);
    free(ptr);
  }
  v34 = 512;
  v33 = 0;
  v32 = n;
  v31 = v19;
  for ( j = 0; j <= 8; ++j )
  {
    v33 = 0;
    for ( i = 0; i < v34; i += 2 )
    {
      if ( (unsigned __int8)HasCollision((int)dest + i * (v32 + v31), (int)dest + (i + 1) * (v32 + v31), v25) != 1 )
      {
        puts("Invalid solution: invalid collision length between StepRows");
        v36 = 3;
        goto LABEL_24;
      }
      if ( IndicesBefore((int)dest + (i + 1) * (v32 + v31), (int)dest + i * (v32 + v31), v32, v31) )
      {
        puts("Invalid solution: Index tree incorrectly ordered");
        v36 = 4;
        goto LABEL_24;
      }
      if ( (unsigned __int8)DistinctIndices((int)dest + i * (v32 + v31), (int)dest + (i + 1) * (v32 + v31), v32, v31) != 1 )
      {
        puts("Invalid solution: duplicate indices");
        v36 = 1;
        goto LABEL_24;
      }
      memset(v10, 0, 0x1Eu);
      for ( k = 0; k < v32; ++k )
        v10[k] = *((_BYTE *)dest + (i + 1) * (v32 + v31) + k) ^ *((_BYTE *)dest + i * (v32 + v31) + k);
      v14 = v32 - v25;
      memcpy((char *)src + (i >> 1) * (2 * v31 + v32 - v25), &v10[v25], v32 - v25);
      memcpy((char *)src + (i >> 1) * (2 * v31 + v14) + v14, (char *)dest + i * (v32 + v31) + v32, v31);
      memcpy((char *)src + (i >> 1) * (2 * v31 + v14) + v14 + v31, (char *)dest + (i + 1) * (v32 + v31) + v32, v31);
      ++v33;
    }
    memcpy(dest, src, size);
    memset(src, 0, size);
    v32 -= v25;
    v31 *= 2;
    v34 = v33;
  }
  if ( IsZero((int)dest, v32) )
    v36 = 0;
  else
    v36 = 2;
LABEL_24:
  free(dest);
  free(src);
  if ( v36 >= 2 )
    return 2;
  return v36;
}
