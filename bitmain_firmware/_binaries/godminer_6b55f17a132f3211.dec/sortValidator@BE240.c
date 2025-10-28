int __fastcall sortValidator(_DWORD *a1, int a2)
{
  int v2; // r4
  int v4; // r11
  int v5; // r6
  int v6; // r0
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r3
  int v12; // r4
  int v14; // r4
  int *v15; // r10
  int v16; // r3
  int v17; // r6
  char *v18; // r9
  unsigned int v19; // t1
  __int64 v20; // r0
  int v21; // r5
  char *v22; // r2
  _BYTE *i; // r1
  char v24; // t1
  _BYTE *j; // r3
  int v26; // t1
  size_t v27; // r9
  char *v28; // r10
  int v29; // r8
  char *v30; // r5
  char *v31; // r11
  int v32; // r4
  char *v33; // r0
  _BYTE *v34; // r12
  char *v35; // lr
  char v36; // r3
  char v37; // t1
  char v38; // t1
  int v39; // r4
  char *v40; // r0
  int v41; // r4
  char *v42; // r1
  bool v43; // zf
  char *v44; // r3
  char *v45; // r2
  unsigned int *v46; // r9
  unsigned int v47; // t1
  int v48; // r10
  unsigned int *v49; // r9
  int v50; // r6
  unsigned int *v51; // r8
  char *v52; // r5
  unsigned int v53; // t1
  __int64 v54; // r0
  int v55; // r4
  unsigned int v56; // r4
  int v57; // r0
  void *v58; // r0
  char *v59; // r10
  size_t v60; // r9
  int v61; // r8
  char *v62; // r11
  char *v63; // r5
  int v64; // r4
  char *v65; // r0
  _BYTE *v66; // r12
  char *v67; // lr
  char v68; // r3
  char v69; // t1
  char v70; // t1
  int v71; // r4
  char *v72; // r0
  size_t v73; // r4
  char *v74; // r1
  char *v75; // r3
  int v76; // lr
  char *v77; // r6
  unsigned int v78; // r2
  unsigned int v79; // r3
  char *v80; // r0
  char *v81; // r4
  int v82; // r1
  void *v83; // r0
  void *v84; // r0
  int v85; // r1
  int v86; // r2
  int v87; // r3
  int v88; // r1
  int v89; // r2
  int v90; // r3
  char *v91; // r3
  int v92; // t1
  unsigned int v93; // [sp+Ch] [bp-5E4h]
  int v94; // [sp+Ch] [bp-5E4h]
  void *v95; // [sp+10h] [bp-5E0h]
  unsigned int v96; // [sp+10h] [bp-5E0h]
  int v97; // [sp+14h] [bp-5DCh]
  int v98; // [sp+14h] [bp-5DCh]
  int v99; // [sp+18h] [bp-5D8h]
  int v100; // [sp+1Ch] [bp-5D4h]
  int v101; // [sp+1Ch] [bp-5D4h]
  int v102; // [sp+20h] [bp-5D0h]
  char *ptr; // [sp+24h] [bp-5CCh]
  char *v104; // [sp+28h] [bp-5C8h]
  int v105; // [sp+28h] [bp-5C8h]
  unsigned int nmemb; // [sp+2Ch] [bp-5C4h]
  size_t nmemba; // [sp+2Ch] [bp-5C4h]
  size_t v108; // [sp+34h] [bp-5BCh]
  unsigned int *v109; // [sp+38h] [bp-5B8h]
  int v110; // [sp+3Ch] [bp-5B4h]
  int v111; // [sp+4Ch] [bp-5A4h]
  _BYTE s[30]; // [sp+50h] [bp-5A0h] BYREF
  char v113; // [sp+6Eh] [bp-582h] BYREF
  _BYTE v114[32]; // [sp+70h] [bp-580h] BYREF
  _BYTE v115[31]; // [sp+90h] [bp-560h] BYREF
  char v116; // [sp+AFh] [bp-541h] BYREF
  _BYTE src[1328]; // [sp+B0h] [bp-540h] BYREF
  char v118; // [sp+5ECh] [bp-4h] BYREF
  char v119; // [sp+5EFh] [bp-1h] BYREF
  _DWORD v120[508]; // [sp+5F0h] [bp+0h] BYREF
  int v121; // [sp+DECh] [bp+7FCh] BYREF
  _BYTE v122[2000]; // [sp+DF0h] [bp+800h] BYREF
  int v123; // [sp+15ECh] [bp+FFCh] BYREF

  v2 = a1[1];
  v4 = *a1;
  v5 = v2 + 1;
  v95 = (void *)a1[2];
  v6 = sub_121A48(*a1, v2 + 1);
  compare_size = 3;
  v93 = v6;
  expandArray(a2, ((v6 + 1) << v2) / 8, (int)v120, 2048, v6 + 1, 1u);
  memset(s, 0, sizeof(s));
  ptr = (char *)malloc(0x4400u);
  v104 = (char *)malloc(0x4400u);
  memset(v114, 0, 0x1Eu);
  v7 = v120;
  v8 = 0;
  while ( ++v8 != 512 )
  {
    v9 = *v7;
    v10 = v7[1];
    ++v7;
    if ( v9 == v10 )
    {
LABEL_7:
      v12 = 1;
      goto LABEL_8;
    }
    v11 = v8;
    while ( ++v11 != 512 )
    {
      if ( v9 == v120[v11] )
        goto LABEL_7;
    }
  }
  v14 = 0;
  v15 = (int *)&v118;
  v16 = v93 + 7;
  if ( (int)(v93 + 7) < 0 )
    v16 = v93 + 14;
  v17 = v5 * (v16 >> 3);
  v18 = ptr;
  v99 = sub_121A48(512, v4);
  v97 = v4 / 8;
  v102 = v17 + 4;
  v100 = v99 * v4 / 8;
  do
  {
    v19 = v15[1];
    ++v15;
    v20 = sub_121CDC(bswap32(v19), v99);
    v21 = v4 * HIDWORD(v20);
    sub_BE074(v95, v20, v122, v100);
    expandArray((int)&v122[v21 / 8], v4 / 8, (int)src, v17, v93, 0);
    if ( v17 )
    {
      v22 = src;
      for ( i = s; ; LOBYTE(v14) = *i )
      {
        v24 = *v22++;
        *i++ = v14 ^ v24;
        if ( v22 == &src[v17] )
          break;
      }
      v14 = s[0];
    }
    memcpy(v18, src, v17);
    *(_DWORD *)&v18[v17] = *v15;
    v18 += v102;
  }
  while ( v15 != &v121 );
  for ( j = s; ; ++j )
  {
    if ( v14 )
    {
      v12 = 2;
      goto LABEL_8;
    }
    if ( j == &s[29] )
      break;
    v26 = (unsigned __int8)j[1];
    v14 = v26;
  }
  v27 = 4;
  memset(s, 0, sizeof(s));
  v28 = v104;
  v111 = v4;
  v110 = 9;
  nmemb = 512;
  while ( 1 )
  {
    v29 = 0;
    qsort(ptr, nmemb, v17 + v27, sub_BE064);
    v105 = 2 * (v17 + v27);
    v30 = &ptr[v17 + v27 + v17];
    v31 = &ptr[v17];
    nmemb = ((nmemb - 1) >> 1) + 1;
    do
    {
      v32 = 2 * v29;
      if ( v17 )
      {
        v33 = &v30[-v17];
        v34 = v114;
        v35 = &v31[~v17];
        do
        {
          v37 = *v33++;
          v36 = v37;
          v38 = *++v35;
          *v34++ = v36 ^ v38;
        }
        while ( v30 != v33 );
      }
      ++v29;
      v39 = (v17 + v27 + v27) * (v32 >> 1);
      v40 = &v28[v39];
      v41 = v39 + v17;
      memcpy(v40, v114, v17);
      v42 = v31;
      v31 += v105;
      memcpy(&v28[v41], v42, v27);
      memcpy(&v28[v41 + v27], v30, v27);
      v30 += v105;
    }
    while ( v29 != nmemb );
    v27 *= 2;
    v43 = v110-- == 1;
    compare_size += 3;
    if ( v43 )
      break;
    v44 = ptr;
    ptr = v28;
    v28 = v44;
  }
  v45 = &v28[v17 - 4];
  v46 = (unsigned int *)&v121;
  v104 = v28;
  do
  {
    v47 = *((_DWORD *)v45 + 1);
    v45 += 4;
    v46[1] = bswap32(v47);
    ++v46;
  }
  while ( &v123 != (int *)v46 );
  v48 = 0;
  v108 = v17;
  v109 = v46;
  do
  {
    v49 = (unsigned int *)v122;
    v50 = 0;
    do
    {
      v50 += 2 << v48;
      sort_pair(v49, 1 << v48);
      v49 += 2 << v48;
    }
    while ( v50 < 512 );
    ++v48;
  }
  while ( v48 != 9 );
  v51 = (unsigned int *)&v121;
  v52 = v104;
  do
  {
    v53 = v51[1];
    ++v51;
    v54 = sub_121CDC(v53, v99);
    v55 = v111 * HIDWORD(v54);
    sub_BE074(v95, v54, src, v100);
    expandArray((int)&src[v55 / 8], v97, (int)v115, v108, v93, 0);
    v56 = *v51;
    memcpy(v52, v115, v108);
    *(_DWORD *)&v52[v108] = bswap32(v56);
    v57 = (int)v52;
    v52 += v102;
    v58 = abin2hex(v57, 34);
    free(v58);
  }
  while ( v51 != v109 );
  v59 = ptr;
  v60 = 4;
  v96 = 512;
  v101 = compare_size + 3;
  nmemba = compare_size + 30;
  while ( 1 )
  {
    v61 = 0;
    v98 = v108 + 2 * v60;
    v62 = &v104[v108];
    v63 = &v104[v108 + v98 - v60];
    v96 = ((v96 - 1) >> 1) + 1;
    v94 = 2 * (v98 - v60);
    do
    {
      v64 = 2 * v61;
      if ( v108 )
      {
        v65 = &v63[-v108];
        v66 = v114;
        v67 = &v62[~v108];
        do
        {
          v69 = *v65++;
          v68 = v69;
          v70 = *++v67;
          *v66++ = v68 ^ v70;
        }
        while ( v63 != v65 );
      }
      ++v61;
      v71 = v98 * (v64 >> 1);
      v72 = &v59[v71];
      v73 = v71 + v108;
      memcpy(v72, v114, v108);
      v74 = v62;
      v62 += v94;
      memcpy(&v59[v73], v74, v60);
      memcpy(&v59[v73 + v60], v63, v60);
      v63 += v94;
    }
    while ( v96 != v61 );
    v60 *= 2;
    compare_size = v101;
    v101 += 3;
    if ( nmemba == v101 )
      break;
    v75 = v104;
    v104 = v59;
    v59 = v75;
  }
  v76 = 0;
  v77 = &v59[v108];
  v78 = 0;
  v79 = 0;
  v80 = &v116;
  ptr = v59;
  do
  {
    if ( v79 <= 7 )
    {
      v81 = &v77[v76];
      v79 += 21;
      v82 = (unsigned __int8)v77[v76 + 3];
      v76 += 4;
      v78 = v82 | (v78 << 21) | ((unsigned __int8)v81[2] << 8) | ((v81[1] & 0x1F) << 16);
    }
    v79 -= 8;
    *++v80 = v78 >> v79;
  }
  while ( &v119 != v80 );
  v83 = abin2hex((int)src, 1344);
  free(v83);
  v84 = abin2hex((int)v59, v98);
  free(v84);
  v85 = *((_DWORD *)v59 + 1);
  v86 = *((_DWORD *)v59 + 2);
  v87 = *((_DWORD *)v59 + 3);
  *(_DWORD *)s = *(_DWORD *)v59;
  *(_DWORD *)&s[4] = v85;
  *(_DWORD *)&s[8] = v86;
  *(_DWORD *)&s[12] = v87;
  v88 = *((_DWORD *)v59 + 5);
  v89 = *((_DWORD *)v59 + 6);
  v90 = *((_DWORD *)v59 + 7);
  *(_DWORD *)&s[16] = *((_DWORD *)v59 + 4);
  *(_DWORD *)&s[20] = v88;
  *(_DWORD *)&s[24] = v89;
  *(_WORD *)&s[28] = v90;
  v91 = s;
  while ( 1 )
  {
    v92 = (unsigned __int8)*v91++;
    v12 = v92;
    if ( v92 )
      break;
    if ( &v113 == v91 )
      goto LABEL_8;
  }
  v12 = 3;
LABEL_8:
  free(ptr);
  free(v104);
  return v12;
}
