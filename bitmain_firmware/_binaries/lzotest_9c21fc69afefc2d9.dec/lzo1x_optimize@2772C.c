int __fastcall lzo1x_optimize(unsigned __int8 *a1, int a2, unsigned __int8 *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // r9
  int v5; // r10
  unsigned __int8 *v6; // r5
  unsigned __int8 *v7; // r11
  unsigned int v8; // r4
  unsigned int v9; // r10
  bool v10; // cf
  size_t v11; // r2
  int v12; // r1
  unsigned int v13; // r4
  unsigned __int8 *v14; // r8
  unsigned int v15; // r1
  int v16; // r1
  unsigned __int8 *v17; // r7
  int v18; // r4
  unsigned __int8 *v19; // r6
  unsigned __int8 v20; // r12
  _BOOL4 v21; // r0
  unsigned int v22; // r0
  unsigned __int8 v23; // r2
  unsigned __int8 *v24; // r0
  unsigned __int8 *v25; // r0
  unsigned __int8 *v26; // r1
  unsigned __int8 v27; // t1
  unsigned __int8 *v28; // r6
  unsigned __int8 *v29; // r1
  bool v30; // cc
  int v31; // r5
  int v32; // r4
  int v34; // r0
  unsigned __int8 *v35; // r2
  unsigned __int8 v36; // r1
  int v37; // r4
  unsigned int v38; // t1
  unsigned __int8 *v39; // r0
  unsigned __int8 *v40; // r1
  unsigned __int8 v41; // t1
  unsigned __int8 *v42; // r7
  unsigned __int8 *v43; // r0
  unsigned __int8 *v44; // r4
  bool v45; // cf
  bool v46; // zf
  unsigned __int8 v47; // r1
  char *v48; // r1
  _BYTE *v49; // lr
  unsigned __int8 v50; // r12
  unsigned __int8 *v51; // r6
  _BYTE *v52; // r5
  char v53; // t1
  unsigned __int8 v54; // r1
  __int16 v56; // r6
  int v57; // r6
  int v58; // r4
  unsigned int v59; // t1
  int result; // r0
  unsigned __int8 *v61; // r6
  int v62; // r4
  unsigned int v63; // t1
  unsigned __int8 *v64; // r1
  unsigned __int8 v65; // r1
  unsigned __int8 v66; // r1
  unsigned __int8 v67; // r1
  unsigned __int8 v68; // r2
  unsigned __int8 v69; // r1
  unsigned __int8 *v70; // [sp+0h] [bp-1Ch]
  unsigned __int8 *v72; // [sp+8h] [bp-14h]
  unsigned int v73; // [sp+8h] [bp-14h]
  unsigned __int8 *v74; // [sp+Ch] [bp-10h]
  _DWORD *v75; // [sp+Ch] [bp-10h]
  unsigned int v76; // [sp+10h] [bp-Ch]
  _DWORD *v77; // [sp+14h] [bp-8h]

  v4 = a1;
  v5 = *a4;
  v6 = a3;
  *a4 = 0;
  v7 = &a1[a2];
  v8 = *a1;
  v9 = (unsigned int)&a3[v5];
  if ( v8 > 0x11 )
  {
    v13 = v8 - 17;
    v17 = a1 + 1;
    v11 = 0;
    if ( (int)v13 <= 3 )
    {
      v70 = 0;
      goto LABEL_27;
    }
    v4 = 0;
    goto LABEL_53;
  }
  v10 = (unsigned int)a3 >= v9;
  if ( (unsigned int)a3 <= v9 )
    v10 = a1 >= v7;
  v11 = 0;
  v12 = !v10;
  v70 = 0;
LABEL_8:
  if ( v12 )
  {
    v13 = *v4;
    v14 = v4 + 1;
    v15 = v4[1];
    if ( v13 <= 0xF )
    {
      if ( !*v4 )
      {
        v37 = 15;
        if ( !v4[1] )
        {
          do
          {
            v38 = *++v14;
            v15 = v38;
            v37 += 255;
          }
          while ( !v38 );
        }
        v13 = v15 + v37;
        LOBYTE(v15) = *++v14;
      }
      v24 = v6;
      v11 = v13 + 3;
      goto LABEL_52;
    }
LABEL_10:
    while ( v13 > 0x3F )
    {
      v16 = ~((v13 >> 2) & 7) - 8 * v15;
      v17 = v14 + 1;
      v18 = (v13 >> 5) - 1;
      v19 = &v6[v16];
      v20 = v6[v16];
      if ( !v70 )
        goto LABEL_84;
      v21 = v18 == 1;
      if ( v11 <= 3 )
        v21 = 0;
      if ( !v21 )
      {
LABEL_84:
        v34 = -1;
        goto LABEL_77;
      }
      if ( (*(v14 - 1) & 3) != 0 || (v13 = v14[1], v13 - 1 > 0xE) || (v22 = v13 + v11, v13 + v11 + 3 > 0xF) )
      {
        v34 = -1;
        v18 = 1;
        goto LABEL_77;
      }
      *(v14 - 1) = v20;
      if ( v16 == -1 )
      {
        v68 = *v19;
        *v14 = *v19;
        v14[1] = v68;
      }
      else
      {
        *v14 = v19[1];
        if ( v16 == -2 )
          v23 = *v19;
        else
          v23 = v19[2];
        v14[1] = v23;
      }
      v11 = v22 + 6;
      *v70 = v22 + 3;
      v4 = v70;
      v24 = v6 + 3;
      *v6 = *v19;
      v6[1] = v19[1];
      v6[2] = v19[2];
      LOBYTE(v15) = v14[2];
      v14 += 2;
LABEL_52:
      *v24 = v15;
      v17 = v14 + 3;
      v6 = v24 + 3;
      v24[1] = v14[1];
      v24[2] = v14[2];
LABEL_53:
      v39 = v6 - 1;
      v40 = v17;
      do
      {
        v41 = *v40++;
        *++v39 = v41;
      }
      while ( v40 != &v17[v13] );
      v42 = &v17[v13 - 1];
      v43 = &v6[v13 - 1];
      v6 += v13;
      v13 = v42[1];
      v15 = v42[2];
      if ( v13 <= 0xF )
      {
        v17 = v42 + 3;
        v6 = v43 + 4;
        v44 = &v43[-(v13 >> 2) - 2048 + -4 * v15];
        v43[1] = *v44;
        v43[2] = v44[1];
        v43[3] = v44[2];
        goto LABEL_58;
      }
      v14 = v42 + 2;
      v70 = v4;
    }
    if ( v13 > 0x1F )
    {
      v18 = v13 & 0x1F;
      if ( !v18 )
      {
        v62 = 31;
        if ( !v15 )
        {
          do
          {
            v63 = *++v14;
            v15 = v63;
            v62 += 255;
          }
          while ( !v63 );
        }
        v18 = v15 + v62;
        v15 = *++v14;
      }
      v17 = v14 + 2;
      v19 = &v6[~(v15 >> 2) - (v14[1] << 6)];
      goto LABEL_67;
    }
    v56 = (_WORD)v13 << 11;
    v18 = v13 & 7;
    v57 = v56 & 0x4000;
    if ( !v18 )
    {
      v58 = 7;
      if ( !v15 )
      {
        do
        {
          v59 = *++v14;
          v15 = v59;
          v58 += 255;
        }
        while ( !v59 );
      }
      v18 = v15 + v58;
      v15 = *++v14;
    }
    result = v14[1];
    v17 = v14 + 2;
    v61 = &v6[-v57 - (v15 >> 2) + -64 * result];
    if ( v6 != v61 )
    {
      v19 = v61 - 0x4000;
LABEL_67:
      if ( !v70 )
      {
LABEL_89:
        v20 = *v19;
        v34 = -1;
        goto LABEL_77;
      }
      v46 = v11 == 0;
      if ( !v11 )
        v46 = v18 == 1;
      v34 = *(v17 - 2) & 3;
      if ( !v46 )
      {
        if ( v11 > 3 || v18 != 1 )
          goto LABEL_89;
        if ( (*(v17 - 2) & 3) != 0 )
        {
LABEL_106:
          v20 = *v19;
          v34 = -1;
          v18 = 1;
          goto LABEL_77;
        }
        v13 = *v17;
LABEL_105:
        if ( v13 - 1 <= 0xE )
        {
          v73 = v13 + v11;
          if ( v13 + v11 + 3 <= 0xF )
          {
            v14 = v17 + 1;
            *v70 &= 0xFCu;
            *(v17 - 2) = *v19;
            if ( v6 - v19 == 1 )
            {
              v67 = *v19;
              *(v17 - 1) = *v19;
              *v17 = v67;
            }
            else
            {
              *(v17 - 1) = v19[1];
              if ( v6 - v19 == 2 )
                v69 = *v19;
              else
                v69 = v19[2];
              *v17 = v69;
            }
            v4 = v70 + 2;
            if ( v11 )
            {
              v75 = a4;
              memmove(v70 + 3, v70 + 2, v11);
              a4 = v75;
            }
            v11 = v73 + 6;
            v70[2] = v73 + 3;
            v24 = v6 + 3;
            *v6 = *v19;
            v6[1] = v19[1];
            v6[2] = v19[2];
            LOBYTE(v15) = v17[1];
            goto LABEL_52;
          }
        }
        goto LABEL_106;
      }
      if ( (*(v17 - 2) & 3) != 0 )
      {
        v20 = *v19;
        v34 = -1;
        v11 = 0;
        v18 = 1;
        goto LABEL_77;
      }
      v13 = *v17;
      if ( v13 <= 0xF )
        goto LABEL_105;
      v18 = v6 - v19;
      *v70 = *v70 & 0xFC | 3;
      *(v17 - 3) = *v19;
      if ( v6 - v19 == 1 )
      {
        v47 = *v19;
        v11 = 3;
        *(v17 - 2) = *v19;
        *(v17 - 1) = v47;
        v20 = *v19;
      }
      else
      {
        v46 = v18 == 2;
        v18 = 1;
        *(v17 - 2) = v19[1];
        v11 = 3;
        if ( v46 )
          v66 = *v19;
        else
          v66 = v19[2];
        *(v17 - 1) = v66;
        v20 = *v19;
      }
LABEL_77:
      v48 = (char *)(v19 + 2);
      *v6 = v20;
      v49 = v6 + 2;
      v50 = v19[1];
      v51 = &v19[v18 + 2];
      v6[1] = v50;
      v52 = v6 + 1;
      do
      {
        v53 = *v48++;
        *++v52 = v53;
      }
      while ( v48 != (char *)v51 );
      v6 = &v49[v18];
      while ( 1 )
      {
        if ( v34 != -1 )
        {
LABEL_59:
          v45 = (unsigned int)v6 >= v9;
          if ( (unsigned int)v6 <= v9 )
            v45 = v17 >= v7;
          v4 = v17;
          v12 = !v45;
          goto LABEL_8;
        }
LABEL_58:
        v13 = *(v17 - 2) & 3;
        v70 = v17 - 2;
        v11 = v13;
        if ( (*(v17 - 2) & 3) == 0 )
          goto LABEL_59;
LABEL_27:
        v25 = v6 - 1;
        v26 = v17;
        do
        {
          v27 = *v26++;
          *++v25 = v27;
        }
        while ( v26 != &v17[v13] );
        v28 = &v17[v13 - 1];
        v29 = &v6[v13 - 1];
        v14 = v28 + 2;
        v6 += v13;
        v30 = v9 > (unsigned int)v6;
        if ( v9 >= (unsigned int)v6 )
          v30 = v7 > v14;
        v72 = v29;
        if ( !v30 )
          goto LABEL_96;
        v13 = v17[v13];
        v15 = v28[2];
        if ( v13 > 0xF )
          goto LABEL_10;
        v17 = v28 + 3;
        v31 = -((v13 >> 2) + 4 * v15);
        v74 = &v72[-(v13 >> 2) + -4 * v15];
        if ( !v70 )
          goto LABEL_82;
        v32 = v13 & 3;
        if ( v11 != 1 || v32 != 0 )
          break;
        v13 = v28[3];
        if ( v13 <= 0xF )
          goto LABEL_115;
        *v70 = *v70 & 0xFC | 3;
        v34 = 0;
        v28[1] = v72[v31];
        if ( v31 )
          v35 = v74;
        else
          v35 = v72;
        if ( v31 )
          v36 = v35[1];
        else
          v36 = *v35;
        v11 = 3;
        v28[2] = v36;
LABEL_83:
        v54 = v72[v31];
        v6 = v72 + 3;
        v72[1] = v54;
        v72[2] = v74[1];
      }
      if ( !v32 )
      {
        v13 = v28[3];
LABEL_115:
        if ( v13 - 1 <= 0xE )
        {
          v76 = v13 + v11;
          if ( v13 + v11 + 2 <= 0xF )
          {
            v14 = v28 + 4;
            *v70 &= 0xFCu;
            v28[2] = v72[v31];
            if ( v31 )
              v64 = v74;
            else
              v64 = v72;
            if ( v31 )
              v65 = v64[1];
            else
              v65 = *v64;
            v28[3] = v65;
            v4 = v70 + 2;
            if ( v11 )
            {
              v77 = a4;
              memmove(v70 + 3, v70 + 2, v11);
              a4 = v77;
            }
            v11 = v76 + 5;
            v70[2] = v76 + 2;
            v24 = v72 + 3;
            v72[1] = v72[v31];
            v72[2] = v74[1];
            LOBYTE(v15) = v28[4];
            goto LABEL_52;
          }
        }
      }
LABEL_82:
      v34 = -1;
      goto LABEL_83;
    }
    if ( v7 == v17 )
      result = 0;
    *a4 = v6 - a3;
    if ( v7 != v17 )
    {
      if ( v7 <= v17 )
        return -4;
      else
        return -8;
    }
  }
  else
  {
LABEL_96:
    result = -7;
    *a4 = v6 - a3;
  }
  return result;
}
