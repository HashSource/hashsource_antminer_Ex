int __fastcall lzo1f_decompress(unsigned __int8 *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // r5
  _DWORD *v5; // lr
  unsigned int v6; // r12
  unsigned __int8 *v7; // r4
  unsigned __int8 *v8; // r8
  _DWORD *v9; // r9
  unsigned int v10; // r5
  _DWORD *v11; // r10
  int v12; // t1
  unsigned __int8 *v13; // r5
  char *v14; // r4
  unsigned __int8 *v15; // r8
  char v16; // t1
  int v17; // r12
  char v18; // r4
  char *v19; // r12
  unsigned int v20; // r12
  unsigned int v21; // r4
  _BYTE *v22; // r6
  bool v23; // cc
  _DWORD *v24; // r9
  char *v25; // r4
  char *v26; // r9
  char v27; // t1
  int v28; // r4
  char *v29; // r6
  unsigned __int8 *v30; // r12
  char v31; // t1
  unsigned __int8 *v32; // r5
  char *v33; // r6
  char v34; // t1
  int v35; // r5
  int v36; // t1
  int v37; // r6
  int v38; // r5
  int v39; // t1
  int *v40; // r6
  int v41; // t1
  unsigned int v42; // r11
  unsigned int v43; // r12
  int *v44; // r8
  _DWORD *v45; // r10
  _DWORD *v46; // lr
  _DWORD *v47; // r4
  int v48; // t1
  unsigned int v49; // r12
  int v50; // r11
  char *v51; // r6
  char *v52; // r4
  char *v53; // r9
  char v54; // t1
  unsigned __int8 *v55; // r0

  v4 = a1;
  v5 = a3;
  *a4 = 0;
  while ( 1 )
  {
    v6 = *v4;
    v7 = v4 + 1;
    if ( v6 <= 0x1F )
    {
      if ( *v4 )
      {
        if ( v6 > 3 )
        {
LABEL_5:
          v8 = v7;
          v9 = v5;
          v10 = ((v6 - 4) & 0xFFFFFFFC) + 4;
          v11 = (_DWORD *)((char *)v5 + v10);
          while ( 1 )
          {
            v12 = *(_DWORD *)v8;
            v8 += 4;
            *v5++ = v12;
            if ( v5 == v11 )
              break;
            v9 = v5;
          }
          v6 &= 3u;
          v13 = &v7[v10];
          if ( !v6 )
            goto LABEL_12;
          v14 = (char *)v9 + 3;
          v15 = &v13[v6];
          do
          {
            v16 = *v13++;
            *++v14 = v16;
          }
          while ( v13 != v15 );
LABEL_11:
          v5 = (_DWORD *)((char *)v5 + v6);
LABEL_12:
          v6 = *v13;
          v7 = v13 + 1;
          goto LABEL_13;
        }
      }
      else
      {
        v35 = v4[1];
        if ( !v35 )
        {
          do
          {
            v36 = *++v7;
            v35 = v36;
            v6 += 255;
          }
          while ( !v36 );
        }
        ++v7;
        v6 += v35 + 31;
        if ( v6 > 3 )
          goto LABEL_5;
      }
      v33 = (char *)v5 - 1;
      v13 = &v7[v6];
      do
      {
        v34 = *v7++;
        *++v33 = v34;
      }
      while ( v7 != v13 );
      goto LABEL_11;
    }
LABEL_15:
    if ( v6 <= 0xDF )
    {
      v37 = ~((v6 >> 2) & 7);
      v20 = v6 >> 5;
      v4 = v7 + 1;
      v22 = (char *)v5 + v37 - 8 * *v7;
LABEL_21:
      v24 = v5;
      v25 = v22 + 2;
      *(_BYTE *)v5 = *v22;
      v5 = (_DWORD *)((char *)v5 + 2);
      *((_BYTE *)v24 + 1) = v22[1];
      v26 = (char *)v24 + 1;
      do
      {
        v27 = *v25++;
        *++v26 = v27;
      }
      while ( &v22[v20 + 2] != v25 );
LABEL_23:
      v5 = (_DWORD *)((char *)v5 + v20);
      goto LABEL_24;
    }
    v20 = v6 & 0x1F;
    if ( !v20 )
    {
      v38 = *v7;
      if ( !*v7 )
      {
        do
        {
          v39 = *++v7;
          v38 = v39;
          v20 += 255;
        }
        while ( !v39 );
      }
      ++v7;
      v20 += v38 + 31;
    }
    v4 = v7 + 2;
    v21 = *(unsigned __int16 *)v7 >> 2;
    v22 = (char *)v5 - v21;
    if ( v5 == (_DWORD *)((char *)v5 - v21) )
      break;
    v23 = v21 > 3;
    if ( v21 > 3 )
      v23 = v20 > 5;
    if ( !v23 )
      goto LABEL_21;
    v41 = *(_DWORD *)v22;
    v40 = (int *)(v22 + 4);
    v42 = (v20 - 6) >> 2;
    v43 = v20 - 2;
    v44 = v40;
    v45 = &v5[v42 + 2];
    *v5 = v41;
    v46 = v5 + 1;
    v47 = v46;
    do
    {
      v48 = *v44++;
      *v47++ = v48;
    }
    while ( v47 != v45 );
    v49 = v43 - 4 * v42;
    v50 = v42 + 1;
    v20 = v49 - 4;
    v5 = &v46[v50];
    v51 = (char *)&v40[v50];
    if ( v20 )
    {
      v52 = (char *)v5 - 1;
      v53 = &v51[v20];
      do
      {
        v54 = *v51++;
        *++v52 = v54;
      }
      while ( v53 != v51 );
      goto LABEL_23;
    }
LABEL_24:
    while ( 1 )
    {
      v28 = *(v4 - 2) & 3;
      if ( (*(v4 - 2) & 3) == 0 )
        break;
      v29 = (char *)v5 - 1;
      v30 = v4;
      do
      {
        v31 = *v30++;
        *++v29 = v31;
      }
      while ( v30 != &v4[v28] );
      v5 = (_DWORD *)((char *)v5 + v28);
      v32 = &v4[v28 - 1];
      v7 = v32 + 2;
      v6 = v32[1];
LABEL_13:
      if ( v6 > 0x1F )
        goto LABEL_15;
      v4 = v7 + 1;
      v17 = -2049 - (v6 >> 2) - 8 * *v7;
      v18 = *((_BYTE *)v5 + v17);
      v19 = (char *)v5 + v17;
      v5 = (_DWORD *)((char *)v5 + 3);
      *((_BYTE *)v5 - 3) = v18;
      *((_BYTE *)v5 - 2) = v19[1];
      *((_BYTE *)v5 - 1) = v19[2];
    }
  }
  v55 = &a1[a2];
  *a4 = (char *)v5 - (char *)a3;
  if ( v55 == v4 )
    return 0;
  if ( v55 > v4 )
    return -8;
  return -4;
}
