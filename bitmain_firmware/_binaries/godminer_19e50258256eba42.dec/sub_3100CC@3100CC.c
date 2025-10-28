unsigned int __fastcall sub_3100CC(unsigned int result, char *a2, size_t a3)
{
  size_t n; // [sp+4h] [bp-140h]
  char *src; // [sp+8h] [bp-13Ch]
  _DWORD *v5; // [sp+Ch] [bp-138h]
  int v6; // [sp+10h] [bp-134h]
  int v7; // [sp+10h] [bp-134h]
  int v8; // [sp+14h] [bp-130h]
  int v9; // [sp+14h] [bp-130h]
  int v10; // [sp+18h] [bp-12Ch]
  int v11; // [sp+18h] [bp-12Ch]
  unsigned int v12; // [sp+1Ch] [bp-128h]
  int v13; // [sp+1Ch] [bp-128h]
  int v14; // [sp+20h] [bp-124h]
  int v15; // [sp+20h] [bp-124h]
  int v16; // [sp+24h] [bp-120h]
  int v17; // [sp+24h] [bp-120h]
  int v18; // [sp+28h] [bp-11Ch]
  int v19; // [sp+28h] [bp-11Ch]
  int v20; // [sp+2Ch] [bp-118h]
  int v21; // [sp+2Ch] [bp-118h]
  int v22; // [sp+3Ch] [bp-108h]
  int v23; // [sp+40h] [bp-104h]
  int v24; // [sp+44h] [bp-100h]
  int v25; // [sp+50h] [bp-F4h]
  int v26; // [sp+54h] [bp-F0h]
  int v27; // [sp+58h] [bp-ECh]
  int v28; // [sp+5Ch] [bp-E8h]
  int v29; // [sp+60h] [bp-E4h]
  int v30; // [sp+64h] [bp-E0h]
  int v31; // [sp+68h] [bp-DCh]
  int v32; // [sp+6Ch] [bp-D8h]
  int v33; // [sp+70h] [bp-D4h]
  int v34; // [sp+74h] [bp-D0h]
  int v35; // [sp+78h] [bp-CCh]
  int v36; // [sp+7Ch] [bp-C8h]
  int v37; // [sp+80h] [bp-C4h]
  int v38; // [sp+84h] [bp-C0h]
  int v39; // [sp+88h] [bp-BCh]
  int v40; // [sp+8Ch] [bp-B8h]
  unsigned int v41; // [sp+94h] [bp-B0h]
  unsigned int v42; // [sp+98h] [bp-ACh]
  unsigned int v43; // [sp+9Ch] [bp-A8h]
  unsigned int v44; // [sp+A0h] [bp-A4h]
  unsigned int v45; // [sp+A4h] [bp-A0h]
  unsigned int v46; // [sp+A8h] [bp-9Ch]
  unsigned int v47; // [sp+ACh] [bp-98h]
  int *v48; // [sp+B0h] [bp-94h]
  int i; // [sp+B4h] [bp-90h]
  int j; // [sp+B4h] [bp-90h]
  int k; // [sp+B4h] [bp-90h]
  int m; // [sp+B4h] [bp-90h]
  size_t v53; // [sp+B8h] [bp-8Ch]
  int v54; // [sp+BCh] [bp-88h]
  int v55; // [sp+BCh] [bp-88h]
  int v56; // [sp+BCh] [bp-88h]
  int v57; // [sp+BCh] [bp-88h]
  int v58; // [sp+BCh] [bp-88h]
  int v59; // [sp+BCh] [bp-88h]
  int v60; // [sp+BCh] [bp-88h]
  int v61; // [sp+BCh] [bp-88h]
  int v62; // [sp+BCh] [bp-88h]
  int v63; // [sp+C0h] [bp-84h]
  int v64; // [sp+C0h] [bp-84h]
  int v65; // [sp+C0h] [bp-84h]
  int v66; // [sp+C0h] [bp-84h]
  int v67; // [sp+C0h] [bp-84h]
  int v68; // [sp+C0h] [bp-84h]
  int v69; // [sp+C0h] [bp-84h]
  int v70; // [sp+C0h] [bp-84h]
  int v71; // [sp+C0h] [bp-84h]
  int v72; // [sp+C4h] [bp-80h]
  int v73; // [sp+C4h] [bp-80h]
  int v74; // [sp+C4h] [bp-80h]
  int v75; // [sp+C4h] [bp-80h]
  int v76; // [sp+C4h] [bp-80h]
  int v77; // [sp+C4h] [bp-80h]
  int v78; // [sp+C4h] [bp-80h]
  int v79; // [sp+C8h] [bp-7Ch]
  int v80; // [sp+C8h] [bp-7Ch]
  int v81; // [sp+C8h] [bp-7Ch]
  int v82; // [sp+C8h] [bp-7Ch]
  int v83; // [sp+C8h] [bp-7Ch]
  int v84; // [sp+C8h] [bp-7Ch]
  int v85; // [sp+C8h] [bp-7Ch]
  int v86; // [sp+C8h] [bp-7Ch]
  int v87; // [sp+C8h] [bp-7Ch]
  unsigned int v88; // [sp+CCh] [bp-78h]
  int v89; // [sp+CCh] [bp-78h]
  int v90; // [sp+CCh] [bp-78h]
  int v91; // [sp+CCh] [bp-78h]
  int v92; // [sp+CCh] [bp-78h]
  int v93; // [sp+CCh] [bp-78h]
  int v94; // [sp+CCh] [bp-78h]
  int v95; // [sp+CCh] [bp-78h]
  unsigned int v96; // [sp+D0h] [bp-74h]
  int v97; // [sp+D0h] [bp-74h]
  int v98; // [sp+D0h] [bp-74h]
  int v99; // [sp+D0h] [bp-74h]
  int v100; // [sp+D0h] [bp-74h]
  int v101; // [sp+D0h] [bp-74h]
  int v102; // [sp+D0h] [bp-74h]
  int v103; // [sp+D0h] [bp-74h]
  int v104; // [sp+D4h] [bp-70h]
  int v105; // [sp+D4h] [bp-70h]
  int v106; // [sp+D4h] [bp-70h]
  int v107; // [sp+D4h] [bp-70h]
  int v108; // [sp+D4h] [bp-70h]
  int v109; // [sp+D4h] [bp-70h]
  int v110; // [sp+D4h] [bp-70h]
  int v111; // [sp+D4h] [bp-70h]
  int v112; // [sp+D8h] [bp-6Ch]
  int v113; // [sp+D8h] [bp-6Ch]
  int v114; // [sp+D8h] [bp-6Ch]
  int v115; // [sp+D8h] [bp-6Ch]
  int v116; // [sp+D8h] [bp-6Ch]
  int v117; // [sp+DCh] [bp-68h]
  int v118; // [sp+DCh] [bp-68h]
  int v119; // [sp+DCh] [bp-68h]
  int v120; // [sp+DCh] [bp-68h]
  int v121; // [sp+DCh] [bp-68h]
  int v122; // [sp+DCh] [bp-68h]
  int v123; // [sp+DCh] [bp-68h]
  int v124; // [sp+DCh] [bp-68h]
  int v125; // [sp+DCh] [bp-68h]
  int v126; // [sp+E0h] [bp-64h]
  int v127; // [sp+E0h] [bp-64h]
  int v128; // [sp+E0h] [bp-64h]
  int v129; // [sp+E0h] [bp-64h]
  int v130; // [sp+E0h] [bp-64h]
  int v131; // [sp+E0h] [bp-64h]
  int v132; // [sp+E0h] [bp-64h]
  int v133; // [sp+E0h] [bp-64h]
  int v134; // [sp+E0h] [bp-64h]
  int v135; // [sp+E4h] [bp-60h]
  int v136; // [sp+E4h] [bp-60h]
  int v137; // [sp+E4h] [bp-60h]
  int v138; // [sp+E4h] [bp-60h]
  int v139; // [sp+E4h] [bp-60h]
  int v140; // [sp+E4h] [bp-60h]
  int v141; // [sp+E4h] [bp-60h]
  int v142; // [sp+E8h] [bp-5Ch]
  int v143; // [sp+E8h] [bp-5Ch]
  int v144; // [sp+E8h] [bp-5Ch]
  int v145; // [sp+E8h] [bp-5Ch]
  int v146; // [sp+E8h] [bp-5Ch]
  int v147; // [sp+E8h] [bp-5Ch]
  int v148; // [sp+E8h] [bp-5Ch]
  int v149; // [sp+E8h] [bp-5Ch]
  int v150; // [sp+E8h] [bp-5Ch]
  int v151; // [sp+ECh] [bp-58h]
  int v152; // [sp+ECh] [bp-58h]
  int v153; // [sp+ECh] [bp-58h]
  int v154; // [sp+ECh] [bp-58h]
  int v155; // [sp+ECh] [bp-58h]
  int v156; // [sp+ECh] [bp-58h]
  int v157; // [sp+ECh] [bp-58h]
  int v158; // [sp+ECh] [bp-58h]
  unsigned int v159; // [sp+F0h] [bp-54h]
  int v160; // [sp+F0h] [bp-54h]
  int v161; // [sp+F0h] [bp-54h]
  int v162; // [sp+F0h] [bp-54h]
  int v163; // [sp+F0h] [bp-54h]
  int v164; // [sp+F0h] [bp-54h]
  int v165; // [sp+F0h] [bp-54h]
  int v166; // [sp+F0h] [bp-54h]
  unsigned int v167; // [sp+F4h] [bp-50h]
  int v168; // [sp+F4h] [bp-50h]
  int v169; // [sp+F4h] [bp-50h]
  int v170; // [sp+F4h] [bp-50h]
  int v171; // [sp+F4h] [bp-50h]
  int v172; // [sp+F4h] [bp-50h]
  int v173; // [sp+F4h] [bp-50h]
  int v174; // [sp+F4h] [bp-50h]
  int v175; // [sp+F8h] [bp-4Ch]
  int v176; // [sp+F8h] [bp-4Ch]
  int v177; // [sp+F8h] [bp-4Ch]
  int v178; // [sp+F8h] [bp-4Ch]
  int v179; // [sp+F8h] [bp-4Ch]
  int v180; // [sp+FCh] [bp-48h]
  int v181; // [sp+FCh] [bp-48h]
  int v182; // [sp+FCh] [bp-48h]
  int v183; // [sp+FCh] [bp-48h]
  int v184; // [sp+FCh] [bp-48h]
  int v185; // [sp+FCh] [bp-48h]
  int v186; // [sp+FCh] [bp-48h]
  int v187; // [sp+FCh] [bp-48h]
  int v188; // [sp+FCh] [bp-48h]
  int v189; // [sp+100h] [bp-44h]
  int v190; // [sp+100h] [bp-44h]
  int v191; // [sp+100h] [bp-44h]
  int v192; // [sp+100h] [bp-44h]
  int v193; // [sp+100h] [bp-44h]
  int v194; // [sp+100h] [bp-44h]
  int v195; // [sp+100h] [bp-44h]
  int v196; // [sp+100h] [bp-44h]
  int v197; // [sp+100h] [bp-44h]
  int v198; // [sp+104h] [bp-40h]
  int v199; // [sp+104h] [bp-40h]
  int v200; // [sp+104h] [bp-40h]
  int v201; // [sp+104h] [bp-40h]
  int v202; // [sp+104h] [bp-40h]
  int v203; // [sp+104h] [bp-40h]
  int v204; // [sp+104h] [bp-40h]
  int v205; // [sp+108h] [bp-3Ch]
  int v206; // [sp+108h] [bp-3Ch]
  int v207; // [sp+108h] [bp-3Ch]
  int v208; // [sp+108h] [bp-3Ch]
  int v209; // [sp+108h] [bp-3Ch]
  int v210; // [sp+108h] [bp-3Ch]
  int v211; // [sp+108h] [bp-3Ch]
  int v212; // [sp+108h] [bp-3Ch]
  int v213; // [sp+108h] [bp-3Ch]
  unsigned int v214; // [sp+10Ch] [bp-38h]
  int v215; // [sp+10Ch] [bp-38h]
  int v216; // [sp+10Ch] [bp-38h]
  int v217; // [sp+10Ch] [bp-38h]
  int v218; // [sp+10Ch] [bp-38h]
  int v219; // [sp+10Ch] [bp-38h]
  int v220; // [sp+10Ch] [bp-38h]
  int v221; // [sp+10Ch] [bp-38h]
  int v222; // [sp+110h] [bp-34h]
  int v223; // [sp+110h] [bp-34h]
  int v224; // [sp+110h] [bp-34h]
  int v225; // [sp+110h] [bp-34h]
  int v226; // [sp+110h] [bp-34h]
  int v227; // [sp+110h] [bp-34h]
  int v228; // [sp+110h] [bp-34h]
  int v229; // [sp+110h] [bp-34h]
  unsigned int v230; // [sp+114h] [bp-30h]
  int v231; // [sp+114h] [bp-30h]
  int v232; // [sp+114h] [bp-30h]
  int v233; // [sp+114h] [bp-30h]
  int v234; // [sp+114h] [bp-30h]
  int v235; // [sp+114h] [bp-30h]
  int v236; // [sp+114h] [bp-30h]
  int v237; // [sp+114h] [bp-30h]
  unsigned int v238; // [sp+118h] [bp-2Ch]
  int v239; // [sp+118h] [bp-2Ch]
  int v240; // [sp+118h] [bp-2Ch]
  int v241; // [sp+118h] [bp-2Ch]
  int v242; // [sp+118h] [bp-2Ch]
  unsigned int v243; // [sp+11Ch] [bp-28h]
  int v244; // [sp+11Ch] [bp-28h]
  int v245; // [sp+11Ch] [bp-28h]
  int v246; // [sp+11Ch] [bp-28h]
  int v247; // [sp+11Ch] [bp-28h]
  int v248; // [sp+11Ch] [bp-28h]
  int v249; // [sp+120h] [bp-24h]
  int v250; // [sp+120h] [bp-24h]
  int v251; // [sp+120h] [bp-24h]
  int v252; // [sp+120h] [bp-24h]
  int v253; // [sp+120h] [bp-24h]
  int v254; // [sp+120h] [bp-24h]
  int v255; // [sp+120h] [bp-24h]
  int v256; // [sp+124h] [bp-20h]
  int v257; // [sp+124h] [bp-20h]
  int v258; // [sp+124h] [bp-20h]
  int v259; // [sp+124h] [bp-20h]
  int v260; // [sp+124h] [bp-20h]
  int v261; // [sp+128h] [bp-1Ch]
  int v262; // [sp+128h] [bp-1Ch]
  int v263; // [sp+128h] [bp-1Ch]
  int v264; // [sp+128h] [bp-1Ch]
  int v265; // [sp+128h] [bp-1Ch]
  int v266; // [sp+128h] [bp-1Ch]
  int v267; // [sp+128h] [bp-1Ch]
  int v268; // [sp+12Ch] [bp-18h]
  int v269; // [sp+12Ch] [bp-18h]
  int v270; // [sp+12Ch] [bp-18h]
  int v271; // [sp+12Ch] [bp-18h]
  int v272; // [sp+12Ch] [bp-18h]
  int v273; // [sp+12Ch] [bp-18h]
  int v274; // [sp+130h] [bp-14h]
  int v275; // [sp+130h] [bp-14h]
  int v276; // [sp+130h] [bp-14h]
  int v277; // [sp+130h] [bp-14h]
  int v278; // [sp+130h] [bp-14h]
  int v279; // [sp+130h] [bp-14h]
  int v280; // [sp+134h] [bp-10h]
  int v281; // [sp+134h] [bp-10h]
  int v282; // [sp+134h] [bp-10h]
  int v283; // [sp+134h] [bp-10h]
  int v284; // [sp+134h] [bp-10h]
  int v285; // [sp+134h] [bp-10h]
  int v286; // [sp+138h] [bp-Ch]
  int v287; // [sp+138h] [bp-Ch]
  int v288; // [sp+138h] [bp-Ch]
  int v289; // [sp+138h] [bp-Ch]
  int v290; // [sp+13Ch] [bp-8h]

  v5 = (_DWORD *)result;
  src = a2;
  n = a3;
  v48 = (int *)result;
  v290 = *(_DWORD *)(result + 32);
  if ( a3 >= 32 - v290 )
  {
    v286 = *(_DWORD *)(result + 36);
    v280 = *(_DWORD *)(result + 40);
    v274 = *(_DWORD *)(result + 44);
    v268 = *(_DWORD *)(result + 48);
    v261 = *(_DWORD *)(result + 52);
    v256 = *(_DWORD *)(result + 56);
    v249 = *(_DWORD *)(result + 60);
    v243 = *(_DWORD *)(result + 64);
    v238 = *(_DWORD *)(result + 68);
    v230 = *(_DWORD *)(result + 72);
    v222 = *(_DWORD *)(result + 76);
    v214 = *(_DWORD *)(result + 80);
    v205 = *(_DWORD *)(result + 84);
    v198 = *(_DWORD *)(result + 88);
    v189 = *(_DWORD *)(result + 92);
    v180 = *(_DWORD *)(result + 96);
    v175 = *(_DWORD *)(result + 100);
    v167 = *(_DWORD *)(result + 104);
    v159 = *(_DWORD *)(result + 108);
    v151 = *(_DWORD *)(result + 112);
    v142 = *(_DWORD *)(result + 116);
    v135 = *(_DWORD *)(result + 120);
    v126 = *(_DWORD *)(result + 124);
    v117 = *(_DWORD *)(result + 128);
    v112 = *(_DWORD *)(result + 132);
    v104 = *(_DWORD *)(result + 136);
    v96 = *(_DWORD *)(result + 140);
    v88 = *(_DWORD *)(result + 144);
    v79 = *(_DWORD *)(result + 148);
    v72 = *(_DWORD *)(result + 152);
    v63 = *(_DWORD *)(result + 156);
    v54 = *(_DWORD *)(result + 160);
    while ( n )
    {
      v53 = 32 - v290;
      if ( 32 - v290 > n )
        v53 = n;
      result = (unsigned int)memcpy((char *)v48 + v290, src, v53);
      v290 += v53;
      src += v53;
      n -= v53;
      if ( v290 == 32 )
      {
        v47 = sub_30D7C8(v48);
        v46 = sub_30D7C8(v48 + 1);
        v45 = sub_30D7C8(v48 + 2);
        v44 = sub_30D7C8(v48 + 3);
        v43 = sub_30D7C8(v48 + 4);
        v42 = sub_30D7C8(v48 + 5);
        v41 = sub_30D7C8(v48 + 6);
        result = sub_30D7C8(v48 + 7);
        v33 = v63 ^ v126 ^ v189 ^ v249;
        v34 = v72 ^ v135 ^ v198 ^ v256;
        v35 = v79 ^ v142 ^ v205 ^ v261;
        v36 = v54 ^ v117 ^ v180 ^ v243 ^ v88 ^ v151 ^ v214 ^ v268;
        v37 = v54 ^ v117 ^ v180 ^ v243 ^ v96 ^ v159 ^ v222 ^ v274;
        v38 = v104 ^ v167 ^ v230 ^ v280;
        v39 = v54 ^ v117 ^ v180 ^ v243 ^ v112 ^ v175 ^ v238 ^ v286;
        v40 = v54 ^ v117 ^ v180 ^ v243;
        v287 = v40 ^ v286;
        v281 = v39 ^ v280;
        v275 = v38 ^ v274;
        v269 = v37 ^ v268;
        v262 = v36 ^ v261;
        v257 = v35 ^ v256;
        v250 = v34 ^ v249;
        v239 = v40 ^ v238;
        v231 = v39 ^ v230;
        v223 = v38 ^ v222;
        v215 = v37 ^ v214;
        v206 = v36 ^ v205;
        v199 = v35 ^ v198;
        v190 = v34 ^ v189;
        v181 = v33 ^ v180;
        v176 = v40 ^ v175;
        v168 = v39 ^ v167;
        v160 = v38 ^ v159;
        v152 = v37 ^ v151;
        v143 = v36 ^ v142;
        v136 = v35 ^ v135;
        v127 = v34 ^ v126;
        v118 = v33 ^ v117;
        v113 = v40 ^ v112;
        v105 = v39 ^ v104;
        v97 = v38 ^ v96;
        v89 = v37 ^ v88;
        v80 = v36 ^ v79;
        v73 = v35 ^ v72;
        v64 = v34 ^ v63;
        v55 = v33 ^ v54;
        v32 = v113 ^ v33 ^ v243;
        v31 = v105 ^ v33 ^ v243 ^ v287;
        v30 = v97 ^ v281;
        v29 = v89 ^ v33 ^ v243 ^ v275;
        v28 = v80 ^ v33 ^ v243 ^ v269;
        v27 = v73 ^ v262;
        v26 = v64 ^ v257;
        v25 = v55 ^ v250;
        v24 = v55;
        v56 = v64;
        v65 = v73;
        v74 = v80;
        v81 = v24 ^ v89;
        v90 = v24 ^ v97;
        v98 = v105;
        v106 = v24 ^ v113;
        v114 = v176 ^ v24;
        v107 = v168 ^ v106;
        v99 = v160 ^ v98;
        v91 = v152 ^ v90;
        v82 = v143 ^ v81;
        v75 = v136 ^ v74;
        v66 = v127 ^ v65;
        v57 = v118 ^ v56;
        v23 = v118;
        v119 = v127;
        v128 = v136;
        v137 = v143;
        v144 = v23 ^ v152;
        v153 = v23 ^ v160;
        v161 = v168;
        v169 = v23 ^ v176;
        v177 = v239 ^ v23;
        v170 = v231 ^ v169;
        v162 = v223 ^ v161;
        v154 = v215 ^ v153;
        v145 = v206 ^ v144;
        v138 = v199 ^ v137;
        v129 = v190 ^ v128;
        v120 = v181 ^ v119;
        v22 = v181;
        v182 = v190;
        v191 = v199;
        v200 = v206;
        v207 = v22 ^ v215;
        v216 = v22 ^ v223;
        v224 = v231;
        v232 = v22 ^ v239;
        v240 = v287 ^ v22;
        v233 = v281 ^ v232;
        v225 = v275 ^ v224;
        v217 = v269 ^ v216;
        v208 = v262 ^ v207;
        v201 = v257 ^ v200;
        v192 = v250 ^ v191;
        v183 = v33 ^ v243 ^ v182;
        v286 = v47 ^ v32;
        v280 = v46 ^ v31;
        v274 = v45 ^ v30;
        v268 = v44 ^ v29;
        v261 = v43 ^ v28;
        v256 = v42 ^ v27;
        v249 = v41 ^ v26;
        v243 = result ^ v25;
        v238 = result ^ v240;
        v230 = result ^ v47 ^ v233;
        v222 = v46 ^ v225;
        v214 = result ^ v45 ^ v217;
        v175 = v41 ^ v177;
        v167 = v41 ^ result ^ v170;
        v159 = result ^ v47 ^ v162;
        v151 = v41 ^ v46 ^ v154;
        v112 = v42 ^ v114;
        v104 = v42 ^ v41 ^ v107;
        v96 = v41 ^ result ^ v99;
        v88 = v42 ^ result ^ v47 ^ v91;
        v205 = __ROR4__(result ^ v44 ^ v208, 31);
        v198 = __ROR4__(v43 ^ v201, 31);
        v189 = __ROR4__(v42 ^ v192, 31);
        v180 = __ROR4__(v41 ^ v183, 31);
        v142 = __ROR4__(v41 ^ result ^ v45 ^ v145, 30);
        v135 = __ROR4__(result ^ v44 ^ v138, 30);
        v126 = __ROR4__(v43 ^ v129, 30);
        v117 = __ROR4__(v42 ^ v120, 30);
        v79 = __ROR4__(v42 ^ v41 ^ v46 ^ v82, 29);
        v72 = __ROR4__(v41 ^ result ^ v45 ^ v75, 29);
        v63 = __ROR4__(result ^ v44 ^ v66, 29);
        v54 = __ROR4__(v43 ^ v57, 29);
        for ( i = 0; i <= 7; ++i )
        {
          v8 = v286;
          v276 = v268 ^ v274;
          v288 = v268 ^ (v286 | v280);
          v270 = v8 & v268;
          v282 = v270 ^ ~v280;
          v271 = v276 ^ v270;
          v277 = v282 ^ v288 & v276;
          v283 = v282 | v271;
          v9 = v283 ^ v8;
          v272 = v277 ^ v271;
          v278 = v283 & v277;
          v284 = ~v288 ^ v283;
          v6 = v256;
          v244 = v261 ^ v243;
          v258 = v261 ^ (v256 | v249);
          v263 = v6 & v261;
          v251 = v263 ^ ~v249;
          v264 = v244 ^ v263;
          v245 = v251 ^ v258 & v244;
          v252 = v251 | v264;
          v7 = v252 ^ v6;
          v265 = v245 ^ v264;
          v246 = v252 & v245;
          v253 = ~v258 ^ v252;
          v266 = v9 ^ v265;
          v289 = __ROR4__(v9, 30) ^ v266;
          v267 = __ROR4__(v266, 18) ^ v289;
          v259 = v284 ^ v7;
          v285 = __ROR4__(v284, 30) ^ v284 ^ v7;
          v260 = __ROR4__(v259, 18) ^ v285;
          v280 = __ROR4__(v285, 22) ^ v260;
          v256 = __ROR4__(v260, 31);
          v254 = v278 ^ v253;
          v279 = __ROR4__(v278, 30) ^ v254;
          v255 = __ROR4__(v254, 18) ^ v279;
          v274 = __ROR4__(v279, 22) ^ v255;
          v249 = __ROR4__(v255, 31);
          v247 = v272 ^ v246;
          v273 = __ROR4__(v272, 30) ^ v247;
          v248 = __ROR4__(v247, 18) ^ v273;
          v268 = __ROR4__(v273, 22) ^ v248;
          v243 = __ROR4__(v248, 31);
          v286 = dword_584BD8[i] ^ __ROR4__(v289, 22) ^ v267;
          v261 = dword_584BF8[i] ^ __ROR4__(v267, 31);
        }
        for ( j = 0; j <= 7; ++j )
        {
          v12 = v238;
          v226 = v214 ^ v222;
          v241 = v214 ^ (v238 | v230);
          v218 = v12 & v214;
          v234 = v218 ^ ~v230;
          v219 = v226 ^ v218;
          v227 = v234 ^ v241 & v226;
          v235 = v234 | v219;
          v13 = v235 ^ v12;
          v220 = v227 ^ v219;
          v228 = v235 & v227;
          v236 = ~v241 ^ v235;
          v10 = v198;
          v184 = v205 ^ v180;
          v202 = v205 ^ (v198 | v189);
          v209 = v10 & v205;
          v193 = v209 ^ ~v189;
          v210 = v184 ^ v209;
          v185 = v193 ^ v202 & v184;
          v194 = v193 | v210;
          v11 = v194 ^ v10;
          v211 = v185 ^ v210;
          v186 = v194 & v185;
          v195 = ~v202 ^ v194;
          v212 = v13 ^ v211;
          v242 = __ROR4__(v13, 30) ^ v212;
          v213 = __ROR4__(v212, 18) ^ v242;
          v203 = v236 ^ v11;
          v237 = __ROR4__(v236, 30) ^ v236 ^ v11;
          v204 = __ROR4__(v203, 18) ^ v237;
          v230 = __ROR4__(v237, 22) ^ v204;
          v198 = __ROR4__(v204, 31);
          v196 = v228 ^ v195;
          v229 = __ROR4__(v228, 30) ^ v196;
          v197 = __ROR4__(v196, 18) ^ v229;
          v222 = __ROR4__(v229, 22) ^ v197;
          v189 = __ROR4__(v197, 31);
          v187 = v220 ^ v186;
          v221 = __ROR4__(v220, 30) ^ v187;
          v188 = __ROR4__(v187, 18) ^ v221;
          v214 = __ROR4__(v221, 22) ^ v188;
          v180 = __ROR4__(v188, 31);
          v238 = dword_584C18[j] ^ __ROR4__(v242, 22) ^ v213;
          v205 = dword_584C38[j] ^ __ROR4__(v213, 31);
        }
        for ( k = 0; k <= 7; ++k )
        {
          v16 = v175;
          v163 = v151 ^ v159;
          v178 = v151 ^ (v175 | v167);
          v155 = v16 & v151;
          v171 = v155 ^ ~v167;
          v156 = v163 ^ v155;
          v164 = v171 ^ v178 & v163;
          v172 = v171 | v156;
          v17 = v172 ^ v16;
          v157 = v164 ^ v156;
          v165 = v172 & v164;
          v173 = ~v178 ^ v172;
          v14 = v135;
          v121 = v142 ^ v117;
          v139 = v142 ^ (v135 | v126);
          v146 = v14 & v142;
          v130 = v146 ^ ~v126;
          v147 = v121 ^ v146;
          v122 = v130 ^ v139 & v121;
          v131 = v130 | v147;
          v15 = v131 ^ v14;
          v148 = v122 ^ v147;
          v123 = v131 & v122;
          v132 = ~v139 ^ v131;
          v149 = v17 ^ v148;
          v179 = __ROR4__(v17, 30) ^ v149;
          v150 = __ROR4__(v149, 18) ^ v179;
          v140 = v173 ^ v15;
          v174 = __ROR4__(v173, 30) ^ v173 ^ v15;
          v141 = __ROR4__(v140, 18) ^ v174;
          v167 = __ROR4__(v174, 22) ^ v141;
          v135 = __ROR4__(v141, 31);
          v133 = v165 ^ v132;
          v166 = __ROR4__(v165, 30) ^ v133;
          v134 = __ROR4__(v133, 18) ^ v166;
          v159 = __ROR4__(v166, 22) ^ v134;
          v126 = __ROR4__(v134, 31);
          v124 = v157 ^ v123;
          v158 = __ROR4__(v157, 30) ^ v124;
          v125 = __ROR4__(v124, 18) ^ v158;
          v151 = __ROR4__(v158, 22) ^ v125;
          v117 = __ROR4__(v125, 31);
          v175 = dword_584C58[k] ^ __ROR4__(v179, 22) ^ v150;
          v142 = dword_584C78[k] ^ __ROR4__(v150, 31);
        }
        for ( m = 0; m <= 7; ++m )
        {
          v20 = v112;
          v100 = v88 ^ v96;
          v115 = v88 ^ (v112 | v104);
          v92 = v20 & v88;
          v108 = v92 ^ ~v104;
          v93 = v100 ^ v92;
          v101 = v108 ^ v115 & v100;
          v109 = v108 | v93;
          v21 = v109 ^ v20;
          v94 = v101 ^ v93;
          v102 = v109 & v101;
          v110 = ~v115 ^ v109;
          v18 = v72;
          v58 = v79 ^ v54;
          v76 = v79 ^ (v72 | v63);
          v83 = v18 & v79;
          v67 = v83 ^ ~v63;
          v84 = v58 ^ v83;
          v59 = v67 ^ v76 & v58;
          v68 = v67 | v84;
          v19 = v68 ^ v18;
          v85 = v59 ^ v84;
          v60 = v68 & v59;
          v69 = ~v76 ^ v68;
          v86 = v21 ^ v85;
          v116 = __ROR4__(v21, 30) ^ v86;
          v87 = __ROR4__(v86, 18) ^ v116;
          v77 = v110 ^ v19;
          v111 = __ROR4__(v110, 30) ^ v110 ^ v19;
          v78 = __ROR4__(v77, 18) ^ v111;
          v104 = __ROR4__(v111, 22) ^ v78;
          v72 = __ROR4__(v78, 31);
          v70 = v102 ^ v69;
          v103 = __ROR4__(v102, 30) ^ v70;
          v71 = __ROR4__(v70, 18) ^ v103;
          v96 = __ROR4__(v103, 22) ^ v71;
          v63 = __ROR4__(v71, 31);
          v61 = v94 ^ v60;
          v95 = __ROR4__(v94, 30) ^ v61;
          v62 = __ROR4__(v61, 18) ^ v95;
          v88 = __ROR4__(v95, 22) ^ v62;
          v54 = __ROR4__(v62, 31);
          v112 = dword_584C98[m] ^ __ROR4__(v116, 22) ^ v87;
          v79 = dword_584CB8[m] ^ __ROR4__(v87, 31);
        }
        v290 = 0;
      }
    }
    v5[9] = v286;
    v5[10] = v280;
    v5[11] = v274;
    v5[12] = v268;
    v5[13] = v261;
    v5[14] = v256;
    v5[15] = v249;
    v5[16] = v243;
    v5[17] = v238;
    v5[18] = v230;
    v5[19] = v222;
    v5[20] = v214;
    v5[21] = v205;
    v5[22] = v198;
    v5[23] = v189;
    v5[24] = v180;
    v5[25] = v175;
    v5[26] = v167;
    v5[27] = v159;
    v5[28] = v151;
    v5[29] = v142;
    v5[30] = v135;
    v5[31] = v126;
    v5[32] = v117;
    v5[33] = v112;
    v5[34] = v104;
    v5[35] = v96;
    v5[36] = v88;
    v5[37] = v79;
    v5[38] = v72;
    v5[39] = v63;
    v5[40] = v54;
    v5[8] = v290;
  }
  else
  {
    result = (unsigned int)memcpy((void *)(result + v290), a2, a3);
    v5[8] = v290 + n;
  }
  return result;
}
