int __fastcall sub_22888(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r12
  unsigned int v5; // r9
  unsigned int v6; // r4
  unsigned int v7; // r7
  int v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r5
  unsigned int v11; // r4
  unsigned int v12; // lr
  int v13; // r3
  unsigned int v14; // r2
  bool v15; // cf
  unsigned int v16; // r5
  int v17; // r6
  bool v18; // zf
  unsigned __int8 *v19; // r10
  unsigned int v20; // r2
  int v21; // r11
  unsigned int v22; // r4
  unsigned __int8 *v23; // r12
  unsigned __int8 *v24; // r12
  unsigned __int8 *i; // lr
  int v26; // t1
  unsigned int v27; // lr
  unsigned int v28; // r4
  unsigned int v29; // lr
  unsigned int v30; // r12
  int v31; // r12
  int v32; // r3
  int v33; // r2
  int v34; // r12
  char *v35; // lr
  unsigned int v36; // r3
  int v37; // r12
  char v38; // lr
  int v39; // r12
  unsigned int v40; // r3
  int v41; // r2
  int v42; // r3
  int v43; // r3
  int v44; // r2
  void (__fastcall *v45)(int, unsigned int, _DWORD, _DWORD); // r4
  unsigned int v46; // r1
  int v49; // r6
  int v50; // r12
  unsigned int v51; // r3
  int v52; // r2
  int v53; // lr
  int v54; // r5
  unsigned int v55; // r3
  int v56; // r2
  int v57; // r3
  int v58; // r5
  int v59; // r10
  int v60; // r5
  unsigned int v61; // r3
  unsigned int v62; // r7
  unsigned int v63; // r3
  int v64; // r4
  __int16 v65; // r4
  __int16 v66; // r9
  int v67; // r12
  int v68; // r6
  bool v69; // cf
  unsigned int v70; // [sp+4h] [bp-18h]
  int v71; // [sp+4h] [bp-18h]
  unsigned int v72; // [sp+8h] [bp-14h]

  if ( a4 )
  {
    v49 = a3 - a4;
    v4 = *(_DWORD *)(a2 + 68);
    v71 = a3 - a4;
    if ( a3 == a4 )
    {
      LOWORD(v7) = *(_DWORD *)(a2 + 68);
      v5 = v4 + 1;
      v6 = v4 + 2;
    }
    else
    {
      do
      {
        v57 = *(_DWORD *)(a2 + 84);
        v52 = *(_DWORD *)(a2 + 72);
        if ( v57 )
          *(_DWORD *)(a2 + 84) = v57 - 1;
        else
          --*(_WORD *)(a2
                     + 2
                     * (((40799
                        * (*(unsigned __int8 *)(a2 + v52 + 94)
                         ^ (32
                          * (*(unsigned __int8 *)(a2 + v52 + 93)
                           ^ (32 * (unsigned int)*(unsigned __int8 *)(a2 + v52 + 92)))))) >> 5)
                      & 0x3FFF)
                     + 127064);
        v53 = v4 + 1;
        v58 = a2 + 2 * v4;
        v59 = v58 + 53248;
        v60 = v58 + 90112;
        v61 = a2
            + 2
            * (((40799
               * (*(unsigned __int8 *)(a2 + v4 + 94)
                ^ (32
                 * (*(unsigned __int8 *)(a2 + v4 + 1 + 92) ^ (32 * (unsigned int)*(unsigned __int8 *)(a2 + v4 + 92)))))) >> 5)
             & 0x3FFF);
        v62 = v61 + 126976;
        v63 = v61 + 20480;
        v64 = *(unsigned __int16 *)(v62 + 88);
        v18 = v64 == 0;
        v65 = v64 + 1;
        if ( v18 )
          v66 = -1;
        else
          v66 = *(_WORD *)(v63 + 92);
        *(_WORD *)(v59 + 92) = v66;
        *(_WORD *)(v63 + 92) = v4;
        v5 = *(_DWORD *)(a2 + 4);
        *(_WORD *)(v60 + 90) = v5 + 1;
        *(_WORD *)(v62 + 88) = v65;
        v67 = *(_DWORD *)(a2 + 44);
        v51 = *(_DWORD *)(a2 + 64);
        v6 = *(_DWORD *)(v67 + 28);
        if ( v6 >= *(_DWORD *)(v67 + 36) )
        {
          v50 = *(_DWORD *)(a2 + 36);
          if ( v50 )
            *(_DWORD *)(a2 + 36) = v50 - 1;
          v4 = a2 + v51;
          *(_BYTE *)(a2 + v51 + 92) = 0;
          if ( v5 > v51 )
          {
            *(_BYTE *)(*(_DWORD *)(a2 + 80) + v51) = 0;
            v51 = *(_DWORD *)(a2 + 64);
            v52 = *(_DWORD *)(a2 + 72);
            v53 = *(_DWORD *)(a2 + 68) + 1;
          }
        }
        else
        {
          *(_DWORD *)(v67 + 28) = v6 + 1;
          v4 = a2 + v51;
          v6 = *(unsigned __int8 *)v6;
          *(_BYTE *)(a2 + v51 + 92) = v6;
          if ( v5 > v51 )
          {
            *(_BYTE *)(*(_DWORD *)(a2 + 80) + v51) = v6;
            v51 = *(_DWORD *)(a2 + 64);
            v52 = *(_DWORD *)(a2 + 72);
            v53 = *(_DWORD *)(a2 + 68) + 1;
          }
        }
        v54 = *(_DWORD *)(a2 + 76);
        v55 = v51 + 1;
        *(_DWORD *)(a2 + 64) = v55;
        v56 = v52 + 1;
        if ( v55 == v54 )
          *(_DWORD *)(a2 + 64) = 0;
        if ( v54 == v53 )
        {
          v7 = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 68) = v53;
          v5 = v53 + 1;
          v6 = v53 + 2;
          v7 = (unsigned __int16)v53;
          v4 = v53;
        }
        if ( v54 == v53 )
        {
          v6 = 2;
          *(_DWORD *)(a2 + 68) = 0;
          v4 = v7;
          v5 = 1;
        }
        if ( v54 == v56 )
          v56 = 0;
        --v49;
        *(_DWORD *)(a2 + 72) = v56;
      }
      while ( v49 );
    }
    a1[12] += 1 + v71;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 68);
    v5 = v4 + 1;
    v6 = v4 + 2;
    LOWORD(v7) = v4;
    a1[12] += a3;
  }
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 28) = 2;
  v8 = *(unsigned __int8 *)(a2 + v4 + 92);
  v9 = a2
     + 2
     * (((40799
        * (*(unsigned __int8 *)(a2 + v6 + 92) ^ (32 * (*(unsigned __int8 *)(a2 + v5 + 92) ^ (unsigned int)(32 * v8))))) >> 5)
      & 0x3FFF);
  v10 = v9 + 126976;
  v11 = *(unsigned __int16 *)(v9 + 127064);
  if ( *(_WORD *)(v9 + 127064) )
  {
    v12 = v9 + 20480;
    v13 = *(unsigned __int16 *)(v9 + 20572);
    *(_WORD *)(a2 + 2 * (v4 + 26668) + 4) = v13;
    *(_WORD *)(v10 + 88) = v11 + 1;
    v14 = *(_DWORD *)(a2 + 12);
    v15 = 1;
    if ( v14 )
      v15 = v14 >= v11;
    if ( v15 )
      v14 = v11;
  }
  else
  {
    v14 = *(unsigned __int16 *)(v9 + 127064);
    v12 = v9 + 20480;
    *(_WORD *)(a2 + 2 * (v4 + 26668) + 4) = -1;
    v13 = 0xFFFF;
    *(_WORD *)(v10 + 88) = 1;
  }
  *(_WORD *)(v12 + 92) = v7;
  v16 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 40) = v8;
  if ( v16 <= 2 )
  {
    v28 = *(_DWORD *)(a2 + 4);
    v29 = *(_DWORD *)(a2 + 32);
    v30 = v4 + 45100;
    if ( !v16 )
      v13 = -1;
    v31 = a2 + 2 * v30;
    if ( !v16 )
      *(_DWORD *)(a2 + 40) = v13;
    v16 = *(_DWORD *)(a2 + 28);
    *(_WORD *)(v31 + 2) = v28 + 1;
    goto LABEL_31;
  }
  v17 = a2 + 92;
  v18 = v14 == 0;
  v19 = (unsigned __int8 *)(a2 + 92 + v4);
  v20 = v14 - 1;
  v21 = v19[1];
  v72 = a2 + 92 + v16 + v4;
  if ( v18 )
  {
    v16 = *(_DWORD *)(a2 + 28);
LABEL_94:
    v29 = *(_DWORD *)(a2 + 32);
    goto LABEL_92;
  }
  v22 = 2;
  v70 = v4;
  do
  {
    v23 = (unsigned __int8 *)(v17 + v13);
    if ( *(unsigned __int8 *)(v17 + v13 + v22 - 1) != v21 || v23[v22] != v19[v22] || *v23 != *v19 || v23[1] != v19[1] )
      goto LABEL_11;
    v24 = v23 + 2;
    for ( i = v19 + 3; v72 > (unsigned int)i; ++i )
    {
      v26 = *++v24;
      if ( *i != v26 )
        break;
    }
    v27 = i - v19;
    if ( v27 <= v22 )
      goto LABEL_11;
    *(_DWORD *)(a2 + 28) = v27;
    *(_DWORD *)(a2 + 48) = v13;
    if ( v16 == v27 )
    {
      v4 = v70;
      goto LABEL_86;
    }
    if ( v27 >= *(_DWORD *)(a2 + 16) || v27 > *(unsigned __int16 *)(a2 + 2 * (v13 + 45100) + 2) )
      break;
    v22 = v27;
    v21 = v19[v27 - 1];
LABEL_11:
    --v20;
    v13 = *(unsigned __int16 *)(a2 + 53340 + 2 * v13);
  }
  while ( v20 != -1 );
  v16 = *(_DWORD *)(a2 + 28);
  v4 = v70;
  if ( v16 <= 2 )
    goto LABEL_94;
LABEL_86:
  v29 = *(_DWORD *)(a2 + 48);
  v69 = v29 >= v4;
  if ( v29 < v4 )
    v29 = v4 - v29;
  else
    v13 = *(_DWORD *)(a2 + 76);
  if ( v69 )
    v29 = v13 - v29 + v4;
  *(_DWORD *)(a2 + 32) = v29;
LABEL_92:
  v28 = *(_DWORD *)(a2 + 4);
  *(_WORD *)(a2 + 2 * (v4 + 45100) + 2) = v16;
LABEL_31:
  v32 = *(_DWORD *)(a2 + 84);
  v33 = *(_DWORD *)(a2 + 72);
  if ( v32 )
  {
    *(_DWORD *)(a2 + 84) = v32 - 1;
  }
  else
  {
    v68 = *(unsigned __int8 *)(a2 + v33 + 93) ^ (32 * *(unsigned __int8 *)(a2 + v33 + 92));
    --*(_WORD *)(a2
               + 2 * (((40799 * (*(unsigned __int8 *)(a2 + v33 + 94) ^ (unsigned int)(32 * v68))) >> 5) & 0x3FFF)
               + 127064);
  }
  v34 = *(_DWORD *)(a2 + 44);
  a1[2] = v16;
  a1[3] = v29;
  v35 = *(char **)(v34 + 28);
  v36 = *(_DWORD *)(a2 + 64);
  if ( (unsigned int)v35 < *(_DWORD *)(v34 + 36) )
  {
    *(_DWORD *)(v34 + 28) = v35 + 1;
    v38 = *v35;
    *(_BYTE *)(a2 + v36 + 92) = v38;
    if ( v28 <= v36 )
      goto LABEL_38;
    goto LABEL_57;
  }
  v37 = *(_DWORD *)(a2 + 36);
  v38 = 0;
  if ( v37 )
    *(_DWORD *)(a2 + 36) = v37 - 1;
  *(_BYTE *)(a2 + v36 + 92) = 0;
  if ( v28 > v36 )
  {
LABEL_57:
    *(_BYTE *)(*(_DWORD *)(a2 + 80) + v36) = v38;
    v36 = *(_DWORD *)(a2 + 64);
    v33 = *(_DWORD *)(a2 + 72);
  }
LABEL_38:
  v39 = *(_DWORD *)(a2 + 76);
  v40 = v36 + 1;
  *(_DWORD *)(a2 + 64) = v40;
  v41 = v33 + 1;
  if ( v40 == v39 )
    *(_DWORD *)(a2 + 64) = 0;
  v42 = *(_DWORD *)(a2 + 68) + 1;
  if ( v39 == v42 )
    v42 = 0;
  *(_DWORD *)(a2 + 68) = v42;
  if ( v39 == v41 )
    *(_DWORD *)(a2 + 72) = 0;
  v43 = *(_DWORD *)(a2 + 40);
  if ( v39 != v41 )
    *(_DWORD *)(a2 + 72) = v41;
  if ( v43 < 0 )
  {
    a2 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    v41 = *(_DWORD *)(a2 + 36);
  }
  if ( v43 >= 0 )
  {
    a2 = ~v41;
    a1[1] = v41 + 1;
  }
  v44 = a1[11];
  a1[6] = a1[7] + a2;
  if ( v44 )
  {
    v45 = *(void (__fastcall **)(int, unsigned int, _DWORD, _DWORD))(v44 + 8);
    if ( v45 )
    {
      v46 = a1[12];
      if ( v46 > a1[14] )
      {
        v45(v44, v46, a1[13], 0);
        a1[14] += 1024;
      }
    }
  }
  return 0;
}
