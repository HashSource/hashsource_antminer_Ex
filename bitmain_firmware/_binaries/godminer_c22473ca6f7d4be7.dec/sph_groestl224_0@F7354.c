void *__fastcall sph_groestl224_0(_DWORD *a1, char *a2, size_t a3)
{
  int v3; // r8
  _BYTE *v4; // r6
  int *v5; // r7
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // lr
  int v10; // r2
  int v11; // r3
  int v12; // r4
  int v13; // r3
  size_t v14; // r4
  char *v15; // r0
  int *v16; // r12
  _BYTE *v17; // r0
  int *v18; // r1
  _DWORD *v19; // r3
  int v20; // r6
  int v21; // t1
  int v22; // t1
  int v23; // r4
  int v24; // r2
  int v25; // lr
  int v26; // r11
  int v27; // r3
  unsigned int v28; // r6
  unsigned int v29; // r4
  int v30; // r0
  unsigned int v31; // r5
  int v32; // r9
  unsigned int v33; // r3
  unsigned int v34; // r2
  int v35; // r10
  _QWORD *v36; // r4
  _QWORD *v37; // lr
  _DWORD *v38; // r12
  int v39; // r0
  int v40; // r9
  int v41; // r12
  int v42; // r11
  int *v43; // r10
  int v44; // r12
  int v45; // r10
  int v46; // r8
  _QWORD *v47; // r4
  int v48; // r5
  _DWORD *v49; // r12
  int v50; // r5
  int v51; // r1
  int v52; // r1
  int v53; // r3
  int v54; // r0
  __int64 v55; // r0
  int v56; // r9
  int v57; // r2
  int v58; // r11
  int v59; // r3
  _QWORD *v60; // r8
  _QWORD *v61; // r4
  int v62; // r5
  _QWORD *v63; // r6
  int v64; // r3
  int v65; // r4
  unsigned int v66; // r7
  unsigned int v67; // r9
  unsigned int v68; // r12
  _QWORD *v69; // lr
  __int64 v70; // r10
  int v71; // r8
  _QWORD *v72; // r9
  int v73; // r6
  __int64 v74; // r2
  int v75; // r12
  int v76; // r4
  int *v77; // r5
  int v78; // lr
  __int64 v79; // r2
  int v80; // r7
  int v81; // r5
  int v82; // r4
  int v83; // r5
  int v84; // r7
  int v85; // r12
  int v86; // r6
  int v87; // r12
  int v88; // r9
  int v89; // r9
  int v90; // r7
  int v91; // r8
  int v92; // r6
  int v93; // r9
  int v94; // r7
  int v95; // r2
  int v96; // r7
  int v97; // r0
  int v98; // r9
  int v99; // r6
  int v100; // r10
  int v101; // r2
  int v102; // r3
  int v103; // r12
  unsigned int v104; // r8
  int v105; // lr
  _QWORD *v106; // r7
  _QWORD *v107; // r10
  _QWORD *v108; // r4
  int v109; // r2
  unsigned int v110; // r8
  int v111; // r10
  int v112; // r12
  _QWORD *v113; // r11
  int v114; // r4
  _QWORD *v115; // r5
  int v116; // lr
  int v117; // r3
  int v118; // r1
  int v119; // r4
  int v120; // r5
  int v121; // r1
  int v122; // r2
  _QWORD *v123; // r5
  int v124; // r12
  int v125; // r1
  _QWORD *v126; // r11
  int v127; // r2
  int v128; // r1
  int v129; // lr
  int v130; // r2
  int v131; // r7
  unsigned int v132; // r3
  int v133; // r1
  int v134; // r2
  __int64 v135; // r0
  int v136; // r3
  unsigned int v137; // r2
  __int64 v138; // r0
  int v139; // r3
  unsigned int v140; // r7
  int *v141; // r3
  int v142; // r2
  __int64 v143; // r8
  _QWORD *v144; // r12
  int v145; // r4
  __int64 v146; // r10
  int v147; // r3
  int v148; // r2
  int v149; // r6
  int v150; // r7
  int v151; // r12
  int v152; // lr
  int v153; // r2
  int v154; // r4
  int v155; // r2
  _QWORD *v156; // r7
  int v157; // r12
  int v158; // r2
  int v159; // r12
  int v160; // r7
  int v161; // r6
  int v162; // r5
  int v163; // r3
  int v164; // r7
  int v165; // r11
  int *v166; // r12
  __int64 *v167; // r0
  int v168; // r5
  int v169; // r4
  int v170; // r3
  int v171; // r2
  int v172; // lr
  int v173; // t1
  int v174; // r4
  int v175; // r2
  _DWORD *v176; // r12
  __int64 *v177; // r5
  void *result; // r0
  int v179; // r1
  int v180; // r2
  int v181; // r3
  size_t v183; // r4
  __int64 v184; // [sp+0h] [bp-1BCh]
  __int64 v185; // [sp+0h] [bp-1BCh]
  int v186; // [sp+8h] [bp-1B4h]
  int v187; // [sp+Ch] [bp-1B0h]
  __int64 v188; // [sp+10h] [bp-1ACh]
  int v189; // [sp+10h] [bp-1ACh]
  int v190; // [sp+10h] [bp-1ACh]
  unsigned int v191; // [sp+10h] [bp-1ACh]
  int v192; // [sp+10h] [bp-1ACh]
  int v193; // [sp+14h] [bp-1A8h]
  int v194; // [sp+14h] [bp-1A8h]
  unsigned int v195; // [sp+14h] [bp-1A8h]
  _QWORD *v196; // [sp+14h] [bp-1A8h]
  int v197; // [sp+18h] [bp-1A4h]
  unsigned int v198; // [sp+18h] [bp-1A4h]
  unsigned int v199; // [sp+18h] [bp-1A4h]
  int v200; // [sp+18h] [bp-1A4h]
  unsigned int v201; // [sp+18h] [bp-1A4h]
  _QWORD *v202; // [sp+18h] [bp-1A4h]
  unsigned int v203; // [sp+1Ch] [bp-1A0h]
  unsigned int v204; // [sp+1Ch] [bp-1A0h]
  int v205; // [sp+1Ch] [bp-1A0h]
  int v206; // [sp+1Ch] [bp-1A0h]
  unsigned int v207; // [sp+1Ch] [bp-1A0h]
  int v208; // [sp+1Ch] [bp-1A0h]
  int v209; // [sp+20h] [bp-19Ch]
  unsigned int v210; // [sp+20h] [bp-19Ch]
  int v211; // [sp+20h] [bp-19Ch]
  int v212; // [sp+20h] [bp-19Ch]
  unsigned int v213; // [sp+20h] [bp-19Ch]
  int v214; // [sp+20h] [bp-19Ch]
  unsigned int v215; // [sp+20h] [bp-19Ch]
  int v216; // [sp+20h] [bp-19Ch]
  int v217; // [sp+20h] [bp-19Ch]
  unsigned int v218; // [sp+24h] [bp-198h]
  unsigned int v219; // [sp+24h] [bp-198h]
  int v220; // [sp+24h] [bp-198h]
  unsigned int v221; // [sp+24h] [bp-198h]
  unsigned int v222; // [sp+24h] [bp-198h]
  int v223; // [sp+28h] [bp-194h]
  unsigned int v224; // [sp+28h] [bp-194h]
  unsigned int v225; // [sp+28h] [bp-194h]
  int v226; // [sp+28h] [bp-194h]
  unsigned int v227; // [sp+28h] [bp-194h]
  int v228; // [sp+28h] [bp-194h]
  unsigned int v229; // [sp+2Ch] [bp-190h]
  unsigned int v230; // [sp+2Ch] [bp-190h]
  int v231; // [sp+2Ch] [bp-190h]
  unsigned int v232; // [sp+2Ch] [bp-190h]
  unsigned int v233; // [sp+2Ch] [bp-190h]
  int v234; // [sp+2Ch] [bp-190h]
  int v235; // [sp+30h] [bp-18Ch]
  unsigned int v236; // [sp+30h] [bp-18Ch]
  _QWORD *v237; // [sp+30h] [bp-18Ch]
  unsigned int v238; // [sp+30h] [bp-18Ch]
  int v239; // [sp+30h] [bp-18Ch]
  unsigned int v240; // [sp+30h] [bp-18Ch]
  unsigned int v241; // [sp+30h] [bp-18Ch]
  int v242; // [sp+34h] [bp-188h]
  _QWORD *v243; // [sp+34h] [bp-188h]
  unsigned int v244; // [sp+34h] [bp-188h]
  unsigned int v245; // [sp+34h] [bp-188h]
  unsigned int v246; // [sp+34h] [bp-188h]
  int v247; // [sp+34h] [bp-188h]
  int v248; // [sp+38h] [bp-184h]
  unsigned int v249; // [sp+38h] [bp-184h]
  _QWORD *v250; // [sp+38h] [bp-184h]
  unsigned int v251; // [sp+38h] [bp-184h]
  int v252; // [sp+38h] [bp-184h]
  unsigned int v253; // [sp+38h] [bp-184h]
  int v254; // [sp+38h] [bp-184h]
  int v255; // [sp+3Ch] [bp-180h]
  unsigned int v256; // [sp+3Ch] [bp-180h]
  unsigned int v257; // [sp+3Ch] [bp-180h]
  int v258; // [sp+3Ch] [bp-180h]
  int v259; // [sp+3Ch] [bp-180h]
  unsigned int v260; // [sp+3Ch] [bp-180h]
  _QWORD *v261; // [sp+3Ch] [bp-180h]
  int v262; // [sp+40h] [bp-17Ch]
  int v263; // [sp+40h] [bp-17Ch]
  int v264; // [sp+40h] [bp-17Ch]
  unsigned int v265; // [sp+40h] [bp-17Ch]
  __int16 v266; // [sp+40h] [bp-17Ch]
  _QWORD *v267; // [sp+40h] [bp-17Ch]
  unsigned int v268; // [sp+40h] [bp-17Ch]
  _QWORD *v269; // [sp+40h] [bp-17Ch]
  size_t n; // [sp+44h] [bp-178h]
  int v271; // [sp+48h] [bp-174h]
  int v272; // [sp+48h] [bp-174h]
  int v273; // [sp+48h] [bp-174h]
  unsigned int v274; // [sp+48h] [bp-174h]
  int v275; // [sp+48h] [bp-174h]
  unsigned int v276; // [sp+48h] [bp-174h]
  int v277; // [sp+48h] [bp-174h]
  int v278; // [sp+4Ch] [bp-170h]
  int v279; // [sp+4Ch] [bp-170h]
  int v280; // [sp+4Ch] [bp-170h]
  unsigned int v281; // [sp+4Ch] [bp-170h]
  int v282; // [sp+50h] [bp-16Ch]
  unsigned int v283; // [sp+50h] [bp-16Ch]
  int v284; // [sp+50h] [bp-16Ch]
  unsigned int v285; // [sp+50h] [bp-16Ch]
  __int64 v286; // [sp+50h] [bp-16Ch]
  int v287; // [sp+54h] [bp-168h]
  int v288; // [sp+54h] [bp-168h]
  int v289; // [sp+54h] [bp-168h]
  _QWORD *v290; // [sp+54h] [bp-168h]
  unsigned int v291; // [sp+54h] [bp-168h]
  unsigned int v292; // [sp+54h] [bp-168h]
  _QWORD *v293; // [sp+54h] [bp-168h]
  int v294; // [sp+58h] [bp-164h]
  unsigned int v295; // [sp+58h] [bp-164h]
  int v296; // [sp+58h] [bp-164h]
  _QWORD *v297; // [sp+58h] [bp-164h]
  int v298; // [sp+58h] [bp-164h]
  unsigned int v299; // [sp+58h] [bp-164h]
  _DWORD *v300; // [sp+5Ch] [bp-160h]
  int v301; // [sp+5Ch] [bp-160h]
  int v302; // [sp+5Ch] [bp-160h]
  int v303; // [sp+5Ch] [bp-160h]
  _QWORD *v304; // [sp+5Ch] [bp-160h]
  _DWORD *v305; // [sp+5Ch] [bp-160h]
  _QWORD *v306; // [sp+5Ch] [bp-160h]
  int v307; // [sp+5Ch] [bp-160h]
  unsigned int v308; // [sp+5Ch] [bp-160h]
  _QWORD *v309; // [sp+60h] [bp-15Ch]
  _QWORD *v310; // [sp+60h] [bp-15Ch]
  int v311; // [sp+60h] [bp-15Ch]
  unsigned int v312; // [sp+60h] [bp-15Ch]
  _QWORD *v313; // [sp+64h] [bp-158h]
  int v314; // [sp+64h] [bp-158h]
  int v315; // [sp+64h] [bp-158h]
  _DWORD *v316; // [sp+64h] [bp-158h]
  _QWORD *v317; // [sp+64h] [bp-158h]
  int v318; // [sp+64h] [bp-158h]
  unsigned int v319; // [sp+64h] [bp-158h]
  unsigned int v320; // [sp+68h] [bp-154h]
  _QWORD *v321; // [sp+68h] [bp-154h]
  _QWORD *v322; // [sp+68h] [bp-154h]
  int v323; // [sp+68h] [bp-154h]
  int v324; // [sp+68h] [bp-154h]
  __int64 v325; // [sp+6Ch] [bp-150h]
  unsigned int v326; // [sp+70h] [bp-14Ch]
  int v327; // [sp+74h] [bp-148h]
  int v328; // [sp+74h] [bp-148h]
  _QWORD *v329; // [sp+74h] [bp-148h]
  __int64 v330; // [sp+74h] [bp-148h]
  int v331; // [sp+78h] [bp-144h]
  int v332; // [sp+78h] [bp-144h]
  _QWORD *v333; // [sp+78h] [bp-144h]
  _DWORD *v334; // [sp+78h] [bp-144h]
  _QWORD *v335; // [sp+7Ch] [bp-140h]
  _QWORD *v336; // [sp+7Ch] [bp-140h]
  _QWORD *v337; // [sp+7Ch] [bp-140h]
  _QWORD *v338; // [sp+7Ch] [bp-140h]
  int v339; // [sp+7Ch] [bp-140h]
  _QWORD *v340; // [sp+7Ch] [bp-140h]
  _QWORD *v341; // [sp+7Ch] [bp-140h]
  _DWORD *v342; // [sp+7Ch] [bp-140h]
  _DWORD *v343; // [sp+80h] [bp-13Ch]
  int v344; // [sp+80h] [bp-13Ch]
  int v345; // [sp+80h] [bp-13Ch]
  int v346; // [sp+80h] [bp-13Ch]
  _QWORD *v347; // [sp+80h] [bp-13Ch]
  _QWORD *v348; // [sp+80h] [bp-13Ch]
  int v349; // [sp+80h] [bp-13Ch]
  char *src; // [sp+84h] [bp-138h]
  _QWORD *v351; // [sp+88h] [bp-134h]
  _QWORD *v352; // [sp+88h] [bp-134h]
  int v353; // [sp+88h] [bp-134h]
  int v354; // [sp+88h] [bp-134h]
  int v355; // [sp+88h] [bp-134h]
  _QWORD *v356; // [sp+88h] [bp-134h]
  int v357; // [sp+8Ch] [bp-130h]
  _DWORD *v358; // [sp+8Ch] [bp-130h]
  int v359; // [sp+8Ch] [bp-130h]
  _QWORD *v360; // [sp+8Ch] [bp-130h]
  _QWORD *v361; // [sp+8Ch] [bp-130h]
  _QWORD *v362; // [sp+90h] [bp-12Ch]
  int v363; // [sp+90h] [bp-12Ch]
  _QWORD *v364; // [sp+90h] [bp-12Ch]
  _QWORD *v365; // [sp+90h] [bp-12Ch]
  _QWORD *v366; // [sp+90h] [bp-12Ch]
  _QWORD *v367; // [sp+90h] [bp-12Ch]
  _QWORD *v368; // [sp+94h] [bp-128h]
  int v369; // [sp+94h] [bp-128h]
  int v370; // [sp+94h] [bp-128h]
  int v371; // [sp+94h] [bp-128h]
  _QWORD *v372; // [sp+98h] [bp-124h]
  int v373; // [sp+98h] [bp-124h]
  int v374; // [sp+98h] [bp-124h]
  _QWORD *v375; // [sp+98h] [bp-124h]
  _QWORD *v376; // [sp+98h] [bp-124h]
  int v377; // [sp+9Ch] [bp-120h]
  int v378; // [sp+9Ch] [bp-120h]
  int v379; // [sp+9Ch] [bp-120h]
  _QWORD *v380; // [sp+9Ch] [bp-120h]
  int v381; // [sp+9Ch] [bp-120h]
  int v382; // [sp+9Ch] [bp-120h]
  _QWORD *v383; // [sp+A0h] [bp-11Ch]
  _DWORD *v384; // [sp+A0h] [bp-11Ch]
  _QWORD *v385; // [sp+A0h] [bp-11Ch]
  _QWORD *v386; // [sp+A0h] [bp-11Ch]
  int v387; // [sp+A4h] [bp-118h]
  _QWORD *v388; // [sp+A4h] [bp-118h]
  _QWORD *v389; // [sp+A4h] [bp-118h]
  int v390; // [sp+A4h] [bp-118h]
  _QWORD *v391; // [sp+A8h] [bp-114h]
  int v392; // [sp+A8h] [bp-114h]
  int v393; // [sp+A8h] [bp-114h]
  int v394; // [sp+A8h] [bp-114h]
  _QWORD *v395; // [sp+A8h] [bp-114h]
  _QWORD *v396; // [sp+ACh] [bp-110h]
  _DWORD *v397; // [sp+ACh] [bp-110h]
  int v398; // [sp+ACh] [bp-110h]
  _QWORD *v399; // [sp+ACh] [bp-110h]
  _QWORD *v400; // [sp+ACh] [bp-110h]
  int v401; // [sp+B0h] [bp-10Ch]
  unsigned int v402; // [sp+B0h] [bp-10Ch]
  _QWORD *v403; // [sp+B0h] [bp-10Ch]
  _QWORD *v404; // [sp+B0h] [bp-10Ch]
  _QWORD *v405; // [sp+B0h] [bp-10Ch]
  int v406; // [sp+B4h] [bp-108h]
  int v407; // [sp+B4h] [bp-108h]
  _QWORD *v408; // [sp+B4h] [bp-108h]
  int v409; // [sp+B4h] [bp-108h]
  _QWORD *v410; // [sp+B4h] [bp-108h]
  int v411; // [sp+B8h] [bp-104h]
  _QWORD *v412; // [sp+B8h] [bp-104h]
  unsigned int v413; // [sp+B8h] [bp-104h]
  int v414; // [sp+B8h] [bp-104h]
  _QWORD *v415; // [sp+BCh] [bp-100h]
  _DWORD *v416; // [sp+BCh] [bp-100h]
  int v417; // [sp+BCh] [bp-100h]
  int v418; // [sp+BCh] [bp-100h]
  _QWORD *v419; // [sp+C0h] [bp-FCh]
  int v420; // [sp+C0h] [bp-FCh]
  int v421; // [sp+C0h] [bp-FCh]
  int v422; // [sp+C0h] [bp-FCh]
  int v423; // [sp+C4h] [bp-F8h]
  _QWORD *v424; // [sp+C4h] [bp-F8h]
  int v425; // [sp+C4h] [bp-F8h]
  int v426; // [sp+C4h] [bp-F8h]
  int v427; // [sp+C4h] [bp-F8h]
  int v428; // [sp+C4h] [bp-F8h]
  int v429; // [sp+C8h] [bp-F4h]
  _QWORD *v430; // [sp+C8h] [bp-F4h]
  int v431; // [sp+C8h] [bp-F4h]
  unsigned int v432; // [sp+C8h] [bp-F4h]
  int v433; // [sp+CCh] [bp-F0h]
  int v434; // [sp+CCh] [bp-F0h]
  int v435; // [sp+CCh] [bp-F0h]
  int v436; // [sp+CCh] [bp-F0h]
  int v437; // [sp+D0h] [bp-ECh]
  int v438; // [sp+D0h] [bp-ECh]
  int v439; // [sp+D0h] [bp-ECh]
  int v440; // [sp+D0h] [bp-ECh]
  unsigned int v441; // [sp+D0h] [bp-ECh]
  unsigned int v442; // [sp+D0h] [bp-ECh]
  unsigned int v443; // [sp+D4h] [bp-E8h]
  int v444; // [sp+D4h] [bp-E8h]
  unsigned int v445; // [sp+D8h] [bp-E4h]
  unsigned int v446; // [sp+D8h] [bp-E4h]
  int v447; // [sp+DCh] [bp-E0h]
  int v448; // [sp+E0h] [bp-DCh]
  int v449; // [sp+E4h] [bp-D8h]
  int v451; // [sp+F0h] [bp-CCh] BYREF
  _DWORD *v452; // [sp+F4h] [bp-C8h]
  _BYTE v453[56]; // [sp+F8h] [bp-C4h] BYREF
  _BYTE v454[8]; // [sp+130h] [bp-8Ch] BYREF
  __int64 v455; // [sp+138h] [bp-84h] BYREF
  int v456; // [sp+140h] [bp-7Ch] BYREF
  int v457; // [sp+144h] [bp-78h]
  int v458; // [sp+148h] [bp-74h]
  int v459; // [sp+14Ch] [bp-70h]
  int v460; // [sp+150h] [bp-6Ch]
  int v461; // [sp+154h] [bp-68h]
  int v462; // [sp+158h] [bp-64h]
  int v463; // [sp+15Ch] [bp-60h]
  int v464; // [sp+160h] [bp-5Ch]
  int v465; // [sp+164h] [bp-58h]
  int v466; // [sp+168h] [bp-54h]
  int v467; // [sp+16Ch] [bp-50h]
  int v468; // [sp+170h] [bp-4Ch] BYREF
  int v469; // [sp+174h] [bp-48h]
  int v470; // [sp+178h] [bp-44h]
  int v471; // [sp+17Ch] [bp-40h]
  __int64 v472; // [sp+180h] [bp-3Ch] BYREF
  int v473; // [sp+188h] [bp-34h]
  int v474; // [sp+18Ch] [bp-30h]
  int v475; // [sp+190h] [bp-2Ch]
  int v476; // [sp+194h] [bp-28h]
  int v477; // [sp+198h] [bp-24h]
  int v478; // [sp+19Ch] [bp-20h]
  int v479; // [sp+1A0h] [bp-1Ch]
  int v480; // [sp+1A4h] [bp-18h]
  int v481; // [sp+1A8h] [bp-14h]
  int v482; // [sp+1ACh] [bp-10h]
  int v483; // [sp+1B0h] [bp-Ch]
  int v484; // [sp+1B4h] [bp-8h]

  v3 = a1[16];
  n = a3;
  src = a2;
  if ( 64 - v3 > a3 )
  {
    v183 = v3 + a3;
    result = memcpy((char *)a1 + v3, a2, a3);
    a1[16] = v183;
  }
  else
  {
    v4 = v453;
    v5 = a1 + 34;
    v6 = a1 + 18;
    v452 = a1 + 18;
    do
    {
      v7 = *v6;
      v6 += 4;
      v8 = *(v6 - 3);
      v9 = v4;
      v10 = *(v6 - 2);
      v4 += 16;
      v11 = *(v6 - 1);
      *v9 = v7;
      v9[1] = v8;
      v9[2] = v10;
      v9[3] = v11;
    }
    while ( v6 != v5 );
    if ( n )
    {
      LOWORD(v12) = -18040;
      LOWORD(v13) = -9856;
      HIWORD(v12) = (unsigned int)&unk_14AA98 >> 16;
      HIWORD(v13) = (unsigned int)&unk_14CA90 >> 16;
      v186 = v12;
      v14 = 64 - v3;
      v187 = v13;
      while ( 1 )
      {
        if ( n < v14 )
          v14 = n;
        v15 = (char *)a1 + v3;
        v3 += v14;
        memcpy(v15, src, v14);
        n -= v14;
        src += v14;
        if ( v3 == 64 )
        {
          v451 = (int)&v451;
          v16 = &v451;
          v17 = v454;
          v18 = &v468;
          v19 = a1 - 2;
          do
          {
            v21 = v19[2];
            v19 += 2;
            v20 = v21;
            v22 = v16[2];
            v16 += 2;
            v23 = v19[1];
            v24 = v16[1];
            v18[2] = v20;
            v18 += 2;
            *((_DWORD *)v17 + 2) = v22 ^ v20;
            v17 += 8;
            v18[1] = v23;
            *((_DWORD *)v17 + 1) = v24 ^ v23;
          }
          while ( a1 + 14 != v19 );
          v184 = 0;
          v325 = v455;
          v25 = v466;
          v26 = v468;
          v271 = v469;
          v235 = v456;
          v282 = v457;
          v248 = v458;
          v262 = v459;
          v242 = v460;
          v287 = v461;
          v197 = v462;
          v209 = v463;
          v223 = v464;
          v255 = v465;
          v27 = v467;
          do
          {
            v188 = v325 ^ v184;
            v229 = v282 ^ ((unsigned __int64)(v184 + 16) >> 32);
            v203 = v262 ^ ((unsigned __int64)(v184 + 32) >> 32);
            v28 = v197 ^ (v184 + 64);
            v218 = v209 ^ ((unsigned __int64)(v184 + 64) >> 32);
            v29 = v223 ^ (v184 + 80);
            v224 = (v184 + 96) ^ v25;
            v30 = (v271 ^ ((unsigned __int64)(v184 + 112) >> 32)) >> 24;
            v263 = v271 ^ ((unsigned __int64)(v184 + 112) >> 32);
            v198 = v235 ^ (v184 + 16);
            v31 = (v184 + 32) ^ v248;
            v249 = v29;
            v32 = v255;
            v33 = v27 ^ ((unsigned __int64)(v184 + 96) >> 32);
            v210 = v287 ^ ((unsigned __int64)(v184 + 48) >> 32);
            v256 = (v184 + 112) ^ v26;
            v34 = ((unsigned __int64)(v184 + 80) >> 32) ^ v32;
            v236 = (v184 + 48) ^ v242;
            v331 = v187 + 8 * HIBYTE(v28);
            v300 = &dword_14C188[2 * ((unsigned int)(HIDWORD(v325) ^ HIDWORD(v184)) >> 24)];
            v343 = &dword_14C188[2 * HIBYTE(v229)];
            v357 = v187 + 8 * HIBYTE(v29);
            HIDWORD(v325) = HIBYTE(v33);
            v377 = v187 + 8 * HIBYTE(v224);
            v401 = v187 + 8 * HIBYTE(v256);
            v35 = dword_14C188[2 * v30 + 1];
            v406 = v187 + 8 * (((unsigned int)v325 ^ (unsigned int)v184) >> 24);
            v320 = HIBYTE(v34);
            v36 = &qword_14C990[BYTE1(v198)];
            v37 = &qword_14D190[BYTE2(v31)];
            v38 = (_DWORD *)(v186 + 8 * (unsigned __int8)(v325 ^ v184));
            v433 = v187 + 8 * HIBYTE(v31);
            v447 = (unsigned __int8)v31;
            v313 = &qword_14C990[BYTE1(v31)];
            v39 = *v38 ^ (v184 + 1) ^ dword_14C188[2 * v30] ^ *((_DWORD *)v36 - 2);
            v40 = v187 + 8 * HIBYTE(v236);
            LODWORD(v325) = &qword_14D190[BYTE2(v236)];
            v41 = v38[1] ^ ((unsigned __int64)(v184 + 1) >> 32) ^ v35;
            v335 = &qword_14E190[(unsigned __int8)v34];
            v42 = BYTE1(v33);
            v327 = BYTE2(v34);
            v43 = &dword_14F188[2 * BYTE2(v33)];
            v362 = &qword_14E190[(unsigned __int8)v33];
            v423 = *v43;
            v44 = v41 ^ *((_DWORD *)v36 - 1);
            v429 = v43[1];
            v45 = BYTE6(v188);
            v46 = (unsigned __int8)((v184 + 48) ^ v242);
            v351 = &qword_14C990[BYTE1(v236)];
            v47 = &qword_14E190[(unsigned __int8)v218];
            v48 = v300[1] ^ ((unsigned __int64)(v184 + 17) >> 32) ^ *(_DWORD *)(v186 + 8 * (unsigned __int8)v198 + 4);
            v437 = *v300 ^ (v184 + 17) ^ *(_DWORD *)(v186 + 8 * (unsigned __int8)v198);
            v383 = &qword_14E190[(unsigned __int8)(v271 ^ ((unsigned __int64)(v184 + 112) >> 32))];
            v448 = BYTE5(v188);
            v237 = &qword_14E190[BYTE4(v188)];
            v243 = &qword_14C990[BYTE1(v28)];
            v372 = &qword_14D190[BYTE2(v249)];
            v449 = BYTE2(v229);
            v301 = (unsigned __int8)v249;
            v391 = &qword_14C990[BYTE1(v249)];
            v288 = BYTE1(v229);
            v396 = &qword_14D190[BYTE2(v224)];
            v419 = &qword_14E190[(unsigned __int8)(v282 ^ ((unsigned __int64)(v184 + 16) >> 32))];
            v230 = v44
                 ^ *((_DWORD *)v37 - 1)
                 ^ *(_DWORD *)(v40 + 12)
                 ^ *((_DWORD *)v47 - 1)
                 ^ dword_14E988[2 * BYTE1(v34) + 1]
                 ^ v429;
            v294 = BYTE2(v203);
            v49 = &dword_14F188[2 * BYTE6(v188)];
            HIDWORD(v188) = v39
                          ^ *((_DWORD *)v37 - 2)
                          ^ *(_DWORD *)(v40 + 8)
                          ^ *((_DWORD *)v47 - 2)
                          ^ dword_14E988[2 * BYTE1(v34)]
                          ^ v423;
            v50 = v48 ^ *((_DWORD *)v313 - 1) ^ *(_DWORD *)(v325 - 4);
            v51 = v437 ^ *((_DWORD *)v313 - 2) ^ *(_DWORD *)(v325 - 8) ^ *(_DWORD *)(v331 + 8);
            v314 = (unsigned __int8)v224;
            v415 = &qword_14C990[BYTE1(v224)];
            v52 = v51 ^ *((_DWORD *)v335 - 2);
            v53 = dword_14E988[2 * BYTE1(v33) + 1]
                ^ v50
                ^ *(_DWORD *)(v331 + 12)
                ^ *((_DWORD *)v335 - 1)
                ^ dword_14F188[2 * BYTE2(v263) + 1];
            v332 = dword_14C188[2 * HIBYTE(v203)];
            v438 = dword_14C188[2 * HIBYTE(v203) + 1];
            v336 = &qword_14D190[BYTE2(v256)];
            v272 = BYTE1(v203);
            v424 = &qword_14E190[(unsigned __int8)v203];
            v54 = v188;
            LODWORD(v188) = v53;
            v368 = &qword_14D190[BYTE2(v54)];
            v430 = &qword_14C990[BYTE1(v54)];
            v250 = &qword_14C990[BYTE1(v256)];
            LODWORD(v325) = (unsigned __int8)v256;
            v257 = v52 ^ dword_14E988[2 * v42] ^ dword_14F188[2 * BYTE2(v263)];
            v55 = qword_14D190[BYTE2(v28) - 1];
            v204 = *v343
                 ^ dword_14F188[2 * v45]
                 ^ *(_DWORD *)(v186 + 8 * v447)
                 ^ (v184 + 33)
                 ^ *((_DWORD *)v351 - 2)
                 ^ v55
                 ^ *(_DWORD *)(v357 + 8)
                 ^ *((_DWORD *)v362 - 2)
                 ^ dword_14E988[2 * BYTE1(v263)];
            v225 = v343[1]
                 ^ v49[1]
                 ^ *(_DWORD *)(v186 + 8 * v447 + 4)
                 ^ ((unsigned __int64)(v184 + 33) >> 32)
                 ^ *((_DWORD *)v351 - 1)
                 ^ HIDWORD(v55)
                 ^ *(_DWORD *)(v357 + 12)
                 ^ *((_DWORD *)v362 - 1)
                 ^ dword_14E988[2 * BYTE1(v263) + 1];
            v56 = *((_DWORD *)v372 - 1);
            v57 = *(_DWORD *)(v186 + 8 * v46)
                ^ dword_14E988[2 * v448]
                ^ (v184 + 49)
                ^ v332
                ^ *((_DWORD *)v243 - 2)
                ^ *((_DWORD *)v372 - 2);
            v373 = dword_14E988[2 * v288 + 1];
            v58 = *((_DWORD *)v237 - 2);
            HIDWORD(v55) = v237;
            v238 = v57 ^ *(_DWORD *)(v377 + 8) ^ *((_DWORD *)v383 - 2) ^ dword_14F188[2 * v449];
            v244 = *(_DWORD *)(v377 + 12)
                 ^ *(_DWORD *)(v186 + 8 * v46 + 4)
                 ^ dword_14E988[2 * v448 + 1]
                 ^ ((unsigned __int64)(v184 + 49) >> 32)
                 ^ v438
                 ^ *((_DWORD *)v243 - 1)
                 ^ v56
                 ^ *((_DWORD *)v383 - 1)
                 ^ dword_14F188[2 * v449 + 1];
            v289 = dword_14E988[2 * v288];
            v378 = dword_14F188[2 * v294 + 1];
            v295 = dword_14F188[2 * v294];
            v59 = dword_14C188[2 * HIBYTE(v210) + 1]
                ^ *(_DWORD *)(HIDWORD(v55) - 4)
                ^ *(_DWORD *)(v186 + 8 * (unsigned __int8)v28 + 4)
                ^ ((unsigned __int64)(v184 + 65) >> 32);
            v60 = v391;
            v411 = dword_14E988[2 * v272 + 1];
            HIDWORD(v55) = *((_DWORD *)v391 - 1);
            v392 = dword_14E988[2 * v272];
            v439 = dword_14F188[2 * BYTE2(v210)];
            v61 = &qword_14D190[BYTE2(v198)];
            v264 = v187 + 8 * HIBYTE(v198);
            v278 = v59 ^ HIDWORD(v55) ^ *((_DWORD *)v396 - 1) ^ *(_DWORD *)(v401 + 12);
            v273 = dword_14C188[2 * HIBYTE(v210)]
                 ^ v58
                 ^ *(_DWORD *)(v186 + 8 * (unsigned __int8)v28)
                 ^ (v184 + 65)
                 ^ *((_DWORD *)v60 - 2)
                 ^ *((_DWORD *)v396 - 2)
                 ^ *(_DWORD *)(v401 + 8);
            v62 = (v184 + 81) ^ *(_DWORD *)(v406 + 8) ^ *(_DWORD *)(v186 + 8 * v301) ^ dword_14C188[2 * HIBYTE(v218)];
            v302 = *(_DWORD *)(v186 + 8 * v301 + 4)
                 ^ *(_DWORD *)(v406 + 12)
                 ^ ((unsigned __int64)(v184 + 81) >> 32)
                 ^ dword_14C188[2 * HIBYTE(v218) + 1];
            LODWORD(v55) = *((_DWORD *)v368 - 2) ^ *(_DWORD *)(v186 + 8 * v314);
            v63 = &qword_14E190[(unsigned __int8)v210];
            v64 = *(_DWORD *)(v186 + 8 * v314 + 4)
                ^ *((_DWORD *)v368 - 1)
                ^ ((unsigned __int64)(v184 + 97) >> 32)
                ^ dword_14C188[2 * v320 + 1];
            v315 = *((_DWORD *)v61 - 1);
            HIDWORD(v55) = *(_DWORD *)(v186 + 8 * v325)
                         ^ *((_DWORD *)v430 - 2)
                         ^ (v184 + 113)
                         ^ dword_14C188[2 * HIDWORD(v325)]
                         ^ *((_DWORD *)v61 - 2);
            v65 = dword_14E988[2 * BYTE1(v218)];
            v199 = v278 ^ v373 ^ v378;
            LODWORD(v55) = v55
                         ^ (v184 + 97)
                         ^ dword_14C188[2 * v320]
                         ^ *((_DWORD *)v250 - 2)
                         ^ *(_DWORD *)(v264 + 8)
                         ^ *((_DWORD *)v424 - 2)
                         ^ dword_14E988[2 * BYTE1(v210)]
                         ^ dword_14F188[2 * BYTE2(v218)];
            v66 = dword_14F188[2 * BYTE2(v218) + 1]
                ^ v64
                ^ *((_DWORD *)v250 - 1)
                ^ *(_DWORD *)(v264 + 12)
                ^ *((_DWORD *)v424 - 1)
                ^ dword_14E988[2 * BYTE1(v210) + 1];
            v219 = *(_DWORD *)(v186 + 8 * v325 + 4)
                 ^ *((_DWORD *)v430 - 1)
                 ^ ((unsigned __int64)(v184 + 113) >> 32)
                 ^ dword_14C188[2 * HIDWORD(v325) + 1]
                 ^ v315
                 ^ *(_DWORD *)(v433 + 12)
                 ^ *((_DWORD *)v63 - 1)
                 ^ dword_14E988[2 * BYTE1(v218) + 1]
                 ^ dword_14F188[2 * v327 + 1];
            v67 = (v273 ^ v289 ^ v295) >> 24;
            v68 = v302
                ^ *((_DWORD *)v415 - 1)
                ^ *((_DWORD *)v336 - 1)
                ^ *((_DWORD *)v419 - 1)
                ^ v411
                ^ dword_14F188[2 * BYTE2(v210) + 1];
            v211 = v273 ^ v289 ^ v295;
            v326 = v62 ^ *((_DWORD *)v415 - 2) ^ *((_DWORD *)v336 - 2) ^ *((_DWORD *)v419 - 2) ^ v392 ^ v439;
            v402 = HIDWORD(v55) ^ *(_DWORD *)(v433 + 8) ^ *((_DWORD *)v63 - 2) ^ v65 ^ dword_14F188[2 * v327];
            v265 = HIBYTE(v225);
            v251 = BYTE3(v188);
            v274 = HIBYTE(v244);
            v363 = v55;
            v296 = v187 + 8 * HIBYTE(v238);
            v303 = v187 + 8 * v67;
            v316 = &dword_14C188[2 * BYTE3(v188)];
            v369 = v187 + 8 * HIBYTE(v402);
            v328 = v187 + 8 * HIBYTE(v326);
            v344 = v187 + 8 * BYTE3(v55);
            v358 = &dword_14C188[2 * HIBYTE(v244)];
            v384 = &dword_14C188[2 * HIBYTE(v199)];
            v445 = HIBYTE(v66);
            v374 = v187 + 8 * HIBYTE(HIDWORD(v188));
            v416 = &dword_14C188[2 * HIBYTE(v66)];
            v393 = v187 + 8 * HIBYTE(v257);
            v420 = v187 + 8 * HIBYTE(v204);
            v69 = &qword_14C990[BYTE1(v257)];
            v397 = &dword_14C188[2 * HIBYTE(v68)];
            HIDWORD(v55) = (unsigned __int8)v257;
            v443 = HIBYTE(v68);
            v309 = &qword_14E190[(unsigned __int8)v68];
            v412 = &qword_14D190[BYTE2(v257)];
            v184 += 2;
            v387 = *((_DWORD *)v69 - 1) ^ dword_14C188[2 * HIBYTE(v219) + 1];
            v407 = (unsigned __int8)v204;
            v290 = &qword_14D190[BYTE2(v204)];
            v70 = qword_14C990[BYTE1(v204) - 1];
            v71 = BYTE2(v66);
            v379 = *((_DWORD *)v69 - 2) ^ dword_14C188[2 * HIBYTE(v219)];
            LODWORD(v55) = *(_DWORD *)(v186 + 8 * (unsigned __int8)v257 + 4)
                         ^ dword_14C188[2 * HIBYTE(v230) + 1]
                         ^ HIDWORD(v70);
            v333 = &qword_14E190[(unsigned __int8)v66];
            v72 = &qword_14E190[(unsigned __int8)v199];
            v73 = BYTE1(v68);
            v258 = BYTE2(v68);
            HIDWORD(v70) = BYTE2(v230);
            v74 = qword_14D190[BYTE2(v238) - 1];
            v75 = dword_14E988[2 * BYTE1(v66)];
            LODWORD(v55) = v55 ^ HIDWORD(v74);
            v76 = dword_14E988[2 * BYTE1(v66) + 1];
            HIDWORD(v55) = *(_DWORD *)(v186 + 8 * HIDWORD(v55)) ^ dword_14C188[2 * HIBYTE(v230)] ^ v70 ^ v74;
            v434 = (unsigned __int8)v238;
            v77 = &dword_14F188[2 * BYTE2(v219)];
            v78 = *v77;
            v321 = &qword_14C990[BYTE1(v238)];
            v79 = *(_QWORD *)(v303 + 8);
            v80 = v77[1];
            LODWORD(v55) = v55 ^ HIDWORD(v79);
            v425 = BYTE1(v219);
            v304 = &qword_14D190[BYTE2(v211)];
            HIDWORD(v79) = *((_DWORD *)v309 - 1);
            v352 = &qword_14E190[(unsigned __int8)v219];
            v81 = *((_DWORD *)v309 - 2);
            v431 = BYTE1(v230);
            LODWORD(v70) = &qword_14E190[(unsigned __int8)v230];
            v440 = BYTE2(v188);
            v205 = (unsigned __int8)v211;
            v310 = &qword_14C990[BYTE1(v211)];
            v282 = v55 ^ HIDWORD(v79) ^ v76 ^ v80;
            v235 = HIDWORD(v55) ^ v79 ^ v81 ^ v75 ^ v78;
            v82 = *(_DWORD *)(v186 + 8 * BYTE4(v188)) ^ v379;
            v337 = &qword_14D190[BYTE2(v326)];
            HIDWORD(v79) = (unsigned __int8)v188;
            LODWORD(v188) = BYTE1(v188);
            v380 = &qword_14E190[HIDWORD(v79)];
            v220 = (unsigned __int8)v326;
            LODWORD(v79) = *(_DWORD *)(v296 + 12);
            HIDWORD(v79) = *(_DWORD *)(v296 + 8);
            v297 = &qword_14C990[BYTE1(v326)];
            v83 = *(_DWORD *)(v186 + 8 * BYTE4(v188) + 4) ^ v387 ^ *((_DWORD *)v290 - 1) ^ v79;
            LODWORD(v55) = *((_DWORD *)v72 - 2);
            LODWORD(v79) = *((_DWORD *)v72 - 1);
            LOWORD(v72) = v363;
            v364 = &qword_14D190[BYTE2(v363)];
            v212 = BYTE2(v225);
            v231 = (unsigned __int8)v72;
            v388 = &qword_14C990[BYTE1(v72)];
            v84 = dword_14C188[2 * HIBYTE(v225) + 1];
            HIDWORD(v325) = v83 ^ v79 ^ dword_14E988[2 * v73 + 1] ^ dword_14F188[2 * v71 + 1];
            v85 = v82 ^ *((_DWORD *)v290 - 2) ^ HIDWORD(v79) ^ v55 ^ dword_14E988[2 * v73] ^ dword_14F188[2 * v71];
            LOWORD(v83) = v402;
            LODWORD(v79) = dword_14F188[2 * HIDWORD(v70)] ^ *(_DWORD *)(v186 + 8 * v407);
            HIDWORD(v55) = *(_DWORD *)(v186 + 8 * v407 + 4) ^ dword_14F188[2 * HIDWORD(v70) + 1] ^ v316[1];
            BYTE4(v79) = v225;
            v317 = &qword_14D190[BYTE2(v402)];
            v86 = *((_DWORD *)v321 - 2);
            LODWORD(v325) = v85;
            v226 = BYTE1(v225);
            v87 = dword_14C188[2 * v265];
            v403 = &qword_14E190[BYTE4(v79)];
            HIDWORD(v79) = BYTE2(v244);
            v88 = *((_DWORD *)v304 - 1) ^ HIDWORD(v55) ^ *((_DWORD *)v321 - 1);
            v322 = &qword_14D190[BYTE6(v188)];
            v408 = &qword_14C990[BYTE5(v188)];
            LODWORD(v55) = *(_DWORD *)(v328 + 8);
            v89 = v88 ^ *(_DWORD *)(v328 + 12);
            v329 = &qword_14C990[BYTE1(v83)];
            v262 = v89 ^ *((_DWORD *)v333 - 1) ^ dword_14E988[2 * v425 + 1];
            v248 = *((_DWORD *)v304 - 2)
                 ^ v79
                 ^ dword_14C188[2 * v251]
                 ^ v86
                 ^ v55
                 ^ *((_DWORD *)v333 - 2)
                 ^ dword_14E988[2 * v425];
            v305 = &dword_14F188[2 * BYTE2(v244)];
            v334 = (_DWORD *)(v186 + 8 * (unsigned __int8)v83);
            v193 = BYTE1(v244);
            v90 = v84
                ^ *(_DWORD *)(v186 + 8 * v434 + 4)
                ^ dword_14E988[2 * v431 + 1]
                ^ dword_14F188[2 * v440 + 1]
                ^ *((_DWORD *)v310 - 1)
                ^ *((_DWORD *)v337 - 1);
            v91 = dword_14F188[2 * v440]
                ^ *(_DWORD *)(v186 + 8 * v434)
                ^ dword_14E988[2 * v431]
                ^ v87
                ^ *((_DWORD *)v310 - 2)
                ^ *((_DWORD *)v337 - 2);
            v338 = &qword_14E190[(unsigned __int8)v244];
            v287 = v90 ^ *(_DWORD *)(v344 + 12) ^ *((_DWORD *)v352 - 1);
            v242 = v91 ^ *(_DWORD *)(v344 + 8) ^ *((_DWORD *)v352 - 2);
            HIDWORD(v55) = *(_DWORD *)(v70 - 4)
                         ^ *(_DWORD *)(v186 + 8 * v205 + 4)
                         ^ dword_14E988[2 * (_DWORD)v188 + 1]
                         ^ v358[1];
            v92 = *((_DWORD *)v297 - 2)
                ^ *(_DWORD *)(v70 - 8)
                ^ *(_DWORD *)(v186 + 8 * v205)
                ^ dword_14E988[2 * (_DWORD)v188]
                ^ dword_14C188[2 * v274];
            v345 = dword_14E988[2 * v226 + 1];
            v353 = dword_14F188[2 * HIDWORD(v79)];
            v93 = BYTE1(v199);
            v189 = BYTE2(v199);
            v197 = v92 ^ *((_DWORD *)v364 - 2) ^ *(_DWORD *)(v369 + 8) ^ dword_14F188[2 * v212];
            v209 = *((_DWORD *)v297 - 1)
                 ^ HIDWORD(v55)
                 ^ *((_DWORD *)v364 - 1)
                 ^ *(_DWORD *)(v369 + 12)
                 ^ dword_14F188[2 * v212 + 1];
            v94 = dword_14F188[2 * v258 + 1];
            v25 = dword_14F188[2 * v189]
                ^ *((_DWORD *)v322 - 2)
                ^ *(_DWORD *)(v186 + 8 * v231)
                ^ *(_DWORD *)(v393 + 8)
                ^ dword_14C188[2 * v443]
                ^ *((_DWORD *)v329 - 2)
                ^ *((_DWORD *)v403 - 2)
                ^ dword_14E988[2 * v193];
            v26 = *v334
                ^ *((_DWORD *)v408 - 2)
                ^ *((_DWORD *)v412 - 2)
                ^ dword_14C188[2 * v445]
                ^ *(_DWORD *)(v420 + 8)
                ^ *((_DWORD *)v338 - 2)
                ^ dword_14E988[2 * v93]
                ^ dword_14F188[2 * v258];
            v27 = dword_14F188[2 * v189 + 1]
                ^ *((_DWORD *)v322 - 1)
                ^ *(_DWORD *)(v186 + 8 * v231 + 4)
                ^ *(_DWORD *)(v393 + 12)
                ^ v397[1]
                ^ *((_DWORD *)v329 - 1)
                ^ *((_DWORD *)v403 - 1)
                ^ dword_14E988[2 * v193 + 1];
            v223 = *((_DWORD *)v380 - 2)
                 ^ *(_DWORD *)(v186 + 8 * v220)
                 ^ *(_DWORD *)(v374 + 8)
                 ^ *v384
                 ^ *((_DWORD *)v388 - 2)
                 ^ *((_DWORD *)v317 - 2)
                 ^ dword_14E988[2 * v226]
                 ^ v353;
            v255 = *(_DWORD *)(v186 + 8 * v220 + 4)
                 ^ *(_DWORD *)(v374 + 12)
                 ^ *((_DWORD *)v380 - 1)
                 ^ v384[1]
                 ^ *((_DWORD *)v388 - 1)
                 ^ *((_DWORD *)v317 - 1)
                 ^ v345
                 ^ v305[1];
            v95 = v334[1]
                ^ *((_DWORD *)v408 - 1)
                ^ *((_DWORD *)v412 - 1)
                ^ v416[1]
                ^ *(_DWORD *)(v420 + 12)
                ^ *((_DWORD *)v338 - 1)
                ^ dword_14E988[2 * v93 + 1]
                ^ v94;
            v271 = v95;
          }
          while ( v184 != 10 );
          v96 = dword_14F188[2 * v189 + 1]
              ^ *((_DWORD *)v322 - 1)
              ^ *(_DWORD *)(v186 + 8 * v231 + 4)
              ^ *(_DWORD *)(v393 + 12)
              ^ v397[1]
              ^ *((_DWORD *)v329 - 1)
              ^ *((_DWORD *)v403 - 1)
              ^ dword_14E988[2 * v193 + 1];
          v97 = v95;
          v318 = v470;
          v185 = -1;
          v323 = v471;
          v330 = v472;
          v275 = v473;
          v279 = v474;
          v298 = v475;
          v339 = v476;
          v455 = v325;
          v456 = v235;
          v457 = v282;
          v239 = v477;
          v458 = v248;
          v346 = v478;
          v459 = v262;
          v98 = v479;
          v460 = v242;
          v464 = v223;
          v99 = v480;
          v461 = v287;
          v100 = v481;
          v101 = v484;
          v462 = v197;
          v463 = v209;
          v102 = v483;
          v465 = v255;
          v466 = v25;
          v467 = v96;
          v468 = v26;
          v469 = v97;
          v190 = v482;
          do
          {
            v291 = HIDWORD(v185) ^ 0x70000000 ^ v101;
            v259 = ~v318;
            v194 = v323 ^ HIDWORD(v185);
            v200 = ~(_DWORD)v330;
            v252 = ~v102;
            v213 = ~v275;
            v103 = ~v298;
            v283 = v190 ^ HIDWORD(v185) ^ 0x60000000;
            v221 = v279 ^ HIDWORD(v185) ^ 0x20000000;
            v232 = ~v239;
            v276 = HIDWORD(v330) ^ HIDWORD(v185) ^ 0x10000000;
            v245 = ~v100;
            v240 = HIDWORD(v185) ^ 0x50000000 ^ v99;
            v413 = ((unsigned int)v323 ^ HIDWORD(v185)) >> 24;
            v104 = (unsigned int)~(_DWORD)v330 >> 24;
            v105 = v187 + 8 * ((unsigned int)~v318 >> 24);
            LODWORD(v330) = v187 + 8 * ((unsigned int)~v102 >> 24);
            v359 = v187 + 8 * HIBYTE(v213);
            v354 = v187 + 8 * v104;
            v370 = v187 + 8 * ((unsigned int)~v298 >> 24);
            v446 = (v339 ^ HIDWORD(v185) ^ 0x30000000u) >> 24;
            v441 = HIBYTE(v221);
            v319 = HIBYTE(v240);
            v106 = &qword_14E190[(unsigned __int8)(BYTE4(v330) ^ BYTE4(v185))];
            v381 = v187 + 8 * HIBYTE(v232);
            v107 = &qword_14C990[BYTE1(v232)];
            v108 = &qword_14D190[BYTE2(v245)];
            v266 = v346 ^ WORD2(v185);
            v299 = (v346 ^ HIDWORD(v185) ^ 0x40000000u) >> 24;
            v306 = &qword_14C990[BYTE1(v103)];
            v109 = *((_DWORD *)v108 - 2)
                 ^ ~*(_DWORD *)(v186 + 8 * (unsigned __int8)v213)
                 ^ dword_14C188[2 * HIBYTE(v291)]
                 ^ *((_DWORD *)v107 - 2)
                 ^ *(_DWORD *)(v105 + 8);
            HIDWORD(v330) = &qword_14E190[(unsigned __int8)(v323 ^ BYTE4(v185))];
            v398 = (unsigned __int8)((v346 ^ HIDWORD(v185) ^ 0x40000000u) >> 16);
            v206 = 0xFFFFFF - HIDWORD(v185);
            v110 = *(_DWORD *)(v186 + 8 * (unsigned __int8)v213 + 4)
                 ^ (0xFFFFFF - HIDWORD(v185))
                 ^ 0xEFFFFFFF
                 ^ dword_14C188[2 * HIBYTE(v291) + 1]
                 ^ *((_DWORD *)v107 - 1);
            v111 = (unsigned __int8)v103;
            v389 = &qword_14D190[BYTE2(v103)];
            v112 = (unsigned __int8)v232;
            v404 = &qword_14D190[BYTE2(v232)];
            v113 = &qword_14C990[BYTE1(v245)];
            v347 = &qword_14D190[BYTE2(v259)];
            v365 = &qword_14E190[(unsigned __int8)(v339 ^ BYTE4(v185))];
            v324 = (unsigned __int8)((v339 ^ HIDWORD(v185) ^ 0x30000000u) >> 16);
            v426 = (unsigned __int8)((unsigned __int16)(WORD2(v185) ^ v99) >> 8);
            v385 = &qword_14E190[(unsigned __int8)(BYTE4(v185) ^ v99)];
            v233 = *((_DWORD *)v106 - 2)
                 ^ v109
                 ^ dword_14E988[2 * (unsigned __int8)((unsigned __int16)(v339 ^ WORD2(v185)) >> 8)]
                 ^ dword_14F188[2 * BYTE2(v240)];
            v241 = v110
                 ^ *((_DWORD *)v108 - 1)
                 ^ *(_DWORD *)(v105 + 12)
                 ^ *((_DWORD *)v106 - 1)
                 ^ dword_14E988[2 * (unsigned __int8)((unsigned __int16)(v339 ^ WORD2(v185)) >> 8) + 1]
                 ^ dword_14F188[2 * BYTE2(v240) + 1];
            v114 = *(_DWORD *)(v186 + 8 * (unsigned __int8)v200 + 4)
                 ^ dword_14C188[2 * HIBYTE(v283) + 1]
                 ^ (HIDWORD(v185) - 0xFFFFFF);
            HIDWORD(v185) -= 0x1FFFFFF;
            v115 = &qword_14D190[(unsigned __int8)((unsigned int)~v98 >> 16)];
            v340 = &qword_14C990[(unsigned __int8)((unsigned __int16)~(_WORD)v98 >> 8)];
            v116 = ~(*(_DWORD *)(v186 + 8 * (unsigned __int8)v200) ^ dword_14C188[2 * HIBYTE(v283)])
                 ^ *((_DWORD *)v306 - 2)
                 ^ *((_DWORD *)v115 - 2);
            v117 = *(_DWORD *)(v330 + 8);
            v118 = *(_DWORD *)(v330 + 12) ^ v114 ^ *((_DWORD *)v306 - 1) ^ *((_DWORD *)v115 - 1);
            LODWORD(v330) = &qword_14D190[BYTE2(v252)];
            v119 = *(_DWORD *)(HIDWORD(v330) - 4);
            v120 = *(_DWORD *)(HIDWORD(v330) - 8);
            v307 = BYTE2(v221);
            HIDWORD(v330) = &qword_14E190[(unsigned __int8)v221];
            v435 = (unsigned __int8)~(_BYTE)v98;
            v417 = HIBYTE(v266);
            v375 = &qword_14E190[(unsigned __int8)v266];
            v227 = v118 ^ v119 ^ dword_14E988[2 * BYTE1(v221) + 1] ^ dword_14F188[2 * v398 + 1];
            v421 = BYTE2(v283);
            v394 = v187 + 8 * ((unsigned int)~v98 >> 24);
            v222 = v117 ^ v116 ^ v120 ^ dword_14E988[2 * BYTE1(v221)] ^ dword_14F188[2 * v398];
            v121 = *((_DWORD *)v113 - 2) ^ dword_14C188[2 * HIBYTE(v276)] ^ ~*(_DWORD *)(v186 + 8 * v112);
            v122 = dword_14C188[2 * HIBYTE(v276) + 1]
                 ^ *(_DWORD *)(v186 + 8 * v112 + 4)
                 ^ ~(v206 ^ 0x30000000)
                 ^ *((_DWORD *)v113 - 1);
            v280 = (unsigned __int8)v252;
            v123 = &qword_14C990[BYTE1(v252)];
            v124 = *(_DWORD *)(v359 + 12);
            v125 = v121 ^ *((_DWORD *)v347 - 2) ^ *(_DWORD *)(v359 + 8);
            v126 = &qword_14D190[BYTE2(v200)];
            v360 = &qword_14C990[BYTE1(v200)];
            v127 = v122 ^ *((_DWORD *)v347 - 1) ^ v124 ^ *((_DWORD *)v365 - 1);
            v128 = v125 ^ *((_DWORD *)v365 - 2);
            v444 = BYTE1(v283);
            v129 = dword_14E988[2 * v426];
            v366 = &qword_14E190[(unsigned __int8)v283];
            v130 = v127 ^ dword_14E988[2 * v426 + 1];
            v131 = BYTE2(v194);
            v284 = BYTE1(v194);
            v427 = (unsigned __int8)v245;
            v132 = HIBYTE(v245);
            v246 = v128 ^ v129 ^ dword_14F188[2 * BYTE2(v291)];
            v409 = v187 + 8 * v132;
            v311 = (unsigned __int8)v259;
            v253 = v130 ^ dword_14F188[2 * BYTE2(v291) + 1];
            v348 = &qword_14C990[BYTE1(v259)];
            v133 = *((_DWORD *)v340 - 2);
            v134 = *((_DWORD *)v340 - 1);
            v341 = &qword_14D190[BYTE2(v213)];
            v267 = &qword_14E190[(unsigned __int8)v291];
            v399 = &qword_14C990[BYTE1(v213)];
            v214 = BYTE2(v276);
            v277 = BYTE1(v276);
            v195 = *(_DWORD *)(v330 - 8)
                 ^ ~*(_DWORD *)(v186 + 8 * v111)
                 ^ dword_14C188[2 * v413]
                 ^ v133
                 ^ *(_DWORD *)(v354 + 8)
                 ^ *(_DWORD *)(HIDWORD(v330) - 8)
                 ^ dword_14E988[2 * v417]
                 ^ dword_14F188[2 * v421];
            v201 = *(_DWORD *)(v330 - 4)
                 ^ *(_DWORD *)(v186 + 8 * v111 + 4)
                 ^ ~(v206 ^ 0x20000000)
                 ^ dword_14C188[2 * v413 + 1]
                 ^ v134
                 ^ *(_DWORD *)(v354 + 12)
                 ^ *(_DWORD *)(HIDWORD(v330) - 4)
                 ^ dword_14E988[2 * v417 + 1]
                 ^ dword_14F188[2 * v421 + 1];
            v135 = *(v123 - 1);
            v136 = ~*(_DWORD *)(v186 + 8 * v435) ^ dword_14C188[2 * v441] ^ v135;
            v137 = *(_DWORD *)(v186 + 8 * v435 + 4)
                 ^ v206
                 ^ 0xBFFFFFFF
                 ^ dword_14C188[2 * v441 + 1]
                 ^ HIDWORD(v135)
                 ^ *((_DWORD *)v126 - 1);
            v138 = *(_QWORD *)(v370 + 8);
            v260 = v137
                 ^ HIDWORD(v138)
                 ^ *((_DWORD *)v375 - 1)
                 ^ dword_14E988[2 * v444 + 1]
                 ^ dword_14F188[2 * v131 + 1];
            v355 = dword_14F188[2 * v214];
            v371 = dword_14F188[2 * v214 + 1];
            v215 = v136
                 ^ *((_DWORD *)v126 - 2)
                 ^ v138
                 ^ *((_DWORD *)v375 - 2)
                 ^ dword_14E988[2 * v444]
                 ^ dword_14F188[2 * v131];
            HIDWORD(v138) = v206
                          ^ 0x9FFFFFFF
                          ^ *(_DWORD *)(v186 + 8 * v280 + 4)
                          ^ dword_14C188[2 * v299 + 1]
                          ^ *((_DWORD *)v360 - 1)
                          ^ *((_DWORD *)v389 - 1)
                          ^ *(_DWORD *)(v394 + 12)
                          ^ *((_DWORD *)v366 - 1)
                          ^ dword_14E988[2 * v284 + 1];
            v139 = ~*(_DWORD *)(v186 + 8 * v280)
                 ^ dword_14C188[2 * v299]
                 ^ *((_DWORD *)v360 - 2)
                 ^ *((_DWORD *)v389 - 2)
                 ^ *(_DWORD *)(v394 + 8)
                 ^ *((_DWORD *)v366 - 2)
                 ^ dword_14E988[2 * v284];
            v281 = ~*(_DWORD *)(v186 + 8 * v311)
                 ^ dword_14C188[2 * v319]
                 ^ *((_DWORD *)v399 - 2)
                 ^ *((_DWORD *)v404 - 2)
                 ^ *(_DWORD *)(v409 + 8)
                 ^ *((_DWORD *)v267 - 2)
                 ^ dword_14E988[2 * v277]
                 ^ dword_14F188[2 * v324];
            v285 = ~(v206 ^ 0x70000000)
                 ^ *(_DWORD *)(v186 + 8 * v311 + 4)
                 ^ dword_14C188[2 * v319 + 1]
                 ^ *((_DWORD *)v399 - 1)
                 ^ *((_DWORD *)v404 - 1)
                 ^ *(_DWORD *)(v409 + 12)
                 ^ *((_DWORD *)v267 - 1)
                 ^ dword_14E988[2 * v277 + 1]
                 ^ dword_14F188[2 * v324 + 1];
            v207 = dword_14C188[2 * v446 + 1]
                 ^ *(_DWORD *)(v186 + 8 * v427 + 4)
                 ^ v206
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)v348 - 1)
                 ^ *((_DWORD *)v341 - 1)
                 ^ *(_DWORD *)(v381 + 12)
                 ^ *((_DWORD *)v385 - 1)
                 ^ dword_14E988[2 * BYTE1(v291) + 1]
                 ^ v371;
            v191 = *((_DWORD *)v348 - 2)
                 ^ ~*(_DWORD *)(v186 + 8 * v427)
                 ^ dword_14C188[2 * v446]
                 ^ *((_DWORD *)v341 - 2)
                 ^ *(_DWORD *)(v381 + 8)
                 ^ *((_DWORD *)v385 - 2)
                 ^ dword_14E988[2 * BYTE1(v291)]
                 ^ v355;
            v140 = dword_14F188[2 * v307 + 1] ^ HIDWORD(v138);
            v292 = HIBYTE(v227);
            LOWORD(v277) = LOWORD(dword_14F188[2 * v307 + 1]) ^ WORD2(v138);
            v432 = HIBYTE(v201);
            v268 = v139 ^ dword_14F188[2 * v307];
            v308 = HIBYTE(v260);
            v442 = HIBYTE(v253);
            v312 = HIBYTE(v207);
            v141 = &dword_14C188[2 * HIBYTE(v140)];
            v382 = v187 + 8 * HIBYTE(v246);
            v342 = &dword_14C188[2 * HIBYTE(v227)];
            v390 = v187 + 8 * HIBYTE(v215);
            v142 = *v141;
            v143 = qword_14E190[(unsigned __int8)v227 - 1];
            v144 = &qword_14C990[BYTE1(v246)];
            LODWORD(v138) = &qword_14D190[BYTE2(v191)];
            v145 = BYTE1(v253);
            v146 = *(_QWORD *)(v187 + 8 * HIBYTE(v281) + 8);
            v147 = v141[1]
                 ^ *(_DWORD *)(v186 + 8 * (unsigned __int8)v233 + 4)
                 ^ *((_DWORD *)v144 - 1)
                 ^ *(_DWORD *)(v138 - 4)
                 ^ HIDWORD(v146)
                 ^ HIDWORD(v143);
            v414 = (unsigned __int8)v246;
            v400 = &qword_14D190[BYTE2(v246)];
            v148 = v142
                 ^ *(_DWORD *)(v186 + 8 * (unsigned __int8)v233)
                 ^ *((_DWORD *)v144 - 2)
                 ^ *(_DWORD *)(v138 - 8)
                 ^ v146;
            LODWORD(v146) = &qword_14C990[BYTE1(v191)];
            HIDWORD(v143) = &qword_14D190[BYTE2(v281)];
            v247 = BYTE2(v201);
            v318 = v148 ^ v143 ^ dword_14E988[2 * BYTE1(v201)] ^ dword_14F188[2 * BYTE2(v260)];
            v149 = BYTE1(v260);
            v323 = v147 ^ dword_14E988[2 * BYTE1(v201) + 1] ^ dword_14F188[2 * BYTE2(v260) + 1];
            v386 = &qword_14E190[(unsigned __int8)v260];
            v418 = BYTE2(v140);
            v422 = (unsigned __int8)v215;
            v410 = &qword_14D190[BYTE2(v215)];
            v261 = &qword_14C990[BYTE1(v268)];
            v367 = &qword_14D190[BYTE2(v222)];
            v376 = &qword_14E190[(unsigned __int8)v253];
            v254 = BYTE2(v253);
            LODWORD(v143) = BYTE1(v207);
            v395 = &qword_14E190[(unsigned __int8)v207];
            v150 = BYTE2(v227);
            v228 = BYTE1(v227);
            v436 = v150;
            v428 = (unsigned __int8)v191;
            v330 = *(_QWORD *)(v186 + 8 * (unsigned __int8)v195)
                 ^ *(_QWORD *)&dword_14C188[2 * HIBYTE(v285)]
                 ^ qword_14C990[BYTE1(v215) - 1]
                 ^ qword_14D190[BYTE2(v268) - 1]
                 ^ *(_QWORD *)(v187 + 8 * HIBYTE(v222) + 8)
                 ^ qword_14E190[(unsigned __int8)v241 - 1]
                 ^ *(_QWORD *)&dword_14E988[2 * v145]
                 ^ *(_QWORD *)&dword_14F188[2 * BYTE2(v207)];
            v151 = dword_14C188[2 * v292] ^ *(_DWORD *)(v186 + 8 * v414);
            v192 = v187 + 8 * HIBYTE(v191);
            v152 = *(_DWORD *)(v146 - 8);
            v153 = v342[1] ^ *(_DWORD *)(v186 + 8 * v414 + 4) ^ *(_DWORD *)(v146 - 4);
            v216 = (unsigned __int8)v281;
            LODWORD(v146) = v187 + 8 * HIBYTE(v233);
            v293 = &qword_14C990[BYTE1(v281)];
            v154 = *(_DWORD *)(v146 + 8);
            v155 = v153 ^ *(_DWORD *)(HIDWORD(v143) - 4) ^ *(_DWORD *)(v146 + 12);
            v156 = &qword_14E190[(unsigned __int8)v201];
            LODWORD(v146) = &qword_14D190[BYTE2(v233)];
            v361 = &qword_14C990[BYTE1(v233)];
            HIDWORD(v146) = BYTE1(v277);
            v202 = &qword_14E190[(unsigned __int8)v277];
            v349 = (unsigned __int8)v268;
            v208 = v187 + 8 * HIBYTE(v268);
            v269 = &qword_14C990[BYTE1(v222)];
            v279 = v155 ^ *((_DWORD *)v156 - 1) ^ dword_14E988[2 * v149 + 1] ^ dword_14F188[2 * v418 + 1];
            v275 = v151
                 ^ v152
                 ^ *(_DWORD *)(HIDWORD(v143) - 8)
                 ^ v154
                 ^ *((_DWORD *)v156 - 2)
                 ^ dword_14E988[2 * v149]
                 ^ dword_14F188[2 * v418];
            v356 = &qword_14D190[BYTE2(v195)];
            v405 = &qword_14C990[BYTE1(v195)];
            v157 = v187 + 8 * HIBYTE(v195);
            v196 = &qword_14E190[(unsigned __int8)v285];
            v234 = BYTE1(v241);
            v339 = *(_DWORD *)(v186 + 8 * v422 + 4)
                 ^ dword_14C188[2 * HIBYTE(v241) + 1]
                 ^ *((_DWORD *)v261 - 1)
                 ^ *((_DWORD *)v367 - 1)
                 ^ *(_DWORD *)(v157 + 12)
                 ^ *((_DWORD *)v376 - 1)
                 ^ dword_14E988[2 * (_DWORD)v143 + 1]
                 ^ dword_14F188[2 * BYTE2(v285) + 1];
            v298 = dword_14C188[2 * HIBYTE(v241)]
                 ^ *(_DWORD *)(v186 + 8 * v422)
                 ^ *((_DWORD *)v261 - 2)
                 ^ *((_DWORD *)v367 - 2)
                 ^ *(_DWORD *)(v157 + 8)
                 ^ *((_DWORD *)v376 - 2)
                 ^ dword_14E988[2 * (_DWORD)v143]
                 ^ dword_14F188[2 * BYTE2(v285)];
            v158 = dword_14C188[2 * v442] ^ *(_DWORD *)(v186 + 8 * v349);
            HIDWORD(v138) = *(_DWORD *)(v186 + 8 * v428 + 4)
                          ^ dword_14C188[2 * v432 + 1]
                          ^ *((_DWORD *)v293 - 1)
                          ^ *(_DWORD *)(v146 - 4)
                          ^ *(_DWORD *)(v382 + 12);
            v159 = *(_DWORD *)(v186 + 8 * v428)
                 ^ dword_14C188[2 * v432]
                 ^ *((_DWORD *)v293 - 2)
                 ^ *(_DWORD *)(v146 - 8)
                 ^ *(_DWORD *)(v382 + 8);
            v160 = dword_14E988[2 * BYTE1(v285)];
            v161 = dword_14E988[2 * BYTE1(v285) + 1];
            v286 = *(_QWORD *)&dword_14F188[2 * BYTE2(v241)];
            v162 = dword_14C188[2 * v442 + 1] ^ *(_DWORD *)(v186 + 8 * v349 + 4) ^ *((_DWORD *)v269 - 1);
            v239 = *((_DWORD *)v386 - 2) ^ v159 ^ dword_14E988[2 * HIDWORD(v146)] ^ dword_14F188[2 * v436];
            v346 = HIDWORD(v138)
                 ^ *((_DWORD *)v386 - 1)
                 ^ dword_14E988[2 * HIDWORD(v146) + 1]
                 ^ dword_14F188[2 * v436 + 1];
            v163 = *(_DWORD *)(v186 + 8 * v216) ^ dword_14C188[2 * v308];
            LODWORD(v138) = dword_14C188[2 * v308 + 1] ^ *(_DWORD *)(v186 + 8 * v216 + 4);
            v217 = *(_DWORD *)(v390 + 8)
                 ^ v158
                 ^ *((_DWORD *)v269 - 2)
                 ^ *((_DWORD *)v356 - 2)
                 ^ *((_DWORD *)v395 - 2)
                 ^ v160;
            v100 = dword_14F188[2 * v247]
                 ^ v163
                 ^ *((_DWORD *)v361 - 2)
                 ^ *((_DWORD *)v400 - 2)
                 ^ *(_DWORD *)(v192 + 8)
                 ^ *((_DWORD *)v202 - 2)
                 ^ dword_14E988[2 * v228];
            v164 = dword_14F188[2 * v254];
            v165 = *(_DWORD *)(v186 + 8 * (unsigned __int8)v222)
                 ^ dword_14C188[2 * v312]
                 ^ *((_DWORD *)v405 - 2)
                 ^ *((_DWORD *)v410 - 2)
                 ^ *(_DWORD *)(v208 + 8)
                 ^ *((_DWORD *)v196 - 2)
                 ^ dword_14E988[2 * v234];
            v102 = v165 ^ v164;
            v99 = v162 ^ *((_DWORD *)v356 - 1) ^ *(_DWORD *)(v390 + 12) ^ *((_DWORD *)v395 - 1) ^ v161 ^ HIDWORD(v286);
            v98 = v217 ^ v286;
            v190 = v138
                 ^ *((_DWORD *)v361 - 1)
                 ^ *((_DWORD *)v400 - 1)
                 ^ *(_DWORD *)(v192 + 12)
                 ^ *((_DWORD *)v202 - 1)
                 ^ dword_14E988[2 * v228 + 1]
                 ^ dword_14F188[2 * v247 + 1];
            v101 = *(_DWORD *)(v186 + 8 * (unsigned __int8)v222 + 4)
                 ^ dword_14C188[2 * v312 + 1]
                 ^ *((_DWORD *)v405 - 1)
                 ^ *((_DWORD *)v410 - 1)
                 ^ *(_DWORD *)(v208 + 12)
                 ^ *((_DWORD *)v196 - 1)
                 ^ dword_14E988[2 * v234 + 1]
                 ^ dword_14F188[2 * v254 + 1];
          }
          while ( v185 != 0xF5FFFFFFFFFFFFFFLL );
          v166 = &v456;
          v167 = &v472;
          v168 = v318;
          v472 = v330;
          v169 = v323;
          v483 = v165 ^ v164;
          v484 = v101;
          v470 = v318;
          v473 = v275;
          v471 = v323;
          v479 = v217 ^ v286;
          v474 = v279;
          v480 = v99;
          v481 = v100;
          v475 = v298;
          v482 = v190;
          v170 = v451;
          v476 = v339;
          v171 = HIDWORD(v325);
          v477 = v239;
          v478 = v346;
          v172 = v325;
          while ( 1 )
          {
            v173 = *(_DWORD *)(v170 + 8);
            v170 += 8;
            v174 = v169 ^ v171;
            v175 = *(_DWORD *)(v170 + 4);
            *(_DWORD *)v170 = v173 ^ v172 ^ v168;
            *(_DWORD *)(v170 + 4) = v175 ^ v174;
            if ( v454 == (_BYTE *)v170 )
              break;
            v172 = *v166;
            ++v167;
            v171 = v166[1];
            v166 += 2;
            v168 = *((_DWORD *)v167 - 2);
            v169 = *((_DWORD *)v167 - 1);
          }
          v3 = 0;
          ++*((_QWORD *)a1 + 17);
          if ( !n )
            break;
        }
        else if ( !n )
        {
          break;
        }
        v14 = 64 - v3;
      }
    }
    v176 = v452;
    v177 = (__int64 *)v453;
    do
    {
      v176 += 4;
      result = *(void **)v177;
      v179 = *((_DWORD *)v177 + 1);
      v180 = *((_DWORD *)v177 + 2);
      v181 = *((_DWORD *)v177 + 3);
      v177 += 2;
      *(v176 - 4) = result;
      *(v176 - 3) = v179;
      *(v176 - 2) = v180;
      *(v176 - 1) = v181;
    }
    while ( v177 != &v455 );
    a1[16] = v3;
  }
  return result;
}
