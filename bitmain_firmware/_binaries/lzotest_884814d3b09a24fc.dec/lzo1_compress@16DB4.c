int __fastcall lzo1_compress(char *src, unsigned int a2, char *a3, _DWORD *a4, char *s)
{
  char *v8; // r5
  char *v10; // r11
  unsigned __int8 *v11; // r8
  char *v12; // lr
  int v13; // r12
  unsigned int v14; // r3
  unsigned __int8 *v15; // r10
  char *v16; // r2
  int v17; // r2
  char *v18; // r0
  unsigned int v19; // r2
  char *v20; // r3
  char *v21; // r2
  char *v22; // r4
  char *v24; // lr
  char *v25; // r3
  char v26; // t1
  unsigned __int8 *v27; // r10
  unsigned __int8 *v28; // r2
  int v29; // t1
  int v30; // [sp+0h] [bp-14h]
  char *v31; // [sp+4h] [bp-10h]
  int v32; // [sp+8h] [bp-Ch]
  int v33; // [sp+Ch] [bp-8h]

  if ( !a2 )
  {
    *a4 = 0;
    return 0;
  }
  v8 = a3;
  if ( a2 <= 0xD )
  {
    *a4 = sub_16B44(a3, src, a2) - a3;
    return 0;
  }
  v31 = &src[a2 - 3];
  v10 = &src[a2 - 12];
  memset(s, 0, 0x8000u);
  v11 = (unsigned __int8 *)(src + 1);
  v12 = src;
  *(_DWORD *)&s[4
              * (((40799
                 * ((unsigned __int8)src[2]
                  ^ (32 * ((unsigned __int8)src[1] ^ (32 * (unsigned int)(unsigned __int8)*src))))) >> 5)
               & 0x1FFF)] = src;
  do
  {
    while ( 1 )
    {
      v13 = *v11;
      v32 = v11[2];
      v30 = v11[1];
      v14 = (33 * (v13 ^ (32 * (v30 ^ (unsigned int)(32 * v32))))) >> 5;
      v15 = *(unsigned __int8 **)&s[4 * (v14 & 0x1FFF)];
      v16 = &s[4 * (v14 & 0x1FFF)];
      if ( !v15 )
        break;
      v33 = v11 - v15;
      if ( (unsigned int)(v11 - v15) > 0x2000 )
        break;
      if ( *v15 != v13 || v15[1] != v30 || v15[2] != v32 )
      {
        v17 = ~(_WORD)v14 & 0x1FFF;
        v15 = *(unsigned __int8 **)&s[4 * v17];
        v16 = &s[4 * v17];
        if ( !v15 )
          break;
        v33 = v11 - v15;
        if ( (unsigned int)(v11 - v15) > 0x2000 || *v15 != v13 || v15[1] != v30 || v15[2] != v32 )
          break;
      }
      *(_DWORD *)v16 = v11;
      if ( v11 == (unsigned __int8 *)v12 )
      {
        v18 = v8;
      }
      else
      {
        v19 = v11 - (unsigned __int8 *)v12;
        if ( (unsigned int)(v11 - (unsigned __int8 *)v12) <= 0x1F )
        {
          v24 = v12 - 1;
          v25 = v8;
          *v8 = v19;
          do
          {
            v26 = *++v24;
            *++v25 = v26;
          }
          while ( &v8[v19] != v25 );
          v18 = &v8[v19 + 1];
        }
        else
        {
          v18 = sub_16B44(v8, v12, v19);
        }
      }
      if ( v15[3] != v11[3] )
      {
        v20 = (char *)(v11 + 4);
LABEL_20:
        v12 = v20 - 1;
        v21 = v20 - 1;
        *v18 = (v33 - 1) & 0x1F | (32 * ((_BYTE)v20 - 1 - (_BYTE)v11 - 2));
        v8 = v18 + 2;
        v18[1] = (unsigned int)(v33 - 1) >> 5;
        goto LABEL_21;
      }
      if ( v15[4] != v11[4] )
      {
        v20 = (char *)(v11 + 5);
        goto LABEL_20;
      }
      if ( v15[5] != v11[5] )
      {
        v20 = (char *)(v11 + 6);
        goto LABEL_20;
      }
      v20 = (char *)(v11 + 7);
      if ( v15[6] != v11[6] )
        goto LABEL_20;
      v20 = (char *)(v11 + 8);
      if ( v15[7] != v11[7] )
        goto LABEL_20;
      v20 = (char *)(v11 + 9);
      if ( v15[8] != v11[8] )
        goto LABEL_20;
      v27 = v15 + 8;
      if ( (unsigned int)(v31 - v20) > 0xFF )
        v28 = v11 + 264;
      else
        v28 = (unsigned __int8 *)v31;
      while ( 1 )
      {
        v12 = v20;
        if ( v20 >= (char *)v28 )
          break;
        v29 = *++v27;
        if ( v29 != (unsigned __int8)*v20 )
          break;
        ++v20;
      }
      v21 = v20;
      v8 = v18 + 3;
      v18[2] = (_BYTE)v20 - (_BYTE)v11 - 9;
      v18[1] = (unsigned int)(v33 - 1) >> 5;
      *v18 = ~((unsigned int)~((v33 - 1) << 27) >> 27);
LABEL_21:
      if ( v10 <= v12 )
        goto LABEL_25;
      v11 = (unsigned __int8 *)v12;
    }
    *(_DWORD *)v16 = v11++;
  }
  while ( v10 > (char *)v11 );
  v21 = v12;
LABEL_25:
  v22 = &src[a2];
  if ( v22 != v21 )
    v8 = sub_16B44(v8, v12, v22 - v21);
  *a4 = v8 - a3;
  return 0;
}
