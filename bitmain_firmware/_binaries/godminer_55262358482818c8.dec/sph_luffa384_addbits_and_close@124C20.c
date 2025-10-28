void *__fastcall sph_luffa384_addbits_and_close(unsigned int *a1, char a2, char a3, _BYTE *a4)
{
  unsigned int v5; // lr
  unsigned int *v6; // r3
  unsigned int v7; // r11
  int v8; // r5
  unsigned int v9; // r8
  int v10; // r6
  int v11; // r4
  int v12; // r11
  int v13; // r3
  int v14; // r2
  int v15; // lr
  int v16; // r1
  int v17; // r6
  int v18; // r0
  int v19; // r12
  int v20; // r4
  int v21; // r8
  int v22; // r4
  int v23; // r11
  int v24; // r5
  unsigned int v25; // lr
  unsigned int v26; // r10
  int v27; // r2
  int v28; // r3
  int v29; // r12
  int v30; // r2
  int v31; // r10
  int v32; // r2
  int v33; // r8
  int v34; // r1
  int v35; // r5
  int v36; // r1
  int v37; // lr
  int v38; // r11
  int v39; // r0
  int v40; // r7
  int v41; // r2
  int v42; // r3
  int v43; // r4
  int v44; // r1
  int v45; // r7
  unsigned int v46; // lr
  int v47; // r8
  int v48; // r2
  int v49; // r6
  int v50; // r5
  int v51; // r4
  int v52; // r4
  int v53; // r0
  int v54; // r10
  unsigned int v55; // r3
  int v56; // r12
  int v57; // r11
  int v58; // r1
  int v59; // r2
  int v60; // r11
  int v61; // r9
  int v62; // r5
  int v63; // r6
  int v64; // r1
  int v65; // r7
  int v66; // r3
  int v67; // r0
  int v68; // r4
  int v69; // r12
  int v70; // r1
  int v71; // r2
  int v72; // r6
  int v73; // r1
  int v74; // r9
  int v75; // r0
  int v76; // r2
  int v77; // r4
  int v78; // lr
  int v79; // r3
  int v80; // r11
  int v81; // r0
  int v82; // r2
  int v83; // r1
  int v84; // r12
  int v85; // lr
  int v86; // r3
  int v87; // r4
  int v88; // r11
  int v89; // r9
  int v90; // r8
  int v91; // r0
  unsigned int v92; // lr
  int v93; // r2
  unsigned int v94; // r3
  int v95; // r12
  int v96; // r1
  int v97; // r4
  unsigned int v98; // r11
  int v99; // r2
  int v100; // r11
  int v101; // r10
  int v102; // r5
  int v103; // r6
  int v104; // r1
  int v105; // r7
  int v106; // r3
  int v107; // r0
  int v108; // r4
  int v109; // r12
  int v110; // r1
  int v111; // r2
  int v112; // r6
  int v113; // r1
  int v114; // r10
  int v115; // r0
  int v116; // r2
  int v117; // r4
  int v118; // lr
  int v119; // r3
  int v120; // r11
  int v121; // r0
  int v122; // r2
  int v123; // r1
  int v124; // r12
  int v125; // lr
  int v126; // r3
  int v127; // r4
  int v128; // r11
  int v129; // r8
  int v130; // r10
  int v131; // r0
  unsigned int v132; // lr
  int v133; // r2
  unsigned int v134; // r3
  int v135; // r12
  unsigned int v136; // r11
  int v137; // r4
  int v138; // r1
  int v139; // r2
  int v140; // r11
  int v141; // r9
  int v142; // r5
  int v143; // r6
  int v144; // r1
  int v145; // r7
  int v146; // r3
  int v147; // r0
  int v148; // r4
  int v149; // r12
  int v150; // r1
  int v151; // r2
  int v152; // r6
  int v153; // r1
  int v154; // r9
  int v155; // r0
  int v156; // r2
  int v157; // r4
  int v158; // lr
  int v159; // r3
  int v160; // r11
  int v161; // r0
  int v162; // r2
  int v163; // r1
  int v164; // r12
  int v165; // lr
  int v166; // r3
  int v167; // r4
  int v168; // r11
  int v169; // r9
  int v170; // r8
  int v171; // r0
  unsigned int v172; // lr
  int v173; // r2
  unsigned int v174; // r3
  int v175; // r12
  unsigned int v176; // r11
  int v177; // r4
  int v178; // r1
  int v179; // r2
  int v180; // r11
  int v181; // r10
  int v182; // r5
  int v183; // r6
  int v184; // r1
  int v185; // r7
  int v186; // r3
  int v187; // r0
  int v188; // r4
  int v189; // r12
  int v190; // r1
  int v191; // r2
  int v192; // r6
  int v193; // r1
  int v194; // r10
  int v195; // r0
  int v196; // r2
  int v197; // r4
  int v198; // lr
  int v199; // r3
  int v200; // r11
  int v201; // r0
  int v202; // r2
  int v203; // r1
  int v204; // r12
  int v205; // lr
  int v206; // r3
  int v207; // r4
  int v208; // r11
  int v209; // r2
  int v210; // r0
  int v211; // r5
  int v212; // r3
  void *result; // r0
  int v214; // r12
  int v215; // lr
  int v216; // r7
  int v217; // r3
  int v218; // r2
  int v219; // r1
  int v220; // r3
  unsigned int v221; // [sp+0h] [bp-DCh]
  int v222; // [sp+0h] [bp-DCh]
  int v223; // [sp+0h] [bp-DCh]
  int v224; // [sp+0h] [bp-DCh]
  int v225; // [sp+0h] [bp-DCh]
  int v226; // [sp+4h] [bp-D8h]
  unsigned int v227; // [sp+8h] [bp-D4h]
  unsigned int v228; // [sp+Ch] [bp-D0h]
  int v229; // [sp+10h] [bp-CCh]
  int v230; // [sp+10h] [bp-CCh]
  int v231; // [sp+10h] [bp-CCh]
  int v232; // [sp+14h] [bp-C8h]
  int v233; // [sp+14h] [bp-C8h]
  int v234; // [sp+14h] [bp-C8h]
  int v235; // [sp+18h] [bp-C4h]
  int v236; // [sp+18h] [bp-C4h]
  int v237; // [sp+1Ch] [bp-C0h]
  int v238; // [sp+1Ch] [bp-C0h]
  int v239; // [sp+1Ch] [bp-C0h]
  int v240; // [sp+20h] [bp-BCh]
  int v241; // [sp+20h] [bp-BCh]
  int v242; // [sp+20h] [bp-BCh]
  int v243; // [sp+24h] [bp-B8h]
  int v244; // [sp+24h] [bp-B8h]
  int v245; // [sp+24h] [bp-B8h]
  int v246; // [sp+24h] [bp-B8h]
  int v247; // [sp+28h] [bp-B4h]
  int v248; // [sp+28h] [bp-B4h]
  int v249; // [sp+28h] [bp-B4h]
  int v250; // [sp+2Ch] [bp-B0h]
  int v251; // [sp+2Ch] [bp-B0h]
  int v252; // [sp+2Ch] [bp-B0h]
  unsigned int v253; // [sp+30h] [bp-ACh]
  int v254; // [sp+30h] [bp-ACh]
  int v255; // [sp+30h] [bp-ACh]
  int v256; // [sp+30h] [bp-ACh]
  unsigned int v257; // [sp+34h] [bp-A8h]
  int v258; // [sp+34h] [bp-A8h]
  int v259; // [sp+34h] [bp-A8h]
  int v260; // [sp+38h] [bp-A4h]
  int v261; // [sp+38h] [bp-A4h]
  unsigned int v262; // [sp+3Ch] [bp-A0h]
  int v263; // [sp+3Ch] [bp-A0h]
  unsigned int v264; // [sp+3Ch] [bp-A0h]
  unsigned int v265; // [sp+40h] [bp-9Ch]
  int v266; // [sp+40h] [bp-9Ch]
  unsigned int v267; // [sp+40h] [bp-9Ch]
  unsigned int v268; // [sp+44h] [bp-98h]
  unsigned int v269; // [sp+44h] [bp-98h]
  unsigned int v270; // [sp+48h] [bp-94h]
  unsigned int v271; // [sp+48h] [bp-94h]
  unsigned int v272; // [sp+4Ch] [bp-90h]
  int v273; // [sp+4Ch] [bp-90h]
  unsigned int v274; // [sp+4Ch] [bp-90h]
  int v275; // [sp+50h] [bp-8Ch]
  int v276; // [sp+50h] [bp-8Ch]
  int v277; // [sp+50h] [bp-8Ch]
  unsigned int v278; // [sp+54h] [bp-88h]
  unsigned int v279; // [sp+54h] [bp-88h]
  unsigned int v280; // [sp+58h] [bp-84h]
  unsigned int v281; // [sp+58h] [bp-84h]
  unsigned int v282; // [sp+5Ch] [bp-80h]
  int v283; // [sp+5Ch] [bp-80h]
  unsigned int v284; // [sp+5Ch] [bp-80h]
  int v285; // [sp+60h] [bp-7Ch]
  int v286; // [sp+60h] [bp-7Ch]
  unsigned int v287; // [sp+64h] [bp-78h]
  int v288; // [sp+64h] [bp-78h]
  int v289; // [sp+64h] [bp-78h]
  unsigned int v290; // [sp+68h] [bp-74h]
  int v291; // [sp+68h] [bp-74h]
  int v292; // [sp+6Ch] [bp-70h]
  int v293; // [sp+6Ch] [bp-70h]
  int v294; // [sp+6Ch] [bp-70h]
  unsigned int v295; // [sp+70h] [bp-6Ch]
  int v296; // [sp+70h] [bp-6Ch]
  int v297; // [sp+70h] [bp-6Ch]
  int v298; // [sp+74h] [bp-68h]
  int v299; // [sp+74h] [bp-68h]
  int v300; // [sp+74h] [bp-68h]
  int v301; // [sp+78h] [bp-64h]
  int v302; // [sp+78h] [bp-64h]
  int v303; // [sp+7Ch] [bp-60h]
  int v304; // [sp+7Ch] [bp-60h]
  int v305; // [sp+7Ch] [bp-60h]
  unsigned int v306; // [sp+80h] [bp-5Ch]
  unsigned int v307; // [sp+80h] [bp-5Ch]
  unsigned int v308; // [sp+84h] [bp-58h]
  int v309; // [sp+84h] [bp-58h]
  int v310; // [sp+88h] [bp-54h]
  unsigned int v312; // [sp+90h] [bp-4Ch]
  int v313; // [sp+90h] [bp-4Ch]
  unsigned int v314; // [sp+94h] [bp-48h]
  int v315; // [sp+94h] [bp-48h]
  unsigned int v316; // [sp+98h] [bp-44h]
  unsigned int v317; // [sp+9Ch] [bp-40h]
  unsigned int v318; // [sp+A0h] [bp-3Ch]
  int v319; // [sp+A0h] [bp-3Ch]
  int v320; // [sp+A4h] [bp-38h]
  int v321; // [sp+ACh] [bp-30h]
  unsigned int v322; // [sp+B0h] [bp-2Ch]
  int v323; // [sp+B0h] [bp-2Ch]
  int v324; // [sp+B4h] [bp-28h]
  int v325; // [sp+B8h] [bp-24h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = (128 >> a3) | a2 & -(128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v6 = a1;
  v7 = a1[12];
  v312 = a1[10];
  v295 = a1[20];
  v8 = v7 ^ v295;
  v290 = a1[18];
  v322 = a1[9];
  v9 = a1[11] ^ a1[19];
  v314 = a1[11];
  v253 = a1[14];
  v257 = a1[15];
  v10 = v6[13] ^ v6[21];
  v11 = v312 ^ v290;
  v292 = v6[19];
  v260 = v6[16];
  v287 = v7;
  v298 = v6[13];
  v303 = v6[17];
  v301 = v6[21];
  v262 = v6[22];
  v265 = v6[23];
  v321 = 0;
  v306 = v6[24];
  v237 = v6[25];
  v229 = v6[26];
  v232 = v6[27];
  v235 = v6[28];
  v275 = v6[29];
  v268 = v6[30];
  v270 = v6[31];
  v272 = v6[32];
  v250 = v6[33];
  v240 = v6[34];
  v243 = v6[35];
  v247 = v6[36];
  v285 = v6[37];
  v278 = v6[38];
  v280 = v6[39];
  v282 = v6[40];
  while ( 1 )
  {
    v308 = bswap32(a1[1]);
    v228 = bswap32(a1[6]);
    v227 = bswap32(a1[7]);
    v12 = v270 ^ v280 ^ v257 ^ v265;
    v317 = bswap32(a1[2]);
    v318 = bswap32(a1[3]);
    v221 = bswap32(a1[5]);
    v13 = v272 ^ v282 ^ v260 ^ v306;
    v14 = v8 ^ v235 ^ v247 ^ v13;
    v15 = v10 ^ v275 ^ v285;
    v16 = v9 ^ v232 ^ v243 ^ v13;
    v17 = v12 ^ v306;
    v310 = v12 ^ v282;
    v226 = v12 ^ v272;
    v283 = v15 ^ v253;
    v18 = v278 ^ v253 ^ v262 ^ v268;
    v316 = bswap32(*a1);
    v299 = v298 ^ v14;
    v254 = v18 ^ v257;
    v19 = v11 ^ v229 ^ v240;
    v273 = v301 ^ v14;
    v20 = v275;
    v276 = v18 ^ v265;
    v21 = v14 ^ v20;
    v22 = v12 ^ v260;
    v325 = v18 ^ v270;
    v320 = v18 ^ v280;
    v23 = v15 ^ v262;
    v24 = v15 ^ v268;
    v263 = v15 ^ v278;
    v25 = bswap32(a1[4]);
    v266 = v314 ^ v19;
    v324 = v292 ^ v19;
    v258 = v19 ^ v232;
    v261 = v19 ^ v243;
    v315 = v14 ^ v285;
    v26 = v295;
    v296 = v13 ^ v303;
    v244 = v26 ^ v16;
    v27 = v303 ^ v237 ^ v250;
    v293 = v16 ^ v235;
    v248 = v16 ^ v247;
    v304 = v13 ^ v237;
    v251 = v13 ^ v250;
    v238 = v13 ^ v322;
    v28 = v13 ^ v27 ^ v322;
    v286 = __ROR4__(v221 ^ v308 ^ v228 ^ v310 ^ v21 ^ v248, 29);
    v233 = v287 ^ v16;
    v29 = v276 ^ v24;
    v302 = __ROR4__(v17 ^ v318 ^ v227 ^ v299 ^ v26 ^ v16, 31);
    v30 = v22 ^ v276 ^ v228;
    v277 = __ROR4__(v226 ^ v228 ^ v317 ^ v227 ^ v273 ^ v16 ^ v235, 30);
    v279 = __ROR4__(v24 ^ v228 ^ v317 ^ v227 ^ v315, 29);
    v307 = __ROR4__(v30, 31);
    v271 = __ROR4__(v29 ^ v25, 30);
    v31 = v290 ^ v28;
    v313 = v312 ^ v28;
    v230 = v28 ^ v229;
    v241 = v28 ^ v240;
    v32 = v21;
    v33 = v283;
    v236 = v258 ^ v226 ^ v308 ^ v228 ^ v244;
    v34 = v266;
    v288 = v266 ^ v22 ^ v318;
    v267 = __ROR4__(v254 ^ v23 ^ v221, 31);
    v35 = v25 ^ v283 ^ v273;
    v281 = __ROR4__(v318 ^ v227 ^ v325 ^ v263, 29);
    v269 = __ROR4__(v23 ^ v318 ^ v227 ^ v32, 30);
    v274 = __ROR4__(v17 ^ v325 ^ v221, 30);
    v323 = v308 ^ v34;
    v319 = v254 ^ v310;
    v36 = v263;
    v264 = __ROR4__(v35, 31);
    v284 = __ROR4__(v226 ^ v320 ^ v25, 29);
    v255 = v221 ^ v36;
    v37 = v25 ^ v22 ^ v233;
    v38 = v221 ^ v228 ^ v251 ^ v310;
    v245 = v22 ^ v251;
    v39 = v238 ^ v17;
    v309 = v22 ^ v238 ^ v308;
    v40 = v304 ^ v310;
    v41 = v296 ^ v226;
    v42 = v296 ^ v17;
    v43 = v304 ^ v226 ^ v228 ^ v227 ^ v31;
    v44 = v228 ^ v227 ^ v258;
    v289 = v288 ^ v248;
    v256 = v255 ^ v299;
    v300 = v37 ^ v315;
    v259 = v33 ^ v320 ^ v228;
    v297 = v17 ^ v324 ^ v317 ^ v227 ^ v233;
    v249 = v221 ^ v316 ^ v227 ^ v261 ^ v310 ^ v293;
    v239 = v228 ^ v41;
    v305 = v227 ^ v39;
    v252 = v221 ^ v40;
    v45 = v245 ^ v316;
    v46 = v256;
    v47 = 0;
    v48 = v317 ^ v261 ^ v313;
    v291 = v42 ^ v316 ^ v227 ^ v313;
    v49 = v230;
    v231 = v43;
    v294 = v323 ^ v31;
    v50 = v241;
    v234 = v324 ^ v316 ^ v227 ^ v49;
    v51 = v44 ^ v241;
    v242 = v38 ^ v49;
    v246 = v51;
    v52 = v45;
    v53 = v309 ^ v50;
    v54 = -533497832;
    v55 = v259;
    v56 = v289;
    v57 = v319 ^ v227;
    v58 = v300;
    v222 = 809079974;
    while ( 1 )
    {
      v59 = v48 ^ v56;
      v60 = v57 ^ v58;
      v61 = v59 ^ v52 & v56;
      v62 = (v46 | v55) ^ v58;
      v63 = v52 & v56 ^ ~v53;
      v64 = v58 & v46;
      v65 = v63 | v61;
      v66 = ~v55 ^ v64;
      v67 = (v52 | v53) ^ v56;
      v68 = v52 ^ (v63 | v61);
      v69 = v60 & v62 ^ v66;
      v70 = v64 ^ v60;
      v71 = v59 & v67 ^ v63;
      v72 = v66 | v70;
      v73 = v70 ^ v68 ^ v69;
      v74 = v61 ^ v71;
      v75 = ~v67 ^ v65;
      v76 = v71 & v65;
      v77 = v73 ^ __ROR4__(v68, 30);
      v78 = v46 ^ v72 ^ v75;
      v79 = ~v62 ^ v72 ^ v76;
      v80 = v69 & v72 ^ v74;
      v81 = v78 ^ __ROR4__(v75, 30);
      v82 = v79 ^ __ROR4__(v76, 30);
      v83 = v77 ^ __ROR4__(v73, 18);
      v84 = v80 ^ __ROR4__(v74, 30);
      v85 = v81 ^ __ROR4__(v78, 18);
      v86 = v82 ^ __ROR4__(v79, 18);
      v87 = v83 ^ __ROR4__(v77, 22);
      v88 = v84 ^ __ROR4__(v80, 18);
      v53 = v85 ^ __ROR4__(v81, 22);
      v48 = v86 ^ __ROR4__(v82, 22);
      v56 = v88 ^ __ROR4__(v84, 22);
      v46 = __ROR4__(v85, 31);
      v55 = __ROR4__(v86, 31);
      v58 = v54 ^ __ROR4__(v83, 31);
      v57 = __ROR4__(v88, 31);
      ++v47;
      v52 = v87 ^ v222;
      if ( v47 == 8 )
        break;
      v222 = dword_17F300[v47];
      v54 = dword_17F320[v47];
    }
    v89 = 23617341;
    v298 = v58;
    v312 = v53;
    v253 = v46;
    v90 = 0;
    v314 = v48;
    v257 = v55;
    v287 = v56;
    v260 = v57;
    v322 = v52;
    v91 = v291;
    v92 = v264;
    v93 = v294;
    v94 = v267;
    v95 = v297;
    v96 = v302;
    v97 = v305;
    v98 = v307;
    v223 = -1226960659;
    while ( 1 )
    {
      v99 = v93 ^ v95;
      v100 = v98 ^ v96;
      v101 = v99 ^ v97 & v95;
      v102 = (v92 | v94) ^ v96;
      v103 = v97 & v95 ^ ~v91;
      v104 = v96 & v92;
      v105 = v103 | v101;
      v106 = ~v94 ^ v104;
      v107 = (v97 | v91) ^ v95;
      v108 = v97 ^ (v103 | v101);
      v109 = v100 & v102 ^ v106;
      v110 = v104 ^ v100;
      v111 = v99 & v107 ^ v103;
      v112 = v106 | v110;
      v113 = v110 ^ v108 ^ v109;
      v114 = v101 ^ v111;
      v115 = ~v107 ^ v105;
      v116 = v111 & v105;
      v117 = v113 ^ __ROR4__(v108, 30);
      v118 = v92 ^ v112 ^ v115;
      v119 = ~v102 ^ v112 ^ v116;
      v120 = v109 & v112 ^ v114;
      v121 = v118 ^ __ROR4__(v115, 30);
      v122 = v119 ^ __ROR4__(v116, 30);
      v123 = v117 ^ __ROR4__(v113, 18);
      v124 = v120 ^ __ROR4__(v114, 30);
      v125 = v121 ^ __ROR4__(v118, 18);
      v126 = v122 ^ __ROR4__(v119, 18);
      v127 = v123 ^ __ROR4__(v117, 22);
      v128 = v124 ^ __ROR4__(v120, 18);
      v91 = v125 ^ __ROR4__(v121, 22);
      v93 = v126 ^ __ROR4__(v122, 22);
      v95 = v128 ^ __ROR4__(v124, 22);
      v92 = __ROR4__(v125, 31);
      v94 = __ROR4__(v126, 31);
      v96 = v89 ^ __ROR4__(v123, 31);
      v98 = __ROR4__(v128, 31);
      ++v90;
      v97 = v127 ^ v223;
      if ( v90 == 8 )
        break;
      v223 = dword_17F340[v90];
      v89 = dword_17F360[v90];
    }
    v129 = 0;
    v290 = v91;
    v262 = v92;
    v292 = v93;
    v265 = v94;
    v295 = v95;
    v306 = v98;
    v303 = v97;
    v301 = v96;
    v130 = -497126719;
    v131 = v231;
    v132 = v269;
    v133 = v234;
    v134 = v271;
    v135 = v236;
    v136 = v274;
    v137 = v239;
    v138 = v277;
    v224 = -64955950;
    while ( 1 )
    {
      v139 = v133 ^ v135;
      v140 = v136 ^ v138;
      v141 = v139 ^ v137 & v135;
      v142 = (v132 | v134) ^ v138;
      v143 = v137 & v135 ^ ~v131;
      v144 = v138 & v132;
      v145 = v143 | v141;
      v146 = ~v134 ^ v144;
      v147 = (v137 | v131) ^ v135;
      v148 = v137 ^ (v143 | v141);
      v149 = v140 & v142 ^ v146;
      v150 = v144 ^ v140;
      v151 = v139 & v147 ^ v143;
      v152 = v146 | v150;
      v153 = v150 ^ v148 ^ v149;
      v154 = v141 ^ v151;
      v155 = ~v147 ^ v145;
      v156 = v151 & v145;
      v157 = v153 ^ __ROR4__(v148, 30);
      v158 = v132 ^ v152 ^ v155;
      v159 = ~v142 ^ v152 ^ v156;
      v160 = v149 & v152 ^ v154;
      v161 = v158 ^ __ROR4__(v155, 30);
      v162 = v159 ^ __ROR4__(v156, 30);
      v163 = v157 ^ __ROR4__(v153, 18);
      v164 = v160 ^ __ROR4__(v154, 30);
      v165 = v161 ^ __ROR4__(v158, 18);
      v166 = v162 ^ __ROR4__(v159, 18);
      v167 = v163 ^ __ROR4__(v157, 22);
      v168 = v164 ^ __ROR4__(v160, 18);
      v131 = v165 ^ __ROR4__(v161, 22);
      v133 = v166 ^ __ROR4__(v162, 22);
      v135 = v168 ^ __ROR4__(v164, 22);
      v132 = __ROR4__(v165, 31);
      v134 = __ROR4__(v166, 31);
      v138 = v130 ^ __ROR4__(v163, 31);
      v136 = __ROR4__(v168, 31);
      ++v129;
      v137 = v167 ^ v224;
      if ( v129 == 8 )
        break;
      v224 = dword_17F380[v129];
      v130 = dword_17F3A0[v129];
    }
    v169 = -534197825;
    v229 = v131;
    v268 = v132;
    v170 = 0;
    v232 = v133;
    v270 = v134;
    v235 = v135;
    v272 = v136;
    v237 = v137;
    v275 = v138;
    v171 = v242;
    v172 = v279;
    v173 = v246;
    v174 = v281;
    v175 = v249;
    v176 = v284;
    v177 = v252;
    v178 = v286;
    v225 = -1307332699;
    while ( 1 )
    {
      v179 = v173 ^ v175;
      v180 = v176 ^ v178;
      v181 = v179 ^ v177 & v175;
      v182 = (v172 | v174) ^ v178;
      v183 = v177 & v175 ^ ~v171;
      v184 = v178 & v172;
      v185 = v183 | v181;
      v186 = ~v174 ^ v184;
      v187 = (v177 | v171) ^ v175;
      v188 = v177 ^ (v183 | v181);
      v189 = v180 & v182 ^ v186;
      v190 = v184 ^ v180;
      v191 = v179 & v187 ^ v183;
      v192 = v186 | v190;
      v193 = v190 ^ v188 ^ v189;
      v194 = v181 ^ v191;
      v195 = ~v187 ^ v185;
      v196 = v191 & v185;
      v197 = v193 ^ __ROR4__(v188, 30);
      v198 = v172 ^ v192 ^ v195;
      v199 = ~v182 ^ v192 ^ v196;
      v200 = v189 & v192 ^ v194;
      v201 = v198 ^ __ROR4__(v195, 30);
      v202 = v199 ^ __ROR4__(v196, 30);
      v203 = v197 ^ __ROR4__(v193, 18);
      v204 = v200 ^ __ROR4__(v194, 30);
      v205 = v201 ^ __ROR4__(v198, 18);
      v206 = v202 ^ __ROR4__(v199, 18);
      v207 = v203 ^ __ROR4__(v197, 22);
      v208 = v204 ^ __ROR4__(v200, 18);
      v171 = v205 ^ __ROR4__(v201, 22);
      v173 = v206 ^ __ROR4__(v202, 22);
      v175 = v208 ^ __ROR4__(v204, 22);
      v172 = __ROR4__(v205, 31);
      v174 = __ROR4__(v206, 31);
      v178 = v169 ^ __ROR4__(v203, 31);
      v176 = __ROR4__(v208, 31);
      ++v170;
      v177 = v207 ^ v225;
      if ( v170 == 8 )
        break;
      v225 = dword_17F460[v170];
      v169 = dword_17F480[v170];
    }
    v280 = v174;
    v240 = v171;
    v278 = v172;
    v243 = v173;
    v247 = v175;
    v282 = v176;
    v250 = v177;
    v285 = v178;
    if ( v321 != 1 )
      break;
    v11 = v312 ^ v290;
    v9 = v314 ^ v292;
    v8 = v287 ^ v295;
    v10 = v298 ^ v301;
    v214 = v253 ^ v262 ^ v268 ^ v172;
    v215 = v257 ^ v265 ^ v270 ^ v174;
    v216 = v260 ^ v306 ^ v272 ^ v176;
    a4[3] = v322 ^ v303 ^ v237 ^ v250;
    *a4 = (v322 ^ v303 ^ v237 ^ v250) >> 24;
    a4[2] = (unsigned __int16)(v322 ^ v303 ^ v237 ^ v250) >> 8;
    a4[1] = (v322 ^ v303 ^ v237 ^ v250) >> 16;
    v217 = v312 ^ v290 ^ v229 ^ v171;
    a4[7] = v217;
    a4[4] = HIBYTE(v217);
    a4[5] = BYTE2(v217);
    v218 = v314 ^ v292 ^ v232 ^ v173;
    a4[11] = v218;
    a4[6] = BYTE1(v217);
    v219 = v287 ^ v295 ^ v235 ^ v247;
    a4[8] = HIBYTE(v218);
    a4[15] = v219;
    a4[23] = v214;
    a4[10] = BYTE1(v218);
    v220 = v298 ^ v301 ^ v275 ^ v285;
    a4[9] = BYTE2(v218);
    a4[12] = HIBYTE(v219);
    a4[19] = v220;
    a4[13] = BYTE2(v219);
    a4[14] = BYTE1(v219);
    a4[16] = HIBYTE(v220);
    a4[21] = BYTE2(v214);
    a4[17] = BYTE2(v220);
    a4[18] = BYTE1(v220);
    a4[20] = HIBYTE(v214);
    a4[22] = BYTE1(v214);
    a4[24] = HIBYTE(v215);
    a4[26] = BYTE1(v215);
    a4[25] = BYTE2(v215);
    a4[27] = v215;
    a4[31] = v216;
    a4[28] = HIBYTE(v216);
    a4[29] = BYTE2(v216);
    a4[30] = BYTE1(v216);
LABEL_18:
    ++v321;
  }
  if ( v321 != 2 )
  {
    memset(a1, 0, 0x20u);
    v11 = v312 ^ v290;
    v10 = v301 ^ v298;
    v8 = v287 ^ v295;
    v9 = v314 ^ v292;
    goto LABEL_18;
  }
  v209 = v177 ^ v322 ^ v303 ^ v237;
  v210 = v171 ^ v229 ^ v312 ^ v290;
  v211 = v232 ^ v314 ^ v292 ^ v243;
  v212 = v175 ^ v287 ^ v295 ^ v235;
  a4[35] = v209;
  a4[39] = v210;
  a4[43] = v211;
  a4[47] = v212;
  a4[32] = HIBYTE(v209);
  a4[33] = BYTE2(v209);
  a4[34] = BYTE1(v209);
  a4[36] = HIBYTE(v210);
  a4[37] = BYTE2(v210);
  a4[38] = BYTE1(v210);
  a4[40] = HIBYTE(v211);
  a4[41] = BYTE2(v211);
  a4[44] = HIBYTE(v212);
  a4[42] = BYTE1(v211);
  a4[45] = BYTE2(v212);
  a4[46] = BYTE1(v212);
  result = memcpy(a1 + 9, &unk_17F3C0, 0x80u);
  a1[8] = 0;
  return result;
}
