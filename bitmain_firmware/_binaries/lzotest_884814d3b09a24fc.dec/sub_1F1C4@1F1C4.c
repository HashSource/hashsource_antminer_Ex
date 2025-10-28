int __fastcall sub_1F1C4(unsigned __int8 *src, int a2, int a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r9
  _BYTE *v6; // r8
  int v7; // r3
  unsigned __int8 *v8; // r7
  int v9; // r11
  unsigned int v11; // r4
  int v12; // r2
  unsigned int v13; // r10
  unsigned __int8 *v14; // r5
  unsigned int *v15; // r3
  unsigned int *v16; // r1
  unsigned __int8 *v17; // r12
  unsigned int v18; // t1
  unsigned __int8 *v19; // r2
  unsigned __int8 *v22; // r2
  unsigned int v23; // r2
  unsigned __int8 *v24; // r12
  _BYTE *v25; // r3
  _BYTE *v26; // r8
  _BYTE *v27; // r3
  char v28; // t1
  int v29; // r0
  unsigned __int8 *v30; // lr
  int v31; // r2
  unsigned int v32; // r1
  int v33; // r5
  int v34; // r4
  int v35; // r1
  int v36; // r2
  unsigned __int8 *v37; // r2
  unsigned __int8 *v38; // r3
  int v39; // t1
  int v40; // r3
  _BYTE *v41; // r1
  int v42; // r2
  unsigned int v43; // r1
  int v44; // r4
  int v45; // r0
  unsigned int v46; // r3
  char v47; // r3
  bool v48; // zf
  _BYTE *v49; // r0
  _BYTE *v50; // r3
  unsigned __int8 *v51; // r12
  char v52; // t1
  unsigned __int8 *v53; // r5
  int v54; // r3
  int v55; // r3
  int v56; // [sp+0h] [bp-3Ch]
  char *v57; // [sp+8h] [bp-34h]
  unsigned __int8 *v58; // [sp+Ch] [bp-30h]
  char *v59; // [sp+28h] [bp-14h]
  _BYTE *v60; // [sp+2Ch] [bp-10h]

  v5 = src;
  v6 = (_BYTE *)a3;
  v59 = (char *)&src[a2];
  v7 = src[2] ^ (32 * (src[1] ^ (32 * *src)));
  v60 = (_BYTE *)(a3 + 1);
  v57 = (char *)&src[a2 - 9];
  v8 = src + 1;
  v58 = (unsigned __int8 *)v57;
  v9 = 1;
  *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v7) >> 3) & 0x3FFC)) = src;
  v56 = src[3] ^ (32 * (v7 ^ (*src << 10)));
LABEL_2:
  while ( 2 )
  {
    v11 = 0;
    v12 = 4;
    v13 = 0;
    v14 = v8;
    v15 = (unsigned int *)(a5 + 16 * (((unsigned int)(40799 * v56) >> 5) & 0xFFF));
    while ( 1 )
    {
      v16 = v15;
      v18 = *v15++;
      v17 = (unsigned __int8 *)v18;
      if ( v18 < (unsigned int)src || (unsigned int)(v8 - v17 - 1) > 0x3FFE || v17[v11] != v8[v11] )
        goto LABEL_5;
      if ( *v17 == *v8 && v17[1] == v8[1] && v17[2] == v8[2] )
        break;
LABEL_30:
      v14 = v8;
LABEL_5:
      if ( !--v12 )
      {
        v16 += v9;
        *(v16 - 3) = (unsigned int)v8;
        v9 = ((_BYTE)v9 + 1) & 3;
        v19 = v5;
        if ( v11 > 3 )
        {
          v22 = v8;
          v8 += v11;
          if ( v14 != v5 )
            goto LABEL_16;
          goto LABEL_22;
        }
        if ( v13 <= 0x2000 && v11 == 3 )
        {
          v22 = v8;
          v11 = 3;
          v8 += 3;
          if ( v14 != v5 )
            goto LABEL_16;
          goto LABEL_42;
        }
        if ( v57 <= (char *)++v8 )
          goto LABEL_12;
        v56 = v14[3] ^ (32 * (v56 ^ (*v14 << 10)));
        goto LABEL_2;
      }
    }
    if ( v17[3] != v8[3] )
    {
      v53 = v8 + 4;
      goto LABEL_63;
    }
    if ( v17[4] != v8[4] )
    {
      v53 = v8 + 5;
      goto LABEL_63;
    }
    if ( v17[5] != v8[5] )
    {
      v53 = v8 + 6;
      goto LABEL_63;
    }
    v53 = v8 + 7;
    if ( v17[6] != v8[6] || (v53 = v8 + 8, v17[7] != v8[7]) || (v53 = v8 + 9, v17[8] != v8[8]) )
    {
LABEL_63:
      if ( v11 < v53 - 1 - v8 )
      {
        v11 = v53 - 1 - v8;
        v13 = v8 - v17;
      }
      goto LABEL_30;
    }
    v54 = 4 * v9;
    v9 = ((_BYTE)v9 + 1) & 3;
    v55 = v54 - 16 + 4 * v12;
    if ( v5 == v8 )
      v13 = v8 - v17;
    v22 = v8;
    *(unsigned int *)((char *)v16 + v55) = (unsigned int)v8;
    if ( v5 == v8 )
    {
      v8 += 9;
      goto LABEL_31;
    }
    v14 = v8;
    v13 = v8 - v17;
    v8 += 9;
    v11 = 9;
LABEL_16:
    if ( v58 == v14 )
    {
      v47 = *(v6 - 2);
      ++v5;
      *(++v6 - 3) = v47 & 0x1F;
      v58 += 4;
      *(v6 - 1) = *(v5 - 1);
    }
    else
    {
      v23 = v22 - v5;
      if ( v23 <= 0x1F )
      {
        v48 = v23 == 3;
        if ( v23 <= 3 )
          v48 = v6 == v60;
        if ( v48 )
        {
          LOBYTE(v16) = *(v60 - 2);
          v49 = v6;
        }
        else
        {
          v49 = v6 + 1;
          *v6 = v23;
        }
        if ( v48 )
          *(v60 - 2) = (unsigned __int8)v16 | ((_BYTE)v23 << 6);
        v50 = v49 - 1;
        v51 = &v5[v23];
        do
        {
          v52 = *v5++;
          *++v50 = v52;
        }
        while ( v5 != v51 );
        v6 = &v49[v23];
        v58 = v14 + 4;
      }
      else if ( v23 >= 0x118 )
      {
        v45 = lzo1c_store_run((int)v6, v5);
        v5 = v14;
        v6 = (_BYTE *)v45;
      }
      else
      {
        v24 = &v5[v23];
        v25 = v6;
        *v6 = 0;
        v26 = v6 + 2;
        v25[1] = v23 - 32;
        v27 = v25 + 1;
        do
        {
          v28 = *v5++;
          *++v27 = v28;
        }
        while ( v5 != v24 );
        v6 = &v26[v23];
        v58 = v14 + 4;
      }
    }
LABEL_22:
    if ( v11 > 8 )
    {
LABEL_31:
      v37 = &v8[-v13];
      if ( v59 > (char *)v8 && *v37 == *v8 )
      {
        v38 = v8 + 1;
        do
        {
          v48 = v59 == (char *)v38;
          v8 = v38++;
          if ( v48 )
            break;
          v39 = *++v37;
        }
        while ( v39 == *v8 );
      }
      v40 = v8 - v5;
      v19 = v8;
      v41 = v6 + 1;
      if ( (unsigned int)(v8 - v5) > 0x22 )
      {
        v46 = v40 - 34;
        for ( *v6 = 32; v46 > 0xFF; ++v41 )
        {
          v46 -= 255;
          *v41 = 0;
        }
        *v41++ = v46;
      }
      else
      {
        *v6 = (v40 - 3) | 0x20;
      }
      *v41 = v13 & 0x3F;
      v6 = v41 + 2;
      v41[1] = v13 >> 6;
      if ( v8 < (unsigned __int8 *)v57 )
      {
        v29 = ((_BYTE)v9 + 1) & 3;
        v60 = v41 + 2;
        v30 = v5 + 2;
        v42 = v5[3] ^ (32 * (v56 ^ (*v5 << 10)));
        v43 = (((unsigned int)(40799 * v42) >> 3) & 0x3FFC) + v9;
        v9 = ((_BYTE)v29 + 1) & 3;
        v33 = a5;
        *(_DWORD *)(a5 + 4 * v43) = v5 + 1;
        v44 = v5[1];
        v35 = v5[4];
        v5 = v8;
        v36 = v42 ^ (v44 << 10);
        goto LABEL_27;
      }
      v5 = v8;
    }
    else
    {
      if ( v13 > 0x2000 )
      {
        *v6 = (v11 - 3) | 0x20;
        v6[2] = v13 >> 6;
        v6[1] = v13 & 0x3F;
        v6 += 3;
        v60 = v6;
        goto LABEL_25;
      }
LABEL_42:
      *v6 = (v13 - 1) & 0x1F | (32 * (v11 - 1));
      v6[1] = (v13 - 1) >> 5;
      v6 += 2;
LABEL_25:
      if ( v57 > (char *)v8 )
      {
        v29 = ((_BYTE)v9 + 1) & 3;
        v30 = v5 + 2;
        v31 = v5[3] ^ (32 * (v56 ^ (*v5 << 10)));
        v32 = (((unsigned int)(40799 * v31) >> 3) & 0x3FFC) + v9;
        v9 = ((_BYTE)v29 + 1) & 3;
        v33 = a5;
        *(_DWORD *)(a5 + 4 * v32) = v5 + 1;
        v34 = v5[1];
        v35 = v5[4];
        v5 = v8;
        v36 = v31 ^ (v34 << 10);
LABEL_27:
        *(_DWORD *)(v33 + 4 * (((40799 * (v35 ^ (unsigned int)(32 * v36))) >> 3) & 0x3FFC | v29)) = v30;
        v56 = v8[2] ^ (32 * (v8[1] ^ (32 * *v8)));
        continue;
      }
      v5 = v8;
      v19 = v8;
    }
    break;
  }
LABEL_12:
  if ( v59 != (char *)v19 )
    v6 = (_BYTE *)lzo1c_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
