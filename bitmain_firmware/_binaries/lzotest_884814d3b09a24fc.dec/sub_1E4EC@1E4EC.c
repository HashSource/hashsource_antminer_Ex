int __fastcall sub_1E4EC(unsigned __int8 *src, int a2, int a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r9
  _BYTE *v6; // r8
  unsigned __int8 *v7; // r11
  int v8; // r3
  int v9; // r7
  unsigned int v10; // r4
  unsigned __int8 *v11; // r5
  unsigned int v12; // r10
  int v13; // r0
  unsigned int *v14; // r3
  unsigned int *v15; // r12
  unsigned int *v16; // r1
  unsigned __int8 *v17; // r2
  unsigned int v18; // t1
  unsigned int v19; // r6
  unsigned __int8 *v20; // r2
  unsigned __int8 *v23; // r2
  char v24; // r3
  unsigned int v25; // r2
  unsigned __int8 *v26; // r12
  _BYTE *v27; // r3
  _BYTE *v28; // r8
  _BYTE *v29; // r3
  char v30; // t1
  int v31; // r1
  unsigned __int8 *v32; // r0
  int v33; // r2
  unsigned int v34; // r12
  int v35; // r4
  int v36; // lr
  int v37; // r12
  int v38; // r2
  unsigned __int8 *v39; // r2
  unsigned __int8 *v40; // r3
  int v41; // t1
  int v42; // r3
  _BYTE *v43; // r1
  int v44; // r2
  unsigned int v45; // r12
  int v46; // lr
  int v47; // r0
  unsigned int v48; // r3
  char v49; // r3
  bool v50; // zf
  _BYTE *v51; // r0
  _BYTE *v52; // r3
  unsigned __int8 *v53; // r12
  char v54; // t1
  unsigned __int8 *v55; // r5
  int v56; // [sp+4h] [bp-40h]
  int v58; // [sp+Ch] [bp-38h]
  char *v59; // [sp+10h] [bp-34h]
  unsigned __int8 *v60; // [sp+14h] [bp-30h]
  char *v61; // [sp+30h] [bp-14h]
  _BYTE *v62; // [sp+34h] [bp-10h]

  v5 = src;
  v6 = (_BYTE *)a3;
  v7 = src + 1;
  v61 = (char *)&src[a2];
  v8 = src[2] ^ (32 * (src[1] ^ (32 * *src)));
  v62 = (_BYTE *)(a3 + 1);
  v9 = 1;
  v59 = (char *)&src[a2 - 9];
  v60 = (unsigned __int8 *)v59;
  *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v8) >> 4) & 0x3FFE)) = src;
  v56 = src[3] ^ (32 * (v8 ^ (*src << 10)));
LABEL_2:
  while ( 2 )
  {
    v10 = 0;
    v11 = v7;
    v12 = 0;
    v13 = 2;
    v58 = v9;
    v14 = (unsigned int *)(a5 + 8 * (((unsigned int)(40799 * v56) >> 5) & 0x1FFF));
    v15 = v14 + 2;
    while ( 1 )
    {
      v16 = v14;
      v18 = *v14++;
      v17 = (unsigned __int8 *)v18;
      if ( v18 < (unsigned int)src )
        goto LABEL_5;
      v19 = v7 - v17;
      if ( (unsigned int)(v7 - v17 - 1) > 0x3FFE || v17[v10] != v7[v10] )
        goto LABEL_5;
      if ( *v17 == *v7 && v17[1] == v7[1] && v17[2] == v7[2] )
        break;
LABEL_30:
      v11 = v7;
LABEL_5:
      v13 = 1;
      if ( v15 == v14 )
      {
        v20 = v5;
        v9 ^= 1u;
        v16[v58 - 1] = (unsigned int)v7;
        if ( v10 > 3 )
        {
          v23 = v7;
          v7 += v10;
          if ( v11 != v5 )
            goto LABEL_16;
          goto LABEL_22;
        }
        if ( v12 <= 0x2000 && v10 == 3 )
        {
          v23 = v7;
          v10 = 3;
          v7 += 3;
          if ( v11 != v5 )
            goto LABEL_16;
          goto LABEL_42;
        }
        if ( v59 <= (char *)++v7 )
          goto LABEL_12;
        v56 = v11[3] ^ (32 * (v56 ^ (*v11 << 10)));
        goto LABEL_2;
      }
    }
    if ( v17[3] != v7[3] )
    {
      v55 = v7 + 4;
      goto LABEL_63;
    }
    if ( v17[4] != v7[4] )
    {
      v55 = v7 + 5;
      goto LABEL_63;
    }
    if ( v17[5] != v7[5] )
    {
      v55 = v7 + 6;
      goto LABEL_63;
    }
    v55 = v7 + 7;
    if ( v17[6] != v7[6] || (v55 = v7 + 8, v17[7] != v7[7]) || (v55 = v7 + 9, v17[8] != v7[8]) )
    {
LABEL_63:
      if ( v10 < v55 - 1 - v7 )
      {
        v10 = v55 - 1 - v7;
        v12 = v7 - v17;
      }
      goto LABEL_30;
    }
    v23 = v7;
    if ( v7 == v5 )
      v12 = v19;
    v9 ^= 1u;
    v16[v58 - 2 + v13] = (unsigned int)v7;
    if ( v7 == v5 )
    {
      v7 += 9;
      goto LABEL_31;
    }
    v11 = v7;
    v12 = v19;
    v7 += 9;
    v10 = 9;
LABEL_16:
    v24 = (char)v60;
    if ( v60 == v11 )
    {
      v49 = *(v6 - 2);
      ++v5;
      *(++v6 - 3) = v49 & 0x1F;
      v60 += 4;
      *(v6 - 1) = *(v5 - 1);
    }
    else
    {
      v25 = v23 - v5;
      if ( v25 <= 0x1F )
      {
        v50 = v25 == 3;
        if ( v25 <= 3 )
          v50 = v6 == v62;
        if ( v50 )
        {
          v24 = *(v62 - 2);
          v51 = v6;
        }
        else
        {
          v51 = v6 + 1;
          *v6 = v25;
        }
        if ( v50 )
          *(v62 - 2) = v24 | ((_BYTE)v25 << 6);
        v52 = v51 - 1;
        v53 = &v5[v25];
        do
        {
          v54 = *v5++;
          *++v52 = v54;
        }
        while ( v5 != v53 );
        v6 = &v51[v25];
        v60 = v11 + 4;
      }
      else if ( v25 >= 0x118 )
      {
        v47 = lzo1c_store_run((int)v6, v5);
        v5 = v11;
        v6 = (_BYTE *)v47;
      }
      else
      {
        v26 = &v5[v25];
        v27 = v6;
        *v6 = 0;
        v28 = v6 + 2;
        v27[1] = v25 - 32;
        v29 = v27 + 1;
        do
        {
          v30 = *v5++;
          *++v29 = v30;
        }
        while ( v5 != v26 );
        v6 = &v28[v25];
        v60 = v11 + 4;
      }
    }
LABEL_22:
    if ( v10 > 8 )
    {
LABEL_31:
      v39 = &v7[-v12];
      if ( v61 > (char *)v7 && *v39 == *v7 )
      {
        v40 = v7 + 1;
        do
        {
          v50 = v61 == (char *)v40;
          v7 = v40++;
          if ( v50 )
            break;
          v41 = *++v39;
        }
        while ( v41 == *v7 );
      }
      v42 = v7 - v5;
      v20 = v7;
      v43 = v6 + 1;
      if ( (unsigned int)(v7 - v5) > 0x22 )
      {
        v48 = v42 - 34;
        for ( *v6 = 32; v48 > 0xFF; ++v43 )
        {
          v48 -= 255;
          *v43 = 0;
        }
        *v43++ = v48;
      }
      else
      {
        *v6 = (v42 - 3) | 0x20;
      }
      *v43 = v12 & 0x3F;
      v6 = v43 + 2;
      v43[1] = v12 >> 6;
      if ( v7 < (unsigned __int8 *)v59 )
      {
        v31 = v9 ^ 1;
        v62 = v6;
        v32 = v5 + 2;
        v44 = v5[3] ^ (32 * (v56 ^ (*v5 << 10)));
        v45 = (((unsigned int)(40799 * v44) >> 4) & 0x3FFE) + v9;
        v9 = (((unsigned __int8)v9 ^ 1) + 1) & 1;
        v35 = a5;
        *(_DWORD *)(a5 + 4 * v45) = v5 + 1;
        v46 = v5[1];
        v37 = v5[4];
        v5 = v7;
        v38 = v44 ^ (v46 << 10);
        goto LABEL_27;
      }
      v5 = v7;
    }
    else
    {
      if ( v12 > 0x2000 )
      {
        *v6 = (v10 - 3) | 0x20;
        v6[2] = v12 >> 6;
        v6[1] = v12 & 0x3F;
        v6 += 3;
        v62 = v6;
        goto LABEL_25;
      }
LABEL_42:
      *v6 = (v12 - 1) & 0x1F | (32 * (v10 - 1));
      v6[1] = (v12 - 1) >> 5;
      v6 += 2;
LABEL_25:
      if ( v59 > (char *)v7 )
      {
        v31 = v9 ^ 1;
        v32 = v5 + 2;
        v33 = v5[3] ^ (32 * (v56 ^ (*v5 << 10)));
        v34 = (((unsigned int)(40799 * v33) >> 4) & 0x3FFE) + v9;
        v9 = (((unsigned __int8)v9 ^ 1) + 1) & 1;
        v35 = a5;
        *(_DWORD *)(a5 + 4 * v34) = v5 + 1;
        v36 = v5[1];
        v37 = v5[4];
        v5 = v7;
        v38 = v33 ^ (v36 << 10);
LABEL_27:
        *(_DWORD *)(v35 + 4 * (((40799 * (v37 ^ (unsigned int)(32 * v38))) >> 4) & 0x3FFE | v31)) = v32;
        v56 = v7[2] ^ (32 * (v7[1] ^ (32 * *v7)));
        continue;
      }
      v5 = v7;
      v20 = v7;
    }
    break;
  }
LABEL_12:
  if ( v61 != (char *)v20 )
    v6 = (_BYTE *)lzo1c_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
