int __fastcall sub_1BB94(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r12
  int v5; // r7
  int v6; // r4
  int v7; // r6
  unsigned int v8; // lr
  unsigned int v9; // r7
  unsigned int v10; // r4
  unsigned int v11; // lr
  int v12; // r2
  unsigned int v13; // r3
  bool v14; // cc
  unsigned int v15; // r5
  int v16; // r6
  bool v17; // zf
  unsigned __int8 *v18; // r10
  unsigned int v19; // r3
  int v20; // r11
  unsigned int v21; // r4
  unsigned __int8 *v22; // r12
  unsigned __int8 *v23; // r12
  unsigned __int8 *i; // lr
  int v25; // t1
  unsigned int v26; // lr
  unsigned int v27; // lr
  unsigned int v28; // r4
  unsigned int v29; // r12
  int v30; // r3
  int v31; // r2
  int v32; // r12
  char *v33; // r4
  unsigned int v34; // r3
  int v35; // r12
  char v36; // lr
  int v37; // r12
  unsigned int v38; // r3
  int v39; // r2
  int v40; // r3
  int v41; // r3
  int v42; // r2
  void (__fastcall *v43)(int, unsigned int, _DWORD, _DWORD); // r4
  unsigned int v44; // r1
  int v47; // r6
  int v48; // r12
  unsigned int v49; // r3
  int v50; // r2
  int v51; // lr
  int v52; // r5
  unsigned int v53; // r3
  int v54; // r2
  int v55; // r3
  int v56; // r5
  int v57; // r10
  int v58; // r5
  unsigned int v59; // r3
  unsigned int v60; // r7
  unsigned int v61; // r3
  int v62; // r4
  int v63; // r4
  int v64; // r9
  unsigned int v65; // r9
  int v66; // r12
  char *v67; // r4
  char v68; // r4
  int v69; // r6
  bool v70; // cf
  unsigned int v71; // [sp+4h] [bp-18h]
  int v72; // [sp+4h] [bp-18h]
  unsigned int v73; // [sp+8h] [bp-14h]

  if ( a4 )
  {
    v4 = *(_DWORD *)(a2 + 68);
    v47 = a3 - a4;
    v72 = a3 - a4;
    if ( a3 == a4 )
    {
      v5 = v4 + 1;
      v6 = v4 + 2;
    }
    else
    {
      do
      {
        v55 = *(_DWORD *)(a2 + 84);
        v50 = *(_DWORD *)(a2 + 72);
        if ( v55 )
          *(_DWORD *)(a2 + 84) = v55 - 1;
        else
          --*(_DWORD *)(a2
                      + 4
                      * (((40799
                         * (*(unsigned __int8 *)(a2 + v50 + 94)
                          ^ (32
                           * (*(unsigned __int8 *)(a2 + v50 + 93)
                            ^ (32 * (unsigned int)*(unsigned __int8 *)(a2 + v50 + 92)))))) >> 5)
                       & 0x3FFF)
                      + 675924);
        v51 = v4 + 1;
        v56 = a2 + 4 * v4;
        v57 = v56 + 135168;
        v58 = v56 + 405504;
        v59 = a2
            + 4
            * (((40799
               * (*(unsigned __int8 *)(a2 + v4 + 94)
                ^ (32
                 * (*(unsigned __int8 *)(a2 + v4 + 1 + 92) ^ (32 * (unsigned int)*(unsigned __int8 *)(a2 + v4 + 92)))))) >> 5)
             & 0x3FFF);
        v60 = v59 + 675840;
        v61 = v59 + 69632;
        v62 = *(_DWORD *)(v60 + 84);
        v17 = v62 == 0;
        v63 = v62 + 1;
        if ( v17 )
          v64 = -1;
        else
          v64 = *(_DWORD *)(v61 + 92);
        *(_DWORD *)(v57 + 92) = v64;
        *(_DWORD *)(v61 + 92) = v4;
        v65 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)(v58 + 88) = v65 + 1;
        *(_DWORD *)(v60 + 84) = v63;
        v66 = *(_DWORD *)(a2 + 44);
        v49 = *(_DWORD *)(a2 + 64);
        v67 = *(char **)(v66 + 28);
        if ( (unsigned int)v67 >= *(_DWORD *)(v66 + 36) )
        {
          v48 = *(_DWORD *)(a2 + 36);
          if ( v48 )
            *(_DWORD *)(a2 + 36) = v48 - 1;
          *(_BYTE *)(a2 + v49 + 92) = 0;
          if ( v65 > v49 )
          {
            *(_BYTE *)(*(_DWORD *)(a2 + 80) + v49) = 0;
            v49 = *(_DWORD *)(a2 + 64);
            v50 = *(_DWORD *)(a2 + 72);
            v51 = *(_DWORD *)(a2 + 68) + 1;
          }
        }
        else
        {
          *(_DWORD *)(v66 + 28) = v67 + 1;
          v68 = *v67;
          *(_BYTE *)(a2 + v49 + 92) = v68;
          if ( v65 > v49 )
          {
            *(_BYTE *)(*(_DWORD *)(a2 + 80) + v49) = v68;
            v49 = *(_DWORD *)(a2 + 64);
            v50 = *(_DWORD *)(a2 + 72);
            v51 = *(_DWORD *)(a2 + 68) + 1;
          }
        }
        v52 = *(_DWORD *)(a2 + 76);
        v53 = v49 + 1;
        v54 = v50 + 1;
        *(_DWORD *)(a2 + 64) = v53;
        if ( v53 == v52 )
          *(_DWORD *)(a2 + 64) = 0;
        if ( v52 == v51 )
        {
          v6 = 2;
          v5 = 1;
          v4 = 0;
          *(_DWORD *)(a2 + 68) = 0;
        }
        else
        {
          *(_DWORD *)(a2 + 68) = v51;
          v5 = v51 + 1;
          v6 = v51 + 2;
          v4 = v51;
        }
        if ( v52 == v54 )
          v54 = 0;
        --v47;
        *(_DWORD *)(a2 + 72) = v54;
      }
      while ( v47 );
    }
    a1[12] += 1 + v72;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 68);
    v5 = v4 + 1;
    v6 = v4 + 2;
    a1[12] += a3;
  }
  *(_DWORD *)(a2 + 28) = 2;
  *(_DWORD *)(a2 + 32) = 0;
  v7 = *(unsigned __int8 *)(a2 + v4 + 92);
  v8 = a2
     + 4
     * (((40799
        * (*(unsigned __int8 *)(a2 + v6 + 92) ^ (32 * (*(unsigned __int8 *)(a2 + v5 + 92) ^ (unsigned int)(32 * v7))))) >> 5)
      & 0x3FFF);
  v9 = v8 + 675840;
  v10 = *(_DWORD *)(v8 + 675924);
  if ( v10 )
  {
    v11 = v8 + 69632;
    v12 = *(_DWORD *)(v11 + 92);
    *(_DWORD *)(a2 + 4 * (v4 + 33814) + 4) = v12;
    *(_DWORD *)(v9 + 84) = v10 + 1;
    v13 = *(_DWORD *)(a2 + 12);
    v14 = v13 != 0;
    if ( v13 )
      v14 = v10 > v13;
    if ( !v14 )
      v13 = v10;
  }
  else
  {
    v12 = -1;
    v13 = 0;
    v11 = v8 + 69632;
    *(_DWORD *)(a2 + 4 * (v4 + 33814) + 4) = -1;
    *(_DWORD *)(v9 + 84) = 1;
  }
  *(_DWORD *)(v11 + 92) = v4;
  v15 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 40) = v7;
  if ( v15 <= 2 )
  {
    v27 = *(_DWORD *)(a2 + 4);
    v28 = *(_DWORD *)(a2 + 32);
    if ( !v15 )
      v13 = -1;
    v29 = v4 + 101376;
    if ( !v15 )
      *(_DWORD *)(a2 + 40) = v13;
    v15 = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a2 + 4 * (v29 + 22)) = v27 + 1;
    goto LABEL_31;
  }
  v16 = a2 + 92;
  v17 = v13 == 0;
  v18 = (unsigned __int8 *)(a2 + 92 + v4);
  v19 = v13 - 1;
  v20 = v18[1];
  v73 = a2 + 92 + v15 + v4;
  if ( v17 )
  {
    v15 = *(_DWORD *)(a2 + 28);
LABEL_93:
    v28 = *(_DWORD *)(a2 + 32);
    goto LABEL_91;
  }
  v21 = 2;
  v71 = v4;
  do
  {
    v22 = (unsigned __int8 *)(v16 + v12);
    if ( *(unsigned __int8 *)(v16 + v12 + v21 - 1) != v20 || v22[v21] != v18[v21] || *v22 != *v18 || v22[1] != v18[1] )
      goto LABEL_11;
    v23 = v22 + 2;
    for ( i = v18 + 3; v73 > (unsigned int)i; ++i )
    {
      v25 = *++v23;
      if ( *i != v25 )
        break;
    }
    v26 = i - v18;
    if ( v26 <= v21 )
      goto LABEL_11;
    *(_DWORD *)(a2 + 28) = v26;
    *(_DWORD *)(a2 + 48) = v12;
    if ( v15 == v26 )
    {
      v4 = v71;
      goto LABEL_85;
    }
    if ( v26 >= *(_DWORD *)(a2 + 16) || v26 > *(_DWORD *)(a2 + 4 * (v12 + 101398)) )
      break;
    v21 = v26;
    v20 = v18[v26 - 1];
LABEL_11:
    --v19;
    v12 = *(_DWORD *)(a2 + 135260 + 4 * v12);
  }
  while ( v19 != -1 );
  v15 = *(_DWORD *)(a2 + 28);
  v4 = v71;
  if ( v15 <= 2 )
    goto LABEL_93;
LABEL_85:
  v28 = *(_DWORD *)(a2 + 48);
  v70 = v28 >= v4;
  if ( v28 < v4 )
    v28 = v4 - v28;
  else
    v19 = *(_DWORD *)(a2 + 76);
  if ( v70 )
    v28 = v19 - v28 + v4;
  *(_DWORD *)(a2 + 32) = v28;
LABEL_91:
  v27 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4 * (v4 + 101398)) = v15;
LABEL_31:
  v30 = *(_DWORD *)(a2 + 84);
  v31 = *(_DWORD *)(a2 + 72);
  if ( v30 )
  {
    *(_DWORD *)(a2 + 84) = v30 - 1;
  }
  else
  {
    v69 = *(unsigned __int8 *)(a2 + v31 + 93) ^ (32 * *(unsigned __int8 *)(a2 + v31 + 92));
    --*(_DWORD *)(a2
                + 4 * (((40799 * (*(unsigned __int8 *)(a2 + v31 + 94) ^ (unsigned int)(32 * v69))) >> 5) & 0x3FFF)
                + 675924);
  }
  v32 = *(_DWORD *)(a2 + 44);
  a1[2] = v15;
  a1[3] = v28;
  v33 = *(char **)(v32 + 28);
  v34 = *(_DWORD *)(a2 + 64);
  if ( (unsigned int)v33 < *(_DWORD *)(v32 + 36) )
  {
    v14 = v27 > v34;
    *(_DWORD *)(v32 + 28) = v33 + 1;
    v36 = *v33;
    *(_BYTE *)(a2 + v34 + 92) = *v33;
    if ( !v14 )
      goto LABEL_38;
LABEL_58:
    *(_BYTE *)(*(_DWORD *)(a2 + 80) + v34) = v36;
    v34 = *(_DWORD *)(a2 + 64);
    v31 = *(_DWORD *)(a2 + 72);
    goto LABEL_38;
  }
  v35 = *(_DWORD *)(a2 + 36);
  if ( v35 )
    *(_DWORD *)(a2 + 36) = v35 - 1;
  v14 = v27 > v34;
  v36 = 0;
  *(_BYTE *)(a2 + v34 + 92) = 0;
  if ( v14 )
    goto LABEL_58;
LABEL_38:
  v37 = *(_DWORD *)(a2 + 76);
  v38 = v34 + 1;
  *(_DWORD *)(a2 + 64) = v38;
  v39 = v31 + 1;
  if ( v38 == v37 )
    *(_DWORD *)(a2 + 64) = 0;
  v40 = *(_DWORD *)(a2 + 68) + 1;
  if ( v37 == v40 )
    v40 = 0;
  *(_DWORD *)(a2 + 68) = v40;
  if ( v37 == v39 )
    *(_DWORD *)(a2 + 72) = 0;
  v41 = *(_DWORD *)(a2 + 40);
  if ( v37 != v39 )
    *(_DWORD *)(a2 + 72) = v39;
  if ( v41 < 0 )
  {
    a2 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    v39 = *(_DWORD *)(a2 + 36);
  }
  if ( v41 >= 0 )
  {
    a2 = ~v39;
    a1[1] = v39 + 1;
  }
  v42 = a1[11];
  a1[6] = a1[7] + a2;
  if ( v42 )
  {
    v43 = *(void (__fastcall **)(int, unsigned int, _DWORD, _DWORD))(v42 + 8);
    if ( v43 )
    {
      v44 = a1[12];
      if ( v44 > a1[14] )
      {
        v43(v42, v44, a1[13], 0);
        a1[14] += 1024;
      }
    }
  }
  return 0;
}
