int __fastcall lzo1c_999_compress_callback(char *a1, size_t a2, _BYTE *a3, _DWORD *a4, _DWORD *a5, int a6, int a7)
{
  char *v8; // r9
  char *v9; // r6
  _BYTE *v10; // r5
  char *v11; // r3
  unsigned int v12; // r8
  unsigned int v13; // r3
  int v14; // r0
  bool v15; // zf
  void (*v16)(void); // r4
  unsigned int v18; // r9
  _BOOL4 v19; // r2
  unsigned int v20; // r7
  bool v21; // cc
  int v22; // r2
  _BYTE *v23; // r3
  bool v24; // cc
  bool v25; // cc
  int v26; // r3
  unsigned int v27; // r2
  _BYTE *v28; // r3
  int v29; // r0
  char v30; // r3
  _BYTE *v31; // r2
  char *v32; // r0
  char v33; // t1
  _BYTE *v34; // [sp+4h] [bp-80h]
  int v35; // [sp+8h] [bp-7Ch]
  int v36; // [sp+8h] [bp-7Ch]
  int v37; // [sp+Ch] [bp-78h]
  int v38; // [sp+10h] [bp-74h]
  int v40; // [sp+1Ch] [bp-68h] BYREF
  unsigned int v41; // [sp+20h] [bp-64h]
  unsigned int v42; // [sp+24h] [bp-60h]
  unsigned int v43; // [sp+28h] [bp-5Ch]
  int v44; // [sp+2Ch] [bp-58h]
  int v45; // [sp+30h] [bp-54h]
  char *v46; // [sp+38h] [bp-4Ch]
  char *v47; // [sp+3Ch] [bp-48h]
  char *v48; // [sp+40h] [bp-44h]
  int v49; // [sp+48h] [bp-3Ch]
  int v50; // [sp+4Ch] [bp-38h]
  _BYTE *v51; // [sp+50h] [bp-34h]
  int v52; // [sp+54h] [bp-30h]
  int v53; // [sp+58h] [bp-2Ch]
  int v54; // [sp+5Ch] [bp-28h]
  int v55; // [sp+60h] [bp-24h]
  int v56; // [sp+64h] [bp-20h]
  unsigned int v57; // [sp+68h] [bp-1Ch]
  _BYTE *v58; // [sp+6Ch] [bp-18h]
  int v59; // [sp+70h] [bp-14h]
  int v60; // [sp+74h] [bp-10h]
  int v61; // [sp+78h] [bp-Ch]
  int v62; // [sp+7Ch] [bp-8h]

  v8 = &a1[a2];
  v9 = a1;
  a5[2] = 2;
  v40 = 1;
  v10 = a3;
  v58 = a3 + 1;
  *a5 = 0x3FFF;
  a5[1] = 2048;
  v47 = a1;
  v46 = a1;
  v48 = &a1[a2];
  a5[11] = &v40;
  a5[7] = 0;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  v59 = 0;
  v57 = 0;
  v45 = 0;
  v44 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v56 = 0;
  a5[8] = 0;
  a5[5] = 0;
  a5[3] = 2048;
  a5[4] = 2048;
  v49 = a6;
  a5[21] = 0x3FFF;
  a5[6] = 0;
  a5[19] = 18431;
  a5[20] = (char *)a5 + 18523;
  memset(a5 + 31766, 0, 0x8000u);
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
    v46 = v9 + 2048;
    goto LABEL_6;
  }
  memcpy(a5 + 23, v9, a2);
  v46 = v8;
  a5[16] = a2;
  a5[18] = 2048;
  if ( a2 <= 2 )
    goto LABEL_5;
LABEL_6:
  a5[5] = 0;
  if ( a7 )
    a5[3] = a7;
  v37 = sub_20BB4(&v40, (int)a5, 0, 0);
  if ( !v37 )
  {
    v12 = 0;
    v13 = v41;
    v34 = v10;
    if ( !v41 )
    {
LABEL_10:
      if ( v12 )
        v10 = (_BYTE *)lzo1c_store_run((int)v10, v9);
      *v10 = 33;
      v10[1] = 0;
      v10[2] = 0;
      v14 = v49;
      v15 = v49 == 0;
      v51 = (_BYTE *)(v10 + 3 - v34);
      *a4 = v51;
      if ( !v15 )
      {
        v16 = *(void (**)(void))(v14 + 8);
        if ( v16 )
          v16();
      }
      return v37;
    }
    while ( 1 )
    {
      v20 = v42;
      if ( !v12 )
        v9 = &v46[-v13];
      if ( v42 > 2 )
      {
        v18 = v43;
        v19 = v42 <= 3;
        if ( v43 <= 0x2000 )
          v19 = 0;
        if ( !v19 )
          break;
      }
      ++v12;
      sub_20BB4(&v40, (int)a5, 1, 0);
LABEL_20:
      v51 = (_BYTE *)(v10 - v34);
LABEL_21:
      v13 = v41;
      if ( !v41 )
        goto LABEL_10;
    }
    v21 = v42 > 8;
    if ( v42 <= 8 )
      v21 = v43 > 0x2000;
    v22 = !v21;
    v38 = v22;
    if ( v12 )
    {
      switch ( v12 )
      {
        case 1u:
          if ( v57 == 3 )
          {
            v35 = 1;
            goto LABEL_76;
          }
          break;
        case 3u:
          if ( v58 == v10 )
          {
            v28 = v10;
            v35 = 1;
LABEL_81:
            v31 = v28 - 1;
            v32 = &v9[v12];
            *(v10 - 2) |= (_BYTE)v12 << 6;
            do
            {
              v33 = *v9++;
              *++v31 = v33;
            }
            while ( v9 != v32 );
            v10 = &v28[v12];
            ++v60;
            goto LABEL_66;
          }
          if ( v13 <= v42 )
          {
            v35 = 1;
LABEL_65:
            v10 = (_BYTE *)lzo1c_store_run((int)v10, v9);
            if ( v12 < 0x118 )
            {
LABEL_66:
              v57 = v20;
              goto LABEL_67;
            }
LABEL_43:
            v57 = 0;
            if ( v38 )
            {
LABEL_68:
              *v10 = (v18 - 1) & 0x1F | (32 * (v20 - 1));
              v10[1] = (v18 - 1) >> 5;
              v10 += 2;
              ++v61;
LABEL_47:
              v12 = 0;
              sub_20BB4(&v40, (int)a5, v20, v35);
              goto LABEL_20;
            }
LABEL_44:
            v23 = v10 + 1;
            if ( v20 > 0x22 )
            {
              v27 = v20 - 34;
              for ( *v10 = 32; v27 > 0xFF; ++v23 )
              {
                v27 -= 255;
                *v23 = 0;
              }
              *v23++ = v27;
            }
            else
            {
              *v10 = (v20 - 3) | 0x20;
            }
            *v23 = v18 & 0x3F;
            v10 = v23 + 2;
            v23[1] = v18 >> 6;
            v58 = v23 + 2;
            v57 = 0;
            ++v62;
            goto LABEL_47;
          }
LABEL_37:
          v36 = 1;
          goto LABEL_55;
        case 2u:
          break;
        default:
          if ( v13 <= v42 )
          {
            v35 = 1;
            goto LABEL_64;
          }
          goto LABEL_37;
      }
      v24 = v13 > v42;
      if ( v13 <= v42 )
        v13 = 1;
      v36 = v58 != v10;
      if ( !v24 )
      {
        v35 = v13;
LABEL_63:
        if ( v12 != 1 )
        {
LABEL_64:
          if ( v12 > 3 )
            goto LABEL_65;
          goto LABEL_73;
        }
        if ( v57 != 3 )
        {
LABEL_73:
          v28 = v58;
          if ( v10 != v58 )
          {
            v29 = lzo1c_store_run((int)v10, v9);
            v57 = v20;
            v10 = (_BYTE *)v29;
LABEL_67:
            if ( v38 )
              goto LABEL_68;
            goto LABEL_44;
          }
          goto LABEL_81;
        }
LABEL_76:
        v30 = *(v10 - 2);
        ++v9;
        *(++v10 - 3) = v30 & 0x1F;
        *(v10 - 1) = *(v9 - 1);
        ++v59;
        goto LABEL_66;
      }
    }
    else
    {
      if ( v57 != 3 && v58 != v10 || v13 <= v42 )
      {
        v35 = 1;
        goto LABEL_43;
      }
      v36 = 0;
    }
LABEL_55:
    sub_20BB4(&v40, (int)a5, 1, 0);
    v25 = v20 > 8;
    if ( v20 <= 8 )
      v25 = v18 > 0x2000;
    v26 = !v25;
    if ( v26 && v43 > 0x2000 )
      ++v36;
    if ( v42 >= v36 + v20 )
    {
      ++v12;
      ++v56;
      goto LABEL_21;
    }
    v35 = 2;
    if ( !v12 )
      goto LABEL_43;
    goto LABEL_63;
  }
  return v37;
}
