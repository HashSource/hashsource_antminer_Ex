int __fastcall lzo1a_decompress(unsigned __int8 *a1, int a2, _BYTE *dest, _DWORD *a4)
{
  unsigned int v4; // r4
  int v6; // r5
  _BYTE *v7; // r7
  unsigned int v9; // r1
  unsigned int v10; // r3
  unsigned __int8 *v11; // r8
  unsigned int v12; // r3
  size_t v13; // r9
  void *v14; // r0
  _BYTE *v15; // r12
  char *v16; // lr
  char v17; // r9
  char *v18; // r2
  char *v19; // r0
  _BYTE *v20; // r7
  char v21; // t1
  unsigned __int8 *v22; // r0
  _BYTE *v23; // r2
  char v24; // t1
  unsigned __int8 *v25; // r12
  unsigned __int8 *v26; // r0
  int v27; // r3
  char v28; // r1
  _BYTE *v29; // r3
  int v31; // r3
  char *v32; // r1
  _BYTE *v33; // r7
  char v34; // t1

  v4 = (unsigned int)&a1[a2];
  if ( a1 >= &a1[a2] )
  {
    v6 = 0;
    goto LABEL_29;
  }
  v7 = dest;
  while ( 1 )
  {
    v9 = *a1;
    v10 = a1[1];
    if ( *a1 )
    {
      v11 = a1 + 1;
      if ( v9 > 0x1F )
        goto LABEL_13;
    }
    else
    {
      v11 = a1 + 2;
      if ( v10 > 0xF7 )
      {
        v12 = v10 - 248;
        if ( v12 )
        {
          v13 = 256;
          do
          {
            --v12;
            v13 *= 2;
          }
          while ( v12 );
        }
        else
        {
          v13 = 280;
        }
        v14 = v7;
        v7 += v13;
        memcpy(v14, v11, v13);
        a1 = &v11[v13];
        goto LABEL_10;
      }
      v9 = v10 + 32;
      LOBYTE(v10) = a1[2];
    }
    v22 = v11;
    v23 = &v7[v9];
    while ( 1 )
    {
      *v7++ = v10;
      if ( v7 == v23 )
        break;
      v24 = *++v22;
      LOBYTE(v10) = v24;
    }
    v25 = &v11[v9];
    v26 = &v11[v9 - 1];
    if ( v4 <= (unsigned int)&v11[v9] )
    {
      a1 = &v11[v9];
      goto LABEL_28;
    }
    v9 = v11[v9];
    v10 = v26[2];
    if ( v9 <= 0x1F )
      break;
    v11 = v26 + 2;
LABEL_13:
    v15 = v7 + 2;
    v16 = &v7[~(v9 & 0x1F | (32 * v10))];
    v17 = *v16;
    v18 = v16 + 2;
    if ( v9 > 0xDF )
    {
      v31 = v11[1];
      a1 = v11 + 2;
      *v7 = v17;
      v32 = &v18[v31 + 7];
      v7[1] = v16[1];
      v33 = v7 + 1;
      do
      {
        v34 = *v18++;
        *++v33 = v34;
      }
      while ( v18 != v32 );
      v7 = &v15[v31 + 7];
    }
    else
    {
      *v7 = v17;
      v19 = &v18[v9 >> 5];
      v7[1] = v16[1];
      v20 = v7 + 1;
      do
      {
        v21 = *v18++;
        *++v20 = v21;
      }
      while ( v18 != v19 );
      v7 = &v15[v9 >> 5];
      a1 = v11 + 1;
    }
LABEL_10:
    if ( v4 <= (unsigned int)a1 )
    {
      v6 = v7 - dest;
      goto LABEL_29;
    }
  }
  while ( 1 )
  {
    a1 = v25 + 3;
    v27 = ~(v9 | (32 * v10));
    v28 = v23[v27];
    v29 = &v23[v27];
    v23 += 4;
    *(v23 - 4) = v28;
    *(v23 - 3) = v29[1];
    *(v23 - 2) = v29[2];
    *(v23 - 1) = v25[2];
    if ( v4 <= (unsigned int)(v25 + 3) )
      break;
    v9 = v25[3];
    v10 = v25[4];
    if ( v9 > 0x1F )
    {
      v11 = v25 + 4;
      v7 = v23;
      goto LABEL_13;
    }
    v25 += 3;
  }
LABEL_28:
  v6 = v23 - dest;
LABEL_29:
  *a4 = v6;
  if ( (unsigned __int8 *)v4 == a1 )
    return 0;
  else
    return -4;
}
