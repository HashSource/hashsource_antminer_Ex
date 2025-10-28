int __fastcall sub_18358(unsigned __int8 *a1, int a2, unsigned __int8 *a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r5
  unsigned __int8 *v7; // r8
  unsigned __int8 *v8; // r4
  unsigned int v9; // r6
  int v10; // r8
  unsigned __int8 *v11; // r2
  int v12; // r10
  int v13; // r9
  int v14; // lr
  unsigned int v15; // r3
  unsigned __int8 *v16; // r7
  char *v17; // r12
  int v18; // r0
  int v19; // r6
  int v21; // r12
  unsigned int v22; // r2
  _BYTE *v23; // r3
  char v24; // t1
  unsigned __int8 *v25; // r3
  unsigned __int8 *v26; // r3
  char v27; // r2
  unsigned __int8 *v28; // r7
  int v29; // t1
  int v30; // r0
  unsigned __int8 *v31; // r5
  unsigned __int8 *v32; // r3
  unsigned __int8 v33; // t1
  unsigned __int8 *v34; // r3
  bool v35; // cc
  _BYTE *v36; // r2
  unsigned int v37; // r3
  _BYTE *v38; // r1
  unsigned __int8 *v39; // [sp+0h] [bp-24h]
  unsigned __int8 *v40; // [sp+4h] [bp-20h]
  int v41; // [sp+8h] [bp-1Ch]
  unsigned int v42; // [sp+Ch] [bp-18h]
  unsigned __int8 *v44; // [sp+14h] [bp-10h]
  unsigned int v45; // [sp+18h] [bp-Ch]
  unsigned int v46; // [sp+1Ch] [bp-8h]

  v5 = a1;
  v7 = &a1[a2 - 9];
  v42 = (unsigned int)&a1[a2];
  v44 = v7;
  v8 = a1 + 1;
  memset(s, 0, 0x10000u);
  v39 = v5;
  v40 = a3;
  v41 = (int)a3;
  v9 = (unsigned int)v7;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = v8[3];
        v11 = v5;
        v12 = v8[2];
        v13 = v8[1];
        v14 = *v8;
        v15 = (33 * (v14 ^ (32 * (v13 ^ (32 * (v12 ^ (unsigned int)(v10 << 6))))))) >> 5;
        v16 = *(unsigned __int8 **)&s[4 * (v15 & 0x3FFF)];
        v17 = &s[4 * (v15 & 0x3FFF)];
        if ( v16 >= v39 )
        {
          v45 = v8 - v16;
          v46 = v8 - v16 - 1;
          if ( v46 <= 0xFFFE )
          {
            if ( v45 <= 0x2000
              || v16[3] == v10
              || (v21 = v15 & 0x7FF ^ 0x201F, v16 = *(unsigned __int8 **)&s[4 * v21], v17 = &s[4 * v21], v16 >= v39)
              && (v45 = v8 - v16, v46 = v8 - v16 - 1, v46 <= 0xFFFE)
              && (v45 <= 0x2000 || v16[3] == v10) )
            {
              if ( *v16 == v14 && v16[1] == v13 && v16[2] == v12 )
                break;
            }
          }
        }
        *(_DWORD *)v17 = v8++;
        if ( v9 <= (unsigned int)v8 )
        {
          v18 = (int)v40;
          v19 = v41;
          goto LABEL_6;
        }
      }
      *(_DWORD *)v17 = v8;
      if ( v8 != v5 )
      {
        if ( v8 == v44 )
        {
          v44 = v8 + 4;
          *(v40 - 2) &= 0x1Fu;
          v11 = v5 + 1;
          *v40++ = *v5;
        }
        else
        {
          v22 = v8 - v5;
          if ( (unsigned int)(v8 - v5) <= 0x1F )
          {
            v31 = v5 - 1;
            v32 = v40;
            *v40 = v22;
            do
            {
              v33 = *++v31;
              *++v32 = v33;
            }
            while ( &v40[v22] != v32 );
            v44 = v8 + 4;
            v40 += v22 + 1;
            v11 = v8;
          }
          else if ( v22 >= 0x118 )
          {
            v30 = lzo1b_store_run((int)v40, v5);
            v11 = v8;
            v40 = (unsigned __int8 *)v30;
          }
          else
          {
            *v40 = 0;
            v40[1] = v22 - 32;
            v23 = v40 + 1;
            do
            {
              v24 = *v5++;
              *++v23 = v24;
            }
            while ( v8 != v5 );
            v25 = &v40[v22 + 2];
            v11 = v8;
            v40 = v25;
            v44 = v8 + 4;
          }
        }
      }
      if ( v16[3] != v8[3] )
      {
        v26 = v8 + 4;
        goto LABEL_28;
      }
      if ( v16[4] == v8[4] )
        break;
      v26 = v8 + 5;
LABEL_28:
      v8 = v26 - 1;
      v27 = (_BYTE)v26 - 1 - (_BYTE)v11;
      if ( v45 > 0x2000 )
      {
        *v40 = (v27 - 3) | 0x20;
        *(_WORD *)(v40 + 1) = v45;
        v40 += 3;
      }
      else
      {
        *v40 = v46 & 0x1F | (32 * (v27 - 1));
        v40[1] = v46 >> 5;
        v40 += 2;
      }
      if ( v9 <= (unsigned int)v8 )
      {
        v18 = (int)v40;
        v19 = v41;
        v11 = v26 - 1;
        v5 = v26 - 1;
        goto LABEL_6;
      }
      v5 = v26 - 1;
    }
    v26 = v8 + 6;
    if ( v16[5] != v8[5] )
      goto LABEL_28;
    v26 = v8 + 7;
    if ( v16[6] != v8[6] )
      goto LABEL_28;
    v26 = v8 + 8;
    if ( v16[7] != v8[7] )
      goto LABEL_28;
    v26 = v8 + 9;
    if ( v16[8] != v8[8] )
      goto LABEL_28;
    v28 = v16 + 8;
    for ( v8 += 9; ; ++v8 )
    {
      v5 = v8;
      if ( (unsigned int)v8 >= v42 )
        break;
      v29 = *++v28;
      if ( v29 != *v8 )
        break;
    }
    v34 = (unsigned __int8 *)(v8 - v11);
    v35 = (unsigned int)(v8 - v11) > 0x22;
    v36 = v40 + 1;
    if ( v35 )
    {
      v37 = (unsigned int)(v34 - 34);
      *v40 = 32;
      while ( 1 )
      {
        v38 = v36 + 1;
        if ( v37 <= 0xFF )
          break;
        v37 -= 255;
        ++v36;
        *(v38 - 1) = 0;
      }
      *v36++ = v37;
    }
    else
    {
      *v40 = ((_BYTE)v34 - 3) | 0x20;
    }
    *v36 = v45;
    v18 = (int)(v36 + 2);
    v40 = v36 + 2;
    v36[1] = BYTE1(v45);
  }
  while ( (unsigned int)v8 < v9 );
  v19 = v41;
  v11 = v8;
LABEL_6:
  if ( (unsigned __int8 *)v42 != v11 )
    v18 = lzo1b_store_run(v18, v5);
  *a4 = v18 - v19;
  return 0;
}
