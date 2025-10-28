_BYTE *__fastcall lzo1b_store_run(_BYTE *a1, char *src, unsigned int a3)
{
  unsigned int v3; // r6
  _BYTE *v4; // r4
  char *v5; // r5
  char *v6; // r7
  char *v7; // r9
  int v8; // r8
  char *v9; // r0
  const void *v10; // r1
  int v11; // r8
  size_t v12; // r7
  void *v13; // r0
  _BYTE *result; // r0
  _BYTE *v15; // r7
  char *v16; // r1
  _BYTE *v17; // r3
  _BYTE *v18; // r0
  _BYTE *v19; // r3
  char v20; // t1
  _BYTE *v21; // r3
  char *v22; // r1
  char v23; // t1
  unsigned int v24; // [sp+0h] [bp-Ch]
  unsigned int v25; // [sp+4h] [bp-8h]

  v3 = a3;
  v4 = a1;
  v5 = src;
  if ( a3 >= 0x200 )
  {
    if ( a3 >= 0x8000 )
    {
      v6 = a1 + 2;
      v24 = a3 - 0x8000;
      v7 = src;
      v25 = (a3 - 0x8000) >> 15;
      v8 = (int)&a1[32770 * v25 + 32772];
      do
      {
        *(v6 - 2) = 0;
        v9 = v6;
        *(v6 - 1) = -1;
        v10 = v7;
        v6 += 32770;
        v7 += 0x8000;
        memcpy(v9, v10, 0x8000u);
      }
      while ( v6 != (char *)v8 );
      v3 &= 0x7FFFu;
      v4 += 32770 * v25 + 32770;
      v5 += (v24 & 0xFFFF8000) + 0x8000;
    }
    v11 = 6;
    v12 = 0x4000;
    do
    {
      while ( v3 < v12 )
      {
        --v11;
        v12 >>= 1;
        if ( !v11 )
          goto LABEL_10;
      }
      *v4 = 0;
      v13 = v4 + 2;
      v4[1] = v11 - 8;
      v4 += v12 + 2;
      v3 -= v12;
      memcpy(v13, v5, v12);
      --v11;
      v5 += v12;
      v12 >>= 1;
    }
    while ( v11 );
  }
LABEL_10:
  if ( v3 >= 0x118 )
  {
    v15 = v4 + 282;
    do
    {
      *(v15 - 282) = 0;
      *(v15 - 281) = -8;
      v3 -= 280;
      memcpy(v15 - 280, v5, 0x118u);
      result = v15;
      v5 += 280;
      v15 += 282;
    }
    while ( v3 >= 0x118 );
  }
  else
  {
    result = v4;
  }
  if ( v3 <= 0x1F )
  {
    if ( v3 )
    {
      v21 = result;
      v22 = &v5[v3];
      *result = v3;
      do
      {
        v23 = *v5++;
        *++v21 = v23;
      }
      while ( v5 != v22 );
      result += v3 + 1;
    }
  }
  else
  {
    v16 = &v5[v3];
    v17 = result;
    *result = 0;
    v18 = result + 2;
    v17[1] = v3 - 32;
    v19 = v17 + 1;
    do
    {
      v20 = *v5++;
      *++v19 = v20;
    }
    while ( v5 != v16 );
    return &v18[v3];
  }
  return result;
}
