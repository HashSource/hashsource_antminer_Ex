int __fastcall lzo1b_decompress(unsigned __int8 *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // r1
  _DWORD *v5; // r12
  unsigned __int8 *v6; // r4
  unsigned int v7; // lr
  unsigned int v8; // lr
  int *v9; // r8
  _DWORD *v10; // r7
  unsigned int v11; // r6
  _DWORD *v12; // r9
  int v13; // t1
  int v14; // r0
  unsigned __int8 *v15; // r4
  unsigned __int8 *v16; // r6
  int v17; // r0
  char v18; // lr
  int v19; // r0
  unsigned int v20; // t1
  unsigned int v21; // r7
  int v22; // r6
  int v23; // r6
  _BYTE *v24; // r8
  int *v25; // r8
  int v26; // t1
  unsigned int v27; // r11
  int *v28; // r4
  _DWORD *v29; // r10
  _DWORD *v30; // r12
  _DWORD *v31; // lr
  int v32; // t1
  int v33; // r6
  int v34; // r11
  int v35; // r6
  char *v36; // r8
  int v37; // lr
  char *v38; // r7
  char v39; // t1
  char *v40; // lr
  int v41; // r4
  char v42; // t1
  int v43; // r6
  int v44; // lr
  char v45; // r8
  int v46; // r6
  char *v47; // r7
  _DWORD *v48; // r4
  int v49; // r12
  int v50; // r4
  char v51; // t1
  int v52; // t1
  int v53; // r6
  unsigned __int8 *v54; // r8
  char v55; // t1
  unsigned int v56; // lr
  int v57; // r6
  int v58; // lr
  int v59; // r7
  unsigned __int8 *v60; // lr
  char v61; // t1
  unsigned __int8 *v63; // r0
  int v64; // r7

  v4 = &a1[a2];
  v5 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = a1 + 1;
        v7 = *a1;
        if ( v7 > 0x1F )
          goto LABEL_15;
        if ( *a1 )
          break;
        v8 = a1[1];
        v6 = a1 + 2;
        if ( v8 <= 0xF7 )
        {
          v7 = v8 + 32;
LABEL_7:
          v9 = (int *)v6;
          v10 = v5;
          v11 = ((v7 - 4) & 0xFFFFFFFC) + 4;
          v12 = (_DWORD *)((char *)v5 + v11);
          while ( 1 )
          {
            v13 = *v9++;
            *v5++ = v13;
            if ( v5 == v12 )
              break;
            v10 = v5;
          }
          v14 = v7 & 3;
          v15 = &v6[v11];
          if ( (v7 & 3) != 0 )
          {
            v59 = (int)v10 + 3;
            v60 = &v15[v14];
            do
            {
              v61 = *v15++;
              *(_BYTE *)++v59 = v61;
            }
            while ( v15 != v60 );
            v5 = (_DWORD *)((char *)v5 + v14);
          }
          goto LABEL_11;
        }
        v56 = v8 - 248;
        if ( v56 )
        {
          v57 = 256;
          do
          {
            --v56;
            v57 *= 2;
          }
          while ( v56 );
        }
        else
        {
          v57 = 280;
        }
        a1 += 2;
        do
        {
          v58 = *(_DWORD *)a1;
          v57 -= 8;
          a1 += 8;
          v5 += 2;
          *(v5 - 2) = v58;
          *(v5 - 1) = *((_DWORD *)a1 - 1);
        }
        while ( v57 );
      }
      if ( v7 > 3 )
        goto LABEL_7;
      v53 = (int)v5 - 1;
      v54 = &a1[v7];
      do
      {
        v55 = *++a1;
        *(_BYTE *)++v53 = v55;
      }
      while ( v54 != a1 );
      v5 = (_DWORD *)((char *)v5 + v7);
      v15 = &v6[v7];
LABEL_11:
      v7 = *v15;
      if ( v7 <= 0x1F )
      {
        do
        {
          v16 = v15;
          v17 = ~(v7 | (32 * v15[1]));
          v18 = *((_BYTE *)v5 + v17);
          v19 = (int)v5++ + v17;
          *((_BYTE *)v5 - 4) = v18;
          *((_BYTE *)v5 - 3) = *(_BYTE *)(v19 + 1);
          *((_BYTE *)v5 - 2) = *(_BYTE *)(v19 + 2);
          *((_BYTE *)v5 - 1) = v15[2];
          v20 = v15[3];
          v15 += 3;
          v7 = v20;
        }
        while ( v20 <= 0x1F );
        v6 = v16 + 4;
      }
      else
      {
        v6 = v15 + 1;
      }
LABEL_15:
      v21 = v7 & 0x1F;
      v22 = *v6;
      if ( v7 <= 0x3F )
        break;
      v43 = ~(v21 | (32 * v22));
      v44 = (v7 >> 5) - 1;
      v45 = *((_BYTE *)v5 + v43);
      v46 = (int)v5 + v43;
      v47 = (char *)(v46 + 2);
      a1 = v6 + 1;
      v48 = v5;
      *(_BYTE *)v5 = v45;
      v49 = (int)v5 + 2;
      *((_BYTE *)v48 + 1) = *(_BYTE *)(v46 + 1);
      v50 = (int)v48 + 1;
      do
      {
        v51 = *v47++;
        *(_BYTE *)++v50 = v51;
      }
      while ( v47 != (char *)(v46 + 2 + v44) );
      v5 = (_DWORD *)(v49 + v44);
    }
    if ( (v7 & 0x1F) == 0 )
    {
      if ( *v6 )
      {
        v63 = v6;
        v64 = 31;
      }
      else
      {
        while ( 1 )
        {
          v52 = *++v6;
          v22 = v52;
          if ( v52 )
            break;
          v21 += 255;
        }
        v64 = v21 + 286;
        v63 = v6;
      }
      v21 = v22 + v64;
      ++v6;
      v22 = v63[1];
    }
    a1 = v6 + 2;
    v23 = -(v22 + (v6[1] << 8));
    v24 = (char *)v5 + v23;
    if ( v5 == (_DWORD *)((char *)v5 + v23) )
      break;
    if ( v21 <= 4 || v23 >= -3 )
    {
      v40 = v24 + 3;
      *(_BYTE *)v5 = *v24;
      *((_BYTE *)v5 + 1) = v24[1];
      *((_BYTE *)v5 + 2) = v24[2];
      v41 = (int)v5 + 2;
      do
      {
        v42 = *v40++;
        *(_BYTE *)++v41 = v42;
      }
      while ( v40 != &v24[v21 + 3] );
      v5 = (_DWORD *)((char *)v5 + v21 + 3);
    }
    else
    {
      v26 = *(_DWORD *)v24;
      v25 = (int *)(v24 + 4);
      v27 = (v21 - 5) >> 2;
      v28 = v25;
      v29 = &v5[v27 + 2];
      *v5 = v26;
      v30 = v5 + 1;
      v31 = v30;
      do
      {
        v32 = *v28++;
        *v31++ = v32;
      }
      while ( v31 != v29 );
      v33 = v21 - 1 - 4 * v27;
      v34 = v27 + 1;
      v35 = v33 - 4;
      v5 = &v30[v34];
      v36 = (char *)&v25[v34];
      if ( v35 )
      {
        v37 = (int)v5 - 1;
        v38 = &v36[v35];
        do
        {
          v39 = *v36++;
          *(_BYTE *)++v37 = v39;
        }
        while ( v36 != v38 );
        v5 = (_DWORD *)((char *)v5 + v35);
      }
    }
  }
  *a4 = (char *)v5 - (char *)a3;
  if ( v4 == a1 )
    return 0;
  if ( v4 > a1 )
    return -8;
  return -4;
}
