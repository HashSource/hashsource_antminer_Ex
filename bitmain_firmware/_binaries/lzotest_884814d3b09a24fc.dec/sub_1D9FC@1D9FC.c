int __fastcall sub_1D9FC(unsigned __int8 *src, int a2, _BYTE *a3, _DWORD *a4, int a5)
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
  unsigned __int8 *v25; // r9
  char v26; // r2
  unsigned __int8 *v27; // r2
  int v28; // lr
  int v29; // r12
  int v30; // r1
  unsigned __int8 *v31; // r6
  int v32; // t1
  int v33; // r0
  bool v34; // zf
  _BYTE *v35; // r3
  _BYTE *v36; // r3
  char v37; // t1
  int v38; // r3
  _BYTE *v39; // r1
  unsigned int v40; // r3
  _BYTE *v41; // r2
  _BYTE *v42; // [sp+0h] [bp-24h]
  unsigned __int8 *v44; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v46; // [sp+10h] [bp-14h]
  _BYTE *v47; // [sp+14h] [bp-10h]
  unsigned int v48; // [sp+18h] [bp-Ch]
  unsigned int v49; // [sp+1Ch] [bp-8h]

  v5 = src + 1;
  v42 = a3;
  v6 = src;
  v7 = (char *)&src[a2 - 9];
  v44 = &src[a2];
  v46 = (unsigned __int8 *)v7;
  v47 = a3 + 1;
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
        v48 = v5 - v14;
        v49 = v5 - v14 - 1;
        if ( v49 <= 0x3FFE )
        {
          if ( v48 <= 0x2000
            || v14[3] == v8
            || (v19 = v13 & 0x7FF ^ 0x201F,
                v14 = *(unsigned __int8 **)(a5 + 4 * v19),
                v15 = (unsigned __int8 **)(a5 + 4 * v19),
                v14 >= v6)
            && (v48 = v5 - v14, v49 = v5 - v14 - 1, v49 <= 0x3FFE)
            && (v48 <= 0x2000 || v14[3] == v8) )
          {
            if ( *v14 == v12 && v14[1] == v11 && v14[2] == v10 )
              break;
          }
        }
      }
      *v15 = v5++;
      if ( v7 <= (char *)v5 )
      {
        v16 = (int)v42;
        v17 = (int)a3;
        goto LABEL_6;
      }
    }
    *v15 = v5;
    if ( v5 != src )
    {
      if ( v5 == v46 )
      {
        ++src;
        v46 = v5 + 4;
        *(v42 - 2) &= 0x1Fu;
        v9 = src;
        *v42++ = *(src - 1);
      }
      else
      {
        v20 = v5 - src;
        if ( (unsigned int)(v5 - src) <= 0x1F )
        {
          v34 = v20 == 3;
          if ( v20 <= 3 )
            v34 = v42 == v47;
          if ( v34 )
            v35 = (_BYTE *)(unsigned __int8)*(v47 - 2);
          else
            v35 = v42;
          if ( !v34 )
          {
            *v35++ = v20;
            v42 = v35;
          }
          v21 = v42;
          if ( v34 )
            *(v47 - 2) = (unsigned __int8)v35 | ((_BYTE)v20 << 6);
          v36 = v42 - 1;
          do
          {
            v37 = *src++;
            *++v36 = v37;
          }
          while ( v5 != src );
          goto LABEL_24;
        }
        if ( v20 < 0x118 )
        {
          *v42 = 0;
          v21 = v42 + 2;
          v42[1] = v20 - 32;
          v22 = v42 + 1;
          do
          {
            v23 = *src++;
            *++v22 = v23;
          }
          while ( v5 != src );
LABEL_24:
          v24 = &v21[v20];
          v9 = v5;
          v42 = v24;
          v46 = v5 + 4;
          goto LABEL_25;
        }
        v33 = lzo1c_store_run((int)v42, src);
        v9 = v5;
        v42 = (_BYTE *)v33;
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
    if ( v48 > 0x2000 )
    {
      *v42 = (v26 - 3) | 0x20;
      v47 = v42 + 3;
      v42[2] = v48 >> 6;
      v42[1] = v48 & 0x3F;
      v42 += 3;
    }
    else
    {
      *v42 = v49 & 0x1F | (32 * (v26 - 1));
      v42[1] = v49 >> 5;
      v42 += 2;
    }
    if ( v7 <= (char *)v5 )
    {
      v16 = (int)v42;
      v17 = (int)a3;
      src = v25 - 1;
      v9 = v25 - 1;
      goto LABEL_6;
    }
    v27 = src;
    *(_DWORD *)(a5
              + 4 * (((unsigned int)(33 * (src[1] ^ (32 * (src[2] ^ (32 * (src[3] ^ (src[4] << 6))))))) >> 5) & 0x3FFF)) = src + 1;
    v28 = src[5];
    v29 = src[4];
    v30 = src[3];
    src = v25 - 1;
LABEL_32:
    *(_DWORD *)(a5 + 4 * (((33 * (v27[2] ^ (32 * (v30 ^ (32 * (v29 ^ (unsigned int)(v28 << 6))))))) >> 5) & 0x3FFF)) = v27 + 2;
  }
  v31 = v14 + 8;
  while ( 1 )
  {
    v5 = v25;
    if ( v25 >= v44 )
      break;
    v32 = *++v31;
    if ( v32 != *v25 )
      break;
    ++v25;
  }
  v38 = v25 - v9;
  v39 = v42 + 1;
  if ( (unsigned int)(v25 - v9) > 0x22 )
  {
    v40 = v38 - 34;
    *v42 = 32;
    while ( 1 )
    {
      v41 = v39 + 1;
      if ( v40 <= 0xFF )
        break;
      v40 -= 255;
      ++v39;
      *(v41 - 1) = 0;
    }
    *v39++ = v40;
  }
  else
  {
    *v42 = (v38 - 3) | 0x20;
  }
  *v39 = v48 & 0x3F;
  v39[1] = v48 >> 6;
  v42 = v39 + 2;
  if ( v25 < (unsigned __int8 *)v7 )
  {
    v27 = src;
    v47 = v39 + 2;
    *(_DWORD *)(a5
              + 4 * (((unsigned int)(33 * (src[1] ^ (32 * (src[2] ^ (32 * (src[3] ^ (src[4] << 6))))))) >> 5) & 0x3FFF)) = src + 1;
    v28 = src[5];
    v29 = src[4];
    v30 = src[3];
    src = v25;
    goto LABEL_32;
  }
  v16 = (int)(v39 + 2);
  v17 = (int)a3;
  src = v25;
  v9 = v25;
LABEL_6:
  if ( v44 != v9 )
    v16 = lzo1c_store_run(v16, src);
  *a4 = v16 - v17;
  return 0;
}
