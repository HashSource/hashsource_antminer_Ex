int __fastcall sub_19720(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r9
  _BYTE *v6; // r11
  unsigned __int8 *v7; // r8
  int v8; // r10
  int v9; // r0
  int v10; // r7
  unsigned int v11; // r4
  unsigned int v12; // r6
  unsigned __int8 *v13; // lr
  int v14; // r0
  char *v15; // r3
  char *v16; // r12
  char *v17; // r1
  unsigned __int8 *v18; // r2
  unsigned __int8 *v19; // t1
  unsigned int v20; // r5
  unsigned __int8 *v21; // r2
  bool v22; // zf
  unsigned __int8 *v24; // r2
  unsigned int v25; // r2
  unsigned __int8 *v26; // r12
  _BYTE *v27; // r3
  _BYTE *v28; // r11
  _BYTE *v29; // r3
  char v30; // t1
  int v31; // r1
  unsigned __int8 *v32; // r0
  int v33; // r2
  unsigned int v34; // r12
  int v35; // lr
  int v36; // r12
  unsigned __int8 *v37; // r2
  unsigned __int8 *v38; // r3
  int v39; // t1
  int v40; // r3
  _BYTE *v41; // r1
  unsigned __int8 *v42; // r1
  unsigned int v43; // r3
  char v44; // r3
  unsigned __int8 *v45; // r1
  _BYTE *v46; // r3
  char v47; // t1
  unsigned __int8 *v48; // lr
  int v49; // r3
  int v50; // r0
  unsigned int v51; // [sp+Ch] [bp-30h]
  unsigned __int8 *v52; // [sp+10h] [bp-2Ch]
  unsigned int v53; // [sp+2Ch] [bp-10h]

  v5 = a1;
  v6 = (_BYTE *)a3;
  v7 = a1 + 1;
  v51 = (unsigned int)&a1[a2 - 9];
  v8 = 1;
  v53 = (unsigned int)&a1[a2];
  v52 = (unsigned __int8 *)v51;
  memset(s, 0, 0x10000u);
  v9 = v5[2] ^ (32 * (v5[1] ^ (32 * *v5)));
  *(_DWORD *)&s[4 * (((unsigned int)(40799 * v9) >> 4) & 0x3FFE)] = v5;
  v10 = v5[3] ^ (32 * (v9 ^ (*v5 << 10)));
LABEL_2:
  while ( 2 )
  {
    v11 = 0;
    v12 = 0;
    v13 = v7;
    v14 = 2;
    v15 = &s[8 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)];
    v16 = v15 + 8;
    while ( 1 )
    {
      v17 = v15;
      v19 = *(unsigned __int8 **)v15;
      v15 += 4;
      v18 = v19;
      if ( !v19 )
        goto LABEL_6;
      v20 = v7 - v18;
      if ( (unsigned int)(v7 - v18) >= 0x10000 || v18[v11] != v7[v11] )
        goto LABEL_6;
      if ( *v18 == *v7 && v18[1] == v7[1] && v18[2] == v7[2] )
        break;
LABEL_28:
      v13 = v7;
LABEL_6:
      v14 = 1;
      if ( v16 == v15 )
      {
        *(_DWORD *)&v17[4 * v8 - 4] = v7;
        v8 ^= 1u;
        v21 = v5;
        if ( v11 > 3 )
        {
          v24 = v7;
          v7 += v11;
          if ( v13 != v5 )
            goto LABEL_16;
          goto LABEL_22;
        }
        v22 = v12 == 0x2000;
        if ( v12 <= 0x2000 )
          v22 = v11 == 3;
        if ( v22 )
        {
          v24 = v7;
          v11 = 3;
          v7 += 3;
          if ( v13 != v5 )
            goto LABEL_16;
          goto LABEL_40;
        }
        if ( v51 <= (unsigned int)++v7 )
          goto LABEL_12;
        v10 = v13[3] ^ (32 * (v10 ^ (*v13 << 10)));
        goto LABEL_2;
      }
    }
    if ( v18[3] != v7[3] )
    {
      v48 = v7 + 4;
      goto LABEL_54;
    }
    if ( v18[4] != v7[4] )
    {
      v48 = v7 + 5;
      goto LABEL_54;
    }
    if ( v18[5] != v7[5] )
    {
      v48 = v7 + 6;
      goto LABEL_54;
    }
    if ( v18[6] != v7[6] )
    {
      v48 = v7 + 7;
      goto LABEL_54;
    }
    v48 = v7 + 8;
    if ( v18[7] != v7[7] || (v48 = v7 + 9, v18[8] != v7[8]) )
    {
LABEL_54:
      if ( v11 < v48 - 1 - v7 )
      {
        v11 = v48 - 1 - v7;
        v12 = v7 - v18;
      }
      goto LABEL_28;
    }
    v24 = v7;
    v49 = 4 * v8 - 8;
    v8 ^= 1u;
    v50 = v49 + 4 * v14;
    if ( v5 == v7 )
      v12 = v20;
    *(_DWORD *)&v17[v50] = v7;
    if ( v5 == v7 )
    {
      v7 += 9;
      goto LABEL_29;
    }
    v13 = v7;
    v12 = v20;
    v7 += 9;
    v11 = 9;
LABEL_16:
    if ( v52 == v13 )
    {
      v44 = *(v6 - 2);
      ++v5;
      *(++v6 - 3) = v44 & 0x1F;
      v52 += 4;
      *(v6 - 1) = *(v5 - 1);
    }
    else
    {
      v25 = v24 - v5;
      if ( v25 <= 0x1F )
      {
        v45 = v5 - 1;
        v46 = v6;
        *v6 = v25;
        do
        {
          v47 = *++v45;
          *++v46 = v47;
        }
        while ( &v6[v25] != v46 );
        v5 += v25;
        v6 += v25 + 1;
        v52 = v13 + 4;
      }
      else if ( v25 >= 0x118 )
      {
        v42 = v5;
        v5 = v13;
        v6 = (_BYTE *)lzo1b_store_run((int)v6, v42);
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
        v52 = v13 + 4;
      }
    }
LABEL_22:
    if ( v11 > 8 )
    {
LABEL_29:
      v37 = &v7[-v12];
      if ( v53 > (unsigned int)v7 && *v37 == *v7 )
      {
        v38 = v7 + 1;
        do
        {
          v22 = v53 == (_DWORD)v38;
          v7 = v38++;
          if ( v22 )
            break;
          v39 = *++v37;
        }
        while ( v39 == *v7 );
      }
      v40 = v7 - v5;
      v21 = v7;
      v41 = v6 + 1;
      if ( (unsigned int)(v7 - v5) > 0x22 )
      {
        v43 = v40 - 34;
        for ( *v6 = 32; v43 > 0xFF; ++v41 )
        {
          v43 -= 255;
          *v41 = 0;
        }
        *v41++ = v43;
      }
      else
      {
        *v6 = (v40 - 3) | 0x20;
      }
      *v41 = v12;
      v6 = v41 + 2;
      v41[1] = BYTE1(v12);
      if ( (unsigned int)v7 < v51 )
        goto LABEL_26;
      v5 = v7;
    }
    else
    {
      if ( v12 > 0x2000 )
      {
        v6[1] = v12;
        *v6 = (v11 - 3) | 0x20;
        v6 += 3;
        *(v6 - 1) = BYTE1(v12);
        goto LABEL_25;
      }
LABEL_40:
      *v6 = (v12 - 1) & 0x1F | (32 * (v11 - 1));
      v6[1] = (v12 - 1) >> 5;
      v6 += 2;
LABEL_25:
      if ( v51 > (unsigned int)v7 )
      {
LABEL_26:
        v31 = v8 ^ 1;
        v32 = v5 + 2;
        v33 = v5[3] ^ (32 * (v10 ^ (*v5 << 10)));
        v34 = (((unsigned int)(40799 * v33) >> 4) & 0x3FFE) + v8;
        v8 = (((unsigned __int8)v8 ^ 1) + 1) & 1;
        *(_DWORD *)&s[4 * v34] = v5 + 1;
        v35 = v5[1];
        v36 = v5[4];
        v5 = v7;
        *(_DWORD *)&s[4 * (((40799 * (v36 ^ (32 * (v33 ^ (unsigned int)(v35 << 10))))) >> 4) & 0x3FFE | v31)] = v32;
        v10 = v7[2] ^ (32 * (v7[1] ^ (32 * *v7)));
        continue;
      }
      v5 = v7;
      v21 = v7;
    }
    break;
  }
LABEL_12:
  if ( (unsigned __int8 *)v53 != v21 )
    v6 = (_BYTE *)lzo1b_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
