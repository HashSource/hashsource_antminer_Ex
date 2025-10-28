void *__fastcall sph_blake384_0(int a1, char *a2, size_t a3)
{
  int v3; // r5
  size_t v4; // r4
  void *v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r12
  unsigned int v8; // r11
  unsigned int v9; // r5
  _DWORD *v10; // r11
  int v11; // r7
  int v12; // r1
  int v13; // r4
  int v14; // lr
  int v15; // r3
  _BYTE *v16; // r1
  char *v17; // r10
  _BYTE *v18; // r2
  int v19; // r12
  int v20; // r3
  _BYTE *v21; // r5
  int v22; // r0
  int v23; // r7
  __int64 *v24; // r9
  _BYTE *v25; // r1
  int v26; // r12
  int v27; // r3
  int v28; // r7
  __int64 v29; // r2
  __int64 v30; // r4
  unsigned int v31; // lr
  int v32; // r9
  unsigned __int64 v33; // kr78_8
  unsigned int v34; // kr80_4
  unsigned int v35; // lr
  unsigned int v36; // r9
  unsigned __int64 v37; // kr90_8
  unsigned int v38; // r9
  unsigned __int64 v39; // kr98_8
  unsigned int v40; // r0
  int v41; // r0
  unsigned int v42; // kr14_4
  unsigned int v43; // r2
  unsigned int v44; // lr
  __int64 v45; // krA0_8
  unsigned int v46; // r2
  int v47; // r6
  int v48; // lr
  unsigned int v49; // r12
  unsigned int v50; // r0
  unsigned __int64 v51; // krA8_8
  unsigned int v52; // r6
  unsigned int v53; // r10
  unsigned int v54; // r3
  unsigned int v55; // r0
  int v56; // r10
  int v57; // r8
  int v58; // r6
  unsigned __int64 v59; // krB0_8
  unsigned int v60; // r12
  unsigned int v61; // r9
  unsigned int v62; // r10
  unsigned int v63; // r3
  __int64 v64; // r6
  unsigned int v65; // kr2C_4
  unsigned int v66; // r1
  unsigned int v67; // r9
  int v68; // r12
  unsigned int v69; // r9
  int v70; // r10
  unsigned __int64 v71; // krC0_8
  unsigned int v72; // r1
  unsigned int v73; // r9
  unsigned int v74; // r0
  unsigned __int64 v75; // krC8_8
  unsigned int v76; // kr40_4
  unsigned int v77; // r9
  __int64 v78; // r0
  unsigned int v79; // lr
  unsigned __int64 v80; // krE8_8
  unsigned int v81; // r10
  unsigned int v82; // lr
  unsigned int v83; // r9
  unsigned int v84; // r2
  unsigned int v85; // r8
  unsigned int v86; // lr
  unsigned __int64 v87; // krF0_8
  unsigned __int64 v88; // krF8_8
  unsigned __int64 v89; // kr100_8
  unsigned int v90; // r12
  unsigned int v91; // lr
  unsigned __int64 v92; // kr118_8
  unsigned int v93; // lr
  unsigned __int64 v94; // kr120_8
  __int64 v95; // r2
  int v96; // r8
  unsigned __int64 v97; // kr128_8
  unsigned __int64 v98; // kr130_8
  unsigned int v99; // lr
  void *result; // r0
  unsigned __int64 v102; // [sp+4h] [bp-2A0h]
  unsigned int v103; // [sp+4h] [bp-2A0h]
  unsigned int v104; // [sp+8h] [bp-29Ch]
  __int64 v105; // [sp+Ch] [bp-298h]
  __int64 v106; // [sp+14h] [bp-290h]
  unsigned __int64 v107; // [sp+14h] [bp-290h]
  unsigned __int64 v108; // [sp+1Ch] [bp-288h]
  unsigned int v109; // [sp+24h] [bp-280h]
  unsigned int v110; // [sp+24h] [bp-280h]
  unsigned int v111; // [sp+24h] [bp-280h]
  unsigned int v112; // [sp+28h] [bp-27Ch]
  unsigned int v113; // [sp+2Ch] [bp-278h]
  unsigned int v114; // [sp+2Ch] [bp-278h]
  unsigned __int64 v115; // [sp+30h] [bp-274h]
  __int64 v116; // [sp+30h] [bp-274h]
  __int64 v117; // [sp+38h] [bp-26Ch]
  unsigned int v118; // [sp+38h] [bp-26Ch]
  unsigned __int64 v119; // [sp+40h] [bp-264h]
  unsigned int v120; // [sp+40h] [bp-264h]
  __int64 v121; // [sp+48h] [bp-25Ch]
  __int64 v122; // [sp+48h] [bp-25Ch]
  int v123; // [sp+50h] [bp-254h]
  unsigned int v124; // [sp+50h] [bp-254h]
  __int64 v125; // [sp+54h] [bp-250h]
  unsigned __int64 v126; // [sp+5Ch] [bp-248h]
  __int64 v127; // [sp+5Ch] [bp-248h]
  __int64 v128; // [sp+64h] [bp-240h]
  int v129; // [sp+64h] [bp-240h]
  unsigned __int64 v130; // [sp+6Ch] [bp-238h]
  unsigned int v131; // [sp+6Ch] [bp-238h]
  unsigned int v132; // [sp+70h] [bp-234h]
  __int64 v133; // [sp+74h] [bp-230h]
  int v134; // [sp+74h] [bp-230h]
  int v135; // [sp+78h] [bp-22Ch]
  __int64 v136; // [sp+7Ch] [bp-228h]
  int v137; // [sp+7Ch] [bp-228h]
  unsigned int v138; // [sp+7Ch] [bp-228h]
  int v139; // [sp+80h] [bp-224h]
  unsigned int v140; // [sp+84h] [bp-220h]
  char *v141; // [sp+84h] [bp-220h]
  unsigned int v142; // [sp+88h] [bp-21Ch]
  unsigned int v143; // [sp+8Ch] [bp-218h]
  unsigned int v144; // [sp+90h] [bp-214h]
  unsigned __int64 v145; // [sp+94h] [bp-210h]
  unsigned __int64 v146; // [sp+9Ch] [bp-208h]
  unsigned __int64 v147; // [sp+A4h] [bp-200h]
  unsigned int v148; // [sp+ACh] [bp-1F8h]
  unsigned int v149; // [sp+B0h] [bp-1F4h]
  unsigned __int64 v150; // [sp+B4h] [bp-1F0h]
  int v151; // [sp+BCh] [bp-1E8h]
  unsigned int v152; // [sp+C0h] [bp-1E4h]
  unsigned int v153; // [sp+C4h] [bp-1E0h]
  int v154; // [sp+C8h] [bp-1DCh]
  int v155; // [sp+CCh] [bp-1D8h]
  int v156; // [sp+D0h] [bp-1D4h]
  unsigned int v157; // [sp+D4h] [bp-1D0h]
  __int64 v158; // [sp+D8h] [bp-1CCh]
  unsigned int v159; // [sp+E0h] [bp-1C4h]
  int v160; // [sp+E4h] [bp-1C0h]
  int v161; // [sp+E8h] [bp-1BCh]
  unsigned __int64 v162; // [sp+ECh] [bp-1B8h]
  __int64 v163; // [sp+F4h] [bp-1B0h]
  __int64 v164; // [sp+FCh] [bp-1A8h]
  unsigned int v165; // [sp+104h] [bp-1A0h]
  int v166; // [sp+108h] [bp-19Ch]
  int v167; // [sp+10Ch] [bp-198h]
  unsigned __int64 v168; // [sp+110h] [bp-194h]
  unsigned __int64 v169; // [sp+118h] [bp-18Ch]
  unsigned __int64 v170; // [sp+120h] [bp-184h]
  unsigned __int64 v171; // [sp+128h] [bp-17Ch]
  unsigned __int64 v172; // [sp+130h] [bp-174h]
  unsigned __int64 v173; // [sp+138h] [bp-16Ch]
  unsigned __int64 v174; // [sp+140h] [bp-164h]
  __int64 v175; // [sp+148h] [bp-15Ch]
  unsigned __int64 v176; // [sp+150h] [bp-154h]
  __int64 v177; // [sp+158h] [bp-14Ch]
  unsigned __int64 v178; // [sp+160h] [bp-144h]
  unsigned int v179; // [sp+164h] [bp-140h]
  unsigned __int64 v180; // [sp+168h] [bp-13Ch]
  unsigned int v181; // [sp+170h] [bp-134h]
  unsigned int v182; // [sp+170h] [bp-134h]
  __int64 v183; // [sp+174h] [bp-130h]
  __int64 v184; // [sp+17Ch] [bp-128h]
  size_t n; // [sp+188h] [bp-11Ch]
  char *src; // [sp+18Ch] [bp-118h]
  unsigned __int64 v188; // [sp+190h] [bp-114h]
  unsigned __int64 v189; // [sp+198h] [bp-10Ch]
  unsigned __int64 v190; // [sp+1A0h] [bp-104h]
  __int64 v191; // [sp+1A8h] [bp-FCh]
  __int64 v192; // [sp+1B0h] [bp-F4h]
  unsigned int v193; // [sp+1B8h] [bp-ECh]
  int v194; // [sp+1BCh] [bp-E8h]
  unsigned int v195; // [sp+1C0h] [bp-E4h]
  unsigned int v196; // [sp+1C4h] [bp-E0h]
  __int64 v197; // [sp+1C8h] [bp-DCh]
  unsigned __int64 v198; // [sp+1D0h] [bp-D4h]
  __int64 v199; // [sp+1D8h] [bp-CCh]
  __int64 v200; // [sp+1E0h] [bp-C4h]
  __int64 v201; // [sp+1E8h] [bp-BCh]
  __int64 v202; // [sp+1F0h] [bp-B4h]
  __int64 v203; // [sp+1F8h] [bp-ACh]
  unsigned int v204; // [sp+200h] [bp-A4h]
  unsigned int v205; // [sp+204h] [bp-A0h]
  unsigned __int64 v206; // [sp+208h] [bp-9Ch]
  unsigned int v207; // [sp+220h] [bp-84h]
  _DWORD v208[7]; // [sp+224h] [bp-80h]
  unsigned __int64 v209; // [sp+240h] [bp-64h]
  unsigned __int64 v210; // [sp+248h] [bp-5Ch]
  unsigned __int64 v211; // [sp+250h] [bp-54h]
  unsigned int v212; // [sp+258h] [bp-4Ch]
  unsigned int v213; // [sp+25Ch] [bp-48h]
  unsigned __int64 v214; // [sp+260h] [bp-44h]
  unsigned __int64 v215; // [sp+268h] [bp-3Ch]
  unsigned __int64 v216; // [sp+270h] [bp-34h]
  unsigned __int64 v217; // [sp+278h] [bp-2Ch]
  unsigned __int64 v218; // [sp+280h] [bp-24h]
  unsigned __int64 v219; // [sp+288h] [bp-1Ch]
  unsigned int v220; // [sp+290h] [bp-14h]
  unsigned int v221; // [sp+294h] [bp-10h]
  unsigned __int64 v222; // [sp+298h] [bp-Ch]
  _BYTE v223[4]; // [sp+2A0h] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v3 + n;
  }
  else
  {
    v190 = *(_QWORD *)(a1 + 136);
    v189 = *(_QWORD *)(a1 + 144);
    v199 = *(_QWORD *)(a1 + 152);
    v198 = *(_QWORD *)(a1 + 160);
    v197 = *(_QWORD *)(a1 + 168);
    v195 = *(_DWORD *)(a1 + 176);
    v196 = *(_DWORD *)(a1 + 180);
    v193 = *(_DWORD *)(a1 + 184);
    v194 = *(_DWORD *)(a1 + 188);
    v192 = *(_QWORD *)(a1 + 192);
    v200 = *(_QWORD *)(a1 + 200);
    v201 = *(_QWORD *)(a1 + 208);
    v202 = *(_QWORD *)(a1 + 216);
    v191 = *(_QWORD *)(a1 + 224);
    v188 = *(_QWORD *)(a1 + 232);
    v203 = *(_QWORD *)(a1 + 240);
    if ( a3 )
    {
      while ( 1 )
      {
        if ( v4 >= n )
          v4 = n;
        v5 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v5, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 128 )
        {
          v188 += 1024LL;
          if ( v188 <= 0x3FF )
            ++v203;
          v142 = bswap32(*(_DWORD *)(a1 + 8));
          v140 = bswap32(*(_DWORD *)(a1 + 12));
          v143 = bswap32(*(_DWORD *)(a1 + 20));
          v144 = bswap32(*(_DWORD *)(a1 + 24));
          v145 = _byteswap_uint64(*(_QWORD *)(a1 + 32));
          v153 = bswap32(*(_DWORD *)a1);
          v152 = bswap32(*(_DWORD *)(a1 + 4));
          v157 = bswap32(*(_DWORD *)(a1 + 16));
          v159 = bswap32(*(_DWORD *)(a1 + 28));
          v146 = _byteswap_uint64(*(_QWORD *)(a1 + 40));
          v147 = _byteswap_uint64(*(_QWORD *)(a1 + 48));
          v6 = *(_DWORD *)(a1 + 60);
          v148 = bswap32(*(_DWORD *)(a1 + 56));
          v208[0] = v153;
          v208[5] = v159;
          v210 = v146;
          v208[1] = v140;
          v151 = 320440878;
          v208[2] = v142;
          v208[3] = v143;
          v211 = v147;
          v213 = v148;
          v7 = *(_DWORD *)(a1 + 64);
          v212 = bswap32(v6);
          v8 = *(_DWORD *)(a1 + 72);
          v9 = *(_DWORD *)(a1 + 68);
          v165 = v212;
          v207 = v152;
          v208[4] = v157;
          v208[6] = v144;
          v209 = v145;
          v154 = 57701188;
          v179 = *(_DWORD *)(a1 + 104);
          v181 = *(_DWORD *)(a1 + 108);
          v204 = *(_DWORD *)(a1 + 112);
          v205 = *(_DWORD *)(a1 + 116);
          v206 = *(_QWORD *)(a1 + 120);
          v133 = v201 ^ 0x13198A2E03707344LL;
          v160 = 698298832;
          v158 = 0x82EFA98EC4E6C89LL;
          v163 = 0x452821E638D01377LL;
          v162 = 0xBE5466CF34E90C6CLL;
          v102 = v202 ^ 0xA4093822299F31D0LL;
          v161 = -1542899678;
          v105 = v191 ^ 0x82EFA98EC4E6C89LL;
          v167 = -1062458953;
          v184 = 0x801F2E2858EFC16LL;
          v183 = 0x636920D871574E69LL;
          v126 = v188 ^ 0xBE5466CF34E90C6CLL;
          v180 = 0xBA7C9045F12C7F99LL;
          v121 = v188 ^ 0x452821E638D01377LL;
          v177 = 0x24A19947B3916CF7LL;
          v106 = v200 ^ 0x243F6A8885A308D3LL;
          v175 = 0x2FFD72DBD01ADFB7LL;
          v173 = 0xB8E1AFED6A267E96LL;
          v108 = v203 ^ 0xC0AC29B7C97C50DDLL;
          v171 = 0x9216D5D98979FB1BLL;
          v117 = v203 ^ 0x3F84D5B5B5470917LL;
          v128 = v192;
          v169 = 0xD1310BA698DFB5ACLL;
          v112 = v193;
          v155 = -2052912941;
          v123 = v194;
          v156 = 608135816;
          v109 = v195;
          v164 = 0x3F84D5B5B5470917LL;
          v113 = v196;
          v136 = v197;
          v166 = -914599715;
          v168 = _byteswap_uint64(__PAIR64__(v9, v7));
          v130 = v198;
          v170 = _byteswap_uint64(__PAIR64__(*(_DWORD *)(a1 + 76), v8));
          v125 = v199;
          v119 = v189;
          v115 = v190;
          v174 = _byteswap_uint64(*(_QWORD *)(a1 + 88));
          v172 = _byteswap_uint64(*(_QWORD *)(a1 + 80));
          v176 = _byteswap_uint64(*(_QWORD *)(a1 + 96));
          v214 = v168;
          v178 = _byteswap_uint64(__PAIR64__(v181, v179));
          v182 = bswap32(v204);
          v215 = v170;
          v149 = bswap32(v205);
          v216 = v172;
          v217 = v174;
          v218 = v176;
          v150 = _byteswap_uint64(v206);
          v219 = v178;
          v221 = v182;
          v220 = v149;
          v222 = v150;
          v10 = &unk_157610;
          while ( 1 )
          {
            v10 += 16;
            LODWORD(v30) = v140 ^ v155;
            v31 = v121 ^ ((v152 ^ v154) + v136 + v115);
            HIDWORD(v30) = (__PAIR64__(v153 ^ v151, v152 ^ v154) + v136 + v115) >> 32;
            v32 = HIDWORD(v121) ^ HIDWORD(v30);
            v33 = __PAIR64__(v31, HIDWORD(v121) ^ HIDWORD(v30)) + v106;
            v34 = (v140 ^ v155) + (v152 ^ v154) + v136 + v115;
            HIDWORD(v30) = (v30 + __PAIR64__(v142 ^ v156, (v152 ^ v154) + v136 + v115)) >> 32;
            LODWORD(v30) = (__int64)(v33 ^ v136) >> 25;
            v35 = v31
                ^ ((__PAIR64__(
                      ((unsigned int)(HIDWORD(v33) ^ HIDWORD(v136)) >> 25)
                    | (((unsigned int)v33 ^ (unsigned int)v136) << 7),
                      v34)
                  + v30) >> 32);
            v36 = v32 ^ (v34 + v30);
            HIDWORD(v122) = ((unsigned int)(HIDWORD(v33) ^ HIDWORD(v136)) >> 25)
                          | (((unsigned int)v33 ^ (unsigned int)v136) << 7);
            v116 = __PAIR64__(HIDWORD(v122), v34) + v30;
            LODWORD(v122) = v30;
            v137 = HIWORD(v36) | (v35 << 16);
            v107 = v33 + __PAIR64__(HIWORD(v35) | (v36 << 16), v137);
            v139 = HIWORD(v35) | (v36 << 16);
            v37 = __PAIR64__(v157 ^ HIDWORD(v158), v143 ^ (unsigned int)v158) + __PAIR64__(v113, v109) + v119;
            v38 = ((HIDWORD(v126) ^ HIDWORD(v37)) + v133) ^ v109;
            v39 = __PAIR64__((unsigned int)v126 ^ (unsigned int)v37, HIDWORD(v126) ^ HIDWORD(v37)) + v133;
            LODWORD(v30) = ((__PAIR64__((unsigned int)v126 ^ (unsigned int)v37, HIDWORD(v126) ^ HIDWORD(v37)) + v133) >> 32)
                         ^ v113;
            v40 = (unsigned int)v30 >> 25;
            LODWORD(v30) = (v38 >> 25) | ((_DWORD)v30 << 7);
            v41 = v40 | (v38 << 7);
            v42 = (v159 ^ v160) + v37;
            v43 = HIDWORD(v126) ^ HIDWORD(v37) ^ (v42 + v30);
            v110 = v42 + v30;
            v44 = v126
                ^ v37
                ^ ((__PAIR64__(HIDWORD(v37) + __CFADD__(v159 ^ v160, (_DWORD)v37) + (v144 ^ v161), v42)
                  + __PAIR64__(v41, v30)) >> 32);
            v120 = (__PAIR64__(HIDWORD(v37) + __CFADD__(v159 ^ v160, (_DWORD)v37) + (v144 ^ v161), v42)
                  + __PAIR64__(v41, v30)) >> 32;
            LODWORD(v127) = HIWORD(v43) | (v44 << 16);
            HIDWORD(v127) = HIWORD(v44) | (v43 << 16);
            v114 = (v39 + v127) >> 32;
            LODWORD(v30) = v30 ^ (v39 + v127);
            v45 = (v145 ^ v162) + __PAIR64__(v123, v112) + v125;
            v46 = (HIDWORD(v108) ^ HIDWORD(v45)) + v102;
            v47 = v108 ^ v45;
            LODWORD(v108) = v39 + v127;
            v48 = HIDWORD(v102) + __CFADD__(HIDWORD(v108) ^ HIDWORD(v45), (_DWORD)v102) + v47;
            v49 = ((v46 ^ v112) >> 25) | ((v48 ^ v123) << 7);
            HIDWORD(v30) = ((v48 ^ (unsigned int)v123) >> 25) | ((v46 ^ v112) << 7);
            v50 = v41 ^ v114;
            v51 = (v146 ^ v163) + v45 + __PAIR64__(HIDWORD(v30), v49);
            v52 = v47 ^ HIDWORD(v51);
            v104 = ((unsigned int)v30 >> 11) | (v50 << 21);
            v53 = HIDWORD(v108) ^ HIDWORD(v45) ^ v51;
            v54 = v50 >> 11;
            v55 = HIWORD(v53);
            HIDWORD(v108) = (v146 ^ v163) + v45 + v49;
            v56 = HIWORD(v52) | (v53 << 16);
            v57 = v54 | ((_DWORD)v30 << 21);
            v58 = v55 | (v52 << 16);
            v135 = v56;
            v59 = __PAIR64__(v48, v46) + __PAIR64__(v56, v58);
            v60 = v49 ^ (v46 + v58);
            HIDWORD(v30) ^= (__PAIR64__(v48, v46) + __PAIR64__(v56, v58)) >> 32;
            v134 = v58;
            v61 = HIDWORD(v117) ^ (((v147 ^ v164) + v128 + v130) >> 32);
            v62 = HIDWORD(v105);
            HIDWORD(v105) = v117 ^ ((v147 ^ v164) + v128 + v130);
            v63 = v61 + v105;
            v118 = (__PAIR64__(v62, v61) + v105) >> 32;
            LODWORD(v64) = (__int64)((__PAIR64__(v62, v61) + v105) ^ v128) >> 25;
            HIDWORD(v64) = (__PAIR64__(v148 ^ v167, v165 ^ v166) + (v147 ^ v164) + v128 + v130) >> 32;
            v65 = (v165 ^ v166) + (v147 ^ v164) + v128 + v130;
            v66 = ((v118 ^ HIDWORD(v128)) >> 25) | (((v61 + (_DWORD)v105) ^ (unsigned int)v128) << 7);
            v67 = v61 ^ (v65 + v64);
            v129 = v65 + v64;
            LODWORD(v30) = (v60 >> 11) | (HIDWORD(v30) << 21);
            v131 = (__PAIR64__(v66, v65) + v64) >> 32;
            v68 = (HIDWORD(v30) >> 11) | (v60 << 21);
            LODWORD(v105) = v30;
            HIDWORD(v30) = HIWORD(v67);
            v69 = ((HIDWORD(v105) ^ v131) >> 16) | (v67 << 16);
            v70 = HIDWORD(v30) | ((HIDWORD(v105) ^ v131) << 16);
            LODWORD(v64) = v64 ^ (v63 + v70);
            HIDWORD(v105) = v68;
            v71 = __PAIR64__(v118, v63) + __PAIR64__(v69, v70);
            v72 = v66 ^ ((__PAIR64__(v118, v63) + __PAIR64__(v69, v70)) >> 32);
            v103 = v70 ^ ((v168 ^ v169) + v116 + v104);
            v73 = v69 ^ (((v168 ^ v169) + v116 + __PAIR64__(v57, v104)) >> 32);
            v74 = v104 ^ (v59 + v73);
            v75 = v59 + __PAIR64__(v103, v73);
            v132 = (v74 >> 25) | ((v57 ^ ((v59 + __PAIR64__(v103, v73)) >> 32)) << 7);
            HIDWORD(v30) = ((v170 ^ v171) + (v168 ^ v169) + v116 + __PAIR64__(v57, v104)) >> 32;
            v76 = (v170 ^ v171) + (v168 ^ v169) + v116 + v104;
            v77 = v73 ^ (v76 + v132);
            v115 = (v170 ^ v171)
                 + (v168 ^ v169)
                 + v116
                 + __PAIR64__(v57, v104)
                 + __PAIR64__((((unsigned int)v57 ^ HIDWORD(v75)) >> 25) | (v74 << 7), v132);
            LODWORD(v30) = ((unsigned int)v64 >> 11) | (v72 << 21);
            v124 = (((unsigned int)v57 ^ HIDWORD(v75)) >> 25) | (v74 << 7);
            LODWORD(v64) = (v72 >> 11) | ((_DWORD)v64 << 21);
            LODWORD(v117) = HIWORD(v77)
                          | ((v103 ^ ((__PAIR64__(HIDWORD(v30), v76) + __PAIR64__(v124, v132)) >> 32)) << 16);
            HIDWORD(v117) = ((v103 ^ ((__PAIR64__(HIDWORD(v30), v76) + __PAIR64__(v124, v132)) >> 32)) >> 16)
                          | (v77 << 16);
            v102 = v75 + v117;
            LODWORD(v78) = v105;
            HIDWORD(v78) = ((v172 ^ v173) + __PAIR64__(v120, v110)) >> 32;
            v79 = v137 ^ ((v172 ^ v173) + v110 + v105);
            v80 = v71 + __PAIR64__(v79, v139 ^ (unsigned int)((__PAIR64__(v68, (v172 ^ v173) + v110) + v78) >> 32));
            v81 = (((unsigned int)v68 ^ HIDWORD(v80)) >> 25) | (((unsigned int)v105 ^ (unsigned int)v80) << 7);
            v138 = (__int64)(v105
                           ^ (v71
                            + __PAIR64__(
                                v79,
                                v139 ^ (unsigned int)((__PAIR64__(v68, (v172 ^ v173) + v110) + v78) >> 32)))) >> 25;
            v119 = (v174 ^ v175) + __PAIR64__(v68, (v172 ^ v173) + v110) + v78 + __PAIR64__(v81, v138);
            v82 = v79 ^ HIDWORD(v119);
            v83 = v139 ^ ((__PAIR64__(v68, (v172 ^ v173) + v110) + v78) >> 32) ^ v119;
            v84 = (__int64)(v122 ^ v107) >> 11;
            v85 = ((unsigned int)(HIDWORD(v122) ^ HIDWORD(v107)) >> 11)
                | (((unsigned int)v122 ^ (unsigned int)v107) << 21);
            LODWORD(v121) = HIWORD(v83) | (v82 << 16);
            HIDWORD(v121) = HIWORD(v82) | (v83 << 16);
            v105 = v80 + v121;
            v86 = v127 ^ ((v176 ^ v177) + HIDWORD(v108) + v30);
            v87 = (v176 ^ v177) + __PAIR64__(HIDWORD(v51), HIDWORD(v108)) + __PAIR64__(v64, v30);
            HIDWORD(v78) = v30 ^ (v107 + (HIDWORD(v127) ^ HIDWORD(v87)));
            v88 = v107 + __PAIR64__(v86, HIDWORD(v127) ^ HIDWORD(v87));
            v89 = (v178 ^ v180) + v87;
            LODWORD(v64) = v64 ^ ((v107 + __PAIR64__(v86, HIDWORD(v127) ^ HIDWORD(v89))) >> 32);
            LODWORD(v78) = (HIDWORD(v78) >> 25) | ((_DWORD)v64 << 7);
            HIDWORD(v78) = ((unsigned int)v64 >> 25) | (HIDWORD(v78) << 7);
            v90 = HIDWORD(v127) ^ HIDWORD(v87) ^ (v89 + v78);
            v91 = v86 ^ ((v89 + v78) >> 32);
            LODWORD(v126) = HIWORD(v90) | (v91 << 16);
            HIDWORD(v126) = HIWORD(v91) | (v90 << 16);
            v125 = v89 + v78;
            v111 = v132 ^ (v75 + v117);
            v106 = v88 + v126;
            v92 = __PAIR64__(
                    v131 + __CFADD__(v149 ^ v183, v129) + (v182 ^ HIDWORD(v183)),
                    (v149 ^ (unsigned int)v183) + v129)
                + __PAIR64__(v85, v84);
            v93 = v135
                ^ ((__PAIR64__(
                      v131 + __CFADD__(v149 ^ v183, v129) + (v182 ^ HIDWORD(v183)),
                      (v149 ^ (unsigned int)v183) + v129)
                  + __PAIR64__(v85, v84)) >> 32);
            HIDWORD(v30) = v81 ^ ((v80 + v121) >> 32);
            LODWORD(v64) = v134 ^ ((v149 ^ v183) + v129 + v84);
            v94 = __PAIR64__(v114, v108) + __PAIR64__(v64, v93);
            LODWORD(v95) = v84 ^ (v108 + v93);
            HIDWORD(v95) = v85 ^ ((__PAIR64__(v114, v108) + __PAIR64__(v64, v93)) >> 32);
            v96 = HIDWORD(v95) >> 25;
            HIDWORD(v95) = v95 >> 25;
            LODWORD(v95) = v96 | ((_DWORD)v95 << 7);
            v97 = (v150 ^ v184) + v92;
            HIDWORD(v78) ^= (v88 + v126) >> 32;
            v98 = v97 + __PAIR64__(v95, HIDWORD(v95));
            v99 = v93 ^ (v97 + HIDWORD(v95));
            LODWORD(v64) = v64 ^ ((v97 + __PAIR64__(v95, HIDWORD(v95))) >> 32);
            v130 = v97 + __PAIR64__(v95, HIDWORD(v95));
            v113 = ((v124 ^ ((v75 + v117) >> 32)) >> 11) | (v111 << 21);
            v109 = (v111 >> 11) | ((v124 ^ ((v75 + v117) >> 32)) << 21);
            v123 = (HIDWORD(v30) >> 11) | ((v138 ^ ((_DWORD)v80 + (_DWORD)v121)) << 21);
            v112 = ((v138 ^ ((_DWORD)v80 + (_DWORD)v121)) >> 11) | (HIDWORD(v30) << 21);
            LODWORD(v108) = HIWORD(v99) | ((_DWORD)v64 << 16);
            HIDWORD(v108) = WORD1(v64) | (v99 << 16);
            LODWORD(v128) = (((unsigned int)v78 ^ ((_DWORD)v88 + (_DWORD)v126)) >> 11) | (HIDWORD(v78) << 21);
            HIDWORD(v128) = (HIDWORD(v78) >> 11) | (((unsigned int)v78 ^ ((_DWORD)v88 + (_DWORD)v126)) << 21);
            HIDWORD(v95) ^= v94 + (_DWORD)v108;
            LODWORD(v95) = v95 ^ ((v94 + v108) >> 32);
            v133 = v94 + v108;
            HIDWORD(v136) = v95 >> 11;
            LODWORD(v136) = (HIDWORD(v95) >> 11) | ((_DWORD)v95 << 21);
            if ( &unk_157A10 == (_UNKNOWN *)v10 )
              break;
            v11 = *(v10 - 10);
            v12 = 8 * *(v10 - 15);
            v13 = 2 * *(v10 - 16);
            v141 = (char *)&unk_1579D0 + v12;
            v14 = 2 * *(v10 - 14);
            v15 = *(v10 - 13);
            v155 = *(_DWORD *)((char *)&unk_1579D0 + v13 * 4);
            v16 = &v223[v12];
            v17 = (char *)&unk_1579D0 + 8 * v15;
            v18 = &v223[8 * v15];
            v19 = 2 * *(v10 - 12);
            v156 = *(_DWORD *)((char *)&unk_1579D0 + v13 * 4 + 4);
            v20 = 2 * *(v10 - 11);
            v21 = &v223[8 * v11];
            v152 = v208[v13 - 1];
            v153 = v208[v13];
            v154 = *((_DWORD *)&unk_1579D0 + 2 * *(v10 - 15));
            v151 = *((_DWORD *)v141 + 1);
            v140 = *((_DWORD *)v16 - 32);
            v142 = *((_DWORD *)v16 - 31);
            v160 = *(_DWORD *)((char *)&unk_1579D0 + v14 * 4);
            v161 = *(_DWORD *)((char *)&unk_1579D0 + v14 * 4 + 4);
            v143 = v208[v14 - 1];
            v157 = v208[v14];
            LODWORD(v158) = *((_DWORD *)&unk_1579D0 + 2 * *(v10 - 13));
            HIDWORD(v158) = *((_DWORD *)v17 + 1);
            v159 = *((_DWORD *)v18 - 32);
            v144 = *((_DWORD *)v18 - 31);
            v163 = *(_QWORD *)((char *)&unk_1579D0 + v19 * 4);
            v145 = *(_QWORD *)&v208[v19 - 1];
            v162 = *(_QWORD *)((char *)&unk_1579D0 + v20 * 4);
            v146 = *(_QWORD *)&v208[v20 - 1];
            v22 = *((_DWORD *)&unk_1579D0 + 2 * v11 + 1);
            v23 = *(v10 - 9);
            v147 = *((_QWORD *)v21 - 16);
            v167 = v22;
            v24 = (__int64 *)((char *)&unk_1579D0 + 8 * v23);
            v25 = &v223[8 * v23];
            v26 = 2 * *(v10 - 4);
            v27 = 2 * *(v10 - 5);
            v166 = *((_DWORD *)&unk_1579D0 + 2 * *(v10 - 10));
            v164 = *v24;
            v28 = 2 * *(v10 - 3);
            v165 = *((_DWORD *)v25 - 32);
            v148 = *((_DWORD *)v25 - 31);
            v171 = *((_QWORD *)&unk_1579D0 + *(v10 - 8));
            v168 = *(_QWORD *)&v208[2 * *(v10 - 8) - 1];
            v175 = *((_QWORD *)&unk_1579D0 + *(v10 - 6));
            v169 = *((_QWORD *)&unk_1579D0 + *(v10 - 7));
            v172 = *(_QWORD *)&v208[2 * *(v10 - 6) - 1];
            v170 = *(_QWORD *)&v208[2 * *(v10 - 7) - 1];
            v173 = *(_QWORD *)((char *)&unk_1579D0 + v27 * 4);
            v174 = *(_QWORD *)&v208[v27 - 1];
            v176 = *(_QWORD *)&v208[v26 - 1];
            v180 = *(_QWORD *)((char *)&unk_1579D0 + v26 * 4);
            v178 = *(_QWORD *)&v208[v28 - 1];
            v177 = *(_QWORD *)((char *)&unk_1579D0 + v28 * 4);
            v29 = *((_QWORD *)v10 - 1);
            v184 = *((_QWORD *)&unk_1579D0 + v29);
            v183 = *((_QWORD *)&unk_1579D0 + HIDWORD(v29));
            v149 = v208[2 * (_DWORD)v29 - 1];
            v150 = *(_QWORD *)&v208[2 * HIDWORD(v29) - 1];
            v182 = v208[2 * (_DWORD)v29];
          }
          v190 ^= v115 ^ v200 ^ v106;
          v189 ^= v119 ^ v201 ^ v133;
          v199 ^= v125 ^ v202 ^ v102;
          v198 ^= v105 ^ v191 ^ v98;
          v197 ^= v121 ^ v200 ^ v136;
          v3 = 0;
          v195 ^= v126 ^ v201 ^ v109;
          v196 ^= HIDWORD(v126) ^ HIDWORD(v201) ^ v113;
          v193 ^= v112 ^ v202 ^ v108;
          v194 ^= v123 ^ HIDWORD(v202) ^ HIDWORD(v108);
          v192 ^= v117 ^ v128 ^ v191;
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v4 = 128 - v3;
      }
    }
    *(_QWORD *)(a1 + 136) = v190;
    *(_QWORD *)(a1 + 144) = v189;
    *(_QWORD *)(a1 + 152) = v199;
    *(_QWORD *)(a1 + 160) = v198;
    *(_QWORD *)(a1 + 168) = v197;
    *(_DWORD *)(a1 + 176) = v195;
    *(_DWORD *)(a1 + 180) = v196;
    *(_DWORD *)(a1 + 184) = v193;
    *(_DWORD *)(a1 + 188) = v194;
    *(_QWORD *)(a1 + 192) = v192;
    *(_DWORD *)(a1 + 128) = v3;
    *(_QWORD *)(a1 + 200) = v200;
    *(_QWORD *)(a1 + 208) = v201;
    *(_QWORD *)(a1 + 216) = v202;
    *(_QWORD *)(a1 + 224) = v191;
    *(_QWORD *)(a1 + 232) = v188;
    *(_QWORD *)(a1 + 240) = v203;
    return (void *)v188;
  }
  return result;
}
