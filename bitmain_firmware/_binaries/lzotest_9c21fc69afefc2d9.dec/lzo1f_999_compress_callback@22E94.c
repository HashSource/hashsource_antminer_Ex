int __fastcall lzo1f_999_compress_callback(
        char *a1,
        size_t a2,
        unsigned int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7)
{
  char *v8; // r10
  char *v10; // r3
  _BYTE *v11; // r6
  unsigned int v12; // r8
  unsigned int v13; // r3
  unsigned int v14; // r5
  unsigned int v15; // r11
  int v16; // r7
  bool v17; // cc
  int v18; // r2
  bool v19; // zf
  _BYTE *v20; // r1
  int v21; // r0
  void (*v22)(void); // r4
  bool v24; // zf
  bool v25; // cc
  int v26; // r2
  unsigned int v27; // r3
  _BOOL4 v28; // r1
  bool v29; // zf
  _BYTE *v30; // r2
  unsigned int v31; // r3
  _BOOL4 v32; // r2
  int v34; // [sp+8h] [bp-74h]
  char *v35; // [sp+Ch] [bp-70h]
  int v36; // [sp+10h] [bp-6Ch]
  int v38; // [sp+18h] [bp-64h] BYREF
  unsigned int v39; // [sp+1Ch] [bp-60h]
  unsigned int v40; // [sp+20h] [bp-5Ch]
  unsigned int v41; // [sp+24h] [bp-58h]
  int v42; // [sp+28h] [bp-54h]
  int v43; // [sp+2Ch] [bp-50h]
  char *v44; // [sp+34h] [bp-48h]
  char *v45; // [sp+38h] [bp-44h]
  char *v46; // [sp+3Ch] [bp-40h]
  int v47; // [sp+44h] [bp-38h]
  int v48; // [sp+48h] [bp-34h]
  _BYTE *v49; // [sp+4Ch] [bp-30h]
  int v50; // [sp+50h] [bp-2Ch]
  int v51; // [sp+54h] [bp-28h]
  int v52; // [sp+58h] [bp-24h]
  int v53; // [sp+5Ch] [bp-20h]
  int v54; // [sp+60h] [bp-1Ch]
  unsigned int v55; // [sp+64h] [bp-18h]
  unsigned int v56; // [sp+68h] [bp-14h]
  int v57; // [sp+6Ch] [bp-10h]
  int v58; // [sp+70h] [bp-Ch]
  int v59; // [sp+74h] [bp-8h]

  v8 = &a1[a2];
  v38 = 1;
  a5[2] = 2;
  *a5 = 0x3FFF;
  v45 = a1;
  v44 = a1;
  v46 = &a1[a2];
  a5[11] = &v38;
  a5[7] = 0;
  v59 = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v43 = 0;
  v42 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v53 = 0;
  v52 = 0;
  v51 = 0;
  v54 = 0;
  a5[8] = 0;
  a5[5] = 0;
  a5[6] = 0;
  a5[1] = 2048;
  a5[3] = 2048;
  a5[4] = 2048;
  a5[19] = 18431;
  a5[21] = 0x3FFF;
  a5[20] = (char *)a5 + 18523;
  v47 = a6;
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
    v10 = (char *)a5 + a2 + 92;
    v10[2] = 0;
    v10[1] = 0;
    *((_BYTE *)a5 + a2 + 92) = 0;
    goto LABEL_6;
  }
  if ( a2 > 0x800 )
  {
    a5[9] = 2048;
    memcpy(a5 + 23, a1, 0x800u);
    a5[16] = 2048;
    a5[18] = 2048;
    v44 = a1 + 2048;
    goto LABEL_6;
  }
  memcpy(a5 + 23, a1, a2);
  v44 = v8;
  a5[16] = a2;
  a5[18] = 2048;
  if ( a2 <= 2 )
    goto LABEL_5;
LABEL_6:
  a5[5] = 0;
  if ( a7 )
    a5[3] = a7;
  v36 = sub_22888(&v38, (int)a5, 0, 0);
  if ( !v36 )
  {
    v11 = (_BYTE *)a3;
    v12 = 0;
    v35 = a1;
LABEL_10:
    v13 = v39;
    if ( !v39 )
    {
LABEL_33:
      if ( v12 )
        v11 = sub_227E0(v11, v35, v12, a3);
      *v11 = -31;
      v11[1] = 0;
      v11[2] = 0;
      v21 = v47;
      v19 = v47 == 0;
      v49 = &v11[-a3 + 3];
      *a4 = v49;
      if ( !v19 )
      {
        v22 = *(void (**)(void))(v21 + 8);
        if ( v22 )
          v22();
      }
      return v36;
    }
    while ( 1 )
    {
      v14 = v40;
      if ( v12 )
      {
        if ( v40 <= 2 )
        {
LABEL_31:
          ++v12;
          sub_22888(&v38, (int)a5, 1, 0);
          goto LABEL_32;
        }
        if ( v12 > 2 )
        {
          v24 = v12 == 3;
          if ( v12 != 3 )
            v24 = v12 == 31;
          if ( v24 )
            v16 = 3;
          else
            v16 = 1;
        }
        else
        {
          v16 = 1;
        }
        v15 = v41;
        v25 = v41 > 0x800;
        if ( v41 <= 0x800 )
          v25 = v40 > 8;
        v26 = !v25;
        v34 = v26;
        if ( v13 <= v40 )
        {
          v16 = 1;
          goto LABEL_65;
        }
      }
      else
      {
        v35 = &v44[-v13];
        if ( v40 <= 2 )
          goto LABEL_31;
        v15 = v41;
        v16 = 1;
        v17 = v41 > 0x800;
        if ( v41 <= 0x800 )
          v17 = v40 > 8;
        v18 = !v17;
        v34 = v18;
        if ( v13 <= v40 )
        {
LABEL_19:
          v56 = 0;
          v55 = 0;
          if ( v34 )
            goto LABEL_66;
          goto LABEL_20;
        }
      }
      sub_22888(&v38, (int)a5, 1, 0);
      if ( v34 )
      {
        v27 = v40;
        if ( v41 > 0x800 )
        {
          ++v16;
          goto LABEL_63;
        }
      }
      else
      {
        v27 = v40;
      }
      if ( v27 <= 8 )
      {
        v28 = v41 <= 0x800;
        if ( v15 <= 0x800 )
          v28 = 0;
        if ( v28 )
        {
          --v16;
        }
        else
        {
          v29 = v14 == 3;
          if ( v14 == 3 )
            v29 = v27 == 3;
          if ( v29 )
          {
            v27 = 3;
            v32 = v41 <= 0x1000;
            if ( v15 <= 0x800 )
              v32 = 0;
            if ( v32 )
              --v16;
          }
        }
      }
LABEL_63:
      if ( v16 + v14 <= v27 )
      {
        ++v12;
        ++v54;
        goto LABEL_10;
      }
      v16 = 2;
      if ( !v12 )
        goto LABEL_19;
LABEL_65:
      v11 = sub_227E0(v11, v35, v12, a3);
      v56 = v14;
      v55 = v12;
      if ( v34 )
      {
LABEL_66:
        *v11 = (4 * (v15 - 1)) & 0x1C | (32 * (v14 - 2));
        v11[1] = (v15 - 1) >> 3;
        v11 += 2;
        ++v58;
        goto LABEL_29;
      }
LABEL_20:
      v19 = v15 == 4096;
      if ( v15 <= 0x1000 )
        v19 = v14 == 3;
      if ( !v19 )
      {
        v30 = v11 + 1;
        if ( v14 > 0x21 )
        {
          v31 = v14 - 33;
          for ( *v11 = -32; v31 > 0xFF; ++v30 )
          {
            v31 -= 255;
            *v30 = 0;
          }
          v20 = v30 + 1;
          *v30 = v31;
          goto LABEL_28;
        }
        v20 = v11 + 1;
LABEL_27:
        *v11 = ~(~((v14 - 2) << 27) >> 27);
LABEL_28:
        *v20 = 4 * v15;
        v11 = v20 + 2;
        v20[1] = v15 >> 6;
        ++v59;
        goto LABEL_29;
      }
      if ( !v55 )
      {
        v20 = v11 + 1;
        goto LABEL_27;
      }
      *v11 = (4 * (v15 - 1)) & 0x1C;
      v11[1] = (v15 - 2049) >> 3;
      v11 += 2;
      ++v57;
LABEL_29:
      v12 = 0;
      sub_22888(&v38, (int)a5, v14, v16);
LABEL_32:
      v49 = &v11[-a3];
      v13 = v39;
      if ( !v39 )
        goto LABEL_33;
    }
  }
  return v36;
}
