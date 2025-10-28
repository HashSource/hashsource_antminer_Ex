int __fastcall lzo1a_compress(char *src, unsigned int a2, char *a3, _DWORD *a4, char *s)
{
  char *v8; // r5
  unsigned __int8 *v9; // r6
  char *v10; // lr
  char *v11; // r7
  int v12; // r11
  int v13; // r10
  int v14; // r12
  unsigned int v15; // r3
  unsigned __int8 *v16; // r9
  char *v17; // r2
  unsigned __int8 *v18; // r1
  char *v19; // r11
  char *v20; // r3
  unsigned int v21; // r7
  char *v22; // r4
  int v24; // r2
  char *v25; // r0
  unsigned int v26; // r0
  char *v27; // r3
  _BYTE *v28; // r5
  char *v29; // r3
  char v30; // t1
  char v31; // r2
  unsigned __int8 *v32; // r9
  unsigned int v33; // r5
  int v34; // t1
  char *v35; // lr
  char *v36; // r3
  char v37; // t1
  char *v38; // [sp+4h] [bp-18h]
  unsigned int v39; // [sp+8h] [bp-14h]
  unsigned __int8 *v40; // [sp+Ch] [bp-10h]
  unsigned __int8 *v41; // [sp+10h] [bp-Ch]
  unsigned int v42; // [sp+14h] [bp-8h]

  if ( !a2 )
  {
    *a4 = 0;
    return 0;
  }
  v8 = a3;
  if ( a2 <= 0xD )
  {
    *a4 = sub_1764C(a3, src, a2) - a3;
    return 0;
  }
  v9 = (unsigned __int8 *)(src + 1);
  v41 = (unsigned __int8 *)&src[a2 - 3];
  v40 = (unsigned __int8 *)&src[a2 - 12];
  memset(s, 0, 0x8000u);
  v10 = src;
  v39 = a2;
  v11 = &src[a2 - 12];
  v38 = v8;
  *(_DWORD *)&s[4
              * (((40799
                 * ((unsigned __int8)src[2]
                  ^ (32 * ((unsigned __int8)src[1] ^ (32 * (unsigned int)(unsigned __int8)*src))))) >> 5)
               & 0x1FFF)] = src;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v9[2];
      v13 = v9[1];
      v14 = *v9;
      v15 = (33 * (v14 ^ (32 * (v13 ^ (unsigned int)(32 * v12))))) >> 5;
      v16 = *(unsigned __int8 **)&s[4 * (v15 & 0x1FFF)];
      v17 = &s[4 * (v15 & 0x1FFF)];
      if ( v16 >= (unsigned __int8 *)src )
      {
        v18 = v9 - 1;
        v42 = v9 - 1 - v16;
        if ( v42 < 0x2000 )
        {
          if ( *v16 == v14 && v16[1] == v13 && v16[2] == v12 )
            break;
          v24 = ~(_WORD)v15 & 0x1FFF;
          v16 = *(unsigned __int8 **)&s[4 * v24];
          v17 = &s[4 * v24];
          if ( v16 >= (unsigned __int8 *)src )
          {
            v42 = v18 - v16;
            if ( (unsigned int)(v18 - v16) < 0x2000 && *v16 == v14 && v16[1] == v13 && v16[2] == v12 )
              break;
          }
        }
      }
      *(_DWORD *)v17 = v9++;
      if ( v11 <= (char *)v9 )
      {
        v19 = v38;
        v20 = v10;
        v21 = v39;
        goto LABEL_9;
      }
    }
    *(_DWORD *)v17 = v9;
    if ( v9 == (unsigned __int8 *)v10 )
    {
      v25 = v8;
    }
    else if ( v9 - v40 == 4 )
    {
      v25 = v8 + 1;
      v40 = v9;
      *(v8 - 2) &= 0x1Fu;
      *v8 = *v10;
    }
    else
    {
      v26 = v9 - (unsigned __int8 *)v10;
      if ( (unsigned int)(v9 - (unsigned __int8 *)v10) <= 0x1F )
      {
        v35 = v10 - 1;
        v36 = v8;
        *v8 = v26;
        do
        {
          v37 = *++v35;
          *++v36 = v37;
        }
        while ( &v8[v26] != v36 );
        v40 = v9;
        v25 = &v8[v26 + 1];
      }
      else if ( v26 >= 0x118 )
      {
        v25 = sub_1764C(v8, v10, v9 - (unsigned __int8 *)v10);
      }
      else
      {
        v27 = v8;
        *v8 = 0;
        v28 = v8 + 2;
        v27[1] = v26 - 32;
        v29 = v27 + 1;
        do
        {
          v30 = *v10++;
          *++v29 = v30;
        }
        while ( v9 != (unsigned __int8 *)v10 );
        v25 = &v28[v26];
        v40 = v9;
      }
    }
    if ( v16[3] != v9[3] )
    {
      v20 = (char *)(v9 + 4);
LABEL_31:
      v10 = v20 - 1;
      v31 = v42 & 0x1F | (32 * ((_BYTE)v20-- - 1 - (_BYTE)v9 - 2));
      *v25 = v31;
      v8 = v25 + 2;
      v25[1] = v42 >> 5;
      goto LABEL_32;
    }
    if ( v16[4] != v9[4] )
    {
      v20 = (char *)(v9 + 5);
      goto LABEL_31;
    }
    if ( v16[5] != v9[5] )
    {
      v20 = (char *)(v9 + 6);
      goto LABEL_31;
    }
    v20 = (char *)(v9 + 7);
    if ( v16[6] != v9[6] )
      goto LABEL_31;
    v20 = (char *)(v9 + 8);
    if ( v16[7] != v9[7] )
      goto LABEL_31;
    v20 = (char *)(v9 + 9);
    if ( v16[8] != v9[8] )
      goto LABEL_31;
    v32 = v16 + 8;
    v33 = (unsigned int)((unsigned int)(v41 - (unsigned __int8 *)v20) > 0xFF ? v9 + 264 : v41);
    while ( 1 )
    {
      v10 = v20;
      if ( (unsigned int)v20 >= v33 )
        break;
      v34 = *++v32;
      if ( v34 != (unsigned __int8)*v20 )
        break;
      ++v20;
    }
    v8 = v25 + 3;
    v25[2] = (_BYTE)v20 - (_BYTE)v9 - 9;
    v25[1] = v42 >> 5;
    *v25 = ~(~(v42 << 27) >> 27);
LABEL_32:
    if ( v11 <= v10 )
      break;
    v9 = (unsigned __int8 *)v10;
  }
  v19 = v38;
  v21 = v39;
LABEL_9:
  v22 = &src[v21];
  if ( v22 != v20 )
    v8 = sub_1764C(v8, v10, v22 - v20);
  *a4 = v8 - v19;
  return 0;
}
