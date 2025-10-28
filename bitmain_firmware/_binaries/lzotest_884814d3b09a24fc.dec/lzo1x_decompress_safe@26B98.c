int __fastcall lzo1x_decompress_safe(_BYTE *a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // r7
  unsigned __int8 *v5; // r4
  unsigned int v6; // r9
  _BYTE *v7; // lr
  unsigned int v8; // r6
  unsigned int v9; // r12
  unsigned int v10; // r8
  unsigned int v11; // r5
  unsigned int v12; // r5
  char *v13; // r0
  char *v14; // r1
  char v15; // t1
  unsigned __int8 *v16; // r0
  _BYTE *v17; // lr
  unsigned int v18; // r1
  unsigned __int8 *v19; // r12
  int v20; // r5
  _BYTE *v21; // r1
  _BOOL4 v22; // r12
  _BYTE *v23; // r12
  signed int v24; // r1
  char v25; // r1
  char v26; // r1
  char v27; // r1
  int v28; // r5
  unsigned int v29; // r1
  _BYTE *v30; // r5
  _BOOL4 v31; // r12
  _BYTE *v32; // r12
  _BYTE *v33; // r12
  char v34; // t1
  _BOOL4 v35; // r1
  int *v36; // r5
  int v37; // t1
  unsigned int v38; // r10
  int *v39; // r8
  _DWORD *v40; // r11
  _DWORD *v41; // r1
  int v42; // t1
  int v43; // r12
  int v44; // r1
  bool v45; // zf
  _BYTE *v46; // r8
  char v47; // t1
  unsigned __int8 *v48; // r0
  int v49; // r5
  int v50; // t1
  unsigned int v51; // r8
  int *v52; // r5
  unsigned int v53; // r1
  _DWORD *v54; // r12
  _DWORD *v55; // lr
  int v56; // t1
  unsigned int v57; // r8
  int v58; // r1
  unsigned int v59; // r8
  _BYTE *v60; // r1
  unsigned __int8 *v61; // r5
  char v62; // t1
  int v63; // r1
  int v64; // t1
  _BYTE *v66; // r5
  _BYTE *v67; // lr
  unsigned __int8 *v68; // r12
  unsigned __int8 *v69; // r1
  char v70; // t1
  _BYTE *v71; // r1
  _BOOL4 v72; // r12
  int v73; // r0
  int v74; // t1

  v5 = &a1[a2];
  v6 = *a4;
  v7 = 0;
  *a4 = 0;
  v8 = a3 + v6;
  if ( &a1[a2] == a1 )
    goto LABEL_82;
  v9 = (unsigned __int8)*a1;
  if ( v9 <= 0x11 )
  {
    v17 = (_BYTE *)a3;
    goto LABEL_41;
  }
  v10 = v9 - 17;
  v4 = (unsigned int)(a1 + 1);
  v11 = v9 - 17;
  if ( (int)(v9 - 17) <= 3 )
  {
    v24 = a3;
    v23 = (_BYTE *)a3;
    goto LABEL_20;
  }
  if ( v6 < v10 )
    goto LABEL_105;
  if ( a2 - 1 < v9 - 14 )
  {
LABEL_82:
    *a4 = (unsigned int)v7;
    return -4;
  }
  v12 = a3 - 1;
  v13 = &a1[v9 - 16];
  v14 = (char *)v4;
  do
  {
    v15 = *v14++;
    *(_BYTE *)++v12 = v15;
  }
  while ( v14 != v13 );
  v16 = (unsigned __int8 *)(v4 + v10);
  v17 = (_BYTE *)(a3 + v10);
LABEL_9:
  v18 = *v16;
  if ( v18 <= 0xF )
  {
    v20 = v16[1];
    a1 = v16 + 2;
    v21 = &v17[-2049 - (v18 >> 2) - 4 * v20];
    v22 = v17 <= v21;
    if ( a3 > (unsigned int)v21 )
      v22 = 1;
    if ( !v22 )
    {
      if ( v8 - (unsigned int)v17 > 2 )
      {
        v23 = v17 + 3;
        *v17 = *v21;
        v17[1] = v21[1];
        v24 = (unsigned __int8)v21[2];
        v17[2] = v24;
        goto LABEL_16;
      }
LABEL_104:
      v7 = &v17[-a3];
LABEL_105:
      *a4 = (unsigned int)v7;
      return -5;
    }
LABEL_106:
    *a4 = (unsigned int)&v17[-a3];
    return -6;
  }
  v19 = v16 + 1;
  while ( v18 > 0x3F )
  {
    v28 = ~((v18 >> 2) & 7);
    a1 = v19 + 1;
    v29 = v18 >> 5;
    v4 = v29 - 1;
    v30 = &v17[v28 - 8 * *v19];
    v31 = v17 <= v30;
    if ( a3 > (unsigned int)v30 )
      v31 = 1;
    if ( v31 )
      goto LABEL_106;
    if ( v8 - (unsigned int)v17 < v29 + 1 )
      goto LABEL_104;
LABEL_37:
    v32 = v17;
    v24 = (signed int)(v30 + 2);
    *v17 = *v30;
    v17 += 2;
    v32[1] = v30[1];
    v33 = v32 + 1;
    do
    {
      v34 = *(_BYTE *)v24++;
      *++v33 = v34;
    }
    while ( (_BYTE *)v24 != &v30[v4 + 2] );
    v23 = &v17[v4];
LABEL_16:
    v11 = *(a1 - 2) & 3;
    if ( (*(a1 - 2) & 3) != 0 )
    {
      v4 = (unsigned int)a1;
      v24 = (signed int)v23;
    }
    else
    {
      v17 = v23;
    }
    if ( (*(a1 - 2) & 3) == 0 )
    {
LABEL_41:
      if ( (unsigned int)(v5 - a1) <= 2 )
        goto LABEL_81;
      v18 = (unsigned __int8)*a1;
      v19 = a1 + 1;
      if ( v18 > 0xF )
        continue;
      if ( !*a1 )
      {
        v48 = a1 + 16843009;
        while ( 1 )
        {
          v50 = *v19++;
          v49 = v50;
          if ( v50 )
            break;
          v18 += 255;
          if ( v48 == v19 || v5 == v19 )
            goto LABEL_81;
        }
        v18 += v49 + 15;
      }
      if ( v8 - (unsigned int)v17 < v18 + 3 )
        goto LABEL_104;
      if ( v5 - v19 < v18 + 6 )
        goto LABEL_81;
      v51 = v18 - 1;
      v16 = v19 + 4;
      *(_DWORD *)v17 = *(_DWORD *)v19;
      v4 = (unsigned int)(v17 + 4);
      if ( v18 == 1 )
      {
        v17 += 4;
      }
      else if ( v51 <= 3 )
      {
        v67 = v17 + 3;
        v68 = &v19[v18 + 3];
        v69 = v16;
        do
        {
          v70 = *v69++;
          *++v67 = v70;
        }
        while ( v68 != v69 );
        v17 = (_BYTE *)(v4 + v51);
        v16 += v51;
      }
      else
      {
        v52 = (int *)(v19 + 4);
        v53 = (v18 - 5) >> 2;
        v54 = v17 + 4;
        v55 = &v17[4 * v53 + 8];
        do
        {
          v56 = *v52++;
          *v54++ = v56;
        }
        while ( v55 != v54 );
        v57 = v51 - 4 * v53;
        v58 = 4 * (v53 + 1);
        v59 = v57 - 4;
        v17 = (_BYTE *)(v4 + v58);
        v16 += v58;
        if ( v59 )
        {
          v60 = v17 - 1;
          v61 = &v16[v59];
          do
          {
            v62 = *v16++;
            *++v60 = v62;
          }
          while ( v16 != v61 );
          v17 += v59;
        }
      }
      goto LABEL_9;
    }
LABEL_20:
    if ( v8 - v24 < v11 )
    {
      v7 = (_BYTE *)(v24 - a3);
      goto LABEL_105;
    }
    v17 = (_BYTE *)(v11 + 3);
    if ( (unsigned int)&v5[-v4] < v11 + 3 )
    {
      v7 = (_BYTE *)(v24 - a3);
      goto LABEL_82;
    }
    v25 = *(_BYTE *)v4;
    if ( v11 == 1 )
    {
      ++v4;
      v17 = v23 + 1;
    }
    *v23 = v25;
    if ( v11 != 1 )
    {
      v26 = *(_BYTE *)(v4 + 1);
      if ( v11 == 3 )
      {
        v17 = v23 + 3;
      }
      else
      {
        v4 += 2;
        v17 = v23 + 2;
      }
      v23[1] = v26;
      if ( v11 == 3 )
      {
        v27 = *(_BYTE *)(v4 + 2);
        v4 += 3;
        v23[2] = v27;
      }
    }
    v18 = *(unsigned __int8 *)v4;
    v19 = (unsigned __int8 *)(v4 + 1);
  }
  if ( v18 > 0x1F )
  {
    v4 = v18 & 0x1F;
    if ( (v18 & 0x1F) == 0 )
    {
      while ( 1 )
      {
        v64 = *v19++;
        v63 = v64;
        if ( v64 )
          break;
        v4 += 255;
        if ( v4 == -256 )
          goto LABEL_104;
        if ( v5 == v19 )
          goto LABEL_81;
      }
      v4 += v63 + 31;
      if ( (unsigned int)(v5 - v19) <= 1 )
      {
LABEL_81:
        v7 = &v17[-a3];
        goto LABEL_82;
      }
    }
    a1 = v19 + 2;
    v30 = &v17[~(*(unsigned __int16 *)v19 >> 2)];
LABEL_47:
    v35 = v17 <= v30;
    if ( a3 > (unsigned int)v30 )
      v35 = 1;
    if ( !v35 )
    {
      if ( v8 - (unsigned int)v17 >= v4 + 2 )
      {
        if ( v4 > 5 && v17 - v30 > 3 )
        {
          v37 = *(_DWORD *)v30;
          v36 = (int *)(v30 + 4);
          v38 = (v4 - 6) >> 2;
          v39 = v36;
          v40 = &v17[4 * v38 + 8];
          *(_DWORD *)v17 = v37;
          v17 += 4;
          v41 = v17;
          do
          {
            v42 = *v39++;
            *v41++ = v42;
          }
          while ( v41 != v40 );
          v43 = v4 - 2 - 4 * v38;
          v44 = v38 + 1;
          v4 = v43 - 4;
          v45 = v43 == 4;
          v23 = &v17[v44 * 4];
          v24 = (signed int)&v36[v44];
          if ( !v45 )
          {
            v17 = v23 - 1;
            v46 = (_BYTE *)(v24 + v4);
            do
            {
              v47 = *(_BYTE *)v24++;
              *++v17 = v47;
            }
            while ( (_BYTE *)v24 != v46 );
            v23 += v4;
          }
          goto LABEL_16;
        }
        goto LABEL_37;
      }
      goto LABEL_104;
    }
    goto LABEL_106;
  }
  if ( v18 <= 0xF )
  {
    a1 = v19 + 1;
    v71 = &v17[~(v18 >> 2) - 4 * *v19];
    v72 = v17 <= v71;
    if ( a3 > (unsigned int)v71 )
      v72 = 1;
    if ( !v72 )
    {
      if ( v8 - (unsigned int)v17 > 1 )
      {
        *v17 = *v71;
        v23 = v17 + 2;
        v24 = (unsigned __int8)v71[1];
        v17[1] = v24;
        goto LABEL_16;
      }
      goto LABEL_104;
    }
    goto LABEL_106;
  }
  v4 = v18 & 7;
  if ( (v18 & 7) == 0 )
  {
    while ( 1 )
    {
      v74 = *v19++;
      v73 = v74;
      if ( v74 )
        break;
      v4 += 255;
      if ( v4 == -256 )
        goto LABEL_104;
      if ( v5 == v19 )
        goto LABEL_81;
    }
    v4 += v73 + 7;
    if ( (unsigned int)(v5 - v19) <= 1 )
      goto LABEL_81;
  }
  a1 = v19 + 2;
  v66 = &v17[-(((_WORD)v18 << 11) & 0x4000) - (*(unsigned __int16 *)v19 >> 2)];
  if ( v17 != v66 )
  {
    v30 = v66 - 0x4000;
    goto LABEL_47;
  }
  *a4 = (unsigned int)&v17[-a3];
  if ( v5 == a1 )
    return 0;
  if ( v5 > a1 )
    return -8;
  return -4;
}
