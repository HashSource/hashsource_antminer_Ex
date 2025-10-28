int __fastcall lzo1z_decompress(unsigned __int8 *a1, int a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v4; // r4
  unsigned int v5; // r7
  unsigned __int8 *v6; // r12
  int v7; // r9
  unsigned __int8 v8; // r5
  unsigned int v9; // lr
  unsigned __int8 *v10; // r10
  unsigned __int8 *v11; // r8
  unsigned __int8 *v12; // r6
  unsigned __int8 *v13; // r7
  unsigned __int8 *i; // r4
  unsigned __int8 v15; // t1
  unsigned __int8 *v16; // r5
  unsigned __int8 *v17; // lr
  unsigned __int8 *v18; // r6
  int v19; // r4
  unsigned __int8 v20; // r7
  unsigned __int8 *v21; // r5
  unsigned int v22; // r5
  bool v23; // cc
  unsigned int v24; // r7
  unsigned __int8 *v25; // r8
  unsigned __int8 *v26; // t1
  unsigned int v27; // r7
  int v28; // r4
  int v29; // r5
  unsigned __int8 *v30; // r9
  char *v31; // r8
  _BYTE *v32; // lr
  _BYTE *v33; // r9
  char v34; // t1
  int v35; // r5
  int v36; // t1
  unsigned int v37; // r9
  int v38; // r6
  _BYTE *v39; // r8
  unsigned __int8 *v40; // r6
  unsigned int v41; // r7
  unsigned __int8 *v42; // r12
  unsigned __int8 *v43; // lr
  int v44; // t1
  unsigned int v45; // r9
  int v46; // r7
  unsigned int v47; // r9
  unsigned __int8 *v48; // r8
  unsigned __int8 *v49; // r12
  unsigned __int8 v50; // t1
  unsigned __int8 *j; // r6
  unsigned __int8 v52; // t1
  unsigned int v53; // r5
  int *v54; // r5
  int v55; // t1
  unsigned int v56; // r10
  unsigned __int8 *v57; // r11
  unsigned __int8 *v58; // lr
  int *v59; // r8
  unsigned __int8 *v60; // r7
  int v61; // t1
  unsigned int v62; // r8
  int v63; // r7
  bool v64; // zf
  unsigned int v65; // r9
  char *v66; // r5
  unsigned __int8 *v67; // lr
  char *v68; // r10
  unsigned __int8 v69; // t1
  unsigned int v70; // t1
  unsigned int v71; // r4
  _BYTE *v72; // lr
  unsigned __int8 *v73; // r12
  unsigned __int8 *v74; // r6
  char v75; // t1
  __int16 v76; // r4
  int v77; // r4
  unsigned __int8 *v78; // r5
  int v79; // r4
  int v80; // r5
  unsigned int v81; // t1
  unsigned int v82; // r6
  unsigned __int8 *v83; // r1
  unsigned int v85; // [sp+4h] [bp-8h]

  v4 = 0;
  *a4 = 0;
  v6 = a1 + 1;
  v5 = *a1;
  if ( v5 <= 0x11 )
  {
    v18 = a1;
    v17 = a3;
    if ( v5 <= 0xF )
      goto LABEL_34;
    goto LABEL_12;
  }
  v7 = v5 - 17;
  v8 = a1[1];
  v9 = v5 - 17;
  if ( (int)(v5 - 17) <= 3 )
  {
    v10 = a1 + 2;
    v11 = a3;
    goto LABEL_23;
  }
  v12 = a3 - 1;
  v13 = &a1[v5 - 17];
  for ( i = a1 + 1; ; ++i )
  {
    *++v12 = v8;
    if ( v13 == i )
      break;
    v15 = i[1];
    v8 = v15;
  }
  v16 = &v6[v9];
  v4 = 0;
  v17 = &a3[v9];
  v6 = v16 + 1;
  while ( 1 )
  {
    v5 = *v16;
    if ( v5 > 0xF )
    {
LABEL_12:
      if ( v5 <= 0x3F )
        goto LABEL_50;
LABEL_13:
      v22 = v5 & 0x1F;
      v18 = v6 + 1;
      v23 = v22 > 0x1B;
      v24 = v5 >> 5;
      if ( v22 > 0x1B )
      {
        v25 = v6 + 1;
        v22 = (unsigned int)&v17[-v4];
        v18 = v6;
      }
      else
      {
        v26 = (unsigned __int8 *)*v6;
        v6 += 2;
        v25 = v26;
        v4 = v22 << 6;
      }
      v27 = v24 - 1;
      if ( v23 )
      {
        v6 = v25;
      }
      else
      {
        v28 = v4 + ((unsigned int)v25 >> 2);
        v29 = ~v28;
        v4 = v28 + 1;
        v22 = (unsigned int)&v17[v29];
      }
      goto LABEL_19;
    }
    v18 = v16 + 2;
    v6 = v16 + 3;
    v11 = v17 + 3;
    v19 = (v5 << 6) + (v16[1] >> 2);
    v20 = v17[-1793 - v19];
    v21 = &v17[-1793 - v19];
    v4 = v19 + 1793;
    *v17 = v20;
    v17[1] = v21[1];
    v17[2] = v21[2];
LABEL_10:
    v5 = *v18;
    v7 = *(v18 - 1) & 3;
    if ( (*(v18 - 1) & 3) != 0 )
      break;
LABEL_11:
    v17 = v11;
    if ( v5 > 0xF )
      goto LABEL_12;
LABEL_34:
    if ( !v5 )
    {
      v35 = v18[1];
      if ( !v18[1] )
      {
        do
        {
          v36 = *++v6;
          v35 = v36;
          v5 += 255;
        }
        while ( !v36 );
      }
      ++v6;
      v5 += v35 + 15;
    }
    v37 = v5 - 1;
    v16 = v6 + 4;
    v38 = *(_DWORD *)v6;
    if ( v5 == 1 )
      v6 += 5;
    *(_DWORD *)v17 = v38;
    v39 = v17 + 4;
    if ( v5 == 1 )
    {
      v17 += 4;
    }
    else if ( v37 <= 3 )
    {
      v72 = v17 + 3;
      v73 = &v6[v5 + 3];
      v74 = v16;
      do
      {
        v75 = *v74++;
        *++v72 = v75;
      }
      while ( v74 != v73 );
      v6 = &v16[v5];
      v17 = &v39[v37];
      v16 += v37;
    }
    else
    {
      v40 = v16;
      v41 = (v5 - 5) >> 2;
      v42 = v17 + 4;
      v43 = &v17[4 * v41 + 8];
      do
      {
        v44 = *(_DWORD *)v40;
        v40 += 4;
        *(_DWORD *)v42 = v44;
        v42 += 4;
      }
      while ( v42 != v43 );
      v45 = v37 - 4 * v41;
      v46 = 4 * (v41 + 1);
      v47 = v45 - 4;
      v16 += v46;
      v17 = &v39[v46];
      if ( v47 )
      {
        v48 = &v16[v47];
        v49 = v16;
        v50 = *v16++;
        *v17 = v50;
        for ( j = v17; v16 != v48; ++j )
        {
          v49 = v16;
          v52 = *v16++;
          j[1] = v52;
        }
        v17 += v47;
        v6 = v49 + 2;
      }
      else
      {
        v6 = v16 + 1;
      }
    }
  }
  while ( 1 )
  {
    v10 = v6;
    v8 = v5;
    v6 = v18;
LABEL_23:
    *v11 = v8;
    if ( v7 == 1 )
    {
      v17 = v11 + 1;
    }
    else
    {
      if ( v7 == 3 )
        v10 = v6 + 3;
      else
        v10 = v6 + 2;
      v11[1] = v6[1];
      if ( v7 == 3 )
      {
        v17 = v11 + 3;
        v11[2] = v6[2];
      }
      else
      {
        v17 = v11 + 2;
      }
    }
    v5 = *v10;
    v6 = v10 + 1;
    if ( v5 > 0x3F )
      goto LABEL_13;
LABEL_50:
    v53 = *v6;
    if ( v5 <= 0x1F )
      break;
    v27 = v5 & 0x1F;
    if ( !v27 )
    {
      while ( !v53 )
      {
        v70 = *++v6;
        v53 = v70;
        v27 += 255;
      }
      v71 = v53 + 31;
      v53 = *++v6;
      v27 += v71;
    }
    v18 = v6 + 2;
    v4 = (v53 << 6) + 1 + (v6[1] >> 2);
    v22 = (unsigned int)&v17[-v4];
LABEL_53:
    v6 = v18 + 1;
    if ( v27 > 5 && (int)&v17[-v22] > 3 )
    {
      v55 = *(_DWORD *)v22;
      v54 = (int *)(v22 + 4);
      v56 = (v27 - 6) >> 2;
      v85 = v27 - 2;
      v57 = &v17[4 * v56 + 8];
      *(_DWORD *)v17 = v55;
      v58 = v17 + 4;
      v59 = v54;
      v60 = v58;
      do
      {
        v61 = *v59++;
        *(_DWORD *)v60 = v61;
        v60 += 4;
      }
      while ( v60 != v57 );
      v62 = v85 - 4 * v56;
      v63 = v56 + 1;
      v65 = v62 - 4;
      v64 = v62 == 4;
      v66 = (char *)&v54[v63];
      v11 = &v58[v63 * 4];
      if ( !v64 )
      {
        v67 = v11 - 1;
        v68 = &v66[v65];
        do
        {
          v69 = *v66++;
          *++v67 = v69;
        }
        while ( v66 != v68 );
        v11 += v65;
      }
      goto LABEL_10;
    }
LABEL_19:
    v30 = v17;
    v31 = (char *)(v22 + 2);
    *v17 = *(_BYTE *)v22;
    v32 = v17 + 2;
    v30[1] = *(_BYTE *)(v22 + 1);
    v33 = v30 + 1;
    do
    {
      v34 = *v31++;
      *++v33 = v34;
    }
    while ( v31 != (char *)(v22 + 2 + v27) );
    v11 = &v32[v27];
    v5 = *v18;
    v7 = *(v18 - 1) & 3;
    if ( (*(v18 - 1) & 3) == 0 )
      goto LABEL_11;
  }
  if ( v5 <= 0xF )
  {
    v18 = v6 + 1;
    v79 = (v53 >> 2) + (v5 << 6);
    v6 += 2;
    v80 = ~v79;
    v4 = v79 + 1;
    *v17 = v17[v80];
    v11 = v17 + 2;
    v17[1] = v17[v80 + 1];
    goto LABEL_10;
  }
  v76 = (_WORD)v5 << 11;
  v27 = v5 & 7;
  v77 = v76 & 0x4000;
  if ( !v27 )
  {
    while ( !v53 )
    {
      v81 = *++v6;
      v53 = v81;
      v27 += 255;
    }
    v82 = v53 + 7;
    v53 = *++v6;
    v27 += v82;
  }
  v18 = v6 + 2;
  v78 = &v17[-(v6[1] >> 2) - v77 + -64 * v53];
  if ( v17 != v78 )
  {
    v22 = (unsigned int)(v78 - 0x4000);
    v4 = (int)&v17[-v22];
    goto LABEL_53;
  }
  v83 = &a1[a2];
  *a4 = v17 - a3;
  if ( v83 == v18 )
    return 0;
  if ( v83 <= v18 )
    return -4;
  return -8;
}
