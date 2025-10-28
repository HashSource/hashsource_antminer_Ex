int __fastcall sub_1A338(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r11
  _BYTE *v6; // r10
  unsigned __int8 *v7; // r9
  int v8; // r8
  int v9; // r3
  unsigned int v10; // r4
  int v11; // r2
  unsigned int v12; // r5
  unsigned __int8 *v13; // r6
  char *v14; // r3
  char *v15; // r12
  unsigned __int8 *v16; // r1
  unsigned __int8 *v17; // t1
  unsigned __int8 *v18; // r2
  bool v19; // zf
  unsigned __int8 *v21; // r2
  unsigned int v22; // r2
  unsigned __int8 *v23; // r12
  _BYTE *v24; // r3
  _BYTE *v25; // r10
  _BYTE *v26; // r3
  char v27; // t1
  int v28; // r1
  unsigned __int8 *v29; // r0
  int v30; // r2
  unsigned int v31; // r3
  int v32; // r12
  int v33; // r3
  unsigned __int8 *v34; // r2
  unsigned __int8 *v35; // r3
  int v36; // t1
  int v37; // r3
  _BYTE *v38; // r1
  unsigned int v39; // r5
  unsigned __int8 *v40; // r0
  int v41; // r0
  unsigned int v42; // r3
  char v43; // r3
  unsigned __int8 *v44; // r1
  _BYTE *v45; // r3
  char v46; // t1
  int v47; // r3
  int v48; // r3
  int v49; // [sp+0h] [bp-34h]
  unsigned int v50; // [sp+4h] [bp-30h]
  unsigned __int8 *v51; // [sp+8h] [bp-2Ch]
  unsigned int v52; // [sp+24h] [bp-10h]

  v5 = a1;
  v6 = (_BYTE *)a3;
  v7 = a1 + 1;
  v50 = (unsigned int)&a1[a2 - 9];
  v8 = 1;
  v52 = (unsigned int)&a1[a2];
  v51 = (unsigned __int8 *)v50;
  memset(s, 0, 0x10000u);
  v9 = v5[2] ^ (32 * (v5[1] ^ (32 * *v5)));
  *(_DWORD *)&s[4 * (((unsigned int)(40799 * v9) >> 3) & 0x3FFC)] = v5;
  v49 = v5[3] ^ (32 * (v9 ^ (*v5 << 10)));
LABEL_2:
  while ( 2 )
  {
    v10 = 0;
    v11 = 4;
    v12 = 0;
    v13 = v7;
    v14 = &s[16 * (((unsigned int)(40799 * v49) >> 5) & 0xFFF)];
    while ( 1 )
    {
      v15 = v14;
      v17 = *(unsigned __int8 **)v14;
      v14 += 4;
      v16 = v17;
      if ( !v17 || (unsigned int)(v7 - v16) >= 0x10000 || v16[v10] != v7[v10] )
        goto LABEL_6;
      if ( *v16 == *v7 && v16[1] == v7[1] && v16[2] == v7[2] )
        break;
LABEL_28:
      v13 = v7;
LABEL_6:
      if ( !--v11 )
      {
        *(_DWORD *)&v15[4 * v8 - 12] = v7;
        v8 = ((_BYTE)v8 + 1) & 3;
        v18 = v5;
        if ( v10 > 3 )
        {
          v21 = v7;
          v7 += v10;
          if ( v13 != v5 )
            goto LABEL_16;
          goto LABEL_22;
        }
        v19 = v12 == 0x2000;
        if ( v12 <= 0x2000 )
          v19 = v10 == 3;
        if ( v19 )
        {
          v21 = v7;
          v10 = 3;
          v7 += 3;
          if ( v13 != v5 )
            goto LABEL_16;
          goto LABEL_40;
        }
        if ( v50 <= (unsigned int)++v7 )
          goto LABEL_12;
        v49 = v13[3] ^ (32 * (v49 ^ (*v13 << 10)));
        goto LABEL_2;
      }
    }
    if ( v16[3] != v7[3] )
    {
      v40 = v7 + 4;
      goto LABEL_45;
    }
    if ( v16[4] != v7[4] )
    {
      v40 = v7 + 5;
      goto LABEL_45;
    }
    if ( v16[5] != v7[5] )
    {
      v40 = v7 + 6;
      goto LABEL_45;
    }
    if ( v16[6] != v7[6] )
    {
      v40 = v7 + 7;
      goto LABEL_45;
    }
    v40 = v7 + 8;
    if ( v16[7] != v7[7] || (v40 = v7 + 9, v16[8] != v7[8]) )
    {
LABEL_45:
      if ( v10 < v40 - 1 - v7 )
      {
        v10 = v40 - 1 - v7;
        v12 = v7 - v16;
      }
      goto LABEL_28;
    }
    v47 = 4 * v8;
    v8 = ((_BYTE)v8 + 1) & 3;
    v48 = v47 - 16 + 4 * v11;
    if ( v7 == v5 )
      v12 = v7 - v16;
    v21 = v7;
    *(_DWORD *)&v15[v48] = v7;
    if ( v7 == v5 )
    {
      v7 += 9;
      goto LABEL_29;
    }
    v13 = v7;
    v12 = v7 - v16;
    v7 += 9;
    v10 = 9;
LABEL_16:
    if ( v51 == v13 )
    {
      v43 = *(v6 - 2);
      ++v5;
      *(++v6 - 3) = v43 & 0x1F;
      v51 += 4;
      *(v6 - 1) = *(v5 - 1);
    }
    else
    {
      v22 = v21 - v5;
      if ( v22 <= 0x1F )
      {
        v44 = v5 - 1;
        v45 = v6;
        *v6 = v22;
        do
        {
          v46 = *++v44;
          *++v45 = v46;
        }
        while ( &v6[v22] != v45 );
        v5 += v22;
        v6 += v22 + 1;
        v51 = v13 + 4;
      }
      else if ( v22 >= 0x118 )
      {
        v41 = lzo1b_store_run((int)v6, v5);
        v5 = v13;
        v6 = (_BYTE *)v41;
      }
      else
      {
        v23 = &v5[v22];
        v24 = v6;
        *v6 = 0;
        v25 = v6 + 2;
        v24[1] = v22 - 32;
        v26 = v24 + 1;
        do
        {
          v27 = *v5++;
          *++v26 = v27;
        }
        while ( v5 != v23 );
        v6 = &v25[v22];
        v51 = v13 + 4;
      }
    }
LABEL_22:
    if ( v10 > 8 )
    {
LABEL_29:
      v34 = &v7[-v12];
      if ( v52 > (unsigned int)v7 && *v34 == *v7 )
      {
        v35 = v7 + 1;
        do
        {
          v19 = v52 == (_DWORD)v35;
          v7 = v35++;
          if ( v19 )
            break;
          v36 = *++v34;
        }
        while ( v36 == *v7 );
      }
      v37 = v7 - v5;
      v18 = v7;
      v38 = v6 + 1;
      if ( (unsigned int)(v7 - v5) > 0x22 )
      {
        v42 = v37 - 34;
        for ( *v6 = 32; v42 > 0xFF; ++v38 )
        {
          v42 -= 255;
          *v38 = 0;
        }
        *v38++ = v42;
      }
      else
      {
        *v6 = (v37 - 3) | 0x20;
      }
      *v38 = v12;
      v6 = v38 + 2;
      v38[1] = BYTE1(v12);
      if ( (unsigned int)v7 < v50 )
        goto LABEL_26;
      v5 = v7;
    }
    else
    {
      if ( v12 > 0x2000 )
      {
        v6[1] = v12;
        *v6 = (v10 - 3) | 0x20;
        v6 += 3;
        *(v6 - 1) = BYTE1(v12);
        goto LABEL_25;
      }
LABEL_40:
      v39 = v12 - 1;
      *v6 = v39 & 0x1F | (32 * (v10 - 1));
      v6[1] = v39 >> 5;
      v6 += 2;
LABEL_25:
      if ( v50 > (unsigned int)v7 )
      {
LABEL_26:
        v28 = ((_BYTE)v8 + 1) & 3;
        v29 = v5 + 2;
        v30 = v5[3] ^ (32 * (v49 ^ (*v5 << 10)));
        v31 = (((unsigned int)(40799 * v30) >> 3) & 0x3FFC) + v8;
        v8 = ((_BYTE)v28 + 1) & 3;
        *(_DWORD *)&s[4 * v31] = v5 + 1;
        v32 = v5[1];
        v33 = v5[4];
        v5 = v7;
        *(_DWORD *)&s[4 * (((40799 * (v33 ^ (32 * (v30 ^ (unsigned int)(v32 << 10))))) >> 3) & 0x3FFC | v28)] = v29;
        v49 = v7[2] ^ (32 * (v7[1] ^ (32 * *v7)));
        continue;
      }
      v5 = v7;
      v18 = v7;
    }
    break;
  }
LABEL_12:
  if ( (unsigned __int8 *)v52 != v18 )
    v6 = (_BYTE *)lzo1b_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
