int __fastcall lzo1_99_compress(int result, unsigned int a2, _BYTE *a3, unsigned int *a4, char *s)
{
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // r8
  _BYTE *v8; // r6
  int v9; // r3
  int v10; // r11
  unsigned int v11; // r4
  char *v12; // r0
  unsigned __int8 **v13; // r3
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // r2
  unsigned __int8 *v16; // t1
  unsigned int v17; // r1
  unsigned __int8 *v18; // r2
  unsigned int v19; // r2
  _BYTE *v20; // r3
  char v21; // t1
  int v22; // r0
  char v23; // r1
  _BYTE *v24; // r0
  unsigned __int8 *v25; // r2
  unsigned __int8 *v26; // r12
  unsigned __int8 *v27; // r1
  int v28; // lr
  int v29; // t1
  int v30; // t1
  unsigned __int8 *v31; // r3
  unsigned __int8 *v32; // r2
  int v33; // r4
  int v34; // t1
  unsigned __int8 *v35; // r12
  unsigned __int8 *v36; // r1
  int v37; // lr
  int v38; // t1
  int v39; // t1
  unsigned int v40; // r2
  int v41; // r0
  unsigned __int8 *v42; // r10
  _BYTE *v43; // r3
  char v44; // t1
  unsigned int v45; // lr
  bool v46; // r2
  unsigned int v48; // r0
  int v49; // r5
  bool v50; // cc
  int v51; // r2
  bool v52; // zf
  unsigned int v53; // r2
  int v54; // [sp+4h] [bp-38h]
  unsigned int v55; // [sp+8h] [bp-34h]
  unsigned __int8 *v56; // [sp+Ch] [bp-30h]
  unsigned __int8 *v57; // [sp+Ch] [bp-30h]
  unsigned int v58; // [sp+10h] [bp-2Ch]
  unsigned __int8 *v59; // [sp+2Ch] [bp-10h]

  if ( !a2 )
  {
    *a4 = 0;
    result = 0;
  }
  if ( !a2 )
    return result;
  v6 = (unsigned __int8 *)result;
  if ( a2 <= 0xA )
  {
    v48 = lzo1b_store_run((int)a3, (void *)result) - (_DWORD)a3;
    *a4 = v48;
    if ( a2 >= v48 )
      return -1;
    else
      return 0;
  }
  v58 = result + a2 - 9;
  v7 = (unsigned __int8 *)(result + 1);
  v59 = (unsigned __int8 *)(result + a2);
  v8 = a3;
  memset(s, 0, 0x40000u);
  v54 = 1;
  v9 = v6[2] ^ (32 * (v6[1] ^ (32 * *v6)));
  *(_DWORD *)&s[(40799 * v9) & 0x3FFE0] = v6;
  v10 = v6[3] ^ (32 * (v9 ^ (*v6 << 10)));
  while ( 2 )
  {
    v56 = v7;
    v11 = 0;
    v12 = &s[(40799 * v10) & 0x3FFE0];
    v55 = 0;
    v13 = (unsigned __int8 **)(v12 - 4);
    v14 = (unsigned __int8 *)(v12 + 28);
    do
    {
      while ( 1 )
      {
        v16 = v13[1];
        ++v13;
        v15 = v16;
        if ( !v16 )
          break;
        v17 = v7 - v15;
        if ( (unsigned int)(v7 - v15) > 0x2000 )
          break;
        if ( v15[v11] == v7[v11] )
        {
          if ( *v15 == *v7 && v15[1] == v7[1] && v15[2] == v7[2] )
          {
            if ( v15[3] == v7[3] )
            {
              if ( v15[4] == v7[4] )
              {
                if ( v15[5] == v7[5] )
                {
                  if ( v15[6] == v7[6] )
                  {
                    v57 = v7 + 8;
                    if ( v15[7] == v7[7] )
                    {
                      v57 = v7 + 9;
                      if ( v15[8] == v7[8] )
                      {
                        v56 = v7;
                        v50 = v17 > v55;
                        if ( v17 >= v55 )
                          v50 = v11 > 8;
                        v51 = !v50;
                        v52 = v51 == 0;
                        if ( v51 )
                          v53 = v17;
                        else
                          v53 = v55;
                        v55 = v53;
                        if ( !v52 )
                          v11 = 9;
                        goto LABEL_8;
                      }
                    }
                  }
                  else
                  {
                    v57 = v7 + 7;
                  }
                }
                else
                {
                  v57 = v7 + 6;
                }
              }
              else
              {
                v57 = v7 + 5;
              }
            }
            else
            {
              v57 = v7 + 4;
            }
            v40 = v57 - 1 - v7;
            if ( v11 >= v40 )
            {
              v45 = v55;
              v46 = v11 == v40;
              v56 = v7;
              if ( v17 < v55 && v46 )
                v45 = v17;
              v55 = v45;
              goto LABEL_8;
            }
            v11 = v57 - 1 - v7;
            v55 = v17;
          }
          v56 = v7;
        }
LABEL_8:
        if ( v14 == (unsigned __int8 *)v13 )
          goto LABEL_12;
      }
      *v13 = v7;
    }
    while ( v14 != (unsigned __int8 *)v13 );
LABEL_12:
    v18 = v6;
    *(_DWORD *)&v12[4 * v54] = v7;
    if ( v11 <= 2 )
    {
      if ( v58 > (unsigned int)++v7 )
      {
        v10 = v56[3] ^ (32 * (v10 ^ (*v56 << 10)));
        goto LABEL_26;
      }
      v49 = (int)v8;
    }
    else
    {
      if ( v7 != v6 )
      {
        v19 = v7 - v6;
        if ( (unsigned int)(v7 - v6) <= 0x1F )
        {
          v42 = v6 - 1;
          v43 = v8;
          *v8 = v19;
          do
          {
            v44 = *++v42;
            *++v43 = v44;
          }
          while ( &v8[v19] != v43 );
          v6 = v7;
          v8 += v19 + 1;
        }
        else if ( v19 >= 0x118 )
        {
          v41 = lzo1b_store_run((int)v8, v6);
          v6 = v7;
          v8 = (_BYTE *)v41;
        }
        else
        {
          v14 = 0;
          *v8 = 0;
          v8[1] = v19 - 32;
          v20 = v8 + 1;
          do
          {
            v21 = *v6++;
            *++v20 = v21;
          }
          while ( v6 != v7 );
          v8 += v19 + 2;
        }
      }
      v7 += v11;
      v22 = (unsigned __int8)(v55 - 1);
      v23 = (v55 - 1) >> 5;
      if ( v11 <= 8 )
      {
        *v8 = v22 & 0x1F | (32 * (v11 - 2));
        v24 = v8 + 2;
        v8[1] = v23;
        if ( v58 <= (unsigned int)v7 )
        {
          v6 = v7;
          v49 = (int)(v8 + 2);
          v18 = v7;
          break;
        }
        v25 = v6 + 1;
        v26 = v6 - 1;
        v27 = v6 + 2;
        while ( 1 )
        {
          v29 = *++v26;
          v28 = v29;
          v6 = v25 + 1;
          v30 = *++v27;
          v10 = v30 ^ (32 * (v10 ^ (v28 << 10)));
          *(_DWORD *)&s[32 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)] = v25;
          if ( v7 <= v25 + 1 )
            break;
          ++v25;
        }
LABEL_25:
        v8 = v24;
        v10 = v6[2] ^ (32 * (v10 ^ (*v25 << 10)));
LABEL_26:
        v54 = ((_BYTE)v54 + 1) & 7;
        continue;
      }
      v18 = v7;
      if ( (unsigned int)(v59 - v7) > 0xFF )
        v14 = v7 + 255;
      v31 = &v7[-v55];
      if ( (unsigned int)(v59 - v7) <= 0xFF )
        v14 = v59;
      if ( v7 < v14 && *v31 == *v7 )
      {
        v32 = v7 + 1;
        do
        {
          v7 = v32;
          if ( v14 == v32 )
            break;
          v33 = *v32++;
          v34 = *++v31;
        }
        while ( v34 == v33 );
        v18 = v7;
      }
      v8[1] = v23;
      *v8 = ~((unsigned int)~(v22 << 27) >> 27);
      v24 = v8 + 3;
      v8[2] = (_BYTE)v7 - (_BYTE)v6 - 9;
      if ( v58 > (unsigned int)v7 )
      {
        v25 = v6 + 1;
        v35 = v6 - 1;
        v36 = v6 + 2;
        while ( 1 )
        {
          v38 = *++v35;
          v37 = v38;
          v6 = v25 + 1;
          v39 = *++v36;
          v10 = v39 ^ (32 * (v10 ^ (v37 << 10)));
          *(_DWORD *)&s[32 * (((unsigned int)(40799 * v10) >> 5) & 0x1FFF)] = v25;
          if ( v25 + 1 >= v7 )
            break;
          ++v25;
        }
        goto LABEL_25;
      }
      v6 = v7;
      v49 = (int)(v8 + 3);
    }
    break;
  }
  if ( v18 != v59 )
    v49 = lzo1b_store_run(v49, v6);
  result = 0;
  *a4 = v49 - (_DWORD)a3;
  return result;
}
