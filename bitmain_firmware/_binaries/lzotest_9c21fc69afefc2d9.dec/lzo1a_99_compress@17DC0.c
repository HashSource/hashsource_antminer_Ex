int __fastcall lzo1a_99_compress(int result, unsigned int a2, int a3, unsigned int *a4, char *s)
{
  unsigned __int8 *v6; // r10
  _BYTE *v7; // r9
  unsigned __int8 *v8; // r8
  int v9; // r3
  int v10; // r11
  unsigned int v11; // r4
  unsigned __int8 *v12; // r12
  unsigned __int8 **v13; // r3
  char *v14; // lr
  unsigned __int8 *v15; // r2
  unsigned __int8 *v16; // t1
  unsigned int v17; // r1
  unsigned __int8 *v18; // r2
  unsigned int v19; // r2
  _BYTE *v20; // r3
  _BYTE *v21; // r9
  _BYTE *v22; // r3
  char v23; // t1
  int v24; // r0
  char v25; // r1
  _BYTE *v26; // r0
  unsigned __int8 *v27; // r2
  unsigned __int8 *v28; // r12
  unsigned __int8 *v29; // r1
  int v30; // lr
  int v31; // t1
  int v32; // t1
  unsigned __int8 *v33; // r3
  unsigned __int8 *v34; // r2
  int v35; // r4
  int v36; // t1
  unsigned __int8 *v37; // r12
  unsigned __int8 *v38; // r1
  int v39; // lr
  int v40; // t1
  int v41; // t1
  unsigned int v42; // r2
  unsigned __int8 *v43; // r10
  _BYTE *v44; // r3
  char v45; // t1
  char v46; // r3
  int v47; // r0
  unsigned int v48; // r0
  bool v49; // r2
  unsigned int v51; // r0
  bool v52; // cc
  int v53; // r2
  bool v54; // zf
  unsigned int v55; // r2
  int v56; // [sp+0h] [bp-3Ch]
  unsigned int v57; // [sp+4h] [bp-38h]
  unsigned __int8 *v58; // [sp+8h] [bp-34h]
  unsigned __int8 *v59; // [sp+8h] [bp-34h]
  unsigned int v60; // [sp+Ch] [bp-30h]
  unsigned __int8 *v61; // [sp+10h] [bp-2Ch]
  unsigned __int8 *v62; // [sp+2Ch] [bp-10h]

  if ( !a2 )
  {
    *a4 = 0;
    result = 0;
  }
  if ( !a2 )
    return result;
  v6 = (unsigned __int8 *)result;
  v7 = (_BYTE *)a3;
  if ( a2 <= 0xA )
  {
    v51 = lzo1b_store_run(a3, (void *)result) - a3;
    *a4 = v51;
    if ( a2 >= v51 )
      return -1;
    else
      return 0;
  }
  v62 = (unsigned __int8 *)(result + a2);
  v8 = (unsigned __int8 *)(result + 1);
  v60 = result + a2 - 9;
  memset(s, 0, 0x40000u);
  v61 = &v6[a2 - 9];
  v9 = v6[2] ^ (32 * (v6[1] ^ (32 * *v6)));
  v56 = 1;
  *(_DWORD *)&s[(40799 * v9) & 0x3FFE0] = v6;
  v10 = v6[3] ^ (32 * (v9 ^ (*v6 << 10)));
  while ( 2 )
  {
    v11 = 0;
    v12 = (unsigned __int8 *)&s[(40799 * v10) & 0x3FFE0];
    v57 = 0;
    v58 = v8;
    v13 = (unsigned __int8 **)(v12 - 4);
    v14 = (char *)(v12 + 28);
    do
    {
      while ( 1 )
      {
        v16 = v13[1];
        ++v13;
        v15 = v16;
        if ( !v16 )
          break;
        v17 = v8 - v15;
        if ( (unsigned int)(v8 - v15) > 0x2000 )
          break;
        if ( v15[v11] == v8[v11] )
        {
          if ( *v15 == *v8 && v15[1] == v8[1] && v15[2] == v8[2] )
          {
            if ( v15[3] == v8[3] )
            {
              if ( v15[4] == v8[4] )
              {
                if ( v15[5] == v8[5] )
                {
                  if ( v15[6] == v8[6] )
                  {
                    v59 = v8 + 8;
                    if ( v15[7] == v8[7] )
                    {
                      v59 = v8 + 9;
                      if ( v15[8] == v8[8] )
                      {
                        v58 = v8;
                        v52 = v17 > v57;
                        if ( v17 >= v57 )
                          v52 = v11 > 8;
                        v53 = !v52;
                        v54 = v53 == 0;
                        if ( v53 )
                          v55 = v17;
                        else
                          v55 = v57;
                        v57 = v55;
                        if ( !v54 )
                          v11 = 9;
                        goto LABEL_8;
                      }
                    }
                  }
                  else
                  {
                    v59 = v8 + 7;
                  }
                }
                else
                {
                  v59 = v8 + 6;
                }
              }
              else
              {
                v59 = v8 + 5;
              }
            }
            else
            {
              v59 = v8 + 4;
            }
            v42 = v59 - 1 - v8;
            if ( v11 >= v42 )
            {
              v48 = v57;
              v49 = v11 == v42;
              v58 = v8;
              if ( v17 < v57 && v49 )
                v48 = v17;
              v57 = v48;
              goto LABEL_8;
            }
            v11 = v59 - 1 - v8;
            v57 = v17;
          }
          v58 = v8;
        }
LABEL_8:
        if ( v14 == (char *)v13 )
          goto LABEL_12;
      }
      *v13 = v8;
    }
    while ( v14 != (char *)v13 );
LABEL_12:
    v18 = v6;
    *(_DWORD *)&v12[4 * v56] = v8;
    if ( v11 <= 2 )
    {
      if ( v60 > (unsigned int)++v8 )
      {
        v10 = v58[3] ^ (32 * (v10 ^ (*v58 << 10)));
        goto LABEL_27;
      }
    }
    else
    {
      if ( v8 != v6 )
      {
        if ( v61 == v8 )
        {
          v46 = *(v7 - 2);
          ++v6;
          *(++v7 - 3) = v46 & 0x1F;
          v61 += 4;
          *(v7 - 1) = *(v6 - 1);
        }
        else
        {
          v19 = v8 - v6;
          if ( (unsigned int)(v8 - v6) <= 0x1F )
          {
            v43 = v6 - 1;
            v44 = v7;
            *v7 = v19;
            do
            {
              v45 = *++v43;
              *++v44 = v45;
            }
            while ( &v7[v19] != v44 );
            v61 = v8 + 4;
            v7 += v19 + 1;
            v6 = v8;
          }
          else if ( v19 >= 0x118 )
          {
            v47 = lzo1b_store_run((int)v7, v6);
            v6 = v8;
            v7 = (_BYTE *)v47;
          }
          else
          {
            v20 = v7;
            *v7 = 0;
            v21 = v7 + 2;
            v20[1] = v19 - 32;
            v22 = v20 + 1;
            do
            {
              v23 = *v6++;
              *++v22 = v23;
            }
            while ( v6 != v8 );
            v7 = &v21[v19];
            v61 = v6 + 4;
          }
        }
      }
      v8 += v11;
      v24 = (unsigned __int8)(v57 - 1);
      v25 = (v57 - 1) >> 5;
      if ( v11 <= 8 )
      {
        *v7 = v24 & 0x1F | (32 * (v11 - 2));
        v26 = v7 + 2;
        v7[1] = v25;
        if ( v60 <= (unsigned int)v8 )
        {
          v6 = v8;
          v7 += 2;
          v18 = v8;
          break;
        }
        v27 = v6 + 1;
        v28 = v6 - 1;
        v29 = v6 + 2;
        while ( 1 )
        {
          v31 = *++v28;
          v30 = v31;
          v6 = v27 + 1;
          v32 = *++v29;
          v10 = v32 ^ (32 * (v10 ^ (v30 << 10)));
          *(_DWORD *)&s[32 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)] = v27;
          if ( v8 <= v27 + 1 )
            break;
          ++v27;
        }
LABEL_26:
        v7 = v26;
        v10 = v6[2] ^ (32 * (v10 ^ (*v27 << 10)));
LABEL_27:
        v56 = ((_BYTE)v56 + 1) & 7;
        continue;
      }
      v18 = v8;
      if ( (unsigned int)(v62 - v8) > 0xFF )
        v12 = v8 + 255;
      v33 = &v8[-v57];
      if ( (unsigned int)(v62 - v8) <= 0xFF )
        v12 = v62;
      if ( v8 < v12 && *v8 == *v33 )
      {
        v34 = v8 + 1;
        do
        {
          v8 = v34;
          if ( v12 == v34 )
            break;
          v35 = *v34++;
          v36 = *++v33;
        }
        while ( v36 == v35 );
        v18 = v8;
      }
      v7[1] = v25;
      *v7 = ~((unsigned int)~(v24 << 27) >> 27);
      v26 = v7 + 3;
      v7[2] = (_BYTE)v8 - (_BYTE)v6 - 9;
      if ( v60 > (unsigned int)v8 )
      {
        v27 = v6 + 1;
        v37 = v6 - 1;
        v38 = v6 + 2;
        while ( 1 )
        {
          v40 = *++v37;
          v39 = v40;
          v6 = v27 + 1;
          v41 = *++v38;
          v10 = v41 ^ (32 * (v10 ^ (v39 << 10)));
          *(_DWORD *)&s[32 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)] = v27;
          if ( v27 + 1 >= v8 )
            break;
          ++v27;
        }
        goto LABEL_26;
      }
      v6 = v8;
      v7 += 3;
    }
    break;
  }
  if ( v18 != v62 )
    v7 = (_BYTE *)lzo1b_store_run((int)v7, v6);
  result = 0;
  *a4 = (unsigned int)&v7[-a3];
  return result;
}
