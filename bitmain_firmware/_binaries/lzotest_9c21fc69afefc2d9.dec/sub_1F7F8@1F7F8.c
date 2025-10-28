int __fastcall sub_1F7F8(unsigned __int8 *src, int a2, int a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // r8
  int v7; // r3
  int v8; // r6
  int v9; // r7
  int v10; // r2
  unsigned int v11; // r4
  unsigned int *v12; // r3
  unsigned int v13; // r10
  unsigned __int8 *v14; // r5
  unsigned int *v15; // r0
  unsigned __int8 *v16; // r1
  unsigned int v17; // t1
  unsigned __int8 *v18; // r2
  bool v19; // zf
  unsigned __int8 *v21; // r2
  unsigned int v22; // r2
  unsigned __int8 *v23; // r12
  _BYTE *v24; // r3
  char v25; // t1
  unsigned __int8 *v26; // r2
  unsigned __int8 *v27; // r3
  int v28; // t1
  int v29; // r3
  _BYTE *v30; // r1
  int v31; // r1
  int v32; // r5
  int v33; // r7
  int v34; // lr
  int v35; // r12
  int v36; // r4
  int v37; // r0
  int v38; // r5
  int v39; // r1
  int v40; // lr
  int v41; // r12
  int v42; // r1
  int v43; // r12
  int v44; // r0
  unsigned __int8 *v45; // r5
  int v46; // r1
  int v47; // lr
  int v48; // r0
  unsigned __int8 *v49; // r2
  unsigned __int8 *v50; // r0
  unsigned __int8 *v51; // r1
  int v52; // lr
  int v53; // t1
  int v54; // t1
  int v55; // r0
  unsigned int v56; // r3
  char v57; // r3
  _BYTE *v58; // r0
  bool v59; // zf
  _BYTE *v60; // r1
  _BYTE *v61; // r3
  unsigned __int8 *v62; // r12
  char v63; // t1
  unsigned __int8 *v64; // r5
  int v65; // r3
  _BYTE *v67; // [sp+8h] [bp-3Ch]
  int v68; // [sp+Ch] [bp-38h]
  char *v69; // [sp+10h] [bp-34h]
  unsigned __int8 *v70; // [sp+14h] [bp-30h]
  char *v71; // [sp+30h] [bp-14h]
  _BYTE *v72; // [sp+34h] [bp-10h]

  v5 = src;
  v6 = src + 1;
  v71 = (char *)&src[a2];
  v7 = src[2] ^ (32 * (src[1] ^ (32 * *src)));
  v72 = (_BYTE *)(a3 + 1);
  v67 = (_BYTE *)a3;
  v69 = (char *)&src[a2 - 9];
  v70 = (unsigned __int8 *)v69;
  v8 = 1;
  *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v7) >> 3) & 0x3FFC)) = src;
  v9 = src[3] ^ (32 * (v7 ^ (*src << 10)));
LABEL_2:
  while ( 2 )
  {
    v68 = v8;
    v10 = 4;
    v11 = 0;
    v12 = (unsigned int *)(a5 + 16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF));
    v13 = 0;
    v14 = v6;
    while ( 1 )
    {
      v15 = v12;
      v17 = *v12++;
      v16 = (unsigned __int8 *)v17;
      if ( v17 < (unsigned int)src || (unsigned int)(v6 - v16 - 1) > 0x3FFE || v16[v11] != v6[v11] )
        goto LABEL_5;
      if ( *v16 == *v6 && v16[1] == v6[1] && v16[2] == v6[2] )
        break;
LABEL_34:
      v14 = v6;
LABEL_5:
      if ( !--v10 )
      {
        v18 = v5;
        v8 = ((_BYTE)v8 + 1) & 3;
        v15[v68 - 3] = (unsigned int)v6;
        if ( v11 > 3 )
        {
          v21 = v6;
          v6 += v11;
          if ( v14 == v5 )
            goto LABEL_21;
        }
        else
        {
          v19 = v13 == 0x2000;
          if ( v13 <= 0x2000 )
            v19 = v11 == 3;
          if ( !v19 )
          {
            if ( v69 <= (char *)++v6 )
              goto LABEL_11;
            v9 = v14[3] ^ (32 * (v9 ^ (*v14 << 10)));
            goto LABEL_2;
          }
          v21 = v6;
          v11 = 3;
          v6 += 3;
          if ( v14 == v5 )
            goto LABEL_43;
        }
LABEL_15:
        if ( v70 == v14 )
        {
          ++v5;
          v70 += 4;
          *(v67 - 2) &= 0x1Fu;
          *v67++ = *(v5 - 1);
        }
        else
        {
          v22 = v21 - v5;
          if ( v22 <= 0x1F )
          {
            v57 = v22;
            v58 = v67;
            v59 = v22 == 3;
            if ( v22 <= 3 )
              v59 = v67 == v72;
            if ( v59 )
              v60 = (_BYTE *)(unsigned __int8)*(v72 - 2);
            else
              v60 = v67;
            if ( v59 )
            {
              v57 = (unsigned __int8)v60 | ((_BYTE)v22 << 6);
            }
            else
            {
              v58 = v60 + 1;
              *v60 = v22;
            }
            if ( v59 )
              *(v72 - 2) = v57;
            v61 = v58 - 1;
            v62 = &v5[v22];
            do
            {
              v63 = *v5++;
              *++v61 = v63;
            }
            while ( v5 != v62 );
            v67 = &v58[v22];
            v70 = v14 + 4;
          }
          else if ( v22 >= 0x118 )
          {
            v55 = lzo1c_store_run((int)v67, v5);
            v5 = v14;
            v67 = (_BYTE *)v55;
          }
          else
          {
            v23 = &v5[v22];
            *v67 = 0;
            v67[1] = v22 - 32;
            v24 = v67 + 1;
            do
            {
              v25 = *v5++;
              *++v24 = v25;
            }
            while ( v5 != v23 );
            v67 += v22 + 2;
            v70 = v14 + 4;
          }
        }
LABEL_21:
        if ( v11 > 8 )
          goto LABEL_22;
        if ( v13 > 0x2000 )
        {
          *v67 = (v11 - 3) | 0x20;
          v72 = v67 + 3;
          v67[2] = v13 >> 6;
          v67[1] = v13 & 0x3F;
          v67 += 3;
LABEL_37:
          if ( v69 <= (char *)v6 )
          {
            v5 = v6;
            v18 = v6;
            goto LABEL_11;
          }
          v49 = v5 + 1;
          v50 = v5 - 1;
          v51 = v5 + 2;
          while ( 1 )
          {
            v53 = *++v50;
            v52 = v53;
            v5 = v49 + 1;
            v54 = *++v51;
            v9 = v54 ^ (32 * (v9 ^ (v52 << 10)));
            *(_DWORD *)(a5 + 16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF)) = v49;
            if ( v49 + 1 >= v6 )
              break;
            ++v49;
          }
          v9 = v49[3] ^ (32 * (v9 ^ (*v49 << 10)));
          goto LABEL_2;
        }
LABEL_43:
        *v67 = (v13 - 1) & 0x1F | (32 * (v11 - 1));
        v67[1] = (v13 - 1) >> 5;
        v67 += 2;
        goto LABEL_37;
      }
    }
    if ( v16[3] != v6[3] )
    {
      v64 = v6 + 4;
      goto LABEL_67;
    }
    if ( v16[4] != v6[4] )
    {
      v64 = v6 + 5;
      goto LABEL_67;
    }
    if ( v16[5] != v6[5] )
    {
      v64 = v6 + 6;
      goto LABEL_67;
    }
    v64 = v6 + 7;
    if ( v16[6] != v6[6] || (v64 = v6 + 8, v16[7] != v6[7]) || (v64 = v6 + 9, v16[8] != v6[8]) )
    {
LABEL_67:
      if ( v11 < v64 - 1 - v6 )
      {
        v11 = v64 - 1 - v6;
        v13 = v6 - v16;
      }
      goto LABEL_34;
    }
    if ( v6 == v5 )
      v13 = v6 - v16;
    v8 = ((_BYTE)v8 + 1) & 3;
    v65 = 4 * v68 - 16 + 4 * v10;
    v21 = v6;
    *(unsigned int *)((char *)v15 + v65) = (unsigned int)v6;
    if ( v6 != v5 )
    {
      v14 = v6;
      v13 = v6 - v16;
      v6 += 9;
      v11 = 9;
      goto LABEL_15;
    }
    v6 += 9;
LABEL_22:
    v26 = &v6[-v13];
    if ( v71 > (char *)v6 && *v26 == *v6 )
    {
      v27 = v6 + 1;
      do
      {
        v19 = v71 == (char *)v27;
        v6 = v27++;
        if ( v19 )
          break;
        v28 = *++v26;
      }
      while ( v28 == *v6 );
    }
    v29 = v6 - v5;
    v18 = v6;
    v30 = v67 + 1;
    if ( (unsigned int)(v6 - v5) > 0x22 )
    {
      v56 = v29 - 34;
      for ( *v67 = 32; v56 > 0xFF; ++v30 )
      {
        v56 -= 255;
        *v30 = 0;
      }
      *v30++ = v56;
    }
    else
    {
      *v67 = (v29 - 3) | 0x20;
    }
    *v30 = v13 & 0x3F;
    v67 = v30 + 2;
    v30[1] = v13 >> 6;
    if ( v6 < (unsigned __int8 *)v69 )
    {
      v31 = ((_BYTE)v8 + 1) & 3;
      v32 = ((_BYTE)v31 + 1) & 3;
      v33 = v5[3] ^ (32 * (v9 ^ (*v5 << 10)));
      v34 = ((_BYTE)v32 + 1) & 3;
      *(_DWORD *)(a5 + 4 * ((((unsigned int)(40799 * v33) >> 3) & 0x3FFC) + v8)) = v5 + 1;
      v35 = v5[4] ^ (32 * (v33 ^ (v5[1] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v35) >> 3) & 0x3FFC | v31)) = v5 + 2;
      v36 = ((_BYTE)v34 + 1) & 3;
      v37 = v5[5] ^ (32 * (v35 ^ (v5[2] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v37) >> 3) & 0x3FFC | v32)) = v5 + 3;
      v38 = ((_BYTE)v36 + 1) & 3;
      v39 = v5[6] ^ (32 * (v37 ^ (v5[3] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v39) >> 3) & 0x3FFC | v34)) = v5 + 4;
      v40 = ((_BYTE)v38 + 1) & 3;
      v41 = v5[7] ^ (32 * (v39 ^ (v5[4] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v41) >> 3) & 0x3FFC | v36)) = v5 + 5;
      v42 = v41 ^ (v5[5] << 10);
      v43 = ((_BYTE)v40 + 1) & 3;
      v44 = v5[8] ^ (32 * v42);
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v44) >> 3) & 0x3FFC | v38)) = v5 + 6;
      v45 = v5 + 8;
      v8 = ((_BYTE)v43 + 1) & 3;
      v46 = v5[9] ^ (32 * (v44 ^ (v5[6] << 10)));
      *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v46) >> 3) & 0x3FFC | v40)) = v5 + 7;
      v47 = v5[7];
      v48 = v5[10];
      v5 = v6;
      v72 = v67;
      *(_DWORD *)(a5 + 4 * (((40799 * (v48 ^ (32 * (v46 ^ (unsigned int)(v47 << 10))))) >> 3) & 0x3FFC | v43)) = v45;
      v9 = v6[2] ^ (32 * (v6[1] ^ (32 * *v6)));
      continue;
    }
    break;
  }
  v5 = v6;
LABEL_11:
  if ( v71 != (char *)v18 )
    v67 = (_BYTE *)lzo1c_store_run((int)v67, v5);
  *a4 = &v67[-a3];
  return 0;
}
