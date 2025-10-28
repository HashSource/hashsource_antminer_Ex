int __fastcall sub_2220C(unsigned __int8 *a1, int a2, unsigned int a3, _DWORD *a4, int a5)
{
  int v6; // r2
  unsigned __int8 *v7; // r9
  unsigned __int8 *v8; // r12
  unsigned __int8 *v9; // r11
  _BYTE *v10; // r1
  int v11; // r6
  unsigned __int8 *v12; // lr
  int v13; // r8
  int v14; // r7
  int v15; // r5
  unsigned int v16; // r3
  unsigned __int8 *v17; // r4
  unsigned __int8 **v18; // r2
  unsigned int v19; // lr
  _BOOL4 v20; // r2
  _BYTE *v21; // r5
  unsigned int v22; // r3
  int v23; // t1
  _BYTE *v24; // r1
  unsigned __int8 *v25; // r3
  char v26; // t1
  _BYTE *v28; // r3
  unsigned int v29; // r2
  int v30; // r1
  unsigned __int8 *v31; // r6
  int v32; // r12
  unsigned int v33; // r3
  int v34; // r2
  unsigned int v35; // r5
  unsigned __int8 *v36; // r3
  unsigned __int8 *v37; // lr
  unsigned __int8 *v38; // r0
  bool v39; // r3
  unsigned __int8 *v41; // r4
  int v42; // t1
  _BOOL4 v43; // lr
  _BYTE *v44; // r3
  char v45; // t1
  _BYTE *v46; // r3
  unsigned int v47; // r2
  unsigned int v48; // r3
  _BYTE *v49; // r2
  unsigned int v50; // r3
  unsigned __int8 *v51; // [sp+0h] [bp-1Ch]
  unsigned int v53; // [sp+10h] [bp-Ch]
  unsigned int v54; // [sp+14h] [bp-8h]

  v6 = a2 - 9;
  v7 = &a1[a2];
  v8 = a1 + 1;
  v9 = a1;
  v10 = (_BYTE *)a3;
  v51 = &a1[v6];
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v8[3];
      v12 = a1;
      v13 = v8[2];
      v14 = v8[1];
      v15 = *v8;
      v16 = (33 * (v15 ^ (32 * (v14 ^ (32 * (v13 ^ (unsigned int)(v11 << 6))))))) >> 5;
      v17 = *(unsigned __int8 **)(a5 + 4 * (v16 & 0x3FFF));
      v18 = (unsigned __int8 **)(a5 + 4 * (v16 & 0x3FFF));
      if ( v17 >= v9 )
      {
        v53 = v8 - v17;
        v54 = v8 - v17 - 1;
        if ( v54 <= 0x3FFE )
        {
          if ( v53 <= 0x800
            || v17[3] == v11
            || (v34 = v16 & 0x7FF ^ 0x201F,
                v17 = *(unsigned __int8 **)(a5 + 4 * v34),
                v18 = (unsigned __int8 **)(a5 + 4 * v34),
                v17 >= v9)
            && (v53 = v8 - v17, v54 = v8 - v17 - 1, v54 <= 0x3FFE)
            && (v53 <= 0x800 || v17[3] == v11) )
          {
            if ( *v17 == v15 && v17[1] == v14 && v17[2] == v13 )
              break;
          }
        }
      }
      *v18 = v8++;
      if ( v51 <= v8 )
        goto LABEL_5;
    }
    v35 = v8 - a1;
    *v18 = v8;
    if ( v8 != a1 )
    {
      v43 = v35 <= 3;
      if ( (unsigned int)v10 <= a3 )
        v43 = 0;
      if ( v43 )
      {
        *(v10 - 2) |= v35;
      }
      else
      {
        v46 = v10 + 1;
        if ( v35 > 0x1F )
        {
          v47 = v35 - 31;
          for ( *v10 = 0; v47 > 0xFF; ++v46 )
          {
            v47 -= 255;
            *v46 = 0;
          }
          v10 = v46 + 1;
          *v46 = v47;
        }
        else
        {
          *v10++ = v35;
        }
      }
      v44 = v10 - 1;
      do
      {
        v45 = *a1++;
        *++v44 = v45;
      }
      while ( v8 != a1 );
      v10 += v35;
      v12 = v8;
    }
    if ( v17[3] == v8[3] )
    {
      v36 = v8 + 5;
      if ( v17[4] == v8[4] )
      {
        v36 = v8 + 6;
        if ( v17[5] == v8[5] )
        {
          v36 = v8 + 7;
          if ( v17[6] == v8[6] )
          {
            v36 = v8 + 8;
            if ( v17[7] == v8[7] )
            {
              v36 = v8 + 9;
              if ( v17[8] == v8[8] )
              {
                v41 = v17 + 8;
                while ( 1 )
                {
                  v8 = v36;
                  if ( v36 >= v7 )
                    break;
                  v42 = *++v41;
                  if ( v42 != *v36 )
                    break;
                  ++v36;
                }
                v38 = v36;
                v48 = v36 - v12;
                v49 = v10 + 1;
                if ( v48 > 0x21 )
                {
                  v50 = v48 - 33;
                  *v10 = -32;
                  while ( v50 > 0xFF )
                  {
                    v50 -= 255;
                    *v49++ = 0;
                  }
                  *v49++ = v50;
                }
                else
                {
                  *v10 = ~(~((v48 - 2) << 27) >> 27);
                }
                *v49 = 4 * v53;
                v10 = v49 + 2;
                v49[1] = v53 >> 6;
                goto LABEL_41;
              }
            }
          }
        }
      }
    }
    else
    {
      v36 = v8 + 4;
    }
    v8 = v36 - 1;
    v37 = (unsigned __int8 *)(v36 - 1 - v12);
    v38 = v36 - 1;
    if ( v53 > 0x800 )
    {
      v39 = v53 <= 0x1000;
      if ( !v35 )
        v39 = 0;
      if ( v37 == (unsigned __int8 *)3 && v39 )
      {
        *v10 = (4 * v54) & 0x1C;
        v10[1] = v54 >> 3;
        v10 += 2;
      }
      else
      {
        v10 += 3;
        *((_WORD *)v10 - 1) = __PAIR16__((4 * v53) >> 24, 4 * v53);
        *(v10 - 3) = ((_BYTE)v37 - 2) | 0xE0;
      }
    }
    else
    {
      *v10 = (4 * v54) & 0x1C | (32 * ((_BYTE)v37 - 2));
      v10[1] = v54 >> 3;
      v10 += 2;
    }
LABEL_41:
    if ( v8 >= v51 )
      break;
    a1 = v8;
  }
  v12 = v38;
  a1 = v8;
LABEL_5:
  if ( v7 != v12 )
  {
    v19 = v7 - v12;
    v20 = v19 <= 3;
    if ( (unsigned int)v10 <= a3 )
      v20 = 0;
    if ( v20 )
    {
      v21 = v10;
      v22 = v19;
      *(v10 - 2) |= v19;
      goto LABEL_10;
    }
    v21 = v10 + 1;
    if ( v19 > 0x1F )
    {
      v33 = v19 - 31;
      for ( *v10 = 0; v33 > 0xFF; ++v21 )
      {
        v33 -= 255;
        *v21 = 0;
      }
      *v21++ = v33;
    }
    else
    {
      *v10 = v19;
      if ( v19 <= 7 )
      {
        v22 = v19;
        ++v10;
        goto LABEL_10;
      }
    }
    v28 = v21;
    v29 = (v19 - 8) >> 3;
    v30 = 8 * (v29 + 1);
    v31 = &a1[v30];
    do
    {
      v32 = *(_DWORD *)a1;
      a1 += 8;
      v28 += 8;
      *((_DWORD *)v28 - 2) = v32;
      *((_DWORD *)v28 - 1) = *((_DWORD *)a1 - 1);
    }
    while ( a1 != v31 );
    v22 = v19 - 8 - 8 * v29;
    v10 = &v21[v30];
LABEL_10:
    if ( v22 > 3 )
    {
      v23 = *(_DWORD *)a1;
      a1 += 4;
      v22 -= 4;
      *(_DWORD *)v10 = v23;
      v10 += 4;
    }
    if ( v22 )
    {
      v24 = v10 - 1;
      v25 = &a1[v22];
      do
      {
        v26 = *a1++;
        *++v24 = v26;
      }
      while ( a1 != v25 );
    }
    v10 = &v21[v19];
  }
  *a4 = &v10[-a3];
  return 0;
}
