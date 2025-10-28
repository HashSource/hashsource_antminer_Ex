int __fastcall lzo1_decompress(unsigned __int8 *a1, int a2, _BYTE *dest, _DWORD *a4)
{
  unsigned int v4; // lr
  unsigned int v5; // r5
  int v7; // r4
  _BYTE *v8; // r4
  char *v10; // r8
  unsigned int v11; // r3
  size_t v12; // r9
  void *v13; // r0
  unsigned int v14; // r2
  unsigned int v15; // r3
  bool v16; // cc
  int v17; // r3
  _BYTE *v18; // r1
  _BYTE *v19; // r3
  char *v20; // r2
  _BYTE *v21; // r4
  char *v22; // r12
  _BYTE *v23; // r1
  char v24; // t1
  char *v26; // r1
  _BYTE *v27; // r0
  char v28; // t1

  v5 = (unsigned int)&a1[a2];
  if ( a1 >= &a1[a2] )
  {
    v7 = 0;
    goto LABEL_24;
  }
  v8 = dest;
  do
  {
    while ( 1 )
    {
      v14 = *a1;
      v15 = a1[1];
      if ( v14 > 0x1F )
        break;
      if ( *a1 )
      {
        v10 = (char *)(a1 + 1);
      }
      else
      {
        v10 = (char *)(a1 + 2);
        if ( v15 > 0xF7 )
        {
          v11 = v15 - 248;
          if ( v11 )
          {
            v12 = 256;
            do
            {
              --v11;
              v12 *= 2;
            }
            while ( v11 );
          }
          else
          {
            v12 = 280;
          }
          v13 = v8;
          v8 += v12;
          memcpy(v13, v10, v12);
          a1 = (unsigned __int8 *)&v10[v12];
          goto LABEL_11;
        }
        v14 = v15 + 32;
        LOBYTE(v15) = a1[2];
      }
      v26 = v10;
      v27 = &v8[v14];
      while ( 1 )
      {
        *v8++ = v15;
        if ( v8 == v27 )
          break;
        v28 = *++v26;
        LOBYTE(v15) = v28;
      }
      a1 = (unsigned __int8 *)&v10[v14];
LABEL_11:
      if ( v5 <= (unsigned int)a1 )
        goto LABEL_23;
    }
    v16 = v14 > 0xDF;
    v17 = v14 & 0x1F | (32 * v15);
    if ( v14 <= 0xDF )
      v4 = v14 >> 5;
    else
      v14 = a1[2];
    v18 = v8;
    v19 = &v8[~v17];
    if ( v16 )
    {
      v4 = v14 + 7;
      a1 += 3;
    }
    v20 = v19 + 2;
    if ( !v16 )
      a1 += 2;
    *v8 = *v19;
    v21 = v8 + 2;
    v22 = &v20[v4];
    v18[1] = v19[1];
    v23 = v18 + 1;
    do
    {
      v24 = *v20++;
      *++v23 = v24;
    }
    while ( v20 != v22 );
    v8 = &v21[v4];
  }
  while ( v5 > (unsigned int)a1 );
LABEL_23:
  v7 = v8 - dest;
LABEL_24:
  *a4 = v7;
  if ( (unsigned __int8 *)v5 == a1 )
    return 0;
  else
    return -4;
}
