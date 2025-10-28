int __fastcall lzo1z_decompress_dict_safe(
        unsigned __int8 *a1,
        int a2,
        unsigned __int8 *a3,
        unsigned int *a4,
        int a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // lr
  int v8; // r8
  unsigned __int8 *v10; // r7
  unsigned int v11; // r12
  unsigned __int8 *v12; // r11
  unsigned int v13; // r2
  unsigned int v14; // r9
  unsigned __int8 *v15; // r4
  unsigned int v16; // r2
  unsigned int v17; // r5
  unsigned __int8 *v18; // r1
  unsigned __int8 *v19; // r0
  unsigned __int8 *v20; // r2
  unsigned __int8 v21; // t1
  unsigned __int8 *v22; // r0
  unsigned __int8 *v23; // r5
  unsigned int v24; // r2
  unsigned __int8 *v25; // r1
  unsigned int v26; // r12
  int v27; // r2
  unsigned int v28; // r10
  _BYTE *v29; // r1
  int v30; // r1
  char *v31; // r10
  char *v32; // r2
  char v33; // t1
  unsigned __int8 *v34; // r0
  int v35; // r12
  int v36; // t1
  unsigned int v37; // r10
  _BYTE *v38; // r1
  unsigned int *v39; // r12
  unsigned int v40; // r4
  unsigned int *v41; // r2
  unsigned int *v42; // r5
  unsigned int v43; // t1
  unsigned int v44; // r10
  int v45; // r4
  unsigned int v46; // r10
  unsigned __int8 *v47; // r2
  unsigned __int8 *v48; // r12
  unsigned __int8 v49; // t1
  unsigned int v50; // r0
  int v51; // r10
  size_t v52; // r10
  unsigned __int8 *v53; // r1
  unsigned __int8 *v54; // r2
  unsigned __int8 *v55; // r12
  unsigned __int8 v56; // t1
  unsigned __int8 *v57; // r2
  unsigned int v58; // r0
  unsigned int v59; // r2
  unsigned __int8 *v60; // r2
  unsigned __int8 *v61; // r2
  __int16 v62; // r1
  int result; // r0
  size_t v64; // r2
  int v65; // r1
  char *v66; // r2
  char v67; // t1
  unsigned __int8 v68; // r2
  unsigned int v69; // lr
  _BYTE *v70; // r5
  unsigned __int8 *v71; // r4
  unsigned __int8 *v72; // r2
  char v73; // t1
  unsigned __int8 *v74; // r0
  int v75; // r2
  int v76; // r2
  unsigned __int8 *v77; // r1
  unsigned __int8 *v78; // lr
  unsigned int v79; // r10
  bool v80; // zf
  unsigned __int8 *v81; // r10
  unsigned int *v82; // [sp+0h] [bp-Ch]
  unsigned int v83; // [sp+0h] [bp-Ch]
  unsigned int *v84; // [sp+0h] [bp-Ch]
  unsigned int *v85; // [sp+0h] [bp-Ch]
  unsigned int *v86; // [sp+4h] [bp-8h]

  v8 = a6;
  v10 = &a1[a2];
  v11 = *a4;
  if ( !a6 )
    a7 = 0;
  v12 = &a3[v11];
  if ( a6 )
  {
    if ( a7 >= 0xC000 )
    {
      v7 = 49151;
      v13 = a7 - 49151;
      a7 = 49151;
      v8 = a6 + v13;
    }
    v8 += a7;
  }
  v14 = 0;
  *a4 = 0;
  v15 = a1;
  if ( v10 == a1 )
    goto LABEL_115;
  v16 = *a1;
  if ( v16 <= 0x11 )
  {
    v25 = a3;
    v23 = a3;
    goto LABEL_28;
  }
  v17 = v16 - 17;
  v15 = a1 + 1;
  v7 = v16 - 17;
  if ( (int)(v16 - 17) <= 3 )
  {
    v25 = a3;
    v23 = a3;
    goto LABEL_61;
  }
  if ( v11 < v17 )
  {
    v26 = 0;
    goto LABEL_114;
  }
  if ( a2 - 1 < v16 - 14 )
  {
LABEL_115:
    v26 = 0;
    goto LABEL_83;
  }
  v18 = a3 - 1;
  v19 = &a1[v16 - 16];
  v20 = v15;
  do
  {
    v21 = *v20++;
    *++v18 = v21;
  }
  while ( v20 != v19 );
  v22 = &v15[v17];
  v14 = 0;
  v23 = &a3[v17];
LABEL_15:
  v24 = *v22;
  v25 = v23;
  v26 = v23 - a3;
  if ( v24 > 0xF )
  {
    v15 = v22 + 1;
LABEL_48:
    if ( v24 <= 0x3F )
      goto LABEL_72;
LABEL_49:
    v50 = v24 & 0x1F;
    if ( v50 <= 0x1B )
    {
      v7 = *v15++;
      v50 = (v50 << 6) + 1;
    }
    v51 = (v24 >> 5) - 1;
    if ( (v24 & 0x1F) <= 0x1B )
      v14 = v50 + (v7 >> 2);
    goto LABEL_53;
  }
  v15 = v22 + 2;
  v27 = (v24 << 6) + (v22[1] >> 2);
  v14 = v27 + 1793;
  if ( (unsigned int)(v12 - v23) <= 2 )
    goto LABEL_114;
  if ( v14 <= v26 )
  {
    v61 = &v23[-v27];
    v23 += 3;
    v61 -= 1792;
    v62 = *(_WORD *)(v61 - 1);
    LOBYTE(v61) = v61[1];
    *(_WORD *)(v23 - 3) = v62;
    *(v23 - 1) = (unsigned __int8)v61;
    goto LABEL_24;
  }
  v28 = v14 - v26;
  if ( a7 < v14 - v26 )
    goto LABEL_123;
  v29 = (_BYTE *)(v8 - v28);
  if ( v28 > 2 )
  {
    v68 = v29[2];
    *(_WORD *)v23 = *(_WORD *)v29;
    v23[2] = v68;
  }
  else
  {
    v82 = a4;
    memcpy(v23, v29, v14 - v26);
    a4 = v82;
    v30 = (int)&v23[v28 - 1];
    v31 = (char *)&a3[3 - v28];
    v32 = (char *)a3;
    do
    {
      v33 = *v32++;
      *(_BYTE *)++v30 = v33;
    }
    while ( v32 != v31 );
  }
  v23 += 3;
  while ( 1 )
  {
LABEL_24:
    v25 = v23;
    v7 = *(v15 - 1) & 3;
    if ( (*(v15 - 1) & 3) == 0 )
    {
      a1 = v15;
LABEL_28:
      if ( (unsigned int)(v10 - v15) <= 2 )
      {
LABEL_82:
        v26 = v25 - a3;
LABEL_83:
        result = -4;
        *a4 = v26;
        return result;
      }
      v24 = *a1;
      v15 = a1 + 1;
      if ( v24 > 0xF )
      {
        v26 = v25 - a3;
        goto LABEL_48;
      }
      if ( !*a1 )
      {
        v34 = a1 + 16843009;
        while ( 1 )
        {
          v36 = *v15++;
          v35 = v36;
          if ( v36 )
            break;
          v24 += 255;
          if ( v34 == v15 || v10 == v15 )
            goto LABEL_82;
        }
        v24 += v35 + 15;
      }
      if ( v12 - v25 < v24 + 3 )
      {
LABEL_113:
        v26 = v25 - a3;
LABEL_114:
        *a4 = v26;
        return -5;
      }
      if ( v10 - v15 < v24 + 6 )
        goto LABEL_82;
      v37 = v24 - 1;
      v22 = v15 + 4;
      v7 = *(_DWORD *)v15;
      *(_DWORD *)v23 = *(_DWORD *)v15;
      v38 = v23 + 4;
      if ( v24 == 1 )
      {
        v23 += 4;
      }
      else if ( v37 <= 3 )
      {
        v70 = v23 + 3;
        v71 = &v15[v24 + 3];
        v72 = v22;
        do
        {
          v73 = *v72++;
          *++v70 = v73;
        }
        while ( v72 != v71 );
        v23 = &v38[v37];
        v22 += v37;
      }
      else
      {
        v39 = (unsigned int *)(v15 + 4);
        v40 = (v24 - 5) >> 2;
        v41 = (unsigned int *)(v23 + 4);
        v42 = (unsigned int *)&v23[4 * v40 + 8];
        do
        {
          v43 = *v39++;
          v7 = v43;
          *v41++ = v43;
        }
        while ( v41 != v42 );
        v44 = v37 - 4 * v40;
        v45 = 4 * (v40 + 1);
        v46 = v44 - 4;
        v23 = &v38[v45];
        v22 += v45;
        if ( v46 )
        {
          v47 = v23 - 1;
          v48 = &v22[v46];
          do
          {
            v49 = *v22++;
            *++v47 = v49;
          }
          while ( v22 != v48 );
          v23 += v46;
        }
      }
      goto LABEL_15;
    }
LABEL_61:
    if ( v12 - v25 < v7 )
      goto LABEL_113;
    if ( v10 - v15 < v7 + 3 )
      goto LABEL_82;
    *v23 = *v15;
    if ( v7 == 1 )
    {
      v57 = v15 + 1;
      ++v23;
    }
    else
    {
      v57 = (unsigned __int8 *)v15[1];
      v23[1] = (unsigned __int8)v57;
      if ( v7 == 3 )
        LOBYTE(v25) = v15[2];
      else
        v57 = v15 + 2;
      if ( v7 == 3 )
      {
        v57 = v15 + 3;
        v23[2] = (unsigned __int8)v25;
        v23 += 3;
      }
      else
      {
        v23 += 2;
      }
    }
    v15 = v57 + 1;
    v24 = *v57;
    v25 = v23;
    v26 = v23 - a3;
    if ( v24 > 0x3F )
      goto LABEL_49;
LABEL_72:
    v58 = *v15;
    if ( v24 > 0x1F )
      break;
    if ( v24 > 0xF )
    {
      v51 = v24 & 7;
      if ( (v24 & 7) == 0 )
      {
        while ( 1 )
        {
          v78 = v15 + 1;
          if ( v58 )
            break;
          v51 += 255;
          ++v15;
          if ( v51 == -256 )
            goto LABEL_114;
          if ( v78 == v10 )
            goto LABEL_83;
          v58 = *v78;
        }
        v51 += v58 + 7;
        if ( (unsigned int)(v10 - v78) <= 1 )
          goto LABEL_83;
        v58 = *++v15;
      }
      v69 = v15[1];
      v15 += 2;
      result = (v58 << 6) + (v69 >> 2) + (((_WORD)v24 << 11) & 0x4000);
      if ( result )
      {
        v14 = result + 0x4000;
        goto LABEL_53;
      }
      *a4 = v26;
      if ( v10 != v15 )
      {
        if ( v10 <= v15 )
          return -4;
        else
          return -8;
      }
      return result;
    }
    v75 = (v58 >> 2) + (v24 << 6);
    ++v15;
    v14 = v75 + 1;
    if ( (unsigned int)(v12 - v25) <= 1 )
      goto LABEL_114;
    if ( v14 > v26 )
    {
      v79 = v14 - v26;
      if ( a7 < v14 - v26 )
        goto LABEL_123;
      v77 = (unsigned __int8 *)(v8 - v79);
      if ( v79 > 1 )
      {
LABEL_106:
        *(_WORD *)v23 = *(_WORD *)v77;
        v23 += 2;
      }
      else
      {
        v85 = a4;
        memcpy(v23, v77, v14 - v26);
        v80 = v79 == 0;
        v81 = &v23[v79];
        a4 = v85;
        v23 = v81 + 1;
        *v81 = *a3;
        if ( v80 )
        {
          v23 = v81 + 2;
          v81[1] = a3[1];
        }
      }
    }
    else
    {
      v76 = ~v75;
      v77 = &v23[v76];
      if ( v14 != 1 )
        goto LABEL_106;
      *v23 = v23[v76];
      v23[1] = v77[1];
      v23 += 2;
    }
  }
  v51 = v24 & 0x1F;
  if ( (v24 & 0x1F) != 0 )
    goto LABEL_74;
  while ( 1 )
  {
    v60 = v15 + 1;
    if ( v58 )
      break;
    v51 += 255;
    ++v15;
    if ( v51 == -256 )
      goto LABEL_114;
    if ( v60 == v10 )
      goto LABEL_83;
    v58 = *v60;
  }
  v51 += v58 + 31;
  if ( (unsigned int)(v10 - v60) <= 1 )
    goto LABEL_83;
  v58 = *++v15;
LABEL_74:
  v59 = v15[1];
  v15 += 2;
  v14 = (v58 << 6) + 1 + (v59 >> 2);
LABEL_53:
  v52 = v51 + 2;
  if ( v12 - v25 < v52 )
    goto LABEL_114;
  if ( v14 <= v26 )
  {
    v53 = &v23[-v14];
    if ( v52 > v14 )
    {
      v54 = v23 - 1;
      v55 = &v53[v52];
      do
      {
        v56 = *v53++;
        *++v54 = v56;
      }
      while ( v53 != v55 );
LABEL_59:
      v23 += v52;
      goto LABEL_24;
    }
    goto LABEL_102;
  }
  v64 = v14 - v26;
  if ( a7 >= v14 - v26 )
  {
    v53 = (unsigned __int8 *)(v8 - v64);
    if ( v52 > v64 )
    {
      v83 = v14 - v26;
      v86 = a4;
      memcpy(v23, v53, v64);
      a4 = v86;
      v65 = (int)&v23[v83 - 1];
      v66 = (char *)a3;
      do
      {
        v67 = *v66++;
        *(_BYTE *)++v65 = v67;
      }
      while ( v66 != (char *)&a3[v52 - v83] );
      goto LABEL_59;
    }
LABEL_102:
    v74 = v23;
    v84 = a4;
    v23 += v52;
    memcpy(v74, v53, v52);
    a4 = v84;
    goto LABEL_24;
  }
LABEL_123:
  *a4 = v26;
  return -6;
}
