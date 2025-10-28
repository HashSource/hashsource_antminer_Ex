int __fastcall sub_18C90(unsigned __int8 *a1, int a2, _BYTE *a3, _DWORD *a4, char *s)
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
  unsigned __int8 *v26; // r2
  int v27; // lr
  int v28; // r12
  int v29; // r1
  unsigned __int8 *v30; // r7
  unsigned __int8 *i; // r9
  int v32; // t1
  int v33; // r0
  unsigned __int8 *v34; // r5
  _BYTE *v35; // r3
  char v36; // t1
  _BYTE *v37; // r3
  unsigned __int8 *v38; // r3
  bool v39; // cc
  _BYTE *v40; // r2
  unsigned int v41; // r3
  _BYTE *v42; // r1
  unsigned __int8 *v43; // [sp+0h] [bp-24h]
  _BYTE *v44; // [sp+4h] [bp-20h]
  unsigned int v45; // [sp+Ch] [bp-18h]
  unsigned __int8 *v47; // [sp+14h] [bp-10h]
  unsigned int v48; // [sp+18h] [bp-Ch]
  unsigned int v49; // [sp+1Ch] [bp-8h]

  v5 = a1;
  v6 = a1 + 1;
  v7 = (unsigned int)&a1[a2 - 9];
  v45 = (unsigned int)&a1[a2];
  v47 = (unsigned __int8 *)v7;
  memset(s, 0, 0x10000u);
  v43 = v5;
  v44 = a3;
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
      if ( v15 >= v43 )
      {
        v48 = v6 - v15;
        v49 = v6 - v15 - 1;
        if ( v49 <= 0xFFFE )
        {
          if ( v48 <= 0x2000
            || v15[3] == v9
            || (v19 = v14 & 0x7FF ^ 0x201F, v15 = *(unsigned __int8 **)&s[4 * v19], v16 = &s[4 * v19], v15 >= v43)
            && (v48 = v6 - v15, v49 = v6 - v15 - 1, v49 <= 0xFFFE)
            && (v48 <= 0x2000 || v15[3] == v9) )
          {
            if ( *v15 == v13 && v15[1] == v12 && v15[2] == v11 )
              break;
          }
        }
      }
      *(_DWORD *)v16 = v6++;
      if ( v7 <= (unsigned int)v6 )
      {
        v17 = (int)v44;
        goto LABEL_6;
      }
    }
    *(_DWORD *)v16 = v6;
    if ( v6 != v5 )
    {
      if ( v6 == v47 )
      {
        ++v5;
        v47 = v6 + 4;
        *(v44 - 2) &= 0x1Fu;
        v10 = v5;
        *v44++ = *(v5 - 1);
      }
      else
      {
        v20 = v6 - v5;
        if ( (unsigned int)(v6 - v5) <= 0x1F )
        {
          v34 = v5 - 1;
          v35 = v44;
          *v44 = v20;
          do
          {
            v36 = *++v34;
            *++v35 = v36;
          }
          while ( &v44[v20] != v35 );
          v47 = v6 + 4;
          v37 = &v44[v20 + 1];
          v10 = v6;
          v44 = v37;
          v5 = v6;
        }
        else if ( v20 >= 0x118 )
        {
          v33 = lzo1b_store_run((int)v44, v5);
          v5 = v6;
          v44 = (_BYTE *)v33;
          v10 = v6;
        }
        else
        {
          *v44 = 0;
          v44[1] = v20 - 32;
          v21 = v44 + 1;
          do
          {
            v22 = *v5++;
            *++v21 = v22;
          }
          while ( v6 != v5 );
          v23 = &v44[v20 + 2];
          v10 = v6;
          v44 = v23;
          v47 = v6 + 4;
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
    if ( v48 > 0x2000 )
    {
      *v44 = (v25 - 3) | 0x20;
      *(_WORD *)(v44 + 1) = v48;
      v44 += 3;
    }
    else
    {
      *v44 = v49 & 0x1F | (32 * (v25 - 1));
      v44[1] = v49 >> 5;
      v44 += 2;
    }
    if ( v7 <= (unsigned int)v6 )
    {
      v17 = (int)v44;
      v5 = v24 - 1;
      v10 = v24 - 1;
      goto LABEL_6;
    }
    v26 = v5;
    *(_DWORD *)&s[4 * (((unsigned int)(33 * (v5[1] ^ (32 * (v5[2] ^ (32 * (v5[3] ^ (v5[4] << 6))))))) >> 5) & 0x3FFF)] = v5 + 1;
    v27 = v5[5];
    v28 = v5[4];
    v29 = v5[3];
    v5 = v24 - 1;
LABEL_32:
    *(_DWORD *)&s[4 * (((33 * (v26[2] ^ (32 * (v29 ^ (32 * (v28 ^ (unsigned int)(v27 << 6))))))) >> 5) & 0x3FFF)] = v26 + 2;
  }
  v30 = v15 + 8;
  for ( i = v6 + 9; ; ++i )
  {
    v6 = i;
    if ( (unsigned int)i >= v45 )
      break;
    v32 = *++v30;
    if ( v32 != *i )
      break;
  }
  v38 = (unsigned __int8 *)(i - v10);
  v39 = (unsigned int)(i - v10) > 0x22;
  v40 = v44 + 1;
  if ( v39 )
  {
    v41 = (unsigned int)(v38 - 34);
    *v44 = 32;
    while ( 1 )
    {
      v42 = v40 + 1;
      if ( v41 <= 0xFF )
        break;
      v41 -= 255;
      ++v40;
      *(v42 - 1) = 0;
    }
    *v40++ = v41;
  }
  else
  {
    *v44 = ((_BYTE)v38 - 3) | 0x20;
  }
  *v40 = v48;
  v44 = v40 + 2;
  v40[1] = BYTE1(v48);
  if ( (unsigned int)i < v7 )
  {
    v26 = v5;
    *(_DWORD *)&s[4 * (((unsigned int)(33 * (v5[1] ^ (32 * (v5[2] ^ (32 * (v5[3] ^ (v5[4] << 6))))))) >> 5) & 0x3FFF)] = v5 + 1;
    v27 = v5[5];
    v28 = v5[4];
    v29 = v5[3];
    v5 = i;
    goto LABEL_32;
  }
  v17 = (int)(v40 + 2);
  v5 = i;
  v10 = i;
LABEL_6:
  if ( (unsigned __int8 *)v45 != v10 )
    v17 = lzo1b_store_run(v17, v5);
  *a4 = v17 - (_DWORD)a3;
  return 0;
}
