int __fastcall lzo1b_decompress_safe(unsigned __int8 *a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // r1
  unsigned int v5; // r7
  unsigned int v6; // lr
  unsigned int v7; // r12
  unsigned __int8 *v8; // r4
  unsigned __int8 *v9; // r6
  unsigned int v10; // r12
  unsigned int v11; // r12
  unsigned int v12; // r6
  unsigned int v13; // r5
  int v14; // r12
  unsigned int v15; // r2
  unsigned int v16; // r12
  int v17; // r4
  _BYTE *v18; // r6
  _BOOL4 v19; // r8
  int *v20; // r6
  int v21; // t1
  unsigned int v22; // r9
  unsigned int v23; // r12
  int *v24; // r5
  _DWORD *v25; // r10
  _DWORD *v26; // lr
  _DWORD *v27; // r4
  int v28; // t1
  unsigned int v29; // r12
  int v30; // r9
  unsigned int v31; // r12
  char *v32; // r6
  unsigned int v33; // r4
  char *v34; // r8
  char v35; // t1
  unsigned __int8 *v36; // r6
  unsigned int v37; // r8
  unsigned int v38; // r9
  int v39; // t1
  unsigned int v40; // r0
  int v41; // r12
  unsigned __int8 *v42; // lr
  char v43; // r12
  unsigned int v44; // r9
  int v45; // r12
  unsigned int v46; // r5
  _BOOL4 v47; // r10
  unsigned int v49; // r0
  unsigned __int8 *v50; // r6
  char v51; // t1
  char *v52; // r4
  unsigned int v53; // r5
  char v54; // t1
  _BYTE *v55; // r6
  _BOOL4 v56; // r4
  unsigned int v57; // r12
  unsigned int v58; // r8
  unsigned int v59; // r12
  char *v60; // r4
  unsigned int v61; // lr
  unsigned int v62; // r5
  char v63; // t1
  int v64; // r0
  int v65; // t1
  unsigned int v66; // lr
  unsigned __int8 *v67; // r6
  char v68; // t1

  v4 = (unsigned int)&a1[a2];
  v5 = a3 + *a4;
  if ( (unsigned int)a1 >= v4 )
  {
    v15 = 0;
LABEL_83:
    *a4 = v15;
    return -7;
  }
  v6 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *a1;
      v8 = a1 + 1;
      v9 = a1 + 1;
      if ( v7 > 0x1F )
        goto LABEL_17;
      if ( *a1 )
        break;
      if ( v8 == (unsigned __int8 *)v4 )
        goto LABEL_72;
      v10 = a1[1];
      v8 = a1 + 2;
      if ( v10 <= 0xF7 )
      {
        v7 = v10 + 32;
        break;
      }
      v11 = v10 - 248;
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
      v13 = v6;
      if ( v4 - (unsigned int)v8 < v12 )
        goto LABEL_73;
      if ( v5 - v6 < v12 )
        goto LABEL_81;
      a1 += 2;
      do
      {
        v14 = *(_DWORD *)a1;
        v12 -= 8;
        a1 += 8;
        v6 += 8;
        *(_DWORD *)(v6 - 8) = v14;
        *(_DWORD *)(v6 - 4) = *((_DWORD *)a1 - 1);
      }
      while ( v12 );
LABEL_14:
      if ( v4 <= (unsigned int)a1 )
        goto LABEL_15;
    }
    v13 = v6;
    if ( v4 - (unsigned int)v8 < v7 )
      goto LABEL_73;
    if ( v5 - v6 < v7 )
      goto LABEL_81;
    if ( v7 <= 3 )
    {
      v49 = v6 - 1;
      v50 = &v8[v7];
      do
      {
        v51 = *v8++;
        *(_BYTE *)++v49 = v51;
      }
      while ( v50 != v8 );
      v40 = v6 + v7;
    }
    else
    {
      v36 = v8;
      v37 = ((v7 - 4) & 0xFFFFFFFC) + 4;
      v38 = v6 + v37;
      while ( 1 )
      {
        v39 = *(_DWORD *)v36;
        v36 += 4;
        *(_DWORD *)v6 = v39;
        v40 = v6 + 4;
        if ( v38 == v6 + 4 )
          break;
        v6 += 4;
      }
      v41 = v7 & 3;
      v8 += v37;
      if ( v41 )
      {
        v66 = v6 + 3;
        v67 = &v8[v41];
        do
        {
          v68 = *v8++;
          *(_BYTE *)++v66 = v68;
        }
        while ( v67 != v8 );
        v40 += v41;
      }
    }
    if ( v4 <= (unsigned int)v8 )
    {
LABEL_82:
      v15 = v40 - a3;
      goto LABEL_83;
    }
    v7 = *v8;
    v9 = v8 + 1;
    if ( v7 <= 0x1F )
      break;
    v6 = v40;
    ++v8;
LABEL_17:
    if ( v7 > 0x3F )
    {
      v13 = v6;
      if ( v9 == (unsigned __int8 *)v4 )
        goto LABEL_73;
      a1 = v8 + 1;
      v55 = (_BYTE *)(v6 + ~(v7 & 0x1F | (32 * *v8)));
      v56 = v6 <= (unsigned int)v55;
      if ( a3 > (unsigned int)v55 )
        v56 = 1;
      if ( v56 )
        goto LABEL_56;
      v57 = v7 >> 5;
      v58 = v57 + 1;
      v59 = v57 - 1;
      if ( v5 - v6 < v58 )
        goto LABEL_81;
      v60 = v55 + 2;
      *(_BYTE *)v6 = *v55;
      v61 = v6 + 2;
      *(_BYTE *)(v13 + 1) = v55[1];
      v62 = v13 + 1;
      do
      {
        v63 = *v60++;
        *(_BYTE *)++v62 = v63;
      }
      while ( &v55[v59 + 2] != v60 );
      v6 = v61 + v59;
      goto LABEL_33;
    }
    v16 = v7 & 0x1F;
    if ( !v16 )
    {
      if ( v9 != (unsigned __int8 *)v4 )
      {
        while ( 1 )
        {
          v65 = *v8++;
          v64 = v65;
          if ( v65 )
          {
            v9 = v8;
            v16 += v64 + 31;
            goto LABEL_19;
          }
          v16 += 255;
          if ( v16 == -256 )
            break;
          if ( v8 == (unsigned __int8 *)v4 )
            goto LABEL_72;
        }
        v13 = v6;
        goto LABEL_81;
      }
LABEL_72:
      v13 = v6;
LABEL_73:
      *a4 = v13 - a3;
      return -4;
    }
LABEL_19:
    if ( v4 - (unsigned int)v9 <= 1 )
      goto LABEL_72;
    a1 = v8 + 2;
    v17 = -(*v8 + (v8[1] << 8));
    v18 = (_BYTE *)(v6 + v17);
    if ( v6 == v6 + v17 )
    {
      *a4 = v6 - a3;
      if ( (unsigned __int8 *)v4 == a1 )
        return 0;
      if ( v4 > (unsigned int)a1 )
        return -8;
      return -4;
    }
    v13 = v6;
    v19 = v6 <= (unsigned int)v18;
    if ( a3 > (unsigned int)v18 )
      v19 = 1;
    if ( v19 )
      goto LABEL_56;
    if ( v5 - v6 < v16 + 3 )
      goto LABEL_81;
    if ( v16 <= 4 || v17 >= -3 )
    {
      v52 = v18 + 3;
      *(_BYTE *)v6 = *v18;
      *(_BYTE *)(v6 + 1) = v18[1];
      *(_BYTE *)(v6 + 2) = v18[2];
      v53 = v6 + 2;
      do
      {
        v54 = *v52++;
        *(_BYTE *)++v53 = v54;
      }
      while ( &v18[v16 + 3] != v52 );
      v6 += 3 + v16;
      if ( v4 <= (unsigned int)a1 )
      {
LABEL_15:
        v15 = v6 - a3;
        goto LABEL_83;
      }
    }
    else
    {
      v21 = *(_DWORD *)v18;
      v20 = (int *)(v18 + 4);
      v22 = (v16 - 5) >> 2;
      v23 = v16 - 1;
      v24 = v20;
      v25 = (_DWORD *)(v6 + 4 * (v22 + 2));
      *(_DWORD *)v6 = v21;
      v26 = (_DWORD *)(v6 + 4);
      v27 = v26;
      do
      {
        v28 = *v24++;
        *v27++ = v28;
      }
      while ( v27 != v25 );
      v29 = v23 - 4 * v22;
      v30 = v22 + 1;
      v31 = v29 - 4;
      v6 = (unsigned int)&v26[v30];
      v32 = (char *)&v20[v30];
      if ( !v31 )
        goto LABEL_14;
      v33 = v6 - 1;
      v34 = &v32[v31];
      do
      {
        v35 = *v32++;
        *(_BYTE *)++v33 = v35;
      }
      while ( v32 != v34 );
      v6 += v31;
LABEL_33:
      if ( v4 <= (unsigned int)a1 )
        goto LABEL_15;
    }
  }
  v13 = v40;
  if ( v4 - (unsigned int)(v8 + 1) <= 1 )
    goto LABEL_73;
  if ( v5 - v40 > 3 )
  {
    v42 = v8 + 4;
    while ( 1 )
    {
      v44 = v4 - (_DWORD)v42;
      v8 = v42;
      v9 = v42;
      v45 = ~(v7 | (32 * *(v42 - 3)));
      v46 = v40 + v45;
      v47 = v40 + v45 >= v40;
      if ( v40 + v45 < a3 )
        v47 = 1;
      if ( v47 )
        break;
      v43 = *(_BYTE *)(v40 + v45);
      v40 += 4;
      *(_BYTE *)(v40 - 4) = v43;
      *(_BYTE *)(v40 - 3) = *(_BYTE *)(v46 + 1);
      *(_BYTE *)(v40 - 2) = *(_BYTE *)(v46 + 2);
      v13 = v40;
      *(_BYTE *)(v40 - 1) = *(v42 - 2);
      if ( v4 <= (unsigned int)(v42 - 1) )
        goto LABEL_82;
      v7 = *(v42 - 1);
      v42 += 3;
      if ( v7 > 0x1F )
      {
        v6 = v40;
        goto LABEL_17;
      }
      if ( v44 <= 1 )
        goto LABEL_73;
      if ( v5 - v40 <= 3 )
        goto LABEL_81;
    }
    v13 = v40;
LABEL_56:
    *a4 = v13 - a3;
    return -6;
  }
LABEL_81:
  *a4 = v13 - a3;
  return -5;
}
