void *__fastcall sph_groestl384_0(int a1, char *a2, size_t a3)
{
  int v3; // r6
  size_t v4; // r4
  _DWORD *v5; // r8
  void *v6; // r0
  _BYTE *v7; // r0
  int *v8; // r12
  int v9; // r1
  int *v10; // r3
  int v11; // r6
  int v12; // t1
  int v13; // t1
  int v14; // r4
  int v15; // r2
  int v16; // r1
  int v17; // r12
  unsigned int v18; // r10
  unsigned int v19; // lr
  unsigned int v20; // r7
  int v21; // r9
  unsigned int v22; // r6
  int v23; // r4
  unsigned int v24; // r0
  int *v25; // r11
  _QWORD *v26; // r12
  _QWORD *v27; // r0
  _QWORD *v28; // r1
  _QWORD *v29; // r11
  int v30; // r3
  _QWORD *v31; // r6
  int v32; // r2
  _QWORD *v33; // r12
  int v34; // r10
  int v35; // r5
  int v36; // r3
  _DWORD *v37; // r5
  int v38; // r8
  int v39; // r1
  int v40; // r7
  int v41; // r8
  int v42; // r3
  int v43; // r2
  int v44; // r12
  int v45; // r3
  int v46; // r6
  int v47; // r2
  int v48; // r12
  int v49; // r5
  int v50; // lr
  int v51; // r11
  int v52; // r0
  _QWORD *v53; // r8
  int v54; // r10
  _QWORD *v55; // r6
  int v56; // r12
  int v57; // r2
  int v58; // r3
  int v59; // lr
  int v60; // r0
  int v61; // r1
  int v62; // r0
  int v63; // r2
  int v64; // r3
  int v65; // r0
  int v66; // r12
  int v67; // r12
  int v68; // r0
  int v69; // r3
  int v70; // r2
  __int64 v71; // r2
  int v72; // r1
  int v73; // r0
  int v74; // r12
  int v75; // r11
  int v76; // r4
  unsigned int v77; // r8
  unsigned int v78; // r10
  int v79; // r11
  _QWORD *v80; // r12
  _QWORD *v81; // r11
  int v82; // r6
  _QWORD *v83; // lr
  int v84; // r9
  int v85; // r5
  _QWORD *v86; // r4
  _QWORD *v87; // r12
  _QWORD *v88; // r0
  int v89; // r9
  int v90; // lr
  int v91; // r11
  int v92; // r12
  int v93; // r10
  int v94; // r1
  int v95; // r12
  int v96; // r4
  int v97; // r5
  int v98; // r4
  int v99; // r1
  int v100; // r6
  int v101; // r8
  int v102; // lr
  int v103; // r5
  int v104; // r4
  int v105; // r12
  int v106; // r9
  int v107; // r6
  int v108; // r8
  __int64 v109; // r0
  int v110; // r9
  int v111; // r12
  int v112; // lr
  _QWORD *v113; // r12
  int v114; // r6
  int v115; // r5
  int v116; // r9
  int v117; // r6
  __int64 v118; // r2
  int v119; // r5
  int v120; // r12
  __int64 v121; // r2
  int v122; // r12
  int v123; // r5
  int v124; // r7
  int v125; // r6
  int v126; // r11
  int v127; // r9
  int v128; // r4
  int v129; // r2
  int v130; // r6
  _DWORD *v131; // r8
  int v132; // lr
  int v133; // r10
  int v134; // r2
  _DWORD *v135; // r11
  int v136; // r3
  unsigned int v137; // r1
  unsigned int v138; // r5
  unsigned int v139; // r0
  unsigned int v140; // lr
  unsigned int v141; // r12
  int v142; // r7
  unsigned int v143; // r2
  _QWORD *v144; // r5
  _QWORD *v145; // r1
  _QWORD *v146; // r0
  _QWORD *v147; // r12
  int v148; // r7
  int v149; // r5
  _QWORD *v150; // r1
  int v151; // r12
  int v152; // lr
  int v153; // r3
  int v154; // r3
  int v155; // r0
  int v156; // r10
  int v157; // r3
  _QWORD *v158; // r9
  int v159; // r0
  int v160; // r12
  int v161; // r7
  _QWORD *v162; // r0
  int v163; // r12
  int v164; // r6
  unsigned int v165; // r2
  int v166; // r5
  unsigned int v167; // r12
  int v168; // r5
  int v169; // r1
  _QWORD *v170; // lr
  int v171; // r9
  int v172; // r6
  unsigned int v173; // r0
  int v174; // r7
  int v175; // r1
  _QWORD *v176; // r8
  int v177; // r1
  unsigned int v178; // r2
  _QWORD *v179; // r9
  int v180; // r3
  int v181; // r2
  _QWORD *v182; // r6
  int v183; // r12
  int v184; // r4
  int v185; // r2
  _QWORD *v186; // r6
  int v187; // r3
  int v188; // r4
  unsigned int v189; // r3
  int v190; // r1
  int v191; // r2
  int v192; // r7
  unsigned int v193; // r2
  int v194; // lr
  int v195; // r3
  int v196; // lr
  int v197; // r0
  int v198; // r6
  unsigned int v199; // r0
  unsigned int v200; // r2
  __int64 v201; // r6
  _QWORD *v202; // r12
  _QWORD *v203; // r1
  _QWORD *v204; // r4
  int v205; // r3
  _QWORD *v206; // r0
  int v207; // r2
  int v208; // r3
  int v209; // r2
  int v210; // r9
  int v211; // r10
  int v212; // r2
  int v213; // r5
  int v214; // r12
  int v215; // r9
  _QWORD *v216; // r0
  int v217; // r8
  int v218; // r3
  _QWORD *v219; // r0
  _QWORD *v220; // r2
  int v221; // r5
  int v222; // r12
  int v223; // lr
  int v224; // r3
  int v225; // r8
  __int64 v226; // r6
  int v227; // r1
  int v228; // r8
  int v229; // r1
  int v230; // r10
  int v231; // r1
  int v232; // r3
  int v233; // r10
  int v234; // r9
  int v235; // r5
  int v236; // r0
  int v237; // r0
  int v238; // r5
  int v239; // lr
  _QWORD *v240; // r2
  int v241; // r0
  int v242; // r3
  int v243; // r4
  int v244; // r1
  int v245; // r12
  int v246; // r3
  _QWORD *v247; // r8
  int v248; // r12
  int v249; // r1
  int v250; // r12
  int v251; // r3
  int v252; // lr
  __int64 v253; // r2
  int v254; // r0
  int v255; // lr
  int v256; // r12
  int v257; // r1
  int v258; // r10
  _DWORD *v259; // r1
  int v260; // lr
  int v261; // r5
  int v262; // lr
  int v263; // r12
  int v264; // r1
  int v265; // r8
  int v266; // r5
  int v267; // r0
  int v268; // r10
  int v269; // r7
  int v270; // r4
  int v271; // r6
  int v272; // r5
  int *v273; // r0
  int *v274; // r1
  int v275; // r4
  int v276; // r3
  unsigned __int64 v277; // kr48_8
  int v278; // lr
  int v279; // r2
  int v280; // t1
  int v281; // r2
  void *result; // r0
  size_t v284; // r5
  _DWORD *v285; // [sp+0h] [bp-354h]
  __int64 v286; // [sp+0h] [bp-354h]
  __int64 v287; // [sp+8h] [bp-34Ch]
  int v288; // [sp+8h] [bp-34Ch]
  unsigned int v289; // [sp+8h] [bp-34Ch]
  int v290; // [sp+8h] [bp-34Ch]
  unsigned int v291; // [sp+18h] [bp-33Ch]
  unsigned int v292; // [sp+18h] [bp-33Ch]
  int v293; // [sp+18h] [bp-33Ch]
  int v294; // [sp+18h] [bp-33Ch]
  _QWORD *v295; // [sp+18h] [bp-33Ch]
  int v296; // [sp+1Ch] [bp-338h]
  unsigned int v297; // [sp+1Ch] [bp-338h]
  unsigned int v298; // [sp+1Ch] [bp-338h]
  int v299; // [sp+1Ch] [bp-338h]
  _QWORD *v300; // [sp+1Ch] [bp-338h]
  int v301; // [sp+1Ch] [bp-338h]
  unsigned int v302; // [sp+1Ch] [bp-338h]
  _QWORD *v303; // [sp+1Ch] [bp-338h]
  unsigned int v304; // [sp+1Ch] [bp-338h]
  int v305; // [sp+1Ch] [bp-338h]
  unsigned __int64 v306; // [sp+20h] [bp-334h]
  unsigned int v307; // [sp+20h] [bp-334h]
  _QWORD *v308; // [sp+20h] [bp-334h]
  unsigned int v309; // [sp+20h] [bp-334h]
  _QWORD *v310; // [sp+20h] [bp-334h]
  int v311; // [sp+20h] [bp-334h]
  int v312; // [sp+20h] [bp-334h]
  unsigned int v313; // [sp+24h] [bp-330h]
  unsigned int v314; // [sp+24h] [bp-330h]
  int v315; // [sp+24h] [bp-330h]
  int v316; // [sp+24h] [bp-330h]
  int v317; // [sp+28h] [bp-32Ch]
  unsigned int v318; // [sp+28h] [bp-32Ch]
  int v319; // [sp+28h] [bp-32Ch]
  unsigned int v320; // [sp+28h] [bp-32Ch]
  int v321; // [sp+28h] [bp-32Ch]
  int v322; // [sp+28h] [bp-32Ch]
  unsigned int v323; // [sp+28h] [bp-32Ch]
  int v324; // [sp+28h] [bp-32Ch]
  unsigned int v325; // [sp+2Ch] [bp-328h]
  int v326; // [sp+2Ch] [bp-328h]
  unsigned int v327; // [sp+2Ch] [bp-328h]
  int v328; // [sp+2Ch] [bp-328h]
  int v329; // [sp+2Ch] [bp-328h]
  int v330; // [sp+2Ch] [bp-328h]
  unsigned int v331; // [sp+2Ch] [bp-328h]
  unsigned int v332; // [sp+2Ch] [bp-328h]
  _QWORD *v333; // [sp+2Ch] [bp-328h]
  int v334; // [sp+2Ch] [bp-328h]
  __int64 v335; // [sp+30h] [bp-324h]
  unsigned int v336; // [sp+30h] [bp-324h]
  unsigned int v337; // [sp+30h] [bp-324h]
  int v338; // [sp+30h] [bp-324h]
  unsigned int v339; // [sp+34h] [bp-320h]
  unsigned int v340; // [sp+34h] [bp-320h]
  unsigned int v341; // [sp+38h] [bp-31Ch]
  unsigned int v342; // [sp+38h] [bp-31Ch]
  unsigned int v343; // [sp+38h] [bp-31Ch]
  unsigned int v344; // [sp+38h] [bp-31Ch]
  int v345; // [sp+38h] [bp-31Ch]
  unsigned int v346; // [sp+3Ch] [bp-318h]
  unsigned int v347; // [sp+3Ch] [bp-318h]
  int v348; // [sp+3Ch] [bp-318h]
  int v349; // [sp+3Ch] [bp-318h]
  unsigned int v350; // [sp+3Ch] [bp-318h]
  unsigned int v351; // [sp+3Ch] [bp-318h]
  _QWORD *v352; // [sp+3Ch] [bp-318h]
  _QWORD *v353; // [sp+3Ch] [bp-318h]
  int v354; // [sp+3Ch] [bp-318h]
  unsigned int v355; // [sp+40h] [bp-314h]
  unsigned int v356; // [sp+40h] [bp-314h]
  int v357; // [sp+40h] [bp-314h]
  int v358; // [sp+40h] [bp-314h]
  _QWORD *v359; // [sp+40h] [bp-314h]
  unsigned int v360; // [sp+40h] [bp-314h]
  int v361; // [sp+40h] [bp-314h]
  unsigned int v362; // [sp+40h] [bp-314h]
  _QWORD *v363; // [sp+40h] [bp-314h]
  int v364; // [sp+44h] [bp-310h]
  unsigned int v365; // [sp+44h] [bp-310h]
  unsigned int v366; // [sp+44h] [bp-310h]
  int v367; // [sp+44h] [bp-310h]
  unsigned int v368; // [sp+44h] [bp-310h]
  int v369; // [sp+44h] [bp-310h]
  int v370; // [sp+48h] [bp-30Ch]
  unsigned int v371; // [sp+48h] [bp-30Ch]
  unsigned int v372; // [sp+48h] [bp-30Ch]
  int v373; // [sp+48h] [bp-30Ch]
  int v374; // [sp+48h] [bp-30Ch]
  int v375; // [sp+48h] [bp-30Ch]
  unsigned int v376; // [sp+48h] [bp-30Ch]
  unsigned int v377; // [sp+48h] [bp-30Ch]
  int v378; // [sp+4Ch] [bp-308h]
  unsigned int v379; // [sp+4Ch] [bp-308h]
  unsigned int v380; // [sp+4Ch] [bp-308h]
  int v381; // [sp+4Ch] [bp-308h]
  unsigned int v382; // [sp+4Ch] [bp-308h]
  unsigned int v383; // [sp+4Ch] [bp-308h]
  int v384; // [sp+4Ch] [bp-308h]
  int v385; // [sp+50h] [bp-304h]
  unsigned int v386; // [sp+50h] [bp-304h]
  __int64 v387; // [sp+50h] [bp-304h]
  int v388; // [sp+50h] [bp-304h]
  unsigned int v389; // [sp+50h] [bp-304h]
  unsigned int v390; // [sp+50h] [bp-304h]
  int v391; // [sp+54h] [bp-300h]
  unsigned int v392; // [sp+54h] [bp-300h]
  int v393; // [sp+54h] [bp-300h]
  unsigned int v394; // [sp+54h] [bp-300h]
  unsigned int v395; // [sp+54h] [bp-300h]
  unsigned int v396; // [sp+58h] [bp-2FCh]
  unsigned int v397; // [sp+58h] [bp-2FCh]
  int v398; // [sp+58h] [bp-2FCh]
  int v399; // [sp+58h] [bp-2FCh]
  unsigned int v400; // [sp+58h] [bp-2FCh]
  unsigned int v401; // [sp+58h] [bp-2FCh]
  int v402; // [sp+5Ch] [bp-2F8h]
  unsigned int v403; // [sp+5Ch] [bp-2F8h]
  int v404; // [sp+5Ch] [bp-2F8h]
  int v405; // [sp+5Ch] [bp-2F8h]
  unsigned int v406; // [sp+5Ch] [bp-2F8h]
  int v407; // [sp+5Ch] [bp-2F8h]
  int v408; // [sp+5Ch] [bp-2F8h]
  int v409; // [sp+5Ch] [bp-2F8h]
  unsigned int v410; // [sp+5Ch] [bp-2F8h]
  unsigned int v411; // [sp+5Ch] [bp-2F8h]
  int v412; // [sp+60h] [bp-2F4h]
  unsigned int v413; // [sp+60h] [bp-2F4h]
  _QWORD *v414; // [sp+60h] [bp-2F4h]
  _QWORD *v415; // [sp+60h] [bp-2F4h]
  unsigned int v416; // [sp+60h] [bp-2F4h]
  _QWORD *v417; // [sp+60h] [bp-2F4h]
  int v418; // [sp+60h] [bp-2F4h]
  unsigned int v419; // [sp+60h] [bp-2F4h]
  unsigned int v420; // [sp+60h] [bp-2F4h]
  _QWORD *v421; // [sp+64h] [bp-2F0h]
  int v422; // [sp+64h] [bp-2F0h]
  unsigned int v423; // [sp+64h] [bp-2F0h]
  int v424; // [sp+64h] [bp-2F0h]
  int v425; // [sp+64h] [bp-2F0h]
  unsigned int v426; // [sp+64h] [bp-2F0h]
  unsigned int v427; // [sp+64h] [bp-2F0h]
  int v428; // [sp+68h] [bp-2ECh]
  unsigned int v429; // [sp+68h] [bp-2ECh]
  int v430; // [sp+68h] [bp-2ECh]
  _QWORD *v431; // [sp+68h] [bp-2ECh]
  unsigned int v432; // [sp+68h] [bp-2ECh]
  int v433; // [sp+68h] [bp-2ECh]
  int v434; // [sp+68h] [bp-2ECh]
  int v435; // [sp+68h] [bp-2ECh]
  unsigned int v436; // [sp+68h] [bp-2ECh]
  int v437; // [sp+68h] [bp-2ECh]
  unsigned int v438; // [sp+68h] [bp-2ECh]
  unsigned int v439; // [sp+6Ch] [bp-2E8h]
  int v440; // [sp+6Ch] [bp-2E8h]
  unsigned int v441; // [sp+6Ch] [bp-2E8h]
  int v442; // [sp+6Ch] [bp-2E8h]
  int v443; // [sp+6Ch] [bp-2E8h]
  unsigned int v444; // [sp+6Ch] [bp-2E8h]
  _QWORD *v445; // [sp+6Ch] [bp-2E8h]
  unsigned int v446; // [sp+6Ch] [bp-2E8h]
  unsigned int v447; // [sp+70h] [bp-2E4h]
  _QWORD *v448; // [sp+70h] [bp-2E4h]
  unsigned int v449; // [sp+70h] [bp-2E4h]
  int v450; // [sp+70h] [bp-2E4h]
  int v451; // [sp+70h] [bp-2E4h]
  int v452; // [sp+70h] [bp-2E4h]
  unsigned int v453; // [sp+70h] [bp-2E4h]
  int v454; // [sp+70h] [bp-2E4h]
  unsigned int v455; // [sp+70h] [bp-2E4h]
  int v456; // [sp+74h] [bp-2E0h]
  unsigned int v457; // [sp+74h] [bp-2E0h]
  int v458; // [sp+74h] [bp-2E0h]
  _QWORD *v459; // [sp+74h] [bp-2E0h]
  unsigned int v460; // [sp+74h] [bp-2E0h]
  int v461; // [sp+74h] [bp-2E0h]
  int v462; // [sp+74h] [bp-2E0h]
  int v463; // [sp+74h] [bp-2E0h]
  unsigned int v464; // [sp+74h] [bp-2E0h]
  int v465; // [sp+78h] [bp-2DCh]
  unsigned int v466; // [sp+78h] [bp-2DCh]
  int v467; // [sp+78h] [bp-2DCh]
  unsigned int v468; // [sp+78h] [bp-2DCh]
  int v469; // [sp+78h] [bp-2DCh]
  unsigned int v470; // [sp+78h] [bp-2DCh]
  int v471; // [sp+78h] [bp-2DCh]
  unsigned int v472; // [sp+78h] [bp-2DCh]
  int v473; // [sp+7Ch] [bp-2D8h]
  unsigned int v474; // [sp+7Ch] [bp-2D8h]
  int v475; // [sp+7Ch] [bp-2D8h]
  unsigned int v476; // [sp+7Ch] [bp-2D8h]
  int v477; // [sp+7Ch] [bp-2D8h]
  unsigned int v478; // [sp+7Ch] [bp-2D8h]
  unsigned int v479; // [sp+7Ch] [bp-2D8h]
  int v480; // [sp+80h] [bp-2D4h]
  unsigned int v481; // [sp+80h] [bp-2D4h]
  unsigned int v482; // [sp+80h] [bp-2D4h]
  int v483; // [sp+80h] [bp-2D4h]
  int v484; // [sp+80h] [bp-2D4h]
  unsigned int v485; // [sp+80h] [bp-2D4h]
  int v486; // [sp+84h] [bp-2D0h]
  unsigned int v487; // [sp+84h] [bp-2D0h]
  unsigned int v488; // [sp+84h] [bp-2D0h]
  int v489; // [sp+84h] [bp-2D0h]
  _QWORD *v490; // [sp+84h] [bp-2D0h]
  unsigned int v491; // [sp+84h] [bp-2D0h]
  __int64 v492; // [sp+88h] [bp-2CCh]
  int v493; // [sp+88h] [bp-2CCh]
  int v494; // [sp+88h] [bp-2CCh]
  int v495; // [sp+88h] [bp-2CCh]
  unsigned int v496; // [sp+88h] [bp-2CCh]
  int v497; // [sp+88h] [bp-2CCh]
  unsigned int v498; // [sp+88h] [bp-2CCh]
  int v499; // [sp+88h] [bp-2CCh]
  unsigned int v500; // [sp+88h] [bp-2CCh]
  int v501; // [sp+8Ch] [bp-2C8h]
  int v502; // [sp+8Ch] [bp-2C8h]
  unsigned int v503; // [sp+8Ch] [bp-2C8h]
  int v504; // [sp+8Ch] [bp-2C8h]
  unsigned int v505; // [sp+8Ch] [bp-2C8h]
  _QWORD *v506; // [sp+8Ch] [bp-2C8h]
  int v507; // [sp+8Ch] [bp-2C8h]
  unsigned int v508; // [sp+8Ch] [bp-2C8h]
  int v509; // [sp+90h] [bp-2C4h]
  int v510; // [sp+90h] [bp-2C4h]
  int v511; // [sp+90h] [bp-2C4h]
  int v512; // [sp+90h] [bp-2C4h]
  __int64 v513; // [sp+90h] [bp-2C4h]
  int v514; // [sp+90h] [bp-2C4h]
  unsigned int v515; // [sp+90h] [bp-2C4h]
  int v516; // [sp+94h] [bp-2C0h]
  int v517; // [sp+94h] [bp-2C0h]
  int v518; // [sp+94h] [bp-2C0h]
  unsigned int v519; // [sp+94h] [bp-2C0h]
  int v520; // [sp+98h] [bp-2BCh]
  char *v521; // [sp+98h] [bp-2BCh]
  int v522; // [sp+98h] [bp-2BCh]
  unsigned int v523; // [sp+98h] [bp-2BCh]
  _QWORD *v524; // [sp+98h] [bp-2BCh]
  int v525; // [sp+98h] [bp-2BCh]
  int v526; // [sp+98h] [bp-2BCh]
  int v527; // [sp+9Ch] [bp-2B8h]
  int v528; // [sp+9Ch] [bp-2B8h]
  int v529; // [sp+9Ch] [bp-2B8h]
  int v530; // [sp+9Ch] [bp-2B8h]
  _QWORD *v531; // [sp+9Ch] [bp-2B8h]
  _QWORD *v532; // [sp+9Ch] [bp-2B8h]
  int v533; // [sp+A0h] [bp-2B4h]
  unsigned int v534; // [sp+A0h] [bp-2B4h]
  int v535; // [sp+A0h] [bp-2B4h]
  unsigned int v536; // [sp+A0h] [bp-2B4h]
  int v537; // [sp+A0h] [bp-2B4h]
  unsigned int v538; // [sp+A0h] [bp-2B4h]
  int v539; // [sp+A4h] [bp-2B0h]
  unsigned int v540; // [sp+A4h] [bp-2B0h]
  unsigned int v541; // [sp+A4h] [bp-2B0h]
  unsigned int v542; // [sp+A4h] [bp-2B0h]
  int v543; // [sp+A8h] [bp-2ACh]
  _QWORD *v544; // [sp+A8h] [bp-2ACh]
  _QWORD *v545; // [sp+A8h] [bp-2ACh]
  int v546; // [sp+A8h] [bp-2ACh]
  int v547; // [sp+A8h] [bp-2ACh]
  unsigned int v548; // [sp+A8h] [bp-2ACh]
  unsigned int v549; // [sp+A8h] [bp-2ACh]
  int v550; // [sp+A8h] [bp-2ACh]
  int v551; // [sp+ACh] [bp-2A8h]
  unsigned int v552; // [sp+ACh] [bp-2A8h]
  _QWORD *v553; // [sp+ACh] [bp-2A8h]
  int v554; // [sp+ACh] [bp-2A8h]
  unsigned int v555; // [sp+ACh] [bp-2A8h]
  int v556; // [sp+B0h] [bp-2A4h]
  _QWORD *v557; // [sp+B0h] [bp-2A4h]
  _QWORD *v558; // [sp+B0h] [bp-2A4h]
  int v559; // [sp+B0h] [bp-2A4h]
  unsigned int v560; // [sp+B0h] [bp-2A4h]
  unsigned int v561; // [sp+B0h] [bp-2A4h]
  _QWORD *v562; // [sp+B4h] [bp-2A0h]
  int v563; // [sp+B4h] [bp-2A0h]
  int v564; // [sp+B4h] [bp-2A0h]
  _QWORD *v565; // [sp+B4h] [bp-2A0h]
  _QWORD *v566; // [sp+B4h] [bp-2A0h]
  _QWORD *v567; // [sp+B4h] [bp-2A0h]
  int v568; // [sp+B4h] [bp-2A0h]
  _QWORD *v569; // [sp+B8h] [bp-29Ch]
  int v570; // [sp+B8h] [bp-29Ch]
  unsigned int v571; // [sp+B8h] [bp-29Ch]
  int v572; // [sp+B8h] [bp-29Ch]
  int v573; // [sp+B8h] [bp-29Ch]
  _QWORD *v574; // [sp+B8h] [bp-29Ch]
  _QWORD *v575; // [sp+B8h] [bp-29Ch]
  int v576; // [sp+B8h] [bp-29Ch]
  unsigned int v577; // [sp+BCh] [bp-298h]
  unsigned int v578; // [sp+BCh] [bp-298h]
  _QWORD *v579; // [sp+BCh] [bp-298h]
  _QWORD *v580; // [sp+BCh] [bp-298h]
  _QWORD *v581; // [sp+BCh] [bp-298h]
  _QWORD *v582; // [sp+BCh] [bp-298h]
  _QWORD *v583; // [sp+BCh] [bp-298h]
  int v584; // [sp+BCh] [bp-298h]
  _QWORD *v585; // [sp+C0h] [bp-294h]
  int v586; // [sp+C0h] [bp-294h]
  int v587; // [sp+C0h] [bp-294h]
  int v588; // [sp+C0h] [bp-294h]
  _QWORD *v589; // [sp+C0h] [bp-294h]
  _QWORD *v590; // [sp+C0h] [bp-294h]
  _QWORD *v591; // [sp+C0h] [bp-294h]
  int v592; // [sp+C0h] [bp-294h]
  _QWORD *v593; // [sp+C0h] [bp-294h]
  int v594; // [sp+C4h] [bp-290h]
  int v595; // [sp+C4h] [bp-290h]
  unsigned int v596; // [sp+C4h] [bp-290h]
  _QWORD *v597; // [sp+C4h] [bp-290h]
  _QWORD *v598; // [sp+C4h] [bp-290h]
  _QWORD *v599; // [sp+C4h] [bp-290h]
  _QWORD *v600; // [sp+C4h] [bp-290h]
  _QWORD *v601; // [sp+C4h] [bp-290h]
  _QWORD *v602; // [sp+C8h] [bp-28Ch]
  int v603; // [sp+C8h] [bp-28Ch]
  _QWORD *v604; // [sp+C8h] [bp-28Ch]
  int v605; // [sp+C8h] [bp-28Ch]
  _QWORD *v606; // [sp+C8h] [bp-28Ch]
  _QWORD *v607; // [sp+C8h] [bp-28Ch]
  _QWORD *v608; // [sp+C8h] [bp-28Ch]
  _QWORD *v609; // [sp+C8h] [bp-28Ch]
  unsigned __int64 v610; // [sp+CCh] [bp-288h]
  _QWORD *v611; // [sp+CCh] [bp-288h]
  unsigned int v612; // [sp+CCh] [bp-288h]
  _QWORD *v613; // [sp+D0h] [bp-284h]
  _QWORD *v614; // [sp+D0h] [bp-284h]
  int v615; // [sp+D0h] [bp-284h]
  _QWORD *v616; // [sp+D0h] [bp-284h]
  int v617; // [sp+D4h] [bp-280h]
  int v618; // [sp+D4h] [bp-280h]
  unsigned int v619; // [sp+D4h] [bp-280h]
  _QWORD *v620; // [sp+D4h] [bp-280h]
  int v621; // [sp+D4h] [bp-280h]
  _QWORD *v622; // [sp+D4h] [bp-280h]
  _QWORD *v623; // [sp+D4h] [bp-280h]
  int v624; // [sp+D4h] [bp-280h]
  int v625; // [sp+D4h] [bp-280h]
  _QWORD *v626; // [sp+D4h] [bp-280h]
  _QWORD *v627; // [sp+D4h] [bp-280h]
  int v628; // [sp+D8h] [bp-27Ch]
  int v629; // [sp+D8h] [bp-27Ch]
  _QWORD *v630; // [sp+D8h] [bp-27Ch]
  _QWORD *v631; // [sp+D8h] [bp-27Ch]
  _QWORD *v632; // [sp+D8h] [bp-27Ch]
  _QWORD *v633; // [sp+D8h] [bp-27Ch]
  _DWORD *v634; // [sp+D8h] [bp-27Ch]
  size_t n; // [sp+DCh] [bp-278h]
  int v636; // [sp+E0h] [bp-274h]
  _QWORD *v637; // [sp+E0h] [bp-274h]
  _QWORD *v638; // [sp+E0h] [bp-274h]
  _QWORD *v639; // [sp+E0h] [bp-274h]
  _QWORD *v640; // [sp+E0h] [bp-274h]
  _QWORD *v641; // [sp+E0h] [bp-274h]
  int v642; // [sp+E0h] [bp-274h]
  _QWORD *v643; // [sp+E0h] [bp-274h]
  _QWORD *v644; // [sp+E0h] [bp-274h]
  _QWORD *v645; // [sp+E0h] [bp-274h]
  _QWORD *v646; // [sp+E0h] [bp-274h]
  _QWORD *v647; // [sp+E0h] [bp-274h]
  _QWORD *v648; // [sp+E4h] [bp-270h]
  _QWORD *v649; // [sp+E4h] [bp-270h]
  _QWORD *v650; // [sp+E4h] [bp-270h]
  _QWORD *v651; // [sp+E4h] [bp-270h]
  _QWORD *v652; // [sp+E4h] [bp-270h]
  _QWORD *v653; // [sp+E4h] [bp-270h]
  _QWORD *v654; // [sp+E4h] [bp-270h]
  _QWORD *v655; // [sp+E4h] [bp-270h]
  _QWORD *v656; // [sp+E4h] [bp-270h]
  _QWORD *v657; // [sp+E8h] [bp-26Ch]
  _QWORD *v658; // [sp+E8h] [bp-26Ch]
  _QWORD *v659; // [sp+E8h] [bp-26Ch]
  _QWORD *v660; // [sp+E8h] [bp-26Ch]
  _QWORD *v661; // [sp+E8h] [bp-26Ch]
  _QWORD *v662; // [sp+E8h] [bp-26Ch]
  _QWORD *v663; // [sp+E8h] [bp-26Ch]
  _QWORD *v664; // [sp+E8h] [bp-26Ch]
  _QWORD *v665; // [sp+ECh] [bp-268h]
  _QWORD *v666; // [sp+ECh] [bp-268h]
  _QWORD *v667; // [sp+ECh] [bp-268h]
  _QWORD *v668; // [sp+ECh] [bp-268h]
  _QWORD *v669; // [sp+ECh] [bp-268h]
  _QWORD *v670; // [sp+ECh] [bp-268h]
  _QWORD *v671; // [sp+ECh] [bp-268h]
  _QWORD *v672; // [sp+ECh] [bp-268h]
  int v673; // [sp+F0h] [bp-264h]
  _QWORD *v674; // [sp+F0h] [bp-264h]
  char *v675; // [sp+F0h] [bp-264h]
  int v676; // [sp+F0h] [bp-264h]
  _QWORD *v677; // [sp+F0h] [bp-264h]
  _QWORD *v678; // [sp+F0h] [bp-264h]
  _DWORD *v679; // [sp+F0h] [bp-264h]
  _QWORD *v680; // [sp+F0h] [bp-264h]
  _QWORD *v681; // [sp+F0h] [bp-264h]
  _QWORD *v682; // [sp+F0h] [bp-264h]
  _QWORD *v683; // [sp+F0h] [bp-264h]
  int v684; // [sp+F4h] [bp-260h]
  _QWORD *v685; // [sp+F4h] [bp-260h]
  int *v686; // [sp+F4h] [bp-260h]
  _QWORD *v687; // [sp+F4h] [bp-260h]
  char *v688; // [sp+F4h] [bp-260h]
  _QWORD *v689; // [sp+F4h] [bp-260h]
  _QWORD *v690; // [sp+F4h] [bp-260h]
  _QWORD *v691; // [sp+F4h] [bp-260h]
  _DWORD *v692; // [sp+F4h] [bp-260h]
  _QWORD *v693; // [sp+F8h] [bp-25Ch]
  _QWORD *v694; // [sp+F8h] [bp-25Ch]
  _QWORD *v695; // [sp+F8h] [bp-25Ch]
  _QWORD *v696; // [sp+F8h] [bp-25Ch]
  int v697; // [sp+F8h] [bp-25Ch]
  _QWORD *v698; // [sp+F8h] [bp-25Ch]
  unsigned int v699; // [sp+FCh] [bp-258h]
  _QWORD *v700; // [sp+FCh] [bp-258h]
  _QWORD *v701; // [sp+FCh] [bp-258h]
  _QWORD *v702; // [sp+FCh] [bp-258h]
  _QWORD *v703; // [sp+FCh] [bp-258h]
  _QWORD *v704; // [sp+FCh] [bp-258h]
  int v705; // [sp+100h] [bp-254h]
  _QWORD *v706; // [sp+100h] [bp-254h]
  _QWORD *v707; // [sp+100h] [bp-254h]
  _QWORD *v708; // [sp+100h] [bp-254h]
  int v709; // [sp+100h] [bp-254h]
  _QWORD *v710; // [sp+100h] [bp-254h]
  _QWORD *v711; // [sp+104h] [bp-250h]
  char *v712; // [sp+104h] [bp-250h]
  int v713; // [sp+104h] [bp-250h]
  _QWORD *v714; // [sp+104h] [bp-250h]
  _QWORD *v715; // [sp+104h] [bp-250h]
  int v716; // [sp+104h] [bp-250h]
  int v717; // [sp+104h] [bp-250h]
  int v718; // [sp+104h] [bp-250h]
  _QWORD *v719; // [sp+104h] [bp-250h]
  _QWORD *v720; // [sp+104h] [bp-250h]
  int v721; // [sp+108h] [bp-24Ch]
  _QWORD *v722; // [sp+108h] [bp-24Ch]
  char *v723; // [sp+108h] [bp-24Ch]
  _QWORD *v724; // [sp+108h] [bp-24Ch]
  _QWORD *v725; // [sp+108h] [bp-24Ch]
  _QWORD *v726; // [sp+108h] [bp-24Ch]
  int v727; // [sp+10Ch] [bp-248h]
  _QWORD *v728; // [sp+10Ch] [bp-248h]
  _QWORD *v729; // [sp+10Ch] [bp-248h]
  _QWORD *v730; // [sp+10Ch] [bp-248h]
  _QWORD *v731; // [sp+10Ch] [bp-248h]
  int v732; // [sp+10Ch] [bp-248h]
  int v733; // [sp+10Ch] [bp-248h]
  _QWORD *v734; // [sp+10Ch] [bp-248h]
  int v735; // [sp+110h] [bp-244h]
  _QWORD *v736; // [sp+110h] [bp-244h]
  int v737; // [sp+110h] [bp-244h]
  _QWORD *v738; // [sp+110h] [bp-244h]
  _QWORD *v739; // [sp+110h] [bp-244h]
  _QWORD *v740; // [sp+110h] [bp-244h]
  _QWORD *v741; // [sp+110h] [bp-244h]
  _QWORD *v742; // [sp+114h] [bp-240h]
  int v743; // [sp+114h] [bp-240h]
  _QWORD *v744; // [sp+114h] [bp-240h]
  _QWORD *v745; // [sp+114h] [bp-240h]
  int v746; // [sp+114h] [bp-240h]
  _QWORD *v747; // [sp+114h] [bp-240h]
  _QWORD *v748; // [sp+114h] [bp-240h]
  _QWORD *v749; // [sp+118h] [bp-23Ch]
  _QWORD *v750; // [sp+118h] [bp-23Ch]
  int v751; // [sp+118h] [bp-23Ch]
  int v752; // [sp+118h] [bp-23Ch]
  _QWORD *v753; // [sp+118h] [bp-23Ch]
  int v754; // [sp+118h] [bp-23Ch]
  _QWORD *v755; // [sp+118h] [bp-23Ch]
  unsigned int v756; // [sp+11Ch] [bp-238h]
  _QWORD *v757; // [sp+11Ch] [bp-238h]
  _QWORD *v758; // [sp+11Ch] [bp-238h]
  int v759; // [sp+11Ch] [bp-238h]
  int v760; // [sp+11Ch] [bp-238h]
  int v761; // [sp+11Ch] [bp-238h]
  _QWORD *v762; // [sp+11Ch] [bp-238h]
  _QWORD *v763; // [sp+11Ch] [bp-238h]
  int v764; // [sp+120h] [bp-234h]
  _QWORD *v765; // [sp+120h] [bp-234h]
  _QWORD *v766; // [sp+120h] [bp-234h]
  _QWORD *v767; // [sp+120h] [bp-234h]
  _QWORD *v768; // [sp+120h] [bp-234h]
  int v769; // [sp+120h] [bp-234h]
  _QWORD *v770; // [sp+120h] [bp-234h]
  _QWORD *v771; // [sp+124h] [bp-230h]
  int v772; // [sp+124h] [bp-230h]
  _QWORD *v773; // [sp+124h] [bp-230h]
  int v774; // [sp+124h] [bp-230h]
  _QWORD *v775; // [sp+124h] [bp-230h]
  _QWORD *v776; // [sp+124h] [bp-230h]
  _QWORD *v777; // [sp+128h] [bp-22Ch]
  _QWORD *v778; // [sp+128h] [bp-22Ch]
  _QWORD *v779; // [sp+128h] [bp-22Ch]
  int v780; // [sp+128h] [bp-22Ch]
  int v781; // [sp+128h] [bp-22Ch]
  _QWORD *v782; // [sp+128h] [bp-22Ch]
  _QWORD *v783; // [sp+12Ch] [bp-228h]
  _QWORD *v784; // [sp+12Ch] [bp-228h]
  int v785; // [sp+12Ch] [bp-228h]
  int v786; // [sp+12Ch] [bp-228h]
  int v787; // [sp+12Ch] [bp-228h]
  int v788; // [sp+12Ch] [bp-228h]
  _QWORD *v789; // [sp+12Ch] [bp-228h]
  _QWORD *v790; // [sp+130h] [bp-224h]
  _QWORD *v791; // [sp+130h] [bp-224h]
  int v792; // [sp+130h] [bp-224h]
  int v793; // [sp+130h] [bp-224h]
  int v794; // [sp+130h] [bp-224h]
  int v795; // [sp+130h] [bp-224h]
  _QWORD *v796; // [sp+134h] [bp-220h]
  int v797; // [sp+134h] [bp-220h]
  int v798; // [sp+134h] [bp-220h]
  int v799; // [sp+134h] [bp-220h]
  _QWORD *v800; // [sp+138h] [bp-21Ch]
  _QWORD *v801; // [sp+138h] [bp-21Ch]
  int v802; // [sp+138h] [bp-21Ch]
  int v803; // [sp+13Ch] [bp-218h]
  _QWORD *v804; // [sp+13Ch] [bp-218h]
  int v805; // [sp+13Ch] [bp-218h]
  int v806; // [sp+13Ch] [bp-218h]
  _QWORD *v807; // [sp+13Ch] [bp-218h]
  int v808; // [sp+13Ch] [bp-218h]
  int v809; // [sp+13Ch] [bp-218h]
  int v810; // [sp+140h] [bp-214h]
  _QWORD *v811; // [sp+140h] [bp-214h]
  int v812; // [sp+140h] [bp-214h]
  int v813; // [sp+140h] [bp-214h]
  int v814; // [sp+144h] [bp-210h]
  _QWORD *v815; // [sp+144h] [bp-210h]
  _QWORD *v816; // [sp+144h] [bp-210h]
  int v817; // [sp+144h] [bp-210h]
  unsigned int v818; // [sp+144h] [bp-210h]
  _QWORD *v819; // [sp+148h] [bp-20Ch]
  char *v820; // [sp+148h] [bp-20Ch]
  int v821; // [sp+148h] [bp-20Ch]
  _QWORD *v822; // [sp+14Ch] [bp-208h]
  _QWORD *v823; // [sp+14Ch] [bp-208h]
  unsigned int v824; // [sp+14Ch] [bp-208h]
  unsigned int v825; // [sp+14Ch] [bp-208h]
  int v826; // [sp+150h] [bp-204h]
  _QWORD *v827; // [sp+150h] [bp-204h]
  char *v828; // [sp+150h] [bp-204h]
  unsigned int v829; // [sp+150h] [bp-204h]
  int v830; // [sp+150h] [bp-204h]
  int v831; // [sp+154h] [bp-200h]
  _QWORD *v832; // [sp+154h] [bp-200h]
  _QWORD *v833; // [sp+154h] [bp-200h]
  int v834; // [sp+154h] [bp-200h]
  unsigned int v835; // [sp+158h] [bp-1FCh]
  _QWORD *v836; // [sp+158h] [bp-1FCh]
  char *v837; // [sp+158h] [bp-1FCh]
  unsigned int v838; // [sp+158h] [bp-1FCh]
  int v839; // [sp+158h] [bp-1FCh]
  int v840; // [sp+15Ch] [bp-1F8h]
  _QWORD *v841; // [sp+15Ch] [bp-1F8h]
  _QWORD *v842; // [sp+15Ch] [bp-1F8h]
  int v843; // [sp+15Ch] [bp-1F8h]
  unsigned int v844; // [sp+15Ch] [bp-1F8h]
  int v845; // [sp+160h] [bp-1F4h]
  _QWORD *v846; // [sp+160h] [bp-1F4h]
  _QWORD *v847; // [sp+160h] [bp-1F4h]
  int v848; // [sp+160h] [bp-1F4h]
  int v849; // [sp+160h] [bp-1F4h]
  _QWORD *v850; // [sp+164h] [bp-1F0h]
  char *v851; // [sp+164h] [bp-1F0h]
  unsigned int v852; // [sp+164h] [bp-1F0h]
  unsigned int v853; // [sp+164h] [bp-1F0h]
  int v854; // [sp+168h] [bp-1ECh]
  _QWORD *v855; // [sp+168h] [bp-1ECh]
  _DWORD *v856; // [sp+168h] [bp-1ECh]
  _QWORD *v857; // [sp+16Ch] [bp-1E8h]
  int v858; // [sp+16Ch] [bp-1E8h]
  int v859; // [sp+16Ch] [bp-1E8h]
  _QWORD *v860; // [sp+16Ch] [bp-1E8h]
  unsigned int v861; // [sp+170h] [bp-1E4h]
  _QWORD *v862; // [sp+170h] [bp-1E4h]
  int v863; // [sp+174h] [bp-1E0h]
  _QWORD *v864; // [sp+174h] [bp-1E0h]
  int v865; // [sp+178h] [bp-1DCh]
  _QWORD *v866; // [sp+178h] [bp-1DCh]
  int v867; // [sp+17Ch] [bp-1D8h]
  int v868; // [sp+17Ch] [bp-1D8h]
  char *v869; // [sp+17Ch] [bp-1D8h]
  int v870; // [sp+180h] [bp-1D4h]
  int v871; // [sp+180h] [bp-1D4h]
  _QWORD *v872; // [sp+180h] [bp-1D4h]
  int v873; // [sp+184h] [bp-1D0h]
  _QWORD *v874; // [sp+184h] [bp-1D0h]
  int v875; // [sp+188h] [bp-1CCh]
  int v876; // [sp+18Ch] [bp-1C8h]
  int v877; // [sp+18Ch] [bp-1C8h]
  int v878; // [sp+190h] [bp-1C4h]
  int v879; // [sp+194h] [bp-1C0h]
  unsigned int v880; // [sp+198h] [bp-1BCh]
  char *src; // [sp+1C0h] [bp-194h]
  int v883; // [sp+1C8h] [bp-18Ch] BYREF
  void *v884; // [sp+1CCh] [bp-188h]
  _BYTE dest[128]; // [sp+1D0h] [bp-184h] BYREF
  unsigned __int64 v886; // [sp+250h] [bp-104h]
  int v887; // [sp+258h] [bp-FCh] BYREF
  int v888; // [sp+25Ch] [bp-F8h]
  int v889; // [sp+260h] [bp-F4h]
  int v890; // [sp+264h] [bp-F0h]
  int v891; // [sp+268h] [bp-ECh]
  int v892; // [sp+26Ch] [bp-E8h]
  __int64 v893; // [sp+270h] [bp-E4h]
  int v894; // [sp+278h] [bp-DCh]
  int v895; // [sp+27Ch] [bp-D8h]
  int v896; // [sp+280h] [bp-D4h]
  int v897; // [sp+284h] [bp-D0h]
  int v898; // [sp+288h] [bp-CCh]
  int v899; // [sp+28Ch] [bp-C8h]
  int v900; // [sp+290h] [bp-C4h]
  int v901; // [sp+294h] [bp-C0h]
  int v902; // [sp+298h] [bp-BCh]
  int v903; // [sp+29Ch] [bp-B8h]
  int v904; // [sp+2A0h] [bp-B4h]
  int v905; // [sp+2A4h] [bp-B0h]
  int v906; // [sp+2A8h] [bp-ACh]
  int v907; // [sp+2ACh] [bp-A8h]
  int v908; // [sp+2B0h] [bp-A4h]
  int v909; // [sp+2B4h] [bp-A0h]
  int v910; // [sp+2B8h] [bp-9Ch]
  int v911; // [sp+2BCh] [bp-98h]
  int v912; // [sp+2C0h] [bp-94h]
  int v913; // [sp+2C4h] [bp-90h]
  int v914; // [sp+2C8h] [bp-8Ch] BYREF
  int v915; // [sp+2CCh] [bp-88h]
  int v916; // [sp+2D0h] [bp-84h]
  int v917; // [sp+2D4h] [bp-80h]
  int v918; // [sp+2D8h] [bp-7Ch] BYREF
  int v919; // [sp+2DCh] [bp-78h]
  int v920; // [sp+2E0h] [bp-74h]
  int v921; // [sp+2E4h] [bp-70h]
  int v922; // [sp+2E8h] [bp-6Ch]
  int v923; // [sp+2ECh] [bp-68h]
  int v924; // [sp+2F0h] [bp-64h]
  int v925; // [sp+2F4h] [bp-60h]
  int v926; // [sp+2F8h] [bp-5Ch]
  int v927; // [sp+2FCh] [bp-58h]
  int v928; // [sp+300h] [bp-54h]
  int v929; // [sp+304h] [bp-50h]
  int v930; // [sp+308h] [bp-4Ch]
  int v931; // [sp+30Ch] [bp-48h]
  int v932; // [sp+310h] [bp-44h]
  int v933; // [sp+314h] [bp-40h]
  int v934; // [sp+318h] [bp-3Ch]
  int v935; // [sp+31Ch] [bp-38h]
  __int64 v936; // [sp+320h] [bp-34h]
  int v937; // [sp+328h] [bp-2Ch]
  int v938; // [sp+32Ch] [bp-28h]
  int v939; // [sp+330h] [bp-24h]
  int v940; // [sp+334h] [bp-20h]
  int v941; // [sp+338h] [bp-1Ch]
  int v942; // [sp+33Ch] [bp-18h]
  int v943; // [sp+340h] [bp-14h]
  int v944; // [sp+344h] [bp-10h]
  int v945; // [sp+348h] [bp-Ch] BYREF
  int v946; // [sp+34Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    v284 = v3 + a3;
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v284;
  }
  else
  {
    v884 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      v5 = &unk_15A280;
      while ( 1 )
      {
        if ( n < v4 )
          v4 = n;
        v6 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v6, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 128 )
        {
          v7 = &dest[120];
          v883 = (int)&v883;
          v8 = &v883;
          v9 = a1 - 8;
          v10 = &v914;
          do
          {
            v12 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            v11 = v12;
            v13 = v8[2];
            v8 += 2;
            v14 = *(_DWORD *)(v9 + 4);
            v15 = v8[1];
            v10[2] = v11;
            v10 += 2;
            *((_DWORD *)v7 + 2) = v13 ^ v11;
            v7 += 8;
            v10[1] = v14;
            *((_DWORD *)v7 + 1) = v15 ^ v14;
          }
          while ( &v945 != v10 );
          v287 = 0;
          v516 = v887;
          v486 = v888;
          v520 = v889;
          v527 = v890;
          v617 = v891;
          v628 = v892;
          v492 = v893;
          v509 = v894;
          v533 = v895;
          v456 = v896;
          v465 = v897;
          v317 = v898;
          v378 = v899;
          v473 = v900;
          v539 = v901;
          v16 = v912;
          v17 = v914;
          v285 = v5;
          v364 = v902;
          v556 = v915;
          v543 = v903;
          v296 = v904;
          v412 = v905;
          v370 = v906;
          v385 = v907;
          v391 = v908;
          v402 = v909;
          v428 = v910;
          v480 = v911;
          v551 = v913;
          v610 = v886;
          do
          {
            v306 = v610 ^ v287;
            v396 = v486 ^ ((unsigned __int64)(v287 + 16) >> 32);
            v325 = v628 ^ ((unsigned __int64)(v287 + 48) >> 32);
            v335 = v492 ^ (v287 + 64);
            v291 = ((unsigned __int64)(v287 + 80) >> 32) ^ v533;
            v18 = v456 ^ (v287 + 96);
            v19 = ((unsigned __int64)(v287 + 96) >> 32) ^ v465;
            v341 = v317 ^ (v287 + 112);
            v346 = v378 ^ ((unsigned __int64)(v287 + 112) >> 32);
            v355 = v473 ^ (v287 + 128);
            v439 = v539 ^ ((unsigned __int64)(v287 + 128) >> 32);
            v447 = v364 ^ (v287 + 144);
            v457 = v296 ^ (v287 + 160);
            v371 = v370 ^ (v287 + 176);
            v20 = v385 ^ ((unsigned __int64)(v287 + 176) >> 32);
            v21 = v391;
            v392 = (v287 + 240) ^ v17;
            v379 = v21 ^ (v287 + 192);
            v22 = v402 ^ ((unsigned __int64)(v287 + 192) >> 32);
            v386 = v428 ^ (v287 + 208);
            v23 = v480;
            v481 = (v287 + 224) ^ v16;
            v474 = v23 ^ ((unsigned __int64)(v287 + 208) >> 32);
            v24 = v551 ^ ((unsigned __int64)(v287 + 224) >> 32);
            v487 = v556 ^ ((unsigned __int64)(v287 + 240) >> 32);
            v318 = v516 ^ (v287 + 16);
            v403 = v520 ^ (v287 + 32);
            v466 = v20;
            v297 = v543 ^ ((unsigned __int64)(v287 + 144) >> 32);
            v699 = v22;
            v552 = HIBYTE(v346);
            v365 = v412 ^ ((unsigned __int64)(v287 + 160) >> 32);
            v756 = v24;
            HIDWORD(v492) = HIBYTE(v24);
            v540 = HIBYTE(v19);
            v429 = v18;
            v577 = HIBYTE(v439);
            v413 = v617 ^ (v287 + 48);
            v835 = (unsigned int)(HIDWORD(v610) ^ HIDWORD(v287)) >> 24;
            v810 = v527 ^ ((unsigned __int64)(v287 + 32) >> 32);
            v534 = HIBYTE(v291);
            v648 = &qword_15C278[HIBYTE(v341)];
            v665 = &qword_15C278[HIBYTE(v355)];
            v557 = &qword_15C278[((unsigned int)v492 ^ ((_DWORD)v287 + 64)) >> 24];
            v25 = (int *)((char *)&unk_15AA80 + 8 * HIBYTE(v22));
            v569 = &qword_15C278[(v509 ^ (unsigned int)(v287 + 80)) >> 24];
            v611 = &qword_15C278[HIBYTE(v18)];
            v693 = &qword_15C278[HIBYTE(v447)];
            v783 = &qword_15C278[HIBYTE(v386)];
            v800 = &qword_15C278[HIBYTE(v481)];
            v711 = &qword_15C278[HIBYTE(v457)];
            v819 = &qword_15C278[HIBYTE(v392)];
            v742 = &qword_15C278[HIBYTE(v371)];
            v771 = &qword_15C278[HIBYTE(v379)];
            v822 = &qword_15C278[BYTE3(v306)];
            v26 = &qword_15B288[BYTE1(v318)];
            v27 = &qword_15BA88[BYTE2(v403)];
            v28 = &qword_15CA88[BYTE4(v335)];
            v618 = *v25;
            v636 = v25[1];
            v29 = &qword_15CA88[(unsigned __int8)v291];
            v585 = &qword_15CA88[(unsigned __int8)v19];
            v30 = v285[2 * (unsigned __int8)v306 + 1]
                ^ ((unsigned __int64)(v287 + 1) >> 32)
                ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v20) + 1)
                ^ *((_DWORD *)v26 - 1)
                ^ *((_DWORD *)v27 - 1);
            v31 = &qword_15C278[HIBYTE(v413)];
            v32 = v285[2 * (unsigned __int8)v306]
                ^ (v287 + 1)
                ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v20))
                ^ *((_DWORD *)v26 - 2);
            v629 = BYTE2(v291);
            v33 = &qword_15B288[BYTE1(v403)];
            v544 = &qword_15BA88[BYTE2(v413)];
            v34 = (unsigned __int8)(v520 ^ (v287 + 32));
            v857 = &qword_15C278[HIBYTE(v403)];
            v721 = BYTE1(v346);
            v613 = &qword_15CA88[(unsigned __int8)v346];
            v404 = BYTE2(v439);
            v35 = (unsigned __int8)v439;
            v440 = BYTE1(v439);
            v657 = &qword_15CA88[v35];
            v36 = v30 ^ *((_DWORD *)v31 + 3) ^ *((_DWORD *)v28 - 1);
            v735 = (unsigned __int8)v413;
            v414 = &qword_15B288[BYTE1(v413)];
            v37 = (_DWORD *)((char *)&unk_15DA80 + 8 * BYTE2(v19));
            v38 = v32
                ^ *((_DWORD *)v27 - 2)
                ^ *((_DWORD *)v31 + 2)
                ^ *((_DWORD *)v28 - 2)
                ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v291))
                ^ *v37;
            v705 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v346) + 1);
            v673 = *((_DWORD *)&unk_15D280 + 2 * BYTE1(v19));
            v39 = *((_DWORD *)&unk_15D280 + 2 * BYTE1(v291) + 1);
            v292 = v38;
            v684 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v346));
            v347 = v36 ^ v39 ^ v37[1];
            v40 = *((_DWORD *)v557 + 2);
            v41 = *((_DWORD *)v557 + 3);
            v558 = &qword_15BA88[BYTE2(v335)];
            v42 = v285[2 * (unsigned __int8)v318] ^ v618 ^ (v287 + 17) ^ *((_DWORD *)v33 - 2);
            v43 = v285[2 * (unsigned __int8)v318 + 1]
                ^ v636
                ^ ((unsigned __int64)(v287 + 17) >> 32)
                ^ *((_DWORD *)v33 - 1);
            v814 = (unsigned __int8)v335;
            v602 = &qword_15B288[BYTE1(v335)];
            v44 = *((_DWORD *)v544 - 1);
            v45 = v42 ^ *((_DWORD *)v544 - 2);
            v421 = &qword_15BA88[(unsigned __int8)((v509 ^ (unsigned int)(v287 + 80)) >> 16)];
            v840 = (unsigned __int8)(v509 ^ (v287 + 80));
            v545 = &qword_15B288[(unsigned __int8)((unsigned __int16)(v509 ^ (v287 + 80)) >> 8)];
            v826 = BYTE1(v297);
            v637 = &qword_15BA88[BYTE2(v429)];
            v831 = BYTE2(v365);
            v46 = *((_DWORD *)&unk_15D280 + 2 * BYTE1(v19) + 1) ^ *((_DWORD *)v29 - 1) ^ v41 ^ v43 ^ v44;
            v47 = *((_DWORD *)&unk_15AA80 + 2 * HIDWORD(v492) + 1);
            v48 = *((_DWORD *)&unk_15AA80 + 2 * HIDWORD(v492));
            v501 = *((_DWORD *)&unk_15D280 + 2 * v721);
            v727 = *((_DWORD *)&unk_15DA80 + 2 * v404 + 1);
            v594 = *((_DWORD *)&unk_15DA80 + 2 * v404);
            v49 = *((_DWORD *)v585 - 2);
            v50 = *((_DWORD *)v585 - 1);
            v586 = *((_DWORD *)v613 - 2);
            LODWORD(v335) = v46 ^ v705;
            v764 = *((_DWORD *)v613 - 1);
            v861 = *((_DWORD *)v29 - 2) ^ v40 ^ v45 ^ v673 ^ v684;
            v803 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v297) + 1);
            v510 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v297));
            v51 = *((_DWORD *)v611 + 2);
            v493 = *((_DWORD *)v611 + 3);
            v863 = (unsigned __int8)v429;
            v52 = v285[2 * v34] ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v474)) ^ (v287 + 33) ^ *((_DWORD *)v414 - 2);
            v53 = &qword_15B288[BYTE1(v429)];
            v562 = &qword_15BA88[BYTE2(v341)];
            v54 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v474) + 1)
                ^ v285[2 * v34 + 1]
                ^ ((unsigned __int64)(v287 + 33) >> 32)
                ^ *((_DWORD *)v414 - 1)
                ^ *((_DWORD *)v558 - 1)
                ^ *((_DWORD *)v569 + 3)
                ^ v50
                ^ *((_DWORD *)&unk_15D280 + 2 * v721 + 1);
            v614 = &qword_15CA88[(unsigned __int8)v297];
            v612 = HIBYTE(v297);
            v845 = BYTE1(v365);
            v854 = BYTE2(v466);
            v873 = (unsigned __int8)v341;
            v674 = &qword_15B288[BYTE1(v341)];
            v685 = &qword_15BA88[BYTE2(v355)];
            v55 = &qword_15CA88[(unsigned __int8)v365];
            v619 = HIBYTE(v365);
            v867 = BYTE1(v466);
            v722 = &qword_15CA88[(unsigned __int8)v466];
            LOWORD(v23) = v699;
            v870 = BYTE2(v699);
            v405 = (unsigned __int8)v355;
            v700 = &qword_15B288[BYTE1(v355)];
            v342 = v54 ^ v727;
            v876 = BYTE2(v474);
            v749 = &qword_15CA88[(unsigned __int8)v23];
            v728 = &qword_15B288[BYTE1(v447)];
            v298 = v52 ^ *((_DWORD *)v558 - 2) ^ *((_DWORD *)v569 + 2) ^ v49 ^ v501 ^ v594;
            v56 = v48 ^ v285[2 * v735] ^ (v287 + 49) ^ *((_DWORD *)v602 - 2) ^ *((_DWORD *)v421 - 2) ^ v51;
            v57 = v47
                ^ v285[2 * v735 + 1]
                ^ ((unsigned __int64)(v287 + 49) >> 32)
                ^ *((_DWORD *)v602 - 1)
                ^ *((_DWORD *)v421 - 1)
                ^ v493;
            v422 = BYTE1(v474);
            v736 = &qword_15BA88[BYTE2(v457)];
            LOWORD(v54) = v756;
            v777 = &qword_15CA88[(unsigned __int8)v474];
            v430 = BYTE2(v756);
            v356 = v56 ^ v586 ^ *((_DWORD *)&unk_15D280 + 2 * v440) ^ v510;
            v366 = v57 ^ v764 ^ *((_DWORD *)&unk_15D280 + 2 * v440 + 1) ^ v803;
            v475 = (unsigned __int8)v457;
            v757 = &qword_15B288[BYTE1(v457)];
            v765 = &qword_15BA88[BYTE2(v371)];
            v790 = &qword_15CA88[(unsigned __int8)v54];
            v58 = *((_DWORD *)v637 - 1);
            v458 = BYTE2(v487);
            v59 = v285[2 * v814]
                ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v487))
                ^ (v287 + 65)
                ^ *((_DWORD *)v545 - 2)
                ^ *((_DWORD *)v637 - 2);
            v467 = BYTE6(v306);
            v511 = (unsigned __int8)v371;
            v638 = &qword_15B288[BYTE1(v371)];
            v60 = *((_DWORD *)v648 + 3);
            v61 = *((_DWORD *)v648 + 2);
            v649 = &qword_15BA88[BYTE2(v379)];
            v494 = BYTE1(v487);
            v804 = &qword_15CA88[(unsigned __int8)v487];
            v62 = *((_DWORD *)v657 - 1)
                ^ *((_DWORD *)v545 - 1)
                ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v487) + 1)
                ^ v285[2 * v814 + 1]
                ^ ((unsigned __int64)(v287 + 65) >> 32)
                ^ v58
                ^ v60
                ^ *((_DWORD *)&unk_15D280 + 2 * v826 + 1);
            v502 = BYTE5(v306);
            v415 = &qword_15CA88[BYTE4(v306)];
            v488 = *((_DWORD *)v657 - 2)
                 ^ v59
                 ^ v61
                 ^ *((_DWORD *)&unk_15D280 + 2 * v826)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v831);
            v546 = (unsigned __int8)(v21 ^ (v287 - 64));
            v658 = &qword_15B288[BYTE1(v379)];
            v796 = &qword_15BA88[BYTE2(v386)];
            v517 = BYTE2(v396);
            HIDWORD(v306) = v62 ^ *((_DWORD *)&unk_15DA80 + 2 * v831 + 1);
            v63 = *((_DWORD *)&unk_15AA80 + 2 * v835 + 1) ^ ((unsigned __int64)(v287 + 81) >> 32);
            v559 = BYTE1(v396);
            v64 = *((_DWORD *)&unk_15AA80 + 2 * v835) ^ (v287 + 81) ^ v285[2 * v840] ^ *((_DWORD *)v53 - 2);
            v836 = &qword_15CA88[(unsigned __int8)v396];
            v65 = *((_DWORD *)v562 - 1);
            v66 = *((_DWORD *)v562 - 2);
            v563 = BYTE2(v810);
            v587 = BYTE1(v810);
            v850 = &qword_15CA88[(unsigned __int8)(v527 ^ ((unsigned __int64)(v287 + 32) >> 32))];
            v595 = BYTE2(v325);
            v811 = &qword_15B288[BYTE1(v386)];
            v570 = (unsigned __int8)v386;
            v815 = &qword_15BA88[BYTE2(v481)];
            v603 = (unsigned __int8)v481;
            v67 = v64 ^ v66 ^ *((_DWORD *)v665 + 2) ^ *((_DWORD *)v614 - 2) ^ *((_DWORD *)&unk_15D280 + 2 * v845);
            v68 = *((_DWORD *)&unk_15D280 + 2 * v845 + 1)
                ^ v63
                ^ v285[2 * v840 + 1]
                ^ *((_DWORD *)v53 - 1)
                ^ v65
                ^ *((_DWORD *)v665 + 3)
                ^ *((_DWORD *)v614 - 1);
            v827 = &qword_15B288[BYTE1(v481)];
            v69 = *((_DWORD *)&unk_15DA80 + 2 * v854);
            v70 = *((_DWORD *)&unk_15DA80 + 2 * v854 + 1);
            v832 = &qword_15BA88[BYTE2(v392)];
            v841 = &qword_15BA88[BYTE2(v306)];
            v855 = &qword_15B288[BYTE1(v306)];
            v372 = v68 ^ v70;
            LODWORD(v306) = v67 ^ v69;
            v615 = (unsigned __int8)v392;
            v846 = &qword_15B288[BYTE1(v392)];
            v71 = *(v55 - 1);
            v482 = v285[2 * v863 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v396) + 1)
                 ^ ((unsigned __int64)(v287 + 97) >> 32)
                 ^ *((_DWORD *)v674 - 1)
                 ^ *((_DWORD *)v685 - 1)
                 ^ *((_DWORD *)v693 + 3)
                 ^ HIDWORD(v71)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v867 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v870 + 1);
            v380 = v285[2 * v863]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v396))
                 ^ (v287 + 97)
                 ^ *((_DWORD *)v674 - 2)
                 ^ *((_DWORD *)v685 - 2)
                 ^ *((_DWORD *)v693 + 2)
                 ^ v71
                 ^ *((_DWORD *)&unk_15D280 + 2 * v867)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v870);
            v72 = v285[2 * v405] ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v325));
            v387 = *(_QWORD *)&v285[2 * v873]
                 ^ *((_QWORD *)&unk_15AA80 + ((v527 ^ ((unsigned __int64)(v287 + 32) >> 32)) >> 24))
                 ^ (v287 + 113)
                 ^ *(v700 - 1)
                 ^ qword_15BA88[BYTE2(v447) - 1]
                 ^ v711[1]
                 ^ *(v722 - 1)
                 ^ *((_QWORD *)&unk_15D280 + BYTE1(v23))
                 ^ *((_QWORD *)&unk_15DA80 + v876);
            v871 = *((_DWORD *)&unk_15DA80 + 2 * v458 + 1);
            v868 = *((_DWORD *)&unk_15DA80 + 2 * v458);
            v521 = (char *)&unk_15DA80 + 8 * BYTE2(v396);
            v675 = (char *)&unk_15D280 + 8 * BYTE1(v396);
            v712 = (char *)&unk_15DA80 + 8 * BYTE2(v325);
            v406 = *((_DWORD *)&unk_15DA80 + 2 * v430 + 1)
                 ^ *((_DWORD *)v736 - 1)
                 ^ *((_DWORD *)v728 - 1)
                 ^ v285[2 * v405 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v325) + 1)
                 ^ (__CFADD__((_DWORD)v287, 129) + HIDWORD(v287))
                 ^ *((_DWORD *)v742 + 3)
                 ^ *((_DWORD *)v749 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v422 + 1);
            v397 = v72
                 ^ (v287 + 129)
                 ^ *((_DWORD *)v728 - 2)
                 ^ *((_DWORD *)v736 - 2)
                 ^ *((_DWORD *)v742 + 2)
                 ^ *((_DWORD *)v749 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v422)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v430);
            v73 = *((_DWORD *)&unk_15AA80 + 2 * v534 + 1);
            v743 = *((_DWORD *)&unk_15D280 + 2 * v494 + 1);
            v737 = *((_DWORD *)v765 - 1)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(HIDWORD(v335)) + 1)
                 ^ v285[2 * (unsigned __int8)v447 + 1]
                 ^ ((unsigned __int64)(v287 + 145) >> 32)
                 ^ *((_DWORD *)v757 - 1)
                 ^ *((_DWORD *)v771 + 3)
                 ^ *((_DWORD *)v777 - 1);
            HIDWORD(v71) = *((_DWORD *)&unk_15AA80 + 2 * v534);
            v535 = *((_DWORD *)&unk_15D280 + 2 * v494);
            v74 = v285[2 * v475 + 1]
                ^ *((_DWORD *)&unk_15DA80 + 2 * v467 + 1)
                ^ ((unsigned __int64)(v287 + 161) >> 32)
                ^ v73;
            v495 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(HIDWORD(v335)))
                 ^ v285[2 * (unsigned __int8)v447]
                 ^ (v287 + 145)
                 ^ *((_DWORD *)v757 - 2)
                 ^ *((_DWORD *)v765 - 2)
                 ^ *((_DWORD *)v771 + 2)
                 ^ *((_DWORD *)v777 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v54));
            v448 = &qword_15BA88[BYTE2(v318)];
            v431 = &qword_15C278[HIBYTE(v318)];
            v319 = BYTE1(v325);
            v459 = &qword_15CA88[(unsigned __int8)v325];
            v326 = BYTE6(v335);
            v772 = BYTE5(v335);
            v75 = *((_DWORD *)v431 + 2);
            v76 = *((_DWORD *)&unk_15D280 + 2 * v319);
            v77 = v285[2 * v603 + 1]
                ^ *((_DWORD *)v841 - 1)
                ^ ((unsigned __int64)(v287 + 225) >> 32)
                ^ *((_DWORD *)&unk_15AA80 + 2 * v612 + 1)
                ^ *((_DWORD *)v846 - 1)
                ^ *((_DWORD *)v431 + 3)
                ^ *((_DWORD *)v850 - 1)
                ^ *((_DWORD *)&unk_15D280 + 2 * v319 + 1)
                ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE6(v335) + 1);
            LODWORD(v71) = v285[2 * v615 + 1]
                         ^ *((_DWORD *)v855 - 1)
                         ^ ((unsigned __int64)(v287 + 241) >> 32)
                         ^ *((_DWORD *)&unk_15AA80 + 2 * v619 + 1)
                         ^ *((_DWORD *)v448 - 1)
                         ^ *((_DWORD *)v857 + 3)
                         ^ *((_DWORD *)v459 - 1)
                         ^ *((_DWORD *)&unk_15D280 + 2 * BYTE5(v335) + 1);
            v320 = v495 ^ v868;
            HIDWORD(v335) = *((_DWORD *)&unk_15DA80 + 2 * v467)
                          ^ v285[2 * v475]
                          ^ (v287 + 161)
                          ^ HIDWORD(v71)
                          ^ *((_DWORD *)v638 - 2)
                          ^ *((_DWORD *)v649 - 2)
                          ^ *((_DWORD *)v783 + 2)
                          ^ *((_DWORD *)v790 - 2)
                          ^ v535;
            v432 = v285[2 * v511 + 1]
                 ^ *((_DWORD *)&unk_15D280 + 2 * v502 + 1)
                 ^ ((unsigned __int64)(v287 + 177) >> 32)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v540 + 1)
                 ^ *((_DWORD *)v658 - 1)
                 ^ *((_DWORD *)v796 - 1)
                 ^ *((_DWORD *)v800 + 3)
                 ^ *((_DWORD *)v804 - 1)
                 ^ *((_DWORD *)v521 + 1);
            v423 = *((_DWORD *)&unk_15D280 + 2 * v502)
                 ^ v285[2 * v511]
                 ^ (v287 + 177)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v540)
                 ^ *((_DWORD *)v658 - 2)
                 ^ *((_DWORD *)v796 - 2)
                 ^ *((_DWORD *)v800 + 2)
                 ^ *((_DWORD *)v804 - 2)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v517);
            v476 = *((_DWORD *)v855 - 2)
                 ^ v285[2 * v615]
                 ^ (v287 + 241)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v619)
                 ^ *((_DWORD *)v448 - 2)
                 ^ *((_DWORD *)v857 + 2)
                 ^ *((_DWORD *)v459 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v772)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v629);
            v449 = v285[2 * v546 + 1]
                 ^ *((_DWORD *)v415 - 1)
                 ^ (__CFADD__((_DWORD)v287, 193) + HIDWORD(v287))
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v552 + 1)
                 ^ *((_DWORD *)v811 - 1)
                 ^ *((_DWORD *)v815 - 1)
                 ^ *((_DWORD *)v819 + 3)
                 ^ *((_DWORD *)v675 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v563 + 1);
            LODWORD(v71) = v71 ^ *((_DWORD *)&unk_15DA80 + 2 * v629 + 1);
            v468 = *((_DWORD *)v841 - 2)
                 ^ v285[2 * v603]
                 ^ (v287 + 225)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v612)
                 ^ *((_DWORD *)v846 - 2)
                 ^ v75
                 ^ *((_DWORD *)v850 - 2)
                 ^ v76
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v326);
            v441 = *((_DWORD *)&unk_15AA80 + 2 * v552)
                 ^ *((_DWORD *)v415 - 2)
                 ^ v285[2 * v546]
                 ^ (v287 + 193)
                 ^ *((_DWORD *)v811 - 2)
                 ^ *((_DWORD *)v815 - 2)
                 ^ *((_DWORD *)v819 + 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v559)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v563);
            v327 = v737 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v54) + 1) ^ v871;
            v460 = v285[2 * v570]
                 ^ *((_DWORD *)v822 + 2)
                 ^ (v287 + 209)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v577)
                 ^ *((_DWORD *)v827 - 2)
                 ^ *((_DWORD *)v832 - 2)
                 ^ *((_DWORD *)v836 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v587)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v595);
            v416 = v74
                 ^ *((_DWORD *)v638 - 1)
                 ^ *((_DWORD *)v649 - 1)
                 ^ *((_DWORD *)v783 + 3)
                 ^ *((_DWORD *)v790 - 1)
                 ^ v743;
            v496 = *((_DWORD *)v822 + 3)
                 ^ v285[2 * v570 + 1]
                 ^ ((unsigned __int64)(v287 + 209) >> 32)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v577 + 1)
                 ^ *((_DWORD *)v827 - 1)
                 ^ *((_DWORD *)v832 - 1)
                 ^ *((_DWORD *)v836 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v587 + 1)
                 ^ *((_DWORD *)v712 + 1);
            v578 = HIBYTE(v482);
            v596 = HIBYTE(v406);
            v536 = BYTE3(v71);
            v512 = v71;
            v588 = HIBYTE(HIDWORD(v387));
            v503 = v77;
            v571 = HIBYTE(v372);
            v616 = &qword_15C278[HIBYTE(v356)];
            v630 = &qword_15C278[HIBYTE(v488)];
            v639 = &qword_15C278[BYTE3(v306)];
            v701 = &qword_15C278[HIBYTE(v380)];
            v738 = &qword_15C278[BYTE3(v387)];
            v686 = (int *)((char *)&unk_15AA80 + 8 * HIBYTE(v77));
            v723 = (char *)&unk_15AA80 + 8 * BYTE3(v71);
            v823 = &qword_15C278[HIBYTE(v460)];
            v833 = &qword_15C278[HIBYTE(v468)];
            v78 = v861;
            v842 = &qword_15C278[HIBYTE(v476)];
            v880 = HIBYTE(v416);
            v778 = &qword_15C278[HIBYTE(v320)];
            v791 = &qword_15C278[HIBYTE(HIDWORD(v335))];
            v801 = &qword_15C278[HIBYTE(v423)];
            v816 = &qword_15C278[HIBYTE(v441)];
            v837 = (char *)&unk_15AA80 + 8 * HIBYTE(HIDWORD(v387));
            v820 = (char *)&unk_15AA80 + 8 * HIBYTE(v372);
            v828 = (char *)&unk_15AA80 + 8 * HIBYTE(v482);
            v79 = BYTE1(v861);
            v851 = (char *)&unk_15AA80 + 8 * HIBYTE(v406);
            v847 = &qword_15C278[HIBYTE(v292)];
            v856 = (_DWORD *)((char *)&unk_15AA80 + 8 * HIBYTE(v327));
            v869 = (char *)&unk_15AA80 + 8 * HIBYTE(v416);
            v862 = &qword_15C278[HIBYTE(v861)];
            v874 = &qword_15C278[HIBYTE(v298)];
            v80 = &qword_15CA88[BYTE4(v306)];
            v81 = &qword_15B288[v79];
            v82 = BYTE2(v482);
            v83 = &qword_15BA88[BYTE2(v298)];
            v84 = BYTE1(v482);
            v666 = &qword_15CA88[(unsigned __int8)v482];
            v676 = *((_DWORD *)v80 - 2);
            v713 = *((_DWORD *)v80 - 1);
            v287 += 2;
            v872 = &qword_15BA88[BYTE2(v78)];
            v483 = BYTE2(v372);
            v85 = BYTE6(v387);
            v86 = &qword_15CA88[(unsigned __int8)v372];
            v87 = &qword_15B288[BYTE1(v298)];
            v88 = &qword_15BA88[BYTE2(v356)];
            v620 = &qword_15B288[BYTE1(v356)];
            v805 = *((_DWORD *)&unk_15D280 + 2 * v84);
            LODWORD(v71) = *((_DWORD *)&unk_15D280 + 2 * BYTE1(v372) + 1)
                         ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v432) + 1)
                         ^ v285[2 * (unsigned __int8)v292 + 1]
                         ^ *((_DWORD *)v81 - 1)
                         ^ *((_DWORD *)v83 - 1);
            v858 = *((_DWORD *)&unk_15D280 + 2 * v84 + 1);
            HIDWORD(v71) = *((_DWORD *)&unk_15D280 + 2 * BYTE1(v372))
                         ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v432))
                         ^ v285[2 * (unsigned __int8)v292]
                         ^ *((_DWORD *)v81 - 2)
                         ^ *((_DWORD *)v83 - 2);
            v89 = BYTE4(v387);
            v659 = &qword_15BA88[BYTE2(v488)];
            v90 = BYTE5(v387);
            HIDWORD(v387) = (unsigned __int8)v488;
            v706 = &qword_15CA88[v89];
            v91 = BYTE2(v406);
            v694 = &qword_15B288[BYTE1(v488)];
            LODWORD(v610) = HIDWORD(v71) ^ *((_DWORD *)v616 + 2) ^ v676 ^ *((_DWORD *)&unk_15DA80 + 2 * v82);
            LODWORD(v71) = v71 ^ *((_DWORD *)v616 + 3) ^ v713;
            LOWORD(v89) = v406;
            HIDWORD(v71) = *((_DWORD *)v87 - 2);
            v407 = (unsigned __int8)v306;
            v677 = &qword_15BA88[BYTE2(v306)];
            v714 = &qword_15B288[BYTE1(v306)];
            v92 = *((_DWORD *)v86 - 1)
                ^ v285[2 * (unsigned __int8)v78 + 1]
                ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v449) + 1)
                ^ *((_DWORD *)v87 - 1);
            HIDWORD(v71) ^= v285[2 * (unsigned __int8)v78]
                          ^ *((_DWORD *)v86 - 2)
                          ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v449))
                          ^ *((_DWORD *)v88 - 2);
            v744 = &qword_15CA88[(unsigned __int8)v89];
            v729 = &qword_15BA88[BYTE2(v380)];
            v93 = BYTE2(v327);
            HIDWORD(v610) = v71 ^ *((_DWORD *)&unk_15DA80 + 2 * v82 + 1);
            LODWORD(v306) = BYTE1(v327);
            v766 = &qword_15CA88[(unsigned __int8)v327];
            v328 = BYTE2(v416);
            v516 = HIDWORD(v71) ^ *((_DWORD *)v630 + 2) ^ v805 ^ *((_DWORD *)&unk_15DA80 + 2 * v85);
            v486 = v92 ^ *((_DWORD *)v88 - 1) ^ *((_DWORD *)v630 + 3) ^ v858 ^ *((_DWORD *)&unk_15DA80 + 2 * v85 + 1);
            v806 = *((_DWORD *)v666 - 1);
            v94 = v285[2 * (unsigned __int8)v298]
                ^ *((_DWORD *)v639 + 2)
                ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v496))
                ^ *((_DWORD *)v620 - 2);
            HIDWORD(v71) = v285[2 * (unsigned __int8)v298 + 1]
                         ^ *((_DWORD *)v639 + 3)
                         ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v496) + 1)
                         ^ *((_DWORD *)v620 - 1);
            v621 = v285[2 * (unsigned __int8)v356];
            v95 = *v686;
            v96 = *((_DWORD *)v659 - 2)
                ^ v94
                ^ *((_DWORD *)v666 - 2)
                ^ *((_DWORD *)&unk_15D280 + 2 * v90)
                ^ *((_DWORD *)&unk_15DA80 + 2 * v91);
            v865 = (unsigned __int8)v380;
            v640 = &qword_15B288[BYTE1(v380)];
            v650 = &qword_15BA88[BYTE2(v387)];
            v299 = BYTE1(v416);
            v667 = &qword_15CA88[(unsigned __int8)v416];
            v875 = (unsigned __int8)v387;
            v417 = &qword_15B288[BYTE1(v387)];
            v527 = HIDWORD(v71)
                 ^ *((_DWORD *)v659 - 1)
                 ^ v806
                 ^ *((_DWORD *)&unk_15D280 + 2 * v90 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v91 + 1);
            v97 = *((_DWORD *)v701 + 2);
            v660 = &qword_15BA88[BYTE2(v397)];
            v520 = v96;
            v98 = *((_DWORD *)v701 + 3);
            v99 = *((_DWORD *)v706 - 1);
            v100 = *((_DWORD *)v694 - 1);
            v101 = *((_DWORD *)v694 - 2);
            HIDWORD(v71) = *((_DWORD *)v677 - 2);
            v102 = v285[2 * (unsigned __int8)v356 + 1] ^ *((_DWORD *)v677 - 1) ^ v686[1];
            v357 = BYTE1(v432);
            v381 = (unsigned __int8)v397;
            v695 = &qword_15CA88[(unsigned __int8)v432];
            v373 = BYTE2(v449);
            v678 = &qword_15B288[BYTE1(v397)];
            v687 = &qword_15BA88[BYTE2(v320)];
            v877 = BYTE1(v449);
            v807 = &qword_15CA88[(unsigned __int8)v449];
            v878 = BYTE2(v496);
            v879 = (unsigned __int8)v320;
            v702 = &qword_15B288[BYTE1(v320)];
            v617 = HIDWORD(v71)
                 ^ v621
                 ^ v95
                 ^ v101
                 ^ v97
                 ^ *((_DWORD *)v706 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v89))
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v93);
            v707 = &qword_15BA88[BYTE6(v335)];
            v628 = v102
                 ^ v100
                 ^ v98
                 ^ v99
                 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v89) + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v93 + 1);
            v103 = *((_DWORD *)&unk_15D280 + 2 * v306);
            v104 = *((_DWORD *)&unk_15DA80 + 2 * v328 + 1);
            HIDWORD(v71) = *((_DWORD *)v714 - 2)
                         ^ v285[2 * HIDWORD(v387)]
                         ^ *((_DWORD *)&unk_15AA80 + 2 * v536)
                         ^ *((_DWORD *)v729 - 2);
            v105 = *((_DWORD *)&unk_15DA80 + 2 * v328);
            v106 = *((_DWORD *)v738 + 2);
            v107 = *((_DWORD *)&unk_15D280 + 2 * v306 + 1)
                 ^ v285[2 * HIDWORD(v387) + 1]
                 ^ *((_DWORD *)v714 - 1)
                 ^ *((_DWORD *)v723 + 1)
                 ^ *((_DWORD *)v729 - 1)
                 ^ *((_DWORD *)v738 + 3)
                 ^ *((_DWORD *)v744 - 1);
            v450 = *((_DWORD *)&unk_15D280 + 2 * v299 + 1);
            v108 = BYTE2(v432);
            v433 = *((_DWORD *)&unk_15D280 + 2 * v299);
            LODWORD(v306) = BYTE1(v496);
            v730 = &qword_15CA88[(unsigned __int8)v496];
            v321 = BYTE2(v503);
            HIDWORD(v387) = BYTE4(v335);
            v715 = &qword_15B288[BYTE5(v335)];
            v724 = &qword_15BA88[BYTE2(v423)];
            v329 = BYTE1(v503);
            v739 = &qword_15CA88[(unsigned __int8)v503];
            HIDWORD(v335) = BYTE2(v512);
            LODWORD(v492) = HIDWORD(v71) ^ v106 ^ *((_DWORD *)v744 - 2) ^ v103 ^ v105;
            LODWORD(v387) = BYTE2(v347);
            HIDWORD(v492) = v107 ^ v104;
            v109 = *(_QWORD *)&v285[2 * v407]
                 ^ *((_QWORD *)&unk_15AA80 + HIBYTE(v347))
                 ^ *(v640 - 1)
                 ^ *(v650 - 1)
                 ^ qword_15C278[HIBYTE(v397) + 1]
                 ^ *(v766 - 1);
            v110 = *((_DWORD *)&unk_15AA80 + 2 * BYTE3(v335)) ^ v285[2 * v865];
            HIDWORD(v71) = *((_DWORD *)&unk_15D280 + 2 * v357);
            v859 = *((_DWORD *)&unk_15DA80 + 2 * v373 + 1);
            v111 = *((_DWORD *)&unk_15DA80 + 2 * v373);
            v374 = (unsigned __int8)v423;
            v641 = &qword_15B288[BYTE1(v423)];
            v547 = v111;
            v112 = *((_DWORD *)&unk_15D280 + 2 * v357 + 1);
            v553 = &qword_15BA88[BYTE2(v441)];
            v358 = BYTE1(v512);
            v750 = &qword_15CA88[(unsigned __int8)v512];
            v113 = &qword_15CA88[(unsigned __int8)v347];
            v348 = BYTE1(v347);
            v300 = v113;
            v408 = (unsigned __int8)v441;
            v651 = &qword_15B288[BYTE1(v441)];
            v398 = BYTE2(v335);
            v745 = &qword_15BA88[BYTE2(v460)];
            v533 = *((_DWORD *)&unk_15DA80 + 2 * v108 + 1) ^ HIDWORD(v109) ^ v450;
            v509 = v109 ^ v433 ^ *((_DWORD *)&unk_15DA80 + 2 * v108);
            v758 = &qword_15B288[BYTE1(v460)];
            v424 = (unsigned __int8)v460;
            v767 = &qword_15BA88[BYTE2(v468)];
            v114 = *((_DWORD *)&unk_15AA80 + 2 * BYTE3(v335) + 1)
                 ^ v285[2 * v865 + 1]
                 ^ *((_DWORD *)v417 - 1)
                 ^ *((_DWORD *)v660 - 1);
            v115 = (unsigned __int8)v335;
            LODWORD(v335) = BYTE1(v335);
            v784 = &qword_15CA88[v115];
            v773 = &qword_15B288[BYTE1(v468)];
            v442 = (unsigned __int8)v468;
            v116 = v110 ^ *((_DWORD *)v417 - 2) ^ *((_DWORD *)v660 - 2) ^ *((_DWORD *)v778 + 2) ^ *((_DWORD *)v667 - 2);
            v117 = v114 ^ *((_DWORD *)v778 + 3) ^ *((_DWORD *)v667 - 1) ^ v112;
            v668 = &qword_15BA88[BYTE2(v476)];
            v864 = &qword_15CA88[(unsigned __int8)v342];
            v434 = BYTE2(v366);
            v866 = &qword_15B288[BYTE1(v292)];
            v779 = &qword_15BA88[BYTE2(v292)];
            v465 = v117 ^ v859;
            v451 = (unsigned __int8)v476;
            v456 = HIDWORD(v71) ^ v116 ^ v547;
            v860 = &qword_15B288[BYTE1(v476)];
            v118 = v791[1];
            v119 = *((_DWORD *)v678 - 1)
                 ^ v285[2 * v875 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v342) + 1)
                 ^ *((_DWORD *)v687 - 1)
                 ^ HIDWORD(v118);
            v120 = v285[2 * v875]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v342))
                 ^ *((_DWORD *)v678 - 2)
                 ^ *((_DWORD *)v687 - 2)
                 ^ v118;
            v121 = *(v695 - 1);
            v122 = v120 ^ v121;
            v123 = v119 ^ HIDWORD(v121) ^ *((_DWORD *)&unk_15D280 + 2 * v877 + 1);
            LODWORD(v121) = v285[2 * v381 + 1] ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v366) + 1);
            HIDWORD(v121) = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v366)) ^ v285[2 * v381];
            v124 = *((_DWORD *)&unk_15DA80 + 2 * v321 + 1);
            v125 = *((_DWORD *)&unk_15DA80 + 2 * v321);
            v378 = v123 ^ *((_DWORD *)&unk_15DA80 + 2 * v878 + 1);
            v317 = v122 ^ *((_DWORD *)&unk_15D280 + 2 * v877) ^ *((_DWORD *)&unk_15DA80 + 2 * v878);
            v679 = (_DWORD *)((char *)&unk_15D280 + 8 * BYTE1(v342));
            v688 = (char *)&unk_15DA80 + 8 * BYTE2(v366);
            v473 = HIDWORD(v121)
                 ^ *((_DWORD *)v702 - 2)
                 ^ *((_DWORD *)v707 - 2)
                 ^ *((_DWORD *)v801 + 2)
                 ^ *((_DWORD *)v807 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v306)
                 ^ v125;
            v539 = v121
                 ^ *((_DWORD *)v702 - 1)
                 ^ *((_DWORD *)v707 - 1)
                 ^ *((_DWORD *)v801 + 3)
                 ^ *((_DWORD *)v807 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v306 + 1)
                 ^ v124;
            v126 = *((_DWORD *)&unk_15D280 + 2 * v329)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(HIDWORD(v306)))
                 ^ v285[2 * v879]
                 ^ *((_DWORD *)v715 - 2)
                 ^ *((_DWORD *)v724 - 2)
                 ^ *((_DWORD *)v816 + 2)
                 ^ *((_DWORD *)v730 - 2);
            LODWORD(v109) = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(HIDWORD(v306)) + 1)
                          ^ v285[2 * v879 + 1]
                          ^ *((_DWORD *)v715 - 1)
                          ^ *((_DWORD *)v724 - 1)
                          ^ *((_DWORD *)v816 + 3)
                          ^ *((_DWORD *)v730 - 1)
                          ^ *((_DWORD *)&unk_15D280 + 2 * v329 + 1);
            v127 = *((_DWORD *)&unk_15DA80 + 2 * v387) ^ v285[2 * HIDWORD(v387)] ^ *((_DWORD *)&unk_15AA80 + 2 * v571);
            v716 = *((_DWORD *)&unk_15D280 + 2 * v358 + 1);
            v572 = *((_DWORD *)&unk_15D280 + 2 * v358);
            v543 = v109 ^ *((_DWORD *)&unk_15DA80 + 2 * HIDWORD(v335) + 1);
            v359 = &qword_15CA88[(unsigned __int8)v366];
            LODWORD(v121) = v641;
            v642 = BYTE1(v366);
            v364 = v126 ^ *((_DWORD *)&unk_15DA80 + 2 * HIDWORD(v335));
            v128 = *((_DWORD *)v300 - 1)
                 ^ v285[2 * v408 + 1]
                 ^ *((_DWORD *)v837 + 1)
                 ^ *((_DWORD *)v758 - 1)
                 ^ *((_DWORD *)v767 - 1)
                 ^ *((_DWORD *)v842 + 3)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v335 + 1);
            HIDWORD(v109) = *((_DWORD *)v300 - 2)
                          ^ v285[2 * v408]
                          ^ *((_DWORD *)&unk_15AA80 + 2 * v588)
                          ^ *((_DWORD *)v758 - 2)
                          ^ *((_DWORD *)v767 - 2)
                          ^ *((_DWORD *)v842 + 2)
                          ^ *((_DWORD *)&unk_15D280 + 2 * v335)
                          ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v342));
            v412 = *((_DWORD *)&unk_15DA80 + 2 * v387 + 1)
                 ^ v285[2 * HIDWORD(v387) + 1]
                 ^ *((_DWORD *)v820 + 1)
                 ^ *(_DWORD *)(v121 - 4)
                 ^ *((_DWORD *)v553 - 1)
                 ^ *((_DWORD *)v823 + 3)
                 ^ *((_DWORD *)v739 - 1)
                 ^ v716;
            v296 = v127
                 ^ *(_DWORD *)(v121 - 8)
                 ^ *((_DWORD *)v553 - 2)
                 ^ *((_DWORD *)v823 + 2)
                 ^ *((_DWORD *)v739 - 2)
                 ^ v572;
            v385 = *((_DWORD *)&unk_15D280 + 2 * v348 + 1)
                 ^ v285[2 * v374 + 1]
                 ^ *((_DWORD *)v828 + 1)
                 ^ *((_DWORD *)v651 - 1)
                 ^ *((_DWORD *)v745 - 1)
                 ^ *((_DWORD *)v833 + 3)
                 ^ *((_DWORD *)v750 - 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v398 + 1);
            v370 = v285[2 * v374]
                 ^ *((_DWORD *)&unk_15D280 + 2 * v348)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v578)
                 ^ *((_DWORD *)v651 - 2)
                 ^ *((_DWORD *)v745 - 2)
                 ^ *((_DWORD *)v833 + 2)
                 ^ *((_DWORD *)v750 - 2)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v398);
            v391 = HIDWORD(v109);
            v402 = v128 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v342) + 1);
            v129 = *((_DWORD *)v874 + 3)
                 ^ *((_DWORD *)v869 + 1)
                 ^ v285[2 * v451 + 1]
                 ^ *((_DWORD *)v866 - 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v483 + 1)
                 ^ *((_DWORD *)v872 - 1)
                 ^ *((_DWORD *)v359 - 1);
            v17 = *((_DWORD *)v359 - 2)
                ^ *((_DWORD *)v872 - 2)
                ^ *((_DWORD *)&unk_15AA80 + 2 * v880)
                ^ v285[2 * v451]
                ^ *((_DWORD *)v866 - 2)
                ^ *((_DWORD *)&unk_15DA80 + 2 * v483)
                ^ *((_DWORD *)v874 + 2)
                ^ *((_DWORD *)&unk_15D280 + 2 * BYTE5(v306));
            v130 = *((_DWORD *)&unk_15D280 + 2 * BYTE5(v306) + 1);
            v16 = *((_DWORD *)&unk_15DA80 + 2 * BYTE6(v306))
                ^ *((_DWORD *)v864 - 2)
                ^ *((_DWORD *)v860 - 2)
                ^ *((_DWORD *)v779 - 2)
                ^ v285[2 * v442]
                ^ *v856
                ^ *((_DWORD *)v862 + 2)
                ^ *((_DWORD *)&unk_15D280 + 2 * v642);
            v428 = v285[2 * v424]
                 ^ *((_DWORD *)v847 + 2)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v596)
                 ^ *((_DWORD *)v773 - 2)
                 ^ *((_DWORD *)v668 - 2)
                 ^ *((_DWORD *)v784 - 2)
                 ^ *v679
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v434);
            v551 = v285[2 * v442 + 1]
                 ^ *((_DWORD *)v779 - 1)
                 ^ v856[1]
                 ^ *((_DWORD *)v860 - 1)
                 ^ *((_DWORD *)v862 + 3)
                 ^ *((_DWORD *)v864 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v642 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE6(v306) + 1);
            v556 = v129 ^ v130;
            v480 = v679[1]
                 ^ v285[2 * v424 + 1]
                 ^ *((_DWORD *)v847 + 3)
                 ^ *((_DWORD *)v851 + 1)
                 ^ *((_DWORD *)v773 - 1)
                 ^ *((_DWORD *)v668 - 1)
                 ^ *((_DWORD *)v784 - 1)
                 ^ *((_DWORD *)v688 + 1);
          }
          while ( v287 != 14 );
          v131 = v285;
          v886 = v610;
          v286 = -1;
          v887 = v516;
          v888 = v486;
          v889 = v520;
          v890 = v527;
          v891 = v617;
          v892 = v628;
          v893 = v492;
          v894 = v509;
          v895 = v533;
          v896 = v456;
          v897 = v465;
          v898 = v317;
          v915 = v129 ^ v130;
          v912 = v16;
          v899 = v378;
          v914 = v17;
          v900 = v473;
          v901 = v539;
          v902 = v364;
          v903 = v543;
          v904 = v296;
          v905 = v412;
          v906 = v370;
          v907 = v385;
          v908 = v391;
          v909 = v402;
          v910 = v428;
          v911 = v480;
          v913 = v551;
          v375 = v916;
          v537 = v917;
          v388 = v918;
          v393 = v919;
          v399 = v920;
          v409 = v921;
          v418 = v922;
          v425 = v923;
          v435 = v924;
          v564 = v925;
          v443 = v926;
          v522 = v927;
          v452 = v928;
          v469 = v929;
          v461 = v930;
          v477 = v931;
          v489 = v932;
          v132 = v939;
          v497 = v933;
          v133 = v941;
          v134 = v945;
          v135 = v131;
          v484 = v934;
          v301 = v943;
          v504 = v935;
          v349 = v944;
          v513 = v936;
          v330 = v937;
          v528 = v938;
          v288 = v940;
          v293 = v942;
          v136 = v946;
          do
          {
            v336 = ~v399;
            v322 = v537 ^ HIDWORD(v286);
            v307 = ~v418;
            v360 = ~v452;
            v343 = ~v435;
            v137 = ~v388;
            v138 = ~v330;
            v139 = ~v443;
            v419 = ~v132;
            v140 = ~v461;
            v367 = ~v489;
            v444 = ~v301;
            v313 = ~v375;
            v462 = ~v134;
            v331 = v393 ^ HIDWORD(v286) ^ 0x10000000;
            v339 = v425 ^ HIDWORD(v286) ^ 0x30000000;
            v302 = v409 ^ HIDWORD(v286) ^ 0x20000000;
            v141 = v469 ^ HIDWORD(v286) ^ 0x60000000;
            v376 = v497 ^ (HIDWORD(v286) + 0x80000000);
            v389 = v504 ^ HIDWORD(v286) ^ 0x90000000;
            v400 = HIDWORD(v513) ^ HIDWORD(v286) ^ 0xA0000000;
            v410 = v528 ^ HIDWORD(v286) ^ 0xB0000000;
            v426 = v288 ^ HIDWORD(v286) ^ 0xC0000000;
            v436 = v293 ^ HIDWORD(v286) ^ 0xD0000000;
            HIDWORD(v513) = v477 ^ HIDWORD(v286) ^ 0x70000000;
            v453 = HIDWORD(v286) ^ 0xE0000000 ^ v349;
            v529 = ~v133;
            v470 = HIDWORD(v286) ^ 0xF0000000 ^ v136;
            v505 = v141;
            v478 = v139;
            v382 = ~v484;
            v394 = ~(_DWORD)v513;
            v142 = v522;
            v523 = v138;
            v350 = v142 ^ HIDWORD(v286) ^ 0x50000000;
            LOWORD(v513) = v140;
            v498 = v137;
            v824 = HIBYTE(v453);
            v829 = HIBYTE(v470);
            v838 = ((unsigned int)v537 ^ HIDWORD(v286)) >> 24;
            v852 = HIBYTE(v331);
            v538 = HIBYTE(v302);
            v703 = &qword_15C278[HIBYTE(v139)];
            v643 = &qword_15C278[(unsigned int)~v134 >> 24];
            v708 = &qword_15C278[HIBYTE(v360)];
            v661 = &qword_15C278[HIBYTE(v313)];
            v579 = &qword_15C278[HIBYTE(v138)];
            v597 = &qword_15C278[(unsigned int)~v133 >> 24];
            v622 = &qword_15C278[HIBYTE(v444)];
            v725 = &qword_15C278[HIBYTE(v140)];
            v696 = &qword_15C278[HIBYTE(v343)];
            v669 = &qword_15C278[HIBYTE(v137)];
            v541 = HIBYTE(v339);
            v689 = &qword_15C278[HIBYTE(v307)];
            v680 = &qword_15C278[HIBYTE(v336)];
            v143 = v564 ^ HIDWORD(v286) ^ 0x40000000;
            v548 = HIBYTE(v143);
            v144 = &qword_15CA88[(unsigned __int8)v331];
            v560 = HIBYTE(v350);
            v145 = &qword_15BA88[BYTE2(v360)];
            v731 = &qword_15C278[(unsigned int)~v489 >> 24];
            v146 = &qword_15B288[BYTE1(v343)];
            v746 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v141) + 1);
            v717 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v141));
            v751 = BYTE1(v302);
            v565 = &qword_15BA88[BYTE2(v478)];
            v147 = &qword_15C278[HIBYTE(v419)];
            v589 = &qword_15CA88[(unsigned __int8)v322];
            v148 = *((_DWORD *)v144 - 2)
                 ^ ~v135[2 * (unsigned __int8)v336]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(HIDWORD(v513)))
                 ^ *((_DWORD *)v146 - 2)
                 ^ *((_DWORD *)v145 - 2)
                 ^ *((_DWORD *)v147 + 2);
            v294 = 0xFFFFFF - HIDWORD(v286);
            v604 = &qword_15CA88[(unsigned __int8)v302];
            v554 = BYTE2(v302);
            v759 = (unsigned __int8)v307;
            v149 = *((_DWORD *)v144 - 1)
                 ^ *((_DWORD *)v145 - 1)
                 ^ v135[2 * (unsigned __int8)v336 + 1]
                 ^ ~((0xFFFFFF - HIDWORD(v286)) ^ 0x10000000)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(HIDWORD(v513)) + 1)
                 ^ *((_DWORD *)v146 - 1)
                 ^ *((_DWORD *)v147 + 3)
                 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v339) + 1);
            v740 = &qword_15BA88[BYTE2(v307)];
            v792 = (unsigned __int8)v478;
            v303 = &qword_15B288[BYTE1(v478)];
            v150 = &qword_15BA88[BYTE2(v140)];
            v652 = &qword_15CA88[(unsigned __int8)v143];
            v780 = BYTE2(v505);
            v485 = v149 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v350) + 1);
            v573 = BYTE2(v339);
            v151 = *((_DWORD *)&unk_15D280 + 2 * v751);
            v631 = &qword_15CA88[(unsigned __int8)v339];
            v479 = v148 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v339)) ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v350));
            v152 = *((_DWORD *)&unk_15D280 + 2 * v751 + 1);
            v153 = v135[2 * (unsigned __int8)v498 + 1] ^ v746 ^ (HIDWORD(v286) - 0xFFFFFF);
            HIDWORD(v286) -= 0x1FFFFFF;
            v154 = v153 ^ HIDWORD(qword_15B288[BYTE1(v307) - 1]);
            v155 = LODWORD(qword_15B288[BYTE1(v307) - 1]) ^ ~(v135[2 * (unsigned __int8)v498] ^ v717);
            v156 = (unsigned __int8)v343;
            v490 = &qword_15BA88[BYTE2(v343)];
            v752 = (unsigned __int8)v360;
            v308 = &qword_15B288[BYTE1(v360)];
            v157 = v154 ^ *((_DWORD *)v565 - 1) ^ *((_DWORD *)v579 + 3) ^ *((_DWORD *)v589 - 1) ^ v152;
            v158 = &qword_15BA88[BYTE2(v367)];
            v159 = v155
                 ^ *((_DWORD *)v565 - 2)
                 ^ *((_DWORD *)v579 + 2)
                 ^ *((_DWORD *)v589 - 2)
                 ^ v151
                 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v143));
            v566 = &qword_15CA88[(unsigned __int8)v350];
            v160 = *((_DWORD *)v604 - 2);
            v340 = v159;
            v161 = *((_DWORD *)v604 - 1);
            v344 = v157 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v143) + 1);
            v361 = BYTE1(v350);
            v605 = BYTE6(v513);
            v718 = BYTE1(v505);
            v590 = &qword_15CA88[(unsigned __int8)v505];
            v162 = &qword_15B288[BYTE1(v513)];
            v817 = (unsigned __int8)v367;
            v506 = &qword_15B288[BYTE1(v367)];
            v351 = *((_DWORD *)v150 - 1)
                 ^ v135[2 * v759 + 1]
                 ^ v294
                 ^ 0xDFFFFFFF
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v376) + 1)
                 ^ *((_DWORD *)v303 - 1)
                 ^ *((_DWORD *)v597 + 3)
                 ^ v161
                 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v143) + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v780 + 1);
            v304 = ~v135[2 * v759]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v376))
                 ^ *((_DWORD *)v303 - 2)
                 ^ *((_DWORD *)v150 - 2)
                 ^ *((_DWORD *)v597 + 2)
                 ^ v160
                 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v143))
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v780);
            v760 = BYTE5(v513);
            v163 = *((_DWORD *)v622 + 3);
            v164 = *((_DWORD *)v631 - 2)
                 ^ *((_DWORD *)v158 - 2)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v389))
                 ^ ~v135[2 * v156]
                 ^ *((_DWORD *)v308 - 2)
                 ^ *((_DWORD *)v622 + 2);
            v623 = &qword_15CA88[BYTE4(v513)];
            v165 = *((_DWORD *)v631 - 1)
                 ^ *((_DWORD *)v158 - 1)
                 ^ *((_DWORD *)v308 - 1)
                 ^ v135[2 * v156 + 1]
                 ^ v294
                 ^ 0xCFFFFFFF
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v389) + 1)
                 ^ v163;
            HIDWORD(v513) = &qword_15B288[BYTE1(v382)];
            v580 = &qword_15BA88[BYTE2(v523)];
            v774 = BYTE1(v376);
            v632 = &qword_15CA88[(unsigned __int8)v376];
            v309 = v165 ^ *((_DWORD *)&unk_15D280 + 2 * v361 + 1) ^ *((_DWORD *)&unk_15DA80 + 2 * v605 + 1);
            v362 = v164 ^ *((_DWORD *)&unk_15D280 + 2 * v361) ^ *((_DWORD *)&unk_15DA80 + 2 * v605);
            v166 = *((_DWORD *)v652 - 2);
            v598 = &qword_15B288[BYTE1(v394)];
            v167 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v400) + 1)
                 ^ v294
                 ^ 0xBFFFFFFF
                 ^ v135[2 * v792 + 1]
                 ^ *((_DWORD *)v162 - 1)
                 ^ HIDWORD(qword_15BA88[BYTE2(v382) - 1])
                 ^ *((_DWORD *)v643 + 3)
                 ^ *((_DWORD *)v652 - 1);
            v653 = &qword_15CA88[(unsigned __int8)v389];
            v781 = BYTE1(v389);
            v785 = BYTE2(v410);
            v168 = v166
                 ^ *((_DWORD *)v643 + 2)
                 ^ ~v135[2 * v792]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v400))
                 ^ *((_DWORD *)v162 - 2)
                 ^ LODWORD(qword_15BA88[BYTE2(v382) - 1])
                 ^ *((_DWORD *)&unk_15D280 + 2 * v718);
            v793 = (unsigned __int8)v382;
            v747 = &qword_15C278[HIBYTE(v382)];
            v368 = v168 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v376));
            v169 = *((_DWORD *)v566 - 1);
            v377 = *((_DWORD *)&unk_15D280 + 2 * v718 + 1) ^ v167 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v376) + 1);
            v170 = &qword_15BA88[BYTE2(v394)];
            v171 = (unsigned __int8)v523;
            v524 = &qword_15B288[BYTE1(v523)];
            v834 = v171;
            v172 = *((_DWORD *)v566 - 2)
                 ^ ~v135[2 * v752]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v410))
                 ^ *((_DWORD *)v506 - 2)
                 ^ *((_DWORD *)v170 - 2)
                 ^ *((_DWORD *)v661 + 2);
            v567 = &qword_15BA88[BYTE2(v529)];
            v797 = BYTE1(v400);
            v173 = *((_DWORD *)v506 - 1)
                 ^ v135[2 * v752 + 1]
                 ^ v294
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v410) + 1)
                 ^ *((_DWORD *)v170 - 1)
                 ^ *((_DWORD *)v661 + 3)
                 ^ v169;
            v802 = BYTE2(v426);
            v662 = &qword_15CA88[(unsigned __int8)v400];
            v174 = *((_DWORD *)&unk_15D280 + 2 * v760);
            v175 = *((_DWORD *)&unk_15D280 + 2 * v760 + 1);
            v761 = (unsigned __int8)v394;
            v383 = v172 ^ v174 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v389));
            v848 = (unsigned __int8)v419;
            v768 = &qword_15C278[HIBYTE(v394)];
            v390 = v173 ^ v175 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v389) + 1);
            v644 = &qword_15B288[BYTE1(v419)];
            v176 = &qword_15BA88[BYTE2(v444)];
            v177 = *((_DWORD *)v580 - 2);
            v808 = BYTE1(v410);
            v178 = v135[2 * (unsigned __int8)v513 + 1]
                 ^ v294
                 ^ 0x9FFFFFFF
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v426) + 1)
                 ^ *(_DWORD *)(HIDWORD(v513) - 4)
                 ^ *((_DWORD *)v580 - 1);
            v719 = &qword_15CA88[(unsigned __int8)v410];
            v812 = BYTE2(v436);
            v507 = (unsigned __int8)v529;
            v581 = &qword_15B288[BYTE1(v529)];
            v179 = &qword_15BA88[BYTE2(v462)];
            v180 = ~v135[2 * (unsigned __int8)v513]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v426))
                 ^ *(_DWORD *)(HIDWORD(v513) - 8)
                 ^ v177
                 ^ *((_DWORD *)v669 + 2)
                 ^ *((_DWORD *)v590 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v774);
            v181 = v178 ^ *((_DWORD *)v669 + 3) ^ *((_DWORD *)v590 - 1) ^ *((_DWORD *)&unk_15D280 + 2 * v774 + 1);
            v843 = BYTE1(v426);
            v670 = &qword_15CA88[(unsigned __int8)v426];
            v395 = v180 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v400));
            v401 = v181 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v400) + 1);
            v182 = &qword_15BA88[BYTE2(v419)];
            v514 = (unsigned __int8)v444;
            v183 = BYTE2(v453);
            v445 = &qword_15B288[BYTE1(v444)];
            v184 = *((_DWORD *)v598 - 1)
                 ^ v135[2 * v817 + 1]
                 ^ ~(v294 ^ 0x70000000)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v436) + 1)
                 ^ *((_DWORD *)v182 - 1)
                 ^ *((_DWORD *)v680 + 3)
                 ^ *((_DWORD *)v623 - 1);
            v185 = *((_DWORD *)v623 - 2)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v436))
                 ^ ~v135[2 * v817]
                 ^ *((_DWORD *)v598 - 2)
                 ^ *((_DWORD *)v182 - 2)
                 ^ *((_DWORD *)v680 + 2);
            v591 = &qword_15BA88[BYTE2(v313)];
            v186 = &qword_15CA88[(unsigned __int8)v436];
            v437 = BYTE1(v436);
            v681 = v186;
            v624 = BYTE2(v470);
            v187 = (unsigned __int8)v453;
            v454 = BYTE1(v453);
            v753 = &qword_15CA88[v187];
            v411 = v185 ^ *((_DWORD *)&unk_15D280 + 2 * v781) ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v410));
            v420 = *((_DWORD *)&unk_15D280 + 2 * v781 + 1) ^ v184 ^ *((_DWORD *)&unk_15DA80 + 2 * v785 + 1);
            LOBYTE(v185) = v470;
            v471 = BYTE1(v470);
            v775 = &qword_15CA88[(unsigned __int8)v185];
            v188 = *((_DWORD *)v567 - 2) ^ *((_DWORD *)v524 - 2) ^ ~v135[2 * v793] ^ *((_DWORD *)&unk_15AA80 + 2 * v824);
            v189 = ~(v294 ^ 0x80000000)
                 ^ v135[2 * v793 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v824 + 1)
                 ^ *((_DWORD *)v524 - 1)
                 ^ *((_DWORD *)v567 - 1);
            v518 = BYTE2(v331);
            v568 = BYTE1(v331);
            v190 = *((_DWORD *)v689 + 2) ^ v188;
            v191 = *((_DWORD *)v689 + 3) ^ v189 ^ *((_DWORD *)v632 - 1);
            v525 = (unsigned __int8)v462;
            v599 = &qword_15B288[BYTE1(v462)];
            v606 = &qword_15BA88[BYTE2(v498)];
            v690 = &qword_15B288[BYTE1(v498)];
            v427 = v191 ^ *((_DWORD *)&unk_15D280 + 2 * v797 + 1) ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v426) + 1);
            v332 = v190
                 ^ *((_DWORD *)v632 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v797)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v802);
            v192 = *((_DWORD *)v653 - 2);
            v463 = BYTE2(v322);
            v499 = BYTE1(v322);
            v193 = ~(v294 ^ 0x90000000)
                 ^ v135[2 * v761 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v829 + 1)
                 ^ *((_DWORD *)v644 - 1);
            v194 = *((_DWORD *)v653 - 1);
            v195 = ~v135[2 * v761] ^ *((_DWORD *)&unk_15AA80 + 2 * v829) ^ *((_DWORD *)v644 - 2) ^ *((_DWORD *)v176 - 2);
            v530 = (unsigned __int8)v313;
            v645 = &qword_15B288[BYTE1(v313)];
            v654 = &qword_15BA88[BYTE2(v336)];
            v762 = &qword_15B288[BYTE1(v336)];
            v314 = v195
                 ^ *((_DWORD *)v696 + 2)
                 ^ v192
                 ^ *((_DWORD *)&unk_15D280 + 2 * v808)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v812);
            v323 = *((_DWORD *)v696 + 3)
                 ^ v193
                 ^ *((_DWORD *)v176 - 1)
                 ^ v194
                 ^ *((_DWORD *)&unk_15D280 + 2 * v808 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v812 + 1);
            v786 = *((_DWORD *)&unk_15D280 + 2 * v437);
            v794 = *((_DWORD *)&unk_15D280 + 2 * v437 + 1);
            v438 = v135[2 * v834 + 1]
                 ^ ~(v294 ^ 0xA0000000)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v838 + 1)
                 ^ *((_DWORD *)v581 - 1)
                 ^ *((_DWORD *)v179 - 1)
                 ^ *((_DWORD *)v703 + 3)
                 ^ *((_DWORD *)v662 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v843 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v183 + 1);
            v337 = ~v135[2 * v834]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v838)
                 ^ *((_DWORD *)v581 - 2)
                 ^ *((_DWORD *)v179 - 2)
                 ^ *((_DWORD *)v703 + 2)
                 ^ *((_DWORD *)v662 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v843)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v183);
            v196 = *((_DWORD *)v445 - 1);
            v197 = *((_DWORD *)v708 + 3);
            v446 = ~v135[2 * v848]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v852)
                 ^ *((_DWORD *)v445 - 2)
                 ^ *((_DWORD *)v591 - 2)
                 ^ *((_DWORD *)v708 + 2)
                 ^ *((_DWORD *)v719 - 2)
                 ^ v786
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v624);
            v709 = *((_DWORD *)&unk_15D280 + 2 * v454 + 1);
            v198 = *((_DWORD *)&unk_15D280 + 2 * v454);
            v787 = *((_DWORD *)&unk_15D280 + 2 * v471 + 1);
            v798 = *((_DWORD *)&unk_15DA80 + 2 * v518 + 1);
            v455 = v197
                 ^ ~(v294 ^ 0xB0000000)
                 ^ v135[2 * v848 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v852 + 1)
                 ^ v196
                 ^ *((_DWORD *)v591 - 1)
                 ^ *((_DWORD *)v719 - 1)
                 ^ v794
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v624 + 1);
            v625 = *((_DWORD *)&unk_15DA80 + 2 * v463 + 1);
            v464 = *((_DWORD *)v670 - 2)
                 ^ *((_DWORD *)v725 + 2)
                 ^ ~v135[2 * v507]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v538)
                 ^ *((_DWORD *)v599 - 2)
                 ^ *((_DWORD *)v606 - 2)
                 ^ v198
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v463);
            v199 = ~(v294 ^ 0xC0000000) ^ v135[2 * v507 + 1];
            v592 = *((_DWORD *)v490 - 2);
            v200 = ~(v294 ^ 0xE0000000)
                 ^ v135[2 * v525 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v548 + 1)
                 ^ *((_DWORD *)v690 - 1)
                 ^ *((_DWORD *)v740 - 1)
                 ^ *((_DWORD *)v747 + 3)
                 ^ *((_DWORD *)v753 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v499 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v554 + 1);
            v289 = *((_DWORD *)&unk_15DA80 + 2 * v573 + 1)
                 ^ ~(v294 ^ 0xF0000000)
                 ^ v135[2 * v530 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v560 + 1)
                 ^ *((_DWORD *)v762 - 1)
                 ^ *((_DWORD *)v490 - 1)
                 ^ *((_DWORD *)v768 + 3)
                 ^ *((_DWORD *)v775 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v568 + 1);
            v491 = *((_DWORD *)v731 + 2)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v541)
                 ^ ~v135[2 * v514]
                 ^ *((_DWORD *)v645 - 2)
                 ^ *((_DWORD *)v654 - 2)
                 ^ *((_DWORD *)v681 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v471)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v518);
            v508 = *((_DWORD *)&unk_15DA80 + 2 * v554)
                 ^ ~v135[2 * v525]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v548)
                 ^ *((_DWORD *)v690 - 2)
                 ^ *((_DWORD *)v740 - 2)
                 ^ *((_DWORD *)v747 + 2)
                 ^ *((_DWORD *)v753 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v499);
            v519 = ~v135[2 * v530]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v560)
                 ^ *((_DWORD *)v762 - 2)
                 ^ v592
                 ^ *((_DWORD *)v768 + 2)
                 ^ *((_DWORD *)v775 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v568)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v573);
            v472 = v199
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v538 + 1)
                 ^ *((_DWORD *)v599 - 1)
                 ^ *((_DWORD *)v606 - 1)
                 ^ *((_DWORD *)v725 + 3)
                 ^ *((_DWORD *)v670 - 1)
                 ^ v709
                 ^ v625;
            v555 = HIBYTE(v377);
            v561 = HIBYTE(v390);
            v500 = v135[2 * v514 + 1]
                 ^ ~(v294 ^ 0xD0000000)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v541 + 1)
                 ^ *((_DWORD *)v645 - 1)
                 ^ *((_DWORD *)v654 - 1)
                 ^ *((_DWORD *)v731 + 3)
                 ^ *((_DWORD *)v681 - 1)
                 ^ v787
                 ^ v798;
            v515 = v200;
            v818 = HIBYTE(v200);
            v825 = HIBYTE(v289);
            v844 = HIBYTE(v344);
            v853 = HIBYTE(v485);
            v542 = HIBYTE(v351);
            v549 = HIBYTE(v309);
            v710 = &qword_15C278[HIBYTE(v395)];
            v607 = &qword_15C278[HIBYTE(v491)];
            v633 = &qword_15C278[HIBYTE(v508)];
            v704 = &qword_15C278[HIBYTE(v383)];
            v646 = &qword_15C278[HIBYTE(v519)];
            v655 = &qword_15C278[HIBYTE(v340)];
            v720 = &qword_15C278[HIBYTE(v411)];
            v663 = &qword_15C278[HIBYTE(v479)];
            v295 = &qword_15C278[HIBYTE(v332)];
            v682 = &qword_15C278[HIBYTE(v362)];
            v691 = &qword_15C278[HIBYTE(v368)];
            v671 = &qword_15C278[HIBYTE(v304)];
            v201 = qword_15CA88[(unsigned __int8)v344 - 1];
            v202 = &qword_15B288[BYTE1(v368)];
            v203 = &qword_15BA88[BYTE2(v383)];
            v204 = &qword_15C278[HIBYTE(v446)];
            v205 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v401))
                 ^ v135[2 * (unsigned __int8)v479]
                 ^ LODWORD(qword_15B288[BYTE1(v362) - 1])
                 ^ *((_DWORD *)v203 - 2);
            v206 = &qword_15BA88[BYTE2(v395)];
            v207 = v135[2 * (unsigned __int8)v479 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v401) + 1)
                 ^ HIDWORD(qword_15B288[BYTE1(v362) - 1])
                 ^ *((_DWORD *)v203 - 1)
                 ^ *((_DWORD *)v204 + 3);
            v732 = (unsigned __int8)v362;
            v748 = &qword_15BA88[BYTE2(v362)];
            v754 = (unsigned __int8)v383;
            v363 = &qword_15B288[BYTE1(v383)];
            v208 = v205 ^ *((_DWORD *)v204 + 2) ^ v201 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v351));
            v209 = v207 ^ HIDWORD(v201) ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v351) + 1);
            LODWORD(v201) = &qword_15CA88[(unsigned __int8)v351];
            v384 = BYTE2(v351);
            v210 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v377) + 1);
            WORD2(v201) = v377;
            v375 = v208 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v377));
            v211 = BYTE5(v201);
            v537 = v209 ^ v210;
            v574 = &qword_15CA88[BYTE4(v201)];
            v212 = *((_DWORD *)v202 - 1);
            HIDWORD(v201) = *((_DWORD *)v206 - 1);
            v213 = v135[2 * (unsigned __int8)v304] ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v420)) ^ *((_DWORD *)v202 - 2);
            v214 = *((_DWORD *)v206 - 2);
            v215 = (unsigned __int8)v368;
            v776 = &qword_15BA88[BYTE2(v368)];
            v216 = &qword_15C278[HIBYTE(v464)];
            v217 = *((_DWORD *)v216 + 2);
            v769 = (unsigned __int8)v395;
            v218 = v135[2 * (unsigned __int8)v304 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v420) + 1)
                 ^ v212
                 ^ HIDWORD(v201)
                 ^ *((_DWORD *)v216 + 3);
            v219 = &qword_15B288[BYTE1(v395)];
            v220 = &qword_15BA88[BYTE2(v332)];
            v221 = v213 ^ v214 ^ v217 ^ LODWORD(qword_15CA88[(unsigned __int8)v485 - 1]);
            v352 = &qword_15CA88[(unsigned __int8)v309];
            v222 = *((_DWORD *)&unk_15D280 + 2 * BYTE1(v309) + 1);
            v369 = BYTE2(v309);
            v697 = BYTE1(v390);
            v582 = &qword_15CA88[(unsigned __int8)v390];
            v223 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v390) + 1);
            v788 = (unsigned __int8)v411;
            v388 = v221 ^ *((_DWORD *)&unk_15D280 + 2 * BYTE1(v309)) ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v390));
            v310 = &qword_15B288[BYTE1(v411)];
            v393 = v218 ^ HIDWORD(qword_15CA88[(unsigned __int8)v485 - 1]) ^ v222 ^ v223;
            HIDWORD(v201) = &qword_15BA88[BYTE2(v411)];
            v224 = v135[2 * v732 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v427) + 1)
                 ^ *((_DWORD *)v363 - 1)
                 ^ *(_DWORD *)(HIDWORD(v201) - 4);
            v225 = *(_DWORD *)(HIDWORD(v201) - 8)
                 ^ v135[2 * v732]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v427))
                 ^ *((_DWORD *)v363 - 2);
            v526 = BYTE1(v401);
            v226 = *(_QWORD *)(v201 - 8);
            v593 = &qword_15CA88[(unsigned __int8)v401];
            v227 = v225 ^ *((_DWORD *)v607 + 2);
            v228 = BYTE2(v427);
            v799 = (unsigned __int8)v332;
            v333 = &qword_15B288[BYTE1(v332)];
            v229 = *((_DWORD *)&unk_15D280 + 2 * v211) ^ v227 ^ v226;
            HIDWORD(v226) ^= *((_DWORD *)&unk_15D280 + 2 * v211 + 1) ^ v224 ^ *((_DWORD *)v607 + 3);
            LODWORD(v226) = &qword_15BA88[BYTE2(v337)];
            v733 = BYTE1(v420);
            v608 = &qword_15CA88[(unsigned __int8)v420];
            v230 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v401) + 1);
            v399 = v229 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v401));
            v231 = v135[2 * v215];
            v232 = v135[2 * v215 + 1];
            v409 = HIDWORD(v226) ^ v230;
            v531 = &qword_15B288[BYTE1(v314)];
            v233 = BYTE2(v438);
            HIDWORD(v226) = &qword_15BA88[BYTE2(v446)];
            v234 = BYTE1(v427);
            v626 = &qword_15CA88[(unsigned __int8)v427];
            v235 = *((_DWORD *)v633 + 3)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v323) + 1)
                 ^ v232
                 ^ *((_DWORD *)v219 - 1)
                 ^ *((_DWORD *)v220 - 1)
                 ^ *((_DWORD *)v352 - 1);
            v236 = *((_DWORD *)v633 + 2)
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v323))
                 ^ v231
                 ^ *((_DWORD *)v219 - 2)
                 ^ *((_DWORD *)v220 - 2)
                 ^ *((_DWORD *)v352 - 2);
            v353 = &qword_15B288[BYTE1(v337)];
            v237 = v236 ^ *((_DWORD *)&unk_15D280 + 2 * v697);
            v238 = v235 ^ *((_DWORD *)&unk_15D280 + 2 * v697 + 1);
            v600 = &qword_15BA88[BYTE2(v464)];
            v809 = BYTE1(v323);
            v698 = &qword_15CA88[(unsigned __int8)v323];
            v239 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v420) + 1);
            v813 = BYTE2(v455);
            v418 = v237 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v420));
            v425 = v238 ^ v239;
            v240 = &qword_15BA88[BYTE2(v314)];
            v241 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v438) + 1)
                 ^ v135[2 * v754 + 1]
                 ^ *((_DWORD *)v310 - 1)
                 ^ *((_DWORD *)v240 - 1);
            v242 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v438))
                 ^ v135[2 * v754]
                 ^ *((_DWORD *)v310 - 2)
                 ^ *((_DWORD *)v240 - 2);
            v311 = BYTE2(v472);
            v243 = (unsigned __int8)v314;
            v244 = *((_DWORD *)v646 + 3) ^ v241 ^ *((_DWORD *)v574 - 1);
            v245 = v242 ^ *((_DWORD *)v646 + 2) ^ *((_DWORD *)v574 - 2);
            v755 = &qword_15C278[HIBYTE(v314)];
            v839 = (unsigned __int8)v446;
            v575 = &qword_15B288[BYTE1(v446)];
            v246 = v245 ^ *((_DWORD *)&unk_15D280 + 2 * v526) ^ *((_DWORD *)&unk_15DA80 + 2 * v228);
            v564 = v244 ^ *((_DWORD *)&unk_15D280 + 2 * v526 + 1) ^ *((_DWORD *)&unk_15DA80 + 2 * v228 + 1);
            v247 = &qword_15BA88[BYTE2(v491)];
            LOWORD(v241) = v438;
            v435 = v246;
            v821 = BYTE1(v241);
            v647 = &qword_15CA88[(unsigned __int8)v241];
            v315 = (unsigned __int8)v337;
            v782 = &qword_15C278[HIBYTE(v337)];
            v248 = *((_DWORD *)v582 - 2);
            v849 = (unsigned __int8)v464;
            v249 = v135[2 * v769 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v455) + 1)
                 ^ *((_DWORD *)v333 - 1)
                 ^ *(_DWORD *)(v226 - 4)
                 ^ *((_DWORD *)v655 + 3)
                 ^ *((_DWORD *)v582 - 1);
            v583 = &qword_15B288[BYTE1(v464)];
            v250 = v248
                 ^ v135[2 * v769]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v455))
                 ^ *((_DWORD *)v333 - 2)
                 ^ *(_DWORD *)(v226 - 8)
                 ^ *((_DWORD *)v655 + 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v733);
            v830 = BYTE1(v455);
            v656 = &qword_15CA88[(unsigned __int8)v455];
            v443 = v250 ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v323));
            v522 = v249 ^ *((_DWORD *)&unk_15D280 + 2 * v733 + 1) ^ *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v323) + 1);
            v324 = BYTE1(v472);
            v251 = *((_DWORD *)v531 - 2)
                 ^ v135[2 * v788]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v472))
                 ^ *(_DWORD *)(HIDWORD(v226) - 8);
            v252 = v135[2 * v788 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v472) + 1)
                 ^ *((_DWORD *)v531 - 1)
                 ^ *(_DWORD *)(HIDWORD(v226) - 4);
            v726 = &qword_15CA88[(unsigned __int8)v472];
            v334 = (unsigned __int8)v491;
            v532 = &qword_15B288[BYTE1(v491)];
            v795 = BYTE1(v500);
            v734 = &qword_15CA88[(unsigned __int8)v500];
            v452 = *((_DWORD *)v593 - 2)
                 ^ v251
                 ^ *((_DWORD *)v663 + 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v234)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v233);
            v253 = *(v608 - 1);
            v469 = *((_DWORD *)v663 + 3)
                 ^ v252
                 ^ *((_DWORD *)v593 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v234 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v233 + 1);
            v254 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v500)) ^ v135[2 * v799] ^ *((_DWORD *)v353 - 2);
            v255 = *((_DWORD *)&unk_15AA80 + 2 * HIBYTE(v500) + 1) ^ v135[2 * v799 + 1] ^ *((_DWORD *)v353 - 1);
            v256 = *((_DWORD *)v600 - 2);
            v257 = *((_DWORD *)v600 - 1);
            v354 = (unsigned __int8)v508;
            v601 = &qword_15B288[BYTE1(v508)];
            v609 = &qword_15BA88[BYTE2(v340)];
            v258 = BYTE2(v289);
            v664 = &qword_15B288[BYTE1(v519)];
            LODWORD(v253) = v253 ^ v254 ^ v256 ^ *((_DWORD *)v671 + 2) ^ *((_DWORD *)&unk_15D280 + 2 * v809);
            HIDWORD(v253) ^= v255 ^ v257 ^ *((_DWORD *)v671 + 3) ^ *((_DWORD *)&unk_15D280 + 2 * v809 + 1);
            v672 = &qword_15BA88[BYTE2(v479)];
            v741 = &qword_15B288[BYTE1(v479)];
            v259 = (_DWORD *)((char *)&unk_15DA80 + 8 * v311);
            v461 = v253 ^ *((_DWORD *)&unk_15DA80 + 2 * v813);
            v338 = BYTE1(v515);
            v477 = HIDWORD(v253) ^ *((_DWORD *)&unk_15DA80 + 2 * v813 + 1);
            v763 = &qword_15CA88[(unsigned __int8)v515];
            v312 = BYTE2(v344);
            HIDWORD(v253) = *((_DWORD *)v682 + 3);
            v345 = BYTE1(v344);
            v260 = *((_DWORD *)&unk_15AA80 + 2 * v818)
                 ^ v135[2 * v243]
                 ^ *((_DWORD *)v575 - 2)
                 ^ *((_DWORD *)v247 - 2)
                 ^ *((_DWORD *)v682 + 2);
            v683 = &qword_15B288[BYTE1(v340)];
            v261 = v135[2 * v243 + 1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v818 + 1)
                 ^ *((_DWORD *)v575 - 1)
                 ^ *((_DWORD *)v247 - 1)
                 ^ HIDWORD(v253)
                 ^ *((_DWORD *)v626 - 1);
            v262 = v260 ^ *((_DWORD *)v626 - 2);
            v627 = &qword_15BA88[BYTE2(v304)];
            v770 = &qword_15B288[BYTE1(v304)];
            v489 = v262 ^ *((_DWORD *)&unk_15D280 + 2 * v821) ^ *v259;
            HIDWORD(v253) = (unsigned __int8)v289;
            v290 = BYTE1(v289);
            v789 = &qword_15CA88[HIDWORD(v253)];
            LODWORD(v226) = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v500));
            v263 = *((_DWORD *)&unk_15DA80 + 2 * BYTE2(v500) + 1);
            v497 = v261 ^ *((_DWORD *)&unk_15D280 + 2 * v821 + 1) ^ v259[1];
            HIDWORD(v253) = *((_DWORD *)&unk_15AA80 + 2 * v825 + 1) ^ v135[2 * v315 + 1];
            v264 = v135[2 * v315] ^ *((_DWORD *)&unk_15AA80 + 2 * v825);
            v305 = BYTE2(v485);
            v316 = BYTE1(v485);
            LODWORD(v253) = &qword_15BA88[BYTE2(v508)];
            v504 = *((_DWORD *)v691 + 3)
                 ^ HIDWORD(v253)
                 ^ *((_DWORD *)v583 - 1)
                 ^ *(_DWORD *)(v253 - 4)
                 ^ *((_DWORD *)v698 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v830 + 1)
                 ^ v263;
            v484 = v264
                 ^ *((_DWORD *)v583 - 2)
                 ^ *(_DWORD *)(v253 - 8)
                 ^ *((_DWORD *)v691 + 2)
                 ^ *((_DWORD *)v698 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v830)
                 ^ v226;
            LODWORD(v226) = (char *)&unk_15D280 + 8 * BYTE1(v515);
            v634 = &v135[2 * (unsigned __int8)v519];
            v513 = *((_QWORD *)&unk_15AA80 + v844)
                 ^ *(_QWORD *)&v135[2 * v839]
                 ^ *(v532 - 1)
                 ^ qword_15BA88[BYTE2(v519) - 1]
                 ^ v704[1]
                 ^ *(v647 - 1)
                 ^ *((_QWORD *)&unk_15D280 + v324)
                 ^ *((_QWORD *)&unk_15DA80 + BYTE2(v515));
            v692 = &v135[2 * (unsigned __int8)v340];
            v265 = v135[2 * v334 + 1] ^ *((_DWORD *)&unk_15AA80 + 2 * v542 + 1);
            v266 = v135[2 * v334] ^ *((_DWORD *)&unk_15AA80 + 2 * v542);
            v528 = *((_DWORD *)&unk_15AA80 + 2 * v853 + 1)
                 ^ v135[2 * v849 + 1]
                 ^ *((_DWORD *)v601 - 1)
                 ^ *((_DWORD *)v609 - 1)
                 ^ *((_DWORD *)v710 + 3)
                 ^ *((_DWORD *)v656 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v795 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v258 + 1);
            v330 = v135[2 * v849]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v853)
                 ^ *((_DWORD *)v601 - 2)
                 ^ *((_DWORD *)v609 - 2)
                 ^ *((_DWORD *)v710 + 2)
                 ^ *((_DWORD *)v656 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v795)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v258);
            HIDWORD(v226) = *((_DWORD *)&unk_15AA80 + 2 * v549) ^ v135[2 * v354];
            v576 = *((_DWORD *)&unk_15D280 + 2 * v290 + 1);
            v267 = v135[2 * v354 + 1] ^ *((_DWORD *)&unk_15AA80 + 2 * v549 + 1);
            v268 = v265
                 ^ *((_DWORD *)v664 - 1)
                 ^ *((_DWORD *)v672 - 1)
                 ^ *((_DWORD *)v720 + 3)
                 ^ *((_DWORD *)v726 - 1)
                 ^ *(_DWORD *)(v226 + 4);
            v550 = *((_DWORD *)&unk_15D280 + 2 * v290);
            v269 = HIDWORD(v226)
                 ^ *((_DWORD *)v683 - 2)
                 ^ *((_DWORD *)v627 - 2)
                 ^ *((_DWORD *)v295 + 2)
                 ^ *((_DWORD *)v734 - 2);
            v584 = *((_DWORD *)&unk_15DA80 + 2 * v305);
            v270 = *v634
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v555)
                 ^ *((_DWORD *)v741 - 2)
                 ^ *((_DWORD *)v748 - 2)
                 ^ *((_DWORD *)v755 + 2)
                 ^ *((_DWORD *)v763 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v345);
            v271 = *((_DWORD *)&unk_15DA80 + 2 * v384);
            v349 = v634[1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v555 + 1)
                 ^ *((_DWORD *)v741 - 1)
                 ^ *((_DWORD *)v748 - 1)
                 ^ *((_DWORD *)v755 + 3)
                 ^ *((_DWORD *)v763 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v345 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v384 + 1);
            v134 = *((_DWORD *)&unk_15AA80 + 2 * v561)
                 ^ *v692
                 ^ *((_DWORD *)v770 - 2)
                 ^ *((_DWORD *)v776 - 2)
                 ^ *((_DWORD *)v782 + 2)
                 ^ *((_DWORD *)v789 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v316)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v369);
            v288 = v268 ^ *((_DWORD *)&unk_15DA80 + 2 * v312 + 1);
            v136 = v692[1]
                 ^ *((_DWORD *)&unk_15AA80 + 2 * v561 + 1)
                 ^ *((_DWORD *)v770 - 1)
                 ^ *((_DWORD *)v776 - 1)
                 ^ *((_DWORD *)v782 + 3)
                 ^ *((_DWORD *)v789 - 1)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v316 + 1)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v369 + 1);
            v132 = *((_DWORD *)v672 - 2)
                 ^ v266
                 ^ *((_DWORD *)v664 - 2)
                 ^ *((_DWORD *)v720 + 2)
                 ^ *((_DWORD *)v726 - 2)
                 ^ *((_DWORD *)&unk_15D280 + 2 * v338)
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v312);
            v293 = v267
                 ^ *((_DWORD *)v683 - 1)
                 ^ *((_DWORD *)v627 - 1)
                 ^ *((_DWORD *)v295 + 3)
                 ^ *((_DWORD *)v734 - 1)
                 ^ v576
                 ^ *((_DWORD *)&unk_15DA80 + 2 * v305 + 1);
            v301 = v270 ^ v271;
            v133 = v269 ^ v550 ^ v584;
          }
          while ( v286 != 0xF1FFFFFFFFFFFFFFLL );
          v5 = v135;
          v272 = v375;
          v273 = &v887;
          v918 = v388;
          v274 = &v918;
          v916 = v375;
          v919 = v393;
          v917 = v537;
          v920 = v399;
          v921 = v409;
          v922 = v418;
          v923 = v425;
          v924 = v435;
          v925 = v564;
          v926 = v443;
          v927 = v522;
          v928 = v452;
          v929 = v469;
          v930 = v461;
          v931 = v477;
          v939 = v132;
          v932 = v489;
          v940 = v288;
          v933 = v497;
          v942 = v293;
          v943 = v270 ^ v271;
          v275 = v537;
          v934 = v484;
          v945 = v134;
          v946 = v136;
          v935 = v504;
          v941 = v269 ^ v550 ^ v584;
          v944 = v349;
          v936 = v513;
          v276 = v883;
          v277 = v610;
          v937 = v330;
          v938 = v528;
          while ( 1 )
          {
            v280 = *(_DWORD *)(v276 + 8);
            v276 += 8;
            v281 = *(_DWORD *)(v276 + 4);
            *(_DWORD *)v276 = v280 ^ v277 ^ v272;
            *(_DWORD *)(v276 + 4) = v281 ^ v275 ^ HIDWORD(v277);
            if ( &dest[120] == (_BYTE *)v276 )
              break;
            v278 = *v273;
            v274 += 2;
            v279 = v273[1];
            v273 += 2;
            v272 = *(v274 - 2);
            v275 = *(v274 - 1);
            v277 = __PAIR64__(v279, v278);
          }
          v3 = 0;
          ++*(_QWORD *)(a1 + 264);
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
    result = memcpy(v884, dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v3;
  }
  return result;
}
