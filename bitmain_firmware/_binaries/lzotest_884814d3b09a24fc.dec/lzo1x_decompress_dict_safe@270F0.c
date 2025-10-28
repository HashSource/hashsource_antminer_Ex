int __fastcall lzo1x_decompress_dict_safe(
        unsigned __int8 *a1,
        int a2,
        unsigned __int8 *a3,
        unsigned int *a4,
        int a5,
        int a6,
        unsigned int a7)
{
  int v7; // r8
  unsigned __int8 *v8; // r5
  unsigned __int8 *v10; // r7
  unsigned int v11; // lr
  unsigned __int8 *v12; // r11
  unsigned int v13; // r2
  unsigned int v14; // r0
  unsigned int v15; // r12
  unsigned int v16; // r4
  unsigned __int8 *v17; // r2
  unsigned int v18; // r9
  unsigned __int8 *v19; // r0
  unsigned __int8 *v20; // r5
  unsigned __int8 *v21; // r1
  unsigned __int8 v22; // t1
  unsigned __int8 *v23; // r5
  unsigned __int8 *v24; // r4
  unsigned int v25; // r2
  unsigned __int8 *v26; // lr
  unsigned int v27; // r12
  unsigned __int8 *v28; // r1
  int v29; // r2
  unsigned int v30; // r9
  size_t v31; // r9
  _BYTE *v32; // r1
  int v33; // r1
  char *v34; // r9
  char *v35; // r2
  char v36; // t1
  unsigned __int8 *v37; // r5
  int v38; // r0
  int v39; // t1
  unsigned int v40; // r12
  _BYTE *v41; // r0
  int *v42; // lr
  unsigned int v43; // r2
  unsigned __int8 *v44; // r1
  unsigned __int8 *v45; // r4
  int v46; // t1
  unsigned int v47; // r12
  int v48; // r2
  unsigned int v49; // r12
  unsigned __int8 *v50; // r2
  unsigned __int8 *v51; // r0
  unsigned __int8 v52; // t1
  unsigned int v53; // r12
  int v54; // r10
  size_t v55; // r10
  char *v56; // r1
  unsigned __int8 *v57; // r2
  char *v58; // r12
  unsigned __int8 v59; // t1
  unsigned __int8 *v60; // r2
  unsigned __int8 *v61; // r2
  __int16 v62; // r1
  size_t v64; // r9
  const void *v65; // r1
  int v66; // r1
  char *v67; // r9
  char *v68; // r2
  char v69; // t1
  unsigned __int8 v70; // r2
  int v71; // r12
  _BYTE *v72; // r4
  unsigned __int8 *v73; // r1
  unsigned __int8 *v74; // r2
  char v75; // t1
  int v76; // r2
  unsigned int v77; // r9
  int v78; // r2
  unsigned __int8 *v79; // r1
  unsigned __int8 *v80; // r5
  unsigned __int8 *v81; // r0
  size_t v82; // r9
  bool v83; // zf
  unsigned __int8 *v84; // r9
  unsigned int *v85; // [sp+4h] [bp-8h]
  unsigned int *v86; // [sp+4h] [bp-8h]
  unsigned int *v87; // [sp+4h] [bp-8h]
  unsigned int *v88; // [sp+4h] [bp-8h]

  v7 = a6;
  v8 = a1;
  v10 = &a1[a2];
  v11 = *a4;
  if ( !a6 )
    a7 = 0;
  v12 = &a3[v11];
  if ( a6 )
  {
    if ( a7 >= 0xC000 )
    {
      v13 = a7 - 49151;
      a7 = 49151;
      v7 = a6 + v13;
    }
    v7 += a7;
  }
  v14 = 0;
  *a4 = 0;
  if ( v10 == v8 )
    goto LABEL_82;
  v15 = *v8;
  if ( v15 <= 0x11 )
  {
    v26 = a3;
    v24 = a3;
    goto LABEL_28;
  }
  v16 = v15 - 17;
  v17 = v8 + 1;
  v18 = v15 - 17;
  if ( (int)(v15 - 17) <= 3 )
  {
    v26 = a3;
    v24 = a3;
    goto LABEL_58;
  }
  if ( v11 < v16 )
    goto LABEL_113;
  if ( a2 - 1 < v15 - 14 )
  {
LABEL_82:
    *a4 = v14;
    return -4;
  }
  v19 = a3 - 1;
  v20 = &v8[v15 - 16];
  v21 = v17;
  do
  {
    v22 = *v21++;
    *++v19 = v22;
  }
  while ( v21 != v20 );
  v23 = &v17[v16];
  v24 = &a3[v16];
LABEL_15:
  v25 = *v23;
  v26 = v24;
  v27 = v23[1];
  v14 = v24 - a3;
  if ( v25 > 0xF )
  {
    v28 = v23 + 1;
LABEL_48:
    if ( v25 <= 0x3F )
      goto LABEL_71;
LABEL_49:
    v53 = ((v25 >> 2) & 7) + 1 + 8 * v27;
    v8 = v28 + 1;
    v54 = (v25 >> 5) - 1;
    goto LABEL_50;
  }
  v29 = 4 * v27 + (v25 >> 2);
  v8 = v23 + 2;
  v30 = v29 + 2049;
  if ( (unsigned int)(v12 - v24) <= 2 )
    goto LABEL_113;
  if ( v30 <= v14 )
  {
    v61 = &v24[-v29];
    v24 += 3;
    v61 -= 2048;
    v62 = *(_WORD *)(v61 - 1);
    LOBYTE(v61) = v61[1];
    *(_WORD *)(v24 - 3) = v62;
    *(v24 - 1) = (unsigned __int8)v61;
    goto LABEL_24;
  }
  v31 = v30 - v14;
  if ( a7 < v31 )
    goto LABEL_120;
  v32 = (_BYTE *)(v7 - v31);
  if ( v31 > 2 )
  {
    v70 = v32[2];
    *(_WORD *)v24 = *(_WORD *)v32;
    v24[2] = v70;
  }
  else
  {
    v85 = a4;
    memcpy(v24, v32, v31);
    a4 = v85;
    v33 = (int)&v24[v31 - 1];
    v34 = (char *)&a3[3 - v31];
    v35 = (char *)a3;
    do
    {
      v36 = *v35++;
      *(_BYTE *)++v33 = v36;
    }
    while ( v35 != v34 );
  }
  v24 += 3;
  while ( 1 )
  {
LABEL_24:
    v26 = v24;
    v18 = *(v8 - 2) & 3;
    if ( (*(v8 - 2) & 3) == 0 )
    {
LABEL_28:
      if ( (unsigned int)(v10 - v8) <= 2 )
        goto LABEL_81;
      v25 = *v8;
      v28 = v8 + 1;
      if ( v25 > 0xF )
      {
        v27 = v8[1];
        v14 = v26 - a3;
        goto LABEL_48;
      }
      if ( !*v8 )
      {
        v37 = v8 + 16843009;
        while ( 1 )
        {
          v39 = *v28++;
          v38 = v39;
          if ( v39 )
            break;
          v25 += 255;
          if ( v37 == v28 || v10 == v28 )
            goto LABEL_81;
        }
        v25 += v38 + 15;
      }
      if ( v12 - v26 < v25 + 3 )
      {
LABEL_112:
        v14 = v26 - a3;
LABEL_113:
        *a4 = v14;
        return -5;
      }
      if ( v10 - v28 < v25 + 6 )
      {
LABEL_81:
        v14 = v26 - a3;
        goto LABEL_82;
      }
      v40 = v25 - 1;
      v23 = v28 + 4;
      *(_DWORD *)v24 = *(_DWORD *)v28;
      v41 = v24 + 4;
      if ( v25 == 1 )
      {
        v24 += 4;
      }
      else if ( v40 <= 3 )
      {
        v72 = v24 + 3;
        v73 = &v28[v25 + 3];
        v74 = v23;
        do
        {
          v75 = *v74++;
          *++v72 = v75;
        }
        while ( v74 != v73 );
        v24 = &v41[v40];
        v23 += v40;
      }
      else
      {
        v42 = (int *)(v28 + 4);
        v43 = (v25 - 5) >> 2;
        v44 = v24 + 4;
        v45 = &v24[4 * v43 + 8];
        do
        {
          v46 = *v42++;
          *(_DWORD *)v44 = v46;
          v44 += 4;
        }
        while ( v44 != v45 );
        v47 = v40 - 4 * v43;
        v48 = 4 * (v43 + 1);
        v49 = v47 - 4;
        v24 = &v41[v48];
        v23 += v48;
        if ( v49 )
        {
          v50 = v24 - 1;
          v51 = &v23[v49];
          do
          {
            v52 = *v23++;
            *++v50 = v52;
          }
          while ( v23 != v51 );
          v24 += v49;
        }
      }
      goto LABEL_15;
    }
    v17 = v8;
LABEL_58:
    if ( v12 - v26 < v18 )
      goto LABEL_112;
    if ( v10 - v17 < v18 + 3 )
      goto LABEL_81;
    if ( v18 == 1 )
      v8 = v17 + 1;
    *v24 = *v17;
    if ( v18 == 1 )
    {
      ++v24;
    }
    else
    {
      if ( v18 == 3 )
        v8 = v17 + 3;
      else
        v8 = v17 + 2;
      v24[1] = v17[1];
      if ( v18 == 3 )
      {
        v24[2] = v17[2];
        v24 += 3;
      }
      else
      {
        v24 += 2;
      }
    }
    v25 = *v8;
    v28 = v8 + 1;
    v27 = v8[1];
    v26 = v24;
    v14 = v24 - a3;
    if ( v25 > 0x3F )
      goto LABEL_49;
LABEL_71:
    if ( v25 > 0x1F )
      break;
    if ( v25 > 0xF )
    {
      v54 = v25 & 7;
      if ( (v25 & 7) == 0 )
      {
        while ( 1 )
        {
          v80 = v28 + 1;
          if ( v27 )
            break;
          v54 += 255;
          ++v28;
          if ( v54 == -256 )
            goto LABEL_113;
          if ( v80 == v10 )
            goto LABEL_82;
          v27 = *v80;
        }
        v54 += v27 + 7;
        if ( (unsigned int)(v10 - v80) <= 1 )
          goto LABEL_82;
        v27 = *++v28;
      }
      v8 = v28 + 2;
      v71 = (v27 >> 2) + (v28[1] << 6) + (((_WORD)v25 << 11) & 0x4000);
      if ( v71 )
      {
        v53 = v71 + 0x4000;
        goto LABEL_50;
      }
      *a4 = v14;
      if ( v10 == v8 )
        return 0;
      if ( v10 <= v8 )
        return -4;
      return -8;
    }
    v76 = 4 * v27 + (v25 >> 2);
    v8 = v28 + 1;
    v77 = v76 + 1;
    if ( (unsigned int)(v12 - v26) <= 1 )
      goto LABEL_113;
    if ( v77 > v14 )
    {
      v82 = v77 - v14;
      if ( a7 < v82 )
        goto LABEL_120;
      v79 = (unsigned __int8 *)(v7 - v82);
      if ( v82 > 1 )
      {
LABEL_105:
        *(_WORD *)v24 = *(_WORD *)v79;
        v24 += 2;
      }
      else
      {
        v88 = a4;
        memcpy(v24, v79, v82);
        v83 = v82 == 0;
        v84 = &v24[v82];
        a4 = v88;
        v24 = v84 + 1;
        *v84 = *a3;
        if ( v83 )
        {
          v24 = v84 + 2;
          v84[1] = a3[1];
        }
      }
    }
    else
    {
      v78 = ~v76;
      v79 = &v24[v78];
      if ( v77 != 1 )
        goto LABEL_105;
      *v24 = v24[v78];
      v24[1] = v79[1];
      v24 += 2;
    }
  }
  v54 = v25 & 0x1F;
  if ( (v25 & 0x1F) != 0 )
    goto LABEL_73;
  while ( 1 )
  {
    v60 = v28 + 1;
    if ( v27 )
      break;
    v54 += 255;
    ++v28;
    if ( v54 == -256 )
      goto LABEL_113;
    if ( v60 == v10 )
      goto LABEL_82;
    v27 = *v60;
  }
  v54 += v27 + 31;
  if ( (unsigned int)(v10 - v60) <= 1 )
    goto LABEL_82;
  v27 = *++v28;
LABEL_73:
  v8 = v28 + 2;
  v53 = (v27 >> 2) + 1 + (v28[1] << 6);
LABEL_50:
  v55 = v54 + 2;
  if ( v12 - v26 < v55 )
    goto LABEL_113;
  if ( v53 <= v14 )
  {
    v56 = (char *)&v24[-v53];
    if ( v55 <= v53 )
    {
      v81 = v24;
      v87 = a4;
      v24 += v55;
      memcpy(v81, v56, v55);
      a4 = v87;
      goto LABEL_24;
    }
    v57 = v24 - 1;
    v58 = &v56[v55];
    do
    {
      v59 = *v56++;
      *++v57 = v59;
    }
    while ( v56 != v58 );
    goto LABEL_56;
  }
  v64 = v53 - v14;
  if ( a7 >= v53 - v14 )
  {
    v86 = a4;
    v65 = (const void *)(v7 - v64);
    if ( v55 <= v64 )
    {
      memcpy(v24, v65, v55);
      v24 += v55;
      a4 = v86;
      goto LABEL_24;
    }
    memcpy(v24, v65, v53 - v14);
    a4 = v86;
    v66 = (int)&v24[v64 - 1];
    v67 = (char *)&a3[v55 - v64];
    v68 = (char *)a3;
    do
    {
      v69 = *v68++;
      *(_BYTE *)++v66 = v69;
    }
    while ( v68 != v67 );
LABEL_56:
    v24 += v55;
    goto LABEL_24;
  }
LABEL_120:
  *a4 = v14;
  return -6;
}
