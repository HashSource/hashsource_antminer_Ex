int __fastcall sub_1EB20(unsigned __int8 *src, int a2, int a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r9
  _BYTE *v6; // r8
  int v7; // r3
  unsigned __int8 *v8; // r11
  int v9; // r7
  int v10; // r10
  unsigned int *v11; // r3
  int v12; // r0
  unsigned int *v13; // r12
  unsigned int v14; // r4
  unsigned int *v15; // r1
  unsigned __int8 *v16; // r2
  unsigned int v17; // t1
  unsigned int *v18; // r1
  unsigned int v19; // r5
  unsigned __int8 *v20; // r2
  bool v21; // zf
  unsigned __int8 *v23; // r2
  char v24; // r1
  unsigned int v25; // r2
  unsigned __int8 *v26; // r12
  _BYTE *v27; // r3
  _BYTE *v28; // r8
  _BYTE *v29; // r3
  char v30; // t1
  unsigned __int8 *v31; // r2
  unsigned __int8 *v32; // r3
  int v33; // t1
  int v34; // r3
  _BYTE *v35; // r1
  int v36; // r0
  int v37; // lr
  int v38; // r10
  _BOOL4 v39; // r12
  unsigned int v40; // r1
  int v41; // r1
  unsigned __int8 *v42; // r0
  int v43; // r2
  int v44; // lr
  int v45; // r1
  unsigned __int8 *v46; // r2
  unsigned __int8 *v47; // r0
  unsigned __int8 *v48; // r1
  int v49; // lr
  int v50; // t1
  int v51; // t1
  int v52; // r0
  char v53; // r3
  unsigned int v54; // r3
  bool v55; // zf
  _BYTE *v56; // r0
  _BYTE *v57; // r3
  unsigned __int8 *v58; // r12
  char v59; // t1
  int v60; // r0
  unsigned __int8 *v61; // [sp+0h] [bp-44h]
  unsigned __int8 *v62; // [sp+0h] [bp-44h]
  unsigned int v64; // [sp+8h] [bp-3Ch]
  char *v65; // [sp+Ch] [bp-38h]
  unsigned __int8 *v66; // [sp+10h] [bp-34h]
  unsigned int v67; // [sp+18h] [bp-2Ch]
  char *v68; // [sp+30h] [bp-14h]
  _BYTE *v69; // [sp+34h] [bp-10h]

  v5 = src;
  v6 = (_BYTE *)a3;
  v68 = (char *)&src[a2];
  v7 = src[2] ^ (32 * (src[1] ^ (32 * *src)));
  v69 = (_BYTE *)(a3 + 1);
  v65 = (char *)&src[a2 - 9];
  v8 = src + 1;
  v66 = (unsigned __int8 *)v65;
  *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v7) >> 4) & 0x3FFE)) = src;
  v9 = 1;
  v10 = src[3] ^ (32 * (v7 ^ (*src << 10)));
LABEL_2:
  while ( 2 )
  {
    v61 = v8;
    v11 = (unsigned int *)(a5 + 8 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF));
    v12 = 2;
    v13 = v11 + 2;
    v14 = 0;
    v64 = 0;
    while ( 1 )
    {
      v15 = v11;
      v17 = *v11++;
      v16 = (unsigned __int8 *)v17;
      if ( v17 < (unsigned int)src )
        goto LABEL_5;
      v67 = v8 - v16;
      if ( (unsigned int)(v8 - v16 - 1) > 0x3FFE || v16[v14] != v8[v14] )
        goto LABEL_5;
      if ( *v16 == *v8 && v16[1] == v8[1] && v16[2] == v8[2] )
        break;
LABEL_41:
      v61 = v8;
LABEL_5:
      v12 = 1;
      if ( v13 == v11 )
      {
        v18 = &v15[v9];
        v19 = v64;
        v9 ^= 1u;
        *(v18 - 1) = (unsigned int)v8;
        v20 = v5;
        if ( v14 > 3 )
        {
          v23 = v8;
          v8 += v14;
          if ( v61 == v5 )
            goto LABEL_21;
        }
        else
        {
          v21 = v64 == 0x2000;
          if ( v64 <= 0x2000 )
            v21 = v14 == 3;
          if ( !v21 )
          {
            if ( v65 <= (char *)++v8 )
              goto LABEL_11;
            v10 = v61[3] ^ (32 * (v10 ^ (*v61 << 10)));
            goto LABEL_2;
          }
          v23 = v8;
          v14 = 3;
          v8 += 3;
          if ( v61 == v5 )
            goto LABEL_43;
        }
LABEL_15:
        v24 = (char)v61;
        if ( v66 == v61 )
        {
          v53 = *(v6 - 2);
          ++v5;
          *(++v6 - 3) = v53 & 0x1F;
          v66 += 4;
          *(v6 - 1) = *(v5 - 1);
        }
        else
        {
          v25 = v23 - v5;
          if ( v25 <= 0x1F )
          {
            v55 = v25 == 3;
            if ( v25 <= 3 )
              v55 = v6 == v69;
            if ( v55 )
            {
              v24 = *(v69 - 2);
              v56 = v6;
            }
            else
            {
              v56 = v6 + 1;
              *v6 = v25;
            }
            if ( v55 )
              *(v69 - 2) = v24 | ((_BYTE)v25 << 6);
            v57 = v56 - 1;
            v58 = &v5[v25];
            do
            {
              v59 = *v5++;
              *++v57 = v59;
            }
            while ( v5 != v58 );
            v6 = &v56[v25];
            v66 = v61 + 4;
          }
          else if ( v25 >= 0x118 )
          {
            v52 = lzo1c_store_run((int)v6, v5);
            v5 = v61;
            v6 = (_BYTE *)v52;
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
            v66 = v61 + 4;
          }
        }
LABEL_21:
        if ( v14 > 8 )
          goto LABEL_22;
        if ( v19 > 0x2000 )
        {
          *v6 = (v14 - 3) | 0x20;
          v6[2] = v19 >> 6;
          v6[1] = v19 & 0x3F;
          v6 += 3;
          v69 = v6;
LABEL_34:
          if ( v65 <= (char *)v8 )
          {
            v5 = v8;
            v20 = v8;
            goto LABEL_11;
          }
          v46 = v5 + 1;
          v47 = v5 - 1;
          v48 = v5 + 2;
          while ( 1 )
          {
            v50 = *++v47;
            v49 = v50;
            v5 = v46 + 1;
            v51 = *++v48;
            v10 = v51 ^ (32 * (v10 ^ (v49 << 10)));
            *(_DWORD *)(a5 + 8 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)) = v46;
            if ( v46 + 1 >= v8 )
              break;
            ++v46;
          }
          v10 = v46[3] ^ (32 * (v10 ^ (*v46 << 10)));
          goto LABEL_2;
        }
LABEL_43:
        *v6 = (v19 - 1) & 0x1F | (32 * (v14 - 1));
        v6[1] = (v19 - 1) >> 5;
        v6 += 2;
        goto LABEL_34;
      }
    }
    if ( v16[3] != v8[3] )
    {
      v62 = v8 + 4;
      goto LABEL_64;
    }
    if ( v16[4] != v8[4] )
    {
      v62 = v8 + 5;
      goto LABEL_64;
    }
    if ( v16[5] != v8[5] )
    {
      v62 = v8 + 6;
      goto LABEL_64;
    }
    v62 = v8 + 7;
    if ( v16[6] != v8[6] || (v62 = v8 + 8, v19 = v8[7], v16[7] != v19) || (v62 = v8 + 9, v16[8] != v8[8]) )
    {
LABEL_64:
      if ( v14 < v62 - 1 - v8 )
      {
        v14 = v62 - 1 - v8;
        v64 = v8 - v16;
      }
      goto LABEL_41;
    }
    v23 = v8;
    v60 = 4 * v9 - 8 + 4 * v12;
    v9 ^= 1u;
    if ( v5 == v8 )
      v19 = v67;
    *(unsigned int *)((char *)v15 + v60) = (unsigned int)v8;
    if ( v5 != v8 )
    {
      v61 = v8;
      v19 = v67;
      v8 += 9;
      v14 = 9;
      goto LABEL_15;
    }
    v8 += 9;
LABEL_22:
    v31 = &v8[-v19];
    if ( v68 > (char *)v8 && *v31 == *v8 )
    {
      v32 = v8 + 1;
      do
      {
        v21 = v68 == (char *)v32;
        v8 = v32++;
        if ( v21 )
          break;
        v33 = *++v31;
      }
      while ( v33 == *v8 );
    }
    v34 = v8 - v5;
    v20 = v8;
    v35 = v6 + 1;
    if ( (unsigned int)(v8 - v5) > 0x22 )
    {
      v54 = v34 - 34;
      for ( *v6 = 32; v54 > 0xFF; ++v35 )
      {
        v54 -= 255;
        *v35 = 0;
      }
      *v35++ = v54;
    }
    else
    {
      *v6 = (v34 - 3) | 0x20;
    }
    *v35 = v19 & 0x3F;
    v6 = v35 + 2;
    v35[1] = v19 >> 6;
    if ( v8 < (unsigned __int8 *)v65 )
    {
      v36 = v9 ^ 1;
      v37 = (((unsigned __int8)v9 ^ 1) + 1) & 1;
      v69 = v35 + 2;
      v38 = v5[3] ^ (32 * (v10 ^ (*v5 << 10)));
      v39 = !((((unsigned __int8)v9 ^ 1) + 1) & 1);
      v40 = (((unsigned int)(40799 * v38) >> 4) & 0x3FFE) + v9;
      v9 = v37;
      *(_DWORD *)(a5 + 4 * v40) = v5 + 1;
      v41 = v5[4] ^ (32 * (v38 ^ (v5[1] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v41) >> 4) & 0x3FFE | v36)) = v5 + 2;
      v42 = v5 + 4;
      v43 = v5[5] ^ (32 * (v41 ^ (v5[2] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v43) >> 4) & 0x3FFE | v37)) = v5 + 3;
      v44 = v5[3];
      v45 = v5[6];
      v5 = v8;
      *(_DWORD *)(a5 + 4 * (((40799 * (v45 ^ (32 * (v43 ^ (unsigned int)(v44 << 10))))) >> 4) & 0x3FFE | v39)) = v42;
      v10 = v8[2] ^ (32 * (v8[1] ^ (32 * *v8)));
      continue;
    }
    break;
  }
  v5 = v8;
LABEL_11:
  if ( v68 != (char *)v20 )
    v6 = (_BYTE *)lzo1c_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
