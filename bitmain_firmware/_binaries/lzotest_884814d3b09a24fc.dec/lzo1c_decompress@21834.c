int __fastcall lzo1c_decompress(unsigned __int8 *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r12
  unsigned __int8 *v5; // r5
  char *v6; // r6
  unsigned int v7; // lr
  unsigned int v8; // lr
  int *v9; // r8
  unsigned int v10; // r5
  _DWORD *v11; // r9
  int v12; // t1
  _DWORD *v13; // r4
  int v14; // lr
  unsigned __int8 *v15; // r5
  int v16; // r12
  unsigned __int8 *v17; // r7
  char v18; // t1
  int v19; // r4
  char v20; // t1
  unsigned __int8 *v21; // r12
  unsigned __int8 *v22; // r6
  int v23; // lr
  char v24; // r5
  int v25; // lr
  unsigned int v26; // t1
  unsigned int v27; // r7
  int v28; // r4
  int v29; // r4
  _BYTE *v30; // r8
  int *v31; // r8
  int v32; // t1
  unsigned int v33; // lr
  unsigned int v34; // r4
  _DWORD *v35; // r11
  _DWORD *v36; // r12
  int *v37; // r9
  _DWORD *v38; // r7
  int v39; // t1
  unsigned int v40; // r4
  int v41; // lr
  unsigned int v42; // r4
  char *v43; // r8
  int v44; // lr
  char *v45; // r9
  char v46; // t1
  char *v47; // lr
  int v48; // r4
  char v49; // t1
  int v50; // r4
  int v51; // lr
  char v52; // r8
  int v53; // r4
  char *v54; // r7
  _DWORD *v55; // r6
  int v56; // r12
  int v57; // r6
  char v58; // t1
  int v59; // t1
  unsigned int v60; // lr
  int v61; // r4
  int v62; // lr
  unsigned __int8 *v63; // r0
  char *v65; // lr
  int v66; // r7

  v4 = a3;
  v5 = a1;
LABEL_2:
  while ( 1 )
  {
    v6 = (char *)(v5 + 1);
    v7 = *v5;
    if ( v7 > 0x1F )
      break;
    if ( *v5 )
    {
      if ( v7 <= 3 )
        goto LABEL_15;
LABEL_7:
      v9 = (int *)v6;
      v10 = ((v7 - 4) & 0xFFFFFFFC) + 4;
      v11 = (_DWORD *)((char *)v4 + v10);
      while ( 1 )
      {
        v12 = *v9++;
        *v4 = v12;
        v13 = v4 + 1;
        if ( v4 + 1 == v11 )
          break;
        ++v4;
      }
      v14 = v7 & 3;
      v15 = (unsigned __int8 *)&v6[v10];
      if ( v14 )
      {
        v16 = (int)v4 + 3;
        v17 = &v15[v14];
        do
        {
          v18 = *v15++;
          *(_BYTE *)++v16 = v18;
        }
        while ( v15 != v17 );
        v13 = (_DWORD *)((char *)v13 + v14);
      }
      goto LABEL_18;
    }
    v8 = v5[1];
    v6 = (char *)(v5 + 2);
    if ( v8 <= 0xF7 )
    {
      v7 = v8 + 32;
      goto LABEL_7;
    }
    v60 = v8 - 248;
    if ( v60 )
    {
      v61 = 256;
      do
      {
        --v60;
        v61 *= 2;
      }
      while ( v60 );
    }
    else
    {
      v61 = 280;
    }
    v5 += 2;
    do
    {
      v62 = *(_DWORD *)v5;
      v61 -= 8;
      v5 += 8;
      v4 += 2;
      *(v4 - 2) = v62;
      *(v4 - 1) = *((_DWORD *)v5 - 1);
    }
    while ( v61 );
  }
  while ( 1 )
  {
    v27 = v7 & 0x1F;
    v28 = (unsigned __int8)*v6;
    if ( v7 > 0x3F )
    {
      v50 = ~(v27 | (32 * v28));
      v51 = (v7 >> 5) - 1;
      v52 = *((_BYTE *)v4 + v50);
      v53 = (int)v4 + v50;
      v54 = (char *)(v53 + 2);
      v5 = (unsigned __int8 *)(v6 + 1);
      v55 = v4;
      *(_BYTE *)v4 = v52;
      v56 = (int)v4 + 2;
      *((_BYTE *)v55 + 1) = *(_BYTE *)(v53 + 1);
      v57 = (int)v55 + 1;
      do
      {
        v58 = *v54++;
        *(_BYTE *)++v57 = v58;
      }
      while ( v54 != (char *)(v53 + 2 + v51) );
      v4 = (_DWORD *)(v56 + v51);
      goto LABEL_2;
    }
    if ( (v7 & 0x1F) == 0 )
    {
      if ( *v6 )
      {
        v65 = v6;
        v66 = 31;
      }
      else
      {
        while ( 1 )
        {
          v59 = (unsigned __int8)*++v6;
          v28 = v59;
          if ( v59 )
            break;
          v27 += 255;
        }
        v65 = v6;
        v66 = v27 + 286;
      }
      v27 = v28 + v66;
      ++v6;
      LOBYTE(v28) = v65[1];
    }
    v5 = (unsigned __int8 *)(v6 + 2);
    v29 = -((v28 & 0x3F) + ((unsigned __int8)v6[1] << 6));
    v30 = (char *)v4 + v29;
    if ( v4 == (_DWORD *)((char *)v4 + v29) )
      break;
    if ( v27 <= 4 || v29 >= -3 )
    {
      v47 = v30 + 3;
      *(_BYTE *)v4 = *v30;
      *((_BYTE *)v4 + 1) = v30[1];
      *((_BYTE *)v4 + 2) = v30[2];
      v48 = (int)v4 + 2;
      do
      {
        v49 = *v47++;
        *(_BYTE *)++v48 = v49;
      }
      while ( v47 != &v30[v27 + 3] );
      v4 = (_DWORD *)((char *)v4 + v27 + 3);
    }
    else
    {
      v32 = *(_DWORD *)v30;
      v31 = (int *)(v30 + 4);
      v33 = (v27 - 5) >> 2;
      v34 = v27 - 1;
      v35 = &v4[v33 + 2];
      *v4 = v32;
      v36 = v4 + 1;
      v37 = v31;
      v38 = v36;
      do
      {
        v39 = *v37++;
        *v38++ = v39;
      }
      while ( v38 != v35 );
      v40 = v34 - 4 * v33;
      v41 = v33 + 1;
      v42 = v40 - 4;
      v4 = &v36[v41];
      v43 = (char *)&v31[v41];
      if ( v42 )
      {
        v44 = (int)v4 - 1;
        v45 = &v43[v42];
        do
        {
          v46 = *v43++;
          *(_BYTE *)++v44 = v46;
        }
        while ( v43 != v45 );
        v4 = (_DWORD *)((char *)v4 + v42);
      }
    }
    v7 = (unsigned __int8)*v6 >> 6;
    if ( !v7 )
      goto LABEL_2;
    v6 += 2;
LABEL_15:
    v19 = (int)v4 - 1;
    v15 = (unsigned __int8 *)&v6[v7];
    do
    {
      v20 = *v6++;
      *(_BYTE *)++v19 = v20;
    }
    while ( v6 != (char *)v15 );
    v13 = (_DWORD *)((char *)v4 + v7);
LABEL_18:
    v7 = *v15;
    if ( v7 <= 0x1F )
    {
      v21 = v15;
      do
      {
        v22 = v21;
        v23 = ~(v7 | (32 * v21[1]));
        v24 = *((_BYTE *)v13 + v23);
        v25 = (int)v13++ + v23;
        *((_BYTE *)v13 - 4) = v24;
        *((_BYTE *)v13 - 3) = *(_BYTE *)(v25 + 1);
        *((_BYTE *)v13 - 2) = *(_BYTE *)(v25 + 2);
        *((_BYTE *)v13 - 1) = v21[2];
        v26 = v21[3];
        v21 += 3;
        v7 = v26;
      }
      while ( v26 <= 0x1F );
      v6 = (char *)(v22 + 4);
      v4 = v13;
    }
    else
    {
      v6 = (char *)(v15 + 1);
      v4 = v13;
    }
  }
  v63 = &a1[a2];
  *a4 = (char *)v4 - (char *)a3;
  if ( v63 == v5 )
    return 0;
  if ( v63 > v5 )
    return -8;
  return -4;
}
