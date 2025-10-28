int __fastcall lzo1b_999_compress_callback(char *a1, size_t a2, _BYTE *a3, _DWORD *a4, _DWORD *a5, int a6, int a7)
{
  char *v8; // r9
  char *v9; // r6
  char *v11; // r3
  unsigned int v12; // r8
  unsigned int v13; // r3
  int v14; // r0
  bool v15; // zf
  void (*v16)(void); // r4
  unsigned int v18; // r9
  _BOOL4 v19; // r2
  unsigned int v20; // r7
  int v21; // r11
  bool v22; // cc
  _BYTE *v24; // r3
  bool v25; // cc
  int v26; // r3
  unsigned int v27; // r9
  unsigned int v28; // r2
  char v29; // r3
  _BYTE *v30; // [sp+8h] [bp-74h]
  int v31; // [sp+Ch] [bp-70h]
  int v33; // [sp+18h] [bp-64h] BYREF
  unsigned int v34; // [sp+1Ch] [bp-60h]
  unsigned int v35; // [sp+20h] [bp-5Ch]
  unsigned int v36; // [sp+24h] [bp-58h]
  int v37; // [sp+28h] [bp-54h]
  int v38; // [sp+2Ch] [bp-50h]
  char *v39; // [sp+34h] [bp-48h]
  char *v40; // [sp+38h] [bp-44h]
  char *v41; // [sp+3Ch] [bp-40h]
  int v42; // [sp+44h] [bp-38h]
  int v43; // [sp+48h] [bp-34h]
  _BYTE *v44; // [sp+4Ch] [bp-30h]
  int v45; // [sp+50h] [bp-2Ch]
  int v46; // [sp+54h] [bp-28h]
  int v47; // [sp+58h] [bp-24h]
  int v48; // [sp+5Ch] [bp-20h]
  int v49; // [sp+60h] [bp-1Ch]
  unsigned int v50; // [sp+64h] [bp-18h]
  int v51; // [sp+68h] [bp-14h]
  int v52; // [sp+6Ch] [bp-10h]
  int v53; // [sp+70h] [bp-Ch]
  int v54; // [sp+74h] [bp-8h]

  v8 = &a1[a2];
  v9 = a1;
  *a5 = 0xFFFF;
  a5[2] = 2;
  v33 = 1;
  a5[11] = &v33;
  v40 = a1;
  v39 = a1;
  v41 = &a1[a2];
  a5[7] = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v38 = 0;
  v37 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v49 = 0;
  a5[8] = 0;
  a5[5] = 0;
  a5[6] = 0;
  a5[1] = 2048;
  a5[3] = 2048;
  a5[4] = 2048;
  a5[19] = (char *)&elf_hash_chain[203] + 3;
  a5[21] = 0xFFFF;
  a5[20] = (char *)a5 + 67675;
  v42 = a6;
  memset(a5 + 168981, 0, 0x10000u);
  a5[16] = 0;
  a5[14] = 0;
  a5[13] = 0;
  a5[15] = 0;
  a5[17] = 0;
  a5[22] = 0;
  a5[9] = a2;
  if ( !a2 )
  {
    a5[18] = 2048;
LABEL_5:
    v11 = (char *)a5 + a2 + 92;
    v11[2] = 0;
    v11[1] = 0;
    *((_BYTE *)a5 + a2 + 92) = 0;
    goto LABEL_6;
  }
  if ( a2 > 0x800 )
  {
    a5[9] = 2048;
    memcpy(a5 + 23, v9, 0x800u);
    a5[16] = 2048;
    a5[18] = 2048;
    v39 = v9 + 2048;
    goto LABEL_6;
  }
  memcpy(a5 + 23, v9, a2);
  v39 = v8;
  a5[16] = a2;
  a5[18] = 2048;
  if ( a2 <= 2 )
    goto LABEL_5;
LABEL_6:
  a5[5] = 0;
  if ( a7 )
    a5[3] = a7;
  v31 = sub_1BB94(&v33, (int)a5, 0, 0);
  if ( !v31 )
  {
    v12 = 0;
    v13 = v34;
    v30 = a3;
    if ( !v34 )
    {
LABEL_10:
      if ( v12 )
        a3 = (_BYTE *)lzo1b_store_run((int)a3, v9);
      *a3 = 33;
      a3[1] = 0;
      a3[2] = 0;
      v14 = v42;
      v15 = v42 == 0;
      v44 = (_BYTE *)(a3 + 3 - v30);
      *a4 = v44;
      if ( !v15 )
      {
        v16 = *(void (**)(void))(v14 + 8);
        if ( v16 )
          v16();
      }
      return v31;
    }
    while ( 1 )
    {
      v20 = v35;
      if ( !v12 )
        v9 = &v39[-v13];
      if ( v35 > 2 )
      {
        v18 = v36;
        v19 = v35 <= 3;
        if ( v36 <= 0x2000 )
          v19 = 0;
        if ( !v19 )
          break;
      }
      ++v12;
      sub_1BB94(&v33, (int)a5, 1, 0);
LABEL_20:
      v44 = (_BYTE *)(a3 - v30);
LABEL_21:
      v13 = v34;
      if ( !v34 )
        goto LABEL_10;
    }
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        v21 = 1;
        if ( v13 <= v35 )
          goto LABEL_29;
LABEL_51:
        sub_1BB94(&v33, (int)a5, 1, 0);
        v25 = v20 > 8;
        if ( v20 <= 8 )
          v25 = v18 > 0x2000;
        v26 = !v25;
        if ( v26 && v36 > 0x2000 )
          ++v21;
        if ( v35 >= v21 + v20 )
        {
          ++v12;
          ++v49;
          goto LABEL_21;
        }
        if ( !v12 )
        {
          v21 = 2;
          goto LABEL_35;
        }
        if ( v12 != 1 )
        {
          v21 = 2;
LABEL_29:
          a3 = (_BYTE *)lzo1b_store_run((int)a3, v9);
          if ( v12 < 0x118 )
            goto LABEL_63;
LABEL_35:
          v50 = 0;
LABEL_36:
          v22 = v20 > 8;
          if ( v20 <= 8 )
            v22 = v18 > 0x2000;
          if ( !v22 )
          {
            v27 = v18 - 1;
            *a3 = v27 & 0x1F | (32 * (v20 - 1));
            a3[1] = v27 >> 5;
            a3 += 2;
            ++v53;
          }
          else
          {
            v24 = a3 + 1;
            if ( v20 > 0x22 )
            {
              v28 = v20 - 34;
              for ( *a3 = 32; v28 > 0xFF; ++v24 )
              {
                v28 -= 255;
                *v24 = 0;
              }
              *v24++ = v28;
            }
            else
            {
              *a3 = (v20 - 3) | 0x20;
            }
            *v24 = v18;
            a3 = v24 + 2;
            v24[1] = BYTE1(v18);
            v50 = 0;
            ++v54;
          }
          v12 = 0;
          sub_1BB94(&v33, (int)a5, v20, v21);
          goto LABEL_20;
        }
        v21 = 2;
        if ( v50 != 3 )
          goto LABEL_62;
LABEL_70:
        v29 = *(a3 - 2);
        ++v9;
        *(++a3 - 3) = v29 & 0x1F;
        *(a3 - 1) = *(v9 - 1);
        ++v51;
        goto LABEL_63;
      }
      if ( v50 == 3 )
      {
        v21 = 1;
        goto LABEL_70;
      }
      if ( v13 <= v35 )
      {
        v21 = 1;
LABEL_62:
        a3 = (_BYTE *)lzo1b_store_run((int)a3, v9);
LABEL_63:
        v50 = v20;
        goto LABEL_36;
      }
    }
    else if ( v50 != 3 || v13 <= v35 )
    {
      v21 = 1;
      goto LABEL_35;
    }
    v21 = v12;
    goto LABEL_51;
  }
  return v31;
}
