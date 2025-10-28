int __fastcall lzo1y_decompress(unsigned __int8 *a1, int a2, unsigned __int8 *a3, _DWORD *a4)
{
  unsigned int v4; // r12
  unsigned __int8 *v5; // lr
  int v6; // r7
  unsigned __int8 v7; // r6
  unsigned int v8; // r4
  unsigned __int8 *v9; // r9
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // r7
  unsigned __int8 *v12; // r12
  unsigned __int8 *i; // r5
  unsigned __int8 v14; // t1
  unsigned __int8 *v15; // r5
  unsigned __int8 *v16; // r4
  int v17; // r6
  unsigned __int8 *v18; // r5
  int v19; // r12
  unsigned __int8 v20; // lr
  unsigned __int8 *v21; // r12
  unsigned int v22; // r8
  unsigned __int8 *v23; // r7
  unsigned __int8 *v24; // r6
  char *v25; // lr
  _BYTE *v26; // r4
  _BYTE *v27; // r6
  char v28; // t1
  int v29; // r5
  int v30; // t1
  unsigned int v31; // r8
  int v32; // r6
  _BYTE *v33; // r7
  unsigned __int8 *v34; // r9
  unsigned int v35; // r12
  unsigned __int8 *v36; // lr
  unsigned __int8 *v37; // r4
  int v38; // t1
  unsigned int v39; // r8
  int v40; // r12
  unsigned int v41; // r8
  unsigned __int8 *v42; // r7
  unsigned __int8 *v43; // lr
  unsigned __int8 v44; // t1
  unsigned __int8 *j; // r12
  unsigned __int8 v46; // t1
  int v47; // r12
  int v48; // t1
  int *v49; // r7
  int v50; // t1
  unsigned int v51; // r10
  unsigned int v52; // r8
  int *v53; // r6
  unsigned __int8 *v54; // r11
  unsigned __int8 *v55; // r4
  unsigned __int8 *v56; // lr
  int v57; // t1
  int v58; // r12
  int v59; // lr
  char *v60; // r12
  unsigned __int8 *v61; // r4
  char *v62; // r7
  unsigned __int8 v63; // t1
  _BYTE *v64; // r4
  unsigned __int8 *v65; // lr
  unsigned __int8 *v66; // r6
  char v67; // t1
  int v68; // r7
  int v69; // r12
  int v70; // t1
  unsigned __int8 *v71; // r7
  unsigned __int8 *v72; // r0
  int v73; // r12

  *a4 = 0;
  v5 = a1 + 1;
  v4 = *a1;
  if ( v4 <= 0x11 )
  {
    v18 = a1;
    v16 = a3;
    if ( v4 <= 0xF )
      goto LABEL_18;
    goto LABEL_12;
  }
  v6 = v4 - 17;
  v7 = a1[1];
  v8 = v4 - 17;
  if ( (int)(v4 - 17) <= 3 )
  {
    v9 = a1 + 2;
    v10 = a3;
    goto LABEL_35;
  }
  v11 = a3 - 1;
  v12 = &a1[v4 - 17];
  for ( i = a1 + 1; ; ++i )
  {
    *++v11 = v7;
    if ( i == v12 )
      break;
    v14 = i[1];
    v7 = v14;
  }
  v15 = &v5[v8];
  v16 = &a3[v8];
  v5 = v15 + 1;
LABEL_8:
  v4 = *v15;
  if ( v4 <= 0xF )
  {
    v17 = v15[1];
    v18 = v15 + 2;
    v10 = v16 + 3;
    v19 = -1025 - (v4 >> 2) - 4 * v17;
    v20 = v16[v19];
    v21 = &v16[v19];
    *v16 = v20;
    v16[1] = v21[1];
    v16[2] = v21[2];
    goto LABEL_10;
  }
LABEL_12:
  if ( v4 > 0x3F )
  {
LABEL_13:
    v18 = v5 + 1;
    v22 = (v4 >> 4) - 3;
    v23 = &v16[~((v4 >> 2) & 3) - 4 * *v5];
LABEL_14:
    v24 = v16;
    v25 = (char *)(v23 + 2);
    *v16 = *v23;
    v26 = v16 + 2;
    v24[1] = v23[1];
    v27 = v24 + 1;
    do
    {
      v28 = *v25++;
      *++v27 = v28;
    }
    while ( v25 != (char *)&v23[v22 + 2] );
    v10 = &v26[v22];
    goto LABEL_10;
  }
  while ( 1 )
  {
    if ( v4 > 0x1F )
    {
      v22 = v4 & 0x1F;
      if ( (v4 & 0x1F) == 0 )
      {
        v47 = *v5;
        if ( !*v5 )
        {
          do
          {
            v48 = *++v5;
            v47 = v48;
            v22 += 255;
          }
          while ( !v48 );
        }
        ++v5;
        v22 += v47 + 31;
      }
      v18 = v5 + 2;
      v23 = &v16[~(*(unsigned __int16 *)v5 >> 2)];
      goto LABEL_49;
    }
    if ( v4 <= 0xF )
    {
      v18 = v5 + 1;
      v73 = ~(v4 >> 2) - 4 * *v5;
      *v16 = v16[v73];
      v10 = v16 + 2;
      v16[1] = v16[v73 + 1];
      goto LABEL_10;
    }
    v22 = v4 & 7;
    v68 = ((_WORD)v4 << 11) & 0x4000;
    if ( (v4 & 7) == 0 )
    {
      v69 = *v5;
      if ( !*v5 )
      {
        do
        {
          v70 = *++v5;
          v69 = v70;
          v22 += 255;
        }
        while ( !v70 );
      }
      ++v5;
      v22 += v69 + 7;
    }
    v18 = v5 + 2;
    v71 = &v16[-v68 - (*(unsigned __int16 *)v5 >> 2)];
    if ( v16 == v71 )
      break;
    v23 = v71 - 0x4000;
LABEL_49:
    if ( v22 <= 5 || v16 - v23 <= 3 )
      goto LABEL_14;
    v50 = *(_DWORD *)v23;
    v49 = (int *)(v23 + 4);
    v51 = (v22 - 6) >> 2;
    v52 = v22 - 2;
    v53 = v49;
    v54 = &v16[4 * v51 + 8];
    *(_DWORD *)v16 = v50;
    v55 = v16 + 4;
    v56 = v55;
    do
    {
      v57 = *v53++;
      *(_DWORD *)v56 = v57;
      v56 += 4;
    }
    while ( v54 != v56 );
    v58 = v51 + 1;
    v59 = v52 - 4 * v51 - 4;
    v10 = &v55[v58 * 4];
    v60 = (char *)&v49[v58];
    if ( v59 )
    {
      v61 = v10 - 1;
      v62 = &v60[v59];
      do
      {
        v63 = *v60++;
        *++v61 = v63;
      }
      while ( v60 != v62 );
      v10 += v59;
    }
LABEL_10:
    v5 = v18 + 1;
    v4 = *v18;
    v6 = *(v18 - 2) & 3;
    if ( (*(v18 - 2) & 3) == 0 )
    {
      v16 = v10;
      if ( v4 > 0xF )
        goto LABEL_12;
LABEL_18:
      if ( !v4 )
      {
        v29 = v18[1];
        if ( !v29 )
        {
          do
          {
            v30 = *++v5;
            v29 = v30;
            v4 += 255;
          }
          while ( !v30 );
        }
        ++v5;
        v4 += v29 + 15;
      }
      v31 = v4 - 1;
      v15 = v5 + 4;
      v32 = *(_DWORD *)v5;
      if ( v4 == 1 )
        v5 += 5;
      *(_DWORD *)v16 = v32;
      v33 = v16 + 4;
      if ( v4 == 1 )
      {
        v16 += 4;
      }
      else if ( v31 <= 3 )
      {
        v64 = v16 + 3;
        v65 = &v5[v4 + 3];
        v66 = v15;
        do
        {
          v67 = *v66++;
          *++v64 = v67;
        }
        while ( v66 != v65 );
        v5 = &v15[v4];
        v16 = &v33[v31];
        v15 += v31;
      }
      else
      {
        v34 = v15;
        v35 = (v4 - 5) >> 2;
        v36 = v16 + 4;
        v37 = &v16[4 * v35 + 8];
        do
        {
          v38 = *(_DWORD *)v34;
          v34 += 4;
          *(_DWORD *)v36 = v38;
          v36 += 4;
        }
        while ( v36 != v37 );
        v39 = v31 - 4 * v35;
        v40 = 4 * (v35 + 1);
        v41 = v39 - 4;
        v15 += v40;
        v16 = &v33[v40];
        if ( v41 )
        {
          v42 = &v15[v41];
          v43 = v15;
          v44 = *v15++;
          *v16 = v44;
          for ( j = v16; v15 != v42; ++j )
          {
            v43 = v15;
            v46 = *v15++;
            j[1] = v46;
          }
          v16 += v41;
          v5 = v43 + 2;
        }
        else
        {
          v5 = v15 + 1;
        }
      }
      goto LABEL_8;
    }
    v9 = v18 + 1;
    v7 = *v18;
    v5 = v18;
LABEL_35:
    *v10 = v7;
    if ( v6 == 1 )
    {
      v16 = v10 + 1;
    }
    else
    {
      if ( v6 == 3 )
      {
        v9 = v5 + 3;
        v16 = v10 + 3;
      }
      else
      {
        v9 = v5 + 2;
        v16 = v10 + 2;
      }
      v10[1] = v5[1];
      if ( v6 == 3 )
        v10[2] = v5[2];
    }
    v4 = *v9;
    v5 = v9 + 1;
    if ( v4 > 0x3F )
      goto LABEL_13;
  }
  v72 = &a1[a2];
  *a4 = v16 - a3;
  if ( v72 == v18 )
    return 0;
  if ( v72 > v18 )
    return -8;
  return -4;
}
