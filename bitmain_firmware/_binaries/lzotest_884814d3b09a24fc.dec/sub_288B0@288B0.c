int __fastcall sub_288B0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int16 *v4; // r11
  _DWORD *v6; // r6
  unsigned __int16 *v7; // r7
  unsigned int v8; // r5
  int v9; // r8
  int v10; // r9
  int v11; // r3
  int v12; // lr
  char *v13; // r3
  _WORD *v14; // r0
  unsigned int v15; // r12
  char *v16; // r1
  int v17; // r3
  unsigned int v18; // r2
  bool v19; // cf
  unsigned int v20; // r12
  unsigned int v21; // r9
  unsigned int v22; // r1
  int v23; // r3
  int v24; // r2
  int v25; // r0
  char *v26; // lr
  unsigned int v27; // r3
  int v28; // r1
  char v29; // r0
  int v30; // r1
  unsigned int v31; // r3
  unsigned int v32; // r5
  int v33; // r2
  int v34; // r0
  int v35; // r3
  bool v36; // cc
  int v37; // r3
  void (*v38)(void); // r4
  int v40; // r0
  unsigned int v41; // r0
  __int16 v42; // r2
  bool v43; // cf
  _DWORD *v44; // r0
  int v45; // r3
  int v46; // t1
  unsigned int v47; // r2
  unsigned int v48; // r2
  int v49; // r3
  int v50; // r8
  int v51; // r0
  unsigned int v52; // r3
  int v53; // r2
  int v54; // r1
  int v55; // r12
  unsigned int v56; // r3
  __int16 v57; // r3
  int v58; // r0
  int v59; // r2
  int v60; // r3
  _WORD *v61; // lr
  __int16 v62; // r9
  char *v63; // r3
  char *v64; // r0
  char *v65; // r3
  _WORD *v66; // r0
  int v67; // r12
  bool v68; // zf
  __int16 v69; // r12
  char *v70; // lr
  unsigned int v71; // r6
  int v72; // r12
  int v73; // r0
  char *v74; // lr
  unsigned int v75; // r5
  char v76; // r12
  _WORD *v77; // r3
  _WORD *v78; // r3
  _WORD *v79; // r3
  _WORD *v80; // r3
  unsigned int v81; // r2
  int v82; // r12
  unsigned __int8 *v83; // r1
  unsigned __int8 *v84; // r1
  unsigned __int8 *i; // lr
  int v86; // t1
  unsigned int v87; // lr
  _DWORD *v88; // r1
  __int16 v89; // [sp+0h] [bp-24h]
  int v90; // [sp+4h] [bp-20h]
  int v91; // [sp+4h] [bp-20h]
  unsigned int v93; // [sp+10h] [bp-14h]
  unsigned int v94; // [sp+18h] [bp-Ch]

  v6 = a1;
  v7 = (unsigned __int16 *)(a2 + 91);
  if ( a4 )
  {
    v49 = a3 - a4;
    v8 = a2[85];
    v91 = v49;
    if ( v49 )
    {
      v50 = v49;
      do
      {
        v60 = a2[89];
        v53 = a2[86];
        if ( v60 )
        {
          a2[89] = v60 - 1;
        }
        else
        {
          v79 = (_WORD *)a2
              + (((40799
                 * (*((unsigned __int8 *)a2 + v53 + 366)
                  ^ (32
                   * (*((unsigned __int8 *)a2 + v53 + 365) ^ (32 * (unsigned int)*((unsigned __int8 *)a2 + v53 + 364)))))) >> 5)
               & 0x3FFF)
              + 145588;
          --*v79;
          v80 = (_WORD *)a2 + *(unsigned __int16 *)((char *)v7 + v53) + 161972;
          if ( v53 == (unsigned __int16)*v80 )
            *v80 = -1;
        }
        v54 = v8 + 1;
        v61 = (_WORD *)*((unsigned __int8 *)a2 + v8 + 364);
        v62 = v8;
        v63 = (char *)a2
            + 2
            * (((40799
               * (*((unsigned __int8 *)a2 + v8 + 366)
                ^ (32 * (*((unsigned __int8 *)a2 + v8 + 365) ^ (unsigned int)(32 * (_DWORD)v61))))) >> 5)
             & 0x3FFF);
        v64 = v63 + 290816;
        v65 = v63 + 53248;
        v66 = v64 + 360;
        v67 = (unsigned __int16)*v66;
        v68 = v67 == 0;
        v69 = v67 + 1;
        if ( v68 )
          LOWORD(v4) = -1;
        else
          v61 = v65 + 364;
        if ( !v68 )
          LOWORD(v4) = *v61;
        v70 = (char *)a2 + 2 * v8;
        *((_WORD *)v70 + 43190) = (_WORD)v4;
        *((_WORD *)v65 + 182) = v8;
        v71 = a2[1];
        *((_WORD *)v70 + 94389) = v71 + 1;
        *v66 = v69;
        v72 = a2[45];
        v73 = *(unsigned __int16 *)((char *)v7 + v8);
        v52 = a2[84];
        v74 = *(char **)(v72 + 28);
        v75 = *(_DWORD *)(v72 + 36);
        *((_WORD *)a2 + v73 + 161972) = v62;
        if ( (unsigned int)v74 >= v75 )
        {
          v51 = a2[9];
          if ( v51 )
            a2[9] = v51 - 1;
          *((_BYTE *)a2 + v52 + 364) = 0;
          if ( v71 > v52 )
          {
            *(_BYTE *)(a2[88] + v52) = 0;
            v52 = a2[84];
            v53 = a2[86];
            v54 = a2[85] + 1;
          }
        }
        else
        {
          *(_DWORD *)(v72 + 28) = v74 + 1;
          v76 = *v74;
          *((_BYTE *)a2 + v52 + 364) = *v74;
          if ( v71 > v52 )
          {
            *(_BYTE *)(a2[88] + v52) = v76;
            v52 = a2[84];
            v53 = a2[86];
            v54 = a2[85] + 1;
          }
        }
        v55 = a2[87];
        v56 = v52 + 1;
        a2[84] = v56;
        if ( v56 == v55 )
          a2[84] = 0;
        if ( v55 == v54 )
        {
          v57 = 0;
          v4 = v7;
          v8 = 0;
          v10 = 2;
          v58 = 1;
          a2[85] = 0;
        }
        else
        {
          v57 = v54;
          v58 = v54 + 1;
          v10 = v54 + 2;
          a2[85] = v54;
          v4 = (unsigned __int16 *)((char *)v7 + v54);
          v8 = v54;
        }
        v59 = v53 + 1;
        if ( v55 == v59 )
          v59 = 0;
        --v50;
        a2[86] = v59;
      }
      while ( v50 );
      v9 = v58;
      v89 = v57;
      v6 = a1;
    }
    else
    {
      v9 = v8 + 1;
      v10 = v8 + 2;
      v4 = (unsigned __int16 *)((char *)v7 + v8);
      v89 = a2[85];
    }
    v6[12] += 1 + v91;
  }
  else
  {
    v8 = a2[85];
    v9 = v8 + 1;
    v10 = v8 + 2;
    v4 = (unsigned __int16 *)((char *)v7 + v8);
    v89 = v8;
    a1[12] += a3;
  }
  v11 = a2[5];
  a2[8] = 0;
  v90 = v11;
  a2[7] = 1;
  if ( v11 )
    memset(a2 + 47, 0, 0x88u);
  v12 = *((unsigned __int8 *)a2 + v8 + 364);
  v13 = (char *)a2
      + 2
      * (((40799
         * (*((unsigned __int8 *)a2 + v10 + 364)
          ^ (32 * (*((unsigned __int8 *)a2 + v9 + 364) ^ (unsigned int)(32 * v12))))) >> 5)
       & 0x3FFF);
  v14 = v13 + 291176;
  v15 = *((unsigned __int16 *)v13 + 145588);
  if ( *((_WORD *)v13 + 145588) )
  {
    v16 = v13 + 53248;
    v17 = *((unsigned __int16 *)v13 + 26806);
    *((_WORD *)a2 + v8 + 43190) = v17;
    *v14 = v15 + 1;
    v18 = a2[3];
    v19 = 1;
    if ( v18 )
      v19 = v18 >= v15;
    if ( v19 )
      v18 = v15;
  }
  else
  {
    v18 = *((unsigned __int16 *)v13 + 145588);
    v16 = v13 + 53248;
    *((_WORD *)a2 + v8 + 43190) = -1;
    v17 = 0xFFFF;
    *v14 = 1;
  }
  *((_WORD *)v16 + 182) = v89;
  v20 = a2[9];
  a2[10] = v12;
  if ( v20 <= 1 )
  {
    v21 = a2[1];
    if ( !v20 )
      v17 = -1;
    v22 = a2[8];
    if ( !v20 )
      a2[10] = v17;
    v20 = a2[7];
    *((_WORD *)a2 + v8 + 94389) = v21 + 1;
    goto LABEL_16;
  }
  v22 = *((unsigned __int16 *)a2 + *v4 + 161972);
  if ( v22 == 0xFFFF )
  {
    v20 = a2[7];
    v22 = a2[8];
    v42 = v20;
    goto LABEL_59;
  }
  v40 = a2[49];
  a2[46] = v22;
  if ( !v40 )
    a2[49] = v22 + 1;
  v41 = 2;
  a2[7] = 2;
  if ( v20 == 2 )
  {
LABEL_52:
    v42 = 2;
    goto LABEL_53;
  }
  v68 = v18 == 0;
  v93 = (unsigned int)v7 + v20 + v8;
  v81 = v18 - 1;
  if ( v68 )
  {
    v20 = 2;
    goto LABEL_52;
  }
  v94 = v20;
  v82 = *((unsigned __int8 *)v4 + 1);
  do
  {
    v83 = (unsigned __int8 *)v7 + v17;
    if ( *((unsigned __int8 *)v7 + v17 + v41 - 1) != v82
      || v83[v41] != *((unsigned __int8 *)v4 + v41)
      || *v83 != *(unsigned __int8 *)v4
      || v83[1] != *((unsigned __int8 *)v4 + 1) )
    {
      goto LABEL_106;
    }
    v84 = v83 + 2;
    for ( i = (unsigned __int8 *)v4 + 3; v93 > (unsigned int)i; ++i )
    {
      v86 = *++v84;
      if ( *i != v86 )
        break;
    }
    v87 = i - (unsigned __int8 *)v4;
    if ( v87 <= 0x21 )
    {
      v88 = &a2[v87];
      if ( !v88[47] )
        v88[47] = v17 + 1;
    }
    if ( v87 <= v41 )
      goto LABEL_106;
    a2[7] = v87;
    a2[46] = v17;
    if ( v94 == v87 )
    {
      v20 = v94;
      v22 = v17;
      v42 = v94;
      goto LABEL_53;
    }
    if ( v87 >= a2[4] || v87 > *((unsigned __int16 *)a2 + v17 + 94389) )
      break;
    v41 = v87;
    v82 = *((unsigned __int8 *)v4 + v87 - 1);
LABEL_106:
    --v81;
    v17 = *((unsigned __int16 *)a2 + v17 + 43190);
  }
  while ( v81 != -1 );
  v20 = a2[7];
  v42 = v20;
  if ( v20 <= 1 )
  {
    v22 = a2[8];
    goto LABEL_59;
  }
  v22 = a2[46];
LABEL_53:
  v43 = v22 >= v8;
  if ( v22 < v8 )
    v22 = v8 - v22;
  else
    v17 = a2[87];
  if ( v43 )
    v22 = v8 + v17 - v22;
  a2[8] = v22;
LABEL_59:
  v21 = a2[1];
  *((_WORD *)a2 + v8 + 94389) = v42;
  if ( v90 )
  {
    v44 = a2 + 48;
    do
    {
      v46 = v44[1];
      ++v44;
      v45 = v46;
      v47 = v46 - 1;
      if ( v46 )
      {
        v19 = v47 >= v8;
        v48 = v9 - v45;
        if ( v19 )
          v48 = a2[87] - v45 + 1 + v8;
        *(v44 - 36) = v48;
      }
      else
      {
        *(v44 - 36) = 0;
      }
    }
    while ( a2 + 80 != v44 );
  }
LABEL_16:
  v23 = a2[89];
  v24 = a2[86];
  if ( v23 )
  {
    a2[89] = v23 - 1;
  }
  else
  {
    v77 = (_WORD *)a2
        + (((40799
           * (*((unsigned __int8 *)a2 + v24 + 366)
            ^ (32 * (*((unsigned __int8 *)a2 + v24 + 365) ^ (32 * (unsigned int)*((unsigned __int8 *)a2 + v24 + 364)))))) >> 5)
         & 0x3FFF)
        + 145588;
    --*v77;
    v78 = (_WORD *)a2 + *(unsigned __int16 *)((char *)v7 + v24) + 161972;
    if ( v24 == (unsigned __int16)*v78 )
      *v78 = -1;
  }
  v25 = a2[45];
  v26 = *(char **)(v25 + 28);
  v19 = (unsigned int)v26 >= *(_DWORD *)(v25 + 36);
  *((_WORD *)a2 + *v4 + 161972) = v89;
  v6[2] = v20;
  v6[3] = v22;
  v27 = a2[84];
  if ( v19 )
  {
    v28 = a2[9];
    v29 = 0;
    if ( v28 )
      a2[9] = v28 - 1;
    *((_BYTE *)a2 + v27 + 364) = 0;
    if ( v21 > v27 )
    {
LABEL_47:
      *(_BYTE *)(a2[88] + v27) = v29;
      v27 = a2[84];
      v8 = a2[85];
      v24 = a2[86];
    }
  }
  else
  {
    *(_DWORD *)(v25 + 28) = v26 + 1;
    v29 = *v26;
    *((_BYTE *)a2 + v27 + 364) = *v26;
    if ( v21 > v27 )
      goto LABEL_47;
  }
  v30 = a2[87];
  v31 = v27 + 1;
  a2[84] = v31;
  v32 = v8 + 1;
  v33 = v24 + 1;
  v34 = v6[11];
  if ( v31 == v30 )
  {
    v31 = 0;
    a2[84] = 0;
  }
  if ( v30 == v32 )
    v31 = 0;
  else
    a2[85] = v32;
  if ( v30 == v32 )
    a2[85] = v31;
  if ( v30 == v33 )
    v31 = 0;
  else
    a2[86] = v33;
  if ( v30 == v33 )
    a2[86] = v31;
  v35 = a2[10];
  v36 = v35 < 0;
  if ( v35 < 0 )
  {
    v30 = 0;
    v6[1] = 0;
    v6[2] = 0;
  }
  else
  {
    v33 = a2[9];
  }
  v37 = v6[7];
  if ( !v36 )
  {
    v30 = ~v33;
    v6[1] = v33 + 1;
  }
  v6[6] = v37 + v30;
  if ( v34 )
  {
    v38 = *(void (**)(void))(v34 + 8);
    if ( v38 )
    {
      if ( v6[12] > v6[14] )
      {
        v38();
        v6[14] += 1024;
      }
    }
  }
  return 0;
}
