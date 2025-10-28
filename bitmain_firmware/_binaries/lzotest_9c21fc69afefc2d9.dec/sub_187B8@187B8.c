int __fastcall sub_187B8(unsigned __int8 *a1, int a2, _BYTE *a3, _DWORD *a4, char *s)
{
  unsigned __int8 *v5; // r5
  unsigned __int8 *v6; // r4
  unsigned int v7; // r10
  int v9; // lr
  unsigned __int8 *v10; // r2
  int v11; // r9
  int v12; // r8
  int v13; // r12
  unsigned int v14; // r3
  unsigned __int8 *v15; // r7
  char *v16; // r1
  int v17; // r0
  int v19; // r1
  unsigned int v20; // r2
  _BYTE *v21; // r3
  char v22; // t1
  _BYTE *v23; // r3
  unsigned __int8 *v24; // r3
  char v25; // r2
  int v26; // lr
  int v27; // r12
  unsigned __int8 *v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r12
  unsigned __int8 *v32; // r7
  unsigned __int8 *i; // lr
  int v34; // t1
  int v35; // r0
  unsigned __int8 *v36; // r5
  _BYTE *v37; // r3
  char v38; // t1
  _BYTE *v39; // r3
  unsigned __int8 *v40; // r3
  bool v41; // cc
  _BYTE *v42; // r2
  int v43; // r7
  unsigned __int8 *v44; // r2
  int v45; // r12
  int v46; // t1
  unsigned int v47; // r3
  _BYTE *v48; // r1
  unsigned __int8 *v49; // [sp+0h] [bp-24h]
  _BYTE *v50; // [sp+4h] [bp-20h]
  unsigned int v51; // [sp+Ch] [bp-18h]
  unsigned __int8 *v53; // [sp+14h] [bp-10h]
  unsigned int v54; // [sp+18h] [bp-Ch]
  unsigned int v55; // [sp+1Ch] [bp-8h]

  v5 = a1;
  v6 = a1 + 1;
  v7 = (unsigned int)&a1[a2 - 9];
  v51 = (unsigned int)&a1[a2];
  v53 = (unsigned __int8 *)v7;
  memset(s, 0, 0x10000u);
  v49 = v5;
  v50 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = v6[3];
      v10 = v5;
      v11 = v6[2];
      v12 = v6[1];
      v13 = *v6;
      v14 = (33 * (v13 ^ (32 * (v12 ^ (32 * (v11 ^ (unsigned int)(v9 << 6))))))) >> 5;
      v15 = *(unsigned __int8 **)&s[4 * (v14 & 0x3FFF)];
      v16 = &s[4 * (v14 & 0x3FFF)];
      if ( v15 >= v49 )
      {
        v54 = v6 - v15;
        v55 = v6 - v15 - 1;
        if ( v55 <= 0xFFFE )
        {
          if ( v54 <= 0x2000
            || v15[3] == v9
            || (v19 = v14 & 0x7FF ^ 0x201F, v15 = *(unsigned __int8 **)&s[4 * v19], v16 = &s[4 * v19], v15 >= v49)
            && (v54 = v6 - v15, v55 = v6 - v15 - 1, v55 <= 0xFFFE)
            && (v54 <= 0x2000 || v15[3] == v9) )
          {
            if ( *v15 == v13 && v15[1] == v12 && v15[2] == v11 )
              break;
          }
        }
      }
      *(_DWORD *)v16 = v6++;
      if ( v7 <= (unsigned int)v6 )
      {
        v17 = (int)v50;
        goto LABEL_6;
      }
    }
    *(_DWORD *)v16 = v6;
    if ( v6 != v5 )
    {
      if ( v6 == v53 )
      {
        ++v5;
        v53 = v6 + 4;
        *(v50 - 2) &= 0x1Fu;
        v10 = v5;
        *v50++ = *(v5 - 1);
      }
      else
      {
        v20 = v6 - v5;
        if ( (unsigned int)(v6 - v5) <= 0x1F )
        {
          v36 = v5 - 1;
          v37 = v50;
          *v50 = v20;
          do
          {
            v38 = *++v36;
            *++v37 = v38;
          }
          while ( &v50[v20] != v37 );
          v53 = v6 + 4;
          v39 = &v50[v20 + 1];
          v10 = v6;
          v50 = v39;
          v5 = v6;
        }
        else if ( v20 >= 0x118 )
        {
          v35 = lzo1b_store_run((int)v50, v5);
          v5 = v6;
          v50 = (_BYTE *)v35;
          v10 = v6;
        }
        else
        {
          *v50 = 0;
          v50[1] = v20 - 32;
          v21 = v50 + 1;
          do
          {
            v22 = *v5++;
            *++v21 = v22;
          }
          while ( v6 != v5 );
          v23 = &v50[v20 + 2];
          v10 = v6;
          v50 = v23;
          v53 = v6 + 4;
        }
      }
    }
    if ( v15[3] != v6[3] )
    {
      v24 = v6 + 4;
      goto LABEL_28;
    }
    if ( v15[4] != v6[4] )
    {
      v24 = v6 + 5;
      goto LABEL_28;
    }
    v24 = v6 + 6;
    if ( v15[5] == v6[5] )
    {
      v24 = v6 + 7;
      if ( v15[6] == v6[6] )
      {
        v24 = v6 + 8;
        if ( v15[7] == v6[7] )
        {
          v24 = v6 + 9;
          if ( v15[8] == v6[8] )
            break;
        }
      }
    }
LABEL_28:
    v6 = v24 - 1;
    v25 = (_BYTE)v24 - 1 - (_BYTE)v10;
    if ( v54 > 0x2000 )
    {
      *v50 = (v25 - 3) | 0x20;
      *(_WORD *)(v50 + 1) = v54;
      v50 += 3;
    }
    else
    {
      *v50 = v55 & 0x1F | (32 * (v25 - 1));
      v50[1] = v55 >> 5;
      v50 += 2;
    }
    if ( v7 <= (unsigned int)v6 )
    {
      v17 = (int)v50;
      v5 = v24 - 1;
      v10 = v24 - 1;
      goto LABEL_6;
    }
    v26 = v5[4];
    v27 = v5[3];
    v28 = v5 + 1;
    v29 = v5[1];
    v30 = v5[2];
    v5 = v6;
    v31 = v27 ^ (v26 << 6);
LABEL_32:
    *(_DWORD *)&s[4 * (((33 * (v29 ^ (32 * (v30 ^ (unsigned int)(32 * v31))))) >> 5) & 0x3FFF)] = v28;
  }
  v32 = v15 + 8;
  for ( i = v6 + 9; ; ++i )
  {
    v6 = i;
    if ( (unsigned int)i >= v51 )
      break;
    v34 = *++v32;
    if ( v34 != *i )
      break;
  }
  v40 = (unsigned __int8 *)(i - v10);
  v41 = (unsigned int)(i - v10) > 0x22;
  v42 = v50 + 1;
  if ( v41 )
  {
    v47 = (unsigned int)(v40 - 34);
    *v50 = 32;
    while ( 1 )
    {
      v48 = v42 + 1;
      if ( v47 <= 0xFF )
        break;
      v47 -= 255;
      ++v42;
      *(v48 - 1) = 0;
    }
    *v42++ = v47;
  }
  else
  {
    *v50 = ((_BYTE)v40 - 3) | 0x20;
  }
  *v42 = v54;
  v50 = v42 + 2;
  v42[1] = BYTE1(v54);
  if ( (unsigned int)i < v7 )
  {
    v43 = v5[4];
    v44 = v5;
    v45 = v5[3];
    v30 = v5[2];
    v5 = i;
    v46 = v44[1];
    v28 = v44 + 1;
    v29 = v46;
    v31 = v45 ^ (v43 << 6);
    goto LABEL_32;
  }
  v17 = (int)(v42 + 2);
  v5 = i;
  v10 = i;
LABEL_6:
  if ( (unsigned __int8 *)v51 != v10 )
    v17 = lzo1b_store_run(v17, v5);
  *a4 = v17 - (_DWORD)a3;
  return 0;
}
