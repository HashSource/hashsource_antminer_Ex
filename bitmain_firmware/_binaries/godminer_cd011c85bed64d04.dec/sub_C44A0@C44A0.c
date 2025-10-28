int __fastcall sub_C44A0(_DWORD *a1, int a2)
{
  __int64 *v4; // r3
  __int64 *v5; // lr
  _DWORD *v6; // r8
  __int64 v7; // r0
  __int64 **v8; // r12
  __int64 v9; // t1
  __int64 v10; // t1
  int v11; // r2
  int v12; // r7
  int v13; // r1
  int v14; // r5
  char *v15; // r12
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r3
  unsigned int v20; // r8
  int v21; // r5
  int v22; // r3
  int v23; // r6
  unsigned int v24; // r4
  unsigned __int64 v25; // kr48_8
  unsigned int v26; // r8
  unsigned __int64 v27; // kr50_8
  unsigned int v28; // r5
  unsigned int v29; // r3
  int v30; // r5
  unsigned __int64 v31; // kr58_8
  unsigned int v32; // r0
  unsigned int v33; // r4
  unsigned int v34; // r2
  int v35; // r4
  int v36; // r0
  unsigned __int64 v37; // kr60_8
  __int64 v38; // kr68_8
  unsigned int v39; // r6
  __int64 v40; // r8
  unsigned int v41; // r4
  unsigned int v42; // kr14_4
  unsigned __int64 v43; // kr78_8
  unsigned int v44; // r1
  unsigned int v45; // r12
  unsigned __int64 v46; // kr80_8
  unsigned int v47; // r5
  unsigned int v48; // r7
  unsigned int v49; // r10
  unsigned __int64 v50; // kr90_8
  unsigned int v51; // r0
  unsigned int v52; // lr
  unsigned int v53; // r1
  int v54; // r0
  int v55; // r1
  unsigned int v56; // r2
  unsigned int v57; // r5
  unsigned __int64 v58; // kr98_8
  unsigned __int64 v59; // krA0_8
  int v60; // lr
  unsigned int v61; // r6
  unsigned int v62; // r10
  unsigned __int64 v63; // krA8_8
  unsigned int v64; // r4
  unsigned int v65; // r1
  int v66; // r6
  unsigned int v67; // r0
  int v68; // r12
  unsigned int v69; // r3
  __int64 v70; // r0
  unsigned int v71; // lr
  unsigned int v72; // r4
  unsigned __int64 v73; // krB8_8
  signed __int64 v74; // r0
  unsigned int v75; // r2
  unsigned __int64 v76; // krC0_8
  unsigned int v77; // lr
  unsigned int v78; // r4
  int v79; // lr
  unsigned int v80; // r4
  unsigned int v81; // r2
  unsigned int v82; // r6
  unsigned __int64 v83; // krD8_8
  int v84; // r12
  unsigned int v85; // r4
  unsigned int v86; // r2
  int v87; // r2
  unsigned __int64 v88; // krE0_8
  unsigned int v89; // r12
  unsigned int v90; // r3
  unsigned int v91; // r12
  int v92; // r2
  unsigned int v93; // r10
  int v94; // r6
  unsigned int v95; // r12
  unsigned int v96; // r3
  unsigned int v97; // r6
  unsigned __int64 v98; // kr108_8
  unsigned int v99; // r2
  int v100; // r6
  unsigned int v101; // r12
  unsigned int v102; // r5
  unsigned __int64 v103; // kr110_8
  unsigned int v104; // r5
  unsigned int v105; // r5
  unsigned __int64 v106; // kr118_8
  unsigned int v107; // lr
  int v108; // r2
  unsigned int v109; // r5
  unsigned int v110; // r6
  bool v111; // zf
  int v112; // r2
  unsigned __int64 *v113; // r3
  unsigned __int64 v114; // r4
  unsigned __int64 v115; // r0
  __int64 *v116; // r6
  __int64 *v117; // r2
  unsigned __int64 v118; // t1
  int v119; // r12
  unsigned __int8 *v121; // [sp+4h] [bp-258h]
  unsigned __int64 v122; // [sp+8h] [bp-254h]
  unsigned int v123; // [sp+10h] [bp-24Ch]
  unsigned int v124; // [sp+10h] [bp-24Ch]
  unsigned int v125; // [sp+14h] [bp-248h]
  unsigned int v126; // [sp+14h] [bp-248h]
  unsigned int v127; // [sp+14h] [bp-248h]
  unsigned int v128; // [sp+14h] [bp-248h]
  int v129; // [sp+18h] [bp-244h]
  unsigned __int64 v130; // [sp+1Ch] [bp-240h]
  unsigned int v131; // [sp+1Ch] [bp-240h]
  __int64 v132; // [sp+20h] [bp-23Ch]
  __int64 v133; // [sp+24h] [bp-238h]
  unsigned int v134; // [sp+28h] [bp-234h]
  unsigned int v135; // [sp+2Ch] [bp-230h]
  unsigned int v136; // [sp+2Ch] [bp-230h]
  __int64 v137; // [sp+30h] [bp-22Ch]
  __int64 v138; // [sp+30h] [bp-22Ch]
  __int64 v139; // [sp+38h] [bp-224h]
  unsigned __int64 v140; // [sp+38h] [bp-224h]
  __int64 v141; // [sp+40h] [bp-21Ch]
  __int64 v142; // [sp+40h] [bp-21Ch]
  unsigned int v143; // [sp+48h] [bp-214h]
  int v144; // [sp+48h] [bp-214h]
  unsigned int v145; // [sp+48h] [bp-214h]
  int v146; // [sp+4Ch] [bp-210h]
  int v147; // [sp+4Ch] [bp-210h]
  __int64 v148; // [sp+50h] [bp-20Ch]
  unsigned int v149; // [sp+58h] [bp-204h]
  int v150; // [sp+58h] [bp-204h]
  unsigned int v151; // [sp+5Ch] [bp-200h]
  __int64 v152; // [sp+60h] [bp-1FCh]
  int v153; // [sp+60h] [bp-1FCh]
  int v154; // [sp+64h] [bp-1F8h]
  unsigned __int64 v155; // [sp+68h] [bp-1F4h]
  unsigned __int64 v156; // [sp+68h] [bp-1F4h]
  __int64 v157; // [sp+70h] [bp-1ECh]
  __int64 v158; // [sp+70h] [bp-1ECh]
  __int64 v159; // [sp+78h] [bp-1E4h]
  unsigned __int64 v160; // [sp+80h] [bp-1DCh]
  int v161; // [sp+84h] [bp-1D8h]
  int v162; // [sp+88h] [bp-1D4h]
  int v163; // [sp+8Ch] [bp-1D0h]
  __int64 *v164; // [sp+90h] [bp-1CCh] BYREF
  __int64 *v165; // [sp+94h] [bp-1C8h]
  unsigned __int64 v166; // [sp+98h] [bp-1C4h]
  __int64 v167; // [sp+A0h] [bp-1BCh] BYREF
  int v168; // [sp+A8h] [bp-1B4h]
  unsigned int v169; // [sp+ACh] [bp-1B0h]
  unsigned __int64 v170; // [sp+B0h] [bp-1ACh]
  unsigned int v171; // [sp+B8h] [bp-1A4h]
  int v172; // [sp+BCh] [bp-1A0h]
  __int64 v173; // [sp+C0h] [bp-19Ch]
  __int64 v174; // [sp+C8h] [bp-194h]
  __int64 v175; // [sp+D0h] [bp-18Ch]
  __int64 v176; // [sp+D8h] [bp-184h]
  unsigned int v177; // [sp+E0h] [bp-17Ch]
  unsigned int v178; // [sp+E4h] [bp-178h]
  unsigned __int64 v179; // [sp+E8h] [bp-174h]
  __int64 v180; // [sp+F0h] [bp-16Ch]
  int v181; // [sp+F8h] [bp-164h]
  int v182; // [sp+FCh] [bp-160h]
  __int64 v183; // [sp+100h] [bp-15Ch]
  __int64 v184; // [sp+108h] [bp-154h]
  _QWORD v185[16]; // [sp+110h] [bp-14Ch] BYREF
  char v186; // [sp+190h] [bp-CCh] BYREF
  _BYTE dest[192]; // [sp+198h] [bp-C4h] BYREF
  char v188; // [sp+258h] [bp-4h] BYREF

  memcpy(dest, &unk_142558, sizeof(dest));
  v4 = (__int64 *)(a1 + 32);
  v5 = (__int64 *)&unk_142620;
  v165 = (__int64 *)(a1 + 32);
  v6 = a1;
  v7 = 0x6A09E667F3BCC908LL;
  v8 = &v164;
  while ( 1 )
  {
    v10 = *v4++;
    *((_QWORD *)v8 + 1) = v10;
    v8 += 2;
    *((_QWORD *)v8 + 8) = v7;
    if ( a1 + 48 == (_DWORD *)v4 )
      break;
    v9 = *v5++;
    v7 = v9;
  }
  v11 = a1[49];
  v12 = a1[50];
  v13 = v181 ^ a1[48];
  v164 = v4;
  v14 = a1[51];
  v143 = v13;
  LODWORD(v141) = v183 ^ v12;
  LODWORD(v183) = v183 ^ v12;
  HIDWORD(v141) = HIDWORD(v183) ^ v14;
  HIDWORD(v183) ^= v14;
  v146 = v182 ^ v11;
  v181 = v13;
  v182 ^= v11;
  v139 = v184;
  if ( a2 )
  {
    v139 = ~v184;
    v184 = ~v184;
  }
  v15 = (char *)v185;
  do
  {
    v16 = *((unsigned __int8 *)v6 + 2);
    v6 += 2;
    v17 = (v16 << 16)
        ^ (*((unsigned __int8 *)v6 - 7) << 8)
        ^ *((unsigned __int8 *)v6 - 8)
        ^ (*((unsigned __int8 *)v6 - 5) << 24);
    v18 = *((unsigned __int8 *)v6 - 3);
    v19 = *((unsigned __int8 *)v6 - 4);
    *((_DWORD *)v15 + 2) = v17;
    v15 += 8;
    *((_DWORD *)v15 + 1) = v19
                         ^ (v18 << 8)
                         ^ (*((unsigned __int8 *)v6 - 2) << 16)
                         ^ (*((unsigned __int8 *)v6 - 1) << 24);
  }
  while ( &v186 != v15 );
  v122 = v166;
  v121 = dest;
  v20 = v171;
  v123 = v176;
  v21 = v172;
  v148 = v167;
  v137 = v173;
  v149 = v177;
  v125 = v178;
  v129 = v168;
  v151 = v169;
  v152 = v174;
  v130 = v179;
  v135 = HIDWORD(v176);
  v155 = v170;
  v157 = v175;
  v159 = v185[0];
  v133 = v180;
  do
  {
    v22 = *v121;
    v23 = v185[v22 + 1];
    v24 = v143 ^ (v20 + v23 + v122);
    v25 = __PAIR64__(HIDWORD(v185[v22 + 1]) + (unsigned int)__CFADD__(v20, v23) + v21, v20 + v23) + v122;
    v26 = v20
        ^ ((v146
          ^ ((__PAIR64__(HIDWORD(v185[v22 + 1]) + (unsigned int)__CFADD__(v20, v23) + v21, v20 + v23) + v122) >> 32))
         + v123);
    v27 = __PAIR64__(v24, (unsigned int)v146 ^ HIDWORD(v25)) + __PAIR64__(v135, v123);
    v28 = v21 ^ ((__PAIR64__(v24, (unsigned int)v146 ^ HIDWORD(v25)) + __PAIR64__(v135, v123)) >> 32);
    v29 = HIBYTE(v28);
    v30 = HIBYTE(v26) | (v28 << 8);
    v31 = v25 + v185[v121[1] + 1] + __PAIR64__(v29 | (v26 << 8), v30);
    v32 = v146 ^ HIDWORD(v25) ^ v31;
    v33 = v24 ^ HIDWORD(v31);
    v144 = v29 | (v26 << 8);
    v34 = HIWORD(v33);
    v35 = HIWORD(v32) | (v33 << 16);
    v36 = v34 | (v32 << 16);
    v37 = v27 + __PAIR64__(v36, v35);
    v136 = HIDWORD(v37);
    v124 = v37;
    v147 = v25 + LODWORD(v185[v121[1] + 1]) + v30;
    v161 = v35;
    v162 = v36;
    v38 = v137 + v185[v121[2] + 1] + v148;
    HIDWORD(v40) = (__PAIR64__((unsigned int)v141 ^ (unsigned int)v38, HIDWORD(v141) ^ HIDWORD(v38))
                  + __PAIR64__(v125, v149)) >> 32;
    v39 = (HIDWORD(v141) ^ HIDWORD(v38)) + v149;
    v41 = ((unsigned int)(HIDWORD(v40) ^ HIDWORD(v137)) >> 24) | ((v39 ^ (unsigned int)v137) << 8);
    v42 = (__int64)((__PAIR64__((unsigned int)v141 ^ (unsigned int)v38, HIDWORD(v141) ^ HIDWORD(v38))
                   + __PAIR64__(v125, v149))
                  ^ v137) >> 24;
    v43 = v38 + v185[v121[3] + 1] + __PAIR64__(v41, v42);
    v44 = HIDWORD(v141) ^ HIDWORD(v38) ^ v43;
    v45 = v141 ^ v38 ^ HIDWORD(v43);
    LODWORD(v142) = v30 ^ v124;
    LODWORD(v40) = HIWORD(v44) | (v45 << 16);
    v150 = v40;
    HIDWORD(v142) = v144 ^ v136;
    v163 = HIWORD(v45) | (v44 << 16);
    v138 = __PAIR64__(v163, v39) + v40;
    v46 = v152 + v185[v121[4] + 1] + __PAIR64__(v151, v129);
    v47 = (__PAIR64__((unsigned int)v139 ^ (unsigned int)v46, HIDWORD(v139) ^ HIDWORD(v46)) + v130) >> 32;
    v48 = (HIDWORD(v139) ^ HIDWORD(v46)) + v130;
    HIDWORD(v40) = (__int64)((__PAIR64__((unsigned int)v139 ^ (unsigned int)v46, HIDWORD(v139) ^ HIDWORD(v46)) + v130)
                           ^ v152) >> 24;
    v49 = ((v47 ^ HIDWORD(v152)) >> 24) | ((v48 ^ (unsigned int)v152) << 8);
    v50 = v46 + v185[v121[5] + 1];
    v51 = HIDWORD(v139) ^ HIDWORD(v46) ^ (v50 + HIDWORD(v40));
    v52 = v139 ^ v46 ^ ((v50 + __PAIR64__(v49, HIDWORD(v40))) >> 32);
    v53 = HIWORD(v51);
    v140 = v50 + __PAIR64__(v49, HIDWORD(v40));
    v54 = HIWORD(v52) | (v51 << 16);
    v55 = v53 | (v52 << 16);
    v56 = v41 ^ HIDWORD(v138);
    v131 = v49;
    v58 = __PAIR64__(v47, v48) + __PAIR64__(v54, v55);
    v57 = (__PAIR64__(v47, v48) + __PAIR64__(v54, v55)) >> 32;
    v153 = v55;
    v154 = v54;
    v59 = v157 + v185[v121[6] + 1] + v155;
    v60 = v121[8];
    LODWORD(v132) = (HIDWORD(v159) ^ HIDWORD(v59)) + v133;
    v61 = ((__PAIR64__((unsigned int)v159 ^ (unsigned int)v59, HIDWORD(v159) ^ HIDWORD(v59)) + v133) >> 32)
        ^ HIDWORD(v157);
    HIDWORD(v132) = (__PAIR64__((unsigned int)v159 ^ (unsigned int)v59, HIDWORD(v159) ^ HIDWORD(v59)) + v133) >> 32;
    v62 = (((unsigned int)v132 ^ (unsigned int)v157) >> 24) | (v61 << 8);
    v63 = v59 + v185[v121[7] + 1];
    v64 = HIBYTE(v61) | (((unsigned int)v132 ^ (unsigned int)v157) << 8);
    v65 = ((v159 ^ v59) >> 32) ^ (v63 + v62);
    v66 = v185[v60 + 1];
    v67 = v159 ^ v59 ^ ((v63 + __PAIR64__(v64, v62)) >> 32);
    v134 = v64;
    v68 = HIDWORD(v185[v60 + 1]);
    v156 = v63 + __PAIR64__(v64, v62);
    v69 = HIWORD(v67);
    LODWORD(v70) = HIWORD(v65) | (v67 << 16);
    HIDWORD(v70) = v69 | (v65 << 16);
    v71 = (2 * v56) | ((v42 ^ (unsigned int)v138) >> 31);
    v72 = (2 * (v42 ^ v138)) | (v56 >> 31);
    v126 = v132 + v70;
    v145 = (unsigned __int64)(v132 + v70) >> 32;
    v73 = __PAIR64__(v68 + (unsigned int)__CFADD__(v147, v66) + HIDWORD(v31), v147 + v66) + __PAIR64__(v71, v72);
    v74 = v70 ^ (__PAIR64__(v68 + (unsigned int)__CFADD__(v147, v66) + HIDWORD(v31), v147 + v66) + __PAIR64__(v71, v72));
    v75 = v131 ^ v57;
    v76 = __PAIR64__(v57, v58) + __PAIR64__(v74, HIDWORD(v74));
    v77 = v71 ^ ((__PAIR64__(v57, v58) + __PAIR64__(v74, HIDWORD(v74))) >> 32);
    v78 = v72 ^ (v58 + HIDWORD(v74));
    LODWORD(v158) = HIBYTE(v78) | (v77 << 8);
    v79 = HIBYTE(v77) | (v78 << 8);
    v122 = v73 + v185[v121[9] + 1] + __PAIR64__(v79, v158);
    HIDWORD(v158) = v79;
    HIDWORD(v74) ^= v122;
    LODWORD(v74) = v74 ^ HIDWORD(v122);
    HIDWORD(v132) = v62 ^ v126;
    LODWORD(v159) = HIWORD(HIDWORD(v74)) | ((_DWORD)v74 << 16);
    HIDWORD(v159) = v74 >> 16;
    v130 = v76 + ((v74 << 16) | HIWORD(HIDWORD(v74)));
    v80 = (2 * (HIDWORD(v40) ^ v58)) | (v75 >> 31);
    v81 = (2 * v75) | ((HIDWORD(v40) ^ (unsigned int)v58) >> 31);
    v82 = v134 ^ v145;
    v83 = v43 + v185[v121[10] + 1] + __PAIR64__(v81, v80);
    v84 = v161 ^ v83;
    HIDWORD(v74) = v126 + (v162 ^ HIDWORD(v83));
    v85 = v80 ^ HIDWORD(v74);
    v86 = v81
        ^ ((__PAIR64__(v145, v126) + __PAIR64__(v161 ^ (unsigned int)v83, (unsigned int)v162 ^ HIDWORD(v83))) >> 32);
    v127 = (__PAIR64__(v145, v126) + __PAIR64__(v161 ^ (unsigned int)v83, (unsigned int)v162 ^ HIDWORD(v83))) >> 32;
    HIDWORD(v40) = HIBYTE(v86);
    v87 = HIBYTE(v85) | (v86 << 8);
    v88 = v83 + v185[v121[11] + 1];
    HIDWORD(v40) |= v85 << 8;
    LODWORD(v74) = v162 ^ HIDWORD(v83) ^ (v88 + v87);
    LODWORD(v40) = v88 + v87;
    v160 = __PAIR64__(HIDWORD(v40), v87);
    HIDWORD(v148) = (v88 + __PAIR64__(HIDWORD(v40), v87)) >> 32;
    v89 = v84 ^ HIDWORD(v148);
    v90 = HIWORD(v89);
    v91 = WORD1(v74) | (v89 << 16);
    LODWORD(v74) = v90 | ((_DWORD)v74 << 16);
    v92 = (2 * (v134 ^ v145)) | (HIDWORD(v132) >> 31);
    v93 = HIDWORD(v74) + v91;
    HIDWORD(v133) = (__PAIR64__(v127, HIDWORD(v74)) + __PAIR64__(v74, v91)) >> 32;
    LODWORD(v148) = v40;
    v94 = (2 * HIDWORD(v132)) | (v82 >> 31);
    v143 = v91;
    v95 = v150 ^ (v140 + LODWORD(v185[v121[12] + 1]) + v94);
    LODWORD(v40) = (v140 + v185[v121[12] + 1] + __PAIR64__(v92, v94)) >> 32;
    v96 = v140 + LODWORD(v185[v121[12] + 1]) + v94;
    v146 = v74;
    LODWORD(v74) = v163 ^ v40;
    LODWORD(v133) = v93;
    v97 = v94 ^ (v124 + (v163 ^ v40));
    v98 = __PAIR64__(v136, v124) + __PAIR64__(v95, v163 ^ (unsigned int)v40);
    v99 = v92 ^ ((__PAIR64__(v136, v124) + __PAIR64__(v95, v163 ^ (unsigned int)v40)) >> 32);
    HIDWORD(v40) = HIBYTE(v97) | (v99 << 8);
    v100 = HIBYTE(v99) | (v97 << 8);
    v129 = v96 + LODWORD(v185[v121[13] + 1]) + HIDWORD(v40);
    v101 = v95 ^ ((__PAIR64__(v40, v96) + v185[v121[13] + 1] + __PAIR64__(v100, HIDWORD(v40))) >> 32);
    v151 = (__PAIR64__(v40, v96) + v185[v121[13] + 1] + __PAIR64__(v100, HIDWORD(v40))) >> 32;
    LODWORD(v40) = (2 * v142) | (HIDWORD(v142) >> 31);
    v102 = v142 >> 31;
    LODWORD(v74) = v74 ^ v129;
    LODWORD(v141) = WORD1(v74) | (v101 << 16);
    v123 = v98 + v141;
    HIDWORD(v141) = HIWORD(v101) | ((_DWORD)v74 << 16);
    v103 = v156 + v185[v121[14] + 1] + __PAIR64__(v102, v40);
    v135 = (v98 + v141) >> 32;
    LODWORD(v40) = v40 ^ (v138 + (v154 ^ HIDWORD(v103)));
    v128 = v138 + (v154 ^ HIDWORD(v103));
    v104 = v102 ^ ((v138 + __PAIR64__(v153 ^ (unsigned int)v103, (unsigned int)v154 ^ HIDWORD(v103))) >> 32);
    LODWORD(v138) = (v138 + __PAIR64__(v153 ^ (unsigned int)v103, (unsigned int)v154 ^ HIDWORD(v103))) >> 32;
    HIDWORD(v74) = HIBYTE(v104);
    v105 = BYTE3(v40) | (v104 << 8);
    LODWORD(v40) = HIDWORD(v74) | ((_DWORD)v40 << 8);
    v106 = v103 + v185[v121[15] + 1] + __PAIR64__(v40, v105);
    LODWORD(v74) = v154 ^ HIDWORD(v103) ^ v106;
    v107 = v153 ^ v103 ^ HIDWORD(v106);
    v155 = v106;
    LODWORD(v139) = WORD1(v74) | (v107 << 16);
    HIDWORD(v139) = HIWORD(v107) | ((_DWORD)v74 << 16);
    v108 = v128 + v139;
    HIDWORD(v137) = (__int64)(v158 ^ v130) >> 31;
    v149 = v128 + v139;
    v125 = (__PAIR64__(v138, v128) + v139) >> 32;
    LODWORD(v137) = (2 * (v158 ^ v130)) | ((unsigned int)(HIDWORD(v158) ^ HIDWORD(v130)) >> 31);
    v109 = v105 ^ v108;
    v110 = v100 ^ v135;
    v152 = 2 * (v160 ^ v133);
    v111 = &v188 == (char *)(v121 + 16);
    v121 += 16;
    HIDWORD(v40) ^= v98 + (_DWORD)v141;
    LODWORD(v152) = (2 * (v160 ^ v93)) | ((unsigned int)(HIDWORD(v160) ^ HIDWORD(v133)) >> 31);
    LODWORD(v40) = v40 ^ v125;
    HIDWORD(v157) = (2 * v110) | (HIDWORD(v40) >> 31);
    v112 = 2 * v40;
    v20 = (2 * v109) | ((unsigned int)v40 >> 31);
    LODWORD(v157) = (2 * HIDWORD(v40)) | (v110 >> 31);
    v21 = v112 | (v109 >> 31);
  }
  while ( !v111 );
  v172 = v21;
  v113 = (unsigned __int64 *)&v167;
  v114 = v122;
  v115 = v98 + v141;
  v181 = v143;
  v166 = v122;
  v171 = v20;
  v182 = v146;
  v176 = v98 + v141;
  v167 = v148;
  v178 = v125;
  v173 = v137;
  v183 = v141;
  v177 = v149;
  v168 = v129;
  v169 = v151;
  v174 = v152;
  v116 = v164;
  v184 = v139;
  v179 = v130;
  v170 = v106;
  v175 = v157;
  v185[0] = v159;
  v180 = v133;
  v117 = v165;
  while ( 1 )
  {
    v119 = *((_DWORD *)v117 + 1);
    LODWORD(v115) = v115 ^ v114 ^ *(_DWORD *)v117;
    *(_DWORD *)v117++ = v115;
    *((_DWORD *)v117 - 1) = HIDWORD(v115) ^ HIDWORD(v114) ^ v119;
    if ( v116 == v117 )
      break;
    v118 = *v113++;
    v114 = v118;
    v115 = v113[7];
  }
  return v115;
}
