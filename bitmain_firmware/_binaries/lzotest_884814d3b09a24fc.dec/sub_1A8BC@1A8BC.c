int __fastcall sub_1A8BC(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r11
  _BYTE *v6; // r10
  unsigned __int8 *v7; // r9
  int v8; // r5
  int v9; // r3
  int v10; // r8
  int v11; // r2
  unsigned __int8 *v12; // r12
  char *v13; // r3
  unsigned int v14; // r4
  char *v15; // r0
  unsigned __int8 *v16; // r1
  unsigned __int8 *v17; // t1
  unsigned __int8 *v18; // r2
  unsigned __int8 *v21; // r2
  unsigned int v22; // r2
  unsigned __int8 *v23; // lr
  _BYTE *v24; // r3
  char v25; // t1
  unsigned __int8 *v26; // r2
  unsigned __int8 *v27; // r3
  int v28; // t1
  bool v29; // zf
  int v30; // r3
  _BYTE *v31; // r1
  int v32; // r2
  int v33; // r0
  int v34; // r8
  int v35; // r4
  int v36; // r3
  int v37; // lr
  int v38; // r1
  int v39; // r5
  int v40; // r2
  int v41; // r4
  int v42; // r3
  int v43; // r0
  int v44; // r12
  unsigned __int8 *v45; // r1
  int v46; // r2
  int v47; // r12
  int v48; // r3
  unsigned __int8 *v49; // r2
  unsigned __int8 *v50; // r0
  unsigned __int8 *v51; // r1
  int v52; // r12
  int v53; // t1
  int v54; // t1
  unsigned __int8 *v55; // r10
  unsigned __int8 *v56; // r1
  char v57; // r3
  unsigned int v58; // r3
  unsigned __int8 *v59; // r1
  _BYTE *v60; // r3
  char v61; // t1
  int v62; // r3
  int v63; // r3
  unsigned int v64; // [sp+0h] [bp-3Ch]
  _BYTE *v65; // [sp+8h] [bp-34h]
  unsigned int v66; // [sp+Ch] [bp-30h]
  unsigned __int8 *v67; // [sp+10h] [bp-2Ch]
  unsigned int v68; // [sp+2Ch] [bp-10h]

  v5 = a1;
  v6 = (_BYTE *)a3;
  v66 = (unsigned int)&a1[a2 - 9];
  v7 = a1 + 1;
  v68 = (unsigned int)&a1[a2];
  v8 = 1;
  v67 = (unsigned __int8 *)v66;
  memset(s, 0, 0x10000u);
  v9 = v5[2] ^ (32 * (v5[1] ^ (32 * *v5)));
  *(_DWORD *)&s[4 * (((unsigned int)(40799 * v9) >> 3) & 0x3FFC)] = v5;
  v10 = v5[3] ^ (32 * (v9 ^ (*v5 << 10)));
LABEL_2:
  while ( 2 )
  {
    v11 = 4;
    v12 = v7;
    v13 = &s[16 * (((unsigned int)(40799 * v10) >> 5) & 0xFFF)];
    v14 = 0;
    v64 = 0;
    v65 = v6;
    while ( 1 )
    {
      v15 = v13;
      v17 = *(unsigned __int8 **)v13;
      v13 += 4;
      v16 = v17;
      if ( !v17 || (unsigned int)(v7 - v16) >= 0x10000 || v16[v14] != v7[v14] )
        goto LABEL_6;
      if ( *v16 == *v7 && v16[1] == v7[1] && v16[2] == v7[2] )
        break;
LABEL_35:
      v12 = v7;
LABEL_6:
      if ( !--v11 )
      {
        v6 = v65;
        *(_DWORD *)&v15[4 * v8 - 12] = v7;
        v8 = ((_BYTE)v8 + 1) & 3;
        v18 = v5;
        if ( v14 > 3 )
        {
          v21 = v7;
          v7 += v14;
          if ( v12 == v5 )
            goto LABEL_23;
        }
        else
        {
          if ( v64 > 0x2000 || v14 != 3 )
          {
            if ( v66 <= (unsigned int)++v7 )
              goto LABEL_13;
            v10 = v12[3] ^ (32 * (v10 ^ (*v12 << 10)));
            goto LABEL_2;
          }
          v21 = v7;
          v14 = 3;
          v7 += 3;
          if ( v12 == v5 )
            goto LABEL_51;
        }
LABEL_17:
        if ( v67 == v12 )
        {
          v57 = *(v6 - 2);
          ++v5;
          *(++v6 - 3) = v57 & 0x1F;
          v67 += 4;
          *(v6 - 1) = *(v5 - 1);
        }
        else
        {
          v22 = v21 - v5;
          if ( v22 <= 0x1F )
          {
            v59 = v5 - 1;
            v60 = v6;
            *v6 = v22;
            do
            {
              v61 = *++v59;
              *++v60 = v61;
            }
            while ( &v6[v22] != v60 );
            v5 += v22;
            v6 += v22 + 1;
            v67 = v12 + 4;
          }
          else if ( v22 >= 0x118 )
          {
            v56 = v5;
            v5 = v12;
            v6 = (_BYTE *)lzo1b_store_run((int)v6, v56);
          }
          else
          {
            v23 = &v5[v22];
            *v6 = 0;
            v6[1] = v22 - 32;
            v24 = v6 + 1;
            do
            {
              v25 = *v5++;
              *++v24 = v25;
            }
            while ( v5 != v23 );
            v6 += v22 + 2;
            v67 = v12 + 4;
          }
        }
LABEL_23:
        if ( v14 > 8 )
          goto LABEL_24;
        if ( v64 > 0x2000 )
        {
          v6 += 3;
          *(v6 - 3) = (v14 - 3) | 0x20;
          *((_WORD *)v6 - 1) = v64;
LABEL_38:
          if ( v66 <= (unsigned int)v7 )
          {
            v5 = v7;
            v18 = v7;
            goto LABEL_13;
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
            v10 = v54 ^ (32 * (v10 ^ (v52 << 10)));
            *(_DWORD *)&s[16 * (((unsigned int)(40799 * v10) >> 5) & 0xFFF)] = v49;
            if ( v49 + 1 >= v7 )
              break;
            ++v49;
          }
          v10 = v49[3] ^ (32 * (v10 ^ (*v49 << 10)));
          goto LABEL_2;
        }
LABEL_51:
        *v6 = (v64 - 1) & 0x1F | (32 * (v14 - 1));
        v6[1] = (v64 - 1) >> 5;
        v6 += 2;
        goto LABEL_38;
      }
    }
    if ( v16[3] != v7[3] )
    {
      v55 = v7 + 4;
      goto LABEL_47;
    }
    if ( v16[4] != v7[4] )
    {
      v55 = v7 + 5;
      goto LABEL_47;
    }
    if ( v16[5] != v7[5] )
    {
      v55 = v7 + 6;
      goto LABEL_47;
    }
    if ( v16[6] != v7[6] )
    {
      v55 = v7 + 7;
      goto LABEL_47;
    }
    v55 = v7 + 8;
    if ( v16[7] != v7[7] || (v55 = v7 + 9, v16[8] != v7[8]) )
    {
LABEL_47:
      if ( v14 < v55 - 1 - v7 )
      {
        v14 = v55 - 1 - v7;
        v64 = v7 - v16;
      }
      goto LABEL_35;
    }
    v62 = 4 * v8;
    v6 = v65;
    v8 = ((_BYTE)v8 + 1) & 3;
    v63 = v62 - 16 + 4 * v11;
    if ( v5 == v7 )
      v64 = v7 - v16;
    v21 = v7;
    *(_DWORD *)&v15[v63] = v7;
    if ( v5 != v7 )
    {
      v12 = v7;
      v64 = v7 - v16;
      v7 += 9;
      v14 = 9;
      goto LABEL_17;
    }
    v7 += 9;
LABEL_24:
    v26 = &v7[-v64];
    if ( v68 > (unsigned int)v7 && *v26 == *v7 )
    {
      v27 = v7 + 1;
      do
      {
        v29 = v68 == (_DWORD)v27;
        v7 = v27++;
        if ( v29 )
          break;
        v28 = *++v26;
      }
      while ( v28 == *v7 );
    }
    v30 = v7 - v5;
    v18 = v7;
    v31 = v6 + 1;
    if ( (unsigned int)(v7 - v5) > 0x22 )
    {
      v58 = v30 - 34;
      for ( *v6 = 32; v58 > 0xFF; ++v31 )
      {
        v58 -= 255;
        *v31 = 0;
      }
      *v31++ = v58;
    }
    else
    {
      *v6 = (v30 - 3) | 0x20;
    }
    *v31 = v64;
    v6 = v31 + 2;
    v31[1] = BYTE1(v64);
    if ( (unsigned int)v7 < v66 )
    {
      v32 = ((_BYTE)v8 + 1) & 3;
      v33 = ((_BYTE)v32 + 1) & 3;
      v34 = v5[3] ^ (32 * (v10 ^ (*v5 << 10)));
      v35 = ((_BYTE)v33 + 1) & 3;
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v34) >> 3) & 0x3FFC) + 4 * v8] = v5 + 1;
      v36 = v5[4] ^ (32 * (v34 ^ (v5[1] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v36) >> 3) & 0x3FFC | v32)] = v5 + 2;
      v37 = ((_BYTE)v35 + 1) & 3;
      v38 = v5[5] ^ (32 * (v36 ^ (v5[2] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v38) >> 3) & 0x3FFC | v33)] = v5 + 3;
      v39 = ((_BYTE)v37 + 1) & 3;
      v40 = v5[6] ^ (32 * (v38 ^ (v5[3] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v40) >> 3) & 0x3FFC | v35)] = v5 + 4;
      v41 = ((_BYTE)v39 + 1) & 3;
      v42 = v5[7] ^ (32 * (v40 ^ (v5[4] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v42) >> 3) & 0x3FFC | v37)] = v5 + 5;
      v43 = ((_BYTE)v41 + 1) & 3;
      v44 = v5[8] ^ (32 * (v42 ^ (v5[5] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v44) >> 3) & 0x3FFC | v39)] = v5 + 6;
      v45 = v5 + 8;
      v8 = ((_BYTE)v43 + 1) & 3;
      v46 = v5[9] ^ (32 * (v44 ^ (v5[6] << 10)));
      *(_DWORD *)&s[4 * (((unsigned int)(40799 * v46) >> 3) & 0x3FFC | v41)] = v5 + 7;
      v47 = v5[7];
      v48 = v5[10];
      v5 = v7;
      *(_DWORD *)&s[4 * (((40799 * (v48 ^ (32 * (v46 ^ (unsigned int)(v47 << 10))))) >> 3) & 0x3FFC | v43)] = v45;
      v10 = v7[2] ^ (32 * (v7[1] ^ (32 * *v7)));
      continue;
    }
    break;
  }
  v5 = v7;
LABEL_13:
  if ( (unsigned __int8 *)v68 != v18 )
    v6 = (_BYTE *)lzo1b_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
