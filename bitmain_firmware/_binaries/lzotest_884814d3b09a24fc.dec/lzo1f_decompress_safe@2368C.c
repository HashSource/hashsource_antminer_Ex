int __fastcall lzo1f_decompress_safe(_BYTE *a1, int a2, char *a3, int *a4)
{
  unsigned int v4; // r1
  int v5; // r5
  char *v6; // r12
  char *v7; // r5
  char *v8; // r12
  unsigned int v9; // r6
  unsigned __int8 *v10; // r4
  unsigned __int8 *v11; // r7
  _DWORD *v12; // r9
  unsigned int v13; // r0
  char *v14; // r10
  int v15; // t1
  unsigned __int8 *v16; // r0
  char *v17; // lr
  unsigned __int8 *v18; // r7
  char v19; // t1
  char *v20; // lr
  _BOOL4 v21; // r4
  unsigned int v22; // r7
  char *v23; // r4
  char *v24; // lr
  char v25; // t1
  _BYTE *v26; // r0
  unsigned int v28; // r6
  unsigned int v29; // r4
  char *v30; // lr
  _BOOL4 v31; // r7
  bool v32; // cc
  _DWORD *v33; // r7
  char *v34; // r4
  char *v35; // r12
  char *v36; // r7
  char v37; // t1
  char *v38; // lr
  char v39; // t1
  int v40; // r0
  int v41; // t1
  int v42; // lr
  _BOOL4 v43; // r4
  unsigned __int8 *v44; // r0
  int v45; // lr
  int v46; // t1
  int *v47; // lr
  int v48; // t1
  unsigned int v49; // r9
  int *v50; // r6
  char *v51; // r10
  char *v52; // r12
  char *v53; // r4
  int v54; // t1
  unsigned int v55; // r4
  int v56; // r9
  unsigned int v57; // r4
  char *v58; // lr
  char *v59; // r6
  char *v60; // r9
  char v61; // t1
  unsigned int v62; // [sp+4h] [bp-8h]

  v4 = (unsigned int)&a1[a2];
  v5 = *a4;
  v6 = 0;
  *a4 = 0;
  v7 = &a3[v5];
  if ( (unsigned int)a1 >= v4 )
  {
LABEL_28:
    *a4 = (int)v6;
    return -7;
  }
  v8 = a3;
  while ( 1 )
  {
    v9 = (unsigned __int8)*a1;
    v10 = a1 + 1;
    if ( v9 <= 0x1F )
    {
      if ( !*a1 )
      {
        if ( v10 == (unsigned __int8 *)v4 )
          goto LABEL_66;
        v44 = a1 + 16843009;
        while ( 1 )
        {
          v46 = *v10++;
          v45 = v46;
          if ( v46 )
            break;
          v9 += 255;
          if ( v10 == v44 || (unsigned __int8 *)v4 == v10 )
            goto LABEL_66;
        }
        v9 += v45 + 31;
      }
      if ( v7 - v8 >= v9 )
      {
        if ( v4 - (unsigned int)v10 >= v9 + 1 )
        {
          if ( v9 <= 3 )
          {
            v38 = v8 - 1;
            v16 = &v10[v9];
            do
            {
              v39 = *v10++;
              *++v38 = v39;
            }
            while ( v10 != v16 );
          }
          else
          {
            v11 = v10;
            v12 = v8;
            v13 = ((v9 - 4) & 0xFFFFFFFC) + 4;
            v14 = &v8[v13];
            while ( 1 )
            {
              v15 = *(_DWORD *)v11;
              v11 += 4;
              *(_DWORD *)v8 = v15;
              v8 += 4;
              if ( v14 == v8 )
                break;
              v12 = v8;
            }
            v9 &= 3u;
            v16 = &v10[v13];
            if ( !v9 )
            {
LABEL_15:
              v10 = v16 + 1;
              v9 = *v16;
              if ( (unsigned int)(v16 + 1) < v4 )
                goto LABEL_16;
LABEL_27:
              v6 = (char *)(v8 - a3);
              goto LABEL_28;
            }
            v17 = (char *)v12 + 3;
            v18 = &v16[v9];
            do
            {
              v19 = *v16++;
              *++v17 = v19;
            }
            while ( v18 != v16 );
          }
          v8 += v9;
          goto LABEL_15;
        }
LABEL_66:
        *a4 = v8 - a3;
        return -4;
      }
LABEL_59:
      *a4 = v8 - a3;
      return -5;
    }
LABEL_29:
    if ( v9 <= 0xDF )
    {
      v42 = ~((v9 >> 2) & 7);
      a1 = v10 + 1;
      v28 = v9 >> 5;
      v30 = &v8[v42 - 8 * *v10];
      v43 = v8 <= v30;
      if ( a3 > v30 )
        v43 = 1;
      if ( v43 )
      {
LABEL_73:
        *a4 = v8 - a3;
        return -6;
      }
      if ( v7 - v8 < v28 + 2 )
        goto LABEL_59;
LABEL_40:
      v33 = v8;
      v34 = v30 + 2;
      *v8 = *v30;
      v35 = v8 + 2;
      *((_BYTE *)v33 + 1) = v30[1];
      v36 = (char *)v33 + 1;
      do
      {
        v37 = *v34++;
        *++v36 = v37;
      }
      while ( v34 != &v30[v28 + 2] );
      v8 = &v35[v28];
      goto LABEL_43;
    }
    v28 = v9 & 0x1F;
    if ( !v28 )
    {
      if ( (unsigned __int8 *)v4 == v10 )
        goto LABEL_66;
      while ( 1 )
      {
        v41 = *v10++;
        v40 = v41;
        if ( v41 )
          break;
        v28 += 255;
        if ( v28 == -256 )
          goto LABEL_59;
        if ( v10 == (unsigned __int8 *)v4 )
          goto LABEL_66;
      }
      v28 += v40 + 31;
    }
    if ( v4 - (unsigned int)v10 <= 1 )
      goto LABEL_66;
    a1 = v10 + 2;
    v29 = *(unsigned __int16 *)v10 >> 2;
    v30 = &v8[-v29];
    if ( v8 == &v8[-v29] )
      break;
    v31 = v8 <= v30;
    if ( a3 > v30 )
      v31 = 1;
    if ( v31 )
      goto LABEL_73;
    if ( v7 - v8 < v28 + 2 )
      goto LABEL_59;
    v32 = v28 > 5;
    if ( v28 > 5 )
      v32 = v29 > 3;
    if ( !v32 )
      goto LABEL_40;
    v48 = *(_DWORD *)v30;
    v47 = (int *)(v30 + 4);
    v49 = (v28 - 6) >> 2;
    v62 = v28 - 2;
    v50 = v47;
    v51 = &v8[4 * v49 + 8];
    *(_DWORD *)v8 = v48;
    v52 = v8 + 4;
    v53 = v52;
    do
    {
      v54 = *v50++;
      *(_DWORD *)v53 = v54;
      v53 += 4;
    }
    while ( v51 != v53 );
    v55 = v62 - 4 * v49;
    v56 = v49 + 1;
    v57 = v55 - 4;
    v8 = &v52[v56 * 4];
    v58 = (char *)&v47[v56];
    if ( v57 )
    {
      v59 = v8 - 1;
      v60 = &v58[v57];
      do
      {
        v61 = *v58++;
        *++v59 = v61;
      }
      while ( v60 != v58 );
      v8 += v57;
    }
LABEL_43:
    v22 = *(a1 - 2) & 3;
    if ( (*(a1 - 2) & 3) != 0 )
    {
      while ( v7 - v8 >= v22 )
      {
        if ( v4 - (unsigned int)a1 < v22 + 1 )
          goto LABEL_66;
        v23 = v8 - 1;
        v24 = a1;
        do
        {
          v25 = *v24++;
          *++v23 = v25;
        }
        while ( &a1[v22] != v24 );
        v8 += v22;
        v26 = &a1[v22 - 1];
        v10 = v26 + 2;
        v9 = (unsigned __int8)v26[1];
        if ( (unsigned int)(v26 + 2) >= v4 )
          goto LABEL_27;
LABEL_16:
        if ( v9 > 0x1F )
          goto LABEL_29;
        a1 = v10 + 1;
        v20 = &v8[-2049 - (v9 >> 2) - 8 * *v10];
        v21 = v8 <= v20;
        if ( a3 > v20 )
          v21 = 1;
        if ( v21 )
          goto LABEL_73;
        if ( (unsigned int)(v7 - v8) <= 2 )
          goto LABEL_59;
        v8 += 3;
        *(v8 - 3) = *v20;
        *(v8 - 2) = v20[1];
        *(v8 - 1) = v20[2];
        v22 = *(a1 - 2) & 3;
        if ( (*(a1 - 2) & 3) == 0 )
          goto LABEL_44;
      }
      goto LABEL_59;
    }
LABEL_44:
    if ( (unsigned int)a1 >= v4 )
      goto LABEL_27;
  }
  *a4 = v8 - a3;
  if ( (_BYTE *)v4 == a1 )
    return 0;
  if ( v4 <= (unsigned int)a1 )
    return -4;
  return -8;
}
