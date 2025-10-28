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
  int v187; // r4
  unsigned int v188; // r3
  int v189; // r1
  int v190; // r2
  int v191; // r7
  unsigned int v192; // r2
  int v193; // lr
  int v194; // r3
  int v195; // lr
  int v196; // r0
  int v197; // r6
  unsigned int v198; // r0
  unsigned int v199; // r2
  __int64 v200; // r6
  _QWORD *v201; // r12
  _QWORD *v202; // r1
  _QWORD *v203; // r4
  int v204; // r3
  _QWORD *v205; // r0
  int v206; // r2
  int v207; // r3
  int v208; // r2
  int v209; // r9
  int v210; // r10
  int v211; // r2
  int v212; // r5
  int v213; // r12
  int v214; // r9
  _QWORD *v215; // r0
  int v216; // r8
  int v217; // r3
  _QWORD *v218; // r0
  _QWORD *v219; // r2
  int v220; // r5
  int v221; // r12
  int v222; // lr
  int v223; // r3
  int v224; // r8
  __int64 v225; // r6
  int v226; // r1
  int v227; // r8
  int v228; // r1
  int v229; // r10
  int v230; // r1
  int v231; // r3
  int v232; // r10
  int v233; // r9
  int v234; // r5
  int v235; // r0
  int v236; // r0
  int v237; // r5
  int v238; // lr
  _QWORD *v239; // r2
  int v240; // r0
  int v241; // r3
  int v242; // r4
  int v243; // r1
  int v244; // r12
  int v245; // r3
  _QWORD *v246; // r8
  int v247; // r12
  int v248; // r1
  int v249; // r12
  int v250; // r3
  int v251; // lr
  __int64 v252; // r2
  int v253; // r0
  int v254; // lr
  int v255; // r12
  int v256; // r1
  int v257; // r10
  _DWORD *v258; // r1
  int v259; // lr
  int v260; // r5
  int v261; // lr
  int v262; // r12
  int v263; // r1
  int v264; // r8
  int v265; // r5
  int v266; // r0
  int v267; // r10
  int v268; // r7
  int v269; // r4
  int v270; // r6
  int v271; // r5
  int *v272; // r0
  int *v273; // r1
  int v274; // r4
  int v275; // r3
  unsigned __int64 v276; // kr48_8
  int v277; // lr
  int v278; // r2
  int v279; // t1
  int v280; // r2
  void *result; // r0
  size_t v283; // r5
  _DWORD *v284; // [sp+0h] [bp-354h]
  __int64 v285; // [sp+0h] [bp-354h]
  __int64 v286; // [sp+8h] [bp-34Ch]
  int v287; // [sp+8h] [bp-34Ch]
  unsigned int v288; // [sp+8h] [bp-34Ch]
  int v289; // [sp+8h] [bp-34Ch]
  unsigned int v290; // [sp+18h] [bp-33Ch]
  unsigned int v291; // [sp+18h] [bp-33Ch]
  int v292; // [sp+18h] [bp-33Ch]
  int v293; // [sp+18h] [bp-33Ch]
  _QWORD *v294; // [sp+18h] [bp-33Ch]
  int v295; // [sp+1Ch] [bp-338h]
  unsigned int v296; // [sp+1Ch] [bp-338h]
  unsigned int v297; // [sp+1Ch] [bp-338h]
  int v298; // [sp+1Ch] [bp-338h]
  _QWORD *v299; // [sp+1Ch] [bp-338h]
  int v300; // [sp+1Ch] [bp-338h]
  unsigned int v301; // [sp+1Ch] [bp-338h]
  _QWORD *v302; // [sp+1Ch] [bp-338h]
  unsigned int v303; // [sp+1Ch] [bp-338h]
  int v304; // [sp+1Ch] [bp-338h]
  unsigned __int64 v305; // [sp+20h] [bp-334h]
  unsigned int v306; // [sp+20h] [bp-334h]
  _QWORD *v307; // [sp+20h] [bp-334h]
  unsigned int v308; // [sp+20h] [bp-334h]
  _QWORD *v309; // [sp+20h] [bp-334h]
  int v310; // [sp+20h] [bp-334h]
  int v311; // [sp+20h] [bp-334h]
  unsigned int v312; // [sp+24h] [bp-330h]
  unsigned int v313; // [sp+24h] [bp-330h]
  int v314; // [sp+24h] [bp-330h]
  int v315; // [sp+24h] [bp-330h]
  int v316; // [sp+28h] [bp-32Ch]
  unsigned int v317; // [sp+28h] [bp-32Ch]
  int v318; // [sp+28h] [bp-32Ch]
  unsigned int v319; // [sp+28h] [bp-32Ch]
  int v320; // [sp+28h] [bp-32Ch]
  int v321; // [sp+28h] [bp-32Ch]
  unsigned int v322; // [sp+28h] [bp-32Ch]
  int v323; // [sp+28h] [bp-32Ch]
  unsigned int v324; // [sp+2Ch] [bp-328h]
  int v325; // [sp+2Ch] [bp-328h]
  unsigned int v326; // [sp+2Ch] [bp-328h]
  int v327; // [sp+2Ch] [bp-328h]
  int v328; // [sp+2Ch] [bp-328h]
  int v329; // [sp+2Ch] [bp-328h]
  unsigned int v330; // [sp+2Ch] [bp-328h]
  unsigned int v331; // [sp+2Ch] [bp-328h]
  _QWORD *v332; // [sp+2Ch] [bp-328h]
  int v333; // [sp+2Ch] [bp-328h]
  __int64 v334; // [sp+30h] [bp-324h]
  unsigned int v335; // [sp+30h] [bp-324h]
  unsigned int v336; // [sp+30h] [bp-324h]
  int v337; // [sp+30h] [bp-324h]
  unsigned int v338; // [sp+34h] [bp-320h]
  unsigned int v339; // [sp+34h] [bp-320h]
  unsigned int v340; // [sp+38h] [bp-31Ch]
  unsigned int v341; // [sp+38h] [bp-31Ch]
  unsigned int v342; // [sp+38h] [bp-31Ch]
  unsigned int v343; // [sp+38h] [bp-31Ch]
  int v344; // [sp+38h] [bp-31Ch]
  unsigned int v345; // [sp+3Ch] [bp-318h]
  unsigned int v346; // [sp+3Ch] [bp-318h]
  int v347; // [sp+3Ch] [bp-318h]
  int v348; // [sp+3Ch] [bp-318h]
  unsigned int v349; // [sp+3Ch] [bp-318h]
  unsigned int v350; // [sp+3Ch] [bp-318h]
  _QWORD *v351; // [sp+3Ch] [bp-318h]
  _QWORD *v352; // [sp+3Ch] [bp-318h]
  int v353; // [sp+3Ch] [bp-318h]
  unsigned int v354; // [sp+40h] [bp-314h]
  unsigned int v355; // [sp+40h] [bp-314h]
  int v356; // [sp+40h] [bp-314h]
  int v357; // [sp+40h] [bp-314h]
  _QWORD *v358; // [sp+40h] [bp-314h]
  unsigned int v359; // [sp+40h] [bp-314h]
  int v360; // [sp+40h] [bp-314h]
  unsigned int v361; // [sp+40h] [bp-314h]
  _QWORD *v362; // [sp+40h] [bp-314h]
  int v363; // [sp+44h] [bp-310h]
  unsigned int v364; // [sp+44h] [bp-310h]
  unsigned int v365; // [sp+44h] [bp-310h]
  int v366; // [sp+44h] [bp-310h]
  unsigned int v367; // [sp+44h] [bp-310h]
  int v368; // [sp+44h] [bp-310h]
  int v369; // [sp+48h] [bp-30Ch]
  unsigned int v370; // [sp+48h] [bp-30Ch]
  unsigned int v371; // [sp+48h] [bp-30Ch]
  int v372; // [sp+48h] [bp-30Ch]
  int v373; // [sp+48h] [bp-30Ch]
  int v374; // [sp+48h] [bp-30Ch]
  unsigned int v375; // [sp+48h] [bp-30Ch]
  unsigned int v376; // [sp+48h] [bp-30Ch]
  int v377; // [sp+4Ch] [bp-308h]
  unsigned int v378; // [sp+4Ch] [bp-308h]
  unsigned int v379; // [sp+4Ch] [bp-308h]
  int v380; // [sp+4Ch] [bp-308h]
  unsigned int v381; // [sp+4Ch] [bp-308h]
  unsigned int v382; // [sp+4Ch] [bp-308h]
  int v383; // [sp+4Ch] [bp-308h]
  int v384; // [sp+50h] [bp-304h]
  unsigned int v385; // [sp+50h] [bp-304h]
  __int64 v386; // [sp+50h] [bp-304h]
  int v387; // [sp+50h] [bp-304h]
  unsigned int v388; // [sp+50h] [bp-304h]
  unsigned int v389; // [sp+50h] [bp-304h]
  int v390; // [sp+54h] [bp-300h]
  unsigned int v391; // [sp+54h] [bp-300h]
  int v392; // [sp+54h] [bp-300h]
  unsigned int v393; // [sp+54h] [bp-300h]
  unsigned int v394; // [sp+54h] [bp-300h]
  unsigned int v395; // [sp+58h] [bp-2FCh]
  unsigned int v396; // [sp+58h] [bp-2FCh]
  int v397; // [sp+58h] [bp-2FCh]
  int v398; // [sp+58h] [bp-2FCh]
  unsigned int v399; // [sp+58h] [bp-2FCh]
  unsigned int v400; // [sp+58h] [bp-2FCh]
  int v401; // [sp+5Ch] [bp-2F8h]
  unsigned int v402; // [sp+5Ch] [bp-2F8h]
  int v403; // [sp+5Ch] [bp-2F8h]
  int v404; // [sp+5Ch] [bp-2F8h]
  unsigned int v405; // [sp+5Ch] [bp-2F8h]
  int v406; // [sp+5Ch] [bp-2F8h]
  int v407; // [sp+5Ch] [bp-2F8h]
  int v408; // [sp+5Ch] [bp-2F8h]
  unsigned int v409; // [sp+5Ch] [bp-2F8h]
  unsigned int v410; // [sp+5Ch] [bp-2F8h]
  int v411; // [sp+60h] [bp-2F4h]
  unsigned int v412; // [sp+60h] [bp-2F4h]
  _QWORD *v413; // [sp+60h] [bp-2F4h]
  _QWORD *v414; // [sp+60h] [bp-2F4h]
  unsigned int v415; // [sp+60h] [bp-2F4h]
  _QWORD *v416; // [sp+60h] [bp-2F4h]
  int v417; // [sp+60h] [bp-2F4h]
  unsigned int v418; // [sp+60h] [bp-2F4h]
  unsigned int v419; // [sp+60h] [bp-2F4h]
  _QWORD *v420; // [sp+64h] [bp-2F0h]
  int v421; // [sp+64h] [bp-2F0h]
  unsigned int v422; // [sp+64h] [bp-2F0h]
  int v423; // [sp+64h] [bp-2F0h]
  int v424; // [sp+64h] [bp-2F0h]
  unsigned int v425; // [sp+64h] [bp-2F0h]
  unsigned int v426; // [sp+64h] [bp-2F0h]
  int v427; // [sp+68h] [bp-2ECh]
  unsigned int v428; // [sp+68h] [bp-2ECh]
  int v429; // [sp+68h] [bp-2ECh]
  _QWORD *v430; // [sp+68h] [bp-2ECh]
  unsigned int v431; // [sp+68h] [bp-2ECh]
  int v432; // [sp+68h] [bp-2ECh]
  int v433; // [sp+68h] [bp-2ECh]
  int v434; // [sp+68h] [bp-2ECh]
  unsigned int v435; // [sp+68h] [bp-2ECh]
  int v436; // [sp+68h] [bp-2ECh]
  unsigned int v437; // [sp+68h] [bp-2ECh]
  unsigned int v438; // [sp+6Ch] [bp-2E8h]
  int v439; // [sp+6Ch] [bp-2E8h]
  unsigned int v440; // [sp+6Ch] [bp-2E8h]
  int v441; // [sp+6Ch] [bp-2E8h]
  int v442; // [sp+6Ch] [bp-2E8h]
  unsigned int v443; // [sp+6Ch] [bp-2E8h]
  _QWORD *v444; // [sp+6Ch] [bp-2E8h]
  unsigned int v445; // [sp+6Ch] [bp-2E8h]
  unsigned int v446; // [sp+70h] [bp-2E4h]
  _QWORD *v447; // [sp+70h] [bp-2E4h]
  unsigned int v448; // [sp+70h] [bp-2E4h]
  int v449; // [sp+70h] [bp-2E4h]
  int v450; // [sp+70h] [bp-2E4h]
  int v451; // [sp+70h] [bp-2E4h]
  unsigned int v452; // [sp+70h] [bp-2E4h]
  int v453; // [sp+70h] [bp-2E4h]
  unsigned int v454; // [sp+70h] [bp-2E4h]
  int v455; // [sp+74h] [bp-2E0h]
  unsigned int v456; // [sp+74h] [bp-2E0h]
  int v457; // [sp+74h] [bp-2E0h]
  _QWORD *v458; // [sp+74h] [bp-2E0h]
  unsigned int v459; // [sp+74h] [bp-2E0h]
  int v460; // [sp+74h] [bp-2E0h]
  int v461; // [sp+74h] [bp-2E0h]
  int v462; // [sp+74h] [bp-2E0h]
  unsigned int v463; // [sp+74h] [bp-2E0h]
  int v464; // [sp+78h] [bp-2DCh]
  unsigned int v465; // [sp+78h] [bp-2DCh]
  int v466; // [sp+78h] [bp-2DCh]
  unsigned int v467; // [sp+78h] [bp-2DCh]
  int v468; // [sp+78h] [bp-2DCh]
  unsigned int v469; // [sp+78h] [bp-2DCh]
  int v470; // [sp+78h] [bp-2DCh]
  unsigned int v471; // [sp+78h] [bp-2DCh]
  int v472; // [sp+7Ch] [bp-2D8h]
  unsigned int v473; // [sp+7Ch] [bp-2D8h]
  int v474; // [sp+7Ch] [bp-2D8h]
  unsigned int v475; // [sp+7Ch] [bp-2D8h]
  int v476; // [sp+7Ch] [bp-2D8h]
  unsigned int v477; // [sp+7Ch] [bp-2D8h]
  unsigned int v478; // [sp+7Ch] [bp-2D8h]
  int v479; // [sp+80h] [bp-2D4h]
  unsigned int v480; // [sp+80h] [bp-2D4h]
  unsigned int v481; // [sp+80h] [bp-2D4h]
  int v482; // [sp+80h] [bp-2D4h]
  int v483; // [sp+80h] [bp-2D4h]
  unsigned int v484; // [sp+80h] [bp-2D4h]
  int v485; // [sp+84h] [bp-2D0h]
  unsigned int v486; // [sp+84h] [bp-2D0h]
  unsigned int v487; // [sp+84h] [bp-2D0h]
  int v488; // [sp+84h] [bp-2D0h]
  _QWORD *v489; // [sp+84h] [bp-2D0h]
  unsigned int v490; // [sp+84h] [bp-2D0h]
  __int64 v491; // [sp+88h] [bp-2CCh]
  int v492; // [sp+88h] [bp-2CCh]
  int v493; // [sp+88h] [bp-2CCh]
  int v494; // [sp+88h] [bp-2CCh]
  unsigned int v495; // [sp+88h] [bp-2CCh]
  int v496; // [sp+88h] [bp-2CCh]
  unsigned int v497; // [sp+88h] [bp-2CCh]
  int v498; // [sp+88h] [bp-2CCh]
  unsigned int v499; // [sp+88h] [bp-2CCh]
  int v500; // [sp+8Ch] [bp-2C8h]
  int v501; // [sp+8Ch] [bp-2C8h]
  unsigned int v502; // [sp+8Ch] [bp-2C8h]
  int v503; // [sp+8Ch] [bp-2C8h]
  unsigned int v504; // [sp+8Ch] [bp-2C8h]
  _QWORD *v505; // [sp+8Ch] [bp-2C8h]
  int v506; // [sp+8Ch] [bp-2C8h]
  unsigned int v507; // [sp+8Ch] [bp-2C8h]
  int v508; // [sp+90h] [bp-2C4h]
  int v509; // [sp+90h] [bp-2C4h]
  int v510; // [sp+90h] [bp-2C4h]
  int v511; // [sp+90h] [bp-2C4h]
  __int64 v512; // [sp+90h] [bp-2C4h]
  int v513; // [sp+90h] [bp-2C4h]
  unsigned int v514; // [sp+90h] [bp-2C4h]
  int v515; // [sp+94h] [bp-2C0h]
  int v516; // [sp+94h] [bp-2C0h]
  int v517; // [sp+94h] [bp-2C0h]
  unsigned int v518; // [sp+94h] [bp-2C0h]
  int v519; // [sp+98h] [bp-2BCh]
  char *v520; // [sp+98h] [bp-2BCh]
  int v521; // [sp+98h] [bp-2BCh]
  unsigned int v522; // [sp+98h] [bp-2BCh]
  _QWORD *v523; // [sp+98h] [bp-2BCh]
  int v524; // [sp+98h] [bp-2BCh]
  int v525; // [sp+98h] [bp-2BCh]
  int v526; // [sp+9Ch] [bp-2B8h]
  int v527; // [sp+9Ch] [bp-2B8h]
  int v528; // [sp+9Ch] [bp-2B8h]
  int v529; // [sp+9Ch] [bp-2B8h]
  _QWORD *v530; // [sp+9Ch] [bp-2B8h]
  _QWORD *v531; // [sp+9Ch] [bp-2B8h]
  int v532; // [sp+A0h] [bp-2B4h]
  unsigned int v533; // [sp+A0h] [bp-2B4h]
  int v534; // [sp+A0h] [bp-2B4h]
  unsigned int v535; // [sp+A0h] [bp-2B4h]
  int v536; // [sp+A0h] [bp-2B4h]
  unsigned int v537; // [sp+A0h] [bp-2B4h]
  int v538; // [sp+A4h] [bp-2B0h]
  unsigned int v539; // [sp+A4h] [bp-2B0h]
  unsigned int v540; // [sp+A4h] [bp-2B0h]
  unsigned int v541; // [sp+A4h] [bp-2B0h]
  int v542; // [sp+A8h] [bp-2ACh]
  _QWORD *v543; // [sp+A8h] [bp-2ACh]
  _QWORD *v544; // [sp+A8h] [bp-2ACh]
  int v545; // [sp+A8h] [bp-2ACh]
  int v546; // [sp+A8h] [bp-2ACh]
  unsigned int v547; // [sp+A8h] [bp-2ACh]
  unsigned int v548; // [sp+A8h] [bp-2ACh]
  int v549; // [sp+A8h] [bp-2ACh]
  int v550; // [sp+ACh] [bp-2A8h]
  unsigned int v551; // [sp+ACh] [bp-2A8h]
  _QWORD *v552; // [sp+ACh] [bp-2A8h]
  int v553; // [sp+ACh] [bp-2A8h]
  unsigned int v554; // [sp+ACh] [bp-2A8h]
  int v555; // [sp+B0h] [bp-2A4h]
  _QWORD *v556; // [sp+B0h] [bp-2A4h]
  _QWORD *v557; // [sp+B0h] [bp-2A4h]
  int v558; // [sp+B0h] [bp-2A4h]
  unsigned int v559; // [sp+B0h] [bp-2A4h]
  unsigned int v560; // [sp+B0h] [bp-2A4h]
  _QWORD *v561; // [sp+B4h] [bp-2A0h]
  int v562; // [sp+B4h] [bp-2A0h]
  int v563; // [sp+B4h] [bp-2A0h]
  _QWORD *v564; // [sp+B4h] [bp-2A0h]
  _QWORD *v565; // [sp+B4h] [bp-2A0h]
  _QWORD *v566; // [sp+B4h] [bp-2A0h]
  int v567; // [sp+B4h] [bp-2A0h]
  _QWORD *v568; // [sp+B8h] [bp-29Ch]
  int v569; // [sp+B8h] [bp-29Ch]
  unsigned int v570; // [sp+B8h] [bp-29Ch]
  int v571; // [sp+B8h] [bp-29Ch]
  int v572; // [sp+B8h] [bp-29Ch]
  _QWORD *v573; // [sp+B8h] [bp-29Ch]
  _QWORD *v574; // [sp+B8h] [bp-29Ch]
  int v575; // [sp+B8h] [bp-29Ch]
  unsigned int v576; // [sp+BCh] [bp-298h]
  unsigned int v577; // [sp+BCh] [bp-298h]
  _QWORD *v578; // [sp+BCh] [bp-298h]
  _QWORD *v579; // [sp+BCh] [bp-298h]
  _QWORD *v580; // [sp+BCh] [bp-298h]
  _QWORD *v581; // [sp+BCh] [bp-298h]
  _QWORD *v582; // [sp+BCh] [bp-298h]
  int v583; // [sp+BCh] [bp-298h]
  _QWORD *v584; // [sp+C0h] [bp-294h]
  int v585; // [sp+C0h] [bp-294h]
  int v586; // [sp+C0h] [bp-294h]
  int v587; // [sp+C0h] [bp-294h]
  _QWORD *v588; // [sp+C0h] [bp-294h]
  _QWORD *v589; // [sp+C0h] [bp-294h]
  _QWORD *v590; // [sp+C0h] [bp-294h]
  int v591; // [sp+C0h] [bp-294h]
  _QWORD *v592; // [sp+C0h] [bp-294h]
  int v593; // [sp+C4h] [bp-290h]
  int v594; // [sp+C4h] [bp-290h]
  unsigned int v595; // [sp+C4h] [bp-290h]
  _QWORD *v596; // [sp+C4h] [bp-290h]
  _QWORD *v597; // [sp+C4h] [bp-290h]
  _QWORD *v598; // [sp+C4h] [bp-290h]
  _QWORD *v599; // [sp+C4h] [bp-290h]
  _QWORD *v600; // [sp+C4h] [bp-290h]
  _QWORD *v601; // [sp+C8h] [bp-28Ch]
  int v602; // [sp+C8h] [bp-28Ch]
  _QWORD *v603; // [sp+C8h] [bp-28Ch]
  int v604; // [sp+C8h] [bp-28Ch]
  _QWORD *v605; // [sp+C8h] [bp-28Ch]
  _QWORD *v606; // [sp+C8h] [bp-28Ch]
  _QWORD *v607; // [sp+C8h] [bp-28Ch]
  _QWORD *v608; // [sp+C8h] [bp-28Ch]
  unsigned __int64 v609; // [sp+CCh] [bp-288h]
  _QWORD *v610; // [sp+CCh] [bp-288h]
  unsigned int v611; // [sp+CCh] [bp-288h]
  _QWORD *v612; // [sp+D0h] [bp-284h]
  _QWORD *v613; // [sp+D0h] [bp-284h]
  int v614; // [sp+D0h] [bp-284h]
  _QWORD *v615; // [sp+D0h] [bp-284h]
  int v616; // [sp+D4h] [bp-280h]
  int v617; // [sp+D4h] [bp-280h]
  unsigned int v618; // [sp+D4h] [bp-280h]
  _QWORD *v619; // [sp+D4h] [bp-280h]
  int v620; // [sp+D4h] [bp-280h]
  _QWORD *v621; // [sp+D4h] [bp-280h]
  _QWORD *v622; // [sp+D4h] [bp-280h]
  int v623; // [sp+D4h] [bp-280h]
  int v624; // [sp+D4h] [bp-280h]
  _QWORD *v625; // [sp+D4h] [bp-280h]
  _QWORD *v626; // [sp+D4h] [bp-280h]
  int v627; // [sp+D8h] [bp-27Ch]
  int v628; // [sp+D8h] [bp-27Ch]
  _QWORD *v629; // [sp+D8h] [bp-27Ch]
  _QWORD *v630; // [sp+D8h] [bp-27Ch]
  _QWORD *v631; // [sp+D8h] [bp-27Ch]
  _QWORD *v632; // [sp+D8h] [bp-27Ch]
  _DWORD *v633; // [sp+D8h] [bp-27Ch]
  size_t n; // [sp+DCh] [bp-278h]
  int v635; // [sp+E0h] [bp-274h]
  _QWORD *v636; // [sp+E0h] [bp-274h]
  _QWORD *v637; // [sp+E0h] [bp-274h]
  _QWORD *v638; // [sp+E0h] [bp-274h]
  _QWORD *v639; // [sp+E0h] [bp-274h]
  _QWORD *v640; // [sp+E0h] [bp-274h]
  int v641; // [sp+E0h] [bp-274h]
  _QWORD *v642; // [sp+E0h] [bp-274h]
  _QWORD *v643; // [sp+E0h] [bp-274h]
  _QWORD *v644; // [sp+E0h] [bp-274h]
  _QWORD *v645; // [sp+E0h] [bp-274h]
  _QWORD *v646; // [sp+E0h] [bp-274h]
  _QWORD *v647; // [sp+E4h] [bp-270h]
  _QWORD *v648; // [sp+E4h] [bp-270h]
  _QWORD *v649; // [sp+E4h] [bp-270h]
  _QWORD *v650; // [sp+E4h] [bp-270h]
  _QWORD *v651; // [sp+E4h] [bp-270h]
  _QWORD *v652; // [sp+E4h] [bp-270h]
  _QWORD *v653; // [sp+E4h] [bp-270h]
  _QWORD *v654; // [sp+E4h] [bp-270h]
  _QWORD *v655; // [sp+E4h] [bp-270h]
  _QWORD *v656; // [sp+E8h] [bp-26Ch]
  _QWORD *v657; // [sp+E8h] [bp-26Ch]
  _QWORD *v658; // [sp+E8h] [bp-26Ch]
  _QWORD *v659; // [sp+E8h] [bp-26Ch]
  _QWORD *v660; // [sp+E8h] [bp-26Ch]
  _QWORD *v661; // [sp+E8h] [bp-26Ch]
  _QWORD *v662; // [sp+E8h] [bp-26Ch]
  _QWORD *v663; // [sp+E8h] [bp-26Ch]
  _QWORD *v664; // [sp+ECh] [bp-268h]
  _QWORD *v665; // [sp+ECh] [bp-268h]
  _QWORD *v666; // [sp+ECh] [bp-268h]
  _QWORD *v667; // [sp+ECh] [bp-268h]
  _QWORD *v668; // [sp+ECh] [bp-268h]
  _QWORD *v669; // [sp+ECh] [bp-268h]
  _QWORD *v670; // [sp+ECh] [bp-268h]
  _QWORD *v671; // [sp+ECh] [bp-268h]
  int v672; // [sp+F0h] [bp-264h]
  _QWORD *v673; // [sp+F0h] [bp-264h]
  char *v674; // [sp+F0h] [bp-264h]
  int v675; // [sp+F0h] [bp-264h]
  _QWORD *v676; // [sp+F0h] [bp-264h]
  _QWORD *v677; // [sp+F0h] [bp-264h]
  _DWORD *v678; // [sp+F0h] [bp-264h]
  _QWORD *v679; // [sp+F0h] [bp-264h]
  _QWORD *v680; // [sp+F0h] [bp-264h]
  _QWORD *v681; // [sp+F0h] [bp-264h]
  _QWORD *v682; // [sp+F0h] [bp-264h]
  int v683; // [sp+F4h] [bp-260h]
  _QWORD *v684; // [sp+F4h] [bp-260h]
  int *v685; // [sp+F4h] [bp-260h]
  _QWORD *v686; // [sp+F4h] [bp-260h]
  char *v687; // [sp+F4h] [bp-260h]
  _QWORD *v688; // [sp+F4h] [bp-260h]
  _QWORD *v689; // [sp+F4h] [bp-260h]
  _QWORD *v690; // [sp+F4h] [bp-260h]
  _DWORD *v691; // [sp+F4h] [bp-260h]
  _QWORD *v692; // [sp+F8h] [bp-25Ch]
  _QWORD *v693; // [sp+F8h] [bp-25Ch]
  _QWORD *v694; // [sp+F8h] [bp-25Ch]
  _QWORD *v695; // [sp+F8h] [bp-25Ch]
  int v696; // [sp+F8h] [bp-25Ch]
  _QWORD *v697; // [sp+F8h] [bp-25Ch]
  unsigned int v698; // [sp+FCh] [bp-258h]
  _QWORD *v699; // [sp+FCh] [bp-258h]
  _QWORD *v700; // [sp+FCh] [bp-258h]
  _QWORD *v701; // [sp+FCh] [bp-258h]
  _QWORD *v702; // [sp+FCh] [bp-258h]
  _QWORD *v703; // [sp+FCh] [bp-258h]
  int v704; // [sp+100h] [bp-254h]
  _QWORD *v705; // [sp+100h] [bp-254h]
  _QWORD *v706; // [sp+100h] [bp-254h]
  _QWORD *v707; // [sp+100h] [bp-254h]
  int v708; // [sp+100h] [bp-254h]
  _QWORD *v709; // [sp+100h] [bp-254h]
  _QWORD *v710; // [sp+104h] [bp-250h]
  char *v711; // [sp+104h] [bp-250h]
  int v712; // [sp+104h] [bp-250h]
  _QWORD *v713; // [sp+104h] [bp-250h]
  _QWORD *v714; // [sp+104h] [bp-250h]
  int v715; // [sp+104h] [bp-250h]
  int v716; // [sp+104h] [bp-250h]
  int v717; // [sp+104h] [bp-250h]
  _QWORD *v718; // [sp+104h] [bp-250h]
  _QWORD *v719; // [sp+104h] [bp-250h]
  int v720; // [sp+108h] [bp-24Ch]
  _QWORD *v721; // [sp+108h] [bp-24Ch]
  char *v722; // [sp+108h] [bp-24Ch]
  _QWORD *v723; // [sp+108h] [bp-24Ch]
  _QWORD *v724; // [sp+108h] [bp-24Ch]
  _QWORD *v725; // [sp+108h] [bp-24Ch]
  int v726; // [sp+10Ch] [bp-248h]
  _QWORD *v727; // [sp+10Ch] [bp-248h]
  _QWORD *v728; // [sp+10Ch] [bp-248h]
  _QWORD *v729; // [sp+10Ch] [bp-248h]
  _QWORD *v730; // [sp+10Ch] [bp-248h]
  int v731; // [sp+10Ch] [bp-248h]
  int v732; // [sp+10Ch] [bp-248h]
  _QWORD *v733; // [sp+10Ch] [bp-248h]
  int v734; // [sp+110h] [bp-244h]
  _QWORD *v735; // [sp+110h] [bp-244h]
  int v736; // [sp+110h] [bp-244h]
  _QWORD *v737; // [sp+110h] [bp-244h]
  _QWORD *v738; // [sp+110h] [bp-244h]
  _QWORD *v739; // [sp+110h] [bp-244h]
  _QWORD *v740; // [sp+110h] [bp-244h]
  _QWORD *v741; // [sp+114h] [bp-240h]
  int v742; // [sp+114h] [bp-240h]
  _QWORD *v743; // [sp+114h] [bp-240h]
  _QWORD *v744; // [sp+114h] [bp-240h]
  int v745; // [sp+114h] [bp-240h]
  _QWORD *v746; // [sp+114h] [bp-240h]
  _QWORD *v747; // [sp+114h] [bp-240h]
  _QWORD *v748; // [sp+118h] [bp-23Ch]
  _QWORD *v749; // [sp+118h] [bp-23Ch]
  int v750; // [sp+118h] [bp-23Ch]
  int v751; // [sp+118h] [bp-23Ch]
  _QWORD *v752; // [sp+118h] [bp-23Ch]
  int v753; // [sp+118h] [bp-23Ch]
  _QWORD *v754; // [sp+118h] [bp-23Ch]
  unsigned int v755; // [sp+11Ch] [bp-238h]
  _QWORD *v756; // [sp+11Ch] [bp-238h]
  _QWORD *v757; // [sp+11Ch] [bp-238h]
  int v758; // [sp+11Ch] [bp-238h]
  int v759; // [sp+11Ch] [bp-238h]
  int v760; // [sp+11Ch] [bp-238h]
  _QWORD *v761; // [sp+11Ch] [bp-238h]
  _QWORD *v762; // [sp+11Ch] [bp-238h]
  int v763; // [sp+120h] [bp-234h]
  _QWORD *v764; // [sp+120h] [bp-234h]
  _QWORD *v765; // [sp+120h] [bp-234h]
  _QWORD *v766; // [sp+120h] [bp-234h]
  _QWORD *v767; // [sp+120h] [bp-234h]
  int v768; // [sp+120h] [bp-234h]
  _QWORD *v769; // [sp+120h] [bp-234h]
  _QWORD *v770; // [sp+124h] [bp-230h]
  int v771; // [sp+124h] [bp-230h]
  _QWORD *v772; // [sp+124h] [bp-230h]
  int v773; // [sp+124h] [bp-230h]
  _QWORD *v774; // [sp+124h] [bp-230h]
  _QWORD *v775; // [sp+124h] [bp-230h]
  _QWORD *v776; // [sp+128h] [bp-22Ch]
  _QWORD *v777; // [sp+128h] [bp-22Ch]
  _QWORD *v778; // [sp+128h] [bp-22Ch]
  int v779; // [sp+128h] [bp-22Ch]
  int v780; // [sp+128h] [bp-22Ch]
  _QWORD *v781; // [sp+128h] [bp-22Ch]
  _QWORD *v782; // [sp+12Ch] [bp-228h]
  _QWORD *v783; // [sp+12Ch] [bp-228h]
  int v784; // [sp+12Ch] [bp-228h]
  int v785; // [sp+12Ch] [bp-228h]
  int v786; // [sp+12Ch] [bp-228h]
  int v787; // [sp+12Ch] [bp-228h]
  _QWORD *v788; // [sp+12Ch] [bp-228h]
  _QWORD *v789; // [sp+130h] [bp-224h]
  _QWORD *v790; // [sp+130h] [bp-224h]
  int v791; // [sp+130h] [bp-224h]
  int v792; // [sp+130h] [bp-224h]
  int v793; // [sp+130h] [bp-224h]
  int v794; // [sp+130h] [bp-224h]
  _QWORD *v795; // [sp+134h] [bp-220h]
  int v796; // [sp+134h] [bp-220h]
  int v797; // [sp+134h] [bp-220h]
  int v798; // [sp+134h] [bp-220h]
  _QWORD *v799; // [sp+138h] [bp-21Ch]
  _QWORD *v800; // [sp+138h] [bp-21Ch]
  int v801; // [sp+138h] [bp-21Ch]
  int v802; // [sp+13Ch] [bp-218h]
  _QWORD *v803; // [sp+13Ch] [bp-218h]
  int v804; // [sp+13Ch] [bp-218h]
  int v805; // [sp+13Ch] [bp-218h]
  _QWORD *v806; // [sp+13Ch] [bp-218h]
  int v807; // [sp+13Ch] [bp-218h]
  int v808; // [sp+13Ch] [bp-218h]
  int v809; // [sp+140h] [bp-214h]
  _QWORD *v810; // [sp+140h] [bp-214h]
  int v811; // [sp+140h] [bp-214h]
  int v812; // [sp+140h] [bp-214h]
  int v813; // [sp+144h] [bp-210h]
  _QWORD *v814; // [sp+144h] [bp-210h]
  _QWORD *v815; // [sp+144h] [bp-210h]
  int v816; // [sp+144h] [bp-210h]
  unsigned int v817; // [sp+144h] [bp-210h]
  _QWORD *v818; // [sp+148h] [bp-20Ch]
  char *v819; // [sp+148h] [bp-20Ch]
  int v820; // [sp+148h] [bp-20Ch]
  _QWORD *v821; // [sp+14Ch] [bp-208h]
  _QWORD *v822; // [sp+14Ch] [bp-208h]
  unsigned int v823; // [sp+14Ch] [bp-208h]
  unsigned int v824; // [sp+14Ch] [bp-208h]
  int v825; // [sp+150h] [bp-204h]
  _QWORD *v826; // [sp+150h] [bp-204h]
  char *v827; // [sp+150h] [bp-204h]
  unsigned int v828; // [sp+150h] [bp-204h]
  int v829; // [sp+150h] [bp-204h]
  int v830; // [sp+154h] [bp-200h]
  _QWORD *v831; // [sp+154h] [bp-200h]
  _QWORD *v832; // [sp+154h] [bp-200h]
  int v833; // [sp+154h] [bp-200h]
  unsigned int v834; // [sp+158h] [bp-1FCh]
  _QWORD *v835; // [sp+158h] [bp-1FCh]
  char *v836; // [sp+158h] [bp-1FCh]
  unsigned int v837; // [sp+158h] [bp-1FCh]
  int v838; // [sp+158h] [bp-1FCh]
  int v839; // [sp+15Ch] [bp-1F8h]
  _QWORD *v840; // [sp+15Ch] [bp-1F8h]
  _QWORD *v841; // [sp+15Ch] [bp-1F8h]
  int v842; // [sp+15Ch] [bp-1F8h]
  unsigned int v843; // [sp+15Ch] [bp-1F8h]
  int v844; // [sp+160h] [bp-1F4h]
  _QWORD *v845; // [sp+160h] [bp-1F4h]
  _QWORD *v846; // [sp+160h] [bp-1F4h]
  int v847; // [sp+160h] [bp-1F4h]
  int v848; // [sp+160h] [bp-1F4h]
  _QWORD *v849; // [sp+164h] [bp-1F0h]
  char *v850; // [sp+164h] [bp-1F0h]
  unsigned int v851; // [sp+164h] [bp-1F0h]
  unsigned int v852; // [sp+164h] [bp-1F0h]
  int v853; // [sp+168h] [bp-1ECh]
  _QWORD *v854; // [sp+168h] [bp-1ECh]
  _DWORD *v855; // [sp+168h] [bp-1ECh]
  _QWORD *v856; // [sp+16Ch] [bp-1E8h]
  int v857; // [sp+16Ch] [bp-1E8h]
  int v858; // [sp+16Ch] [bp-1E8h]
  _QWORD *v859; // [sp+16Ch] [bp-1E8h]
  unsigned int v860; // [sp+170h] [bp-1E4h]
  _QWORD *v861; // [sp+170h] [bp-1E4h]
  int v862; // [sp+174h] [bp-1E0h]
  _QWORD *v863; // [sp+174h] [bp-1E0h]
  int v864; // [sp+178h] [bp-1DCh]
  _QWORD *v865; // [sp+178h] [bp-1DCh]
  int v866; // [sp+17Ch] [bp-1D8h]
  int v867; // [sp+17Ch] [bp-1D8h]
  char *v868; // [sp+17Ch] [bp-1D8h]
  int v869; // [sp+180h] [bp-1D4h]
  int v870; // [sp+180h] [bp-1D4h]
  _QWORD *v871; // [sp+180h] [bp-1D4h]
  int v872; // [sp+184h] [bp-1D0h]
  _QWORD *v873; // [sp+184h] [bp-1D0h]
  int v874; // [sp+188h] [bp-1CCh]
  int v875; // [sp+18Ch] [bp-1C8h]
  int v876; // [sp+18Ch] [bp-1C8h]
  int v877; // [sp+190h] [bp-1C4h]
  int v878; // [sp+194h] [bp-1C0h]
  unsigned int v879; // [sp+198h] [bp-1BCh]
  char *src; // [sp+1C0h] [bp-194h]
  int v882; // [sp+1C8h] [bp-18Ch] BYREF
  void *v883; // [sp+1CCh] [bp-188h]
  _BYTE dest[128]; // [sp+1D0h] [bp-184h] BYREF
  unsigned __int64 v885; // [sp+250h] [bp-104h]
  int v886; // [sp+258h] [bp-FCh] BYREF
  int v887; // [sp+25Ch] [bp-F8h]
  int v888; // [sp+260h] [bp-F4h]
  int v889; // [sp+264h] [bp-F0h]
  int v890; // [sp+268h] [bp-ECh]
  int v891; // [sp+26Ch] [bp-E8h]
  __int64 v892; // [sp+270h] [bp-E4h]
  int v893; // [sp+278h] [bp-DCh]
  int v894; // [sp+27Ch] [bp-D8h]
  int v895; // [sp+280h] [bp-D4h]
  int v896; // [sp+284h] [bp-D0h]
  int v897; // [sp+288h] [bp-CCh]
  int v898; // [sp+28Ch] [bp-C8h]
  int v899; // [sp+290h] [bp-C4h]
  int v900; // [sp+294h] [bp-C0h]
  int v901; // [sp+298h] [bp-BCh]
  int v902; // [sp+29Ch] [bp-B8h]
  int v903; // [sp+2A0h] [bp-B4h]
  int v904; // [sp+2A4h] [bp-B0h]
  int v905; // [sp+2A8h] [bp-ACh]
  int v906; // [sp+2ACh] [bp-A8h]
  int v907; // [sp+2B0h] [bp-A4h]
  int v908; // [sp+2B4h] [bp-A0h]
  int v909; // [sp+2B8h] [bp-9Ch]
  int v910; // [sp+2BCh] [bp-98h]
  int v911; // [sp+2C0h] [bp-94h]
  int v912; // [sp+2C4h] [bp-90h]
  int v913; // [sp+2C8h] [bp-8Ch] BYREF
  int v914; // [sp+2CCh] [bp-88h]
  int v915; // [sp+2D0h] [bp-84h]
  int v916; // [sp+2D4h] [bp-80h]
  int v917; // [sp+2D8h] [bp-7Ch] BYREF
  int v918; // [sp+2DCh] [bp-78h]
  int v919; // [sp+2E0h] [bp-74h]
  int v920; // [sp+2E4h] [bp-70h]
  int v921; // [sp+2E8h] [bp-6Ch]
  int v922; // [sp+2ECh] [bp-68h]
  int v923; // [sp+2F0h] [bp-64h]
  int v924; // [sp+2F4h] [bp-60h]
  int v925; // [sp+2F8h] [bp-5Ch]
  int v926; // [sp+2FCh] [bp-58h]
  int v927; // [sp+300h] [bp-54h]
  int v928; // [sp+304h] [bp-50h]
  int v929; // [sp+308h] [bp-4Ch]
  int v930; // [sp+30Ch] [bp-48h]
  int v931; // [sp+310h] [bp-44h]
  int v932; // [sp+314h] [bp-40h]
  int v933; // [sp+318h] [bp-3Ch]
  int v934; // [sp+31Ch] [bp-38h]
  __int64 v935; // [sp+320h] [bp-34h]
  int v936; // [sp+328h] [bp-2Ch]
  int v937; // [sp+32Ch] [bp-28h]
  int v938; // [sp+330h] [bp-24h]
  int v939; // [sp+334h] [bp-20h]
  int v940; // [sp+338h] [bp-1Ch]
  int v941; // [sp+33Ch] [bp-18h]
  int v942; // [sp+340h] [bp-14h]
  int v943; // [sp+344h] [bp-10h]
  int v944; // [sp+348h] [bp-Ch] BYREF
  int v945; // [sp+34Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 128);
  v4 = 128 - v3;
  n = a3;
  src = a2;
  if ( 128 - v3 > a3 )
  {
    v283 = v3 + a3;
    result = memcpy((void *)(a1 + v3), a2, a3);
    *(_DWORD *)(a1 + 128) = v283;
  }
  else
  {
    v883 = (void *)(a1 + 136);
    memcpy(dest, (const void *)(a1 + 136), sizeof(dest));
    if ( n )
    {
      v5 = &unk_15A290;
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
          v882 = (int)&v882;
          v8 = &v882;
          v9 = a1 - 8;
          v10 = &v913;
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
          while ( &v944 != v10 );
          v286 = 0;
          v515 = v886;
          v485 = v887;
          v519 = v888;
          v526 = v889;
          v616 = v890;
          v627 = v891;
          v491 = v892;
          v508 = v893;
          v532 = v894;
          v455 = v895;
          v464 = v896;
          v316 = v897;
          v377 = v898;
          v472 = v899;
          v538 = v900;
          v16 = v911;
          v17 = v913;
          v284 = v5;
          v363 = v901;
          v555 = v914;
          v542 = v902;
          v295 = v903;
          v411 = v904;
          v369 = v905;
          v384 = v906;
          v390 = v907;
          v401 = v908;
          v427 = v909;
          v479 = v910;
          v550 = v912;
          v609 = v885;
          do
          {
            v305 = v609 ^ v286;
            v395 = v485 ^ ((unsigned __int64)(v286 + 16) >> 32);
            v324 = v627 ^ ((unsigned __int64)(v286 + 48) >> 32);
            v334 = v491 ^ (v286 + 64);
            v290 = ((unsigned __int64)(v286 + 80) >> 32) ^ v532;
            v18 = v455 ^ (v286 + 96);
            v19 = ((unsigned __int64)(v286 + 96) >> 32) ^ v464;
            v340 = v316 ^ (v286 + 112);
            v345 = v377 ^ ((unsigned __int64)(v286 + 112) >> 32);
            v354 = v472 ^ (v286 + 128);
            v438 = v538 ^ ((unsigned __int64)(v286 + 128) >> 32);
            v446 = v363 ^ (v286 + 144);
            v456 = v295 ^ (v286 + 160);
            v370 = v369 ^ (v286 + 176);
            v20 = v384 ^ ((unsigned __int64)(v286 + 176) >> 32);
            v21 = v390;
            v391 = (v286 + 240) ^ v17;
            v378 = v21 ^ (v286 + 192);
            v22 = v401 ^ ((unsigned __int64)(v286 + 192) >> 32);
            v385 = v427 ^ (v286 + 208);
            v23 = v479;
            v480 = (v286 + 224) ^ v16;
            v473 = v23 ^ ((unsigned __int64)(v286 + 208) >> 32);
            v24 = v550 ^ ((unsigned __int64)(v286 + 224) >> 32);
            v486 = v555 ^ ((unsigned __int64)(v286 + 240) >> 32);
            v317 = v515 ^ (v286 + 16);
            v402 = v519 ^ (v286 + 32);
            v465 = v20;
            v296 = v542 ^ ((unsigned __int64)(v286 + 144) >> 32);
            v698 = v22;
            v551 = HIBYTE(v345);
            v364 = v411 ^ ((unsigned __int64)(v286 + 160) >> 32);
            v755 = v24;
            HIDWORD(v491) = HIBYTE(v24);
            v539 = HIBYTE(v19);
            v428 = v18;
            v576 = HIBYTE(v438);
            v412 = v616 ^ (v286 + 48);
            v834 = (unsigned int)(HIDWORD(v609) ^ HIDWORD(v286)) >> 24;
            v809 = v526 ^ ((unsigned __int64)(v286 + 32) >> 32);
            v533 = HIBYTE(v290);
            v647 = &qword_15C288[HIBYTE(v340)];
            v664 = &qword_15C288[HIBYTE(v354)];
            v556 = &qword_15C288[((unsigned int)v491 ^ ((_DWORD)v286 + 64)) >> 24];
            v25 = (int *)((char *)&unk_15AA90 + 8 * HIBYTE(v22));
            v568 = &qword_15C288[(v508 ^ (unsigned int)(v286 + 80)) >> 24];
            v610 = &qword_15C288[HIBYTE(v18)];
            v692 = &qword_15C288[HIBYTE(v446)];
            v782 = &qword_15C288[HIBYTE(v385)];
            v799 = &qword_15C288[HIBYTE(v480)];
            v710 = &qword_15C288[HIBYTE(v456)];
            v818 = &qword_15C288[HIBYTE(v391)];
            v741 = &qword_15C288[HIBYTE(v370)];
            v770 = &qword_15C288[HIBYTE(v378)];
            v821 = &qword_15C288[BYTE3(v305)];
            v26 = &qword_15B298[BYTE1(v317)];
            v27 = &qword_15BA98[BYTE2(v402)];
            v28 = &qword_15CA98[BYTE4(v334)];
            v617 = *v25;
            v635 = v25[1];
            v29 = &qword_15CA98[(unsigned __int8)v290];
            v584 = &qword_15CA98[(unsigned __int8)v19];
            v30 = v284[2 * (unsigned __int8)v305 + 1]
                ^ ((unsigned __int64)(v286 + 1) >> 32)
                ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v20) + 1)
                ^ *((_DWORD *)v26 - 1)
                ^ *((_DWORD *)v27 - 1);
            v31 = &qword_15C288[HIBYTE(v412)];
            v32 = v284[2 * (unsigned __int8)v305]
                ^ (v286 + 1)
                ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v20))
                ^ *((_DWORD *)v26 - 2);
            v628 = BYTE2(v290);
            v33 = &qword_15B298[BYTE1(v402)];
            v543 = &qword_15BA98[BYTE2(v412)];
            v34 = (unsigned __int8)(v519 ^ (v286 + 32));
            v856 = &qword_15C288[HIBYTE(v402)];
            v720 = BYTE1(v345);
            v612 = &qword_15CA98[(unsigned __int8)v345];
            v403 = BYTE2(v438);
            v35 = (unsigned __int8)v438;
            v439 = BYTE1(v438);
            v656 = &qword_15CA98[v35];
            v36 = v30 ^ *((_DWORD *)v31 + 3) ^ *((_DWORD *)v28 - 1);
            v734 = (unsigned __int8)v412;
            v413 = &qword_15B298[BYTE1(v412)];
            v37 = (_DWORD *)((char *)&unk_15DA90 + 8 * BYTE2(v19));
            v38 = v32
                ^ *((_DWORD *)v27 - 2)
                ^ *((_DWORD *)v31 + 2)
                ^ *((_DWORD *)v28 - 2)
                ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v290))
                ^ *v37;
            v704 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v345) + 1);
            v672 = *((_DWORD *)&unk_15D290 + 2 * BYTE1(v19));
            v39 = *((_DWORD *)&unk_15D290 + 2 * BYTE1(v290) + 1);
            v291 = v38;
            v683 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v345));
            v346 = v36 ^ v39 ^ v37[1];
            v40 = *((_DWORD *)v556 + 2);
            v41 = *((_DWORD *)v556 + 3);
            v557 = &qword_15BA98[BYTE2(v334)];
            v42 = v284[2 * (unsigned __int8)v317] ^ v617 ^ (v286 + 17) ^ *((_DWORD *)v33 - 2);
            v43 = v284[2 * (unsigned __int8)v317 + 1]
                ^ v635
                ^ ((unsigned __int64)(v286 + 17) >> 32)
                ^ *((_DWORD *)v33 - 1);
            v813 = (unsigned __int8)v334;
            v601 = &qword_15B298[BYTE1(v334)];
            v44 = *((_DWORD *)v543 - 1);
            v45 = v42 ^ *((_DWORD *)v543 - 2);
            v420 = &qword_15BA98[(unsigned __int8)((v508 ^ (unsigned int)(v286 + 80)) >> 16)];
            v839 = (unsigned __int8)(v508 ^ (v286 + 80));
            v544 = &qword_15B298[(unsigned __int8)((unsigned __int16)(v508 ^ (v286 + 80)) >> 8)];
            v825 = BYTE1(v296);
            v636 = &qword_15BA98[BYTE2(v428)];
            v830 = BYTE2(v364);
            v46 = *((_DWORD *)&unk_15D290 + 2 * BYTE1(v19) + 1) ^ *((_DWORD *)v29 - 1) ^ v41 ^ v43 ^ v44;
            v47 = *((_DWORD *)&unk_15AA90 + 2 * HIDWORD(v491) + 1);
            v48 = *((_DWORD *)&unk_15AA90 + 2 * HIDWORD(v491));
            v500 = *((_DWORD *)&unk_15D290 + 2 * v720);
            v726 = *((_DWORD *)&unk_15DA90 + 2 * v403 + 1);
            v593 = *((_DWORD *)&unk_15DA90 + 2 * v403);
            v49 = *((_DWORD *)v584 - 2);
            v50 = *((_DWORD *)v584 - 1);
            v585 = *((_DWORD *)v612 - 2);
            LODWORD(v334) = v46 ^ v704;
            v763 = *((_DWORD *)v612 - 1);
            v860 = *((_DWORD *)v29 - 2) ^ v40 ^ v45 ^ v672 ^ v683;
            v802 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v296) + 1);
            v509 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v296));
            v51 = *((_DWORD *)v610 + 2);
            v492 = *((_DWORD *)v610 + 3);
            v862 = (unsigned __int8)v428;
            v52 = v284[2 * v34] ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v473)) ^ (v286 + 33) ^ *((_DWORD *)v413 - 2);
            v53 = &qword_15B298[BYTE1(v428)];
            v561 = &qword_15BA98[BYTE2(v340)];
            v54 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v473) + 1)
                ^ v284[2 * v34 + 1]
                ^ ((unsigned __int64)(v286 + 33) >> 32)
                ^ *((_DWORD *)v413 - 1)
                ^ *((_DWORD *)v557 - 1)
                ^ *((_DWORD *)v568 + 3)
                ^ v50
                ^ *((_DWORD *)&unk_15D290 + 2 * v720 + 1);
            v613 = &qword_15CA98[(unsigned __int8)v296];
            v611 = HIBYTE(v296);
            v844 = BYTE1(v364);
            v853 = BYTE2(v465);
            v872 = (unsigned __int8)v340;
            v673 = &qword_15B298[BYTE1(v340)];
            v684 = &qword_15BA98[BYTE2(v354)];
            v55 = &qword_15CA98[(unsigned __int8)v364];
            v618 = HIBYTE(v364);
            v866 = BYTE1(v465);
            v721 = &qword_15CA98[(unsigned __int8)v465];
            LOWORD(v23) = v698;
            v869 = BYTE2(v698);
            v404 = (unsigned __int8)v354;
            v699 = &qword_15B298[BYTE1(v354)];
            v341 = v54 ^ v726;
            v875 = BYTE2(v473);
            v748 = &qword_15CA98[(unsigned __int8)v23];
            v727 = &qword_15B298[BYTE1(v446)];
            v297 = v52 ^ *((_DWORD *)v557 - 2) ^ *((_DWORD *)v568 + 2) ^ v49 ^ v500 ^ v593;
            v56 = v48 ^ v284[2 * v734] ^ (v286 + 49) ^ *((_DWORD *)v601 - 2) ^ *((_DWORD *)v420 - 2) ^ v51;
            v57 = v47
                ^ v284[2 * v734 + 1]
                ^ ((unsigned __int64)(v286 + 49) >> 32)
                ^ *((_DWORD *)v601 - 1)
                ^ *((_DWORD *)v420 - 1)
                ^ v492;
            v421 = BYTE1(v473);
            v735 = &qword_15BA98[BYTE2(v456)];
            LOWORD(v54) = v755;
            v776 = &qword_15CA98[(unsigned __int8)v473];
            v429 = BYTE2(v755);
            v355 = v56 ^ v585 ^ *((_DWORD *)&unk_15D290 + 2 * v439) ^ v509;
            v365 = v57 ^ v763 ^ *((_DWORD *)&unk_15D290 + 2 * v439 + 1) ^ v802;
            v474 = (unsigned __int8)v456;
            v756 = &qword_15B298[BYTE1(v456)];
            v764 = &qword_15BA98[BYTE2(v370)];
            v789 = &qword_15CA98[(unsigned __int8)v54];
            v58 = *((_DWORD *)v636 - 1);
            v457 = BYTE2(v486);
            v59 = v284[2 * v813]
                ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v486))
                ^ (v286 + 65)
                ^ *((_DWORD *)v544 - 2)
                ^ *((_DWORD *)v636 - 2);
            v466 = BYTE6(v305);
            v510 = (unsigned __int8)v370;
            v637 = &qword_15B298[BYTE1(v370)];
            v60 = *((_DWORD *)v647 + 3);
            v61 = *((_DWORD *)v647 + 2);
            v648 = &qword_15BA98[BYTE2(v378)];
            v493 = BYTE1(v486);
            v803 = &qword_15CA98[(unsigned __int8)v486];
            v62 = *((_DWORD *)v656 - 1)
                ^ *((_DWORD *)v544 - 1)
                ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v486) + 1)
                ^ v284[2 * v813 + 1]
                ^ ((unsigned __int64)(v286 + 65) >> 32)
                ^ v58
                ^ v60
                ^ *((_DWORD *)&unk_15D290 + 2 * v825 + 1);
            v501 = BYTE5(v305);
            v414 = &qword_15CA98[BYTE4(v305)];
            v487 = *((_DWORD *)v656 - 2)
                 ^ v59
                 ^ v61
                 ^ *((_DWORD *)&unk_15D290 + 2 * v825)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v830);
            v545 = (unsigned __int8)(v21 ^ (v286 - 64));
            v657 = &qword_15B298[BYTE1(v378)];
            v795 = &qword_15BA98[BYTE2(v385)];
            v516 = BYTE2(v395);
            HIDWORD(v305) = v62 ^ *((_DWORD *)&unk_15DA90 + 2 * v830 + 1);
            v63 = *((_DWORD *)&unk_15AA90 + 2 * v834 + 1) ^ ((unsigned __int64)(v286 + 81) >> 32);
            v558 = BYTE1(v395);
            v64 = *((_DWORD *)&unk_15AA90 + 2 * v834) ^ (v286 + 81) ^ v284[2 * v839] ^ *((_DWORD *)v53 - 2);
            v835 = &qword_15CA98[(unsigned __int8)v395];
            v65 = *((_DWORD *)v561 - 1);
            v66 = *((_DWORD *)v561 - 2);
            v562 = BYTE2(v809);
            v586 = BYTE1(v809);
            v849 = &qword_15CA98[(unsigned __int8)(v526 ^ ((unsigned __int64)(v286 + 32) >> 32))];
            v594 = BYTE2(v324);
            v810 = &qword_15B298[BYTE1(v385)];
            v569 = (unsigned __int8)v385;
            v814 = &qword_15BA98[BYTE2(v480)];
            v602 = (unsigned __int8)v480;
            v67 = v64 ^ v66 ^ *((_DWORD *)v664 + 2) ^ *((_DWORD *)v613 - 2) ^ *((_DWORD *)&unk_15D290 + 2 * v844);
            v68 = *((_DWORD *)&unk_15D290 + 2 * v844 + 1)
                ^ v63
                ^ v284[2 * v839 + 1]
                ^ *((_DWORD *)v53 - 1)
                ^ v65
                ^ *((_DWORD *)v664 + 3)
                ^ *((_DWORD *)v613 - 1);
            v826 = &qword_15B298[BYTE1(v480)];
            v69 = *((_DWORD *)&unk_15DA90 + 2 * v853);
            v70 = *((_DWORD *)&unk_15DA90 + 2 * v853 + 1);
            v831 = &qword_15BA98[BYTE2(v391)];
            v840 = &qword_15BA98[BYTE2(v305)];
            v854 = &qword_15B298[BYTE1(v305)];
            v371 = v68 ^ v70;
            LODWORD(v305) = v67 ^ v69;
            v614 = (unsigned __int8)v391;
            v845 = &qword_15B298[BYTE1(v391)];
            v71 = *(v55 - 1);
            v481 = v284[2 * v862 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v395) + 1)
                 ^ ((unsigned __int64)(v286 + 97) >> 32)
                 ^ *((_DWORD *)v673 - 1)
                 ^ *((_DWORD *)v684 - 1)
                 ^ *((_DWORD *)v692 + 3)
                 ^ HIDWORD(v71)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v866 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v869 + 1);
            v379 = v284[2 * v862]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v395))
                 ^ (v286 + 97)
                 ^ *((_DWORD *)v673 - 2)
                 ^ *((_DWORD *)v684 - 2)
                 ^ *((_DWORD *)v692 + 2)
                 ^ v71
                 ^ *((_DWORD *)&unk_15D290 + 2 * v866)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v869);
            v72 = v284[2 * v404] ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v324));
            v386 = *(_QWORD *)&v284[2 * v872]
                 ^ *((_QWORD *)&unk_15AA90 + ((v526 ^ ((unsigned __int64)(v286 + 32) >> 32)) >> 24))
                 ^ (v286 + 113)
                 ^ *(v699 - 1)
                 ^ qword_15BA98[BYTE2(v446) - 1]
                 ^ v710[1]
                 ^ *(v721 - 1)
                 ^ *((_QWORD *)&unk_15D290 + BYTE1(v23))
                 ^ *((_QWORD *)&unk_15DA90 + v875);
            v870 = *((_DWORD *)&unk_15DA90 + 2 * v457 + 1);
            v867 = *((_DWORD *)&unk_15DA90 + 2 * v457);
            v520 = (char *)&unk_15DA90 + 8 * BYTE2(v395);
            v674 = (char *)&unk_15D290 + 8 * BYTE1(v395);
            v711 = (char *)&unk_15DA90 + 8 * BYTE2(v324);
            v405 = *((_DWORD *)&unk_15DA90 + 2 * v429 + 1)
                 ^ *((_DWORD *)v735 - 1)
                 ^ *((_DWORD *)v727 - 1)
                 ^ v284[2 * v404 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v324) + 1)
                 ^ (__CFADD__((_DWORD)v286, 129) + HIDWORD(v286))
                 ^ *((_DWORD *)v741 + 3)
                 ^ *((_DWORD *)v748 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v421 + 1);
            v396 = v72
                 ^ (v286 + 129)
                 ^ *((_DWORD *)v727 - 2)
                 ^ *((_DWORD *)v735 - 2)
                 ^ *((_DWORD *)v741 + 2)
                 ^ *((_DWORD *)v748 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v421)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v429);
            v73 = *((_DWORD *)&unk_15AA90 + 2 * v533 + 1);
            v742 = *((_DWORD *)&unk_15D290 + 2 * v493 + 1);
            v736 = *((_DWORD *)v764 - 1)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(HIDWORD(v334)) + 1)
                 ^ v284[2 * (unsigned __int8)v446 + 1]
                 ^ ((unsigned __int64)(v286 + 145) >> 32)
                 ^ *((_DWORD *)v756 - 1)
                 ^ *((_DWORD *)v770 + 3)
                 ^ *((_DWORD *)v776 - 1);
            HIDWORD(v71) = *((_DWORD *)&unk_15AA90 + 2 * v533);
            v534 = *((_DWORD *)&unk_15D290 + 2 * v493);
            v74 = v284[2 * v474 + 1]
                ^ *((_DWORD *)&unk_15DA90 + 2 * v466 + 1)
                ^ ((unsigned __int64)(v286 + 161) >> 32)
                ^ v73;
            v494 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(HIDWORD(v334)))
                 ^ v284[2 * (unsigned __int8)v446]
                 ^ (v286 + 145)
                 ^ *((_DWORD *)v756 - 2)
                 ^ *((_DWORD *)v764 - 2)
                 ^ *((_DWORD *)v770 + 2)
                 ^ *((_DWORD *)v776 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v54));
            v447 = &qword_15BA98[BYTE2(v317)];
            v430 = &qword_15C288[HIBYTE(v317)];
            v318 = BYTE1(v324);
            v458 = &qword_15CA98[(unsigned __int8)v324];
            v325 = BYTE6(v334);
            v771 = BYTE5(v334);
            v75 = *((_DWORD *)v430 + 2);
            v76 = *((_DWORD *)&unk_15D290 + 2 * v318);
            v77 = v284[2 * v602 + 1]
                ^ *((_DWORD *)v840 - 1)
                ^ ((unsigned __int64)(v286 + 225) >> 32)
                ^ *((_DWORD *)&unk_15AA90 + 2 * v611 + 1)
                ^ *((_DWORD *)v845 - 1)
                ^ *((_DWORD *)v430 + 3)
                ^ *((_DWORD *)v849 - 1)
                ^ *((_DWORD *)&unk_15D290 + 2 * v318 + 1)
                ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE6(v334) + 1);
            LODWORD(v71) = v284[2 * v614 + 1]
                         ^ *((_DWORD *)v854 - 1)
                         ^ ((unsigned __int64)(v286 + 241) >> 32)
                         ^ *((_DWORD *)&unk_15AA90 + 2 * v618 + 1)
                         ^ *((_DWORD *)v447 - 1)
                         ^ *((_DWORD *)v856 + 3)
                         ^ *((_DWORD *)v458 - 1)
                         ^ *((_DWORD *)&unk_15D290 + 2 * BYTE5(v334) + 1);
            v319 = v494 ^ v867;
            HIDWORD(v334) = *((_DWORD *)&unk_15DA90 + 2 * v466)
                          ^ v284[2 * v474]
                          ^ (v286 + 161)
                          ^ HIDWORD(v71)
                          ^ *((_DWORD *)v637 - 2)
                          ^ *((_DWORD *)v648 - 2)
                          ^ *((_DWORD *)v782 + 2)
                          ^ *((_DWORD *)v789 - 2)
                          ^ v534;
            v431 = v284[2 * v510 + 1]
                 ^ *((_DWORD *)&unk_15D290 + 2 * v501 + 1)
                 ^ ((unsigned __int64)(v286 + 177) >> 32)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v539 + 1)
                 ^ *((_DWORD *)v657 - 1)
                 ^ *((_DWORD *)v795 - 1)
                 ^ *((_DWORD *)v799 + 3)
                 ^ *((_DWORD *)v803 - 1)
                 ^ *((_DWORD *)v520 + 1);
            v422 = *((_DWORD *)&unk_15D290 + 2 * v501)
                 ^ v284[2 * v510]
                 ^ (v286 + 177)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v539)
                 ^ *((_DWORD *)v657 - 2)
                 ^ *((_DWORD *)v795 - 2)
                 ^ *((_DWORD *)v799 + 2)
                 ^ *((_DWORD *)v803 - 2)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v516);
            v475 = *((_DWORD *)v854 - 2)
                 ^ v284[2 * v614]
                 ^ (v286 + 241)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v618)
                 ^ *((_DWORD *)v447 - 2)
                 ^ *((_DWORD *)v856 + 2)
                 ^ *((_DWORD *)v458 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v771)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v628);
            v448 = v284[2 * v545 + 1]
                 ^ *((_DWORD *)v414 - 1)
                 ^ (__CFADD__((_DWORD)v286, 193) + HIDWORD(v286))
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v551 + 1)
                 ^ *((_DWORD *)v810 - 1)
                 ^ *((_DWORD *)v814 - 1)
                 ^ *((_DWORD *)v818 + 3)
                 ^ *((_DWORD *)v674 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v562 + 1);
            LODWORD(v71) = v71 ^ *((_DWORD *)&unk_15DA90 + 2 * v628 + 1);
            v467 = *((_DWORD *)v840 - 2)
                 ^ v284[2 * v602]
                 ^ (v286 + 225)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v611)
                 ^ *((_DWORD *)v845 - 2)
                 ^ v75
                 ^ *((_DWORD *)v849 - 2)
                 ^ v76
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v325);
            v440 = *((_DWORD *)&unk_15AA90 + 2 * v551)
                 ^ *((_DWORD *)v414 - 2)
                 ^ v284[2 * v545]
                 ^ (v286 + 193)
                 ^ *((_DWORD *)v810 - 2)
                 ^ *((_DWORD *)v814 - 2)
                 ^ *((_DWORD *)v818 + 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v558)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v562);
            v326 = v736 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v54) + 1) ^ v870;
            v459 = v284[2 * v569]
                 ^ *((_DWORD *)v821 + 2)
                 ^ (v286 + 209)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v576)
                 ^ *((_DWORD *)v826 - 2)
                 ^ *((_DWORD *)v831 - 2)
                 ^ *((_DWORD *)v835 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v586)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v594);
            v415 = v74
                 ^ *((_DWORD *)v637 - 1)
                 ^ *((_DWORD *)v648 - 1)
                 ^ *((_DWORD *)v782 + 3)
                 ^ *((_DWORD *)v789 - 1)
                 ^ v742;
            v495 = *((_DWORD *)v821 + 3)
                 ^ v284[2 * v569 + 1]
                 ^ ((unsigned __int64)(v286 + 209) >> 32)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v576 + 1)
                 ^ *((_DWORD *)v826 - 1)
                 ^ *((_DWORD *)v831 - 1)
                 ^ *((_DWORD *)v835 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v586 + 1)
                 ^ *((_DWORD *)v711 + 1);
            v577 = HIBYTE(v481);
            v595 = HIBYTE(v405);
            v535 = BYTE3(v71);
            v511 = v71;
            v587 = HIBYTE(HIDWORD(v386));
            v502 = v77;
            v570 = HIBYTE(v371);
            v615 = &qword_15C288[HIBYTE(v355)];
            v629 = &qword_15C288[HIBYTE(v487)];
            v638 = &qword_15C288[BYTE3(v305)];
            v700 = &qword_15C288[HIBYTE(v379)];
            v737 = &qword_15C288[BYTE3(v386)];
            v685 = (int *)((char *)&unk_15AA90 + 8 * HIBYTE(v77));
            v722 = (char *)&unk_15AA90 + 8 * BYTE3(v71);
            v822 = &qword_15C288[HIBYTE(v459)];
            v832 = &qword_15C288[HIBYTE(v467)];
            v78 = v860;
            v841 = &qword_15C288[HIBYTE(v475)];
            v879 = HIBYTE(v415);
            v777 = &qword_15C288[HIBYTE(v319)];
            v790 = &qword_15C288[HIBYTE(HIDWORD(v334))];
            v800 = &qword_15C288[HIBYTE(v422)];
            v815 = &qword_15C288[HIBYTE(v440)];
            v836 = (char *)&unk_15AA90 + 8 * HIBYTE(HIDWORD(v386));
            v819 = (char *)&unk_15AA90 + 8 * HIBYTE(v371);
            v827 = (char *)&unk_15AA90 + 8 * HIBYTE(v481);
            v79 = BYTE1(v860);
            v850 = (char *)&unk_15AA90 + 8 * HIBYTE(v405);
            v846 = &qword_15C288[HIBYTE(v291)];
            v855 = (_DWORD *)((char *)&unk_15AA90 + 8 * HIBYTE(v326));
            v868 = (char *)&unk_15AA90 + 8 * HIBYTE(v415);
            v861 = &qword_15C288[HIBYTE(v860)];
            v873 = &qword_15C288[HIBYTE(v297)];
            v80 = &qword_15CA98[BYTE4(v305)];
            v81 = &qword_15B298[v79];
            v82 = BYTE2(v481);
            v83 = &qword_15BA98[BYTE2(v297)];
            v84 = BYTE1(v481);
            v665 = &qword_15CA98[(unsigned __int8)v481];
            v675 = *((_DWORD *)v80 - 2);
            v712 = *((_DWORD *)v80 - 1);
            v286 += 2;
            v871 = &qword_15BA98[BYTE2(v78)];
            v482 = BYTE2(v371);
            v85 = BYTE6(v386);
            v86 = &qword_15CA98[(unsigned __int8)v371];
            v87 = &qword_15B298[BYTE1(v297)];
            v88 = &qword_15BA98[BYTE2(v355)];
            v619 = &qword_15B298[BYTE1(v355)];
            v804 = *((_DWORD *)&unk_15D290 + 2 * v84);
            LODWORD(v71) = *((_DWORD *)&unk_15D290 + 2 * BYTE1(v371) + 1)
                         ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v431) + 1)
                         ^ v284[2 * (unsigned __int8)v291 + 1]
                         ^ *((_DWORD *)v81 - 1)
                         ^ *((_DWORD *)v83 - 1);
            v857 = *((_DWORD *)&unk_15D290 + 2 * v84 + 1);
            HIDWORD(v71) = *((_DWORD *)&unk_15D290 + 2 * BYTE1(v371))
                         ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v431))
                         ^ v284[2 * (unsigned __int8)v291]
                         ^ *((_DWORD *)v81 - 2)
                         ^ *((_DWORD *)v83 - 2);
            v89 = BYTE4(v386);
            v658 = &qword_15BA98[BYTE2(v487)];
            v90 = BYTE5(v386);
            HIDWORD(v386) = (unsigned __int8)v487;
            v705 = &qword_15CA98[v89];
            v91 = BYTE2(v405);
            v693 = &qword_15B298[BYTE1(v487)];
            LODWORD(v609) = HIDWORD(v71) ^ *((_DWORD *)v615 + 2) ^ v675 ^ *((_DWORD *)&unk_15DA90 + 2 * v82);
            LODWORD(v71) = v71 ^ *((_DWORD *)v615 + 3) ^ v712;
            LOWORD(v89) = v405;
            HIDWORD(v71) = *((_DWORD *)v87 - 2);
            v406 = (unsigned __int8)v305;
            v676 = &qword_15BA98[BYTE2(v305)];
            v713 = &qword_15B298[BYTE1(v305)];
            v92 = *((_DWORD *)v86 - 1)
                ^ v284[2 * (unsigned __int8)v78 + 1]
                ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v448) + 1)
                ^ *((_DWORD *)v87 - 1);
            HIDWORD(v71) ^= v284[2 * (unsigned __int8)v78]
                          ^ *((_DWORD *)v86 - 2)
                          ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v448))
                          ^ *((_DWORD *)v88 - 2);
            v743 = &qword_15CA98[(unsigned __int8)v89];
            v728 = &qword_15BA98[BYTE2(v379)];
            v93 = BYTE2(v326);
            HIDWORD(v609) = v71 ^ *((_DWORD *)&unk_15DA90 + 2 * v82 + 1);
            LODWORD(v305) = BYTE1(v326);
            v765 = &qword_15CA98[(unsigned __int8)v326];
            v327 = BYTE2(v415);
            v515 = HIDWORD(v71) ^ *((_DWORD *)v629 + 2) ^ v804 ^ *((_DWORD *)&unk_15DA90 + 2 * v85);
            v485 = v92 ^ *((_DWORD *)v88 - 1) ^ *((_DWORD *)v629 + 3) ^ v857 ^ *((_DWORD *)&unk_15DA90 + 2 * v85 + 1);
            v805 = *((_DWORD *)v665 - 1);
            v94 = v284[2 * (unsigned __int8)v297]
                ^ *((_DWORD *)v638 + 2)
                ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v495))
                ^ *((_DWORD *)v619 - 2);
            HIDWORD(v71) = v284[2 * (unsigned __int8)v297 + 1]
                         ^ *((_DWORD *)v638 + 3)
                         ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v495) + 1)
                         ^ *((_DWORD *)v619 - 1);
            v620 = v284[2 * (unsigned __int8)v355];
            v95 = *v685;
            v96 = *((_DWORD *)v658 - 2)
                ^ v94
                ^ *((_DWORD *)v665 - 2)
                ^ *((_DWORD *)&unk_15D290 + 2 * v90)
                ^ *((_DWORD *)&unk_15DA90 + 2 * v91);
            v864 = (unsigned __int8)v379;
            v639 = &qword_15B298[BYTE1(v379)];
            v649 = &qword_15BA98[BYTE2(v386)];
            v298 = BYTE1(v415);
            v666 = &qword_15CA98[(unsigned __int8)v415];
            v874 = (unsigned __int8)v386;
            v416 = &qword_15B298[BYTE1(v386)];
            v526 = HIDWORD(v71)
                 ^ *((_DWORD *)v658 - 1)
                 ^ v805
                 ^ *((_DWORD *)&unk_15D290 + 2 * v90 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v91 + 1);
            v97 = *((_DWORD *)v700 + 2);
            v659 = &qword_15BA98[BYTE2(v396)];
            v519 = v96;
            v98 = *((_DWORD *)v700 + 3);
            v99 = *((_DWORD *)v705 - 1);
            v100 = *((_DWORD *)v693 - 1);
            v101 = *((_DWORD *)v693 - 2);
            HIDWORD(v71) = *((_DWORD *)v676 - 2);
            v102 = v284[2 * (unsigned __int8)v355 + 1] ^ *((_DWORD *)v676 - 1) ^ v685[1];
            v356 = BYTE1(v431);
            v380 = (unsigned __int8)v396;
            v694 = &qword_15CA98[(unsigned __int8)v431];
            v372 = BYTE2(v448);
            v677 = &qword_15B298[BYTE1(v396)];
            v686 = &qword_15BA98[BYTE2(v319)];
            v876 = BYTE1(v448);
            v806 = &qword_15CA98[(unsigned __int8)v448];
            v877 = BYTE2(v495);
            v878 = (unsigned __int8)v319;
            v701 = &qword_15B298[BYTE1(v319)];
            v616 = HIDWORD(v71)
                 ^ v620
                 ^ v95
                 ^ v101
                 ^ v97
                 ^ *((_DWORD *)v705 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v89))
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v93);
            v706 = &qword_15BA98[BYTE6(v334)];
            v627 = v102
                 ^ v100
                 ^ v98
                 ^ v99
                 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v89) + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v93 + 1);
            v103 = *((_DWORD *)&unk_15D290 + 2 * v305);
            v104 = *((_DWORD *)&unk_15DA90 + 2 * v327 + 1);
            HIDWORD(v71) = *((_DWORD *)v713 - 2)
                         ^ v284[2 * HIDWORD(v386)]
                         ^ *((_DWORD *)&unk_15AA90 + 2 * v535)
                         ^ *((_DWORD *)v728 - 2);
            v105 = *((_DWORD *)&unk_15DA90 + 2 * v327);
            v106 = *((_DWORD *)v737 + 2);
            v107 = *((_DWORD *)&unk_15D290 + 2 * v305 + 1)
                 ^ v284[2 * HIDWORD(v386) + 1]
                 ^ *((_DWORD *)v713 - 1)
                 ^ *((_DWORD *)v722 + 1)
                 ^ *((_DWORD *)v728 - 1)
                 ^ *((_DWORD *)v737 + 3)
                 ^ *((_DWORD *)v743 - 1);
            v449 = *((_DWORD *)&unk_15D290 + 2 * v298 + 1);
            v108 = BYTE2(v431);
            v432 = *((_DWORD *)&unk_15D290 + 2 * v298);
            LODWORD(v305) = BYTE1(v495);
            v729 = &qword_15CA98[(unsigned __int8)v495];
            v320 = BYTE2(v502);
            HIDWORD(v386) = BYTE4(v334);
            v714 = &qword_15B298[BYTE5(v334)];
            v723 = &qword_15BA98[BYTE2(v422)];
            v328 = BYTE1(v502);
            v738 = &qword_15CA98[(unsigned __int8)v502];
            HIDWORD(v334) = BYTE2(v511);
            LODWORD(v491) = HIDWORD(v71) ^ v106 ^ *((_DWORD *)v743 - 2) ^ v103 ^ v105;
            LODWORD(v386) = BYTE2(v346);
            HIDWORD(v491) = v107 ^ v104;
            v109 = *(_QWORD *)&v284[2 * v406]
                 ^ *((_QWORD *)&unk_15AA90 + HIBYTE(v346))
                 ^ *(v639 - 1)
                 ^ *(v649 - 1)
                 ^ qword_15C288[HIBYTE(v396) + 1]
                 ^ *(v765 - 1);
            v110 = *((_DWORD *)&unk_15AA90 + 2 * BYTE3(v334)) ^ v284[2 * v864];
            HIDWORD(v71) = *((_DWORD *)&unk_15D290 + 2 * v356);
            v858 = *((_DWORD *)&unk_15DA90 + 2 * v372 + 1);
            v111 = *((_DWORD *)&unk_15DA90 + 2 * v372);
            v373 = (unsigned __int8)v422;
            v640 = &qword_15B298[BYTE1(v422)];
            v546 = v111;
            v112 = *((_DWORD *)&unk_15D290 + 2 * v356 + 1);
            v552 = &qword_15BA98[BYTE2(v440)];
            v357 = BYTE1(v511);
            v749 = &qword_15CA98[(unsigned __int8)v511];
            v113 = &qword_15CA98[(unsigned __int8)v346];
            v347 = BYTE1(v346);
            v299 = v113;
            v407 = (unsigned __int8)v440;
            v650 = &qword_15B298[BYTE1(v440)];
            v397 = BYTE2(v334);
            v744 = &qword_15BA98[BYTE2(v459)];
            v532 = *((_DWORD *)&unk_15DA90 + 2 * v108 + 1) ^ HIDWORD(v109) ^ v449;
            v508 = v109 ^ v432 ^ *((_DWORD *)&unk_15DA90 + 2 * v108);
            v757 = &qword_15B298[BYTE1(v459)];
            v423 = (unsigned __int8)v459;
            v766 = &qword_15BA98[BYTE2(v467)];
            v114 = *((_DWORD *)&unk_15AA90 + 2 * BYTE3(v334) + 1)
                 ^ v284[2 * v864 + 1]
                 ^ *((_DWORD *)v416 - 1)
                 ^ *((_DWORD *)v659 - 1);
            v115 = (unsigned __int8)v334;
            LODWORD(v334) = BYTE1(v334);
            v783 = &qword_15CA98[v115];
            v772 = &qword_15B298[BYTE1(v467)];
            v441 = (unsigned __int8)v467;
            v116 = v110 ^ *((_DWORD *)v416 - 2) ^ *((_DWORD *)v659 - 2) ^ *((_DWORD *)v777 + 2) ^ *((_DWORD *)v666 - 2);
            v117 = v114 ^ *((_DWORD *)v777 + 3) ^ *((_DWORD *)v666 - 1) ^ v112;
            v667 = &qword_15BA98[BYTE2(v475)];
            v863 = &qword_15CA98[(unsigned __int8)v341];
            v433 = BYTE2(v365);
            v865 = &qword_15B298[BYTE1(v291)];
            v778 = &qword_15BA98[BYTE2(v291)];
            v464 = v117 ^ v858;
            v450 = (unsigned __int8)v475;
            v455 = HIDWORD(v71) ^ v116 ^ v546;
            v859 = &qword_15B298[BYTE1(v475)];
            v118 = v790[1];
            v119 = *((_DWORD *)v677 - 1)
                 ^ v284[2 * v874 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v341) + 1)
                 ^ *((_DWORD *)v686 - 1)
                 ^ HIDWORD(v118);
            v120 = v284[2 * v874]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v341))
                 ^ *((_DWORD *)v677 - 2)
                 ^ *((_DWORD *)v686 - 2)
                 ^ v118;
            v121 = *(v694 - 1);
            v122 = v120 ^ v121;
            v123 = v119 ^ HIDWORD(v121) ^ *((_DWORD *)&unk_15D290 + 2 * v876 + 1);
            LODWORD(v121) = v284[2 * v380 + 1] ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v365) + 1);
            HIDWORD(v121) = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v365)) ^ v284[2 * v380];
            v124 = *((_DWORD *)&unk_15DA90 + 2 * v320 + 1);
            v125 = *((_DWORD *)&unk_15DA90 + 2 * v320);
            v377 = v123 ^ *((_DWORD *)&unk_15DA90 + 2 * v877 + 1);
            v316 = v122 ^ *((_DWORD *)&unk_15D290 + 2 * v876) ^ *((_DWORD *)&unk_15DA90 + 2 * v877);
            v678 = (_DWORD *)((char *)&unk_15D290 + 8 * BYTE1(v341));
            v687 = (char *)&unk_15DA90 + 8 * BYTE2(v365);
            v472 = HIDWORD(v121)
                 ^ *((_DWORD *)v701 - 2)
                 ^ *((_DWORD *)v706 - 2)
                 ^ *((_DWORD *)v800 + 2)
                 ^ *((_DWORD *)v806 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v305)
                 ^ v125;
            v538 = v121
                 ^ *((_DWORD *)v701 - 1)
                 ^ *((_DWORD *)v706 - 1)
                 ^ *((_DWORD *)v800 + 3)
                 ^ *((_DWORD *)v806 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v305 + 1)
                 ^ v124;
            v126 = *((_DWORD *)&unk_15D290 + 2 * v328)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(HIDWORD(v305)))
                 ^ v284[2 * v878]
                 ^ *((_DWORD *)v714 - 2)
                 ^ *((_DWORD *)v723 - 2)
                 ^ *((_DWORD *)v815 + 2)
                 ^ *((_DWORD *)v729 - 2);
            LODWORD(v109) = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(HIDWORD(v305)) + 1)
                          ^ v284[2 * v878 + 1]
                          ^ *((_DWORD *)v714 - 1)
                          ^ *((_DWORD *)v723 - 1)
                          ^ *((_DWORD *)v815 + 3)
                          ^ *((_DWORD *)v729 - 1)
                          ^ *((_DWORD *)&unk_15D290 + 2 * v328 + 1);
            v127 = *((_DWORD *)&unk_15DA90 + 2 * v386) ^ v284[2 * HIDWORD(v386)] ^ *((_DWORD *)&unk_15AA90 + 2 * v570);
            v715 = *((_DWORD *)&unk_15D290 + 2 * v357 + 1);
            v571 = *((_DWORD *)&unk_15D290 + 2 * v357);
            v542 = v109 ^ *((_DWORD *)&unk_15DA90 + 2 * HIDWORD(v334) + 1);
            v358 = &qword_15CA98[(unsigned __int8)v365];
            LODWORD(v121) = v640;
            v641 = BYTE1(v365);
            v363 = v126 ^ *((_DWORD *)&unk_15DA90 + 2 * HIDWORD(v334));
            v128 = *((_DWORD *)v299 - 1)
                 ^ v284[2 * v407 + 1]
                 ^ *((_DWORD *)v836 + 1)
                 ^ *((_DWORD *)v757 - 1)
                 ^ *((_DWORD *)v766 - 1)
                 ^ *((_DWORD *)v841 + 3)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v334 + 1);
            HIDWORD(v109) = *((_DWORD *)v299 - 2)
                          ^ v284[2 * v407]
                          ^ *((_DWORD *)&unk_15AA90 + 2 * v587)
                          ^ *((_DWORD *)v757 - 2)
                          ^ *((_DWORD *)v766 - 2)
                          ^ *((_DWORD *)v841 + 2)
                          ^ *((_DWORD *)&unk_15D290 + 2 * v334)
                          ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v341));
            v411 = *((_DWORD *)&unk_15DA90 + 2 * v386 + 1)
                 ^ v284[2 * HIDWORD(v386) + 1]
                 ^ *((_DWORD *)v819 + 1)
                 ^ *(_DWORD *)(v121 - 4)
                 ^ *((_DWORD *)v552 - 1)
                 ^ *((_DWORD *)v822 + 3)
                 ^ *((_DWORD *)v738 - 1)
                 ^ v715;
            v295 = v127
                 ^ *(_DWORD *)(v121 - 8)
                 ^ *((_DWORD *)v552 - 2)
                 ^ *((_DWORD *)v822 + 2)
                 ^ *((_DWORD *)v738 - 2)
                 ^ v571;
            v384 = *((_DWORD *)&unk_15D290 + 2 * v347 + 1)
                 ^ v284[2 * v373 + 1]
                 ^ *((_DWORD *)v827 + 1)
                 ^ *((_DWORD *)v650 - 1)
                 ^ *((_DWORD *)v744 - 1)
                 ^ *((_DWORD *)v832 + 3)
                 ^ *((_DWORD *)v749 - 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v397 + 1);
            v369 = v284[2 * v373]
                 ^ *((_DWORD *)&unk_15D290 + 2 * v347)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v577)
                 ^ *((_DWORD *)v650 - 2)
                 ^ *((_DWORD *)v744 - 2)
                 ^ *((_DWORD *)v832 + 2)
                 ^ *((_DWORD *)v749 - 2)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v397);
            v390 = HIDWORD(v109);
            v401 = v128 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v341) + 1);
            v129 = *((_DWORD *)v873 + 3)
                 ^ *((_DWORD *)v868 + 1)
                 ^ v284[2 * v450 + 1]
                 ^ *((_DWORD *)v865 - 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v482 + 1)
                 ^ *((_DWORD *)v871 - 1)
                 ^ *((_DWORD *)v358 - 1);
            v17 = *((_DWORD *)v358 - 2)
                ^ *((_DWORD *)v871 - 2)
                ^ *((_DWORD *)&unk_15AA90 + 2 * v879)
                ^ v284[2 * v450]
                ^ *((_DWORD *)v865 - 2)
                ^ *((_DWORD *)&unk_15DA90 + 2 * v482)
                ^ *((_DWORD *)v873 + 2)
                ^ *((_DWORD *)&unk_15D290 + 2 * BYTE5(v305));
            v130 = *((_DWORD *)&unk_15D290 + 2 * BYTE5(v305) + 1);
            v16 = *((_DWORD *)&unk_15DA90 + 2 * BYTE6(v305))
                ^ *((_DWORD *)v863 - 2)
                ^ *((_DWORD *)v859 - 2)
                ^ *((_DWORD *)v778 - 2)
                ^ v284[2 * v441]
                ^ *v855
                ^ *((_DWORD *)v861 + 2)
                ^ *((_DWORD *)&unk_15D290 + 2 * v641);
            v427 = v284[2 * v423]
                 ^ *((_DWORD *)v846 + 2)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v595)
                 ^ *((_DWORD *)v772 - 2)
                 ^ *((_DWORD *)v667 - 2)
                 ^ *((_DWORD *)v783 - 2)
                 ^ *v678
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v433);
            v550 = v284[2 * v441 + 1]
                 ^ *((_DWORD *)v778 - 1)
                 ^ v855[1]
                 ^ *((_DWORD *)v859 - 1)
                 ^ *((_DWORD *)v861 + 3)
                 ^ *((_DWORD *)v863 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v641 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE6(v305) + 1);
            v555 = v129 ^ v130;
            v479 = v678[1]
                 ^ v284[2 * v423 + 1]
                 ^ *((_DWORD *)v846 + 3)
                 ^ *((_DWORD *)v850 + 1)
                 ^ *((_DWORD *)v772 - 1)
                 ^ *((_DWORD *)v667 - 1)
                 ^ *((_DWORD *)v783 - 1)
                 ^ *((_DWORD *)v687 + 1);
          }
          while ( v286 != 14 );
          v131 = v284;
          v885 = v609;
          v285 = -1;
          v886 = v515;
          v887 = v485;
          v888 = v519;
          v889 = v526;
          v890 = v616;
          v891 = v627;
          v892 = v491;
          v893 = v508;
          v894 = v532;
          v895 = v455;
          v896 = v464;
          v897 = v316;
          v914 = v129 ^ v130;
          v911 = v16;
          v898 = v377;
          v913 = v17;
          v899 = v472;
          v900 = v538;
          v901 = v363;
          v902 = v542;
          v903 = v295;
          v904 = v411;
          v905 = v369;
          v906 = v384;
          v907 = v390;
          v908 = v401;
          v909 = v427;
          v910 = v479;
          v912 = v550;
          v374 = v915;
          v536 = v916;
          v387 = v917;
          v392 = v918;
          v398 = v919;
          v408 = v920;
          v417 = v921;
          v424 = v922;
          v434 = v923;
          v563 = v924;
          v442 = v925;
          v521 = v926;
          v451 = v927;
          v468 = v928;
          v460 = v929;
          v476 = v930;
          v488 = v931;
          v132 = v938;
          v496 = v932;
          v133 = v940;
          v134 = v944;
          v135 = v131;
          v483 = v933;
          v300 = v942;
          v503 = v934;
          v348 = v943;
          v512 = v935;
          v329 = v936;
          v527 = v937;
          v287 = v939;
          v292 = v941;
          v136 = v945;
          do
          {
            v335 = ~v398;
            v321 = v536 ^ HIDWORD(v285);
            v306 = ~v417;
            v359 = ~v451;
            v342 = ~v434;
            v137 = ~v387;
            v138 = ~v329;
            v139 = ~v442;
            v418 = ~v132;
            v140 = ~v460;
            v366 = ~v488;
            v443 = ~v300;
            v312 = ~v374;
            v461 = ~v134;
            v330 = v392 ^ HIDWORD(v285) ^ 0x10000000;
            v338 = v424 ^ HIDWORD(v285) ^ 0x30000000;
            v301 = v408 ^ HIDWORD(v285) ^ 0x20000000;
            v141 = v468 ^ HIDWORD(v285) ^ 0x60000000;
            v375 = v496 ^ (HIDWORD(v285) + 0x80000000);
            v388 = v503 ^ HIDWORD(v285) ^ 0x90000000;
            v399 = HIDWORD(v512) ^ HIDWORD(v285) ^ 0xA0000000;
            v409 = v527 ^ HIDWORD(v285) ^ 0xB0000000;
            v425 = v287 ^ HIDWORD(v285) ^ 0xC0000000;
            v435 = v292 ^ HIDWORD(v285) ^ 0xD0000000;
            HIDWORD(v512) = v476 ^ HIDWORD(v285) ^ 0x70000000;
            v452 = HIDWORD(v285) ^ 0xE0000000 ^ v348;
            v528 = ~v133;
            v469 = HIDWORD(v285) ^ 0xF0000000 ^ v136;
            v504 = v141;
            v477 = v139;
            v381 = ~v483;
            v393 = ~(_DWORD)v512;
            v142 = v521;
            v522 = v138;
            v349 = v142 ^ HIDWORD(v285) ^ 0x50000000;
            LOWORD(v512) = v140;
            v497 = v137;
            v823 = HIBYTE(v452);
            v828 = HIBYTE(v469);
            v837 = ((unsigned int)v536 ^ HIDWORD(v285)) >> 24;
            v851 = HIBYTE(v330);
            v537 = HIBYTE(v301);
            v702 = &qword_15C288[HIBYTE(v139)];
            v642 = &qword_15C288[(unsigned int)~v134 >> 24];
            v707 = &qword_15C288[HIBYTE(v359)];
            v660 = &qword_15C288[HIBYTE(v312)];
            v578 = &qword_15C288[HIBYTE(v138)];
            v596 = &qword_15C288[(unsigned int)~v133 >> 24];
            v621 = &qword_15C288[HIBYTE(v443)];
            v724 = &qword_15C288[HIBYTE(v140)];
            v695 = &qword_15C288[HIBYTE(v342)];
            v668 = &qword_15C288[HIBYTE(v137)];
            v540 = HIBYTE(v338);
            v688 = &qword_15C288[HIBYTE(v306)];
            v679 = &qword_15C288[HIBYTE(v335)];
            v143 = v563 ^ HIDWORD(v285) ^ 0x40000000;
            v547 = HIBYTE(v143);
            v144 = &qword_15CA98[(unsigned __int8)v330];
            v559 = HIBYTE(v349);
            v145 = &qword_15BA98[BYTE2(v359)];
            v730 = &qword_15C288[(unsigned int)~v488 >> 24];
            v146 = &qword_15B298[BYTE1(v342)];
            v745 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v141) + 1);
            v716 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v141));
            v750 = BYTE1(v301);
            v564 = &qword_15BA98[BYTE2(v477)];
            v147 = &qword_15C288[HIBYTE(v418)];
            v588 = &qword_15CA98[(unsigned __int8)v321];
            v148 = *((_DWORD *)v144 - 2)
                 ^ ~v135[2 * (unsigned __int8)v335]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(HIDWORD(v512)))
                 ^ *((_DWORD *)v146 - 2)
                 ^ *((_DWORD *)v145 - 2)
                 ^ *((_DWORD *)v147 + 2);
            v293 = 0xFFFFFF - HIDWORD(v285);
            v603 = &qword_15CA98[(unsigned __int8)v301];
            v553 = BYTE2(v301);
            v758 = (unsigned __int8)v306;
            v149 = *((_DWORD *)v144 - 1)
                 ^ *((_DWORD *)v145 - 1)
                 ^ v135[2 * (unsigned __int8)v335 + 1]
                 ^ ~((0xFFFFFF - HIDWORD(v285)) ^ 0x10000000)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(HIDWORD(v512)) + 1)
                 ^ *((_DWORD *)v146 - 1)
                 ^ *((_DWORD *)v147 + 3)
                 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v338) + 1);
            v739 = &qword_15BA98[BYTE2(v306)];
            v791 = (unsigned __int8)v477;
            v302 = &qword_15B298[BYTE1(v477)];
            v150 = &qword_15BA98[BYTE2(v140)];
            v651 = &qword_15CA98[(unsigned __int8)v143];
            v779 = BYTE2(v504);
            v484 = v149 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v349) + 1);
            v572 = BYTE2(v338);
            v151 = *((_DWORD *)&unk_15D290 + 2 * v750);
            v630 = &qword_15CA98[(unsigned __int8)v338];
            v478 = v148 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v338)) ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v349));
            v152 = *((_DWORD *)&unk_15D290 + 2 * v750 + 1);
            v153 = v135[2 * (unsigned __int8)v497 + 1] ^ v745 ^ (HIDWORD(v285) - 0xFFFFFF);
            HIDWORD(v285) -= 0x1FFFFFF;
            v154 = v153 ^ HIDWORD(qword_15B298[BYTE1(v306) - 1]);
            v155 = LODWORD(qword_15B298[BYTE1(v306) - 1]) ^ ~(v135[2 * (unsigned __int8)v497] ^ v716);
            v156 = (unsigned __int8)v342;
            v489 = &qword_15BA98[BYTE2(v342)];
            v751 = (unsigned __int8)v359;
            v307 = &qword_15B298[BYTE1(v359)];
            v157 = v154 ^ *((_DWORD *)v564 - 1) ^ *((_DWORD *)v578 + 3) ^ *((_DWORD *)v588 - 1) ^ v152;
            v158 = &qword_15BA98[BYTE2(v366)];
            v159 = v155
                 ^ *((_DWORD *)v564 - 2)
                 ^ *((_DWORD *)v578 + 2)
                 ^ *((_DWORD *)v588 - 2)
                 ^ v151
                 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v143));
            v565 = &qword_15CA98[(unsigned __int8)v349];
            v160 = *((_DWORD *)v603 - 2);
            v339 = v159;
            v161 = *((_DWORD *)v603 - 1);
            v343 = v157 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v143) + 1);
            v360 = BYTE1(v349);
            v604 = BYTE6(v512);
            v717 = BYTE1(v504);
            v589 = &qword_15CA98[(unsigned __int8)v504];
            v162 = &qword_15B298[BYTE1(v512)];
            v816 = (unsigned __int8)v366;
            v505 = &qword_15B298[BYTE1(v366)];
            v350 = *((_DWORD *)v150 - 1)
                 ^ v135[2 * v758 + 1]
                 ^ v293
                 ^ 0xDFFFFFFF
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v375) + 1)
                 ^ *((_DWORD *)v302 - 1)
                 ^ *((_DWORD *)v596 + 3)
                 ^ v161
                 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v143) + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v779 + 1);
            v303 = ~v135[2 * v758]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v375))
                 ^ *((_DWORD *)v302 - 2)
                 ^ *((_DWORD *)v150 - 2)
                 ^ *((_DWORD *)v596 + 2)
                 ^ v160
                 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v143))
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v779);
            v759 = BYTE5(v512);
            v163 = *((_DWORD *)v621 + 3);
            v164 = *((_DWORD *)v630 - 2)
                 ^ *((_DWORD *)v158 - 2)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v388))
                 ^ ~v135[2 * v156]
                 ^ *((_DWORD *)v307 - 2)
                 ^ *((_DWORD *)v621 + 2);
            v622 = &qword_15CA98[BYTE4(v512)];
            v165 = *((_DWORD *)v630 - 1)
                 ^ *((_DWORD *)v158 - 1)
                 ^ *((_DWORD *)v307 - 1)
                 ^ v135[2 * v156 + 1]
                 ^ v293
                 ^ 0xCFFFFFFF
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v388) + 1)
                 ^ v163;
            HIDWORD(v512) = &qword_15B298[BYTE1(v381)];
            v579 = &qword_15BA98[BYTE2(v522)];
            v773 = BYTE1(v375);
            v631 = &qword_15CA98[(unsigned __int8)v375];
            v308 = v165 ^ *((_DWORD *)&unk_15D290 + 2 * v360 + 1) ^ *((_DWORD *)&unk_15DA90 + 2 * v604 + 1);
            v361 = v164 ^ *((_DWORD *)&unk_15D290 + 2 * v360) ^ *((_DWORD *)&unk_15DA90 + 2 * v604);
            v166 = *((_DWORD *)v651 - 2);
            v597 = &qword_15B298[BYTE1(v393)];
            v167 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v399) + 1)
                 ^ v293
                 ^ 0xBFFFFFFF
                 ^ v135[2 * v791 + 1]
                 ^ *((_DWORD *)v162 - 1)
                 ^ HIDWORD(qword_15BA98[BYTE2(v381) - 1])
                 ^ *((_DWORD *)v642 + 3)
                 ^ *((_DWORD *)v651 - 1);
            v652 = &qword_15CA98[(unsigned __int8)v388];
            v780 = BYTE1(v388);
            v784 = BYTE2(v409);
            v168 = v166
                 ^ *((_DWORD *)v642 + 2)
                 ^ ~v135[2 * v791]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v399))
                 ^ *((_DWORD *)v162 - 2)
                 ^ LODWORD(qword_15BA98[BYTE2(v381) - 1])
                 ^ *((_DWORD *)&unk_15D290 + 2 * v717);
            v792 = (unsigned __int8)v381;
            v746 = &qword_15C288[HIBYTE(v381)];
            v367 = v168 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v375));
            v169 = *((_DWORD *)v565 - 1);
            v376 = *((_DWORD *)&unk_15D290 + 2 * v717 + 1) ^ v167 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v375) + 1);
            v170 = &qword_15BA98[BYTE2(v393)];
            v171 = (unsigned __int8)v522;
            v523 = &qword_15B298[BYTE1(v522)];
            v833 = v171;
            v172 = *((_DWORD *)v565 - 2)
                 ^ ~v135[2 * v751]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v409))
                 ^ *((_DWORD *)v505 - 2)
                 ^ *((_DWORD *)v170 - 2)
                 ^ *((_DWORD *)v660 + 2);
            v566 = &qword_15BA98[BYTE2(v528)];
            v796 = BYTE1(v399);
            v173 = *((_DWORD *)v505 - 1)
                 ^ v135[2 * v751 + 1]
                 ^ v293
                 ^ 0xAFFFFFFF
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v409) + 1)
                 ^ *((_DWORD *)v170 - 1)
                 ^ *((_DWORD *)v660 + 3)
                 ^ v169;
            v801 = BYTE2(v425);
            v661 = &qword_15CA98[(unsigned __int8)v399];
            v174 = *((_DWORD *)&unk_15D290 + 2 * v759);
            v175 = *((_DWORD *)&unk_15D290 + 2 * v759 + 1);
            v760 = (unsigned __int8)v393;
            v382 = v172 ^ v174 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v388));
            v847 = (unsigned __int8)v418;
            v767 = &qword_15C288[HIBYTE(v393)];
            v389 = v173 ^ v175 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v388) + 1);
            v643 = &qword_15B298[BYTE1(v418)];
            v176 = &qword_15BA98[BYTE2(v443)];
            v177 = *((_DWORD *)v579 - 2);
            v807 = BYTE1(v409);
            v178 = v135[2 * (unsigned __int8)v512 + 1]
                 ^ v293
                 ^ 0x9FFFFFFF
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v425) + 1)
                 ^ *(_DWORD *)(HIDWORD(v512) - 4)
                 ^ *((_DWORD *)v579 - 1);
            v718 = &qword_15CA98[(unsigned __int8)v409];
            v811 = BYTE2(v435);
            v506 = (unsigned __int8)v528;
            v580 = &qword_15B298[BYTE1(v528)];
            v179 = &qword_15BA98[BYTE2(v461)];
            v180 = ~v135[2 * (unsigned __int8)v512]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v425))
                 ^ *(_DWORD *)(HIDWORD(v512) - 8)
                 ^ v177
                 ^ *((_DWORD *)v668 + 2)
                 ^ *((_DWORD *)v589 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v773);
            v181 = v178 ^ *((_DWORD *)v668 + 3) ^ *((_DWORD *)v589 - 1) ^ *((_DWORD *)&unk_15D290 + 2 * v773 + 1);
            v842 = BYTE1(v425);
            v669 = &qword_15CA98[(unsigned __int8)v425];
            v394 = v180 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v399));
            v400 = v181 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v399) + 1);
            v182 = &qword_15BA98[BYTE2(v418)];
            v513 = (unsigned __int8)v443;
            v183 = BYTE2(v452);
            v444 = &qword_15B298[BYTE1(v443)];
            v184 = *((_DWORD *)v597 - 1)
                 ^ v135[2 * v816 + 1]
                 ^ ~(v293 ^ 0x70000000)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v435) + 1)
                 ^ *((_DWORD *)v182 - 1)
                 ^ *((_DWORD *)v679 + 3)
                 ^ *((_DWORD *)v622 - 1);
            v185 = *((_DWORD *)v622 - 2)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v435))
                 ^ ~v135[2 * v816]
                 ^ *((_DWORD *)v597 - 2)
                 ^ *((_DWORD *)v182 - 2)
                 ^ *((_DWORD *)v679 + 2);
            v590 = &qword_15BA98[BYTE2(v312)];
            v186 = &qword_15CA98[(unsigned __int8)v435];
            LOBYTE(v156) = v452;
            v436 = BYTE1(v435);
            v680 = v186;
            v623 = BYTE2(v469);
            v453 = BYTE1(v452);
            v752 = &qword_15CA98[(unsigned __int8)v156];
            v410 = v185 ^ *((_DWORD *)&unk_15D290 + 2 * v780) ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v409));
            v419 = *((_DWORD *)&unk_15D290 + 2 * v780 + 1) ^ v184 ^ *((_DWORD *)&unk_15DA90 + 2 * v784 + 1);
            LOBYTE(v185) = v469;
            v470 = BYTE1(v469);
            v774 = &qword_15CA98[(unsigned __int8)v185];
            v187 = *((_DWORD *)v566 - 2) ^ *((_DWORD *)v523 - 2) ^ ~v135[2 * v792] ^ *((_DWORD *)&unk_15AA90 + 2 * v823);
            v188 = ~(v293 ^ 0x80000000)
                 ^ v135[2 * v792 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v823 + 1)
                 ^ *((_DWORD *)v523 - 1)
                 ^ *((_DWORD *)v566 - 1);
            v517 = BYTE2(v330);
            v567 = BYTE1(v330);
            v189 = *((_DWORD *)v688 + 2) ^ v187;
            v190 = *((_DWORD *)v688 + 3) ^ v188 ^ *((_DWORD *)v631 - 1);
            v524 = (unsigned __int8)v461;
            v598 = &qword_15B298[BYTE1(v461)];
            v605 = &qword_15BA98[BYTE2(v497)];
            v689 = &qword_15B298[BYTE1(v497)];
            v426 = v190 ^ *((_DWORD *)&unk_15D290 + 2 * v796 + 1) ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v425) + 1);
            v331 = v189
                 ^ *((_DWORD *)v631 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v796)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v801);
            v191 = *((_DWORD *)v652 - 2);
            v462 = BYTE2(v321);
            v498 = BYTE1(v321);
            v192 = ~(v293 ^ 0x90000000)
                 ^ v135[2 * v760 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v828 + 1)
                 ^ *((_DWORD *)v643 - 1);
            v193 = *((_DWORD *)v652 - 1);
            v194 = ~v135[2 * v760] ^ *((_DWORD *)&unk_15AA90 + 2 * v828) ^ *((_DWORD *)v643 - 2) ^ *((_DWORD *)v176 - 2);
            v529 = (unsigned __int8)v312;
            v644 = &qword_15B298[BYTE1(v312)];
            v653 = &qword_15BA98[BYTE2(v335)];
            v761 = &qword_15B298[BYTE1(v335)];
            v313 = v194
                 ^ *((_DWORD *)v695 + 2)
                 ^ v191
                 ^ *((_DWORD *)&unk_15D290 + 2 * v807)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v811);
            v322 = *((_DWORD *)v695 + 3)
                 ^ v192
                 ^ *((_DWORD *)v176 - 1)
                 ^ v193
                 ^ *((_DWORD *)&unk_15D290 + 2 * v807 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v811 + 1);
            v785 = *((_DWORD *)&unk_15D290 + 2 * v436);
            v793 = *((_DWORD *)&unk_15D290 + 2 * v436 + 1);
            v437 = v135[2 * v833 + 1]
                 ^ ~(v293 ^ 0xA0000000)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v837 + 1)
                 ^ *((_DWORD *)v580 - 1)
                 ^ *((_DWORD *)v179 - 1)
                 ^ *((_DWORD *)v702 + 3)
                 ^ *((_DWORD *)v661 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v842 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v183 + 1);
            v336 = ~v135[2 * v833]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v837)
                 ^ *((_DWORD *)v580 - 2)
                 ^ *((_DWORD *)v179 - 2)
                 ^ *((_DWORD *)v702 + 2)
                 ^ *((_DWORD *)v661 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v842)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v183);
            v195 = *((_DWORD *)v444 - 1);
            v196 = *((_DWORD *)v707 + 3);
            v445 = ~v135[2 * v847]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v851)
                 ^ *((_DWORD *)v444 - 2)
                 ^ *((_DWORD *)v590 - 2)
                 ^ *((_DWORD *)v707 + 2)
                 ^ *((_DWORD *)v718 - 2)
                 ^ v785
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v623);
            v708 = *((_DWORD *)&unk_15D290 + 2 * v453 + 1);
            v197 = *((_DWORD *)&unk_15D290 + 2 * v453);
            v786 = *((_DWORD *)&unk_15D290 + 2 * v470 + 1);
            v797 = *((_DWORD *)&unk_15DA90 + 2 * v517 + 1);
            v454 = v196
                 ^ ~(v293 ^ 0xB0000000)
                 ^ v135[2 * v847 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v851 + 1)
                 ^ v195
                 ^ *((_DWORD *)v590 - 1)
                 ^ *((_DWORD *)v718 - 1)
                 ^ v793
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v623 + 1);
            v624 = *((_DWORD *)&unk_15DA90 + 2 * v462 + 1);
            v463 = *((_DWORD *)v669 - 2)
                 ^ *((_DWORD *)v724 + 2)
                 ^ ~v135[2 * v506]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v537)
                 ^ *((_DWORD *)v598 - 2)
                 ^ *((_DWORD *)v605 - 2)
                 ^ v197
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v462);
            v198 = ~(v293 ^ 0xC0000000) ^ v135[2 * v506 + 1];
            v591 = *((_DWORD *)v489 - 2);
            v199 = ~(v293 ^ 0xE0000000)
                 ^ v135[2 * v524 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v547 + 1)
                 ^ *((_DWORD *)v689 - 1)
                 ^ *((_DWORD *)v739 - 1)
                 ^ *((_DWORD *)v746 + 3)
                 ^ *((_DWORD *)v752 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v498 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v553 + 1);
            v288 = *((_DWORD *)&unk_15DA90 + 2 * v572 + 1)
                 ^ ~(v293 ^ 0xF0000000)
                 ^ v135[2 * v529 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v559 + 1)
                 ^ *((_DWORD *)v761 - 1)
                 ^ *((_DWORD *)v489 - 1)
                 ^ *((_DWORD *)v767 + 3)
                 ^ *((_DWORD *)v774 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v567 + 1);
            v490 = *((_DWORD *)v730 + 2)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v540)
                 ^ ~v135[2 * v513]
                 ^ *((_DWORD *)v644 - 2)
                 ^ *((_DWORD *)v653 - 2)
                 ^ *((_DWORD *)v680 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v470)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v517);
            v507 = *((_DWORD *)&unk_15DA90 + 2 * v553)
                 ^ ~v135[2 * v524]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v547)
                 ^ *((_DWORD *)v689 - 2)
                 ^ *((_DWORD *)v739 - 2)
                 ^ *((_DWORD *)v746 + 2)
                 ^ *((_DWORD *)v752 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v498);
            v518 = ~v135[2 * v529]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v559)
                 ^ *((_DWORD *)v761 - 2)
                 ^ v591
                 ^ *((_DWORD *)v767 + 2)
                 ^ *((_DWORD *)v774 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v567)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v572);
            v471 = v198
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v537 + 1)
                 ^ *((_DWORD *)v598 - 1)
                 ^ *((_DWORD *)v605 - 1)
                 ^ *((_DWORD *)v724 + 3)
                 ^ *((_DWORD *)v669 - 1)
                 ^ v708
                 ^ v624;
            v554 = HIBYTE(v376);
            v560 = HIBYTE(v389);
            v499 = v135[2 * v513 + 1]
                 ^ ~(v293 ^ 0xD0000000)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v540 + 1)
                 ^ *((_DWORD *)v644 - 1)
                 ^ *((_DWORD *)v653 - 1)
                 ^ *((_DWORD *)v730 + 3)
                 ^ *((_DWORD *)v680 - 1)
                 ^ v786
                 ^ v797;
            v514 = v199;
            v817 = HIBYTE(v199);
            v824 = HIBYTE(v288);
            v843 = HIBYTE(v343);
            v852 = HIBYTE(v484);
            v541 = HIBYTE(v350);
            v548 = HIBYTE(v308);
            v709 = &qword_15C288[HIBYTE(v394)];
            v606 = &qword_15C288[HIBYTE(v490)];
            v632 = &qword_15C288[HIBYTE(v507)];
            v703 = &qword_15C288[HIBYTE(v382)];
            v645 = &qword_15C288[HIBYTE(v518)];
            v654 = &qword_15C288[HIBYTE(v339)];
            v719 = &qword_15C288[HIBYTE(v410)];
            v662 = &qword_15C288[HIBYTE(v478)];
            v294 = &qword_15C288[HIBYTE(v331)];
            v681 = &qword_15C288[HIBYTE(v361)];
            v690 = &qword_15C288[HIBYTE(v367)];
            v670 = &qword_15C288[HIBYTE(v303)];
            v200 = qword_15CA98[(unsigned __int8)v343 - 1];
            v201 = &qword_15B298[BYTE1(v367)];
            v202 = &qword_15BA98[BYTE2(v382)];
            v203 = &qword_15C288[HIBYTE(v445)];
            v204 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v400))
                 ^ v135[2 * (unsigned __int8)v478]
                 ^ LODWORD(qword_15B298[BYTE1(v361) - 1])
                 ^ *((_DWORD *)v202 - 2);
            v205 = &qword_15BA98[BYTE2(v394)];
            v206 = v135[2 * (unsigned __int8)v478 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v400) + 1)
                 ^ HIDWORD(qword_15B298[BYTE1(v361) - 1])
                 ^ *((_DWORD *)v202 - 1)
                 ^ *((_DWORD *)v203 + 3);
            v731 = (unsigned __int8)v361;
            v747 = &qword_15BA98[BYTE2(v361)];
            v753 = (unsigned __int8)v382;
            v362 = &qword_15B298[BYTE1(v382)];
            v207 = v204 ^ *((_DWORD *)v203 + 2) ^ v200 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v350));
            v208 = v206 ^ HIDWORD(v200) ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v350) + 1);
            LODWORD(v200) = &qword_15CA98[(unsigned __int8)v350];
            v383 = BYTE2(v350);
            v209 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v376) + 1);
            WORD2(v200) = v376;
            v374 = v207 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v376));
            v210 = BYTE5(v200);
            v536 = v208 ^ v209;
            v573 = &qword_15CA98[BYTE4(v200)];
            v211 = *((_DWORD *)v201 - 1);
            HIDWORD(v200) = *((_DWORD *)v205 - 1);
            v212 = v135[2 * (unsigned __int8)v303] ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v419)) ^ *((_DWORD *)v201 - 2);
            v213 = *((_DWORD *)v205 - 2);
            v214 = (unsigned __int8)v367;
            v775 = &qword_15BA98[BYTE2(v367)];
            v215 = &qword_15C288[HIBYTE(v463)];
            v216 = *((_DWORD *)v215 + 2);
            v768 = (unsigned __int8)v394;
            v217 = v135[2 * (unsigned __int8)v303 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v419) + 1)
                 ^ v211
                 ^ HIDWORD(v200)
                 ^ *((_DWORD *)v215 + 3);
            v218 = &qword_15B298[BYTE1(v394)];
            v219 = &qword_15BA98[BYTE2(v331)];
            v220 = v212 ^ v213 ^ v216 ^ LODWORD(qword_15CA98[(unsigned __int8)v484 - 1]);
            v351 = &qword_15CA98[(unsigned __int8)v308];
            v221 = *((_DWORD *)&unk_15D290 + 2 * BYTE1(v308) + 1);
            v368 = BYTE2(v308);
            v696 = BYTE1(v389);
            v581 = &qword_15CA98[(unsigned __int8)v389];
            v222 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v389) + 1);
            v787 = (unsigned __int8)v410;
            v387 = v220 ^ *((_DWORD *)&unk_15D290 + 2 * BYTE1(v308)) ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v389));
            v309 = &qword_15B298[BYTE1(v410)];
            v392 = v217 ^ HIDWORD(qword_15CA98[(unsigned __int8)v484 - 1]) ^ v221 ^ v222;
            HIDWORD(v200) = &qword_15BA98[BYTE2(v410)];
            v223 = v135[2 * v731 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v426) + 1)
                 ^ *((_DWORD *)v362 - 1)
                 ^ *(_DWORD *)(HIDWORD(v200) - 4);
            v224 = *(_DWORD *)(HIDWORD(v200) - 8)
                 ^ v135[2 * v731]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v426))
                 ^ *((_DWORD *)v362 - 2);
            v525 = BYTE1(v400);
            v225 = *(_QWORD *)(v200 - 8);
            v592 = &qword_15CA98[(unsigned __int8)v400];
            v226 = v224 ^ *((_DWORD *)v606 + 2);
            v227 = BYTE2(v426);
            v798 = (unsigned __int8)v331;
            v332 = &qword_15B298[BYTE1(v331)];
            v228 = *((_DWORD *)&unk_15D290 + 2 * v210) ^ v226 ^ v225;
            HIDWORD(v225) ^= *((_DWORD *)&unk_15D290 + 2 * v210 + 1) ^ v223 ^ *((_DWORD *)v606 + 3);
            LODWORD(v225) = &qword_15BA98[BYTE2(v336)];
            v732 = BYTE1(v419);
            v607 = &qword_15CA98[(unsigned __int8)v419];
            v229 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v400) + 1);
            v398 = v228 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v400));
            v230 = v135[2 * v214];
            v231 = v135[2 * v214 + 1];
            v408 = HIDWORD(v225) ^ v229;
            v530 = &qword_15B298[BYTE1(v313)];
            v232 = BYTE2(v437);
            HIDWORD(v225) = &qword_15BA98[BYTE2(v445)];
            v233 = BYTE1(v426);
            v625 = &qword_15CA98[(unsigned __int8)v426];
            v234 = *((_DWORD *)v632 + 3)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v322) + 1)
                 ^ v231
                 ^ *((_DWORD *)v218 - 1)
                 ^ *((_DWORD *)v219 - 1)
                 ^ *((_DWORD *)v351 - 1);
            v235 = *((_DWORD *)v632 + 2)
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v322))
                 ^ v230
                 ^ *((_DWORD *)v218 - 2)
                 ^ *((_DWORD *)v219 - 2)
                 ^ *((_DWORD *)v351 - 2);
            v352 = &qword_15B298[BYTE1(v336)];
            v236 = v235 ^ *((_DWORD *)&unk_15D290 + 2 * v696);
            v237 = v234 ^ *((_DWORD *)&unk_15D290 + 2 * v696 + 1);
            v599 = &qword_15BA98[BYTE2(v463)];
            v808 = BYTE1(v322);
            v697 = &qword_15CA98[(unsigned __int8)v322];
            v238 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v419) + 1);
            v812 = BYTE2(v454);
            v417 = v236 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v419));
            v424 = v237 ^ v238;
            v239 = &qword_15BA98[BYTE2(v313)];
            v240 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v437) + 1)
                 ^ v135[2 * v753 + 1]
                 ^ *((_DWORD *)v309 - 1)
                 ^ *((_DWORD *)v239 - 1);
            v241 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v437))
                 ^ v135[2 * v753]
                 ^ *((_DWORD *)v309 - 2)
                 ^ *((_DWORD *)v239 - 2);
            v310 = BYTE2(v471);
            v242 = (unsigned __int8)v313;
            v243 = *((_DWORD *)v645 + 3) ^ v240 ^ *((_DWORD *)v573 - 1);
            v244 = v241 ^ *((_DWORD *)v645 + 2) ^ *((_DWORD *)v573 - 2);
            v754 = &qword_15C288[HIBYTE(v313)];
            v838 = (unsigned __int8)v445;
            v574 = &qword_15B298[BYTE1(v445)];
            v245 = v244 ^ *((_DWORD *)&unk_15D290 + 2 * v525) ^ *((_DWORD *)&unk_15DA90 + 2 * v227);
            v563 = v243 ^ *((_DWORD *)&unk_15D290 + 2 * v525 + 1) ^ *((_DWORD *)&unk_15DA90 + 2 * v227 + 1);
            v246 = &qword_15BA98[BYTE2(v490)];
            LOWORD(v240) = v437;
            v434 = v245;
            v820 = BYTE1(v240);
            v646 = &qword_15CA98[(unsigned __int8)v240];
            v314 = (unsigned __int8)v336;
            v781 = &qword_15C288[HIBYTE(v336)];
            v247 = *((_DWORD *)v581 - 2);
            v848 = (unsigned __int8)v463;
            v248 = v135[2 * v768 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v454) + 1)
                 ^ *((_DWORD *)v332 - 1)
                 ^ *(_DWORD *)(v225 - 4)
                 ^ *((_DWORD *)v654 + 3)
                 ^ *((_DWORD *)v581 - 1);
            v582 = &qword_15B298[BYTE1(v463)];
            v249 = v247
                 ^ v135[2 * v768]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v454))
                 ^ *((_DWORD *)v332 - 2)
                 ^ *(_DWORD *)(v225 - 8)
                 ^ *((_DWORD *)v654 + 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v732);
            v829 = BYTE1(v454);
            v655 = &qword_15CA98[(unsigned __int8)v454];
            v442 = v249 ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v322));
            v521 = v248 ^ *((_DWORD *)&unk_15D290 + 2 * v732 + 1) ^ *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v322) + 1);
            v323 = BYTE1(v471);
            v250 = *((_DWORD *)v530 - 2)
                 ^ v135[2 * v787]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v471))
                 ^ *(_DWORD *)(HIDWORD(v225) - 8);
            v251 = v135[2 * v787 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v471) + 1)
                 ^ *((_DWORD *)v530 - 1)
                 ^ *(_DWORD *)(HIDWORD(v225) - 4);
            v725 = &qword_15CA98[(unsigned __int8)v471];
            v333 = (unsigned __int8)v490;
            v531 = &qword_15B298[BYTE1(v490)];
            v794 = BYTE1(v499);
            v733 = &qword_15CA98[(unsigned __int8)v499];
            v451 = *((_DWORD *)v592 - 2)
                 ^ v250
                 ^ *((_DWORD *)v662 + 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v233)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v232);
            v252 = *(v607 - 1);
            v468 = *((_DWORD *)v662 + 3)
                 ^ v251
                 ^ *((_DWORD *)v592 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v233 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v232 + 1);
            v253 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v499)) ^ v135[2 * v798] ^ *((_DWORD *)v352 - 2);
            v254 = *((_DWORD *)&unk_15AA90 + 2 * HIBYTE(v499) + 1) ^ v135[2 * v798 + 1] ^ *((_DWORD *)v352 - 1);
            v255 = *((_DWORD *)v599 - 2);
            v256 = *((_DWORD *)v599 - 1);
            v353 = (unsigned __int8)v507;
            v600 = &qword_15B298[BYTE1(v507)];
            v608 = &qword_15BA98[BYTE2(v339)];
            v257 = BYTE2(v288);
            v663 = &qword_15B298[BYTE1(v518)];
            LODWORD(v252) = v252 ^ v253 ^ v255 ^ *((_DWORD *)v670 + 2) ^ *((_DWORD *)&unk_15D290 + 2 * v808);
            HIDWORD(v252) ^= v254 ^ v256 ^ *((_DWORD *)v670 + 3) ^ *((_DWORD *)&unk_15D290 + 2 * v808 + 1);
            v671 = &qword_15BA98[BYTE2(v478)];
            v740 = &qword_15B298[BYTE1(v478)];
            v258 = (_DWORD *)((char *)&unk_15DA90 + 8 * v310);
            v460 = v252 ^ *((_DWORD *)&unk_15DA90 + 2 * v812);
            v337 = BYTE1(v514);
            v476 = HIDWORD(v252) ^ *((_DWORD *)&unk_15DA90 + 2 * v812 + 1);
            v762 = &qword_15CA98[(unsigned __int8)v514];
            v311 = BYTE2(v343);
            HIDWORD(v252) = *((_DWORD *)v681 + 3);
            v344 = BYTE1(v343);
            v259 = *((_DWORD *)&unk_15AA90 + 2 * v817)
                 ^ v135[2 * v242]
                 ^ *((_DWORD *)v574 - 2)
                 ^ *((_DWORD *)v246 - 2)
                 ^ *((_DWORD *)v681 + 2);
            v682 = &qword_15B298[BYTE1(v339)];
            v260 = v135[2 * v242 + 1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v817 + 1)
                 ^ *((_DWORD *)v574 - 1)
                 ^ *((_DWORD *)v246 - 1)
                 ^ HIDWORD(v252)
                 ^ *((_DWORD *)v625 - 1);
            v261 = v259 ^ *((_DWORD *)v625 - 2);
            v626 = &qword_15BA98[BYTE2(v303)];
            v769 = &qword_15B298[BYTE1(v303)];
            v488 = v261 ^ *((_DWORD *)&unk_15D290 + 2 * v820) ^ *v258;
            HIDWORD(v252) = (unsigned __int8)v288;
            v289 = BYTE1(v288);
            v788 = &qword_15CA98[HIDWORD(v252)];
            LODWORD(v225) = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v499));
            v262 = *((_DWORD *)&unk_15DA90 + 2 * BYTE2(v499) + 1);
            v496 = v260 ^ *((_DWORD *)&unk_15D290 + 2 * v820 + 1) ^ v258[1];
            HIDWORD(v252) = *((_DWORD *)&unk_15AA90 + 2 * v824 + 1) ^ v135[2 * v314 + 1];
            v263 = v135[2 * v314] ^ *((_DWORD *)&unk_15AA90 + 2 * v824);
            v304 = BYTE2(v484);
            v315 = BYTE1(v484);
            LODWORD(v252) = &qword_15BA98[BYTE2(v507)];
            v503 = *((_DWORD *)v690 + 3)
                 ^ HIDWORD(v252)
                 ^ *((_DWORD *)v582 - 1)
                 ^ *(_DWORD *)(v252 - 4)
                 ^ *((_DWORD *)v697 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v829 + 1)
                 ^ v262;
            v483 = v263
                 ^ *((_DWORD *)v582 - 2)
                 ^ *(_DWORD *)(v252 - 8)
                 ^ *((_DWORD *)v690 + 2)
                 ^ *((_DWORD *)v697 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v829)
                 ^ v225;
            LODWORD(v225) = (char *)&unk_15D290 + 8 * BYTE1(v514);
            v633 = &v135[2 * (unsigned __int8)v518];
            v512 = *((_QWORD *)&unk_15AA90 + v843)
                 ^ *(_QWORD *)&v135[2 * v838]
                 ^ *(v531 - 1)
                 ^ qword_15BA98[BYTE2(v518) - 1]
                 ^ v703[1]
                 ^ *(v646 - 1)
                 ^ *((_QWORD *)&unk_15D290 + v323)
                 ^ *((_QWORD *)&unk_15DA90 + BYTE2(v514));
            v691 = &v135[2 * (unsigned __int8)v339];
            v264 = v135[2 * v333 + 1] ^ *((_DWORD *)&unk_15AA90 + 2 * v541 + 1);
            v265 = v135[2 * v333] ^ *((_DWORD *)&unk_15AA90 + 2 * v541);
            v527 = *((_DWORD *)&unk_15AA90 + 2 * v852 + 1)
                 ^ v135[2 * v848 + 1]
                 ^ *((_DWORD *)v600 - 1)
                 ^ *((_DWORD *)v608 - 1)
                 ^ *((_DWORD *)v709 + 3)
                 ^ *((_DWORD *)v655 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v794 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v257 + 1);
            v329 = v135[2 * v848]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v852)
                 ^ *((_DWORD *)v600 - 2)
                 ^ *((_DWORD *)v608 - 2)
                 ^ *((_DWORD *)v709 + 2)
                 ^ *((_DWORD *)v655 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v794)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v257);
            HIDWORD(v225) = *((_DWORD *)&unk_15AA90 + 2 * v548) ^ v135[2 * v353];
            v575 = *((_DWORD *)&unk_15D290 + 2 * v289 + 1);
            v266 = v135[2 * v353 + 1] ^ *((_DWORD *)&unk_15AA90 + 2 * v548 + 1);
            v267 = v264
                 ^ *((_DWORD *)v663 - 1)
                 ^ *((_DWORD *)v671 - 1)
                 ^ *((_DWORD *)v719 + 3)
                 ^ *((_DWORD *)v725 - 1)
                 ^ *(_DWORD *)(v225 + 4);
            v549 = *((_DWORD *)&unk_15D290 + 2 * v289);
            v268 = HIDWORD(v225)
                 ^ *((_DWORD *)v682 - 2)
                 ^ *((_DWORD *)v626 - 2)
                 ^ *((_DWORD *)v294 + 2)
                 ^ *((_DWORD *)v733 - 2);
            v583 = *((_DWORD *)&unk_15DA90 + 2 * v304);
            v269 = *v633
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v554)
                 ^ *((_DWORD *)v740 - 2)
                 ^ *((_DWORD *)v747 - 2)
                 ^ *((_DWORD *)v754 + 2)
                 ^ *((_DWORD *)v762 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v344);
            v270 = *((_DWORD *)&unk_15DA90 + 2 * v383);
            v348 = v633[1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v554 + 1)
                 ^ *((_DWORD *)v740 - 1)
                 ^ *((_DWORD *)v747 - 1)
                 ^ *((_DWORD *)v754 + 3)
                 ^ *((_DWORD *)v762 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v344 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v383 + 1);
            v134 = *((_DWORD *)&unk_15AA90 + 2 * v560)
                 ^ *v691
                 ^ *((_DWORD *)v769 - 2)
                 ^ *((_DWORD *)v775 - 2)
                 ^ *((_DWORD *)v781 + 2)
                 ^ *((_DWORD *)v788 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v315)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v368);
            v287 = v267 ^ *((_DWORD *)&unk_15DA90 + 2 * v311 + 1);
            v136 = v691[1]
                 ^ *((_DWORD *)&unk_15AA90 + 2 * v560 + 1)
                 ^ *((_DWORD *)v769 - 1)
                 ^ *((_DWORD *)v775 - 1)
                 ^ *((_DWORD *)v781 + 3)
                 ^ *((_DWORD *)v788 - 1)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v315 + 1)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v368 + 1);
            v132 = *((_DWORD *)v671 - 2)
                 ^ v265
                 ^ *((_DWORD *)v663 - 2)
                 ^ *((_DWORD *)v719 + 2)
                 ^ *((_DWORD *)v725 - 2)
                 ^ *((_DWORD *)&unk_15D290 + 2 * v337)
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v311);
            v292 = v266
                 ^ *((_DWORD *)v682 - 1)
                 ^ *((_DWORD *)v626 - 1)
                 ^ *((_DWORD *)v294 + 3)
                 ^ *((_DWORD *)v733 - 1)
                 ^ v575
                 ^ *((_DWORD *)&unk_15DA90 + 2 * v304 + 1);
            v300 = v269 ^ v270;
            v133 = v268 ^ v549 ^ v583;
          }
          while ( v285 != 0xF1FFFFFFFFFFFFFFLL );
          v5 = v135;
          v271 = v374;
          v272 = &v886;
          v917 = v387;
          v273 = &v917;
          v915 = v374;
          v918 = v392;
          v916 = v536;
          v919 = v398;
          v920 = v408;
          v921 = v417;
          v922 = v424;
          v923 = v434;
          v924 = v563;
          v925 = v442;
          v926 = v521;
          v927 = v451;
          v928 = v468;
          v929 = v460;
          v930 = v476;
          v938 = v132;
          v931 = v488;
          v939 = v287;
          v932 = v496;
          v941 = v292;
          v942 = v269 ^ v270;
          v274 = v536;
          v933 = v483;
          v944 = v134;
          v945 = v136;
          v934 = v503;
          v940 = v268 ^ v549 ^ v583;
          v943 = v348;
          v935 = v512;
          v275 = v882;
          v276 = v609;
          v936 = v329;
          v937 = v527;
          while ( 1 )
          {
            v279 = *(_DWORD *)(v275 + 8);
            v275 += 8;
            v280 = *(_DWORD *)(v275 + 4);
            *(_DWORD *)v275 = v279 ^ v276 ^ v271;
            *(_DWORD *)(v275 + 4) = v280 ^ v274 ^ HIDWORD(v276);
            if ( &dest[120] == (_BYTE *)v275 )
              break;
            v277 = *v272;
            v273 += 2;
            v278 = v272[1];
            v272 += 2;
            v271 = *(v273 - 2);
            v274 = *(v273 - 1);
            v276 = __PAIR64__(v278, v277);
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
    result = memcpy(v883, dest, 0x80u);
    *(_DWORD *)(a1 + 128) = v3;
  }
  return result;
}
