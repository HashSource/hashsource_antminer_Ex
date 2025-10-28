int __fastcall lzo2a_decompress(unsigned __int8 *a1, int a2, char *a3, _DWORD *a4)
{
  int v4; // r8
  unsigned __int8 *v5; // r1
  char *v6; // r7
  unsigned int v7; // r6
  unsigned int v8; // lr
  unsigned int v9; // r5
  unsigned __int8 *v10; // r4
  unsigned int v11; // r12
  int v12; // r12
  unsigned int v13; // lr
  char *v14; // r12
  unsigned int v15; // lr
  char *v16; // r4
  char *v17; // r9
  char v18; // t1
  unsigned int v19; // r6
  bool v20; // zf
  char *v21; // r12
  int v22; // r9
  char *v23; // r5
  char *v24; // lr
  char v25; // t1
  int v26; // lr
  int v27; // r4
  int v28; // t1
  unsigned int v30; // r4
  bool v31; // zf

  v4 = 0;
  v5 = &a1[a2];
  v6 = a3;
  v7 = 0;
  while ( 1 )
  {
    v8 = *a1;
    if ( v4 )
      break;
LABEL_3:
    v9 = v8 | v7;
    v10 = a1 + 1;
    v20 = ((v8 | v7) & 1) == 0;
    v7 = (v8 | v7) >> 1;
    v8 = a1[1];
    if ( v20 )
    {
      v4 = 7;
LABEL_24:
      *v6 = v8;
      a1 = v10 + 1;
      ++v6;
    }
    else
    {
      v11 = a1[1];
      v20 = (v7 & 1) == 0;
      v7 = v9 >> 2;
      if ( !v20 )
      {
        v4 = 6;
        goto LABEL_6;
      }
      a1 += 2;
      v30 = 6;
LABEL_33:
      v4 = v30 - 2;
LABEL_20:
      v21 = &v6[~v11];
      v22 = (v7 & 3) + 2;
      v7 >>= 2;
      v23 = &v21[v22];
      v24 = v6 - 1;
      do
      {
        v25 = *v21++;
        *++v24 = v25;
      }
      while ( v21 != v23 );
      v6 += v22;
    }
  }
  while ( 1 )
  {
    if ( (v7 & 1) == 0 )
    {
      --v4;
      v7 >>= 1;
      v10 = a1;
      goto LABEL_24;
    }
    if ( v4 == 1 )
    {
      v19 = (v7 >> 1) | v8;
      v8 = a1[1];
      v20 = (v19 & 1) == 0;
      v10 = a1 + 1;
      v7 = v19 >> 1;
      if ( !v20 )
        v4 = 7;
      v11 = a1[1];
      if ( v20 )
      {
        a1 += 2;
        v4 = 5;
        goto LABEL_20;
      }
    }
    else
    {
      v31 = (v7 & 2) == 0;
      v30 = v4 - 2;
      if ( (v7 & 2) != 0 )
        v4 -= 2;
      v7 >>= 2;
      v11 = v8;
      if ( v31 )
      {
        if ( v30 <= 1 )
        {
          v7 |= v8 << v30;
          v4 += 4;
          v11 = a1[1];
          a1 += 2;
          goto LABEL_20;
        }
        ++a1;
        goto LABEL_33;
      }
      v10 = a1;
    }
LABEL_6:
    v12 = v8 & 0x1F;
    v13 = v8 >> 5;
    a1 = v10 + 2;
    v14 = &v6[-(v12 | (32 * v10[1]))];
    if ( !v13 )
    {
      v26 = v10[2];
      v27 = 9;
      if ( !v26 )
      {
        do
        {
          v28 = *++a1;
          v26 = v28;
          v27 += 255;
        }
        while ( !v28 );
      }
      ++a1;
      v15 = v26 + v27;
      goto LABEL_9;
    }
    if ( v6 == v14 )
      break;
    v15 = v13 + 2;
LABEL_9:
    v16 = v6 - 1;
    v17 = &v14[v15];
    do
    {
      v18 = *v14++;
      *++v16 = v18;
    }
    while ( v14 != v17 );
    v6 += v15;
    v8 = *a1;
    if ( !v4 )
      goto LABEL_3;
  }
  *a4 = v6 - a3;
  if ( v5 == a1 )
    return 0;
  if ( v5 > a1 )
    return -8;
  return -4;
}
