int __fastcall sub_1B57C(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r7
  unsigned __int8 *v7; // r6
  int v8; // r0
  int v9; // r5
  unsigned int v10; // r4
  unsigned int v11; // r10
  unsigned __int8 *v12; // lr
  char *v13; // r3
  char *v14; // r12
  char *v15; // r0
  unsigned __int8 *v16; // r2
  unsigned __int8 *v17; // t1
  unsigned int v18; // r1
  unsigned __int8 *v19; // r2
  unsigned int v22; // lr
  unsigned int v23; // r2
  _BYTE *v24; // r3
  char v25; // t1
  _BYTE *v26; // r3
  unsigned __int8 *v27; // r2
  unsigned __int8 *v28; // r0
  unsigned __int8 *v29; // r1
  int v30; // r12
  int v31; // t1
  int v32; // t1
  unsigned __int8 *v33; // lr
  unsigned int v34; // r2
  bool v35; // r2
  int v36; // r2
  unsigned __int8 *v37; // r2
  unsigned __int8 *v38; // r0
  unsigned __int8 *v39; // r1
  int v40; // r12
  int v41; // t1
  int v42; // t1
  unsigned __int8 *v43; // r1
  unsigned int v44; // r4
  unsigned __int8 *v45; // r1
  _BYTE *v46; // r3
  char v47; // t1
  int v48; // r8
  unsigned int v49; // r2
  unsigned int v50; // r2
  _BYTE *v51; // [sp+0h] [bp-3Ch]
  int v52; // [sp+4h] [bp-38h]
  unsigned int v53; // [sp+8h] [bp-34h]
  unsigned __int8 *v54; // [sp+Ch] [bp-30h]
  unsigned int v55; // [sp+28h] [bp-14h]
  unsigned __int8 *v58; // [sp+34h] [bp-8h]

  v5 = a1;
  v53 = (unsigned int)&a1[a2 - 9];
  v7 = a1 + 1;
  v55 = (unsigned int)&a1[a2];
  v54 = (unsigned __int8 *)v53;
  memset(s, 0, 0x40000u);
  v51 = (_BYTE *)a3;
  v52 = 1;
  v8 = v5[2] ^ (32 * (v5[1] ^ (32 * *v5)));
  *(_DWORD *)&s[(40799 * v8) & 0x3FFE0] = v5;
  v9 = v5[3] ^ (32 * (v8 ^ (*v5 << 10)));
  while ( 2 )
  {
    while ( 2 )
    {
      v10 = 0;
      v11 = 0;
      v12 = v7;
      v13 = &s[(40799 * v9) & 0x3FFE0];
      v14 = v13 + 32;
      do
      {
        while ( 1 )
        {
          v15 = v13;
          v17 = *(unsigned __int8 **)v13;
          v13 += 4;
          v16 = v17;
          if ( !v17 )
            break;
          v18 = v7 - v16;
          if ( (unsigned int)(v7 - v16) >= 0x10000 )
            break;
          if ( v16[v10] == v7[v10] )
          {
            if ( *v16 == *v7 && v16[1] == v7[1] && v16[2] == v7[2] )
            {
              if ( v16[3] == v7[3] )
              {
                if ( v16[4] == v7[4] )
                {
                  if ( v16[5] == v7[5] )
                  {
                    if ( v16[6] == v7[6] )
                    {
                      v33 = v7 + 8;
                      if ( v16[7] == v7[7] )
                      {
                        v33 = v7 + 9;
                        if ( v16[8] == v7[8] )
                        {
                          v58 = v16 + 8;
                          while ( 1 )
                          {
                            if ( (unsigned int)v33 >= v55 )
                            {
                              v22 = v33 - v7;
                              if ( v10 < v22 )
                              {
                                v10 = v22;
                                v11 = v7 - v16;
                                v12 = v7;
                                goto LABEL_21;
                              }
                              goto LABEL_82;
                            }
                            v48 = *++v58;
                            if ( v48 != *v33 )
                              break;
                            ++v33;
                          }
                          v22 = v33 - v7;
                          if ( v10 < v22 )
                          {
                            v10 = v22;
                            v11 = v7 - v16;
                            goto LABEL_18;
                          }
LABEL_82:
                          v49 = __clz(v10 - v22);
                          v12 = v7;
                          v50 = v49 >> 5;
                          if ( v11 <= v18 )
                            v50 = 0;
                          if ( v50 )
                            v11 = v18;
                          goto LABEL_4;
                        }
                      }
                    }
                    else
                    {
                      v33 = v7 + 7;
                    }
                  }
                  else
                  {
                    v33 = v7 + 6;
                  }
                }
                else
                {
                  v33 = v7 + 5;
                }
              }
              else
              {
                v33 = v7 + 4;
              }
              v34 = v33 - 1 - v7;
              if ( v10 < v34 )
              {
                v10 = v33 - 1 - v7;
                v11 = v18;
                v12 = v7;
              }
              else
              {
                v35 = v10 == v34;
                v36 = v11 > v18 && v35;
                v12 = v7;
                if ( v36 )
                  v11 = v18;
              }
            }
            else
            {
LABEL_18:
              v12 = v7;
            }
          }
LABEL_4:
          if ( v14 == v13 )
            goto LABEL_8;
        }
        *((_DWORD *)v13 - 1) = v7;
      }
      while ( v14 != v13 );
LABEL_8:
      v19 = v5;
      *(_DWORD *)&v15[4 * v52 - 28] = v7;
      v52 = ((_BYTE)v52 + 1) & 7;
      if ( v10 > 3 )
      {
LABEL_21:
        v7 += v10;
        if ( v12 == v5 )
          goto LABEL_28;
        goto LABEL_22;
      }
      if ( v11 <= 0x2000 && v10 == 3 )
      {
        v10 = 3;
        v7 += 3;
        if ( v12 == v5 )
          goto LABEL_56;
LABEL_22:
        if ( v54 == v12 )
        {
          ++v5;
          v54 += 4;
          *(v51 - 2) &= 0x1Fu;
          *v51++ = *(v5 - 1);
        }
        else
        {
          v23 = v12 - v5;
          if ( (unsigned int)(v12 - v5) <= 0x1F )
          {
            v45 = v5 - 1;
            v46 = v51;
            *v51 = v23;
            do
            {
              v47 = *++v45;
              *++v46 = v47;
            }
            while ( &v51[v23] != v46 );
            v5 = v12;
            v51 += v23 + 1;
            v54 = v12 + 4;
          }
          else if ( v23 >= 0x118 )
          {
            v43 = v5;
            v5 = v12;
            v51 = (_BYTE *)lzo1b_store_run((int)v51, v43);
          }
          else
          {
            *v51 = 0;
            v51[1] = v23 - 32;
            v24 = v51 + 1;
            do
            {
              v25 = *v5++;
              *++v24 = v25;
            }
            while ( v5 != v12 );
            v51 += v23 + 2;
            v54 = v12 + 4;
          }
        }
LABEL_28:
        if ( v10 > 8 )
        {
          v26 = v51 + 1;
          if ( v10 > 0x22 )
          {
            v44 = v10 - 34;
            for ( *v51 = 32; v44 > 0xFF; ++v26 )
            {
              v44 -= 255;
              *v26 = 0;
            }
            *v26++ = v44;
          }
          else
          {
            *v51 = (v10 - 3) | 0x20;
          }
          *v26 = v11;
          v51 = v26 + 2;
          v26[1] = BYTE1(v11);
          if ( v53 > (unsigned int)v7 )
          {
            v27 = v5 + 1;
            v28 = v5 - 1;
            v29 = v5 + 2;
            while ( 1 )
            {
              v31 = *++v28;
              v30 = v31;
              v5 = v27 + 1;
              v32 = *++v29;
              v9 = v32 ^ (32 * (v9 ^ (v30 << 10)));
              *(_DWORD *)&s[32 * (((unsigned int)(40799 * v9) >> 5) & 0x1FFF)] = v27;
              if ( v27 + 1 >= v7 )
                break;
              ++v27;
            }
            v9 = v27[3] ^ (32 * (v9 ^ (*v27 << 10)));
            continue;
          }
          goto LABEL_66;
        }
        if ( v11 > 0x2000 )
        {
          *(_WORD *)(v51 + 1) = v11;
          *v51 = (v10 - 3) | 0x20;
          v51 += 3;
          goto LABEL_50;
        }
LABEL_56:
        *v51 = (v11 - 1) & 0x1F | (32 * (v10 - 1));
        v51[1] = (v11 - 1) >> 5;
        v51 += 2;
LABEL_50:
        if ( v53 > (unsigned int)v7 )
        {
          v37 = v5 + 1;
          v38 = v5 - 1;
          v39 = v5 + 2;
          while ( 1 )
          {
            v41 = *++v38;
            v40 = v41;
            v5 = v37 + 1;
            v42 = *++v39;
            v9 = v42 ^ (32 * (v9 ^ (v40 << 10)));
            *(_DWORD *)&s[32 * (((unsigned int)(40799 * v9) >> 5) & 0x1FFF)] = v37;
            if ( v37 + 1 >= v7 )
              break;
            ++v37;
          }
          v9 = v37[3] ^ (32 * (v9 ^ (*v37 << 10)));
          continue;
        }
LABEL_66:
        v5 = v7;
        v19 = v7;
        goto LABEL_14;
      }
      break;
    }
    if ( v53 > (unsigned int)++v7 )
    {
      v9 = v12[3] ^ (32 * (v9 ^ (*v12 << 10)));
      continue;
    }
    break;
  }
LABEL_14:
  if ( (unsigned __int8 *)v55 != v19 )
    v51 = (_BYTE *)lzo1b_store_run((int)v51, v5);
  *a4 = &v51[-a3];
  return 0;
}
