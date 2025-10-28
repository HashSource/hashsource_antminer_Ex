unsigned int __fastcall lzo1z_999_compress_internal(
        void *a1,
        size_t a2,
        _BYTE *a3,
        _DWORD *a4,
        _DWORD *a5,
        char *a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r3
  _DWORD *v19; // r1
  _DWORD *v20; // r3
  char *v21; // r9
  size_t v22; // r7
  bool v23; // zf
  unsigned int v24; // r1
  int v25; // r3
  int v26; // r0
  int v27; // r1
  bool v28; // cc
  size_t v29; // r1
  unsigned int v30; // r10
  unsigned int v31; // r5
  _BYTE *v32; // r2
  bool v33; // zf
  int v34; // r0
  unsigned int v35; // r3
  int i; // r8
  unsigned int v37; // r6
  unsigned int v38; // r9
  int v39; // r3
  int v40; // r0
  int v41; // r2
  int v42; // r3
  unsigned int v43; // r3
  int v44; // r8
  int v45; // r7
  unsigned int v46; // r3
  int v47; // r0
  void (*v48)(void); // r4
  size_t v50; // r5
  char *v51; // r3
  unsigned __int8 *v52; // r2
  int v53; // lr
  __int16 v54; // r0
  char *v55; // r7
  unsigned __int16 *v56; // r6
  _DWORD *v57; // r10
  unsigned __int8 *v58; // r5
  __int16 v59; // r11
  int v60; // r12
  __int16 v61; // r8
  int v62; // t1
  char *v63; // r3
  char *v64; // r0
  int v65; // lr
  _WORD *v66; // r12
  __int16 v67; // lr
  int v68; // t1
  bool v69; // cc
  _BYTE *v70; // r0
  int v71; // r2
  _BYTE *v72; // r0
  bool v73; // cc
  __int64 v74; // r2
  _BYTE *v75; // r0
  int v76; // [sp+4h] [bp-A4h]
  _BYTE *v77; // [sp+4h] [bp-A4h]
  unsigned int v78; // [sp+8h] [bp-A0h]
  size_t v79; // [sp+Ch] [bp-9Ch]
  int v81; // [sp+14h] [bp-94h]
  int v82; // [sp+18h] [bp-90h]
  void *src; // [sp+1Ch] [bp-8Ch]
  unsigned int v84; // [sp+20h] [bp-88h]
  __int64 v86; // [sp+2Ch] [bp-7Ch] BYREF
  int v87; // [sp+34h] [bp-74h] BYREF
  unsigned int v88; // [sp+38h] [bp-70h]
  __int64 v89; // [sp+3Ch] [bp-6Ch] BYREF
  int v90; // [sp+44h] [bp-64h]
  int v91; // [sp+48h] [bp-60h]
  _BYTE *v92; // [sp+4Ch] [bp-5Ch]
  void *v93; // [sp+50h] [bp-58h]
  void *v94; // [sp+54h] [bp-54h]
  size_t v95; // [sp+58h] [bp-50h]
  _BYTE *v96; // [sp+5Ch] [bp-4Ch]
  int v97; // [sp+60h] [bp-48h]
  int v98; // [sp+64h] [bp-44h]
  _BYTE *v99; // [sp+68h] [bp-40h]
  int v100; // [sp+6Ch] [bp-3Ch]
  int v101; // [sp+70h] [bp-38h]
  int v102; // [sp+74h] [bp-34h]
  int v103; // [sp+78h] [bp-30h]
  int v104; // [sp+7Ch] [bp-2Ch]
  unsigned int v105; // [sp+80h] [bp-28h]
  unsigned int v106; // [sp+84h] [bp-24h]
  int v107; // [sp+88h] [bp-20h]
  int v108; // [sp+8Ch] [bp-1Ch]
  int v109; // [sp+90h] [bp-18h]
  int v110; // [sp+94h] [bp-14h]
  int v111; // [sp+98h] [bp-10h]
  int v112; // [sp+9Ch] [bp-Ch]
  int v113; // [sp+A0h] [bp-8h]
  int v114; // [sp+A4h] [bp-4h]
  unsigned int v115; // [sp+E0h] [bp+38h]
  unsigned int v116; // [sp+E4h] [bp+3Ch]
  unsigned int v117; // [sp+E8h] [bp+40h]
  unsigned int v118; // [sp+F0h] [bp+48h]

  v15 = a9;
  if ( a9 < 0 )
    v15 = 1;
  v115 = v15;
  v16 = a10;
  src = a1;
  v96 = a3;
  if ( !a10 )
    v16 = 32;
  v87 = 1;
  v116 = v16;
  v17 = a11;
  v97 = a8;
  v94 = a1;
  v93 = a1;
  if ( !a11 )
    v17 = 32;
  v95 = (size_t)a1 + a2;
  v117 = v17;
  a5[45] = &v87;
  v111 = 0;
  v18 = a13;
  if ( !a13 )
    v18 = 2048;
  v110 = 0;
  v118 = v18;
  v19 = a5 + 46;
  v109 = 0;
  v20 = a5 + 10;
  v108 = 0;
  v107 = 0;
  v114 = 0;
  v113 = 0;
  v112 = 0;
  v106 = 0;
  v105 = 0;
  v91 = 0;
  v90 = 0;
  v21 = a6;
  v22 = a7;
  v100 = 0;
  v99 = 0;
  v98 = 0;
  v103 = 0;
  v102 = 0;
  v101 = 0;
  v104 = 0;
  a5[7] = 0;
  a5[8] = 0;
  do
  {
    v19[1] = 0;
    ++v19;
    v20[1] = 0;
    ++v20;
  }
  while ( a5 + 44 != v20 );
  a5[88] = (char *)a5 + 51563;
  a5[2] = 1;
  a5[87] = 51199;
  a5[5] = 0;
  a5[6] = 0;
  *a5 = 49151;
  a5[89] = 49151;
  a5[1] = 2048;
  a5[3] = 2048;
  a5[4] = 2048;
  memset(a5 + 72794, 0, 0x8000u);
  memset(a5 + 80986, 255, 0x20000u);
  v23 = a7 == 0;
  if ( a7 )
    v23 = a6 == 0;
  a5[84] = 0;
  a5[82] = 0;
  a5[81] = 0;
  a5[83] = 0;
  if ( v23 )
  {
    a5[85] = 0;
    a5[90] = 0;
    a5[9] = a2;
    if ( !a2 )
    {
      a5[86] = 2048;
LABEL_92:
      v50 = a2 + a5[85];
      v51 = (char *)a5 + v50 + 364;
      v51[2] = 0;
      v51[1] = 0;
      *((_BYTE *)a5 + v50 + 364) = 0;
      goto LABEL_34;
    }
    v22 = 0;
  }
  else
  {
    if ( a7 >= 0xC000 )
    {
      v22 = 49151;
      v21 = &a6[a7 - 49151];
    }
    a5[82] = &v21[v22];
    a5[81] = v21;
    a5[83] = v22;
    memcpy(a5 + 91, v21, v22);
    a5[84] = v22;
    if ( !a2 )
      v25 = 51199;
    a5[85] = v22;
    a5[90] = v22;
    if ( !a2 )
      v24 = 49151;
    a5[9] = a2;
    if ( !a2 )
    {
      v76 = v25;
      goto LABEL_29;
    }
  }
  if ( a2 > 0x800 )
  {
    a2 = 2048;
    a5[9] = 2048;
  }
  memcpy((char *)a5 + v22 + 364, src, a2);
  a2 = a5[9];
  v26 = a5[87];
  v25 = a2 + a5[84];
  *(_DWORD *)(a5[45] + 28) += a2;
  a5[84] = v25;
  if ( v25 == v26 )
  {
    v25 = 0;
    a5[84] = 0;
  }
  v76 = v26;
  if ( a2 > 1 && (v27 = a5[83]) != 0 )
  {
    v52 = (unsigned __int8 *)(a5 + 91);
    v53 = (int)a5 + v27 + 364;
    v54 = a5[1] + 1;
    v24 = *a5 - v27;
    a5[89] = v24;
    v55 = (char *)&loc_15168 + (_DWORD)a5 + 2;
    v79 = a2;
    v56 = (unsigned __int16 *)(a5 + 91);
    v57 = a5 + 47194;
    v58 = (unsigned __int8 *)v53;
    v59 = v54;
    a5[90] = 0;
    do
    {
      v60 = *v52;
      v61 = -1;
      v62 = *++v52;
      v63 = (char *)a5 + 2 * (((40799 * (v52[1] ^ (32 * (v62 ^ (unsigned int)(32 * v60))))) >> 5) & 0x3FFF);
      v64 = v63 + 53248;
      v65 = *((unsigned __int16 *)v63 + 145588);
      v66 = v63 + 291176;
      v23 = v65 == 0;
      v67 = v65 + 1;
      if ( v23 )
        v64 = v63 + 53248;
      else
        v61 = *((_WORD *)v63 + 26806);
      v25 = (unsigned __int16)((_WORD)v56 - ((_WORD)a5 + 364));
      *((_WORD *)v55 + 1) = v61;
      v55 += 2;
      *((_WORD *)v64 + 182) = v25;
      *((_WORD *)v57 + 1) = v59;
      v57 = (_DWORD *)((char *)v57 + 2);
      *v66 = v67;
      v68 = *v56;
      v56 = (unsigned __int16 *)((char *)v56 + 1);
      *((_WORD *)a5 + v68 + 161972) = v25;
    }
    while ( v58 != v52 );
    v22 = 0;
    a2 = v79;
  }
  else
  {
    v22 = a5[90];
    v24 = a5[89];
  }
LABEL_29:
  v28 = v24 > v22;
  v29 = v22 - v24;
  if ( v28 )
    v25 = v76;
  a5[86] = v22;
  if ( v28 )
    v29 += v25;
  a5[86] = v29;
  if ( a2 <= 2 )
    goto LABEL_92;
LABEL_34:
  a5[5] = a14 & 1;
  a5[3] = v118;
  if ( a12 )
    a5[4] = a12;
  v30 = sub_2B514(&v87, a5, 0, 0);
  v84 = v30;
  if ( !v30 )
  {
    v77 = a3;
    while ( 1 )
    {
      if ( !v88 )
      {
        if ( v30 )
          v77 = sub_2B26C(&v87, v77, (char *)src, v30);
        *v77 = 17;
        v77[1] = 0;
        v77[2] = 0;
        v47 = v97;
        v99 = (_BYTE *)(v77 + 3 - a3);
        v23 = v97 == 0;
        *a4 = v99;
        if ( !v23 )
        {
          v48 = *(void (**)(void))(v47 + 8);
          if ( v48 )
            v48();
        }
        return v84;
      }
      v31 = v89;
      v32 = (_BYTE *)(v77 - a3);
      v99 = (_BYTE *)(v77 - a3);
      if ( !v30 )
        v32 = v92;
      v86 = v89;
      if ( !v30 )
        src = v32;
      if ( (unsigned int)v89 <= 1 )
        goto LABEL_111;
      if ( (_DWORD)v89 == 2 )
      {
        v69 = HIDWORD(v89) > 0x400;
        if ( HIDWORD(v89) <= 0x400 )
          v69 = v30 - 1 > 2;
        if ( !v69 && v77 != a3 )
          goto LABEL_49;
LABEL_111:
        ++v30;
        a5[3] = v118;
        LODWORD(v86) = 0;
        sub_2B514(&v87, a5, 1, 0);
      }
      else
      {
        v33 = v30 == 0;
        if ( !v30 )
          v33 = v77 == a3;
        if ( v33 )
          goto LABEL_111;
        if ( (_DWORD)v89 == 3 )
        {
          v73 = HIDWORD(v89) > 0xB00;
          if ( HIDWORD(v89) > 0xB00 )
            v73 = v30 > 3;
          if ( v73 )
            goto LABEL_111;
        }
LABEL_49:
        if ( a5[5] )
        {
          sub_2B348(a5, (unsigned int *)&v86, (unsigned int *)&v86 + 1);
          v31 = v86;
        }
        if ( !v115 || v117 <= v31 )
          goto LABEL_112;
        v34 = sub_2B444(v31, HIDWORD(v86), v30);
        v35 = v34 - 1;
        v82 = v34;
        if ( v34 - 1 >= v115 )
          v35 = v115;
        v78 = v35;
        if ( v35 && v88 > v31 )
        {
          for ( i = 0; ; i = v45 )
          {
            v45 = i + 1;
            v46 = v118;
            if ( v116 <= v31 )
              v46 = v118 >> 2;
            a5[3] = v46;
            sub_2B514(&v87, a5, 1, 0);
            if ( v91 == HIDWORD(v86) )
            {
              v31 = v86;
              if ( HIDWORD(v86) != HIDWORD(v89) && (unsigned int)(v86 - 3) <= 5 )
              {
                LODWORD(v89) = 0;
                goto LABEL_76;
              }
              v37 = v89;
            }
            else
            {
              v31 = v86;
              v37 = v89;
            }
            if ( v37 >= v31 )
              break;
LABEL_76:
            v44 = i + 2;
            if ( v78 == v45 || v88 <= v31 )
              goto LABEL_113;
          }
          if ( v37 != v31 )
          {
            if ( !a5[5] )
              goto LABEL_62;
LABEL_101:
            sub_2B348(a5, (unsigned int *)&v89, (unsigned int *)&v89 + 1);
            v37 = v89;
            v31 = v86;
            goto LABEL_62;
          }
          if ( HIDWORD(v86) <= HIDWORD(v89) )
            goto LABEL_76;
          if ( a5[5] )
            goto LABEL_101;
LABEL_62:
          v38 = v30 + v45;
          v39 = sub_2B444(v37, HIDWORD(v89), v30 + v45);
          if ( !v39 )
            goto LABEL_76;
          if ( v77 == a3 )
          {
            v40 = 0;
          }
          else
          {
            v81 = v39;
            v40 = sub_2B444(i + 1, HIDWORD(v86), v30);
            v39 = v81;
          }
          if ( v30 <= 3 )
          {
            if ( v38 > 3 )
            {
              v41 = i + 3;
              goto LABEL_70;
            }
LABEL_69:
            v41 = i + 1;
            goto LABEL_70;
          }
          if ( v30 > 0x12 )
            goto LABEL_69;
          if ( v38 > 0x12 )
            v41 = i + 2;
          else
            v41 = i + 1;
LABEL_70:
          v42 = v41 + 2 * (v39 - v82);
          if ( v40 )
            v42 -= 2 * (v45 - v40);
          if ( v42 < 0 )
            v43 = v31;
          else
            v43 = v42 + v31;
          if ( v37 < v43 )
            goto LABEL_76;
          if ( !v40 )
            v30 += v45;
          ++v104;
          if ( v40 )
          {
            if ( v30 )
            {
              v75 = sub_2B26C(&v87, v77, (char *)src, v30);
              v106 = i + 1;
              v77 = v75;
              v105 = v30;
            }
            else
            {
              v106 = 0;
              v105 = 0;
            }
            LODWORD(v74) = i + 1;
            HIDWORD(v74) = HIDWORD(v86);
            v30 = 0;
            v77 = sub_2B064((int)&v87, v77, v74);
          }
        }
        else
        {
LABEL_112:
          v44 = 1;
LABEL_113:
          if ( v30 )
          {
            v72 = sub_2B26C(&v87, v77, (char *)src, v30);
            v106 = v31;
            v105 = v30;
            v70 = sub_2B064((int)&v87, v72, v86);
          }
          else
          {
            v106 = 0;
            v105 = 0;
            v70 = sub_2B064((int)&v87, v77, __SPAIR64__(HIDWORD(v86), v31));
          }
          v77 = v70;
          v71 = v86;
          v30 = 0;
          a5[3] = v118;
          sub_2B514(&v87, a5, v71, v44);
        }
      }
    }
  }
  return v84;
}
