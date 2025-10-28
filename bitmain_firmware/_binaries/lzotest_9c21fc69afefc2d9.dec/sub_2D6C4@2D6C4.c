int __fastcall sub_2D6C4(_DWORD *a1, int a2, __int64 a3)
{
  int v3; // lr
  int v4; // r6
  int v5; // r5
  __int16 v6; // r11
  unsigned __int16 *v7; // r7
  int v8; // r8
  unsigned int v9; // r4
  unsigned int v10; // r6
  unsigned int v11; // r5
  unsigned int v12; // r4
  unsigned int v13; // r12
  bool v14; // cf
  unsigned int v15; // r6
  unsigned int v16; // r8
  unsigned int v17; // r4
  int v18; // r2
  int v19; // r12
  int v20; // lr
  int v21; // r2
  char *v22; // r5
  unsigned int v23; // r7
  int v24; // lr
  char v25; // r4
  int v26; // lr
  int v28; // r3
  int v29; // r3
  int v30; // r2
  void (__fastcall *v31)(int, unsigned int, _DWORD, _DWORD); // r4
  unsigned int v32; // r1
  _DWORD *v33; // r5
  unsigned int v35; // r5
  bool v36; // cf
  int v37; // r8
  int v38; // r2
  unsigned int v39; // r3
  int v40; // r0
  int v41; // r12
  int v42; // r2
  unsigned int v43; // r3
  int v44; // r0
  int v45; // r2
  int v46; // r5
  __int16 v47; // r6
  int v48; // r10
  int v49; // r5
  unsigned int v50; // r2
  unsigned int v51; // r7
  int v52; // r4
  bool v53; // zf
  __int16 v54; // r4
  __int16 v55; // r11
  unsigned int v56; // r10
  int v57; // r4
  int v58; // r2
  char *v59; // r5
  unsigned int v60; // r7
  char v61; // r4
  int v62; // r9
  unsigned int v63; // r12
  int v64; // r4
  unsigned __int8 *v65; // r3
  unsigned __int8 *v66; // r3
  unsigned __int8 *i; // r6
  int v68; // t1
  unsigned int v69; // r6
  int v70; // [sp+0h] [bp-1Ch]
  int v71; // [sp+0h] [bp-1Ch]
  _DWORD *v72; // [sp+4h] [bp-18h]
  unsigned int v73; // [sp+8h] [bp-14h]
  unsigned int v74; // [sp+10h] [bp-Ch]

  v3 = a2 + 92;
  if ( HIDWORD(a3) )
  {
    LODWORD(a3) = a3 - HIDWORD(a3);
    HIDWORD(a3) = *(_DWORD *)(a2 + 68);
    v70 = a3;
    if ( (_DWORD)a3 )
    {
      v37 = a3;
      v72 = a1;
      do
      {
        v45 = *(_DWORD *)(a2 + 84);
        v40 = *(_DWORD *)(a2 + 72);
        if ( v45 )
        {
          *(_DWORD *)(a2 + 84) = v45 - 1;
        }
        else
        {
          --*(_WORD *)(a2
                     + 2
                     * (((40799
                        * (*(unsigned __int8 *)(a2 + v40 + 94)
                         ^ (32
                          * (*(unsigned __int8 *)(a2 + v40 + 93)
                           ^ (32 * (unsigned int)*(unsigned __int8 *)(a2 + v40 + 92)))))) >> 5)
                      & 0x3FFF)
                     + 86104);
          if ( v40 == *(unsigned __int16 *)(a2 + 2 * *(unsigned __int16 *)(v3 + v40) + 118872) )
            *(_WORD *)(a2 + 2 * *(unsigned __int16 *)(v3 + v40) + 118872) = -1;
        }
        v41 = HIDWORD(a3) + 1;
        v46 = a2 + 2 * HIDWORD(a3);
        v47 = WORD2(a3);
        v48 = v46 + 45056;
        v49 = v46 + 0x10000;
        v50 = a2
            + 2
            * (((40799
               * (*(unsigned __int8 *)(a2 + HIDWORD(a3) + 94)
                ^ (32
                 * (*(unsigned __int8 *)(a2 + HIDWORD(a3) + 1 + 92)
                  ^ (32 * (unsigned int)*(unsigned __int8 *)(a2 + HIDWORD(a3) + 92)))))) >> 5)
             & 0x3FFF);
        v51 = v50 + 86016;
        LODWORD(a3) = v50 + 12288;
        v52 = *(unsigned __int16 *)(v51 + 88);
        v53 = v52 == 0;
        v54 = v52 + 1;
        if ( v53 )
          v55 = -1;
        else
          v55 = *(_WORD *)(a3 + 92);
        *(_WORD *)(v48 + 92) = v55;
        *(_WORD *)(a3 + 92) = WORD2(a3);
        v56 = *(_DWORD *)(a2 + 4);
        *(_WORD *)(v49 + 90) = v56 + 1;
        *(_WORD *)(v51 + 88) = v54;
        v57 = *(_DWORD *)(a2 + 44);
        v58 = *(unsigned __int16 *)(v3 + HIDWORD(a3));
        v39 = *(_DWORD *)(a2 + 64);
        v59 = *(char **)(v57 + 28);
        v60 = *(_DWORD *)(v57 + 36);
        *(_WORD *)(a2 + 2 * (v58 + 59436)) = v47;
        if ( (unsigned int)v59 >= v60 )
        {
          v38 = *(_DWORD *)(a2 + 36);
          if ( v38 )
            *(_DWORD *)(a2 + 36) = v38 - 1;
          *(_BYTE *)(a2 + v39 + 92) = 0;
          if ( v56 > v39 )
          {
            *(_BYTE *)(*(_DWORD *)(a2 + 80) + v39) = 0;
            v39 = *(_DWORD *)(a2 + 64);
            v40 = *(_DWORD *)(a2 + 72);
            v41 = *(_DWORD *)(a2 + 68) + 1;
          }
        }
        else
        {
          *(_DWORD *)(v57 + 28) = v59 + 1;
          v61 = *v59;
          *(_BYTE *)(a2 + v39 + 92) = *v59;
          if ( v56 > v39 )
          {
            *(_BYTE *)(*(_DWORD *)(a2 + 80) + v39) = v61;
            v39 = *(_DWORD *)(a2 + 64);
            v40 = *(_DWORD *)(a2 + 72);
            v41 = *(_DWORD *)(a2 + 68) + 1;
          }
        }
        v42 = *(_DWORD *)(a2 + 76);
        v43 = v39 + 1;
        *(_DWORD *)(a2 + 64) = v43;
        if ( v43 == v42 )
          *(_DWORD *)(a2 + 64) = 0;
        if ( v42 == v41 )
        {
          v6 = 0;
          v7 = (unsigned __int16 *)(a2 + 92);
          HIDWORD(a3) = 0;
          v5 = 2;
          v4 = 1;
          *(_DWORD *)(a2 + 68) = 0;
        }
        else
        {
          v6 = v41;
          v4 = v41 + 1;
          v5 = v41 + 2;
          *(_DWORD *)(a2 + 68) = v41;
          v7 = (unsigned __int16 *)(v3 + v41);
          HIDWORD(a3) = v41;
        }
        v44 = v40 + 1;
        if ( v42 == v44 )
          v44 = 0;
        --v37;
        *(_DWORD *)(a2 + 72) = v44;
      }
      while ( v37 );
      a1 = v72;
    }
    else
    {
      v6 = *(_DWORD *)(a2 + 68);
      v4 = HIDWORD(a3) + 1;
      v5 = HIDWORD(a3) + 2;
      v7 = (unsigned __int16 *)(v3 + HIDWORD(a3));
    }
    a1[12] += 1 + v70;
  }
  else
  {
    HIDWORD(a3) = *(_DWORD *)(a2 + 68);
    v4 = HIDWORD(a3) + 1;
    v5 = HIDWORD(a3) + 2;
    v6 = WORD2(a3);
    v7 = (unsigned __int16 *)(v3 + HIDWORD(a3));
    a1[12] += a3;
  }
  *(_DWORD *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 32) = 0;
  v8 = *(unsigned __int8 *)(a2 + HIDWORD(a3) + 92);
  v9 = a2
     + 2
     * (((40799
        * (*(unsigned __int8 *)(a2 + v5 + 92) ^ (32 * (*(unsigned __int8 *)(a2 + v4 + 92) ^ (unsigned int)(32 * v8))))) >> 5)
      & 0x3FFF);
  v10 = v9 + 86016;
  v11 = *(unsigned __int16 *)(v9 + 86104);
  if ( *(_WORD *)(v9 + 86104) )
  {
    v12 = v9 + 12288;
    LODWORD(a3) = *(unsigned __int16 *)(v12 + 92);
    *(_WORD *)(a2 + 2 * (HIDWORD(a3) + 22572) + 4) = a3;
    *(_WORD *)(v10 + 88) = v11 + 1;
    v13 = *(_DWORD *)(a2 + 12);
    v14 = 1;
    if ( v13 )
      v14 = v13 >= v11;
    if ( v14 )
      v13 = v11;
  }
  else
  {
    v13 = *(unsigned __int16 *)(v9 + 86104);
    v12 = v9 + 12288;
    LODWORD(a3) = 0xFFFF;
    *(_WORD *)(a2 + 2 * (HIDWORD(a3) + 22572) + 4) = -1;
    *(_WORD *)(v10 + 88) = 1;
  }
  *(_WORD *)(v12 + 92) = v6;
  v15 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 40) = v8;
  if ( v15 <= 1 )
  {
    v16 = *(_DWORD *)(a2 + 4);
    if ( !v15 )
      LODWORD(a3) = -1;
    v17 = *(_DWORD *)(a2 + 32);
    if ( !v15 )
      *(_DWORD *)(a2 + 40) = a3;
    v15 = *(_DWORD *)(a2 + 28);
    *(_WORD *)(a2 + 2 * (HIDWORD(a3) + 32812) + 2) = v16 + 1;
    goto LABEL_14;
  }
  v17 = *(unsigned __int16 *)(a2 + 2 * (*v7 + 59436));
  if ( v17 == 0xFFFF )
  {
    v15 = *(_DWORD *)(a2 + 28);
    v17 = *(_DWORD *)(a2 + 32);
    LOWORD(v35) = v15;
    goto LABEL_50;
  }
  v35 = 2;
  *(_DWORD *)(a2 + 28) = 2;
  if ( v15 == 2 )
    v35 = 2;
  *(_DWORD *)(a2 + 48) = v17;
  if ( v15 == 2 )
    goto LABEL_44;
  v53 = v13 == 0;
  v73 = v3 + v15 + HIDWORD(a3);
  v63 = v13 - 1;
  if ( v53 )
  {
    v15 = 2;
    goto LABEL_44;
  }
  v71 = HIDWORD(a3);
  v64 = *((unsigned __int8 *)v7 + 1);
  v74 = v15;
  do
  {
    v65 = (unsigned __int8 *)(v3 + a3);
    if ( *(unsigned __int8 *)(v3 + a3 + v35 - 1) != v64
      || v65[v35] != *((unsigned __int8 *)v7 + v35)
      || *v65 != *(unsigned __int8 *)v7
      || v65[1] != *((unsigned __int8 *)v7 + 1) )
    {
      goto LABEL_86;
    }
    v66 = v65 + 2;
    for ( i = (unsigned __int8 *)v7 + 3; v73 > (unsigned int)i; ++i )
    {
      v68 = *++v66;
      if ( *i != v68 )
        break;
    }
    v69 = i - (unsigned __int8 *)v7;
    if ( v69 <= v35 )
      goto LABEL_86;
    *(_DWORD *)(a2 + 28) = v69;
    *(_DWORD *)(a2 + 48) = a3;
    if ( v74 == v69 )
    {
      v15 = v74;
      v17 = a3;
      HIDWORD(a3) = v71;
      LOWORD(v35) = v74;
      goto LABEL_44;
    }
    if ( v69 >= *(_DWORD *)(a2 + 16) || v69 > *(unsigned __int16 *)(a2 + 2 * (a3 + 32812) + 2) )
      break;
    v35 = v69;
    v64 = *((unsigned __int8 *)v7 + v69 - 1);
LABEL_86:
    --v63;
    LODWORD(a3) = *(unsigned __int16 *)(a2 + 45148 + 2 * a3);
  }
  while ( v63 != -1 );
  v15 = *(_DWORD *)(a2 + 28);
  HIDWORD(a3) = v71;
  LOWORD(v35) = v15;
  if ( v15 <= 1 )
  {
    v17 = *(_DWORD *)(a2 + 32);
    goto LABEL_50;
  }
  v17 = *(_DWORD *)(a2 + 48);
LABEL_44:
  v36 = v17 >= HIDWORD(a3);
  if ( v17 < HIDWORD(a3) )
    v17 = HIDWORD(a3) - v17;
  else
    LODWORD(a3) = *(_DWORD *)(a2 + 76);
  if ( v36 )
    v17 = HIDWORD(a3) + a3 - v17;
  *(_DWORD *)(a2 + 32) = v17;
LABEL_50:
  v16 = *(_DWORD *)(a2 + 4);
  *(_WORD *)(a2 + 2 * (HIDWORD(a3) + 32812) + 2) = v35;
LABEL_14:
  v18 = *(_DWORD *)(a2 + 84);
  v19 = *(_DWORD *)(a2 + 72);
  if ( v18 )
  {
    *(_DWORD *)(a2 + 84) = v18 - 1;
  }
  else
  {
    v62 = *(unsigned __int8 *)(a2 + v19 + 93) ^ (32 * *(unsigned __int8 *)(a2 + v19 + 92));
    --*(_WORD *)(a2
               + 2 * (((40799 * (*(unsigned __int8 *)(a2 + v19 + 94) ^ (unsigned int)(32 * v62))) >> 5) & 0x3FFF)
               + 86104);
    if ( v19 == *(unsigned __int16 *)(a2 + 2 * *(unsigned __int16 *)(v3 + v19) + 118872) )
      *(_WORD *)(a2 + 2 * *(unsigned __int16 *)(v3 + v19) + 118872) = -1;
  }
  v20 = *(_DWORD *)(a2 + 44);
  v21 = *v7;
  v22 = *(char **)(v20 + 28);
  v23 = *(_DWORD *)(v20 + 36);
  *(_WORD *)(a2 + 2 * (v21 + 59436)) = v6;
  a1[2] = v15;
  a1[3] = v17;
  LODWORD(a3) = *(_DWORD *)(a2 + 64);
  if ( (unsigned int)v22 < v23 )
  {
    *(_DWORD *)(v20 + 28) = v22 + 1;
    v25 = *v22;
    *(_BYTE *)(a2 + a3 + 92) = *v22;
    if ( v16 <= (unsigned int)a3 )
      goto LABEL_21;
    goto LABEL_38;
  }
  v24 = *(_DWORD *)(a2 + 36);
  v25 = 0;
  if ( v24 )
    *(_DWORD *)(a2 + 36) = v24 - 1;
  *(_BYTE *)(a2 + a3 + 92) = 0;
  if ( v16 > (unsigned int)a3 )
  {
LABEL_38:
    *(_BYTE *)(*(_DWORD *)(a2 + 80) + a3) = v25;
    a3 = *(_QWORD *)(a2 + 64);
    v19 = *(_DWORD *)(a2 + 72);
  }
LABEL_21:
  v26 = *(_DWORD *)(a2 + 76);
  LODWORD(a3) = a3 + 1;
  *(_DWORD *)(a2 + 64) = a3;
  ++HIDWORD(a3);
  if ( (_DWORD)a3 == v26 )
  {
    LODWORD(a3) = 0;
    *(_DWORD *)(a2 + 64) = 0;
  }
  if ( v26 == HIDWORD(a3) )
    HIDWORD(a3) = 0;
  *(_DWORD *)(a2 + 68) = HIDWORD(a3);
  v28 = v19 + 1;
  if ( v26 == v19 + 1 )
    v28 = 0;
  *(_DWORD *)(a2 + 72) = v28;
  v29 = *(_DWORD *)(a2 + 40);
  if ( v29 < 0 )
  {
    a2 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    LODWORD(a3) = *(_DWORD *)(a2 + 36);
  }
  if ( v29 >= 0 )
  {
    a2 = ~(_DWORD)a3;
    a1[1] = a3 + 1;
  }
  v30 = a1[11];
  a1[6] = a1[7] + a2;
  if ( v30 )
  {
    v31 = *(void (__fastcall **)(int, unsigned int, _DWORD, _DWORD))(v30 + 8);
    if ( v31 )
    {
      v32 = a1[12];
      if ( v32 > a1[14] )
      {
        v33 = a1;
        v31(v30, v32, a1[13], 0);
        v33[14] += 1024;
      }
    }
  }
  return 0;
}
