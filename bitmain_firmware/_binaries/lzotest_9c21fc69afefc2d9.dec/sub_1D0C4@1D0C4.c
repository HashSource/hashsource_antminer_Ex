int __fastcall sub_1D0C4(unsigned __int8 *src, int a2, unsigned __int8 *a3, _DWORD *a4, int a5)
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
  unsigned __int8 *v21; // r5
  _BYTE *v22; // r3
  char v23; // t1
  unsigned __int8 *v24; // r3
  unsigned __int8 *v25; // r3
  char v26; // r2
  unsigned __int8 *v27; // r6
  int v28; // t1
  int v29; // r0
  bool v30; // zf
  unsigned __int8 *v31; // r3
  unsigned __int8 *v32; // r3
  unsigned __int8 v33; // t1
  int v34; // r3
  bool v35; // cc
  _BYTE *v36; // r2
  unsigned int v37; // r3
  _BYTE *v38; // r1
  unsigned __int8 *v39; // [sp+0h] [bp-24h]
  unsigned __int8 *v41; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v43; // [sp+10h] [bp-14h]
  unsigned __int8 *v44; // [sp+14h] [bp-10h]
  unsigned int v45; // [sp+18h] [bp-Ch]
  unsigned int v46; // [sp+1Ch] [bp-8h]

  v5 = src + 1;
  v6 = src;
  v7 = (char *)&src[a2 - 9];
  v43 = (unsigned __int8 *)v7;
  v41 = &src[a2];
  v44 = a3 + 1;
  v39 = a3;
  while ( 1 )
  {
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
          v45 = v5 - v14;
          v46 = v5 - v14 - 1;
          if ( v46 <= 0x3FFE )
          {
            if ( v45 <= 0x2000
              || v14[3] == v8
              || (v19 = v13 & 0x7FF ^ 0x201F,
                  v14 = *(unsigned __int8 **)(a5 + 4 * v19),
                  v15 = (unsigned __int8 **)(a5 + 4 * v19),
                  v14 >= v6)
              && (v45 = v5 - v14, v46 = v5 - v14 - 1, v46 <= 0x3FFE)
              && (v45 <= 0x2000 || v14[3] == v8) )
            {
              if ( *v14 == v12 && v14[1] == v11 && v14[2] == v10 )
                break;
            }
          }
        }
        *v15 = v5++;
        if ( v7 <= (char *)v5 )
        {
          v16 = (int)v39;
          v17 = (int)a3;
          goto LABEL_6;
        }
      }
      *v15 = v5;
      if ( v5 != src )
      {
        if ( v5 == v43 )
        {
          v43 = v5 + 4;
          *(v39 - 2) &= 0x1Fu;
          v9 = src + 1;
          *v39++ = *src;
        }
        else
        {
          v20 = v5 - src;
          if ( (unsigned int)(v5 - src) <= 0x1F )
          {
            v30 = v20 == 3;
            if ( v20 <= 3 )
              v30 = v39 == v44;
            if ( v30 )
              v31 = (unsigned __int8 *)*(v44 - 2);
            else
              v31 = v39;
            if ( !v30 )
            {
              *v31++ = v20;
              v39 = v31;
            }
            v21 = v39;
            if ( v30 )
              *(v44 - 2) = (unsigned __int8)v31 | ((_BYTE)v20 << 6);
            v32 = v39 - 1;
            do
            {
              v33 = *src++;
              *++v32 = v33;
            }
            while ( v5 != src );
            goto LABEL_24;
          }
          if ( v20 < 0x118 )
          {
            *v39 = 0;
            v21 = v39 + 2;
            v39[1] = v20 - 32;
            v22 = v39 + 1;
            do
            {
              v23 = *src++;
              *++v22 = v23;
            }
            while ( v5 != src );
LABEL_24:
            v24 = &v21[v20];
            v9 = v5;
            v39 = v24;
            v43 = v5 + 4;
            goto LABEL_25;
          }
          v29 = lzo1c_store_run((int)v39, src);
          v9 = v5;
          v39 = (unsigned __int8 *)v29;
        }
      }
LABEL_25:
      if ( v14[3] != v5[3] )
      {
        v25 = v5 + 4;
        goto LABEL_28;
      }
      if ( v14[4] == v5[4] )
        break;
      v25 = v5 + 5;
LABEL_28:
      v5 = v25 - 1;
      v26 = (_BYTE)v25 - 1 - (_BYTE)v9;
      if ( v45 > 0x2000 )
      {
        *v39 = (v26 - 3) | 0x20;
        v44 = v39 + 3;
        v39[2] = v45 >> 6;
        v39[1] = v45 & 0x3F;
        v39 += 3;
      }
      else
      {
        *v39 = v46 & 0x1F | (32 * (v26 - 1));
        v39[1] = v46 >> 5;
        v39 += 2;
      }
      if ( v7 <= (char *)v5 )
      {
        v16 = (int)v39;
        v17 = (int)a3;
        v9 = v25 - 1;
        src = v25 - 1;
        goto LABEL_6;
      }
      src = v25 - 1;
    }
    v25 = v5 + 6;
    if ( v14[5] != v5[5] )
      goto LABEL_28;
    v25 = v5 + 7;
    if ( v14[6] != v5[6] )
      goto LABEL_28;
    v25 = v5 + 8;
    if ( v14[7] != v5[7] )
      goto LABEL_28;
    v25 = v5 + 9;
    if ( v14[8] != v5[8] )
      goto LABEL_28;
    v27 = v14 + 8;
    for ( v5 += 9; ; ++v5 )
    {
      src = v5;
      if ( v5 >= v41 )
        break;
      v28 = *++v27;
      if ( v28 != *v5 )
        break;
    }
    v34 = v5 - v9;
    v35 = (unsigned int)(v5 - v9) > 0x22;
    v36 = v39 + 1;
    if ( v35 )
    {
      v37 = v34 - 34;
      *v39 = 32;
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
      *v39 = (v34 - 3) | 0x20;
    }
    *v36 = v45 & 0x3F;
    v36[1] = v45 >> 6;
    v39 = v36 + 2;
    if ( v5 >= (unsigned __int8 *)v7 )
      break;
    v44 = v36 + 2;
  }
  v16 = (int)(v36 + 2);
  v17 = (int)a3;
  v9 = v5;
LABEL_6:
  if ( v41 != v9 )
    v16 = lzo1c_store_run(v16, src);
  *a4 = v16 - v17;
  return 0;
}
