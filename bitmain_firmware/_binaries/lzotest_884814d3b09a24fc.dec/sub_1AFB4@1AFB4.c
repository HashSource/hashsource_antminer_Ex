int __fastcall sub_1AFB4(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r10
  _BYTE *v6; // r9
  unsigned __int8 *v7; // r8
  int v8; // r0
  int v9; // r7
  char *v10; // r1
  char *v11; // r3
  unsigned int v12; // r4
  unsigned __int8 *v13; // r2
  unsigned __int8 *v14; // t1
  unsigned int v15; // r0
  bool v16; // zf
  unsigned __int8 *v17; // r2
  unsigned int v19; // r2
  _BYTE *v20; // r3
  _BYTE *v21; // r9
  _BYTE *v22; // r3
  char v23; // t1
  unsigned __int8 *v24; // r2
  unsigned __int8 *v25; // r0
  unsigned __int8 *v26; // r1
  int v27; // r12
  int v28; // t1
  int v29; // t1
  unsigned __int8 *v30; // r2
  unsigned __int8 *v31; // r3
  int v32; // t1
  int v33; // r3
  _BYTE *v34; // r1
  unsigned __int8 *v35; // r0
  unsigned __int8 *v36; // r1
  int v37; // r12
  int v38; // t1
  int v39; // t1
  unsigned int v40; // r2
  unsigned int v41; // r12
  bool v42; // r2
  int v44; // r0
  char v45; // r3
  unsigned int v46; // r3
  unsigned __int8 *v47; // r10
  _BYTE *v48; // r3
  char v49; // t1
  _BOOL4 v50; // r2
  bool v51; // zf
  unsigned int v52; // r2
  int v53; // [sp+0h] [bp-3Ch]
  unsigned int v54; // [sp+4h] [bp-38h]
  unsigned __int8 *v55; // [sp+8h] [bp-34h]
  unsigned __int8 *v56; // [sp+8h] [bp-34h]
  unsigned int v57; // [sp+Ch] [bp-30h]
  unsigned __int8 *v58; // [sp+28h] [bp-14h]
  unsigned int v59; // [sp+2Ch] [bp-10h]

  v5 = a1;
  v6 = (_BYTE *)a3;
  v57 = (unsigned int)&a1[a2 - 9];
  v7 = a1 + 1;
  v59 = (unsigned int)&a1[a2];
  v58 = (unsigned __int8 *)v57;
  memset(s, 0, 0x10000u);
  v53 = 1;
  v8 = v5[2] ^ (32 * (v5[1] ^ (32 * *v5)));
  *(_DWORD *)&s[4 * (((unsigned int)(40799 * v8) >> 3) & 0x3FFC)] = v5;
  v9 = v5[3] ^ (32 * (v8 ^ (*v5 << 10)));
  while ( 2 )
  {
    v10 = &s[16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF)];
    v11 = v10 - 4;
    v12 = 0;
    v54 = 0;
    v55 = v7;
    do
    {
      v14 = (unsigned __int8 *)*((_DWORD *)v11 + 1);
      v11 += 4;
      v13 = v14;
      if ( !v14 || (v15 = v7 - v13, (unsigned int)(v7 - v13) >= 0x10000) )
      {
        *(_DWORD *)v11 = v7;
        continue;
      }
      if ( v13[v12] != v7[v12] )
        continue;
      if ( *v13 != *v7 || v13[1] != v7[1] || v13[2] != v7[2] )
        goto LABEL_34;
      if ( v13[3] == v7[3] )
      {
        if ( v13[4] == v7[4] )
        {
          if ( v13[5] == v7[5] )
          {
            if ( v13[6] == v7[6] )
            {
              v56 = v7 + 8;
              if ( v13[7] == v7[7] )
              {
                v56 = v7 + 9;
                if ( v13[8] == v7[8] )
                {
                  v55 = v7;
                  v50 = v54 > v15;
                  if ( v12 <= 8 )
                    v50 = 1;
                  v51 = !v50;
                  if ( v50 )
                    v52 = v15;
                  else
                    v52 = v54;
                  v54 = v52;
                  if ( !v51 )
                    v12 = 9;
                  continue;
                }
              }
            }
            else
            {
              v56 = v7 + 7;
            }
          }
          else
          {
            v56 = v7 + 6;
          }
        }
        else
        {
          v56 = v7 + 5;
        }
      }
      else
      {
        v56 = v7 + 4;
      }
      v40 = v56 - 1 - v7;
      if ( v12 < v40 )
      {
        v12 = v56 - 1 - v7;
        v54 = v15;
LABEL_34:
        v55 = v7;
        continue;
      }
      v41 = v54;
      v42 = v12 == v40;
      v55 = v7;
      if ( v54 > v15 && v42 )
        v41 = v15;
      v54 = v41;
    }
    while ( v10 + 12 != v11 );
    *(_DWORD *)&v10[4 * v53] = v7;
    if ( v12 <= 3 )
    {
      v16 = v54 == 0x2000;
      if ( v54 <= 0x2000 )
        v16 = v12 == 3;
      if ( !v16 )
      {
        if ( v57 <= (unsigned int)++v7 )
        {
          v17 = v5;
          goto LABEL_13;
        }
        v9 = v55[3] ^ (32 * (v9 ^ (*v55 << 10)));
LABEL_32:
        v53 = ((_BYTE)v53 + 1) & 3;
        continue;
      }
    }
    break;
  }
  if ( v7 != v5 )
  {
    if ( v7 == v58 )
    {
      v45 = *(v6 - 2);
      v58 = v7 + 4;
      ++v5;
      *(++v6 - 3) = v45 & 0x1F;
      *(v6 - 1) = *(v5 - 1);
    }
    else
    {
      v19 = v7 - v5;
      if ( (unsigned int)(v7 - v5) <= 0x1F )
      {
        v47 = v5 - 1;
        v48 = v6;
        *v6 = v19;
        do
        {
          v49 = *++v47;
          *++v48 = v49;
        }
        while ( &v6[v19] != v48 );
        v58 = v7 + 4;
        v6 += v19 + 1;
        v5 = v7;
      }
      else if ( v19 >= 0x118 )
      {
        v44 = lzo1b_store_run((int)v6, v5);
        v5 = v7;
        v6 = (_BYTE *)v44;
      }
      else
      {
        v20 = v6;
        *v6 = 0;
        v21 = v6 + 2;
        v20[1] = v19 - 32;
        v22 = v20 + 1;
        do
        {
          v23 = *v5++;
          *++v22 = v23;
        }
        while ( v7 != v5 );
        v6 = &v21[v19];
        v58 = v7 + 4;
      }
    }
  }
  v7 += v12;
  if ( v12 > 8 )
  {
    v30 = &v7[-v54];
    if ( v59 > (unsigned int)v7 && *v7 == *v30 )
    {
      v31 = v7 + 1;
      do
      {
        v16 = v59 == (_DWORD)v31;
        v7 = v31++;
        if ( v16 )
          break;
        v32 = *++v30;
      }
      while ( v32 == *v7 );
    }
    v33 = v7 - v5;
    v17 = v7;
    v34 = v6 + 1;
    if ( (unsigned int)(v7 - v5) > 0x22 )
    {
      v46 = v33 - 34;
      for ( *v6 = 32; v46 > 0xFF; ++v34 )
      {
        v46 -= 255;
        *v34 = 0;
      }
      *v34++ = v46;
    }
    else
    {
      *v6 = (v33 - 3) | 0x20;
    }
    *v34 = v54;
    v6 = v34 + 2;
    v34[1] = BYTE1(v54);
    if ( (unsigned int)v7 < v57 )
    {
      v24 = v5 + 1;
      v35 = v5 - 1;
      v36 = v5 + 2;
      while ( 1 )
      {
        v38 = *++v35;
        v37 = v38;
        v5 = v24 + 1;
        v39 = *++v36;
        v9 = v39 ^ (32 * (v9 ^ (v37 << 10)));
        *(_DWORD *)&s[16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF)] = v24;
        if ( v7 <= v24 + 1 )
          break;
        ++v24;
      }
      goto LABEL_31;
    }
    v5 = v7;
  }
  else
  {
    if ( v54 <= 0x2000 )
    {
      *v6 = (v54 - 1) & 0x1F | (32 * (v12 - 1));
      v6[1] = (v54 - 1) >> 5;
      v6 += 2;
    }
    else
    {
      v6 += 3;
      *(v6 - 3) = (v12 - 3) | 0x20;
      *((_WORD *)v6 - 1) = v54;
    }
    if ( v57 > (unsigned int)v7 )
    {
      v24 = v5 + 1;
      v25 = v5 - 1;
      v26 = v5 + 2;
      while ( 1 )
      {
        v28 = *++v25;
        v27 = v28;
        v5 = v24 + 1;
        v29 = *++v26;
        v9 = v29 ^ (32 * (v9 ^ (v27 << 10)));
        *(_DWORD *)&s[16 * (((unsigned int)(40799 * v9) >> 5) & 0xFFF)] = v24;
        if ( v7 <= v24 + 1 )
          break;
        ++v24;
      }
LABEL_31:
      v9 = v5[2] ^ (32 * (v9 ^ (*v24 << 10)));
      goto LABEL_32;
    }
    v5 = v7;
    v17 = v7;
  }
LABEL_13:
  if ( (unsigned __int8 *)v59 != v17 )
    v6 = (_BYTE *)lzo1b_store_run((int)v6, v5);
  *a4 = &v6[-a3];
  return 0;
}
