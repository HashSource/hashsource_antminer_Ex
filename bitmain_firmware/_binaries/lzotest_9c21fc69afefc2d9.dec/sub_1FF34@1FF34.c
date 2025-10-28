int __fastcall sub_1FF34(unsigned __int8 *src, int a2, int a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r8
  int v6; // r3
  _BYTE *v7; // r6
  unsigned __int8 *v8; // r11
  int v9; // r7
  int v10; // r1
  unsigned __int8 *v11; // lr
  unsigned __int8 **v12; // r3
  unsigned __int8 **v13; // r12
  unsigned int v14; // r4
  unsigned __int8 *v15; // r2
  unsigned int v16; // t1
  unsigned int v17; // r0
  bool v18; // zf
  unsigned __int8 *v19; // r2
  unsigned int v21; // r2
  _BYTE *v22; // r3
  _BYTE *v23; // r6
  _BYTE *v24; // r3
  char v25; // t1
  unsigned __int8 *v26; // r2
  char *v27; // r0
  char *v28; // r1
  int v29; // r12
  int v30; // t1
  int v31; // t1
  unsigned __int8 *v32; // r2
  unsigned __int8 *v33; // r3
  int v34; // t1
  int v35; // r3
  _BYTE *v36; // r1
  unsigned __int8 *v37; // r2
  char *v38; // r0
  char *v39; // r1
  int v40; // r12
  int v41; // t1
  int v42; // t1
  int v43; // r0
  char v44; // r3
  unsigned int v45; // r3
  bool v46; // zf
  _BYTE *v47; // r3
  _BYTE *v48; // r1
  char v49; // t1
  unsigned __int8 *v50; // r5
  unsigned int v51; // r2
  unsigned int v52; // r1
  bool v53; // r2
  _BOOL4 v55; // r2
  bool v56; // zf
  unsigned int v57; // r2
  int v59; // [sp+4h] [bp-40h]
  unsigned int v60; // [sp+8h] [bp-3Ch]
  char *v61; // [sp+10h] [bp-34h]
  unsigned __int8 *v62; // [sp+2Ch] [bp-18h]
  char *v63; // [sp+30h] [bp-14h]
  _BYTE *v64; // [sp+34h] [bp-10h]

  v5 = src;
  v61 = (char *)&src[a2 - 9];
  v63 = (char *)&src[a2];
  v6 = src[2] ^ (32 * (src[1] ^ (32 * *src)));
  v62 = (unsigned __int8 *)v61;
  v7 = (_BYTE *)a3;
  v64 = (_BYTE *)(a3 + 1);
  v59 = 1;
  v8 = src + 1;
  *(_DWORD *)(a5 + 4 * (((unsigned int)(40799 * v6) >> 3) & 0x3FFC)) = src;
  v9 = src[3] ^ (32 * (v6 ^ (*src << 10)));
  while ( 2 )
  {
    v10 = a5 + 16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF);
    v11 = v8;
    v12 = (unsigned __int8 **)(v10 - 4);
    v13 = (unsigned __int8 **)(v10 + 12);
    v14 = 0;
    v60 = 0;
    do
    {
      v16 = (unsigned int)v12[1];
      ++v12;
      v15 = (unsigned __int8 *)v16;
      LOBYTE(v17) = (_BYTE)src;
      if ( v16 < (unsigned int)src || (v17 = v8 - v15, (unsigned int)(v8 - v15 - 1) > 0x3FFE) )
      {
        *v12 = v8;
        continue;
      }
      if ( v15[v14] == v8[v14] )
      {
        if ( *v15 != *v8 || v15[1] != v8[1] || v15[2] != v8[2] )
          goto LABEL_33;
        if ( v15[3] == v8[3] )
        {
          if ( v15[4] == v8[4] )
          {
            if ( v15[5] == v8[5] )
            {
              v50 = v8 + 7;
              if ( v15[6] == v8[6] )
              {
                v50 = v8 + 8;
                if ( v15[7] == v8[7] )
                {
                  v50 = v8 + 9;
                  if ( v15[8] == v8[8] )
                  {
                    v11 = v8;
                    v55 = v60 > v17;
                    if ( v14 <= 8 )
                      v55 = 1;
                    v56 = !v55;
                    if ( v55 )
                      v57 = v17;
                    else
                      v57 = v60;
                    v60 = v57;
                    if ( !v56 )
                      v14 = 9;
                    continue;
                  }
                }
              }
            }
            else
            {
              v50 = v8 + 6;
            }
          }
          else
          {
            v50 = v8 + 5;
          }
        }
        else
        {
          v50 = v8 + 4;
        }
        v51 = v50 - 1 - v8;
        if ( v14 < v51 )
        {
          v14 = v50 - 1 - v8;
          v60 = v17;
LABEL_33:
          v11 = v8;
          continue;
        }
        v52 = v60;
        v53 = v14 == v51;
        v11 = v8;
        if ( v60 > v17 && v53 )
          v52 = v17;
        v60 = v52;
      }
    }
    while ( v13 != v12 );
    *(_DWORD *)(a5 + 16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF) + 4 * v59) = v8;
    if ( v14 <= 3 )
    {
      v18 = v60 == 0x2000;
      if ( v60 <= 0x2000 )
        v18 = v14 == 3;
      if ( !v18 )
      {
        if ( v61 <= (char *)++v8 )
        {
          v19 = v5;
          goto LABEL_13;
        }
        v9 = v11[3] ^ (32 * (v9 ^ (*v11 << 10)));
LABEL_47:
        v59 = ((_BYTE)v59 + 1) & 3;
        continue;
      }
    }
    break;
  }
  if ( v8 != v5 )
  {
    if ( v8 == v62 )
    {
      v44 = *(v7 - 2);
      v62 = v8 + 4;
      ++v5;
      *(++v7 - 3) = v44 & 0x1F;
      *(v7 - 1) = *(v5 - 1);
    }
    else
    {
      v21 = v8 - v5;
      if ( (unsigned int)(v8 - v5) <= 0x1F )
      {
        v46 = v21 == 3;
        if ( v21 <= 3 )
          v46 = v7 == v64;
        if ( v46 )
        {
          LOBYTE(v17) = *(v64 - 2);
          v47 = v7;
        }
        else
        {
          v47 = v7 + 1;
          *v7 = v21;
        }
        if ( v46 )
          *(v64 - 2) = v17 | ((_BYTE)v21 << 6);
        v48 = v47 - 1;
        do
        {
          v49 = *v5++;
          *++v48 = v49;
        }
        while ( v8 != v5 );
        v7 = &v47[v21];
        v62 = v8 + 4;
      }
      else if ( v21 >= 0x118 )
      {
        v43 = lzo1c_store_run((int)v7, v5);
        v5 = v8;
        v7 = (_BYTE *)v43;
      }
      else
      {
        v22 = v7;
        *v7 = 0;
        v23 = v7 + 2;
        v22[1] = v21 - 32;
        v24 = v22 + 1;
        do
        {
          v25 = *v5++;
          *++v24 = v25;
        }
        while ( v8 != v5 );
        v7 = &v23[v21];
        v62 = v8 + 4;
      }
    }
  }
  v8 += v14;
  if ( v14 > 8 )
  {
    v32 = &v8[-v60];
    if ( v63 > (char *)v8 && *v8 == *v32 )
    {
      v33 = v8 + 1;
      do
      {
        v18 = v63 == (char *)v33;
        v8 = v33++;
        if ( v18 )
          break;
        v34 = *++v32;
      }
      while ( v34 == *v8 );
    }
    v35 = v8 - v5;
    v19 = v8;
    v36 = v7 + 1;
    if ( (unsigned int)(v8 - v5) > 0x22 )
    {
      v45 = v35 - 34;
      for ( *v7 = 32; v45 > 0xFF; ++v36 )
      {
        v45 -= 255;
        *v36 = 0;
      }
      *v36++ = v45;
    }
    else
    {
      *v7 = (v35 - 3) | 0x20;
    }
    *v36 = v60 & 0x3F;
    v7 = v36 + 2;
    v36[1] = v60 >> 6;
    if ( v8 < (unsigned __int8 *)v61 )
    {
      v37 = v5 + 1;
      v38 = (char *)(v5 - 1);
      v39 = (char *)(v5 + 2);
      while ( 1 )
      {
        v41 = (unsigned __int8)*++v38;
        v40 = v41;
        v5 = v37 + 1;
        v42 = (unsigned __int8)*++v39;
        v9 = v42 ^ (32 * (v9 ^ (v40 << 10)));
        *(_DWORD *)(a5 + 16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF)) = v37;
        if ( v8 <= v37 + 1 )
          break;
        ++v37;
      }
      v64 = v7;
      v9 = v37[3] ^ (32 * (v9 ^ (*v37 << 10)));
      goto LABEL_47;
    }
    v5 = v8;
  }
  else
  {
    if ( v60 <= 0x2000 )
    {
      *v7 = (v60 - 1) & 0x1F | (32 * (v14 - 1));
      v7[1] = (v60 - 1) >> 5;
      v7 += 2;
    }
    else
    {
      *v7 = (v14 - 3) | 0x20;
      v64 = v7 + 3;
      v7[1] = v60 & 0x3F;
      v7[2] = v60 >> 6;
      v7 += 3;
    }
    if ( v61 > (char *)v8 )
    {
      v26 = v5 + 1;
      v27 = (char *)(v5 - 1);
      v28 = (char *)(v5 + 2);
      while ( 1 )
      {
        v30 = (unsigned __int8)*++v27;
        v29 = v30;
        v5 = v26 + 1;
        v31 = (unsigned __int8)*++v28;
        v9 = v31 ^ (32 * (v9 ^ (v29 << 10)));
        *(_DWORD *)(a5 + 16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF)) = v26;
        if ( v8 <= v26 + 1 )
          break;
        ++v26;
      }
      v9 = v26[3] ^ (32 * (v9 ^ (*v26 << 10)));
      goto LABEL_47;
    }
    v5 = v8;
    v19 = v8;
  }
LABEL_13:
  if ( v63 != (char *)v19 )
    v7 = (_BYTE *)lzo1c_store_run((int)v7, v5);
  *a4 = &v7[-a3];
  return 0;
}
