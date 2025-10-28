int __fastcall sortValidator(int *a1, int a2)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  _BYTE v16[40]; // [sp+14h] [bp-1668h] BYREF
  unsigned int v17; // [sp+48h] [bp-1634h] BYREF
  _BYTE v18[32]; // [sp+4Ch] [bp-1630h] BYREF
  _BYTE v19[16]; // [sp+6Ch] [bp-1610h] BYREF
  _BYTE v20[1520]; // [sp+8Ch] [bp-15F0h] BYREF
  _BYTE v21[32]; // [sp+DCCh] [bp-8B0h] BYREF
  _DWORD v22[8]; // [sp+DECh] [bp-890h] BYREF
  _DWORD v23[4]; // [sp+E0Ch] [bp-870h] BYREF
  unsigned int v24; // [sp+160Ch] [bp-70h]
  void *v25; // [sp+1610h] [bp-6Ch]
  void *v26; // [sp+1614h] [bp-68h]
  void *ptr; // [sp+1618h] [bp-64h]
  int v28; // [sp+161Ch] [bp-60h]
  unsigned int v29; // [sp+1620h] [bp-5Ch]
  int v30; // [sp+1624h] [bp-58h]
  unsigned int v31; // [sp+1628h] [bp-54h]
  size_t n; // [sp+162Ch] [bp-50h]
  int v33; // [sp+1630h] [bp-4Ch]
  unsigned int v34; // [sp+1634h] [bp-48h]
  const void *v35; // [sp+1638h] [bp-44h]
  int v36; // [sp+163Ch] [bp-40h]
  int v37; // [sp+1640h] [bp-3Ch]
  int *v38; // [sp+1644h] [bp-38h]
  size_t jj; // [sp+1648h] [bp-34h]
  unsigned int ii; // [sp+164Ch] [bp-30h]
  size_t m; // [sp+1650h] [bp-2Ch]
  size_t k; // [sp+1654h] [bp-28h]
  signed int j; // [sp+1658h] [bp-24h]
  int i; // [sp+165Ch] [bp-20h]
  size_t v45; // [sp+1660h] [bp-1Ch]
  void *v46; // [sp+1664h] [bp-18h]
  void *base; // [sp+1668h] [bp-14h]
  int v48; // [sp+166Ch] [bp-10h]
  size_t nmemb; // [sp+1670h] [bp-Ch]
  size_t v50; // [sp+1674h] [bp-8h]

  v38 = a1;
  v37 = *a1;
  v36 = a1[1];
  v35 = (const void *)a1[2];
  v2 = sub_344EB8(v37, v36 + 1);
  v34 = v2;
  v3 = v2 + 7;
  if ( v2 + 7 < 0 )
    v3 = v2 + 14;
  v33 = v3 >> 3;
  n = (v3 >> 3) * (v36 + 1);
  v31 = sub_344EB8(512, v37);
  v30 = (int)(v37 * v31) / 8;
  v29 = ((sub_344EB8(v37, v36 + 1) + 1) << v36) / 8;
  v28 = 512;
  v50 = 4;
  nmemb = 512;
  v48 = 0;
  compare_size = 3;
  expandArray(a2, v29, (int)v23, 2048, v34 + 1, 1u);
  memset(v22, 0, 0x1Eu);
  base = malloc(0x4400u);
  v46 = malloc(0x4400u);
  ptr = 0;
  v45 = 0;
  memset(v21, 0, 0x1Eu);
  j = 0;
  for ( i = 0; i < v28; ++i )
  {
    for ( j = i + 1; j < v28; ++j )
    {
      if ( v23[i] == v23[j] )
      {
        v48 = 1;
        goto LABEL_51;
      }
    }
  }
  for ( j = 0; j < v28; ++j )
  {
    v24 = sub_244188(v23[j]);
    v4 = sub_344EB8(v24, v31);
    sub_244998(v35, v4, v16, v30);
    sub_34514C(v24, v31);
    expandArray((int)&v16[v37 * v5 / 8], v37 / 8, (int)v19, n, v34, 0);
    for ( k = 0; k < n; ++k )
      *((_BYTE *)v22 + k) ^= v19[k];
    memcpy((char *)base + j * (n + v50), v19, n);
    memcpy((char *)base + j * (n + v50) + n, &v23[j], v50);
  }
  if ( sub_244920((int)v22, 0x1Eu) )
  {
    memset(v22, 0, 0x1Eu);
    for ( i = 0; i <= 8; ++i )
    {
      qsort(base, nmemb, n + v50, sub_244A14);
      v45 = 0;
      for ( j = 0; nmemb > j; j += 2 )
      {
        for ( m = 0; m < n; ++m )
          v21[m] = *((_BYTE *)base + (j + 1) * (n + v50) + m) ^ *((_BYTE *)base + j * (n + v50) + m);
        memcpy((char *)v46 + j / 2 * (2 * v50 + n), v21, n);
        memcpy((char *)v46 + j / 2 * (2 * v50 + n) + n, (char *)base + j * (n + v50) + n, v50);
        memcpy((char *)v46 + j / 2 * (2 * v50 + n) + n + v50, (char *)base + (j + 1) * (n + v50) + n, v50);
        ++v45;
      }
      v50 *= 2;
      v25 = base;
      base = v46;
      v46 = v25;
      nmemb = v45;
      compare_size += 3;
    }
    for ( i = 0; i < 512; ++i )
    {
      v6 = sub_244188(*(_DWORD *)((char *)base + 4 * i + n));
      *(_DWORD *)&v20[4 * i + 1344] = v6;
    }
    for ( ii = 0; ii <= 8; ++ii )
    {
      for ( i = 0; i < 512; i += 2 << ii )
        sort_pair((int)&v20[4 * i + 1344], 1 << ii);
    }
    v50 = 4;
    nmemb = 512;
    for ( j = 0; j < v28; ++j )
    {
      v17 = *(_DWORD *)&v20[4 * j + 1344];
      v7 = sub_344EB8(v17, v31);
      sub_244998(v35, v7, v16, v30);
      sub_34514C(v17, v31);
      expandArray((int)&v16[v37 * v8 / 8], v37 / 8, (int)v18, n, v34, 0);
      v17 = sub_244188(*(_DWORD *)&v20[4 * j + 1344]);
      memcpy((char *)base + j * (n + v50), v18, n);
      memcpy((char *)base + j * (n + v50) + n, &v17, v50);
      ptr = abin2hex((int)base + j * (n + v50), 0x22u);
      free(ptr);
    }
    for ( i = 0; i <= 8; ++i )
    {
      v45 = 0;
      for ( j = 0; nmemb > j; j += 2 )
      {
        for ( jj = 0; jj < n; ++jj )
          v21[jj] = *((_BYTE *)base + (j + 1) * (n + v50) + jj) ^ *((_BYTE *)base + j * (n + v50) + jj);
        memcpy((char *)v46 + j / 2 * (2 * v50 + n), v21, n);
        memcpy((char *)v46 + j / 2 * (2 * v50 + n) + n, (char *)base + j * (n + v50) + n, v50);
        memcpy((char *)v46 + j / 2 * (2 * v50 + n) + n + v50, (char *)base + (j + 1) * (n + v50) + n, v50);
        ++v45;
      }
      v50 *= 2;
      v26 = base;
      base = v46;
      v46 = v26;
      nmemb = v45;
      compare_size += 3;
    }
    sub_244874((int)base, n, 2048, 20, (int)v20, 0x540u);
    ptr = abin2hex((int)v20, 0x540u);
    free(ptr);
    ptr = abin2hex((int)base, n + v50);
    free(ptr);
    v9 = *((_DWORD *)base + 1);
    v10 = *((_DWORD *)base + 2);
    v11 = *((_DWORD *)base + 3);
    v22[0] = *(_DWORD *)base;
    v22[1] = v9;
    v22[2] = v10;
    v22[3] = v11;
    v12 = *((_DWORD *)base + 5);
    v13 = *((_DWORD *)base + 6);
    v22[4] = *((_DWORD *)base + 4);
    v22[5] = v12;
    v22[6] = v13;
    LOWORD(v22[7]) = *((_WORD *)base + 14);
    if ( !sub_244920((int)v22, 0x1Eu) )
      v48 = 3;
  }
  else
  {
    v48 = 2;
  }
LABEL_51:
  free(base);
  free(v46);
  return v48;
}
