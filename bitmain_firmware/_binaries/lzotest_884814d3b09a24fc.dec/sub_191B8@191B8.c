int __fastcall sub_191B8(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
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
  int v31; // r0
  int v32; // r2
  unsigned __int8 *v33; // r1
  unsigned int v34; // r3
  unsigned __int8 *v35; // r2
  unsigned __int8 *v36; // r3
  int v37; // t1
  int v38; // r3
  _BYTE *v39; // r1
  unsigned __int8 *v40; // r1
  unsigned int v41; // r3
  char v42; // r3
  unsigned __int8 *v43; // r1
  _BYTE *v44; // r3
  char v45; // t1
  unsigned __int8 *v46; // lr
  int v47; // r3
  int v48; // r0
  unsigned int v49; // [sp+Ch] [bp-30h]
  unsigned __int8 *v50; // [sp+10h] [bp-2Ch]
  unsigned int v51; // [sp+2Ch] [bp-10h]

  v5 = a1;
  v6 = (_BYTE *)a3;
  v7 = a1 + 1;
  v49 = (unsigned int)&a1[a2 - 9];
  v8 = 1;
  v51 = (unsigned int)&a1[a2];
  v50 = (unsigned __int8 *)v49;
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
        if ( v49 <= (unsigned int)++v7 )
          goto LABEL_12;
        v10 = v13[3] ^ (32 * (v10 ^ (*v13 << 10)));
        goto LABEL_2;
      }
    }
    if ( v18[3] != v7[3] )
    {
      v46 = v7 + 4;
      goto LABEL_54;
    }
    if ( v18[4] != v7[4] )
    {
      v46 = v7 + 5;
      goto LABEL_54;
    }
    if ( v18[5] != v7[5] )
    {
      v46 = v7 + 6;
      goto LABEL_54;
    }
    if ( v18[6] != v7[6] )
    {
      v46 = v7 + 7;
      goto LABEL_54;
    }
    v46 = v7 + 8;
    if ( v18[7] != v7[7] || (v46 = v7 + 9, v18[8] != v7[8]) )
    {
LABEL_54:
      if ( v11 < v46 - 1 - v7 )
      {
        v11 = v46 - 1 - v7;
        v12 = v7 - v18;
      }
      goto LABEL_28;
    }
    v24 = v7;
    v47 = 4 * v8 - 8;
    v8 ^= 1u;
    v48 = v47 + 4 * v14;
    if ( v5 == v7 )
      v12 = v20;
    *(_DWORD *)&v17[v48] = v7;
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
    if ( v50 == v13 )
    {
      v42 = *(v6 - 2);
      ++v5;
      *(++v6 - 3) = v42 & 0x1F;
      v50 += 4;
      *(v6 - 1) = *(v5 - 1);
    }
    else
    {
      v25 = v24 - v5;
      if ( v25 <= 0x1F )
      {
        v43 = v5 - 1;
        v44 = v6;
        *v6 = v25;
        do
        {
          v45 = *++v43;
          *++v44 = v45;
        }
        while ( &v6[v25] != v44 );
        v5 += v25;
        v6 += v25 + 1;
        v50 = v13 + 4;
      }
      else if ( v25 >= 0x118 )
      {
        v40 = v5;
        v5 = v13;
        v6 = (_BYTE *)lzo1b_store_run((int)v6, v40);
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
        v50 = v13 + 4;
      }
    }
LABEL_22:
    if ( v11 > 8 )
    {
LABEL_29:
      v35 = &v7[-v12];
      if ( v51 > (unsigned int)v7 && *v35 == *v7 )
      {
        v36 = v7 + 1;
        do
        {
          v22 = v51 == (_DWORD)v36;
          v7 = v36++;
          if ( v22 )
            break;
          v37 = *++v35;
        }
        while ( v37 == *v7 );
      }
      v38 = v7 - v5;
      v21 = v7;
      v39 = v6 + 1;
      if ( (unsigned int)(v7 - v5) > 0x22 )
      {
        v41 = v38 - 34;
        for ( *v6 = 32; v41 > 0xFF; ++v39 )
        {
          v41 -= 255;
          *v39 = 0;
        }
        *v39++ = v41;
      }
      else
      {
        *v6 = (v38 - 3) | 0x20;
      }
      *v39 = v12;
      v6 = v39 + 2;
      v39[1] = BYTE1(v12);
      if ( (unsigned int)v7 < v49 )
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
      if ( v49 > (unsigned int)v7 )
      {
LABEL_26:
        v31 = *v5;
        v32 = v5[3];
        v33 = v5 + 1;
        v5 = v7;
        v34 = (((40799 * (v32 ^ (32 * (v10 ^ (unsigned int)(v31 << 10))))) >> 4) & 0x3FFE) + v8;
        v8 ^= 1u;
        *(_DWORD *)&s[4 * v34] = v33;
        v10 = v7[2] ^ (32 * (v7[1] ^ (32 * *v7)));
        continue;
      }
      v5 = v7;
      v21 = v7;
    }
    break;
  }
LABEL_12:
  if ( (unsigned __int8 *)v51 != v21 )
    v6 = (_BYTE *)lzo1b_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
