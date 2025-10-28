int __fastcall lzo1c_decompress_safe(unsigned __int8 *a1, int a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // r1
  unsigned int v5; // r6
  _BYTE *v6; // lr
  unsigned int v7; // r12
  unsigned __int8 *v8; // r5
  unsigned __int8 *v9; // r7
  unsigned int v10; // r12
  unsigned int v11; // r12
  unsigned int v12; // r4
  _BYTE *v13; // r8
  int v14; // r12
  _BYTE *v15; // r2
  unsigned int v16; // r12
  int v17; // r7
  int v18; // r4
  _BYTE *v19; // r9
  _BOOL4 v20; // r7
  int *v21; // r9
  int v22; // t1
  unsigned int v23; // r10
  unsigned int v24; // r12
  int *v25; // r7
  _DWORD *v26; // r11
  _DWORD *v27; // lr
  _DWORD *v28; // r4
  int v29; // t1
  unsigned int v30; // r12
  int v31; // r10
  unsigned int v32; // r12
  char *v33; // r9
  _BYTE *v34; // r4
  char *v35; // r8
  char v36; // t1
  unsigned __int8 *v37; // r8
  unsigned int v38; // r7
  _BYTE *v39; // r9
  int v40; // t1
  unsigned int v41; // r4
  int v42; // r12
  _BYTE *v43; // lr
  unsigned __int8 *v44; // r7
  char v45; // t1
  char *v46; // r4
  _BYTE *v47; // r7
  char v48; // t1
  _BYTE *v49; // r0
  unsigned __int8 *v50; // r7
  char v51; // t1
  unsigned __int8 *v52; // lr
  unsigned int v53; // r9
  int v54; // r12
  unsigned int v55; // r0
  _BOOL4 v56; // r5
  bool v57; // zf
  char v58; // r12
  int v60; // r0
  int v61; // t1
  _BYTE *v62; // r7
  _BOOL4 v63; // r4
  unsigned int v64; // r12
  unsigned int v65; // r5
  unsigned int v66; // r12
  _BYTE *v67; // r5
  char *v68; // r4
  _BYTE *v69; // lr
  _BYTE *v70; // r5
  char v71; // t1

  v4 = (unsigned int)&a1[a2];
  v5 = a3 + *a4;
  if ( (unsigned int)a1 >= v4 )
  {
    v15 = 0;
LABEL_88:
    *a4 = v15;
    return -7;
  }
  v6 = (_BYTE *)a3;
  while ( 1 )
  {
    v7 = *a1;
    v8 = a1 + 1;
    v9 = a1 + 1;
    if ( v7 > 0x1F )
    {
LABEL_17:
      while ( v7 <= 0x3F )
      {
        v16 = v7 & 0x1F;
        if ( !v16 )
        {
          if ( v9 == (unsigned __int8 *)v4 )
            goto LABEL_83;
          while ( 1 )
          {
            v61 = *v8++;
            v60 = v61;
            if ( v61 )
            {
              v9 = v8;
              v16 += v60 + 31;
              goto LABEL_19;
            }
            v16 += 255;
            if ( v16 == -256 )
              break;
            if ( v8 == (unsigned __int8 *)v4 )
              goto LABEL_83;
          }
          v13 = v6;
          goto LABEL_67;
        }
LABEL_19:
        if ( v4 - (unsigned int)v9 <= 1 )
          goto LABEL_83;
        a1 = v8 + 2;
        v17 = v8[1];
        v18 = -((*v8 & 0x3F) + (v17 << 6));
        v19 = &v6[-(*v8 & 0x3F) + -64 * v17];
        if ( v6 == v19 )
        {
          *a4 = &v6[-a3];
          if ( (unsigned __int8 *)v4 == a1 )
            return 0;
          if ( v4 > (unsigned int)a1 )
            return -8;
          return -4;
        }
        v13 = v6;
        v20 = v6 <= v19;
        if ( a3 > (unsigned int)v19 )
          v20 = 1;
        if ( v20 )
          goto LABEL_89;
        if ( v5 - (unsigned int)v6 < v16 + 3 )
          goto LABEL_67;
        if ( v16 <= 4 || v18 >= -3 )
        {
          v46 = v19 + 3;
          *v6 = *v19;
          v6[1] = v19[1];
          v6[2] = v19[2];
          v47 = v6 + 2;
          do
          {
            v48 = *v46++;
            *++v47 = v48;
          }
          while ( &v19[v16 + 3] != v46 );
          v6 += v16 + 3;
        }
        else
        {
          v22 = *(_DWORD *)v19;
          v21 = (int *)(v19 + 4);
          v23 = (v16 - 5) >> 2;
          v24 = v16 - 1;
          v25 = v21;
          v26 = &v6[4 * v23 + 8];
          *(_DWORD *)v6 = v22;
          v27 = v6 + 4;
          v28 = v27;
          do
          {
            v29 = *v25++;
            *v28++ = v29;
          }
          while ( v26 != v28 );
          v30 = v24 - 4 * v23;
          v31 = v23 + 1;
          v32 = v30 - 4;
          v6 = &v27[v31];
          v33 = (char *)&v21[v31];
          if ( v32 )
          {
            v34 = v6 - 1;
            v35 = &v33[v32];
            do
            {
              v36 = *v33++;
              *++v34 = v36;
            }
            while ( v33 != v35 );
            v6 += v32;
          }
        }
        v7 = *v8 >> 6;
        if ( !v7 )
          goto LABEL_14;
        v13 = v6;
        if ( v4 - (unsigned int)a1 < v7 )
          goto LABEL_84;
        if ( v5 - (unsigned int)v6 < v7 )
          goto LABEL_67;
        v8 += 2;
LABEL_51:
        v49 = v6 - 1;
        v50 = &v8[v7];
        do
        {
          v51 = *v8++;
          *++v49 = v51;
        }
        while ( v50 != v8 );
        v41 = (unsigned int)&v6[v7];
LABEL_54:
        if ( v4 <= (unsigned int)v8 )
        {
LABEL_87:
          v15 = (_BYTE *)(v41 - a3);
          goto LABEL_88;
        }
        v7 = *v8;
        v9 = v8 + 1;
        if ( v7 <= 0x1F )
        {
          v13 = (_BYTE *)v41;
          if ( v4 - (unsigned int)(v8 + 1) <= 1 )
            goto LABEL_84;
          if ( v5 - v41 > 3 )
          {
            v52 = v8 + 4;
            while ( 1 )
            {
              v53 = v4 - (_DWORD)v52;
              v9 = v52;
              v54 = ~(v7 | (32 * *(v52 - 3)));
              v55 = v41 + v54;
              v56 = v41 + v54 >= v41;
              if ( v41 + v54 < a3 )
                v56 = 1;
              v57 = !v56;
              v8 = v52;
              if ( !v57 )
                break;
              v58 = *(_BYTE *)(v41 + v54);
              v41 += 4;
              *(_BYTE *)(v41 - 4) = v58;
              *(_BYTE *)(v41 - 3) = *(_BYTE *)(v55 + 1);
              *(_BYTE *)(v41 - 2) = *(_BYTE *)(v55 + 2);
              v13 = (_BYTE *)v41;
              *(_BYTE *)(v41 - 1) = *(v52 - 2);
              if ( v4 <= (unsigned int)(v52 - 1) )
                goto LABEL_87;
              v7 = *(v52 - 1);
              v52 += 3;
              if ( v7 > 0x1F )
              {
                v6 = (_BYTE *)v41;
                goto LABEL_17;
              }
              if ( v53 <= 1 )
                goto LABEL_84;
              if ( v5 - v41 <= 3 )
                goto LABEL_67;
            }
            v13 = (_BYTE *)v41;
LABEL_89:
            *a4 = &v13[-a3];
            return -6;
          }
          goto LABEL_67;
        }
        v6 = (_BYTE *)v41;
        ++v8;
      }
      v13 = v6;
      if ( v9 == (unsigned __int8 *)v4 )
        goto LABEL_84;
      a1 = v8 + 1;
      v62 = &v6[~(v7 & 0x1F | (32 * *v8))];
      v63 = v6 <= v62;
      if ( a3 > (unsigned int)v62 )
        v63 = 1;
      if ( v63 )
        goto LABEL_89;
      v64 = v7 >> 5;
      v65 = v64 + 1;
      v66 = v64 - 1;
      if ( v5 - (unsigned int)v6 < v65 )
        goto LABEL_67;
      v67 = v6;
      v68 = v62 + 2;
      *v6 = *v62;
      v69 = v6 + 2;
      v67[1] = v62[1];
      v70 = v67 + 1;
      do
      {
        v71 = *v68++;
        *++v70 = v71;
      }
      while ( &v62[v66 + 2] != v68 );
      v6 = &v69[v66];
      if ( v4 > (unsigned int)a1 )
        continue;
LABEL_15:
      v15 = &v6[-a3];
      goto LABEL_88;
    }
    if ( *a1 )
      goto LABEL_34;
    if ( v8 == (unsigned __int8 *)v4 )
    {
LABEL_83:
      v13 = v6;
LABEL_84:
      *a4 = &v13[-a3];
      return -4;
    }
    v10 = a1[1];
    v8 = a1 + 2;
    if ( v10 <= 0xF7 )
      break;
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
      goto LABEL_84;
    if ( v5 - (unsigned int)v6 < v12 )
      goto LABEL_67;
    a1 += 2;
    do
    {
      v14 = *(_DWORD *)a1;
      v12 -= 8;
      a1 += 8;
      v6 += 8;
      *((_DWORD *)v6 - 2) = v14;
      *((_DWORD *)v6 - 1) = *((_DWORD *)a1 - 1);
    }
    while ( v12 );
LABEL_14:
    if ( v4 <= (unsigned int)a1 )
      goto LABEL_15;
  }
  v7 = v10 + 32;
LABEL_34:
  v13 = v6;
  if ( v4 - (unsigned int)v8 < v7 )
    goto LABEL_84;
  if ( v5 - (unsigned int)v6 >= v7 )
  {
    if ( v7 > 3 )
    {
      v37 = v8;
      v38 = ((v7 - 4) & 0xFFFFFFFC) + 4;
      v39 = &v6[v38];
      while ( 1 )
      {
        v40 = *(_DWORD *)v37;
        v37 += 4;
        *(_DWORD *)v6 = v40;
        v41 = (unsigned int)(v6 + 4);
        if ( v39 == v6 + 4 )
          break;
        v6 += 4;
      }
      v42 = v7 & 3;
      v8 += v38;
      if ( v42 )
      {
        v43 = v6 + 3;
        v44 = &v8[v42];
        do
        {
          v45 = *v8++;
          *++v43 = v45;
        }
        while ( v44 != v8 );
        v41 += v42;
      }
      goto LABEL_54;
    }
    goto LABEL_51;
  }
LABEL_67:
  *a4 = &v13[-a3];
  return -5;
}
