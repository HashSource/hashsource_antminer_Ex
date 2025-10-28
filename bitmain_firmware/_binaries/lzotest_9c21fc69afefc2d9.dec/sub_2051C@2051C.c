int __fastcall sub_2051C(unsigned __int8 *a1, int a2, _BYTE *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r8
  int v6; // r3
  _BYTE *v7; // r9
  unsigned __int8 *v8; // r11
  int v10; // r10
  unsigned int v11; // r4
  unsigned __int8 *v12; // r6
  unsigned int *v13; // r3
  int v14; // r2
  unsigned int *v15; // r0
  _BYTE *v16; // r10
  int v17; // r9
  unsigned int *v18; // r1
  unsigned __int8 *v19; // r2
  unsigned int v20; // t1
  unsigned int v21; // r12
  int v22; // r3
  int v23; // r10
  unsigned __int8 *v24; // r2
  int v26; // r7
  int v28; // r6
  int v29; // r3
  unsigned int v30; // r2
  _BYTE *v31; // r3
  char v32; // t1
  _BYTE *v33; // r3
  unsigned __int8 *v34; // r2
  unsigned __int8 *v35; // r0
  _BYTE *v36; // r1
  int v37; // lr
  int v38; // t1
  int v39; // t1
  unsigned __int8 *v40; // r2
  unsigned __int8 *v41; // r0
  _BYTE *v42; // r1
  int v43; // lr
  int v44; // t1
  int v45; // t1
  int v46; // r0
  char v47; // r3
  unsigned __int8 *v48; // lr
  unsigned int v49; // r2
  unsigned int v50; // lr
  bool v51; // r2
  unsigned int v53; // r4
  bool v54; // zf
  _BYTE *v55; // r0
  _BYTE *v56; // r3
  char v57; // t1
  int v58; // r2
  unsigned int v59; // r2
  unsigned int v60; // lr
  unsigned int v61; // lr
  unsigned int v62; // [sp+0h] [bp-44h]
  int v63; // [sp+4h] [bp-40h]
  unsigned __int8 *src; // [sp+8h] [bp-3Ch]
  unsigned __int8 *v65; // [sp+Ch] [bp-38h]
  unsigned __int8 *v66; // [sp+10h] [bp-34h]
  _BYTE *v67; // [sp+2Ch] [bp-18h]
  unsigned __int8 *v68; // [sp+30h] [bp-14h]
  unsigned __int8 *v71; // [sp+3Ch] [bp-8h]

  v5 = a1;
  v68 = &a1[a2];
  v6 = a1[2] ^ (32 * (a1[1] ^ (32 * *a1)));
  v63 = 1;
  v7 = a3;
  v67 = a3 + 1;
  v8 = a1 + 1;
  v65 = &a1[a2 - 9];
  *(_DWORD *)(((40799 * v6) & 0x3FFE0) + a5) = a1;
  v66 = v65;
  v10 = a1[3] ^ (32 * (v6 ^ (*a1 << 10)));
  while ( 2 )
  {
    while ( 2 )
    {
      v11 = 0;
      v62 = 0;
      v12 = v8;
      src = v5;
      v13 = (unsigned int *)(a5 + ((40799 * v10) & 0x3FFE0));
      v14 = v10;
      v15 = v13 + 8;
      v16 = v7;
      v17 = v14;
      do
      {
        while ( 1 )
        {
          v18 = v13;
          v20 = *v13++;
          v19 = (unsigned __int8 *)v20;
          if ( v20 < (unsigned int)a1 || (v21 = v8 - v19, (unsigned int)(v8 - v19 - 1) > 0x3FFE) )
          {
            *(v13 - 1) = (unsigned int)v8;
            goto LABEL_4;
          }
          if ( v19[v11] != v8[v11] )
            goto LABEL_4;
          if ( *v19 != *v8 || v19[1] != v8[1] || v19[2] != v8[2] )
            break;
          if ( v19[3] == v8[3] )
          {
            if ( v19[4] == v8[4] )
            {
              if ( v19[5] == v8[5] )
              {
                v48 = v8 + 7;
                if ( v19[6] == v8[6] )
                {
                  v48 = v8 + 8;
                  if ( v19[7] == v8[7] )
                  {
                    v48 = v8 + 9;
                    if ( v19[8] == v8[8] )
                    {
                      v5 = src;
                      v71 = v19 + 8;
                      while ( 1 )
                      {
                        if ( v48 >= v68 )
                        {
                          v28 = v48 - v8;
                          if ( v11 < v48 - v8 )
                          {
                            v29 = v17;
                            v7 = v16;
                            v11 = v48 - v8;
                            v23 = v29;
                            v12 = v8;
                            v62 = v21;
                            goto LABEL_22;
                          }
                          goto LABEL_88;
                        }
                        v58 = *++v71;
                        if ( v58 != *v48 )
                          break;
                        ++v48;
                      }
                      v28 = v48 - v8;
                      if ( v11 < v48 - v8 )
                      {
                        v11 = v48 - v8;
                        v62 = v21;
                        break;
                      }
LABEL_88:
                      v59 = v62;
                      v60 = __clz(v11 - v28);
                      v12 = v8;
                      v61 = v60 >> 5;
                      if ( v62 <= v21 )
                        v61 = 0;
                      if ( v61 )
                        v59 = v21;
                      v62 = v59;
                      goto LABEL_4;
                    }
                  }
                }
              }
              else
              {
                v48 = v8 + 6;
              }
            }
            else
            {
              v48 = v8 + 5;
            }
          }
          else
          {
            v48 = v8 + 4;
          }
          v49 = v48 - 1 - v8;
          if ( v11 < v49 )
          {
            v11 = v48 - 1 - v8;
            v62 = v21;
            v12 = v8;
          }
          else
          {
            v50 = v62;
            v51 = v11 == v49;
            v12 = v8;
            if ( v62 > v21 && v51 )
              v50 = v21;
            v62 = v50;
          }
LABEL_4:
          if ( v15 == v13 )
            goto LABEL_10;
        }
        v12 = v8;
      }
      while ( v15 != v13 );
LABEL_10:
      v22 = v17;
      v7 = v16;
      v23 = v22;
      v5 = src;
      v18 += v63;
      *(v18 - 7) = (unsigned int)v8;
      v24 = src;
      v63 = ((_BYTE)v63 + 1) & 7;
      if ( v11 > 3 )
      {
LABEL_22:
        v8 += v11;
        if ( v12 == v5 )
          goto LABEL_29;
        goto LABEL_23;
      }
      LOBYTE(v18) = v62;
      if ( v62 <= 0x2000 && v11 == 3 )
      {
        v11 = 3;
        v8 += 3;
        if ( v12 == src )
          goto LABEL_45;
LABEL_23:
        if ( v66 == v12 )
        {
          v47 = *(v7 - 2);
          ++v5;
          *(++v7 - 3) = v47 & 0x1F;
          v66 += 4;
          *(v7 - 1) = *(v5 - 1);
        }
        else
        {
          v30 = v12 - v5;
          if ( (unsigned int)(v12 - v5) <= 0x1F )
          {
            v54 = v30 == 3;
            if ( v30 <= 3 )
              v54 = v7 == v67;
            if ( v54 )
            {
              LOBYTE(v18) = *(v67 - 2);
              v55 = v7;
            }
            else
            {
              v55 = v7 + 1;
              *v7 = v30;
            }
            if ( v54 )
              *(v67 - 2) = (unsigned __int8)v18 | ((_BYTE)v30 << 6);
            v56 = v55 - 1;
            do
            {
              v57 = *v5++;
              *++v56 = v57;
            }
            while ( v5 != v12 );
            v7 = &v55[v30];
            v66 = v12 + 4;
          }
          else if ( v30 >= 0x118 )
          {
            v46 = lzo1c_store_run((int)v7, v5);
            v5 = v12;
            v7 = (_BYTE *)v46;
          }
          else
          {
            *v7 = 0;
            v7[1] = v30 - 32;
            v31 = v7 + 1;
            do
            {
              v32 = *v5++;
              *++v31 = v32;
            }
            while ( v5 != v12 );
            v7 += v30 + 2;
            v66 = v12 + 4;
          }
        }
LABEL_29:
        if ( v11 > 8 )
        {
          v33 = v7 + 1;
          if ( v11 > 0x22 )
          {
            v53 = v11 - 34;
            for ( *v7 = 32; v53 > 0xFF; ++v33 )
            {
              v53 -= 255;
              *v33 = 0;
            }
            *v33++ = v53;
          }
          else
          {
            *v7 = (v11 - 3) | 0x20;
          }
          *v33 = v62 & 0x3F;
          v7 = v33 + 2;
          v33[1] = v62 >> 6;
          if ( v65 > v8 )
          {
            v34 = v5 + 1;
            v35 = v5 - 1;
            v36 = v5 + 2;
            while ( 1 )
            {
              v38 = *++v35;
              v37 = v38;
              v5 = v34 + 1;
              v39 = (unsigned __int8)*++v36;
              v23 = v39 ^ (32 * (v23 ^ (v37 << 10)));
              *(_DWORD *)(a5 + 32 * (((unsigned int)(40799 * v23) >> 5) & 0x1FFF)) = v34;
              if ( v34 + 1 >= v8 )
                break;
              ++v34;
            }
            v67 = v33 + 2;
            v10 = v34[3] ^ (32 * (v23 ^ (*v34 << 10)));
            continue;
          }
          goto LABEL_74;
        }
        if ( v62 > 0x2000 )
        {
          *v7 = (v11 - 3) | 0x20;
          v67 = v7 + 3;
          v7[1] = v62 & 0x3F;
          v7[2] = v62 >> 6;
          v7 += 3;
          goto LABEL_39;
        }
LABEL_45:
        *v7 = (v62 - 1) & 0x1F | (32 * (v11 - 1));
        v7[1] = (v62 - 1) >> 5;
        v7 += 2;
LABEL_39:
        if ( v65 > v8 )
        {
          v40 = v5 + 1;
          v41 = v5 - 1;
          v42 = v5 + 2;
          while ( 1 )
          {
            v44 = *++v41;
            v43 = v44;
            v5 = v40 + 1;
            v45 = (unsigned __int8)*++v42;
            v23 = v45 ^ (32 * (v23 ^ (v43 << 10)));
            *(_DWORD *)(a5 + 32 * (((unsigned int)(40799 * v23) >> 5) & 0x1FFF)) = v40;
            if ( v40 + 1 >= v8 )
              break;
            ++v40;
          }
          v10 = v40[3] ^ (32 * (v23 ^ (*v40 << 10)));
          continue;
        }
LABEL_74:
        v26 = (int)v7;
        v5 = v8;
        v24 = v8;
        goto LABEL_17;
      }
      break;
    }
    if ( v65 > ++v8 )
    {
      v10 = v12[3] ^ (32 * (v23 ^ (*v12 << 10)));
      continue;
    }
    break;
  }
  v26 = (int)v7;
LABEL_17:
  if ( v68 != v24 )
    v26 = lzo1c_store_run(v26, v5);
  *a4 = v26 - (_DWORD)a3;
  return 0;
}
