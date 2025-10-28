int __fastcall lzo2a_999_compress_callback(char *a1, size_t a2, _BYTE *a3, _DWORD *a4, int a5, int a6, int a7)
{
  char *v8; // r10
  size_t v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r5
  unsigned int v14; // r3
  unsigned int v15; // r10
  unsigned int v16; // r8
  unsigned int v17; // r11
  unsigned int v18; // r9
  __int64 v19; // r2
  unsigned int v20; // r5
  _BYTE *v21; // r0
  _BYTE *v22; // r2
  int v23; // r1
  bool v24; // zf
  _BYTE *v25; // r1
  bool v26; // cc
  unsigned int v28; // r2
  _BYTE *v29; // r0
  char v30; // r3
  unsigned int v31; // r5
  _BYTE *v32; // r1
  char v33; // r0
  char v34; // r3
  _BYTE *v35; // r2
  int v36; // r0
  void (*v37)(void); // r4
  _BYTE *v39; // r1
  char v40; // r0
  char v41; // r12
  _BYTE *v42; // r3
  _BYTE *v43; // r3
  _BYTE *v44; // r2
  _BYTE *v45; // r2
  bool v46; // cc
  unsigned int v47; // r2
  int v48; // r3
  int v49; // r1
  _BYTE *v50; // r2
  _BYTE *v51; // r3
  _BYTE *v52; // r3
  _BYTE *v53; // r1
  _BYTE *v54; // [sp+0h] [bp-78h]
  _BYTE *v55; // [sp+8h] [bp-70h]
  int v56; // [sp+Ch] [bp-6Ch]
  char v58; // [sp+14h] [bp-64h]
  int v59; // [sp+1Ch] [bp-5Ch] BYREF
  unsigned int v60; // [sp+20h] [bp-58h]
  unsigned int v61; // [sp+24h] [bp-54h]
  unsigned int v62; // [sp+28h] [bp-50h]
  int v63; // [sp+2Ch] [bp-4Ch]
  int v64; // [sp+30h] [bp-48h]
  char *v65; // [sp+38h] [bp-40h]
  char *v66; // [sp+3Ch] [bp-3Ch]
  char *v67; // [sp+40h] [bp-38h]
  int v68; // [sp+48h] [bp-30h]
  int v69; // [sp+4Ch] [bp-2Ch]
  _BYTE *v70; // [sp+50h] [bp-28h]
  int v71; // [sp+54h] [bp-24h]
  int v72; // [sp+58h] [bp-20h]
  int v73; // [sp+5Ch] [bp-1Ch]
  int v74; // [sp+60h] [bp-18h]
  int v75; // [sp+64h] [bp-14h]
  int v76; // [sp+68h] [bp-10h]
  int v77; // [sp+6Ch] [bp-Ch]
  int v78; // [sp+70h] [bp-8h]
  int v79; // [sp+74h] [bp-4h]

  v8 = &a1[a2];
  *(_DWORD *)(a5 + 76) = 10239;
  v59 = 1;
  *(_DWORD *)a5 = 0x1FFF;
  *(_DWORD *)(a5 + 8) = 1;
  v66 = a1;
  v65 = a1;
  v67 = &a1[a2];
  *(_DWORD *)(a5 + 44) = &v59;
  *(_DWORD *)(a5 + 28) = 0;
  v79 = 0;
  v78 = 0;
  v77 = 0;
  v76 = 0;
  v64 = 0;
  v63 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 0;
  v74 = 0;
  v73 = 0;
  v72 = 0;
  v75 = 0;
  *(_DWORD *)(a5 + 32) = 0;
  *(_DWORD *)(a5 + 20) = 0;
  *(_DWORD *)(a5 + 24) = 0;
  *(_DWORD *)(a5 + 4) = 2048;
  *(_DWORD *)(a5 + 12) = 2048;
  *(_DWORD *)(a5 + 16) = 2048;
  v68 = a6;
  *(_DWORD *)(a5 + 80) = a5 + 10331;
  *(_DWORD *)(a5 + 84) = 0x1FFF;
  memset((void *)(a5 + 86104), 0, 0x8000u);
  memset((void *)(a5 + 118872), 255, 0x20000u);
  *(_DWORD *)(a5 + 64) = 0;
  *(_DWORD *)(a5 + 56) = 0;
  *(_DWORD *)(a5 + 52) = 0;
  *(_DWORD *)(a5 + 60) = 0;
  *(_DWORD *)(a5 + 68) = 0;
  *(_DWORD *)(a5 + 88) = 0;
  *(_DWORD *)(a5 + 36) = a2;
  if ( !a2 )
  {
    *(_DWORD *)(a5 + 72) = 2048;
LABEL_5:
    v11 = a5 + a2 + 92;
    *(_BYTE *)(v11 + 2) = 0;
    *(_BYTE *)(v11 + 1) = 0;
    *(_BYTE *)(a5 + a2 + 92) = 0;
    goto LABEL_6;
  }
  if ( a2 <= 0x800 )
  {
    memcpy((void *)(a5 + 92), a1, a2);
    v65 = v8;
    *(_DWORD *)(a5 + 64) = a2;
    *(_DWORD *)(a5 + 72) = 2048;
    if ( a2 > 2 )
      goto LABEL_6;
    goto LABEL_5;
  }
  *(_DWORD *)(a5 + 36) = 2048;
  memcpy((void *)(a5 + 92), a1, 0x800u);
  *(_DWORD *)(a5 + 64) = 2048;
  v65 = a1 + 2048;
  *(_DWORD *)(a5 + 72) = 2048;
LABEL_6:
  *(_DWORD *)(a5 + 20) = 0;
  if ( a7 )
    *(_DWORD *)(a5 + 12) = a7;
  v56 = sub_2D6C4(&v59, a5, 0);
  if ( v56 )
    return v56;
  v12 = 0;
  v13 = 0;
  v55 = a3;
  v54 = 0;
LABEL_10:
  v14 = v60;
  v15 = v12 + 1;
  while ( v60 )
  {
    v16 = v61;
    v17 = v62;
    v18 = v61 - 2;
    if ( v61 - 2 > 3 )
    {
      if ( v61 > 9 )
      {
        if ( v14 <= v61 )
        {
          HIDWORD(v19) = 1;
          v20 = v13 | (1 << v12);
LABEL_58:
          if ( !v12 )
          {
            v13 = v20 | 2;
            v39 = a3 + 1;
            v12 = 2;
            v54 = a3;
            goto LABEL_60;
          }
          if ( v15 <= 7 )
          {
            v39 = a3;
          }
          else
          {
            v44 = v54;
            v15 = v12 - 7;
            v39 = a3 + 1;
            if ( v12 != 7 )
              v54 = a3;
            *v44 = v20;
            v20 >>= 8;
            if ( v12 == 7 )
            {
              v13 = v20 | 1;
              v54 = a3;
              v12 = 1;
LABEL_60:
              v40 = v17 & 0x1F;
              v41 = v17 >> 5;
              a3 = v39 + 2;
              if ( v16 > 9 )
              {
                v47 = v16 - 9;
                *v39 = v40;
                for ( v39[1] = v41; v47 > 0xFF; ++a3 )
                {
                  v47 -= 255;
                  *a3 = 0;
                }
                *a3++ = v47;
                ++v78;
              }
              else
              {
                v39[1] = v41;
                *v39 = v40 | (32 * v18);
                ++v77;
              }
              goto LABEL_62;
            }
          }
          v12 = v15 + 1;
          v13 = v20 | (1 << v15);
          if ( v15 + 1 > 7 )
          {
            v45 = v54;
            v12 = v15 - 7;
            if ( v15 != 7 )
              v54 = v39++;
            *v45 = v13;
            v13 >>= 8;
          }
          goto LABEL_60;
        }
        v58 = *(_BYTE *)(a5 + 40);
        sub_2D6C4(&v59, a5, 1);
        v28 = v61;
        if ( v61 - 2 <= 3 && v62 <= 0x100 )
        {
          v48 = 1;
LABEL_36:
          if ( v48 == 1 )
            v48 = 1;
          else
            --v48;
          goto LABEL_81;
        }
LABEL_80:
        v48 = 1;
        goto LABEL_81;
      }
    }
    else if ( v62 <= 0x100 )
    {
      if ( v14 <= v61 )
      {
        HIDWORD(v19) = 1;
        v20 = v13 | (1 << v12);
        goto LABEL_16;
      }
      v58 = *(_BYTE *)(a5 + 40);
      sub_2D6C4(&v59, a5, 1);
      v48 = 2;
      v49 = 2;
      goto LABEL_104;
    }
    if ( v61 <= 2 )
    {
      v29 = a3 + 1;
      if ( v12 )
      {
        if ( v15 <= 7 )
        {
          v12 = v15;
          v29 = a3++;
        }
        else
        {
          v42 = v54;
          v12 -= 7;
          if ( v12 )
          {
            v54 = a3;
            a3 += 2;
          }
          *v42 = v13;
          v13 >>= 8;
          if ( !v12 )
          {
            v43 = v29;
            v29 = a3;
            a3 = v43;
          }
        }
      }
      else
      {
        v54 = a3;
        v12 = 1;
        a3 += 2;
      }
      *v29 = *(_DWORD *)(a5 + 40);
      ++v72;
      sub_2D6C4(&v59, a5, 1);
      goto LABEL_42;
    }
    if ( v14 <= v61 )
    {
      HIDWORD(v19) = 1;
      goto LABEL_84;
    }
    v58 = *(_BYTE *)(a5 + 40);
    sub_2D6C4(&v59, a5, 1);
    v26 = v17 > 0x100;
    if ( v17 <= 0x100 )
      v26 = v18 > 3;
    if ( !v26 )
    {
      v48 = 1;
      v49 = 0;
LABEL_104:
      v28 = v61;
      if ( v61 - 2 <= 3 && v62 <= 0x100 )
        goto LABEL_36;
      v48 += v49;
      goto LABEL_81;
    }
    v28 = v61;
    if ( v61 - 2 > 3 )
      goto LABEL_80;
    v48 = 1;
    if ( v62 <= 0x100 )
      goto LABEL_36;
LABEL_81:
    if ( v48 + v16 <= v28 )
    {
      v50 = a3 + 1;
      ++v75;
      if ( v12 )
      {
        if ( v15 <= 7 )
        {
          v12 = v15;
          v50 = a3++;
        }
        else
        {
          v51 = v54;
          v12 -= 7;
          if ( v12 )
          {
            v54 = a3;
            a3 += 2;
          }
          *v51 = v13;
          v13 >>= 8;
          if ( !v12 )
          {
            v52 = v50;
            v50 = a3;
            a3 = v52;
          }
        }
      }
      else
      {
        v54 = a3;
        v12 = 1;
        a3 += 2;
      }
      *v50 = v58;
      ++v72;
      goto LABEL_10;
    }
    HIDWORD(v19) = 2;
LABEL_84:
    v46 = v17 > 0x100;
    if ( v17 <= 0x100 )
      v46 = v18 > 3;
    v20 = v13 | (1 << v12);
    if ( v46 )
      goto LABEL_58;
LABEL_16:
    v21 = a3 + 1;
    if ( !v12 )
    {
      v22 = a3 + 2;
      v23 = 2;
LABEL_19:
      v54 = a3;
      v12 = v23 + 2;
      a3 = v22;
      v22 = v21;
      goto LABEL_20;
    }
    if ( v15 <= 7 )
    {
      v53 = v54;
      v22 = a3 + 1;
      v54 = a3;
      a3 = v53;
    }
    else
    {
      v15 = v12 - 7;
      *v54 = v20;
      v22 = a3 + 2;
      v20 >>= 8;
      if ( v12 == 7 )
      {
        v54 = a3;
        v13 = v20 | (2 * v18);
        a3 += 2;
        v12 = 3;
        v22 = v21;
        goto LABEL_24;
      }
      v54 = a3 + 1;
    }
    v23 = v15 + 1;
    if ( v15 + 1 <= 7 )
    {
      v21 = v54;
      goto LABEL_19;
    }
    v23 = v15 - 7;
    *a3 = v20;
    v20 >>= 8;
    a3 = v22 + 1;
    if ( v15 != 7 )
    {
      v12 = v15 - 5;
LABEL_20:
      v13 = v20 | (v18 << v23);
      if ( v12 > 7 )
      {
        v12 = v23 - 6;
        v24 = v23 == 6;
        v25 = v54;
        if ( !v24 )
        {
          v54 = v22;
          v22 = a3++;
        }
        *v25 = v13;
        v13 >>= 8;
      }
      goto LABEL_24;
    }
    v12 = 2;
    v13 = v18 | v20;
LABEL_24:
    *v22 = v17 - 1;
    ++v76;
LABEL_62:
    LODWORD(v19) = v16;
    sub_2D6C4(&v59, a5, v19);
LABEL_42:
    v15 = v12 + 1;
    v70 = (_BYTE *)(a3 - v55);
    v14 = v60;
  }
  v30 = 1;
  v31 = v13 | (1 << v12);
  if ( !v12 )
  {
    v31 |= 1 << v15;
    v32 = a3 + 1;
    v33 = 2;
    goto LABEL_90;
  }
  if ( v15 <= 7 )
  {
    v32 = a3;
    a3 = v54;
LABEL_46:
    v33 = v15 + 1;
    v31 |= 1 << v15;
    if ( v15 + 1 > 7 )
    {
      v34 = v15 - 7;
      *a3 = v31;
      if ( v15 != 7 )
      {
        v31 >>= 8;
        a3 = v32;
        v30 = (1 << v34) - 1;
        ++v32;
        goto LABEL_49;
      }
      *v32 = 32;
      v35 = v32 + 2;
      v32[1] = v34;
      goto LABEL_50;
    }
LABEL_90:
    v30 = ~(-1 << v33);
    goto LABEL_49;
  }
  v15 = v12 - 7;
  v32 = a3 + 1;
  *v54 = v31;
  v31 >>= 8;
  if ( v12 != 7 )
    goto LABEL_46;
  LOBYTE(v31) = v31 | 1;
LABEL_49:
  *v32 = 32;
  v35 = v32 + 2;
  v32[1] = 0;
  *a3 = v31 & v30;
LABEL_50:
  v36 = v68;
  v24 = v68 == 0;
  v70 = (_BYTE *)(v35 - v55);
  *a4 = v35 - v55;
  if ( !v24 )
  {
    v37 = *(void (**)(void))(v36 + 8);
    if ( v37 )
      v37();
  }
  return v56;
}
