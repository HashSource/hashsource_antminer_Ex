int __fastcall sub_1D538(unsigned __int8 *src, int a2, _BYTE *a3, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // r4
  unsigned __int8 *v6; // r11
  char *v7; // r7
  int v8; // r8
  unsigned __int8 *v9; // r2
  int v10; // r10
  int v11; // r9
  int v12; // lr
  unsigned int v13; // r3
  unsigned __int8 *v14; // r6
  unsigned __int8 **v15; // r12
  int v16; // r5
  int v17; // r7
  int v19; // r12
  unsigned int v20; // r2
  _BYTE *v21; // r5
  _BYTE *v22; // r3
  char v23; // t1
  _BYTE *v24; // r3
  unsigned __int8 *v25; // lr
  char v26; // r2
  int v27; // lr
  int v28; // r12
  char *v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r12
  unsigned __int8 *v33; // r6
  int v34; // t1
  int v35; // r0
  bool v36; // zf
  _BYTE *v37; // r3
  _BYTE *v38; // r3
  char v39; // t1
  int v40; // r3
  _BYTE *v41; // r1
  _BYTE *v42; // r5
  int v43; // r6
  unsigned __int8 *v44; // r2
  int v45; // r12
  int v46; // t1
  unsigned int v47; // r3
  _BYTE *v48; // r2
  _BYTE *v49; // [sp+0h] [bp-24h]
  unsigned __int8 *v51; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v53; // [sp+10h] [bp-14h]
  _BYTE *v54; // [sp+14h] [bp-10h]
  unsigned int v55; // [sp+18h] [bp-Ch]
  unsigned int v56; // [sp+1Ch] [bp-8h]

  v5 = src + 1;
  v49 = a3;
  v6 = src;
  v7 = (char *)&src[a2 - 9];
  v51 = &src[a2];
  v53 = (unsigned __int8 *)v7;
  v54 = a3 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = v5[3];
      v9 = src;
      v10 = v5[2];
      v11 = v5[1];
      v12 = *v5;
      v13 = (33 * (v12 ^ (32 * (v11 ^ (32 * (v10 ^ (unsigned int)(v8 << 6))))))) >> 5;
      v14 = *(unsigned __int8 **)(a5 + 4 * (v13 & 0x3FFF));
      v15 = (unsigned __int8 **)(a5 + 4 * (v13 & 0x3FFF));
      if ( v14 >= v6 )
      {
        v55 = v5 - v14;
        v56 = v5 - v14 - 1;
        if ( v56 <= 0x3FFE )
        {
          if ( v55 <= 0x2000
            || v14[3] == v8
            || (v19 = v13 & 0x7FF ^ 0x201F,
                v14 = *(unsigned __int8 **)(a5 + 4 * v19),
                v15 = (unsigned __int8 **)(a5 + 4 * v19),
                v14 >= v6)
            && (v55 = v5 - v14, v56 = v5 - v14 - 1, v56 <= 0x3FFE)
            && (v55 <= 0x2000 || v14[3] == v8) )
          {
            if ( *v14 == v12 && v14[1] == v11 && v14[2] == v10 )
              break;
          }
        }
      }
      *v15 = v5++;
      if ( v7 <= (char *)v5 )
      {
        v16 = (int)v49;
        v17 = (int)a3;
        goto LABEL_6;
      }
    }
    *v15 = v5;
    if ( v5 != src )
    {
      if ( v5 == v53 )
      {
        ++src;
        v53 = v5 + 4;
        *(v49 - 2) &= 0x1Fu;
        v9 = src;
        *v49++ = *(src - 1);
      }
      else
      {
        v20 = v5 - src;
        if ( (unsigned int)(v5 - src) <= 0x1F )
        {
          v36 = v20 == 3;
          if ( v20 <= 3 )
            v36 = v49 == v54;
          if ( v36 )
            v37 = (_BYTE *)(unsigned __int8)*(v54 - 2);
          else
            v37 = v49;
          if ( !v36 )
          {
            *v37++ = v20;
            v49 = v37;
          }
          v21 = v49;
          if ( v36 )
            *(v54 - 2) = (unsigned __int8)v37 | ((_BYTE)v20 << 6);
          v38 = v49 - 1;
          do
          {
            v39 = *src++;
            *++v38 = v39;
          }
          while ( v5 != src );
          goto LABEL_24;
        }
        if ( v20 < 0x118 )
        {
          *v49 = 0;
          v21 = v49 + 2;
          v49[1] = v20 - 32;
          v22 = v49 + 1;
          do
          {
            v23 = *src++;
            *++v22 = v23;
          }
          while ( v5 != src );
LABEL_24:
          v24 = &v21[v20];
          v9 = v5;
          v49 = v24;
          v53 = v5 + 4;
          goto LABEL_25;
        }
        v35 = lzo1c_store_run((int)v49, src);
        v9 = v5;
        v49 = (_BYTE *)v35;
        src = v5;
      }
    }
LABEL_25:
    if ( v14[3] != v5[3] )
    {
      v25 = v5 + 4;
      goto LABEL_28;
    }
    if ( v14[4] != v5[4] )
    {
      v25 = v5 + 5;
      goto LABEL_28;
    }
    v25 = v5 + 6;
    if ( v14[5] == v5[5] )
    {
      v25 = v5 + 7;
      if ( v14[6] == v5[6] )
      {
        v25 = v5 + 8;
        if ( v14[7] == v5[7] )
        {
          v25 = v5 + 9;
          if ( v14[8] == v5[8] )
            break;
        }
      }
    }
LABEL_28:
    v5 = v25 - 1;
    v26 = (_BYTE)v25 - 1 - (_BYTE)v9;
    if ( v55 > 0x2000 )
    {
      *v49 = (v26 - 3) | 0x20;
      v54 = v49 + 3;
      v49[2] = v55 >> 6;
      v49[1] = v55 & 0x3F;
      v49 += 3;
    }
    else
    {
      *v49 = v56 & 0x1F | (32 * (v26 - 1));
      v49[1] = v56 >> 5;
      v49 += 2;
    }
    if ( v7 <= (char *)v5 )
    {
      v16 = (int)v49;
      v17 = (int)a3;
      src = v25 - 1;
      v9 = v25 - 1;
      goto LABEL_6;
    }
    v27 = src[4];
    v28 = src[3];
    v29 = (char *)(src + 1);
    v30 = src[1];
    v31 = src[2];
    src = v5;
    v32 = v28 ^ (v27 << 6);
LABEL_32:
    *(_DWORD *)(a5 + 4 * (((33 * (v30 ^ (32 * (v31 ^ (unsigned int)(32 * v32))))) >> 5) & 0x3FFF)) = v29;
  }
  v33 = v14 + 8;
  while ( 1 )
  {
    v5 = v25;
    if ( v25 >= v51 )
      break;
    v34 = *++v33;
    if ( v34 != *v25 )
      break;
    ++v25;
  }
  v40 = v25 - v9;
  v41 = v49 + 1;
  if ( (unsigned int)(v25 - v9) > 0x22 )
  {
    v47 = v40 - 34;
    *v49 = 32;
    while ( 1 )
    {
      v48 = v41 + 1;
      if ( v47 <= 0xFF )
        break;
      v47 -= 255;
      ++v41;
      *(v48 - 1) = 0;
    }
    *v41++ = v47;
  }
  else
  {
    *v49 = (v40 - 3) | 0x20;
  }
  *v41 = v55 & 0x3F;
  v42 = v41 + 2;
  v41[1] = v55 >> 6;
  v49 = v41 + 2;
  if ( v25 < (unsigned __int8 *)v7 )
  {
    v43 = src[4];
    v44 = src;
    v45 = src[3];
    v31 = src[2];
    src = v25;
    v46 = v44[1];
    v29 = (char *)(v44 + 1);
    v30 = v46;
    v54 = v42;
    v32 = v45 ^ (v43 << 6);
    goto LABEL_32;
  }
  v16 = (int)(v41 + 2);
  v17 = (int)a3;
  src = v25;
  v9 = v25;
LABEL_6:
  if ( v51 != v9 )
    v16 = lzo1c_store_run(v16, src);
  *a4 = v16 - v17;
  return 0;
}
