int __fastcall lzo1z_decompress_safe(unsigned __int8 *a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 *v4; // r6
  unsigned int v5; // r8
  int v6; // r5
  unsigned int v7; // r7
  unsigned int v8; // r4
  unsigned int v9; // lr
  unsigned __int8 *v10; // r12
  unsigned int v11; // r9
  unsigned int v12; // r5
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r1
  char v15; // t1
  unsigned __int8 *v16; // r0
  unsigned __int8 *v17; // lr
  unsigned int v18; // r1
  int v19; // r5
  unsigned __int8 *v20; // r1
  unsigned __int8 *v21; // r1
  _BOOL4 v22; // r0
  unsigned __int8 *v23; // r8
  unsigned __int8 *v24; // lr
  unsigned __int8 *v25; // lr
  unsigned __int8 *v26; // r1
  unsigned int v27; // r0
  unsigned int v28; // r1
  unsigned int v29; // r4
  unsigned int v30; // r8
  int v31; // r5
  int v32; // r4
  _BOOL4 v33; // r0
  unsigned __int8 *v34; // r0
  char *v35; // r1
  _BYTE *v36; // r0
  char v37; // t1
  unsigned int v38; // r0
  unsigned int v39; // r5
  _BOOL4 v40; // r1
  int *v41; // r4
  int v42; // t1
  unsigned int v43; // r10
  unsigned int v44; // r8
  int *v45; // r0
  unsigned __int8 *v46; // r11
  unsigned __int8 *v47; // r1
  int v48; // t1
  int v49; // r1
  int v50; // r0
  char *v51; // r1
  char *v52; // r9
  unsigned __int8 v53; // t1
  unsigned __int8 *v54; // r0
  int v55; // r4
  int v56; // t1
  unsigned int v57; // r9
  _BYTE *v58; // r8
  int *v59; // r4
  unsigned int v60; // r1
  unsigned __int8 *v61; // r12
  unsigned __int8 *v62; // lr
  int v63; // t1
  unsigned int v64; // r9
  int v65; // r1
  unsigned int v66; // r9
  unsigned __int8 *v67; // r1
  unsigned __int8 *v68; // r4
  unsigned __int8 v69; // t1
  unsigned __int8 *v70; // r1
  unsigned int v72; // r5
  unsigned __int8 *v73; // r4
  _BYTE *v74; // lr
  unsigned __int8 *v75; // r12
  unsigned __int8 *v76; // r1
  char v77; // t1
  int v78; // r5
  int v79; // r1
  unsigned __int8 *v80; // r1
  _BOOL4 v81; // r0
  unsigned __int8 *v82; // r4

  v4 = &a1[a2];
  v5 = *a4;
  v6 = 0;
  *a4 = 0;
  v7 = a3 + v5;
  if ( &a1[a2] == a1 )
    goto LABEL_116;
  v8 = *a1;
  if ( v8 <= 0x11 )
  {
    v10 = a1;
    v17 = (unsigned __int8 *)a3;
    goto LABEL_50;
  }
  v9 = v8 - 17;
  v10 = a1 + 1;
  v11 = v8 - 17;
  if ( (int)(v8 - 17) <= 3 )
  {
    a1 = (unsigned __int8 *)a3;
    v23 = (unsigned __int8 *)a3;
    goto LABEL_20;
  }
  if ( v5 < v9 )
  {
    v24 = 0;
LABEL_114:
    *a4 = (unsigned int)v24;
    return -5;
  }
  if ( a2 - 1 < v8 - 14 )
  {
LABEL_116:
    v25 = 0;
    goto LABEL_93;
  }
  v12 = a3 - 1;
  v13 = &a1[v8 - 16];
  v14 = v10;
  do
  {
    v15 = *v14++;
    *(_BYTE *)++v12 = v15;
  }
  while ( v14 != v13 );
  v16 = &v10[v9];
  v6 = 0;
  v17 = (unsigned __int8 *)(a3 + v9);
LABEL_9:
  v18 = *v16;
  if ( v18 <= 0xF )
  {
    v10 = v16 + 2;
    v19 = (v18 << 6) + (v16[1] >> 2);
    v20 = &v17[-v19];
    v6 = v19 + 1793;
    v21 = v20 - 1793;
    v22 = v17 <= v21;
    if ( a3 > (unsigned int)v21 )
      v22 = 1;
    if ( !v22 )
    {
      if ( v7 - (unsigned int)v17 > 2 )
      {
        v23 = v17 + 3;
        *v17 = *v21;
        v17[1] = v21[1];
        v17[2] = v21[2];
        goto LABEL_16;
      }
LABEL_115:
      v24 = &v17[-a3];
      goto LABEL_114;
    }
LABEL_117:
    *a4 = (unsigned int)&v17[-a3];
    return -6;
  }
  v10 = v16 + 1;
  while ( v18 > 0x3F )
  {
    v27 = v18 & 0x1F;
    v28 = v18 >> 5;
    if ( v27 > 0x1B )
    {
      v29 = (unsigned int)&v17[-v6];
    }
    else
    {
      v29 = *v10;
      v6 = v27 << 6;
    }
    if ( v27 <= 0x1B )
      ++v10;
    v30 = v28 - 1;
    if ( v27 <= 0x1B )
    {
      v31 = v6 + (v29 >> 2);
      v32 = ~v31;
      v6 = v31 + 1;
      v29 = (unsigned int)&v17[v32];
    }
    v33 = (unsigned int)v17 <= v29;
    if ( a3 > v29 )
      v33 = 1;
    if ( v33 )
      goto LABEL_117;
    if ( v7 - (unsigned int)v17 < v28 + 1 )
      goto LABEL_115;
LABEL_46:
    v34 = v17;
    v35 = (char *)(v29 + 2);
    *v17 = *(_BYTE *)v29;
    v17 += 2;
    v34[1] = *(_BYTE *)(v29 + 1);
    v36 = v34 + 1;
    do
    {
      v37 = *v35++;
      *++v36 = v37;
    }
    while ( v35 != (char *)(v29 + 2 + v30) );
    v23 = &v17[v30];
LABEL_16:
    v11 = *(v10 - 1) & 3;
    if ( (*(v10 - 1) & 3) != 0 )
    {
      a1 = v23;
    }
    else
    {
      v17 = v23;
      a1 = v10;
    }
    if ( (*(v10 - 1) & 3) == 0 )
    {
LABEL_50:
      if ( (unsigned int)(v4 - v10) <= 2 )
        goto LABEL_92;
      v18 = *a1;
      v10 = a1 + 1;
      if ( v18 > 0xF )
        continue;
      if ( !*a1 )
      {
        v54 = a1 + 16843009;
        while ( 1 )
        {
          v56 = *v10++;
          v55 = v56;
          if ( v56 )
            break;
          v18 += 255;
          if ( v54 == v10 || v4 == v10 )
            goto LABEL_92;
        }
        v18 += v55 + 15;
      }
      if ( v7 - (unsigned int)v17 < v18 + 3 )
        goto LABEL_115;
      if ( v4 - v10 < v18 + 6 )
        goto LABEL_92;
      v57 = v18 - 1;
      v16 = v10 + 4;
      *(_DWORD *)v17 = *(_DWORD *)v10;
      v58 = v17 + 4;
      if ( v18 == 1 )
      {
        v17 += 4;
      }
      else if ( v57 <= 3 )
      {
        v74 = v17 + 3;
        v75 = &v10[v18 + 3];
        v76 = v16;
        do
        {
          v77 = *v76++;
          *++v74 = v77;
        }
        while ( v76 != v75 );
        v17 = &v58[v57];
        v16 += v57;
      }
      else
      {
        v59 = (int *)(v10 + 4);
        v60 = (v18 - 5) >> 2;
        v61 = v17 + 4;
        v62 = &v17[4 * v60 + 8];
        do
        {
          v63 = *v59++;
          *(_DWORD *)v61 = v63;
          v61 += 4;
        }
        while ( v61 != v62 );
        v64 = v57 - 4 * v60;
        v65 = 4 * (v60 + 1);
        v66 = v64 - 4;
        v17 = &v58[v65];
        v16 += v65;
        if ( v66 )
        {
          v67 = v17 - 1;
          v68 = &v16[v66];
          do
          {
            v69 = *v16++;
            *++v67 = v69;
          }
          while ( v16 != v68 );
          v17 += v66;
        }
      }
      goto LABEL_9;
    }
LABEL_20:
    if ( v7 - (unsigned int)a1 < v11 )
    {
      v24 = &a1[-a3];
      goto LABEL_114;
    }
    v17 = (unsigned __int8 *)(v11 + 3);
    if ( v4 - v10 < v11 + 3 )
    {
      v25 = &a1[-a3];
      goto LABEL_93;
    }
    if ( v11 == 1 )
      v17 = v23 + 1;
    *v23 = *v10;
    if ( v11 == 1 )
    {
      v26 = v10 + 1;
    }
    else
    {
      if ( v11 == 3 )
        v17 = v23 + 3;
      else
        v17 = v23 + 2;
      v23[1] = v10[1];
      if ( v11 == 3 )
      {
        v26 = v10 + 3;
        v23[2] = v10[2];
      }
      else
      {
        v26 = v10 + 2;
      }
    }
    v10 = v26 + 1;
    v18 = *v26;
  }
  v38 = *v10;
  if ( v18 > 0x1F )
  {
    v30 = v18 & 0x1F;
    if ( (v18 & 0x1F) != 0 )
    {
LABEL_55:
      v39 = v10[1];
      v10 += 2;
      v6 = (v38 << 6) + 1 + (v39 >> 2);
      v29 = (unsigned int)&v17[-v6];
      goto LABEL_56;
    }
    while ( 1 )
    {
      v70 = v10 + 1;
      if ( v38 )
        break;
      v30 += 255;
      ++v10;
      if ( v30 == -256 )
        goto LABEL_115;
      if ( v70 == v4 )
        goto LABEL_92;
      v38 = *v70;
    }
    v30 += v38 + 31;
    if ( (unsigned int)(v4 - v70) > 1 )
    {
      v38 = *++v10;
      goto LABEL_55;
    }
    goto LABEL_92;
  }
  if ( v18 <= 0xF )
  {
    ++v10;
    v78 = (v38 >> 2) + (v18 << 6);
    v79 = ~v78;
    v6 = v78 + 1;
    v80 = &v17[v79];
    v81 = v17 <= v80;
    if ( a3 > (unsigned int)v80 )
      v81 = 1;
    if ( !v81 )
    {
      if ( v7 - (unsigned int)v17 > 1 )
      {
        *v17 = *v80;
        v23 = v17 + 2;
        v17[1] = v80[1];
        goto LABEL_16;
      }
      goto LABEL_115;
    }
    goto LABEL_117;
  }
  v30 = v18 & 7;
  if ( (v18 & 7) == 0 )
  {
    while ( 1 )
    {
      v82 = v10 + 1;
      if ( v38 )
        break;
      v30 += 255;
      ++v10;
      if ( v30 == -256 )
        goto LABEL_115;
      if ( v82 == v4 )
        goto LABEL_92;
      v38 = *v82;
    }
    v30 += v38 + 7;
    if ( (unsigned int)(v4 - v82) <= 1 )
    {
LABEL_92:
      v25 = &v17[-a3];
LABEL_93:
      *a4 = (unsigned int)v25;
      return -4;
    }
    v38 = *++v10;
  }
  v72 = v10[1];
  v10 += 2;
  v73 = &v17[-(v72 >> 2) - (((_WORD)v18 << 11) & 0x4000) + -64 * v38];
  if ( v17 != v73 )
  {
    v29 = (unsigned int)(v73 - 0x4000);
    v6 = (int)&v17[-v29];
LABEL_56:
    v40 = (unsigned int)v17 <= v29;
    if ( a3 > v29 )
      v40 = 1;
    if ( !v40 )
    {
      if ( v7 - (unsigned int)v17 >= v30 + 2 )
      {
        if ( v30 > 5 && (int)&v17[-v29] > 3 )
        {
          v42 = *(_DWORD *)v29;
          v41 = (int *)(v29 + 4);
          v43 = (v30 - 6) >> 2;
          v44 = v30 - 2;
          v45 = v41;
          v46 = &v17[4 * v43 + 8];
          *(_DWORD *)v17 = v42;
          v17 += 4;
          v47 = v17;
          do
          {
            v48 = *v45++;
            *(_DWORD *)v47 = v48;
            v47 += 4;
          }
          while ( v47 != v46 );
          v49 = v43 + 1;
          v50 = v44 - 4 * v43 - 4;
          v23 = &v17[v49 * 4];
          v51 = (char *)&v41[v49];
          if ( v50 )
          {
            v17 = v23 - 1;
            v52 = &v51[v50];
            do
            {
              v53 = *v51++;
              *++v17 = v53;
            }
            while ( v51 != v52 );
            v23 += v50;
          }
          goto LABEL_16;
        }
        goto LABEL_46;
      }
      goto LABEL_115;
    }
    goto LABEL_117;
  }
  *a4 = (unsigned int)&v17[-a3];
  if ( v4 == v10 )
    return 0;
  if ( v4 > v10 )
    return -8;
  return -4;
}
