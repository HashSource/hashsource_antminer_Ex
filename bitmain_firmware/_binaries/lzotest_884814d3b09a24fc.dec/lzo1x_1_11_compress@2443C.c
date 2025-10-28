int __fastcall lzo1x_1_11_compress(char *a1, unsigned int a2, char *a3, _DWORD *a4, void *s)
{
  unsigned int v6; // r5
  unsigned int v7; // r6
  char *v8; // r8
  char *v9; // r4
  char *v10; // r9
  unsigned int v11; // r7
  unsigned int v12; // r3
  int v13; // r0
  unsigned int v14; // r5
  bool v16; // zf
  char v17; // r2
  char *v18; // r9
  char *v19; // r0
  char *v20; // r3
  unsigned int v21; // r1
  int v22; // r2
  unsigned int v23; // r3
  int v24; // t1
  char *v25; // r4
  char *v26; // r3
  char v27; // t1
  unsigned int v28; // r3

  if ( a2 <= 0x14 )
  {
    v9 = a3;
    v6 = a2;
    v11 = 0;
  }
  else
  {
    v6 = a2;
    if ( a2 >= 0xC000 )
      v7 = 49152;
    else
      v7 = a2;
    v8 = &a1[v7];
    if ( &a1[v7] >= &a1[v7 + (v7 >> 5)] )
    {
      v9 = a3;
      v14 = a2;
LABEL_15:
      v16 = v14 == 238;
      if ( v14 <= 0xEE )
        v16 = a3 == v9;
      v17 = v16;
      v18 = &a1[a2 - v14];
      if ( v16 )
      {
        *v9 = v14 + 17;
        v19 = v9 + 1;
        if ( v14 <= 7 )
        {
          if ( v14 <= 3 )
          {
            v23 = v14;
            ++v9;
            goto LABEL_34;
          }
          goto LABEL_32;
        }
      }
      else
      {
        if ( v14 <= 3 )
        {
          v19 = v9;
          v23 = v14;
          *(v9 - 2) |= v14;
          goto LABEL_34;
        }
        v19 = v9 + 1;
        if ( v14 > 0x12 )
        {
          v28 = v14 - 18;
          for ( *v9 = v17; v28 > 0xFF; ++v19 )
          {
            v28 -= 255;
            *v19 = v17;
          }
          *v19++ = v28;
        }
        else
        {
          *v9 = v14 - 3;
          if ( v14 <= 7 )
          {
LABEL_32:
            v9 = v19;
            v23 = v14;
            goto LABEL_26;
          }
        }
      }
      v20 = &a1[a2 - v14];
      v9 = v19;
      v21 = ((v14 - 8) & 0xFFFFFFF8) + 8;
      do
      {
        v22 = *(_DWORD *)v20;
        v9 += 8;
        v20 += 8;
        *((_DWORD *)v9 - 2) = v22;
        *((_DWORD *)v9 - 1) = *((_DWORD *)v20 - 1);
      }
      while ( &v19[v21] != v9 );
      v23 = v14 & 7;
      v18 += v21;
      if ( v23 <= 3 )
      {
LABEL_27:
        if ( !v23 )
        {
LABEL_28:
          v9 = &v19[v14];
          goto LABEL_13;
        }
LABEL_34:
        v25 = v9 - 1;
        v26 = &v18[v23];
        do
        {
          v27 = *v18++;
          *++v25 = v27;
        }
        while ( v18 != v26 );
        goto LABEL_28;
      }
LABEL_26:
      v24 = *(_DWORD *)v18;
      v18 += 4;
      v23 -= 4;
      *(_DWORD *)v9 = v24;
      v9 += 4;
      goto LABEL_27;
    }
    v9 = a3;
    v10 = a1;
    v11 = 0;
    do
    {
      v6 -= v7;
      memset(s, 0, 0x1000u);
      v13 = sub_2408C(v10, v7, v9, a4, v11, (int)s);
      v11 = v13;
      v10 = v8;
      v9 += *a4;
      if ( v6 <= 0x14 )
        break;
      v7 = v6 >= 0xC000 ? 49152 : v6;
      v12 = (unsigned int)&v8[v7 + ((v7 + v13) >> 5)];
      v8 += v7;
    }
    while ( v12 > (unsigned int)v8 );
  }
  v14 = v11 + v6;
  if ( v14 )
    goto LABEL_15;
LABEL_13:
  *v9 = 17;
  v9[1] = 0;
  v9[2] = 0;
  *a4 = v9 + 3 - a3;
  return 0;
}
