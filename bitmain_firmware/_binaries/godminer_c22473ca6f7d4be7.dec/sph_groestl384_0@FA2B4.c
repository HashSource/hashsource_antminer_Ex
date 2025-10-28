void *__fastcall sph_groestl384_0(int a1, char *a2, size_t a3)
{
  int v3; // r6
  size_t v4; // r4
  int v5; // r5
  int v6; // r3
  int v7; // r8
  void *v8; // r0
  _BYTE *v9; // r0
  int *v10; // r12
  int v11; // r1
  int *v12; // r3
  int v13; // r6
  int v14; // t1
  int v15; // t1
  int v16; // r4
  int v17; // r2
  int v18; // r1
  int v19; // r12
  unsigned int v20; // r10
  unsigned int v21; // lr
  unsigned int v22; // r7
  int v23; // r9
  unsigned int v24; // r6
  int v25; // r4
  unsigned int v26; // r0
  int *v27; // r11
  _QWORD *v28; // r12
  _QWORD *v29; // r0
  _QWORD *v30; // r1
  _QWORD *v31; // r11
  int v32; // r3
  int v33; // r6
  int v34; // r2
  _QWORD *v35; // r12
  int v36; // r10
  int v37; // r5
  int v38; // r3
  _DWORD *v39; // r5
  int v40; // r8
  int v41; // r1
  int v42; // r7
  int v43; // r8
  int v44; // r3
  int v45; // r2
  int v46; // r12
  int v47; // r3
  int v48; // r6
  int v49; // r2
  int v50; // r12
  int v51; // r5
  int v52; // lr
  int v53; // r11
  int v54; // r0
  _QWORD *v55; // r8
  int v56; // r10
  _QWORD *v57; // r6
  int v58; // r12
  int v59; // r2
  int v60; // r3
  int v61; // lr
  int v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r2
  int v66; // r3
  int v67; // r0
  int v68; // r12
  int v69; // r12
  int v70; // r0
  int v71; // r3
  int v72; // r2
  __int64 v73; // r2
  int v74; // r1
  int v75; // r0
  int v76; // r12
  int v77; // r11
  int v78; // r4
  unsigned int v79; // r8
  unsigned int v80; // r10
  int v81; // r11
  _QWORD *v82; // r12
  _QWORD *v83; // r11
  int v84; // r6
  _QWORD *v85; // lr
  int v86; // r9
  int v87; // r5
  _QWORD *v88; // r4
  _QWORD *v89; // r12
  _QWORD *v90; // r0
  int v91; // r9
  int v92; // lr
  int v93; // r11
  int v94; // r12
  int v95; // r10
  int v96; // r1
  int v97; // r12
  int v98; // r4
  int v99; // r5
  int v100; // r4
  int v101; // r1
  int v102; // r6
  int v103; // r8
  int v104; // lr
  int v105; // r5
  int v106; // r4
  int v107; // r12
  int v108; // r9
  int v109; // r6
  int v110; // r8
  __int64 v111; // r0
  int v112; // r9
  int v113; // r12
  int v114; // lr
  _QWORD *v115; // r12
  int v116; // r6
  int v117; // r5
  int v118; // r9
  int v119; // r6
  __int64 v120; // r2
  int v121; // r5
  int v122; // r12
  __int64 v123; // r2
  int v124; // r12
  int v125; // r5
  int v126; // r7
  int v127; // r6
  int v128; // r11
  int v129; // r9
  int v130; // r4
  int v131; // r2
  int v132; // r6
  int v133; // r8
  int v134; // lr
  int v135; // r10
  int v136; // r2
  int v137; // r11
  int v138; // r3
  unsigned int v139; // r1
  unsigned int v140; // r5
  unsigned int v141; // r0
  unsigned int v142; // lr
  unsigned int v143; // r12
  int v144; // r7
  unsigned int v145; // r2
  _QWORD *v146; // r5
  _QWORD *v147; // r1
  _QWORD *v148; // r0
  int v149; // r12
  int v150; // r7
  int v151; // r5
  _QWORD *v152; // r1
  int v153; // r12
  int v154; // lr
  int v155; // r3
  int v156; // r3
  int v157; // r0
  int v158; // r10
  int v159; // r3
  _QWORD *v160; // r9
  int v161; // r0
  int v162; // r12
  int v163; // r7
  _QWORD *v164; // r0
  int v165; // r12
  int v166; // r6
  unsigned int v167; // r2
  int v168; // r5
  unsigned int v169; // r12
  int v170; // r5
  _QWORD *v171; // lr
  int v172; // r9
  int v173; // r6
  unsigned int v174; // r0
  int v175; // r7
  int v176; // r1
  _QWORD *v177; // r8
  int v178; // r1
  unsigned int v179; // r2
  _QWORD *v180; // r9
  int v181; // r3
  int v182; // r2
  _QWORD *v183; // r6
  int v184; // r12
  int v185; // r4
  int v186; // r2
  _QWORD *v187; // r6
  int v188; // r3
  int v189; // r10
  _QWORD *v190; // r5
  int v191; // r1
  unsigned int v192; // r2
  int v193; // r6
  int v194; // r7
  unsigned int v195; // r2
  int v196; // lr
  int v197; // r3
  int v198; // lr
  int v199; // r0
  int v200; // r6
  unsigned int v201; // r0
  unsigned int v202; // r2
  __int64 v203; // r6
  _QWORD *v204; // r12
  _QWORD *v205; // r1
  int v206; // r4
  int v207; // r3
  _QWORD *v208; // r0
  int v209; // r2
  int v210; // r3
  int v211; // r2
  int v212; // r9
  int v213; // r10
  int v214; // r2
  int v215; // r5
  int v216; // r12
  int v217; // r9
  int v218; // r0
  int v219; // r8
  int v220; // r3
  _QWORD *v221; // r0
  _QWORD *v222; // r2
  int v223; // r5
  int v224; // r12
  int v225; // lr
  int v226; // r3
  int v227; // r8
  __int64 v228; // r6
  int v229; // r1
  int v230; // r8
  int v231; // r1
  int v232; // r10
  int v233; // r1
  int v234; // r3
  int v235; // r10
  int v236; // r9
  int v237; // r5
  int v238; // r0
  int v239; // r0
  int v240; // r5
  int v241; // lr
  _QWORD *v242; // r2
  int v243; // r0
  int v244; // r3
  int v245; // r4
  int v246; // r1
  int v247; // r12
  int v248; // r3
  _QWORD *v249; // r8
  int v250; // r12
  int v251; // r1
  int v252; // r12
  int v253; // r3
  int v254; // lr
  __int64 v255; // r2
  int v256; // r0
  int v257; // lr
  int v258; // r12
  int v259; // r1
  int v260; // r10
  _DWORD *v261; // r1
  int v262; // lr
  int v263; // r5
  int v264; // lr
  int v265; // r12
  int v266; // r1
  int v267; // r8
  int v268; // r5
  int v269; // r0
  int v270; // r10
  int v271; // r7
  int v272; // r4
  int v273; // r6
  int v274; // r5
  int *v275; // r0
  int *v276; // r1
  int v277; // r4
  int v278; // r3
  unsigned __int64 v279; // kr48_8
  int v280; // lr
  int v281; // r2
  int v282; // t1
  int v283; // r2
  void *result; // r0
  size_t v286; // r5
  int v287; // [sp+0h] [bp-354h]
  __int64 v288; // [sp+0h] [bp-354h]
  __int64 v289; // [sp+8h] [bp-34Ch]
  int v290; // [sp+8h] [bp-34Ch]
  unsigned int v291; // [sp+8h] [bp-34Ch]
  int v292; // [sp+8h] [bp-34Ch]
  int v293; // [sp+14h] [bp-340h]
  unsigned int v294; // [sp+18h] [bp-33Ch]
  unsigned int v295; // [sp+18h] [bp-33Ch]
  int v296; // [sp+18h] [bp-33Ch]
  int v297; // [sp+18h] [bp-33Ch]
  int v298; // [sp+18h] [bp-33Ch]
  int v299; // [sp+1Ch] [bp-338h]
  unsigned int v300; // [sp+1Ch] [bp-338h]
  unsigned int v301; // [sp+1Ch] [bp-338h]
  int v302; // [sp+1Ch] [bp-338h]
  _QWORD *v303; // [sp+1Ch] [bp-338h]
  int v304; // [sp+1Ch] [bp-338h]
  unsigned int v305; // [sp+1Ch] [bp-338h]
  _QWORD *v306; // [sp+1Ch] [bp-338h]
  unsigned int v307; // [sp+1Ch] [bp-338h]
  int v308; // [sp+1Ch] [bp-338h]
  unsigned __int64 v309; // [sp+20h] [bp-334h]
  unsigned int v310; // [sp+20h] [bp-334h]
  _QWORD *v311; // [sp+20h] [bp-334h]
  unsigned int v312; // [sp+20h] [bp-334h]
  _QWORD *v313; // [sp+20h] [bp-334h]
  int v314; // [sp+20h] [bp-334h]
  int v315; // [sp+20h] [bp-334h]
  unsigned int v316; // [sp+24h] [bp-330h]
  unsigned int v317; // [sp+24h] [bp-330h]
  int v318; // [sp+24h] [bp-330h]
  int v319; // [sp+24h] [bp-330h]
  int v320; // [sp+28h] [bp-32Ch]
  unsigned int v321; // [sp+28h] [bp-32Ch]
  int v322; // [sp+28h] [bp-32Ch]
  unsigned int v323; // [sp+28h] [bp-32Ch]
  int v324; // [sp+28h] [bp-32Ch]
  int v325; // [sp+28h] [bp-32Ch]
  unsigned int v326; // [sp+28h] [bp-32Ch]
  int v327; // [sp+28h] [bp-32Ch]
  unsigned int v328; // [sp+2Ch] [bp-328h]
  int v329; // [sp+2Ch] [bp-328h]
  unsigned int v330; // [sp+2Ch] [bp-328h]
  int v331; // [sp+2Ch] [bp-328h]
  int v332; // [sp+2Ch] [bp-328h]
  int v333; // [sp+2Ch] [bp-328h]
  unsigned int v334; // [sp+2Ch] [bp-328h]
  unsigned int v335; // [sp+2Ch] [bp-328h]
  _QWORD *v336; // [sp+2Ch] [bp-328h]
  int v337; // [sp+2Ch] [bp-328h]
  __int64 v338; // [sp+30h] [bp-324h]
  unsigned int v339; // [sp+30h] [bp-324h]
  unsigned int v340; // [sp+30h] [bp-324h]
  int v341; // [sp+30h] [bp-324h]
  unsigned int v342; // [sp+34h] [bp-320h]
  unsigned int v343; // [sp+34h] [bp-320h]
  unsigned int v344; // [sp+38h] [bp-31Ch]
  unsigned int v345; // [sp+38h] [bp-31Ch]
  unsigned int v346; // [sp+38h] [bp-31Ch]
  unsigned int v347; // [sp+38h] [bp-31Ch]
  int v348; // [sp+38h] [bp-31Ch]
  unsigned int v349; // [sp+3Ch] [bp-318h]
  unsigned int v350; // [sp+3Ch] [bp-318h]
  int v351; // [sp+3Ch] [bp-318h]
  int v352; // [sp+3Ch] [bp-318h]
  unsigned int v353; // [sp+3Ch] [bp-318h]
  unsigned int v354; // [sp+3Ch] [bp-318h]
  _QWORD *v355; // [sp+3Ch] [bp-318h]
  _QWORD *v356; // [sp+3Ch] [bp-318h]
  int v357; // [sp+3Ch] [bp-318h]
  unsigned int v358; // [sp+40h] [bp-314h]
  unsigned int v359; // [sp+40h] [bp-314h]
  int v360; // [sp+40h] [bp-314h]
  int v361; // [sp+40h] [bp-314h]
  _QWORD *v362; // [sp+40h] [bp-314h]
  unsigned int v363; // [sp+40h] [bp-314h]
  int v364; // [sp+40h] [bp-314h]
  unsigned int v365; // [sp+40h] [bp-314h]
  _QWORD *v366; // [sp+40h] [bp-314h]
  int v367; // [sp+44h] [bp-310h]
  unsigned int v368; // [sp+44h] [bp-310h]
  unsigned int v369; // [sp+44h] [bp-310h]
  int v370; // [sp+44h] [bp-310h]
  unsigned int v371; // [sp+44h] [bp-310h]
  int v372; // [sp+44h] [bp-310h]
  int v373; // [sp+48h] [bp-30Ch]
  unsigned int v374; // [sp+48h] [bp-30Ch]
  unsigned int v375; // [sp+48h] [bp-30Ch]
  int v376; // [sp+48h] [bp-30Ch]
  int v377; // [sp+48h] [bp-30Ch]
  int v378; // [sp+48h] [bp-30Ch]
  unsigned int v379; // [sp+48h] [bp-30Ch]
  unsigned int v380; // [sp+48h] [bp-30Ch]
  int v381; // [sp+4Ch] [bp-308h]
  unsigned int v382; // [sp+4Ch] [bp-308h]
  unsigned int v383; // [sp+4Ch] [bp-308h]
  int v384; // [sp+4Ch] [bp-308h]
  unsigned int v385; // [sp+4Ch] [bp-308h]
  unsigned int v386; // [sp+4Ch] [bp-308h]
  int v387; // [sp+4Ch] [bp-308h]
  int v388; // [sp+50h] [bp-304h]
  unsigned int v389; // [sp+50h] [bp-304h]
  __int64 v390; // [sp+50h] [bp-304h]
  int v391; // [sp+50h] [bp-304h]
  unsigned int v392; // [sp+50h] [bp-304h]
  unsigned int v393; // [sp+50h] [bp-304h]
  int v394; // [sp+54h] [bp-300h]
  unsigned int v395; // [sp+54h] [bp-300h]
  int v396; // [sp+54h] [bp-300h]
  unsigned int v397; // [sp+54h] [bp-300h]
  unsigned int v398; // [sp+54h] [bp-300h]
  unsigned int v399; // [sp+58h] [bp-2FCh]
  unsigned int v400; // [sp+58h] [bp-2FCh]
  int v401; // [sp+58h] [bp-2FCh]
  int v402; // [sp+58h] [bp-2FCh]
  unsigned int v403; // [sp+58h] [bp-2FCh]
  unsigned int v404; // [sp+58h] [bp-2FCh]
  int v405; // [sp+5Ch] [bp-2F8h]
  unsigned int v406; // [sp+5Ch] [bp-2F8h]
  int v407; // [sp+5Ch] [bp-2F8h]
  int v408; // [sp+5Ch] [bp-2F8h]
  unsigned int v409; // [sp+5Ch] [bp-2F8h]
  int v410; // [sp+5Ch] [bp-2F8h]
  int v411; // [sp+5Ch] [bp-2F8h]
  int v412; // [sp+5Ch] [bp-2F8h]
  unsigned int v413; // [sp+5Ch] [bp-2F8h]
  unsigned int v414; // [sp+5Ch] [bp-2F8h]
  int v415; // [sp+60h] [bp-2F4h]
  unsigned int v416; // [sp+60h] [bp-2F4h]
  _QWORD *v417; // [sp+60h] [bp-2F4h]
  _QWORD *v418; // [sp+60h] [bp-2F4h]
  unsigned int v419; // [sp+60h] [bp-2F4h]
  _QWORD *v420; // [sp+60h] [bp-2F4h]
  int v421; // [sp+60h] [bp-2F4h]
  unsigned int v422; // [sp+60h] [bp-2F4h]
  unsigned int v423; // [sp+60h] [bp-2F4h]
  _QWORD *v424; // [sp+64h] [bp-2F0h]
  int v425; // [sp+64h] [bp-2F0h]
  unsigned int v426; // [sp+64h] [bp-2F0h]
  int v427; // [sp+64h] [bp-2F0h]
  int v428; // [sp+64h] [bp-2F0h]
  unsigned int v429; // [sp+64h] [bp-2F0h]
  unsigned int v430; // [sp+64h] [bp-2F0h]
  int v431; // [sp+68h] [bp-2ECh]
  unsigned int v432; // [sp+68h] [bp-2ECh]
  int v433; // [sp+68h] [bp-2ECh]
  int v434; // [sp+68h] [bp-2ECh]
  unsigned int v435; // [sp+68h] [bp-2ECh]
  int v436; // [sp+68h] [bp-2ECh]
  int v437; // [sp+68h] [bp-2ECh]
  int v438; // [sp+68h] [bp-2ECh]
  unsigned int v439; // [sp+68h] [bp-2ECh]
  int v440; // [sp+68h] [bp-2ECh]
  unsigned int v441; // [sp+68h] [bp-2ECh]
  unsigned int v442; // [sp+6Ch] [bp-2E8h]
  int v443; // [sp+6Ch] [bp-2E8h]
  unsigned int v444; // [sp+6Ch] [bp-2E8h]
  int v445; // [sp+6Ch] [bp-2E8h]
  int v446; // [sp+6Ch] [bp-2E8h]
  unsigned int v447; // [sp+6Ch] [bp-2E8h]
  _QWORD *v448; // [sp+6Ch] [bp-2E8h]
  unsigned int v449; // [sp+6Ch] [bp-2E8h]
  unsigned int v450; // [sp+70h] [bp-2E4h]
  _QWORD *v451; // [sp+70h] [bp-2E4h]
  unsigned int v452; // [sp+70h] [bp-2E4h]
  int v453; // [sp+70h] [bp-2E4h]
  int v454; // [sp+70h] [bp-2E4h]
  int v455; // [sp+70h] [bp-2E4h]
  unsigned int v456; // [sp+70h] [bp-2E4h]
  int v457; // [sp+70h] [bp-2E4h]
  unsigned int v458; // [sp+70h] [bp-2E4h]
  int v459; // [sp+74h] [bp-2E0h]
  unsigned int v460; // [sp+74h] [bp-2E0h]
  int v461; // [sp+74h] [bp-2E0h]
  _QWORD *v462; // [sp+74h] [bp-2E0h]
  unsigned int v463; // [sp+74h] [bp-2E0h]
  int v464; // [sp+74h] [bp-2E0h]
  int v465; // [sp+74h] [bp-2E0h]
  int v466; // [sp+74h] [bp-2E0h]
  unsigned int v467; // [sp+74h] [bp-2E0h]
  int v468; // [sp+78h] [bp-2DCh]
  unsigned int v469; // [sp+78h] [bp-2DCh]
  int v470; // [sp+78h] [bp-2DCh]
  unsigned int v471; // [sp+78h] [bp-2DCh]
  int v472; // [sp+78h] [bp-2DCh]
  unsigned int v473; // [sp+78h] [bp-2DCh]
  int v474; // [sp+78h] [bp-2DCh]
  unsigned int v475; // [sp+78h] [bp-2DCh]
  int v476; // [sp+7Ch] [bp-2D8h]
  unsigned int v477; // [sp+7Ch] [bp-2D8h]
  int v478; // [sp+7Ch] [bp-2D8h]
  unsigned int v479; // [sp+7Ch] [bp-2D8h]
  int v480; // [sp+7Ch] [bp-2D8h]
  unsigned int v481; // [sp+7Ch] [bp-2D8h]
  unsigned int v482; // [sp+7Ch] [bp-2D8h]
  int v483; // [sp+80h] [bp-2D4h]
  unsigned int v484; // [sp+80h] [bp-2D4h]
  unsigned int v485; // [sp+80h] [bp-2D4h]
  int v486; // [sp+80h] [bp-2D4h]
  int v487; // [sp+80h] [bp-2D4h]
  unsigned int v488; // [sp+80h] [bp-2D4h]
  int v489; // [sp+84h] [bp-2D0h]
  unsigned int v490; // [sp+84h] [bp-2D0h]
  unsigned int v491; // [sp+84h] [bp-2D0h]
  int v492; // [sp+84h] [bp-2D0h]
  _QWORD *v493; // [sp+84h] [bp-2D0h]
  unsigned int v494; // [sp+84h] [bp-2D0h]
  __int64 v495; // [sp+88h] [bp-2CCh]
  int v496; // [sp+88h] [bp-2CCh]
  int v497; // [sp+88h] [bp-2CCh]
  int v498; // [sp+88h] [bp-2CCh]
  unsigned int v499; // [sp+88h] [bp-2CCh]
  int v500; // [sp+88h] [bp-2CCh]
  unsigned int v501; // [sp+88h] [bp-2CCh]
  int v502; // [sp+88h] [bp-2CCh]
  unsigned int v503; // [sp+88h] [bp-2CCh]
  int v504; // [sp+8Ch] [bp-2C8h]
  int v505; // [sp+8Ch] [bp-2C8h]
  unsigned int v506; // [sp+8Ch] [bp-2C8h]
  int v507; // [sp+8Ch] [bp-2C8h]
  unsigned int v508; // [sp+8Ch] [bp-2C8h]
  _QWORD *v509; // [sp+8Ch] [bp-2C8h]
  int v510; // [sp+8Ch] [bp-2C8h]
  unsigned int v511; // [sp+8Ch] [bp-2C8h]
  int v512; // [sp+90h] [bp-2C4h]
  int v513; // [sp+90h] [bp-2C4h]
  int v514; // [sp+90h] [bp-2C4h]
  int v515; // [sp+90h] [bp-2C4h]
  __int64 v516; // [sp+90h] [bp-2C4h]
  int v517; // [sp+90h] [bp-2C4h]
  unsigned int v518; // [sp+90h] [bp-2C4h]
  int v519; // [sp+94h] [bp-2C0h]
  int v520; // [sp+94h] [bp-2C0h]
  int v521; // [sp+94h] [bp-2C0h]
  unsigned int v522; // [sp+94h] [bp-2C0h]
  int v523; // [sp+98h] [bp-2BCh]
  _DWORD *v524; // [sp+98h] [bp-2BCh]
  int v525; // [sp+98h] [bp-2BCh]
  unsigned int v526; // [sp+98h] [bp-2BCh]
  _QWORD *v527; // [sp+98h] [bp-2BCh]
  int v528; // [sp+98h] [bp-2BCh]
  int v529; // [sp+98h] [bp-2BCh]
  int v530; // [sp+9Ch] [bp-2B8h]
  int v531; // [sp+9Ch] [bp-2B8h]
  int v532; // [sp+9Ch] [bp-2B8h]
  int v533; // [sp+9Ch] [bp-2B8h]
  _QWORD *v534; // [sp+9Ch] [bp-2B8h]
  _QWORD *v535; // [sp+9Ch] [bp-2B8h]
  int v536; // [sp+A0h] [bp-2B4h]
  unsigned int v537; // [sp+A0h] [bp-2B4h]
  int v538; // [sp+A0h] [bp-2B4h]
  unsigned int v539; // [sp+A0h] [bp-2B4h]
  int v540; // [sp+A0h] [bp-2B4h]
  unsigned int v541; // [sp+A0h] [bp-2B4h]
  int v542; // [sp+A4h] [bp-2B0h]
  unsigned int v543; // [sp+A4h] [bp-2B0h]
  unsigned int v544; // [sp+A4h] [bp-2B0h]
  unsigned int v545; // [sp+A4h] [bp-2B0h]
  int v546; // [sp+A8h] [bp-2ACh]
  _QWORD *v547; // [sp+A8h] [bp-2ACh]
  _QWORD *v548; // [sp+A8h] [bp-2ACh]
  int v549; // [sp+A8h] [bp-2ACh]
  int v550; // [sp+A8h] [bp-2ACh]
  unsigned int v551; // [sp+A8h] [bp-2ACh]
  unsigned int v552; // [sp+A8h] [bp-2ACh]
  int v553; // [sp+A8h] [bp-2ACh]
  int v554; // [sp+ACh] [bp-2A8h]
  unsigned int v555; // [sp+ACh] [bp-2A8h]
  _QWORD *v556; // [sp+ACh] [bp-2A8h]
  int v557; // [sp+ACh] [bp-2A8h]
  unsigned int v558; // [sp+ACh] [bp-2A8h]
  int v559; // [sp+B0h] [bp-2A4h]
  int v560; // [sp+B0h] [bp-2A4h]
  _QWORD *v561; // [sp+B0h] [bp-2A4h]
  int v562; // [sp+B0h] [bp-2A4h]
  unsigned int v563; // [sp+B0h] [bp-2A4h]
  unsigned int v564; // [sp+B0h] [bp-2A4h]
  _QWORD *v565; // [sp+B4h] [bp-2A0h]
  int v566; // [sp+B4h] [bp-2A0h]
  int v567; // [sp+B4h] [bp-2A0h]
  _QWORD *v568; // [sp+B4h] [bp-2A0h]
  _QWORD *v569; // [sp+B4h] [bp-2A0h]
  int v570; // [sp+B4h] [bp-2A0h]
  int v571; // [sp+B8h] [bp-29Ch]
  int v572; // [sp+B8h] [bp-29Ch]
  unsigned int v573; // [sp+B8h] [bp-29Ch]
  int v574; // [sp+B8h] [bp-29Ch]
  int v575; // [sp+B8h] [bp-29Ch]
  _QWORD *v576; // [sp+B8h] [bp-29Ch]
  _QWORD *v577; // [sp+B8h] [bp-29Ch]
  int v578; // [sp+B8h] [bp-29Ch]
  unsigned int v579; // [sp+BCh] [bp-298h]
  unsigned int v580; // [sp+BCh] [bp-298h]
  int v581; // [sp+BCh] [bp-298h]
  _QWORD *v582; // [sp+BCh] [bp-298h]
  _QWORD *v583; // [sp+BCh] [bp-298h]
  _QWORD *v584; // [sp+BCh] [bp-298h]
  _QWORD *v585; // [sp+BCh] [bp-298h]
  int v586; // [sp+BCh] [bp-298h]
  _QWORD *v587; // [sp+C0h] [bp-294h]
  int v588; // [sp+C0h] [bp-294h]
  int v589; // [sp+C0h] [bp-294h]
  int v590; // [sp+C0h] [bp-294h]
  _QWORD *v591; // [sp+C0h] [bp-294h]
  _QWORD *v592; // [sp+C0h] [bp-294h]
  _QWORD *v593; // [sp+C0h] [bp-294h]
  int v594; // [sp+C0h] [bp-294h]
  _QWORD *v595; // [sp+C0h] [bp-294h]
  int v596; // [sp+C4h] [bp-290h]
  int v597; // [sp+C4h] [bp-290h]
  unsigned int v598; // [sp+C4h] [bp-290h]
  int v599; // [sp+C4h] [bp-290h]
  _QWORD *v600; // [sp+C4h] [bp-290h]
  _QWORD *v601; // [sp+C4h] [bp-290h]
  _QWORD *v602; // [sp+C4h] [bp-290h]
  _QWORD *v603; // [sp+C4h] [bp-290h]
  _QWORD *v604; // [sp+C8h] [bp-28Ch]
  int v605; // [sp+C8h] [bp-28Ch]
  _QWORD *v606; // [sp+C8h] [bp-28Ch]
  int v607; // [sp+C8h] [bp-28Ch]
  _QWORD *v608; // [sp+C8h] [bp-28Ch]
  int v609; // [sp+C8h] [bp-28Ch]
  _QWORD *v610; // [sp+C8h] [bp-28Ch]
  _QWORD *v611; // [sp+C8h] [bp-28Ch]
  unsigned __int64 v612; // [sp+CCh] [bp-288h]
  int v613; // [sp+CCh] [bp-288h]
  unsigned int v614; // [sp+CCh] [bp-288h]
  _QWORD *v615; // [sp+D0h] [bp-284h]
  _QWORD *v616; // [sp+D0h] [bp-284h]
  int v617; // [sp+D0h] [bp-284h]
  int v618; // [sp+D0h] [bp-284h]
  int v619; // [sp+D4h] [bp-280h]
  int v620; // [sp+D4h] [bp-280h]
  unsigned int v621; // [sp+D4h] [bp-280h]
  _QWORD *v622; // [sp+D4h] [bp-280h]
  int v623; // [sp+D4h] [bp-280h]
  int v624; // [sp+D4h] [bp-280h]
  _QWORD *v625; // [sp+D4h] [bp-280h]
  int v626; // [sp+D4h] [bp-280h]
  int v627; // [sp+D4h] [bp-280h]
  _QWORD *v628; // [sp+D4h] [bp-280h]
  _QWORD *v629; // [sp+D4h] [bp-280h]
  int v630; // [sp+D8h] [bp-27Ch]
  int v631; // [sp+D8h] [bp-27Ch]
  int v632; // [sp+D8h] [bp-27Ch]
  _QWORD *v633; // [sp+D8h] [bp-27Ch]
  _QWORD *v634; // [sp+D8h] [bp-27Ch]
  int v635; // [sp+D8h] [bp-27Ch]
  _DWORD *v636; // [sp+D8h] [bp-27Ch]
  size_t n; // [sp+DCh] [bp-278h]
  int v638; // [sp+E0h] [bp-274h]
  _QWORD *v639; // [sp+E0h] [bp-274h]
  _QWORD *v640; // [sp+E0h] [bp-274h]
  int v641; // [sp+E0h] [bp-274h]
  _QWORD *v642; // [sp+E0h] [bp-274h]
  _QWORD *v643; // [sp+E0h] [bp-274h]
  int v644; // [sp+E0h] [bp-274h]
  int v645; // [sp+E0h] [bp-274h]
  _QWORD *v646; // [sp+E0h] [bp-274h]
  _QWORD *v647; // [sp+E0h] [bp-274h]
  int v648; // [sp+E0h] [bp-274h]
  _QWORD *v649; // [sp+E0h] [bp-274h]
  int v650; // [sp+E4h] [bp-270h]
  _QWORD *v651; // [sp+E4h] [bp-270h]
  _QWORD *v652; // [sp+E4h] [bp-270h]
  _QWORD *v653; // [sp+E4h] [bp-270h]
  _QWORD *v654; // [sp+E4h] [bp-270h]
  _QWORD *v655; // [sp+E4h] [bp-270h]
  _QWORD *v656; // [sp+E4h] [bp-270h]
  int v657; // [sp+E4h] [bp-270h]
  _QWORD *v658; // [sp+E4h] [bp-270h]
  _QWORD *v659; // [sp+E8h] [bp-26Ch]
  _QWORD *v660; // [sp+E8h] [bp-26Ch]
  _QWORD *v661; // [sp+E8h] [bp-26Ch]
  _QWORD *v662; // [sp+E8h] [bp-26Ch]
  int v663; // [sp+E8h] [bp-26Ch]
  _QWORD *v664; // [sp+E8h] [bp-26Ch]
  int v665; // [sp+E8h] [bp-26Ch]
  _QWORD *v666; // [sp+E8h] [bp-26Ch]
  int v667; // [sp+ECh] [bp-268h]
  _QWORD *v668; // [sp+ECh] [bp-268h]
  _QWORD *v669; // [sp+ECh] [bp-268h]
  _QWORD *v670; // [sp+ECh] [bp-268h]
  int v671; // [sp+ECh] [bp-268h]
  _QWORD *v672; // [sp+ECh] [bp-268h]
  int v673; // [sp+ECh] [bp-268h]
  _QWORD *v674; // [sp+ECh] [bp-268h]
  int v675; // [sp+F0h] [bp-264h]
  _QWORD *v676; // [sp+F0h] [bp-264h]
  _DWORD *v677; // [sp+F0h] [bp-264h]
  int v678; // [sp+F0h] [bp-264h]
  _QWORD *v679; // [sp+F0h] [bp-264h]
  _QWORD *v680; // [sp+F0h] [bp-264h]
  _DWORD *v681; // [sp+F0h] [bp-264h]
  int v682; // [sp+F0h] [bp-264h]
  _QWORD *v683; // [sp+F0h] [bp-264h]
  int v684; // [sp+F0h] [bp-264h]
  _QWORD *v685; // [sp+F0h] [bp-264h]
  int v686; // [sp+F4h] [bp-260h]
  _QWORD *v687; // [sp+F4h] [bp-260h]
  int *v688; // [sp+F4h] [bp-260h]
  _QWORD *v689; // [sp+F4h] [bp-260h]
  _DWORD *v690; // [sp+F4h] [bp-260h]
  int v691; // [sp+F4h] [bp-260h]
  _QWORD *v692; // [sp+F4h] [bp-260h]
  int v693; // [sp+F4h] [bp-260h]
  _DWORD *v694; // [sp+F4h] [bp-260h]
  int v695; // [sp+F8h] [bp-25Ch]
  _QWORD *v696; // [sp+F8h] [bp-25Ch]
  _QWORD *v697; // [sp+F8h] [bp-25Ch]
  int v698; // [sp+F8h] [bp-25Ch]
  int v699; // [sp+F8h] [bp-25Ch]
  _QWORD *v700; // [sp+F8h] [bp-25Ch]
  unsigned int v701; // [sp+FCh] [bp-258h]
  _QWORD *v702; // [sp+FCh] [bp-258h]
  int v703; // [sp+FCh] [bp-258h]
  _QWORD *v704; // [sp+FCh] [bp-258h]
  int v705; // [sp+FCh] [bp-258h]
  int v706; // [sp+FCh] [bp-258h]
  int v707; // [sp+100h] [bp-254h]
  _QWORD *v708; // [sp+100h] [bp-254h]
  _QWORD *v709; // [sp+100h] [bp-254h]
  int v710; // [sp+100h] [bp-254h]
  int v711; // [sp+100h] [bp-254h]
  int v712; // [sp+100h] [bp-254h]
  int v713; // [sp+104h] [bp-250h]
  _DWORD *v714; // [sp+104h] [bp-250h]
  int v715; // [sp+104h] [bp-250h]
  _QWORD *v716; // [sp+104h] [bp-250h]
  _QWORD *v717; // [sp+104h] [bp-250h]
  int v718; // [sp+104h] [bp-250h]
  int v719; // [sp+104h] [bp-250h]
  int v720; // [sp+104h] [bp-250h]
  _QWORD *v721; // [sp+104h] [bp-250h]
  int v722; // [sp+104h] [bp-250h]
  int v723; // [sp+108h] [bp-24Ch]
  _QWORD *v724; // [sp+108h] [bp-24Ch]
  _DWORD *v725; // [sp+108h] [bp-24Ch]
  _QWORD *v726; // [sp+108h] [bp-24Ch]
  int v727; // [sp+108h] [bp-24Ch]
  _QWORD *v728; // [sp+108h] [bp-24Ch]
  int v729; // [sp+10Ch] [bp-248h]
  _QWORD *v730; // [sp+10Ch] [bp-248h]
  _QWORD *v731; // [sp+10Ch] [bp-248h]
  _QWORD *v732; // [sp+10Ch] [bp-248h]
  int v733; // [sp+10Ch] [bp-248h]
  int v734; // [sp+10Ch] [bp-248h]
  int v735; // [sp+10Ch] [bp-248h]
  _QWORD *v736; // [sp+10Ch] [bp-248h]
  int v737; // [sp+110h] [bp-244h]
  _QWORD *v738; // [sp+110h] [bp-244h]
  int v739; // [sp+110h] [bp-244h]
  int v740; // [sp+110h] [bp-244h]
  _QWORD *v741; // [sp+110h] [bp-244h]
  _QWORD *v742; // [sp+110h] [bp-244h]
  _QWORD *v743; // [sp+110h] [bp-244h]
  int v744; // [sp+114h] [bp-240h]
  int v745; // [sp+114h] [bp-240h]
  _QWORD *v746; // [sp+114h] [bp-240h]
  _QWORD *v747; // [sp+114h] [bp-240h]
  int v748; // [sp+114h] [bp-240h]
  int v749; // [sp+114h] [bp-240h]
  _QWORD *v750; // [sp+114h] [bp-240h]
  _QWORD *v751; // [sp+118h] [bp-23Ch]
  _QWORD *v752; // [sp+118h] [bp-23Ch]
  int v753; // [sp+118h] [bp-23Ch]
  int v754; // [sp+118h] [bp-23Ch]
  _QWORD *v755; // [sp+118h] [bp-23Ch]
  int v756; // [sp+118h] [bp-23Ch]
  int v757; // [sp+118h] [bp-23Ch]
  unsigned int v758; // [sp+11Ch] [bp-238h]
  _QWORD *v759; // [sp+11Ch] [bp-238h]
  _QWORD *v760; // [sp+11Ch] [bp-238h]
  int v761; // [sp+11Ch] [bp-238h]
  int v762; // [sp+11Ch] [bp-238h]
  int v763; // [sp+11Ch] [bp-238h]
  _QWORD *v764; // [sp+11Ch] [bp-238h]
  _QWORD *v765; // [sp+11Ch] [bp-238h]
  int v766; // [sp+120h] [bp-234h]
  _QWORD *v767; // [sp+120h] [bp-234h]
  _QWORD *v768; // [sp+120h] [bp-234h]
  _QWORD *v769; // [sp+120h] [bp-234h]
  int v770; // [sp+120h] [bp-234h]
  int v771; // [sp+120h] [bp-234h]
  _QWORD *v772; // [sp+120h] [bp-234h]
  int v773; // [sp+124h] [bp-230h]
  int v774; // [sp+124h] [bp-230h]
  _QWORD *v775; // [sp+124h] [bp-230h]
  int v776; // [sp+124h] [bp-230h]
  _QWORD *v777; // [sp+124h] [bp-230h]
  _QWORD *v778; // [sp+124h] [bp-230h]
  _QWORD *v779; // [sp+128h] [bp-22Ch]
  int v780; // [sp+128h] [bp-22Ch]
  _QWORD *v781; // [sp+128h] [bp-22Ch]
  int v782; // [sp+128h] [bp-22Ch]
  int v783; // [sp+128h] [bp-22Ch]
  int v784; // [sp+128h] [bp-22Ch]
  int v785; // [sp+12Ch] [bp-228h]
  _QWORD *v786; // [sp+12Ch] [bp-228h]
  int v787; // [sp+12Ch] [bp-228h]
  int v788; // [sp+12Ch] [bp-228h]
  int v789; // [sp+12Ch] [bp-228h]
  _QWORD *v790; // [sp+12Ch] [bp-228h]
  _QWORD *v791; // [sp+130h] [bp-224h]
  int v792; // [sp+130h] [bp-224h]
  int v793; // [sp+130h] [bp-224h]
  int v794; // [sp+130h] [bp-224h]
  int v795; // [sp+130h] [bp-224h]
  int v796; // [sp+130h] [bp-224h]
  _QWORD *v797; // [sp+134h] [bp-220h]
  int v798; // [sp+134h] [bp-220h]
  int v799; // [sp+134h] [bp-220h]
  int v800; // [sp+134h] [bp-220h]
  int v801; // [sp+138h] [bp-21Ch]
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
  int v816; // [sp+144h] [bp-210h]
  int v817; // [sp+144h] [bp-210h]
  unsigned int v818; // [sp+144h] [bp-210h]
  int v819; // [sp+148h] [bp-20Ch]
  _DWORD *v820; // [sp+148h] [bp-20Ch]
  int v821; // [sp+148h] [bp-20Ch]
  int v822; // [sp+14Ch] [bp-208h]
  int v823; // [sp+14Ch] [bp-208h]
  unsigned int v824; // [sp+14Ch] [bp-208h]
  unsigned int v825; // [sp+14Ch] [bp-208h]
  int v826; // [sp+150h] [bp-204h]
  _QWORD *v827; // [sp+150h] [bp-204h]
  _DWORD *v828; // [sp+150h] [bp-204h]
  unsigned int v829; // [sp+150h] [bp-204h]
  int v830; // [sp+150h] [bp-204h]
  int v831; // [sp+154h] [bp-200h]
  _QWORD *v832; // [sp+154h] [bp-200h]
  int v833; // [sp+154h] [bp-200h]
  int v834; // [sp+154h] [bp-200h]
  unsigned int v835; // [sp+158h] [bp-1FCh]
  _QWORD *v836; // [sp+158h] [bp-1FCh]
  _DWORD *v837; // [sp+158h] [bp-1FCh]
  unsigned int v838; // [sp+158h] [bp-1FCh]
  int v839; // [sp+158h] [bp-1FCh]
  int v840; // [sp+15Ch] [bp-1F8h]
  _QWORD *v841; // [sp+15Ch] [bp-1F8h]
  int v842; // [sp+15Ch] [bp-1F8h]
  int v843; // [sp+15Ch] [bp-1F8h]
  unsigned int v844; // [sp+15Ch] [bp-1F8h]
  int v845; // [sp+160h] [bp-1F4h]
  _QWORD *v846; // [sp+160h] [bp-1F4h]
  int v847; // [sp+160h] [bp-1F4h]
  int v848; // [sp+160h] [bp-1F4h]
  int v849; // [sp+160h] [bp-1F4h]
  _QWORD *v850; // [sp+164h] [bp-1F0h]
  _DWORD *v851; // [sp+164h] [bp-1F0h]
  unsigned int v852; // [sp+164h] [bp-1F0h]
  unsigned int v853; // [sp+164h] [bp-1F0h]
  int v854; // [sp+168h] [bp-1ECh]
  _QWORD *v855; // [sp+168h] [bp-1ECh]
  _DWORD *v856; // [sp+168h] [bp-1ECh]
  int v857; // [sp+16Ch] [bp-1E8h]
  int v858; // [sp+16Ch] [bp-1E8h]
  int v859; // [sp+16Ch] [bp-1E8h]
  _QWORD *v860; // [sp+16Ch] [bp-1E8h]
  unsigned int v861; // [sp+170h] [bp-1E4h]
  int v862; // [sp+170h] [bp-1E4h]
  int v863; // [sp+174h] [bp-1E0h]
  _QWORD *v864; // [sp+174h] [bp-1E0h]
  int v865; // [sp+178h] [bp-1DCh]
  _QWORD *v866; // [sp+178h] [bp-1DCh]
  int v867; // [sp+17Ch] [bp-1D8h]
  int v868; // [sp+17Ch] [bp-1D8h]
  _DWORD *v869; // [sp+17Ch] [bp-1D8h]
  int v870; // [sp+180h] [bp-1D4h]
  int v871; // [sp+180h] [bp-1D4h]
  _QWORD *v872; // [sp+180h] [bp-1D4h]
  int v873; // [sp+184h] [bp-1D0h]
  int v874; // [sp+184h] [bp-1D0h]
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
    v286 = v3 + a3;
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v286;
  }
  else
  {
    v884 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      LOWORD(v5) = -18040;
      LOWORD(v6) = -9856;
      HIWORD(v5) = (unsigned int)&unk_14AA98 >> 16;
      HIWORD(v6) = (unsigned int)&unk_14CA90 >> 16;
      v293 = v6;
      v7 = v5;
      while ( 1 )
      {
        if ( n < v4 )
          v4 = n;
        v8 = (void *)(a1 + v3);
        v3 += v4;
        memcpy(v8, src, v4);
        n -= v4;
        src += v4;
        if ( v3 == 128 )
        {
          v9 = &dest[120];
          v883 = (int)&v883;
          v10 = &v883;
          v11 = a1 - 8;
          v12 = &v914;
          do
          {
            v14 = *(_DWORD *)(v11 + 8);
            v11 += 8;
            v13 = v14;
            v15 = v10[2];
            v10 += 2;
            v16 = *(_DWORD *)(v11 + 4);
            v17 = v10[1];
            v12[2] = v13;
            v12 += 2;
            *((_DWORD *)v9 + 2) = v15 ^ v13;
            v9 += 8;
            v12[1] = v16;
            *((_DWORD *)v9 + 1) = v17 ^ v16;
          }
          while ( &v945 != v12 );
          v289 = 0;
          v519 = v887;
          v489 = v888;
          v523 = v889;
          v530 = v890;
          v619 = v891;
          v630 = v892;
          v495 = v893;
          v512 = v894;
          v536 = v895;
          v459 = v896;
          v468 = v897;
          v320 = v898;
          v381 = v899;
          v476 = v900;
          v542 = v901;
          v18 = v912;
          v19 = v914;
          v287 = v7;
          v367 = v902;
          v559 = v915;
          v546 = v903;
          v299 = v904;
          v415 = v905;
          v373 = v906;
          v388 = v907;
          v394 = v908;
          v405 = v909;
          v431 = v910;
          v483 = v911;
          v554 = v913;
          v612 = v886;
          do
          {
            v309 = v612 ^ v289;
            v399 = v489 ^ ((unsigned __int64)(v289 + 16) >> 32);
            v328 = v630 ^ ((unsigned __int64)(v289 + 48) >> 32);
            v338 = v495 ^ (v289 + 64);
            v294 = ((unsigned __int64)(v289 + 80) >> 32) ^ v536;
            v20 = v459 ^ (v289 + 96);
            v21 = ((unsigned __int64)(v289 + 96) >> 32) ^ v468;
            v344 = v320 ^ (v289 + 112);
            v349 = v381 ^ ((unsigned __int64)(v289 + 112) >> 32);
            v358 = v476 ^ (v289 + 128);
            v442 = v542 ^ ((unsigned __int64)(v289 + 128) >> 32);
            v450 = v367 ^ (v289 + 144);
            v460 = v299 ^ (v289 + 160);
            v374 = v373 ^ (v289 + 176);
            v22 = v388 ^ ((unsigned __int64)(v289 + 176) >> 32);
            v23 = v394;
            v395 = (v289 + 240) ^ v19;
            v382 = v23 ^ (v289 + 192);
            v24 = v405 ^ ((unsigned __int64)(v289 + 192) >> 32);
            v389 = v431 ^ (v289 + 208);
            v25 = v483;
            v484 = (v289 + 224) ^ v18;
            v477 = v25 ^ ((unsigned __int64)(v289 + 208) >> 32);
            v26 = v554 ^ ((unsigned __int64)(v289 + 224) >> 32);
            v490 = v559 ^ ((unsigned __int64)(v289 + 240) >> 32);
            v321 = v519 ^ (v289 + 16);
            v406 = v523 ^ (v289 + 32);
            v469 = v22;
            v300 = v546 ^ ((unsigned __int64)(v289 + 144) >> 32);
            v701 = v24;
            v555 = HIBYTE(v349);
            v368 = v415 ^ ((unsigned __int64)(v289 + 160) >> 32);
            v758 = v26;
            HIDWORD(v495) = HIBYTE(v26);
            v543 = HIBYTE(v21);
            v432 = v20;
            v579 = HIBYTE(v442);
            v416 = v619 ^ (v289 + 48);
            v835 = (unsigned int)(HIDWORD(v612) ^ HIDWORD(v289)) >> 24;
            v810 = v530 ^ ((unsigned __int64)(v289 + 32) >> 32);
            v537 = HIBYTE(v294);
            v650 = v293 + 8 * HIBYTE(v344);
            v667 = v293 + 8 * HIBYTE(v358);
            v560 = v293 + 8 * (((unsigned int)v495 ^ ((_DWORD)v289 + 64)) >> 24);
            v27 = &dword_14C188[2 * HIBYTE(v24)];
            v571 = v293 + 8 * ((v512 ^ (unsigned int)(v289 + 80)) >> 24);
            v613 = v293 + 8 * HIBYTE(v20);
            v695 = v293 + 8 * HIBYTE(v450);
            v785 = v293 + 8 * HIBYTE(v389);
            v801 = v293 + 8 * HIBYTE(v484);
            v713 = v293 + 8 * HIBYTE(v460);
            v819 = v293 + 8 * HIBYTE(v395);
            v744 = v293 + 8 * HIBYTE(v374);
            v773 = v293 + 8 * HIBYTE(v382);
            v822 = v293 + 8 * BYTE3(v309);
            v28 = &qword_14C990[BYTE1(v321)];
            v29 = &qword_14D190[BYTE2(v406)];
            v30 = &qword_14E190[BYTE4(v338)];
            v620 = *v27;
            v638 = v27[1];
            v31 = &qword_14E190[(unsigned __int8)v294];
            v587 = &qword_14E190[(unsigned __int8)v21];
            v32 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v309 + 4)
                ^ ((unsigned __int64)(v289 + 1) >> 32)
                ^ dword_14C188[2 * HIBYTE(v22) + 1]
                ^ *((_DWORD *)v28 - 1)
                ^ *((_DWORD *)v29 - 1);
            v33 = v293 + 8 * HIBYTE(v416);
            v34 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v309)
                ^ (v289 + 1)
                ^ dword_14C188[2 * HIBYTE(v22)]
                ^ *((_DWORD *)v28 - 2);
            v631 = BYTE2(v294);
            v35 = &qword_14C990[BYTE1(v406)];
            v547 = &qword_14D190[BYTE2(v416)];
            v36 = (unsigned __int8)(v523 ^ (v289 + 32));
            v857 = v293 + 8 * HIBYTE(v406);
            v723 = BYTE1(v349);
            v615 = &qword_14E190[(unsigned __int8)v349];
            v407 = BYTE2(v442);
            v37 = (unsigned __int8)v442;
            v443 = BYTE1(v442);
            v659 = &qword_14E190[v37];
            v38 = v32 ^ *(_DWORD *)(v33 + 12) ^ *((_DWORD *)v30 - 1);
            v737 = (unsigned __int8)v416;
            v417 = &qword_14C990[BYTE1(v416)];
            v39 = &dword_14F188[2 * BYTE2(v21)];
            v40 = v34
                ^ *((_DWORD *)v29 - 2)
                ^ *(_DWORD *)(v33 + 8)
                ^ *((_DWORD *)v30 - 2)
                ^ dword_14E988[2 * BYTE1(v294)]
                ^ *v39;
            v707 = dword_14F188[2 * BYTE2(v349) + 1];
            v675 = dword_14E988[2 * BYTE1(v21)];
            v41 = dword_14E988[2 * BYTE1(v294) + 1];
            v295 = v40;
            v686 = dword_14F188[2 * BYTE2(v349)];
            v350 = v38 ^ v41 ^ v39[1];
            v42 = *(_DWORD *)(v560 + 8);
            v43 = *(_DWORD *)(v560 + 12);
            v561 = &qword_14D190[BYTE2(v338)];
            v44 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v321) ^ v620 ^ (v289 + 17) ^ *((_DWORD *)v35 - 2);
            v45 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v321 + 4)
                ^ v638
                ^ ((unsigned __int64)(v289 + 17) >> 32)
                ^ *((_DWORD *)v35 - 1);
            v814 = (unsigned __int8)v338;
            v604 = &qword_14C990[BYTE1(v338)];
            v46 = *((_DWORD *)v547 - 1);
            v47 = v44 ^ *((_DWORD *)v547 - 2);
            v424 = &qword_14D190[(unsigned __int8)((v512 ^ (unsigned int)(v289 + 80)) >> 16)];
            v840 = (unsigned __int8)(v512 ^ (v289 + 80));
            v548 = &qword_14C990[(unsigned __int8)((unsigned __int16)(v512 ^ (v289 + 80)) >> 8)];
            v826 = BYTE1(v300);
            v639 = &qword_14D190[BYTE2(v432)];
            v831 = BYTE2(v368);
            v48 = dword_14E988[2 * BYTE1(v21) + 1] ^ *((_DWORD *)v31 - 1) ^ v43 ^ v45 ^ v46;
            v49 = dword_14C188[2 * HIDWORD(v495) + 1];
            v50 = dword_14C188[2 * HIDWORD(v495)];
            v504 = dword_14E988[2 * v723];
            v729 = dword_14F188[2 * v407 + 1];
            v596 = dword_14F188[2 * v407];
            v51 = *((_DWORD *)v587 - 2);
            v52 = *((_DWORD *)v587 - 1);
            v588 = *((_DWORD *)v615 - 2);
            LODWORD(v338) = v48 ^ v707;
            v766 = *((_DWORD *)v615 - 1);
            v861 = *((_DWORD *)v31 - 2) ^ v42 ^ v47 ^ v675 ^ v686;
            v803 = dword_14F188[2 * BYTE2(v300) + 1];
            v513 = dword_14F188[2 * BYTE2(v300)];
            v53 = *(_DWORD *)(v613 + 8);
            v496 = *(_DWORD *)(v613 + 12);
            v863 = (unsigned __int8)v432;
            v54 = *(_DWORD *)(v287 + 8 * v36) ^ dword_14C188[2 * HIBYTE(v477)] ^ (v289 + 33) ^ *((_DWORD *)v417 - 2);
            v55 = &qword_14C990[BYTE1(v432)];
            v565 = &qword_14D190[BYTE2(v344)];
            v56 = dword_14C188[2 * HIBYTE(v477) + 1]
                ^ *(_DWORD *)(v287 + 8 * v36 + 4)
                ^ ((unsigned __int64)(v289 + 33) >> 32)
                ^ *((_DWORD *)v417 - 1)
                ^ *((_DWORD *)v561 - 1)
                ^ *(_DWORD *)(v571 + 12)
                ^ v52
                ^ dword_14E988[2 * v723 + 1];
            v616 = &qword_14E190[(unsigned __int8)v300];
            v614 = HIBYTE(v300);
            v845 = BYTE1(v368);
            v854 = BYTE2(v469);
            v873 = (unsigned __int8)v344;
            v676 = &qword_14C990[BYTE1(v344)];
            v687 = &qword_14D190[BYTE2(v358)];
            v57 = &qword_14E190[(unsigned __int8)v368];
            v621 = HIBYTE(v368);
            v867 = BYTE1(v469);
            v724 = &qword_14E190[(unsigned __int8)v469];
            LOWORD(v25) = v701;
            v870 = BYTE2(v701);
            v408 = (unsigned __int8)v358;
            v702 = &qword_14C990[BYTE1(v358)];
            v345 = v56 ^ v729;
            v876 = BYTE2(v477);
            v751 = &qword_14E190[(unsigned __int8)v25];
            v730 = &qword_14C990[BYTE1(v450)];
            v301 = v54 ^ *((_DWORD *)v561 - 2) ^ *(_DWORD *)(v571 + 8) ^ v51 ^ v504 ^ v596;
            v58 = v50 ^ *(_DWORD *)(v287 + 8 * v737) ^ (v289 + 49) ^ *((_DWORD *)v604 - 2) ^ *((_DWORD *)v424 - 2) ^ v53;
            v59 = v49
                ^ *(_DWORD *)(v287 + 8 * v737 + 4)
                ^ ((unsigned __int64)(v289 + 49) >> 32)
                ^ *((_DWORD *)v604 - 1)
                ^ *((_DWORD *)v424 - 1)
                ^ v496;
            v425 = BYTE1(v477);
            v738 = &qword_14D190[BYTE2(v460)];
            LOWORD(v56) = v758;
            v779 = &qword_14E190[(unsigned __int8)v477];
            v433 = BYTE2(v758);
            v359 = v58 ^ v588 ^ dword_14E988[2 * v443] ^ v513;
            v369 = v59 ^ v766 ^ dword_14E988[2 * v443 + 1] ^ v803;
            v478 = (unsigned __int8)v460;
            v759 = &qword_14C990[BYTE1(v460)];
            v767 = &qword_14D190[BYTE2(v374)];
            v791 = &qword_14E190[(unsigned __int8)v56];
            v60 = *((_DWORD *)v639 - 1);
            v461 = BYTE2(v490);
            v61 = *(_DWORD *)(v287 + 8 * v814)
                ^ dword_14C188[2 * HIBYTE(v490)]
                ^ (v289 + 65)
                ^ *((_DWORD *)v548 - 2)
                ^ *((_DWORD *)v639 - 2);
            v470 = BYTE6(v309);
            v514 = (unsigned __int8)v374;
            v640 = &qword_14C990[BYTE1(v374)];
            v62 = *(_DWORD *)(v650 + 12);
            v63 = *(_DWORD *)(v650 + 8);
            v651 = &qword_14D190[BYTE2(v382)];
            v497 = BYTE1(v490);
            v804 = &qword_14E190[(unsigned __int8)v490];
            v64 = *((_DWORD *)v659 - 1)
                ^ *((_DWORD *)v548 - 1)
                ^ dword_14C188[2 * HIBYTE(v490) + 1]
                ^ *(_DWORD *)(v287 + 8 * v814 + 4)
                ^ ((unsigned __int64)(v289 + 65) >> 32)
                ^ v60
                ^ v62
                ^ dword_14E988[2 * v826 + 1];
            v505 = BYTE5(v309);
            v418 = &qword_14E190[BYTE4(v309)];
            v491 = *((_DWORD *)v659 - 2) ^ v61 ^ v63 ^ dword_14E988[2 * v826] ^ dword_14F188[2 * v831];
            v549 = (unsigned __int8)(v23 ^ (v289 - 64));
            v660 = &qword_14C990[BYTE1(v382)];
            v797 = &qword_14D190[BYTE2(v389)];
            v520 = BYTE2(v399);
            HIDWORD(v309) = v64 ^ dword_14F188[2 * v831 + 1];
            v65 = dword_14C188[2 * v835 + 1] ^ ((unsigned __int64)(v289 + 81) >> 32);
            v562 = BYTE1(v399);
            v66 = dword_14C188[2 * v835] ^ (v289 + 81) ^ *(_DWORD *)(v287 + 8 * v840) ^ *((_DWORD *)v55 - 2);
            v836 = &qword_14E190[(unsigned __int8)v399];
            v67 = *((_DWORD *)v565 - 1);
            v68 = *((_DWORD *)v565 - 2);
            v566 = BYTE2(v810);
            v589 = BYTE1(v810);
            v850 = &qword_14E190[(unsigned __int8)(v530 ^ ((unsigned __int64)(v289 + 32) >> 32))];
            v597 = BYTE2(v328);
            v811 = &qword_14C990[BYTE1(v389)];
            v572 = (unsigned __int8)v389;
            v815 = &qword_14D190[BYTE2(v484)];
            v605 = (unsigned __int8)v484;
            v69 = v66 ^ v68 ^ *(_DWORD *)(v667 + 8) ^ *((_DWORD *)v616 - 2) ^ dword_14E988[2 * v845];
            v70 = dword_14E988[2 * v845 + 1]
                ^ v65
                ^ *(_DWORD *)(v287 + 8 * v840 + 4)
                ^ *((_DWORD *)v55 - 1)
                ^ v67
                ^ *(_DWORD *)(v667 + 12)
                ^ *((_DWORD *)v616 - 1);
            v827 = &qword_14C990[BYTE1(v484)];
            v71 = dword_14F188[2 * v854];
            v72 = dword_14F188[2 * v854 + 1];
            v832 = &qword_14D190[BYTE2(v395)];
            v841 = &qword_14D190[BYTE2(v309)];
            v855 = &qword_14C990[BYTE1(v309)];
            v375 = v70 ^ v72;
            LODWORD(v309) = v69 ^ v71;
            v617 = (unsigned __int8)v395;
            v846 = &qword_14C990[BYTE1(v395)];
            v73 = *(v57 - 1);
            v485 = *(_DWORD *)(v287 + 8 * v863 + 4)
                 ^ dword_14C188[2 * HIBYTE(v399) + 1]
                 ^ ((unsigned __int64)(v289 + 97) >> 32)
                 ^ *((_DWORD *)v676 - 1)
                 ^ *((_DWORD *)v687 - 1)
                 ^ *(_DWORD *)(v695 + 12)
                 ^ HIDWORD(v73)
                 ^ dword_14E988[2 * v867 + 1]
                 ^ dword_14F188[2 * v870 + 1];
            v383 = *(_DWORD *)(v287 + 8 * v863)
                 ^ dword_14C188[2 * HIBYTE(v399)]
                 ^ (v289 + 97)
                 ^ *((_DWORD *)v676 - 2)
                 ^ *((_DWORD *)v687 - 2)
                 ^ *(_DWORD *)(v695 + 8)
                 ^ v73
                 ^ dword_14E988[2 * v867]
                 ^ dword_14F188[2 * v870];
            v74 = *(_DWORD *)(v287 + 8 * v408) ^ dword_14C188[2 * HIBYTE(v328)];
            v390 = *(_QWORD *)(v287 + 8 * v873)
                 ^ *(_QWORD *)&dword_14C188[2 * ((v530 ^ ((unsigned __int64)(v289 + 32) >> 32)) >> 24)]
                 ^ (v289 + 113)
                 ^ *(v702 - 1)
                 ^ qword_14D190[BYTE2(v450) - 1]
                 ^ *(_QWORD *)(v713 + 8)
                 ^ *(v724 - 1)
                 ^ *(_QWORD *)&dword_14E988[2 * BYTE1(v25)]
                 ^ *(_QWORD *)&dword_14F188[2 * v876];
            v871 = dword_14F188[2 * v461 + 1];
            v868 = dword_14F188[2 * v461];
            v524 = &dword_14F188[2 * BYTE2(v399)];
            v677 = &dword_14E988[2 * BYTE1(v399)];
            v714 = &dword_14F188[2 * BYTE2(v328)];
            v409 = dword_14F188[2 * v433 + 1]
                 ^ *((_DWORD *)v738 - 1)
                 ^ *((_DWORD *)v730 - 1)
                 ^ *(_DWORD *)(v287 + 8 * v408 + 4)
                 ^ dword_14C188[2 * HIBYTE(v328) + 1]
                 ^ (__CFADD__((_DWORD)v289, 129) + HIDWORD(v289))
                 ^ *(_DWORD *)(v744 + 12)
                 ^ *((_DWORD *)v751 - 1)
                 ^ dword_14E988[2 * v425 + 1];
            v400 = v74
                 ^ (v289 + 129)
                 ^ *((_DWORD *)v730 - 2)
                 ^ *((_DWORD *)v738 - 2)
                 ^ *(_DWORD *)(v744 + 8)
                 ^ *((_DWORD *)v751 - 2)
                 ^ dword_14E988[2 * v425]
                 ^ dword_14F188[2 * v433];
            v75 = dword_14C188[2 * v537 + 1];
            v745 = dword_14E988[2 * v497 + 1];
            v739 = *((_DWORD *)v767 - 1)
                 ^ dword_14C188[2 * HIBYTE(HIDWORD(v338)) + 1]
                 ^ *(_DWORD *)(v287 + 8 * (unsigned __int8)v450 + 4)
                 ^ ((unsigned __int64)(v289 + 145) >> 32)
                 ^ *((_DWORD *)v759 - 1)
                 ^ *(_DWORD *)(v773 + 12)
                 ^ *((_DWORD *)v779 - 1);
            HIDWORD(v73) = dword_14C188[2 * v537];
            v538 = dword_14E988[2 * v497];
            v76 = *(_DWORD *)(v287 + 8 * v478 + 4)
                ^ dword_14F188[2 * v470 + 1]
                ^ ((unsigned __int64)(v289 + 161) >> 32)
                ^ v75;
            v498 = dword_14C188[2 * HIBYTE(HIDWORD(v338))]
                 ^ *(_DWORD *)(v287 + 8 * (unsigned __int8)v450)
                 ^ (v289 + 145)
                 ^ *((_DWORD *)v759 - 2)
                 ^ *((_DWORD *)v767 - 2)
                 ^ *(_DWORD *)(v773 + 8)
                 ^ *((_DWORD *)v779 - 2)
                 ^ dword_14E988[2 * BYTE1(v56)];
            v451 = &qword_14D190[BYTE2(v321)];
            v434 = v293 + 8 * HIBYTE(v321);
            v322 = BYTE1(v328);
            v462 = &qword_14E190[(unsigned __int8)v328];
            v329 = BYTE6(v338);
            v774 = BYTE5(v338);
            v77 = *(_DWORD *)(v434 + 8);
            v78 = dword_14E988[2 * v322];
            v79 = *(_DWORD *)(v287 + 8 * v605 + 4)
                ^ *((_DWORD *)v841 - 1)
                ^ ((unsigned __int64)(v289 + 225) >> 32)
                ^ dword_14C188[2 * v614 + 1]
                ^ *((_DWORD *)v846 - 1)
                ^ *(_DWORD *)(v434 + 12)
                ^ *((_DWORD *)v850 - 1)
                ^ dword_14E988[2 * v322 + 1]
                ^ dword_14F188[2 * BYTE6(v338) + 1];
            LODWORD(v73) = *(_DWORD *)(v287 + 8 * v617 + 4)
                         ^ *((_DWORD *)v855 - 1)
                         ^ ((unsigned __int64)(v289 + 241) >> 32)
                         ^ dword_14C188[2 * v621 + 1]
                         ^ *((_DWORD *)v451 - 1)
                         ^ *(_DWORD *)(v857 + 12)
                         ^ *((_DWORD *)v462 - 1)
                         ^ dword_14E988[2 * BYTE5(v338) + 1];
            v323 = v498 ^ v868;
            HIDWORD(v338) = dword_14F188[2 * v470]
                          ^ *(_DWORD *)(v287 + 8 * v478)
                          ^ (v289 + 161)
                          ^ HIDWORD(v73)
                          ^ *((_DWORD *)v640 - 2)
                          ^ *((_DWORD *)v651 - 2)
                          ^ *(_DWORD *)(v785 + 8)
                          ^ *((_DWORD *)v791 - 2)
                          ^ v538;
            v435 = *(_DWORD *)(v287 + 8 * v514 + 4)
                 ^ dword_14E988[2 * v505 + 1]
                 ^ ((unsigned __int64)(v289 + 177) >> 32)
                 ^ dword_14C188[2 * v543 + 1]
                 ^ *((_DWORD *)v660 - 1)
                 ^ *((_DWORD *)v797 - 1)
                 ^ *(_DWORD *)(v801 + 12)
                 ^ *((_DWORD *)v804 - 1)
                 ^ v524[1];
            v426 = dword_14E988[2 * v505]
                 ^ *(_DWORD *)(v287 + 8 * v514)
                 ^ (v289 + 177)
                 ^ dword_14C188[2 * v543]
                 ^ *((_DWORD *)v660 - 2)
                 ^ *((_DWORD *)v797 - 2)
                 ^ *(_DWORD *)(v801 + 8)
                 ^ *((_DWORD *)v804 - 2)
                 ^ dword_14F188[2 * v520];
            v479 = *((_DWORD *)v855 - 2)
                 ^ *(_DWORD *)(v287 + 8 * v617)
                 ^ (v289 + 241)
                 ^ dword_14C188[2 * v621]
                 ^ *((_DWORD *)v451 - 2)
                 ^ *(_DWORD *)(v857 + 8)
                 ^ *((_DWORD *)v462 - 2)
                 ^ dword_14E988[2 * v774]
                 ^ dword_14F188[2 * v631];
            v452 = *(_DWORD *)(v287 + 8 * v549 + 4)
                 ^ *((_DWORD *)v418 - 1)
                 ^ (__CFADD__((_DWORD)v289, 193) + HIDWORD(v289))
                 ^ dword_14C188[2 * v555 + 1]
                 ^ *((_DWORD *)v811 - 1)
                 ^ *((_DWORD *)v815 - 1)
                 ^ *(_DWORD *)(v819 + 12)
                 ^ v677[1]
                 ^ dword_14F188[2 * v566 + 1];
            LODWORD(v73) = v73 ^ dword_14F188[2 * v631 + 1];
            v471 = *((_DWORD *)v841 - 2)
                 ^ *(_DWORD *)(v287 + 8 * v605)
                 ^ (v289 + 225)
                 ^ dword_14C188[2 * v614]
                 ^ *((_DWORD *)v846 - 2)
                 ^ v77
                 ^ *((_DWORD *)v850 - 2)
                 ^ v78
                 ^ dword_14F188[2 * v329];
            v444 = dword_14C188[2 * v555]
                 ^ *((_DWORD *)v418 - 2)
                 ^ *(_DWORD *)(v287 + 8 * v549)
                 ^ (v289 + 193)
                 ^ *((_DWORD *)v811 - 2)
                 ^ *((_DWORD *)v815 - 2)
                 ^ *(_DWORD *)(v819 + 8)
                 ^ dword_14E988[2 * v562]
                 ^ dword_14F188[2 * v566];
            v330 = v739 ^ dword_14E988[2 * BYTE1(v56) + 1] ^ v871;
            v463 = *(_DWORD *)(v287 + 8 * v572)
                 ^ *(_DWORD *)(v822 + 8)
                 ^ (v289 + 209)
                 ^ dword_14C188[2 * v579]
                 ^ *((_DWORD *)v827 - 2)
                 ^ *((_DWORD *)v832 - 2)
                 ^ *((_DWORD *)v836 - 2)
                 ^ dword_14E988[2 * v589]
                 ^ dword_14F188[2 * v597];
            v419 = v76
                 ^ *((_DWORD *)v640 - 1)
                 ^ *((_DWORD *)v651 - 1)
                 ^ *(_DWORD *)(v785 + 12)
                 ^ *((_DWORD *)v791 - 1)
                 ^ v745;
            v499 = *(_DWORD *)(v822 + 12)
                 ^ *(_DWORD *)(v287 + 8 * v572 + 4)
                 ^ ((unsigned __int64)(v289 + 209) >> 32)
                 ^ dword_14C188[2 * v579 + 1]
                 ^ *((_DWORD *)v827 - 1)
                 ^ *((_DWORD *)v832 - 1)
                 ^ *((_DWORD *)v836 - 1)
                 ^ dword_14E988[2 * v589 + 1]
                 ^ v714[1];
            v580 = HIBYTE(v485);
            v598 = HIBYTE(v409);
            v539 = BYTE3(v73);
            v515 = v73;
            v590 = HIBYTE(HIDWORD(v390));
            v506 = v79;
            v573 = HIBYTE(v375);
            v618 = v293 + 8 * HIBYTE(v359);
            v632 = v293 + 8 * HIBYTE(v491);
            v641 = v293 + 8 * BYTE3(v309);
            v703 = v293 + 8 * HIBYTE(v383);
            v740 = v293 + 8 * BYTE3(v390);
            v688 = &dword_14C188[2 * HIBYTE(v79)];
            v725 = &dword_14C188[2 * BYTE3(v73)];
            v823 = v293 + 8 * HIBYTE(v463);
            v833 = v293 + 8 * HIBYTE(v471);
            v80 = v861;
            v842 = v293 + 8 * HIBYTE(v479);
            v880 = HIBYTE(v419);
            v780 = v293 + 8 * HIBYTE(v323);
            v792 = v293 + 8 * HIBYTE(HIDWORD(v338));
            v802 = v293 + 8 * HIBYTE(v426);
            v816 = v293 + 8 * HIBYTE(v444);
            v837 = &dword_14C188[2 * HIBYTE(HIDWORD(v390))];
            v820 = &dword_14C188[2 * HIBYTE(v375)];
            v828 = &dword_14C188[2 * HIBYTE(v485)];
            v81 = BYTE1(v861);
            v851 = &dword_14C188[2 * HIBYTE(v409)];
            v847 = v293 + 8 * HIBYTE(v295);
            v856 = &dword_14C188[2 * HIBYTE(v330)];
            v869 = &dword_14C188[2 * HIBYTE(v419)];
            v862 = v293 + 8 * HIBYTE(v861);
            v874 = v293 + 8 * HIBYTE(v301);
            v82 = &qword_14E190[BYTE4(v309)];
            v83 = &qword_14C990[v81];
            v84 = BYTE2(v485);
            v85 = &qword_14D190[BYTE2(v301)];
            v86 = BYTE1(v485);
            v668 = &qword_14E190[(unsigned __int8)v485];
            v678 = *((_DWORD *)v82 - 2);
            v715 = *((_DWORD *)v82 - 1);
            v289 += 2;
            v872 = &qword_14D190[BYTE2(v80)];
            v486 = BYTE2(v375);
            v87 = BYTE6(v390);
            v88 = &qword_14E190[(unsigned __int8)v375];
            v89 = &qword_14C990[BYTE1(v301)];
            v90 = &qword_14D190[BYTE2(v359)];
            v622 = &qword_14C990[BYTE1(v359)];
            v805 = dword_14E988[2 * v86];
            LODWORD(v73) = dword_14E988[2 * BYTE1(v375) + 1]
                         ^ dword_14C188[2 * HIBYTE(v435) + 1]
                         ^ *(_DWORD *)(v287 + 8 * (unsigned __int8)v295 + 4)
                         ^ *((_DWORD *)v83 - 1)
                         ^ *((_DWORD *)v85 - 1);
            v858 = dword_14E988[2 * v86 + 1];
            HIDWORD(v73) = dword_14E988[2 * BYTE1(v375)]
                         ^ dword_14C188[2 * HIBYTE(v435)]
                         ^ *(_DWORD *)(v287 + 8 * (unsigned __int8)v295)
                         ^ *((_DWORD *)v83 - 2)
                         ^ *((_DWORD *)v85 - 2);
            v91 = BYTE4(v390);
            v661 = &qword_14D190[BYTE2(v491)];
            v92 = BYTE5(v390);
            HIDWORD(v390) = (unsigned __int8)v491;
            v708 = &qword_14E190[v91];
            v93 = BYTE2(v409);
            v696 = &qword_14C990[BYTE1(v491)];
            LODWORD(v612) = HIDWORD(v73) ^ *(_DWORD *)(v618 + 8) ^ v678 ^ dword_14F188[2 * v84];
            LODWORD(v73) = v73 ^ *(_DWORD *)(v618 + 12) ^ v715;
            LOWORD(v91) = v409;
            HIDWORD(v73) = *((_DWORD *)v89 - 2);
            v410 = (unsigned __int8)v309;
            v679 = &qword_14D190[BYTE2(v309)];
            v716 = &qword_14C990[BYTE1(v309)];
            v94 = *((_DWORD *)v88 - 1)
                ^ *(_DWORD *)(v287 + 8 * (unsigned __int8)v80 + 4)
                ^ dword_14C188[2 * HIBYTE(v452) + 1]
                ^ *((_DWORD *)v89 - 1);
            HIDWORD(v73) ^= *(_DWORD *)(v287 + 8 * (unsigned __int8)v80)
                          ^ *((_DWORD *)v88 - 2)
                          ^ dword_14C188[2 * HIBYTE(v452)]
                          ^ *((_DWORD *)v90 - 2);
            v746 = &qword_14E190[(unsigned __int8)v91];
            v731 = &qword_14D190[BYTE2(v383)];
            v95 = BYTE2(v330);
            HIDWORD(v612) = v73 ^ dword_14F188[2 * v84 + 1];
            LODWORD(v309) = BYTE1(v330);
            v768 = &qword_14E190[(unsigned __int8)v330];
            v331 = BYTE2(v419);
            v519 = HIDWORD(v73) ^ *(_DWORD *)(v632 + 8) ^ v805 ^ dword_14F188[2 * v87];
            v489 = v94 ^ *((_DWORD *)v90 - 1) ^ *(_DWORD *)(v632 + 12) ^ v858 ^ dword_14F188[2 * v87 + 1];
            v806 = *((_DWORD *)v668 - 1);
            v96 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v301)
                ^ *(_DWORD *)(v641 + 8)
                ^ dword_14C188[2 * HIBYTE(v499)]
                ^ *((_DWORD *)v622 - 2);
            HIDWORD(v73) = *(_DWORD *)(v287 + 8 * (unsigned __int8)v301 + 4)
                         ^ *(_DWORD *)(v641 + 12)
                         ^ dword_14C188[2 * HIBYTE(v499) + 1]
                         ^ *((_DWORD *)v622 - 1);
            v623 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v359);
            v97 = *v688;
            v98 = *((_DWORD *)v661 - 2) ^ v96 ^ *((_DWORD *)v668 - 2) ^ dword_14E988[2 * v92] ^ dword_14F188[2 * v93];
            v865 = (unsigned __int8)v383;
            v642 = &qword_14C990[BYTE1(v383)];
            v652 = &qword_14D190[BYTE2(v390)];
            v302 = BYTE1(v419);
            v669 = &qword_14E190[(unsigned __int8)v419];
            v875 = (unsigned __int8)v390;
            v420 = &qword_14C990[BYTE1(v390)];
            v530 = HIDWORD(v73) ^ *((_DWORD *)v661 - 1) ^ v806 ^ dword_14E988[2 * v92 + 1] ^ dword_14F188[2 * v93 + 1];
            v99 = *(_DWORD *)(v703 + 8);
            v662 = &qword_14D190[BYTE2(v400)];
            v523 = v98;
            v100 = *(_DWORD *)(v703 + 12);
            v101 = *((_DWORD *)v708 - 1);
            v102 = *((_DWORD *)v696 - 1);
            v103 = *((_DWORD *)v696 - 2);
            HIDWORD(v73) = *((_DWORD *)v679 - 2);
            v104 = *(_DWORD *)(v287 + 8 * (unsigned __int8)v359 + 4) ^ *((_DWORD *)v679 - 1) ^ v688[1];
            v360 = BYTE1(v435);
            v384 = (unsigned __int8)v400;
            v697 = &qword_14E190[(unsigned __int8)v435];
            v376 = BYTE2(v452);
            v680 = &qword_14C990[BYTE1(v400)];
            v689 = &qword_14D190[BYTE2(v323)];
            v877 = BYTE1(v452);
            v807 = &qword_14E190[(unsigned __int8)v452];
            v878 = BYTE2(v499);
            v879 = (unsigned __int8)v323;
            v704 = &qword_14C990[BYTE1(v323)];
            v619 = HIDWORD(v73)
                 ^ v623
                 ^ v97
                 ^ v103
                 ^ v99
                 ^ *((_DWORD *)v708 - 2)
                 ^ dword_14E988[2 * BYTE1(v91)]
                 ^ dword_14F188[2 * v95];
            v709 = &qword_14D190[BYTE6(v338)];
            v630 = v104 ^ v102 ^ v100 ^ v101 ^ dword_14E988[2 * BYTE1(v91) + 1] ^ dword_14F188[2 * v95 + 1];
            v105 = dword_14E988[2 * (_DWORD)v309];
            v106 = dword_14F188[2 * v331 + 1];
            HIDWORD(v73) = *((_DWORD *)v716 - 2)
                         ^ *(_DWORD *)(v287 + 8 * HIDWORD(v390))
                         ^ dword_14C188[2 * v539]
                         ^ *((_DWORD *)v731 - 2);
            v107 = dword_14F188[2 * v331];
            v108 = *(_DWORD *)(v740 + 8);
            v109 = dword_14E988[2 * (_DWORD)v309 + 1]
                 ^ *(_DWORD *)(v287 + 8 * HIDWORD(v390) + 4)
                 ^ *((_DWORD *)v716 - 1)
                 ^ v725[1]
                 ^ *((_DWORD *)v731 - 1)
                 ^ *(_DWORD *)(v740 + 12)
                 ^ *((_DWORD *)v746 - 1);
            v453 = dword_14E988[2 * v302 + 1];
            v110 = BYTE2(v435);
            v436 = dword_14E988[2 * v302];
            LODWORD(v309) = BYTE1(v499);
            v732 = &qword_14E190[(unsigned __int8)v499];
            v324 = BYTE2(v506);
            HIDWORD(v390) = BYTE4(v338);
            v717 = &qword_14C990[BYTE5(v338)];
            v726 = &qword_14D190[BYTE2(v426)];
            v332 = BYTE1(v506);
            v741 = &qword_14E190[(unsigned __int8)v506];
            HIDWORD(v338) = BYTE2(v515);
            LODWORD(v495) = HIDWORD(v73) ^ v108 ^ *((_DWORD *)v746 - 2) ^ v105 ^ v107;
            LODWORD(v390) = BYTE2(v350);
            HIDWORD(v495) = v109 ^ v106;
            v111 = *(_QWORD *)(v287 + 8 * v410)
                 ^ *(_QWORD *)&dword_14C188[2 * HIBYTE(v350)]
                 ^ *(v642 - 1)
                 ^ *(v652 - 1)
                 ^ *(_QWORD *)(v293 + 8 * HIBYTE(v400) + 8)
                 ^ *(v768 - 1);
            v112 = dword_14C188[2 * BYTE3(v338)] ^ *(_DWORD *)(v287 + 8 * v865);
            HIDWORD(v73) = dword_14E988[2 * v360];
            v859 = dword_14F188[2 * v376 + 1];
            v113 = dword_14F188[2 * v376];
            v377 = (unsigned __int8)v426;
            v643 = &qword_14C990[BYTE1(v426)];
            v550 = v113;
            v114 = dword_14E988[2 * v360 + 1];
            v556 = &qword_14D190[BYTE2(v444)];
            v361 = BYTE1(v515);
            v752 = &qword_14E190[(unsigned __int8)v515];
            v115 = &qword_14E190[(unsigned __int8)v350];
            v351 = BYTE1(v350);
            v303 = v115;
            v411 = (unsigned __int8)v444;
            v653 = &qword_14C990[BYTE1(v444)];
            v401 = BYTE2(v338);
            v747 = &qword_14D190[BYTE2(v463)];
            v536 = dword_14F188[2 * v110 + 1] ^ HIDWORD(v111) ^ v453;
            v512 = v111 ^ v436 ^ dword_14F188[2 * v110];
            v760 = &qword_14C990[BYTE1(v463)];
            v427 = (unsigned __int8)v463;
            v769 = &qword_14D190[BYTE2(v471)];
            v116 = dword_14C188[2 * BYTE3(v338) + 1]
                 ^ *(_DWORD *)(v287 + 8 * v865 + 4)
                 ^ *((_DWORD *)v420 - 1)
                 ^ *((_DWORD *)v662 - 1);
            v117 = (unsigned __int8)v338;
            LODWORD(v338) = BYTE1(v338);
            v786 = &qword_14E190[v117];
            v775 = &qword_14C990[BYTE1(v471)];
            v445 = (unsigned __int8)v471;
            v118 = v112 ^ *((_DWORD *)v420 - 2) ^ *((_DWORD *)v662 - 2) ^ *(_DWORD *)(v780 + 8) ^ *((_DWORD *)v669 - 2);
            v119 = v116 ^ *(_DWORD *)(v780 + 12) ^ *((_DWORD *)v669 - 1) ^ v114;
            v670 = &qword_14D190[BYTE2(v479)];
            v864 = &qword_14E190[(unsigned __int8)v345];
            v437 = BYTE2(v369);
            v866 = &qword_14C990[BYTE1(v295)];
            v781 = &qword_14D190[BYTE2(v295)];
            v468 = v119 ^ v859;
            v454 = (unsigned __int8)v479;
            v459 = HIDWORD(v73) ^ v118 ^ v550;
            v860 = &qword_14C990[BYTE1(v479)];
            v120 = *(_QWORD *)(v792 + 8);
            v121 = *((_DWORD *)v680 - 1)
                 ^ *(_DWORD *)(v287 + 8 * v875 + 4)
                 ^ dword_14C188[2 * HIBYTE(v345) + 1]
                 ^ *((_DWORD *)v689 - 1)
                 ^ HIDWORD(v120);
            v122 = *(_DWORD *)(v287 + 8 * v875)
                 ^ dword_14C188[2 * HIBYTE(v345)]
                 ^ *((_DWORD *)v680 - 2)
                 ^ *((_DWORD *)v689 - 2)
                 ^ v120;
            v123 = *(v697 - 1);
            v124 = v122 ^ v123;
            v125 = v121 ^ HIDWORD(v123) ^ dword_14E988[2 * v877 + 1];
            LODWORD(v123) = *(_DWORD *)(v287 + 8 * v384 + 4) ^ dword_14C188[2 * HIBYTE(v369) + 1];
            HIDWORD(v123) = dword_14C188[2 * HIBYTE(v369)] ^ *(_DWORD *)(v287 + 8 * v384);
            v126 = dword_14F188[2 * v324 + 1];
            v127 = dword_14F188[2 * v324];
            v381 = v125 ^ dword_14F188[2 * v878 + 1];
            v320 = v124 ^ dword_14E988[2 * v877] ^ dword_14F188[2 * v878];
            v681 = &dword_14E988[2 * BYTE1(v345)];
            v690 = &dword_14F188[2 * BYTE2(v369)];
            v476 = HIDWORD(v123)
                 ^ *((_DWORD *)v704 - 2)
                 ^ *((_DWORD *)v709 - 2)
                 ^ *(_DWORD *)(v802 + 8)
                 ^ *((_DWORD *)v807 - 2)
                 ^ dword_14E988[2 * (_DWORD)v309]
                 ^ v127;
            v542 = v123
                 ^ *((_DWORD *)v704 - 1)
                 ^ *((_DWORD *)v709 - 1)
                 ^ *(_DWORD *)(v802 + 12)
                 ^ *((_DWORD *)v807 - 1)
                 ^ dword_14E988[2 * (_DWORD)v309 + 1]
                 ^ v126;
            v128 = dword_14E988[2 * v332]
                 ^ dword_14C188[2 * HIBYTE(HIDWORD(v309))]
                 ^ *(_DWORD *)(v287 + 8 * v879)
                 ^ *((_DWORD *)v717 - 2)
                 ^ *((_DWORD *)v726 - 2)
                 ^ *(_DWORD *)(v816 + 8)
                 ^ *((_DWORD *)v732 - 2);
            LODWORD(v111) = dword_14C188[2 * HIBYTE(HIDWORD(v309)) + 1]
                          ^ *(_DWORD *)(v287 + 8 * v879 + 4)
                          ^ *((_DWORD *)v717 - 1)
                          ^ *((_DWORD *)v726 - 1)
                          ^ *(_DWORD *)(v816 + 12)
                          ^ *((_DWORD *)v732 - 1)
                          ^ dword_14E988[2 * v332 + 1];
            v129 = dword_14F188[2 * (_DWORD)v390] ^ *(_DWORD *)(v287 + 8 * HIDWORD(v390)) ^ dword_14C188[2 * v573];
            v718 = dword_14E988[2 * v361 + 1];
            v574 = dword_14E988[2 * v361];
            v546 = v111 ^ dword_14F188[2 * HIDWORD(v338) + 1];
            v362 = &qword_14E190[(unsigned __int8)v369];
            LODWORD(v123) = v643;
            v644 = BYTE1(v369);
            v367 = v128 ^ dword_14F188[2 * HIDWORD(v338)];
            v130 = *((_DWORD *)v303 - 1)
                 ^ *(_DWORD *)(v287 + 8 * v411 + 4)
                 ^ v837[1]
                 ^ *((_DWORD *)v760 - 1)
                 ^ *((_DWORD *)v769 - 1)
                 ^ *(_DWORD *)(v842 + 12)
                 ^ dword_14E988[2 * (_DWORD)v338 + 1];
            HIDWORD(v111) = *((_DWORD *)v303 - 2)
                          ^ *(_DWORD *)(v287 + 8 * v411)
                          ^ dword_14C188[2 * v590]
                          ^ *((_DWORD *)v760 - 2)
                          ^ *((_DWORD *)v769 - 2)
                          ^ *(_DWORD *)(v842 + 8)
                          ^ dword_14E988[2 * (_DWORD)v338]
                          ^ dword_14F188[2 * BYTE2(v345)];
            v415 = dword_14F188[2 * (_DWORD)v390 + 1]
                 ^ *(_DWORD *)(v287 + 8 * HIDWORD(v390) + 4)
                 ^ v820[1]
                 ^ *(_DWORD *)(v123 - 4)
                 ^ *((_DWORD *)v556 - 1)
                 ^ *(_DWORD *)(v823 + 12)
                 ^ *((_DWORD *)v741 - 1)
                 ^ v718;
            v299 = v129
                 ^ *(_DWORD *)(v123 - 8)
                 ^ *((_DWORD *)v556 - 2)
                 ^ *(_DWORD *)(v823 + 8)
                 ^ *((_DWORD *)v741 - 2)
                 ^ v574;
            v388 = dword_14E988[2 * v351 + 1]
                 ^ *(_DWORD *)(v287 + 8 * v377 + 4)
                 ^ v828[1]
                 ^ *((_DWORD *)v653 - 1)
                 ^ *((_DWORD *)v747 - 1)
                 ^ *(_DWORD *)(v833 + 12)
                 ^ *((_DWORD *)v752 - 1)
                 ^ dword_14F188[2 * v401 + 1];
            v373 = *(_DWORD *)(v287 + 8 * v377)
                 ^ dword_14E988[2 * v351]
                 ^ dword_14C188[2 * v580]
                 ^ *((_DWORD *)v653 - 2)
                 ^ *((_DWORD *)v747 - 2)
                 ^ *(_DWORD *)(v833 + 8)
                 ^ *((_DWORD *)v752 - 2)
                 ^ dword_14F188[2 * v401];
            v394 = HIDWORD(v111);
            v405 = v130 ^ dword_14F188[2 * BYTE2(v345) + 1];
            v131 = *(_DWORD *)(v874 + 12)
                 ^ v869[1]
                 ^ *(_DWORD *)(v287 + 8 * v454 + 4)
                 ^ *((_DWORD *)v866 - 1)
                 ^ dword_14F188[2 * v486 + 1]
                 ^ *((_DWORD *)v872 - 1)
                 ^ *((_DWORD *)v362 - 1);
            v19 = *((_DWORD *)v362 - 2)
                ^ *((_DWORD *)v872 - 2)
                ^ dword_14C188[2 * v880]
                ^ *(_DWORD *)(v287 + 8 * v454)
                ^ *((_DWORD *)v866 - 2)
                ^ dword_14F188[2 * v486]
                ^ *(_DWORD *)(v874 + 8)
                ^ dword_14E988[2 * BYTE5(v309)];
            v132 = dword_14E988[2 * BYTE5(v309) + 1];
            v18 = dword_14F188[2 * BYTE6(v309)]
                ^ *((_DWORD *)v864 - 2)
                ^ *((_DWORD *)v860 - 2)
                ^ *((_DWORD *)v781 - 2)
                ^ *(_DWORD *)(v287 + 8 * v445)
                ^ *v856
                ^ *(_DWORD *)(v862 + 8)
                ^ dword_14E988[2 * v644];
            v431 = *(_DWORD *)(v287 + 8 * v427)
                 ^ *(_DWORD *)(v847 + 8)
                 ^ dword_14C188[2 * v598]
                 ^ *((_DWORD *)v775 - 2)
                 ^ *((_DWORD *)v670 - 2)
                 ^ *((_DWORD *)v786 - 2)
                 ^ *v681
                 ^ dword_14F188[2 * v437];
            v554 = *(_DWORD *)(v287 + 8 * v445 + 4)
                 ^ *((_DWORD *)v781 - 1)
                 ^ v856[1]
                 ^ *((_DWORD *)v860 - 1)
                 ^ *(_DWORD *)(v862 + 12)
                 ^ *((_DWORD *)v864 - 1)
                 ^ dword_14E988[2 * v644 + 1]
                 ^ dword_14F188[2 * BYTE6(v309) + 1];
            v559 = v131 ^ v132;
            v483 = v681[1]
                 ^ *(_DWORD *)(v287 + 8 * v427 + 4)
                 ^ *(_DWORD *)(v847 + 12)
                 ^ v851[1]
                 ^ *((_DWORD *)v775 - 1)
                 ^ *((_DWORD *)v670 - 1)
                 ^ *((_DWORD *)v786 - 1)
                 ^ v690[1];
          }
          while ( v289 != 14 );
          v133 = v287;
          v886 = v612;
          v288 = -1;
          v887 = v519;
          v888 = v489;
          v889 = v523;
          v890 = v530;
          v891 = v619;
          v892 = v630;
          v893 = v495;
          v894 = v512;
          v895 = v536;
          v896 = v459;
          v897 = v468;
          v898 = v320;
          v915 = v131 ^ v132;
          v912 = v18;
          v899 = v381;
          v914 = v19;
          v900 = v476;
          v901 = v542;
          v902 = v367;
          v903 = v546;
          v904 = v299;
          v905 = v415;
          v906 = v373;
          v907 = v388;
          v908 = v394;
          v909 = v405;
          v910 = v431;
          v911 = v483;
          v913 = v554;
          v378 = v916;
          v540 = v917;
          v391 = v918;
          v396 = v919;
          v402 = v920;
          v412 = v921;
          v421 = v922;
          v428 = v923;
          v438 = v924;
          v567 = v925;
          v446 = v926;
          v525 = v927;
          v455 = v928;
          v472 = v929;
          v464 = v930;
          v480 = v931;
          v492 = v932;
          v134 = v939;
          v500 = v933;
          v135 = v941;
          v136 = v945;
          v137 = v133;
          v487 = v934;
          v304 = v943;
          v507 = v935;
          v352 = v944;
          v516 = v936;
          v333 = v937;
          v531 = v938;
          v290 = v940;
          v296 = v942;
          v138 = v946;
          do
          {
            v339 = ~v402;
            v325 = v540 ^ HIDWORD(v288);
            v310 = ~v421;
            v363 = ~v455;
            v346 = ~v438;
            v139 = ~v391;
            v140 = ~v333;
            v141 = ~v446;
            v422 = ~v134;
            v142 = ~v464;
            v370 = ~v492;
            v447 = ~v304;
            v316 = ~v378;
            v465 = ~v136;
            v334 = v396 ^ HIDWORD(v288) ^ 0x10000000;
            v342 = v428 ^ HIDWORD(v288) ^ 0x30000000;
            v305 = v412 ^ HIDWORD(v288) ^ 0x20000000;
            v143 = v472 ^ HIDWORD(v288) ^ 0x60000000;
            v379 = v500 ^ (HIDWORD(v288) + 0x80000000);
            v392 = v507 ^ HIDWORD(v288) ^ 0x90000000;
            v403 = HIDWORD(v516) ^ HIDWORD(v288) ^ 0xA0000000;
            v413 = v531 ^ HIDWORD(v288) ^ 0xB0000000;
            v429 = v290 ^ HIDWORD(v288) ^ 0xC0000000;
            v439 = v296 ^ HIDWORD(v288) ^ 0xD0000000;
            HIDWORD(v516) = v480 ^ HIDWORD(v288) ^ 0x70000000;
            v456 = HIDWORD(v288) ^ 0xE0000000 ^ v352;
            v532 = ~v135;
            v473 = HIDWORD(v288) ^ 0xF0000000 ^ v138;
            v508 = v143;
            v481 = v141;
            v385 = ~v487;
            v397 = ~(_DWORD)v516;
            v144 = v525;
            v526 = v140;
            v353 = v144 ^ HIDWORD(v288) ^ 0x50000000;
            LOWORD(v516) = v142;
            v501 = v139;
            v824 = HIBYTE(v456);
            v829 = HIBYTE(v473);
            v838 = ((unsigned int)v540 ^ HIDWORD(v288)) >> 24;
            v852 = HIBYTE(v334);
            v541 = HIBYTE(v305);
            v705 = v293 + 8 * HIBYTE(v141);
            v645 = v293 + 8 * ((unsigned int)~v136 >> 24);
            v710 = v293 + 8 * HIBYTE(v363);
            v663 = v293 + 8 * HIBYTE(v316);
            v581 = v293 + 8 * HIBYTE(v140);
            v599 = v293 + 8 * ((unsigned int)~v135 >> 24);
            v624 = v293 + 8 * HIBYTE(v447);
            v727 = v293 + 8 * HIBYTE(v142);
            v698 = v293 + 8 * HIBYTE(v346);
            v671 = v293 + 8 * HIBYTE(v139);
            v544 = HIBYTE(v342);
            v691 = v293 + 8 * HIBYTE(v310);
            v682 = v293 + 8 * HIBYTE(v339);
            v145 = v567 ^ HIDWORD(v288) ^ 0x40000000;
            v551 = HIBYTE(v145);
            v146 = &qword_14E190[(unsigned __int8)v334];
            v563 = HIBYTE(v353);
            v147 = &qword_14D190[BYTE2(v363)];
            v733 = v293 + 8 * ((unsigned int)~v492 >> 24);
            v148 = &qword_14C990[BYTE1(v346)];
            v748 = dword_14C188[2 * HIBYTE(v143) + 1];
            v719 = dword_14C188[2 * HIBYTE(v143)];
            v753 = BYTE1(v305);
            v568 = &qword_14D190[BYTE2(v481)];
            v149 = v293 + 8 * HIBYTE(v422);
            v591 = &qword_14E190[(unsigned __int8)v325];
            v150 = *((_DWORD *)v146 - 2)
                 ^ ~*(_DWORD *)(v137 + 8 * (unsigned __int8)v339)
                 ^ dword_14C188[2 * HIBYTE(HIDWORD(v516))]
                 ^ *((_DWORD *)v148 - 2)
                 ^ *((_DWORD *)v147 - 2)
                 ^ *(_DWORD *)(v149 + 8);
            v297 = 0xFFFFFF - HIDWORD(v288);
            v606 = &qword_14E190[(unsigned __int8)v305];
            v557 = BYTE2(v305);
            v761 = (unsigned __int8)v310;
            v151 = *((_DWORD *)v146 - 1)
                 ^ *((_DWORD *)v147 - 1)
                 ^ *(_DWORD *)(v137 + 8 * (unsigned __int8)v339 + 4)
                 ^ ~((0xFFFFFF - HIDWORD(v288)) ^ 0x10000000)
                 ^ dword_14C188[2 * HIBYTE(HIDWORD(v516)) + 1]
                 ^ *((_DWORD *)v148 - 1)
                 ^ *(_DWORD *)(v149 + 12)
                 ^ dword_14E988[2 * BYTE1(v342) + 1];
            v742 = &qword_14D190[BYTE2(v310)];
            v793 = (unsigned __int8)v481;
            v306 = &qword_14C990[BYTE1(v481)];
            v152 = &qword_14D190[BYTE2(v142)];
            v654 = &qword_14E190[(unsigned __int8)v145];
            v782 = BYTE2(v508);
            v488 = v151 ^ dword_14F188[2 * BYTE2(v353) + 1];
            v575 = BYTE2(v342);
            v153 = dword_14E988[2 * v753];
            v633 = &qword_14E190[(unsigned __int8)v342];
            v482 = v150 ^ dword_14E988[2 * BYTE1(v342)] ^ dword_14F188[2 * BYTE2(v353)];
            v154 = dword_14E988[2 * v753 + 1];
            v155 = *(_DWORD *)(v137 + 8 * (unsigned __int8)v501 + 4) ^ v748 ^ (HIDWORD(v288) - 0xFFFFFF);
            HIDWORD(v288) -= 0x1FFFFFF;
            v156 = v155 ^ HIDWORD(qword_14C990[BYTE1(v310) - 1]);
            v157 = LODWORD(qword_14C990[BYTE1(v310) - 1]) ^ ~(*(_DWORD *)(v137 + 8 * (unsigned __int8)v501) ^ v719);
            v158 = (unsigned __int8)v346;
            v493 = &qword_14D190[BYTE2(v346)];
            v754 = (unsigned __int8)v363;
            v311 = &qword_14C990[BYTE1(v363)];
            v159 = v156 ^ *((_DWORD *)v568 - 1) ^ *(_DWORD *)(v581 + 12) ^ *((_DWORD *)v591 - 1) ^ v154;
            v160 = &qword_14D190[BYTE2(v370)];
            v161 = v157
                 ^ *((_DWORD *)v568 - 2)
                 ^ *(_DWORD *)(v581 + 8)
                 ^ *((_DWORD *)v591 - 2)
                 ^ v153
                 ^ dword_14F188[2 * BYTE2(v145)];
            v569 = &qword_14E190[(unsigned __int8)v353];
            v162 = *((_DWORD *)v606 - 2);
            v343 = v161;
            v163 = *((_DWORD *)v606 - 1);
            v347 = v159 ^ dword_14F188[2 * BYTE2(v145) + 1];
            v364 = BYTE1(v353);
            v607 = BYTE6(v516);
            v720 = BYTE1(v508);
            v592 = &qword_14E190[(unsigned __int8)v508];
            v164 = &qword_14C990[BYTE1(v516)];
            v817 = (unsigned __int8)v370;
            v509 = &qword_14C990[BYTE1(v370)];
            v354 = *((_DWORD *)v152 - 1)
                 ^ *(_DWORD *)(v137 + 8 * v761 + 4)
                 ^ v297
                 ^ 0xDFFFFFFF
                 ^ dword_14C188[2 * HIBYTE(v379) + 1]
                 ^ *((_DWORD *)v306 - 1)
                 ^ *(_DWORD *)(v599 + 12)
                 ^ v163
                 ^ dword_14E988[2 * BYTE1(v145) + 1]
                 ^ dword_14F188[2 * v782 + 1];
            v307 = ~*(_DWORD *)(v137 + 8 * v761)
                 ^ dword_14C188[2 * HIBYTE(v379)]
                 ^ *((_DWORD *)v306 - 2)
                 ^ *((_DWORD *)v152 - 2)
                 ^ *(_DWORD *)(v599 + 8)
                 ^ v162
                 ^ dword_14E988[2 * BYTE1(v145)]
                 ^ dword_14F188[2 * v782];
            v762 = BYTE5(v516);
            v165 = *(_DWORD *)(v624 + 12);
            v166 = *((_DWORD *)v633 - 2)
                 ^ *((_DWORD *)v160 - 2)
                 ^ dword_14C188[2 * HIBYTE(v392)]
                 ^ ~*(_DWORD *)(v137 + 8 * v158)
                 ^ *((_DWORD *)v311 - 2)
                 ^ *(_DWORD *)(v624 + 8);
            v625 = &qword_14E190[BYTE4(v516)];
            v167 = *((_DWORD *)v633 - 1)
                 ^ *((_DWORD *)v160 - 1)
                 ^ *((_DWORD *)v311 - 1)
                 ^ *(_DWORD *)(v137 + 8 * v158 + 4)
                 ^ v297
                 ^ 0xCFFFFFFF
                 ^ dword_14C188[2 * HIBYTE(v392) + 1]
                 ^ v165;
            HIDWORD(v516) = &qword_14C990[BYTE1(v385)];
            v582 = &qword_14D190[BYTE2(v526)];
            v776 = BYTE1(v379);
            v634 = &qword_14E190[(unsigned __int8)v379];
            v312 = v167 ^ dword_14E988[2 * v364 + 1] ^ dword_14F188[2 * v607 + 1];
            v365 = v166 ^ dword_14E988[2 * v364] ^ dword_14F188[2 * v607];
            v168 = *((_DWORD *)v654 - 2);
            v600 = &qword_14C990[BYTE1(v397)];
            v169 = dword_14C188[2 * HIBYTE(v403) + 1]
                 ^ v297
                 ^ 0xBFFFFFFF
                 ^ *(_DWORD *)(v137 + 8 * v793 + 4)
                 ^ *((_DWORD *)v164 - 1)
                 ^ HIDWORD(qword_14D190[BYTE2(v385) - 1])
                 ^ *(_DWORD *)(v645 + 12)
                 ^ *((_DWORD *)v654 - 1);
            v655 = &qword_14E190[(unsigned __int8)v392];
            v783 = BYTE1(v392);
            v170 = v168
                 ^ *(_DWORD *)(v645 + 8)
                 ^ ~*(_DWORD *)(v137 + 8 * v793)
                 ^ dword_14C188[2 * HIBYTE(v403)]
                 ^ *((_DWORD *)v164 - 2)
                 ^ LODWORD(qword_14D190[BYTE2(v385) - 1])
                 ^ dword_14E988[2 * v720];
            v794 = (unsigned __int8)v385;
            v749 = v293 + 8 * HIBYTE(v385);
            v371 = v170 ^ dword_14F188[2 * BYTE2(v379)];
            v380 = dword_14E988[2 * v720 + 1] ^ v169 ^ dword_14F188[2 * BYTE2(v379) + 1];
            v171 = &qword_14D190[BYTE2(v397)];
            v172 = (unsigned __int8)v526;
            v527 = &qword_14C990[BYTE1(v526)];
            v834 = v172;
            v173 = *((_DWORD *)v569 - 2)
                 ^ ~*(_DWORD *)(v137 + 8 * v754)
                 ^ dword_14C188[2 * HIBYTE(v413)]
                 ^ *((_DWORD *)v509 - 2)
                 ^ *((_DWORD *)v171 - 2)
                 ^ *(_DWORD *)(v663 + 8);
            v798 = BYTE1(v403);
            v174 = *((_DWORD *)v509 - 1)
                 ^ *(_DWORD *)(v137 + 8 * v754 + 4)
                 ^ v297
                 ^ 0xAFFFFFFF
                 ^ dword_14C188[2 * HIBYTE(v413) + 1]
                 ^ *((_DWORD *)v171 - 1)
                 ^ *(_DWORD *)(v663 + 12)
                 ^ *((_DWORD *)v569 - 1);
            v664 = &qword_14E190[(unsigned __int8)v403];
            v175 = dword_14E988[2 * v762];
            v176 = dword_14E988[2 * v762 + 1];
            v763 = (unsigned __int8)v397;
            v386 = v173 ^ v175 ^ dword_14F188[2 * BYTE2(v392)];
            v848 = (unsigned __int8)v422;
            v770 = v293 + 8 * HIBYTE(v397);
            v393 = v174 ^ v176 ^ dword_14F188[2 * BYTE2(v392) + 1];
            v646 = &qword_14C990[BYTE1(v422)];
            v177 = &qword_14D190[BYTE2(v447)];
            v178 = *((_DWORD *)v582 - 2);
            v808 = BYTE1(v413);
            v179 = *(_DWORD *)(v137 + 8 * (unsigned __int8)v516 + 4)
                 ^ v297
                 ^ 0x9FFFFFFF
                 ^ dword_14C188[2 * HIBYTE(v429) + 1]
                 ^ *(_DWORD *)(HIDWORD(v516) - 4)
                 ^ *((_DWORD *)v582 - 1);
            v721 = &qword_14E190[(unsigned __int8)v413];
            v812 = BYTE2(v439);
            v510 = (unsigned __int8)v532;
            v583 = &qword_14C990[BYTE1(v532)];
            v180 = &qword_14D190[BYTE2(v465)];
            v181 = ~*(_DWORD *)(v137 + 8 * (unsigned __int8)v516)
                 ^ dword_14C188[2 * HIBYTE(v429)]
                 ^ *(_DWORD *)(HIDWORD(v516) - 8)
                 ^ v178
                 ^ *(_DWORD *)(v671 + 8)
                 ^ *((_DWORD *)v592 - 2)
                 ^ dword_14E988[2 * v776];
            v182 = v179 ^ *(_DWORD *)(v671 + 12) ^ *((_DWORD *)v592 - 1) ^ dword_14E988[2 * v776 + 1];
            v843 = BYTE1(v429);
            v672 = &qword_14E190[(unsigned __int8)v429];
            v398 = v181 ^ dword_14F188[2 * BYTE2(v403)];
            v404 = v182 ^ dword_14F188[2 * BYTE2(v403) + 1];
            v183 = &qword_14D190[BYTE2(v422)];
            v517 = (unsigned __int8)v447;
            v184 = BYTE2(v456);
            v448 = &qword_14C990[BYTE1(v447)];
            v185 = *((_DWORD *)v600 - 1)
                 ^ *(_DWORD *)(v137 + 8 * v817 + 4)
                 ^ ~(v297 ^ 0x70000000)
                 ^ dword_14C188[2 * HIBYTE(v439) + 1]
                 ^ *((_DWORD *)v183 - 1)
                 ^ *(_DWORD *)(v682 + 12)
                 ^ *((_DWORD *)v625 - 1);
            v186 = *((_DWORD *)v625 - 2)
                 ^ dword_14C188[2 * HIBYTE(v439)]
                 ^ ~*(_DWORD *)(v137 + 8 * v817)
                 ^ *((_DWORD *)v600 - 2)
                 ^ *((_DWORD *)v183 - 2)
                 ^ *(_DWORD *)(v682 + 8);
            v593 = &qword_14D190[BYTE2(v316)];
            v187 = &qword_14E190[(unsigned __int8)v439];
            v440 = BYTE1(v439);
            v683 = v187;
            v626 = BYTE2(v473);
            v188 = (unsigned __int8)v456;
            v457 = BYTE1(v456);
            v755 = &qword_14E190[v188];
            v189 = dword_14F188[2 * BYTE2(v413) + 1];
            v414 = v186 ^ dword_14E988[2 * v783] ^ dword_14F188[2 * BYTE2(v413)];
            v423 = dword_14E988[2 * v783 + 1] ^ v185 ^ v189;
            LOBYTE(v186) = v473;
            v474 = BYTE1(v473);
            v190 = &qword_14D190[BYTE2(v532)];
            v777 = &qword_14E190[(unsigned __int8)v186];
            v521 = BYTE2(v334);
            v570 = BYTE1(v334);
            v191 = *(_DWORD *)(v691 + 8)
                 ^ *((_DWORD *)v190 - 2)
                 ^ *((_DWORD *)v527 - 2)
                 ^ ~*(_DWORD *)(v137 + 8 * v794)
                 ^ dword_14C188[2 * v824];
            v192 = *(_DWORD *)(v691 + 12)
                 ^ ~(v297 ^ 0x80000000)
                 ^ *(_DWORD *)(v137 + 8 * v794 + 4)
                 ^ dword_14C188[2 * v824 + 1]
                 ^ *((_DWORD *)v527 - 1)
                 ^ *((_DWORD *)v190 - 1)
                 ^ *((_DWORD *)v634 - 1);
            v528 = (unsigned __int8)v465;
            v601 = &qword_14C990[BYTE1(v465)];
            v608 = &qword_14D190[BYTE2(v501)];
            v692 = &qword_14C990[BYTE1(v501)];
            v193 = dword_14F188[2 * BYTE2(v429)];
            v430 = v192 ^ dword_14E988[2 * v798 + 1] ^ dword_14F188[2 * BYTE2(v429) + 1];
            v335 = v191 ^ *((_DWORD *)v634 - 2) ^ dword_14E988[2 * v798] ^ v193;
            v194 = *((_DWORD *)v655 - 2);
            v466 = BYTE2(v325);
            v502 = BYTE1(v325);
            v195 = ~(v297 ^ 0x90000000)
                 ^ *(_DWORD *)(v137 + 8 * v763 + 4)
                 ^ dword_14C188[2 * v829 + 1]
                 ^ *((_DWORD *)v646 - 1);
            v196 = *((_DWORD *)v655 - 1);
            v197 = ~*(_DWORD *)(v137 + 8 * v763)
                 ^ dword_14C188[2 * v829]
                 ^ *((_DWORD *)v646 - 2)
                 ^ *((_DWORD *)v177 - 2);
            v533 = (unsigned __int8)v316;
            v647 = &qword_14C990[BYTE1(v316)];
            v656 = &qword_14D190[BYTE2(v339)];
            v764 = &qword_14C990[BYTE1(v339)];
            v317 = v197 ^ *(_DWORD *)(v698 + 8) ^ v194 ^ dword_14E988[2 * v808] ^ dword_14F188[2 * v812];
            v326 = *(_DWORD *)(v698 + 12)
                 ^ v195
                 ^ *((_DWORD *)v177 - 1)
                 ^ v196
                 ^ dword_14E988[2 * v808 + 1]
                 ^ dword_14F188[2 * v812 + 1];
            v787 = dword_14E988[2 * v440];
            v795 = dword_14E988[2 * v440 + 1];
            v441 = *(_DWORD *)(v137 + 8 * v834 + 4)
                 ^ ~(v297 ^ 0xA0000000)
                 ^ dword_14C188[2 * v838 + 1]
                 ^ *((_DWORD *)v583 - 1)
                 ^ *((_DWORD *)v180 - 1)
                 ^ *(_DWORD *)(v705 + 12)
                 ^ *((_DWORD *)v664 - 1)
                 ^ dword_14E988[2 * v843 + 1]
                 ^ dword_14F188[2 * v184 + 1];
            v340 = ~*(_DWORD *)(v137 + 8 * v834)
                 ^ dword_14C188[2 * v838]
                 ^ *((_DWORD *)v583 - 2)
                 ^ *((_DWORD *)v180 - 2)
                 ^ *(_DWORD *)(v705 + 8)
                 ^ *((_DWORD *)v664 - 2)
                 ^ dword_14E988[2 * v843]
                 ^ dword_14F188[2 * v184];
            v198 = *((_DWORD *)v448 - 1);
            v199 = *(_DWORD *)(v710 + 12);
            v449 = ~*(_DWORD *)(v137 + 8 * v848)
                 ^ dword_14C188[2 * v852]
                 ^ *((_DWORD *)v448 - 2)
                 ^ *((_DWORD *)v593 - 2)
                 ^ *(_DWORD *)(v710 + 8)
                 ^ *((_DWORD *)v721 - 2)
                 ^ v787
                 ^ dword_14F188[2 * v626];
            v711 = dword_14E988[2 * v457 + 1];
            v200 = dword_14E988[2 * v457];
            v788 = dword_14E988[2 * v474 + 1];
            v799 = dword_14F188[2 * v521 + 1];
            v458 = v199
                 ^ ~(v297 ^ 0xB0000000)
                 ^ *(_DWORD *)(v137 + 8 * v848 + 4)
                 ^ dword_14C188[2 * v852 + 1]
                 ^ v198
                 ^ *((_DWORD *)v593 - 1)
                 ^ *((_DWORD *)v721 - 1)
                 ^ v795
                 ^ dword_14F188[2 * v626 + 1];
            v627 = dword_14F188[2 * v466 + 1];
            v467 = *((_DWORD *)v672 - 2)
                 ^ *(_DWORD *)(v727 + 8)
                 ^ ~*(_DWORD *)(v137 + 8 * v510)
                 ^ dword_14C188[2 * v541]
                 ^ *((_DWORD *)v601 - 2)
                 ^ *((_DWORD *)v608 - 2)
                 ^ v200
                 ^ dword_14F188[2 * v466];
            v201 = ~(v297 ^ 0xC0000000) ^ *(_DWORD *)(v137 + 8 * v510 + 4);
            v594 = *((_DWORD *)v493 - 2);
            v202 = ~(v297 ^ 0xE0000000)
                 ^ *(_DWORD *)(v137 + 8 * v528 + 4)
                 ^ dword_14C188[2 * v551 + 1]
                 ^ *((_DWORD *)v692 - 1)
                 ^ *((_DWORD *)v742 - 1)
                 ^ *(_DWORD *)(v749 + 12)
                 ^ *((_DWORD *)v755 - 1)
                 ^ dword_14E988[2 * v502 + 1]
                 ^ dword_14F188[2 * v557 + 1];
            v291 = dword_14F188[2 * v575 + 1]
                 ^ ~(v297 ^ 0xF0000000)
                 ^ *(_DWORD *)(v137 + 8 * v533 + 4)
                 ^ dword_14C188[2 * v563 + 1]
                 ^ *((_DWORD *)v764 - 1)
                 ^ *((_DWORD *)v493 - 1)
                 ^ *(_DWORD *)(v770 + 12)
                 ^ *((_DWORD *)v777 - 1)
                 ^ dword_14E988[2 * v570 + 1];
            v494 = *(_DWORD *)(v733 + 8)
                 ^ dword_14C188[2 * v544]
                 ^ ~*(_DWORD *)(v137 + 8 * v517)
                 ^ *((_DWORD *)v647 - 2)
                 ^ *((_DWORD *)v656 - 2)
                 ^ *((_DWORD *)v683 - 2)
                 ^ dword_14E988[2 * v474]
                 ^ dword_14F188[2 * v521];
            v511 = dword_14F188[2 * v557]
                 ^ ~*(_DWORD *)(v137 + 8 * v528)
                 ^ dword_14C188[2 * v551]
                 ^ *((_DWORD *)v692 - 2)
                 ^ *((_DWORD *)v742 - 2)
                 ^ *(_DWORD *)(v749 + 8)
                 ^ *((_DWORD *)v755 - 2)
                 ^ dword_14E988[2 * v502];
            v522 = ~*(_DWORD *)(v137 + 8 * v533)
                 ^ dword_14C188[2 * v563]
                 ^ *((_DWORD *)v764 - 2)
                 ^ v594
                 ^ *(_DWORD *)(v770 + 8)
                 ^ *((_DWORD *)v777 - 2)
                 ^ dword_14E988[2 * v570]
                 ^ dword_14F188[2 * v575];
            v475 = v201
                 ^ dword_14C188[2 * v541 + 1]
                 ^ *((_DWORD *)v601 - 1)
                 ^ *((_DWORD *)v608 - 1)
                 ^ *(_DWORD *)(v727 + 12)
                 ^ *((_DWORD *)v672 - 1)
                 ^ v711
                 ^ v627;
            v558 = HIBYTE(v380);
            v564 = HIBYTE(v393);
            v503 = *(_DWORD *)(v137 + 8 * v517 + 4)
                 ^ ~(v297 ^ 0xD0000000)
                 ^ dword_14C188[2 * v544 + 1]
                 ^ *((_DWORD *)v647 - 1)
                 ^ *((_DWORD *)v656 - 1)
                 ^ *(_DWORD *)(v733 + 12)
                 ^ *((_DWORD *)v683 - 1)
                 ^ v788
                 ^ v799;
            v518 = v202;
            v818 = HIBYTE(v202);
            v825 = HIBYTE(v291);
            v844 = HIBYTE(v347);
            v853 = HIBYTE(v488);
            v545 = HIBYTE(v354);
            v552 = HIBYTE(v312);
            v712 = v293 + 8 * HIBYTE(v398);
            v609 = v293 + 8 * HIBYTE(v494);
            v635 = v293 + 8 * HIBYTE(v511);
            v706 = v293 + 8 * HIBYTE(v386);
            v648 = v293 + 8 * HIBYTE(v522);
            v657 = v293 + 8 * HIBYTE(v343);
            v722 = v293 + 8 * HIBYTE(v414);
            v665 = v293 + 8 * HIBYTE(v482);
            v298 = v293 + 8 * HIBYTE(v335);
            v684 = v293 + 8 * HIBYTE(v365);
            v693 = v293 + 8 * HIBYTE(v371);
            v673 = v293 + 8 * HIBYTE(v307);
            v203 = qword_14E190[(unsigned __int8)v347 - 1];
            v204 = &qword_14C990[BYTE1(v371)];
            v205 = &qword_14D190[BYTE2(v386)];
            v206 = v293 + 8 * HIBYTE(v449);
            v207 = dword_14C188[2 * HIBYTE(v404)]
                 ^ *(_DWORD *)(v137 + 8 * (unsigned __int8)v482)
                 ^ LODWORD(qword_14C990[BYTE1(v365) - 1])
                 ^ *((_DWORD *)v205 - 2);
            v208 = &qword_14D190[BYTE2(v398)];
            v209 = *(_DWORD *)(v137 + 8 * (unsigned __int8)v482 + 4)
                 ^ dword_14C188[2 * HIBYTE(v404) + 1]
                 ^ HIDWORD(qword_14C990[BYTE1(v365) - 1])
                 ^ *((_DWORD *)v205 - 1)
                 ^ *(_DWORD *)(v206 + 12);
            v734 = (unsigned __int8)v365;
            v750 = &qword_14D190[BYTE2(v365)];
            v756 = (unsigned __int8)v386;
            v366 = &qword_14C990[BYTE1(v386)];
            v210 = v207 ^ *(_DWORD *)(v206 + 8) ^ v203 ^ dword_14E988[2 * BYTE1(v354)];
            v211 = v209 ^ HIDWORD(v203) ^ dword_14E988[2 * BYTE1(v354) + 1];
            LODWORD(v203) = &qword_14E190[(unsigned __int8)v354];
            v387 = BYTE2(v354);
            v212 = dword_14F188[2 * BYTE2(v380) + 1];
            WORD2(v203) = v380;
            v378 = v210 ^ dword_14F188[2 * BYTE2(v380)];
            v213 = BYTE5(v203);
            v540 = v211 ^ v212;
            v576 = &qword_14E190[BYTE4(v203)];
            v214 = *((_DWORD *)v204 - 1);
            HIDWORD(v203) = *((_DWORD *)v208 - 1);
            v215 = *(_DWORD *)(v137 + 8 * (unsigned __int8)v307)
                 ^ dword_14C188[2 * HIBYTE(v423)]
                 ^ *((_DWORD *)v204 - 2);
            v216 = *((_DWORD *)v208 - 2);
            v217 = (unsigned __int8)v371;
            v778 = &qword_14D190[BYTE2(v371)];
            v218 = v293 + 8 * HIBYTE(v467);
            v219 = *(_DWORD *)(v218 + 8);
            v771 = (unsigned __int8)v398;
            v220 = *(_DWORD *)(v137 + 8 * (unsigned __int8)v307 + 4)
                 ^ dword_14C188[2 * HIBYTE(v423) + 1]
                 ^ v214
                 ^ HIDWORD(v203)
                 ^ *(_DWORD *)(v218 + 12);
            v221 = &qword_14C990[BYTE1(v398)];
            v222 = &qword_14D190[BYTE2(v335)];
            v223 = v215 ^ v216 ^ v219 ^ LODWORD(qword_14E190[(unsigned __int8)v488 - 1]);
            v355 = &qword_14E190[(unsigned __int8)v312];
            v224 = dword_14E988[2 * BYTE1(v312) + 1];
            v372 = BYTE2(v312);
            v699 = BYTE1(v393);
            v584 = &qword_14E190[(unsigned __int8)v393];
            v225 = dword_14F188[2 * BYTE2(v393) + 1];
            v789 = (unsigned __int8)v414;
            v391 = v223 ^ dword_14E988[2 * BYTE1(v312)] ^ dword_14F188[2 * BYTE2(v393)];
            v313 = &qword_14C990[BYTE1(v414)];
            v396 = v220 ^ HIDWORD(qword_14E190[(unsigned __int8)v488 - 1]) ^ v224 ^ v225;
            HIDWORD(v203) = &qword_14D190[BYTE2(v414)];
            v226 = *(_DWORD *)(v137 + 8 * v734 + 4)
                 ^ dword_14C188[2 * HIBYTE(v430) + 1]
                 ^ *((_DWORD *)v366 - 1)
                 ^ *(_DWORD *)(HIDWORD(v203) - 4);
            v227 = *(_DWORD *)(HIDWORD(v203) - 8)
                 ^ *(_DWORD *)(v137 + 8 * v734)
                 ^ dword_14C188[2 * HIBYTE(v430)]
                 ^ *((_DWORD *)v366 - 2);
            v529 = BYTE1(v404);
            v228 = *(_QWORD *)(v203 - 8);
            v595 = &qword_14E190[(unsigned __int8)v404];
            v229 = v227 ^ *(_DWORD *)(v609 + 8);
            v230 = BYTE2(v430);
            v800 = (unsigned __int8)v335;
            v336 = &qword_14C990[BYTE1(v335)];
            v231 = dword_14E988[2 * v213] ^ v229 ^ v228;
            HIDWORD(v228) ^= dword_14E988[2 * v213 + 1] ^ v226 ^ *(_DWORD *)(v609 + 12);
            LODWORD(v228) = &qword_14D190[BYTE2(v340)];
            v735 = BYTE1(v423);
            v610 = &qword_14E190[(unsigned __int8)v423];
            v232 = dword_14F188[2 * BYTE2(v404) + 1];
            v402 = v231 ^ dword_14F188[2 * BYTE2(v404)];
            v233 = *(_DWORD *)(v137 + 8 * v217);
            v234 = *(_DWORD *)(v137 + 8 * v217 + 4);
            v412 = HIDWORD(v228) ^ v232;
            v534 = &qword_14C990[BYTE1(v317)];
            v235 = BYTE2(v441);
            HIDWORD(v228) = &qword_14D190[BYTE2(v449)];
            v236 = BYTE1(v430);
            v628 = &qword_14E190[(unsigned __int8)v430];
            v237 = *(_DWORD *)(v635 + 12)
                 ^ dword_14C188[2 * HIBYTE(v326) + 1]
                 ^ v234
                 ^ *((_DWORD *)v221 - 1)
                 ^ *((_DWORD *)v222 - 1)
                 ^ *((_DWORD *)v355 - 1);
            v238 = *(_DWORD *)(v635 + 8)
                 ^ dword_14C188[2 * HIBYTE(v326)]
                 ^ v233
                 ^ *((_DWORD *)v221 - 2)
                 ^ *((_DWORD *)v222 - 2)
                 ^ *((_DWORD *)v355 - 2);
            v356 = &qword_14C990[BYTE1(v340)];
            v239 = v238 ^ dword_14E988[2 * v699];
            v240 = v237 ^ dword_14E988[2 * v699 + 1];
            v602 = &qword_14D190[BYTE2(v467)];
            v809 = BYTE1(v326);
            v700 = &qword_14E190[(unsigned __int8)v326];
            v241 = dword_14F188[2 * BYTE2(v423) + 1];
            v813 = BYTE2(v458);
            v421 = v239 ^ dword_14F188[2 * BYTE2(v423)];
            v428 = v240 ^ v241;
            v242 = &qword_14D190[BYTE2(v317)];
            v243 = dword_14C188[2 * HIBYTE(v441) + 1]
                 ^ *(_DWORD *)(v137 + 8 * v756 + 4)
                 ^ *((_DWORD *)v313 - 1)
                 ^ *((_DWORD *)v242 - 1);
            v244 = dword_14C188[2 * HIBYTE(v441)]
                 ^ *(_DWORD *)(v137 + 8 * v756)
                 ^ *((_DWORD *)v313 - 2)
                 ^ *((_DWORD *)v242 - 2);
            v314 = BYTE2(v475);
            v245 = (unsigned __int8)v317;
            v246 = *(_DWORD *)(v648 + 12) ^ v243 ^ *((_DWORD *)v576 - 1);
            v247 = v244 ^ *(_DWORD *)(v648 + 8) ^ *((_DWORD *)v576 - 2);
            v757 = v293 + 8 * HIBYTE(v317);
            v839 = (unsigned __int8)v449;
            v577 = &qword_14C990[BYTE1(v449)];
            v248 = v247 ^ dword_14E988[2 * v529] ^ dword_14F188[2 * v230];
            v567 = v246 ^ dword_14E988[2 * v529 + 1] ^ dword_14F188[2 * v230 + 1];
            v249 = &qword_14D190[BYTE2(v494)];
            LOWORD(v243) = v441;
            v438 = v248;
            v821 = BYTE1(v243);
            v649 = &qword_14E190[(unsigned __int8)v243];
            v318 = (unsigned __int8)v340;
            v784 = v293 + 8 * HIBYTE(v340);
            v250 = *((_DWORD *)v584 - 2);
            v849 = (unsigned __int8)v467;
            v251 = *(_DWORD *)(v137 + 8 * v771 + 4)
                 ^ dword_14C188[2 * HIBYTE(v458) + 1]
                 ^ *((_DWORD *)v336 - 1)
                 ^ *(_DWORD *)(v228 - 4)
                 ^ *(_DWORD *)(v657 + 12)
                 ^ *((_DWORD *)v584 - 1);
            v585 = &qword_14C990[BYTE1(v467)];
            v252 = v250
                 ^ *(_DWORD *)(v137 + 8 * v771)
                 ^ dword_14C188[2 * HIBYTE(v458)]
                 ^ *((_DWORD *)v336 - 2)
                 ^ *(_DWORD *)(v228 - 8)
                 ^ *(_DWORD *)(v657 + 8)
                 ^ dword_14E988[2 * v735];
            v830 = BYTE1(v458);
            v658 = &qword_14E190[(unsigned __int8)v458];
            v446 = v252 ^ dword_14F188[2 * BYTE2(v326)];
            v525 = v251 ^ dword_14E988[2 * v735 + 1] ^ dword_14F188[2 * BYTE2(v326) + 1];
            v327 = BYTE1(v475);
            v253 = *((_DWORD *)v534 - 2)
                 ^ *(_DWORD *)(v137 + 8 * v789)
                 ^ dword_14C188[2 * HIBYTE(v475)]
                 ^ *(_DWORD *)(HIDWORD(v228) - 8);
            v254 = *(_DWORD *)(v137 + 8 * v789 + 4)
                 ^ dword_14C188[2 * HIBYTE(v475) + 1]
                 ^ *((_DWORD *)v534 - 1)
                 ^ *(_DWORD *)(HIDWORD(v228) - 4);
            v728 = &qword_14E190[(unsigned __int8)v475];
            v337 = (unsigned __int8)v494;
            v535 = &qword_14C990[BYTE1(v494)];
            v796 = BYTE1(v503);
            v736 = &qword_14E190[(unsigned __int8)v503];
            v455 = *((_DWORD *)v595 - 2)
                 ^ v253
                 ^ *(_DWORD *)(v665 + 8)
                 ^ dword_14E988[2 * v236]
                 ^ dword_14F188[2 * v235];
            v255 = *(v610 - 1);
            v472 = *(_DWORD *)(v665 + 12)
                 ^ v254
                 ^ *((_DWORD *)v595 - 1)
                 ^ dword_14E988[2 * v236 + 1]
                 ^ dword_14F188[2 * v235 + 1];
            v256 = dword_14C188[2 * HIBYTE(v503)] ^ *(_DWORD *)(v137 + 8 * v800) ^ *((_DWORD *)v356 - 2);
            v257 = dword_14C188[2 * HIBYTE(v503) + 1] ^ *(_DWORD *)(v137 + 8 * v800 + 4) ^ *((_DWORD *)v356 - 1);
            v258 = *((_DWORD *)v602 - 2);
            v259 = *((_DWORD *)v602 - 1);
            v357 = (unsigned __int8)v511;
            v603 = &qword_14C990[BYTE1(v511)];
            v611 = &qword_14D190[BYTE2(v343)];
            v260 = BYTE2(v291);
            v666 = &qword_14C990[BYTE1(v522)];
            LODWORD(v255) = v255 ^ v256 ^ v258 ^ *(_DWORD *)(v673 + 8) ^ dword_14E988[2 * v809];
            HIDWORD(v255) ^= v257 ^ v259 ^ *(_DWORD *)(v673 + 12) ^ dword_14E988[2 * v809 + 1];
            v674 = &qword_14D190[BYTE2(v482)];
            v743 = &qword_14C990[BYTE1(v482)];
            v261 = &dword_14F188[2 * v314];
            v464 = v255 ^ dword_14F188[2 * v813];
            v341 = BYTE1(v518);
            v480 = HIDWORD(v255) ^ dword_14F188[2 * v813 + 1];
            v765 = &qword_14E190[(unsigned __int8)v518];
            v315 = BYTE2(v347);
            HIDWORD(v255) = *(_DWORD *)(v684 + 12);
            v348 = BYTE1(v347);
            v262 = dword_14C188[2 * v818]
                 ^ *(_DWORD *)(v137 + 8 * v245)
                 ^ *((_DWORD *)v577 - 2)
                 ^ *((_DWORD *)v249 - 2)
                 ^ *(_DWORD *)(v684 + 8);
            v685 = &qword_14C990[BYTE1(v343)];
            v263 = *(_DWORD *)(v137 + 8 * v245 + 4)
                 ^ dword_14C188[2 * v818 + 1]
                 ^ *((_DWORD *)v577 - 1)
                 ^ *((_DWORD *)v249 - 1)
                 ^ HIDWORD(v255)
                 ^ *((_DWORD *)v628 - 1);
            v264 = v262 ^ *((_DWORD *)v628 - 2);
            v629 = &qword_14D190[BYTE2(v307)];
            v772 = &qword_14C990[BYTE1(v307)];
            v492 = v264 ^ dword_14E988[2 * v821] ^ *v261;
            HIDWORD(v255) = (unsigned __int8)v291;
            v292 = BYTE1(v291);
            v790 = &qword_14E190[HIDWORD(v255)];
            LODWORD(v228) = dword_14F188[2 * BYTE2(v503)];
            v265 = dword_14F188[2 * BYTE2(v503) + 1];
            v500 = v263 ^ dword_14E988[2 * v821 + 1] ^ v261[1];
            HIDWORD(v255) = dword_14C188[2 * v825 + 1] ^ *(_DWORD *)(v137 + 8 * v318 + 4);
            v266 = *(_DWORD *)(v137 + 8 * v318) ^ dword_14C188[2 * v825];
            v308 = BYTE2(v488);
            v319 = BYTE1(v488);
            LODWORD(v255) = &qword_14D190[BYTE2(v511)];
            v507 = *(_DWORD *)(v693 + 12)
                 ^ HIDWORD(v255)
                 ^ *((_DWORD *)v585 - 1)
                 ^ *(_DWORD *)(v255 - 4)
                 ^ *((_DWORD *)v700 - 1)
                 ^ dword_14E988[2 * v830 + 1]
                 ^ v265;
            v487 = v266
                 ^ *((_DWORD *)v585 - 2)
                 ^ *(_DWORD *)(v255 - 8)
                 ^ *(_DWORD *)(v693 + 8)
                 ^ *((_DWORD *)v700 - 2)
                 ^ dword_14E988[2 * v830]
                 ^ v228;
            LODWORD(v228) = &dword_14E988[2 * BYTE1(v518)];
            v636 = (_DWORD *)(v137 + 8 * (unsigned __int8)v522);
            v516 = *(_QWORD *)&dword_14C188[2 * v844]
                 ^ *(_QWORD *)(v137 + 8 * v839)
                 ^ *(v535 - 1)
                 ^ qword_14D190[BYTE2(v522) - 1]
                 ^ *(_QWORD *)(v706 + 8)
                 ^ *(v649 - 1)
                 ^ *(_QWORD *)&dword_14E988[2 * v327]
                 ^ *(_QWORD *)&dword_14F188[2 * BYTE2(v518)];
            v694 = (_DWORD *)(v137 + 8 * (unsigned __int8)v343);
            v267 = *(_DWORD *)(v137 + 8 * v337 + 4) ^ dword_14C188[2 * v545 + 1];
            v268 = *(_DWORD *)(v137 + 8 * v337) ^ dword_14C188[2 * v545];
            v531 = dword_14C188[2 * v853 + 1]
                 ^ *(_DWORD *)(v137 + 8 * v849 + 4)
                 ^ *((_DWORD *)v603 - 1)
                 ^ *((_DWORD *)v611 - 1)
                 ^ *(_DWORD *)(v712 + 12)
                 ^ *((_DWORD *)v658 - 1)
                 ^ dword_14E988[2 * v796 + 1]
                 ^ dword_14F188[2 * v260 + 1];
            v333 = *(_DWORD *)(v137 + 8 * v849)
                 ^ dword_14C188[2 * v853]
                 ^ *((_DWORD *)v603 - 2)
                 ^ *((_DWORD *)v611 - 2)
                 ^ *(_DWORD *)(v712 + 8)
                 ^ *((_DWORD *)v658 - 2)
                 ^ dword_14E988[2 * v796]
                 ^ dword_14F188[2 * v260];
            HIDWORD(v228) = dword_14C188[2 * v552] ^ *(_DWORD *)(v137 + 8 * v357);
            v578 = dword_14E988[2 * v292 + 1];
            v269 = *(_DWORD *)(v137 + 8 * v357 + 4) ^ dword_14C188[2 * v552 + 1];
            v270 = v267
                 ^ *((_DWORD *)v666 - 1)
                 ^ *((_DWORD *)v674 - 1)
                 ^ *(_DWORD *)(v722 + 12)
                 ^ *((_DWORD *)v728 - 1)
                 ^ *(_DWORD *)(v228 + 4);
            v553 = dword_14E988[2 * v292];
            v271 = HIDWORD(v228)
                 ^ *((_DWORD *)v685 - 2)
                 ^ *((_DWORD *)v629 - 2)
                 ^ *(_DWORD *)(v298 + 8)
                 ^ *((_DWORD *)v736 - 2);
            v586 = dword_14F188[2 * v308];
            v272 = *v636
                 ^ dword_14C188[2 * v558]
                 ^ *((_DWORD *)v743 - 2)
                 ^ *((_DWORD *)v750 - 2)
                 ^ *(_DWORD *)(v757 + 8)
                 ^ *((_DWORD *)v765 - 2)
                 ^ dword_14E988[2 * v348];
            v273 = dword_14F188[2 * v387];
            v352 = v636[1]
                 ^ dword_14C188[2 * v558 + 1]
                 ^ *((_DWORD *)v743 - 1)
                 ^ *((_DWORD *)v750 - 1)
                 ^ *(_DWORD *)(v757 + 12)
                 ^ *((_DWORD *)v765 - 1)
                 ^ dword_14E988[2 * v348 + 1]
                 ^ dword_14F188[2 * v387 + 1];
            v136 = dword_14C188[2 * v564]
                 ^ *v694
                 ^ *((_DWORD *)v772 - 2)
                 ^ *((_DWORD *)v778 - 2)
                 ^ *(_DWORD *)(v784 + 8)
                 ^ *((_DWORD *)v790 - 2)
                 ^ dword_14E988[2 * v319]
                 ^ dword_14F188[2 * v372];
            v290 = v270 ^ dword_14F188[2 * v315 + 1];
            v138 = v694[1]
                 ^ dword_14C188[2 * v564 + 1]
                 ^ *((_DWORD *)v772 - 1)
                 ^ *((_DWORD *)v778 - 1)
                 ^ *(_DWORD *)(v784 + 12)
                 ^ *((_DWORD *)v790 - 1)
                 ^ dword_14E988[2 * v319 + 1]
                 ^ dword_14F188[2 * v372 + 1];
            v134 = *((_DWORD *)v674 - 2)
                 ^ v268
                 ^ *((_DWORD *)v666 - 2)
                 ^ *(_DWORD *)(v722 + 8)
                 ^ *((_DWORD *)v728 - 2)
                 ^ dword_14E988[2 * v341]
                 ^ dword_14F188[2 * v315];
            v296 = v269
                 ^ *((_DWORD *)v685 - 1)
                 ^ *((_DWORD *)v629 - 1)
                 ^ *(_DWORD *)(v298 + 12)
                 ^ *((_DWORD *)v736 - 1)
                 ^ v578
                 ^ dword_14F188[2 * v308 + 1];
            v304 = v272 ^ v273;
            v135 = v271 ^ v553 ^ v586;
          }
          while ( v288 != 0xF1FFFFFFFFFFFFFFLL );
          v7 = v137;
          v274 = v378;
          v275 = &v887;
          v918 = v391;
          v276 = &v918;
          v916 = v378;
          v919 = v396;
          v917 = v540;
          v920 = v402;
          v921 = v412;
          v922 = v421;
          v923 = v428;
          v924 = v438;
          v925 = v567;
          v926 = v446;
          v927 = v525;
          v928 = v455;
          v929 = v472;
          v930 = v464;
          v931 = v480;
          v939 = v134;
          v932 = v492;
          v940 = v290;
          v933 = v500;
          v942 = v296;
          v943 = v272 ^ v273;
          v277 = v540;
          v934 = v487;
          v945 = v136;
          v946 = v138;
          v935 = v507;
          v941 = v271 ^ v553 ^ v586;
          v944 = v352;
          v936 = v516;
          v278 = v883;
          v279 = v612;
          v937 = v333;
          v938 = v531;
          while ( 1 )
          {
            v282 = *(_DWORD *)(v278 + 8);
            v278 += 8;
            v283 = *(_DWORD *)(v278 + 4);
            *(_DWORD *)v278 = v282 ^ v279 ^ v274;
            *(_DWORD *)(v278 + 4) = v283 ^ v277 ^ HIDWORD(v279);
            if ( &dest[120] == (_BYTE *)v278 )
              break;
            v280 = *v275;
            v276 += 2;
            v281 = v275[1];
            v275 += 2;
            v274 = *(v276 - 2);
            v277 = *(v276 - 1);
            v279 = __PAIR64__(v281, v280);
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
