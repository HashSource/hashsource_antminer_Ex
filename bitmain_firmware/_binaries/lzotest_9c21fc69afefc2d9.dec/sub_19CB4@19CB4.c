int __fastcall sub_19CB4(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r9
  _BYTE *v6; // r11
  unsigned __int8 *v7; // r8
  int v8; // r0
  int v9; // r10
  int v10; // r7
  char *v11; // r3
  unsigned int v12; // r4
  unsigned int v13; // r5
  unsigned __int8 *v14; // lr
  int v15; // r0
  char *v16; // r12
  char *v17; // r1
  unsigned __int8 *v18; // r2
  unsigned __int8 *v19; // t1
  unsigned __int8 *v20; // r2
  unsigned __int8 *v23; // r2
  unsigned int v24; // r2
  unsigned __int8 *v25; // r12
  _BYTE *v26; // r3
  _BYTE *v27; // r11
  _BYTE *v28; // r3
  char v29; // t1
  unsigned __int8 *v30; // r2
  unsigned __int8 *v31; // r3
  int v32; // t1
  bool v33; // zf
  int v34; // r3
  _BYTE *v35; // r1
  int v36; // r0
  int v37; // r7
  int v38; // r4
  _BOOL4 v39; // r12
  int v40; // r1
  unsigned __int8 *v41; // r0
  int v42; // r2
  int v43; // lr
  int v44; // r1
  unsigned __int8 *v45; // r2
  unsigned __int8 *v46; // r0
  unsigned __int8 *v47; // r1
  int v48; // r12
  int v49; // t1
  int v50; // t1
  unsigned __int8 *v51; // r1
  char v52; // r3
  unsigned int v53; // r3
  unsigned __int8 *v54; // r1
  _BYTE *v55; // r3
  char v56; // t1
  unsigned __int8 *v57; // lr
  unsigned int v58; // r12
  int v59; // r3
  int v60; // r0
  unsigned int v61; // [sp+Ch] [bp-30h]
  unsigned __int8 *v62; // [sp+10h] [bp-2Ch]
  unsigned int v63; // [sp+2Ch] [bp-10h]

  v5 = a1;
  v6 = (_BYTE *)a3;
  v61 = (unsigned int)&a1[a2 - 9];
  v63 = (unsigned int)&a1[a2];
  v7 = a1 + 1;
  v62 = (unsigned __int8 *)v61;
  memset(s, 0, 0x10000u);
  v8 = v5[2] ^ (32 * (v5[1] ^ (32 * *v5)));
  *(_DWORD *)&s[4 * (((unsigned int)(40799 * v8) >> 4) & 0x3FFE)] = v5;
  v9 = 1;
  v10 = v5[3] ^ (32 * (v8 ^ (*v5 << 10)));
LABEL_2:
  while ( 2 )
  {
    v11 = &s[8 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)];
    v12 = 0;
    v13 = 0;
    v14 = v7;
    v15 = 2;
    v16 = v11 + 8;
    while ( 1 )
    {
      v17 = v11;
      v19 = *(unsigned __int8 **)v11;
      v11 += 4;
      v18 = v19;
      if ( !v19 || (unsigned int)(v7 - v18) >= 0x10000 || v18[v12] != v7[v12] )
        goto LABEL_6;
      if ( *v18 == *v7 && v18[1] == v7[1] && v18[2] == v7[2] )
        break;
LABEL_42:
      v14 = v7;
LABEL_6:
      v15 = 1;
      if ( v16 == v11 )
      {
        *(_DWORD *)&v17[4 * v9 - 4] = v7;
        v9 ^= 1u;
        v20 = v5;
        if ( v12 > 3 )
        {
          v23 = v7;
          v7 += v12;
          if ( v14 == v5 )
            goto LABEL_23;
        }
        else
        {
          if ( v13 > 0x2000 || v12 != 3 )
          {
            if ( v61 <= (unsigned int)++v7 )
              goto LABEL_13;
            v10 = v14[3] ^ (32 * (v10 ^ (*v14 << 10)));
            goto LABEL_2;
          }
          v23 = v7;
          v12 = 3;
          v7 += 3;
          if ( v14 == v5 )
            goto LABEL_44;
        }
LABEL_17:
        if ( v62 == v14 )
        {
          v52 = *(v6 - 2);
          ++v5;
          *(++v6 - 3) = v52 & 0x1F;
          v62 += 4;
          *(v6 - 1) = *(v5 - 1);
        }
        else
        {
          v24 = v23 - v5;
          if ( v24 <= 0x1F )
          {
            v54 = v5 - 1;
            v55 = v6;
            *v6 = v24;
            do
            {
              v56 = *++v54;
              *++v55 = v56;
            }
            while ( &v6[v24] != v55 );
            v5 += v24;
            v6 += v24 + 1;
            v62 = v14 + 4;
          }
          else if ( v24 >= 0x118 )
          {
            v51 = v5;
            v5 = v14;
            v6 = (_BYTE *)lzo1b_store_run((int)v6, v51);
          }
          else
          {
            v25 = &v5[v24];
            v26 = v6;
            *v6 = 0;
            v27 = v6 + 2;
            v26[1] = v24 - 32;
            v28 = v26 + 1;
            do
            {
              v29 = *v5++;
              *++v28 = v29;
            }
            while ( v5 != v25 );
            v6 = &v27[v24];
            v62 = v14 + 4;
          }
        }
LABEL_23:
        if ( v12 > 8 )
          goto LABEL_24;
        if ( v13 > 0x2000 )
        {
          v6[1] = v13;
          *v6 = (v12 - 3) | 0x20;
          v6 += 3;
          *(v6 - 1) = BYTE1(v13);
LABEL_36:
          if ( v61 <= (unsigned int)v7 )
          {
            v5 = v7;
            v20 = v7;
            goto LABEL_13;
          }
          v45 = v5 + 1;
          v46 = v5 - 1;
          v47 = v5 + 2;
          while ( 1 )
          {
            v49 = *++v46;
            v48 = v49;
            v5 = v45 + 1;
            v50 = *++v47;
            v10 = v50 ^ (32 * (v10 ^ (v48 << 10)));
            *(_DWORD *)&s[8 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)] = v45;
            if ( v45 + 1 >= v7 )
              break;
            ++v45;
          }
          v10 = v45[3] ^ (32 * (v10 ^ (*v45 << 10)));
          goto LABEL_2;
        }
LABEL_44:
        *v6 = (v13 - 1) & 0x1F | (32 * (v12 - 1));
        v6[1] = (v13 - 1) >> 5;
        v6 += 2;
        goto LABEL_36;
      }
    }
    if ( v18[3] != v7[3] )
    {
      v57 = v7 + 4;
      goto LABEL_58;
    }
    if ( v18[4] != v7[4] )
    {
      v57 = v7 + 5;
      goto LABEL_58;
    }
    if ( v18[5] != v7[5] )
    {
      v57 = v7 + 6;
      goto LABEL_58;
    }
    if ( v18[6] != v7[6] )
    {
      v57 = v7 + 7;
      goto LABEL_58;
    }
    v57 = v7 + 8;
    if ( v18[7] != v7[7] || (v57 = v7 + 9, v18[8] != v7[8]) )
    {
LABEL_58:
      if ( v12 < v57 - 1 - v7 )
      {
        v12 = v57 - 1 - v7;
        v13 = v7 - v18;
      }
      goto LABEL_42;
    }
    v58 = v7 - v18;
    v23 = v7;
    v59 = 4 * v9 - 8;
    v9 ^= 1u;
    v60 = v59 + 4 * v15;
    if ( v7 == v5 )
      v13 = v58;
    *(_DWORD *)&v17[v60] = v7;
    if ( v7 != v5 )
    {
      v14 = v7;
      v13 = v58;
      v7 += 9;
      v12 = 9;
      goto LABEL_17;
    }
    v7 += 9;
LABEL_24:
    v30 = &v7[-v13];
    if ( v63 > (unsigned int)v7 && *v30 == *v7 )
    {
      v31 = v7 + 1;
      do
      {
        v33 = v63 == (_DWORD)v31;
        v7 = v31++;
        if ( v33 )
          break;
        v32 = *++v30;
      }
      while ( v32 == *v7 );
    }
    v34 = v7 - v5;
    v20 = v7;
    v35 = v6 + 1;
    if ( (unsigned int)(v7 - v5) > 0x22 )
    {
      v53 = v34 - 34;
      for ( *v6 = 32; v53 > 0xFF; ++v35 )
      {
        v53 -= 255;
        *v35 = 0;
      }
      *v35++ = v53;
    }
    else
    {
      *v6 = (v34 - 3) | 0x20;
    }
    *v35 = v13;
    v6 = v35 + 2;
    v35[1] = BYTE1(v13);
    if ( (unsigned int)v7 < v61 )
    {
      v36 = v9 ^ 1;
      v37 = v5[3] ^ (32 * (v10 ^ (*v5 << 10)));
      v38 = (((unsigned __int8)v9 ^ 1) + 1) & 1;
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v37) >> 4) & 0x3FFE) + 4 * v9] = v5 + 1;
      v39 = !((((unsigned __int8)v9 ^ 1) + 1) & 1);
      v9 = v38;
      v40 = v5[4] ^ (32 * (v37 ^ (v5[1] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v40) >> 4) & 0x3FFE | v36)] = v5 + 2;
      v41 = v5 + 4;
      v42 = v5[5] ^ (32 * (v40 ^ (v5[2] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v42) >> 4) & 0x3FFE | v38)] = v5 + 3;
      v43 = v5[3];
      v44 = v5[6];
      v5 = v7;
      *(_DWORD *)&s[4 * (((40799 * (v44 ^ (32 * (v42 ^ (unsigned int)(v43 << 10))))) >> 4) & 0x3FFE | v39)] = v41;
      v10 = v7[2] ^ (32 * (v7[1] ^ (32 * *v7)));
      continue;
    }
    break;
  }
  v5 = v7;
LABEL_13:
  if ( (unsigned __int8 *)v63 != v20 )
    v6 = (_BYTE *)lzo1b_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
