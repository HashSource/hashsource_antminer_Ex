unsigned int __fastcall sub_31687C(int *a1, char a2, char a3, _BYTE *a4)
{
  int v4; // r3
  unsigned int result; // r0
  int v7; // [sp+14h] [bp-180h]
  int v8; // [sp+14h] [bp-180h]
  int v9; // [sp+18h] [bp-17Ch]
  int v10; // [sp+18h] [bp-17Ch]
  int v11; // [sp+1Ch] [bp-178h]
  int v12; // [sp+1Ch] [bp-178h]
  int v13; // [sp+20h] [bp-174h]
  int v14; // [sp+20h] [bp-174h]
  int v15; // [sp+24h] [bp-170h]
  int v16; // [sp+24h] [bp-170h]
  int v17; // [sp+28h] [bp-16Ch]
  int v18; // [sp+28h] [bp-16Ch]
  int v19; // [sp+2Ch] [bp-168h]
  int v20; // [sp+2Ch] [bp-168h]
  int v21; // [sp+30h] [bp-164h]
  int v22; // [sp+30h] [bp-164h]
  int v23; // [sp+34h] [bp-160h]
  int v24; // [sp+34h] [bp-160h]
  int v25; // [sp+38h] [bp-15Ch]
  int v26; // [sp+38h] [bp-15Ch]
  unsigned int v27; // [sp+44h] [bp-150h]
  int v28; // [sp+4Ch] [bp-148h]
  int v29; // [sp+50h] [bp-144h]
  int v30; // [sp+54h] [bp-140h]
  int v31; // [sp+58h] [bp-13Ch]
  int v32; // [sp+60h] [bp-134h]
  int v33; // [sp+64h] [bp-130h]
  int v34; // [sp+68h] [bp-12Ch]
  int v35; // [sp+6Ch] [bp-128h]
  int v36; // [sp+78h] [bp-11Ch]
  int v37; // [sp+7Ch] [bp-118h]
  int v38; // [sp+80h] [bp-114h]
  int v39; // [sp+84h] [bp-110h]
  int v40; // [sp+88h] [bp-10Ch]
  int v41; // [sp+8Ch] [bp-108h]
  int v42; // [sp+90h] [bp-104h]
  int v43; // [sp+94h] [bp-100h]
  int v44; // [sp+98h] [bp-FCh]
  int v45; // [sp+9Ch] [bp-F8h]
  int v46; // [sp+A0h] [bp-F4h]
  int v47; // [sp+A4h] [bp-F0h]
  int v48; // [sp+A8h] [bp-ECh]
  int v49; // [sp+ACh] [bp-E8h]
  int v50; // [sp+B0h] [bp-E4h]
  int v51; // [sp+B4h] [bp-E0h]
  unsigned int v52; // [sp+BCh] [bp-D8h]
  unsigned int v53; // [sp+BCh] [bp-D8h]
  unsigned int v54; // [sp+C0h] [bp-D4h]
  unsigned int v55; // [sp+C4h] [bp-D0h]
  unsigned int v56; // [sp+C8h] [bp-CCh]
  unsigned int v57; // [sp+C8h] [bp-CCh]
  unsigned int v58; // [sp+CCh] [bp-C8h]
  unsigned int v59; // [sp+D0h] [bp-C4h]
  unsigned int v60; // [sp+D4h] [bp-C0h]
  int j; // [sp+E8h] [bp-ACh]
  int k; // [sp+E8h] [bp-ACh]
  int m; // [sp+E8h] [bp-ACh]
  int n; // [sp+E8h] [bp-ACh]
  int ii; // [sp+E8h] [bp-ACh]
  int v68; // [sp+ECh] [bp-A8h]
  int v69; // [sp+ECh] [bp-A8h]
  int v70; // [sp+ECh] [bp-A8h]
  int v71; // [sp+ECh] [bp-A8h]
  int v72; // [sp+ECh] [bp-A8h]
  int v73; // [sp+ECh] [bp-A8h]
  int v74; // [sp+ECh] [bp-A8h]
  int v75; // [sp+ECh] [bp-A8h]
  int v76; // [sp+ECh] [bp-A8h]
  int v77; // [sp+ECh] [bp-A8h]
  int v78; // [sp+ECh] [bp-A8h]
  int v79; // [sp+F0h] [bp-A4h]
  int v80; // [sp+F0h] [bp-A4h]
  int v81; // [sp+F0h] [bp-A4h]
  int v82; // [sp+F0h] [bp-A4h]
  int v83; // [sp+F0h] [bp-A4h]
  int v84; // [sp+F0h] [bp-A4h]
  int v85; // [sp+F0h] [bp-A4h]
  int v86; // [sp+F0h] [bp-A4h]
  int v87; // [sp+F0h] [bp-A4h]
  int v88; // [sp+F0h] [bp-A4h]
  int v89; // [sp+F0h] [bp-A4h]
  int v90; // [sp+F4h] [bp-A0h]
  int v91; // [sp+F4h] [bp-A0h]
  int v92; // [sp+F4h] [bp-A0h]
  int v93; // [sp+F4h] [bp-A0h]
  int v94; // [sp+F4h] [bp-A0h]
  int v95; // [sp+F4h] [bp-A0h]
  int v96; // [sp+F4h] [bp-A0h]
  int v97; // [sp+F4h] [bp-A0h]
  int v98; // [sp+F4h] [bp-A0h]
  int v99; // [sp+F8h] [bp-9Ch]
  int v100; // [sp+F8h] [bp-9Ch]
  int v101; // [sp+F8h] [bp-9Ch]
  int v102; // [sp+F8h] [bp-9Ch]
  int v103; // [sp+F8h] [bp-9Ch]
  int v104; // [sp+F8h] [bp-9Ch]
  int v105; // [sp+F8h] [bp-9Ch]
  int v106; // [sp+F8h] [bp-9Ch]
  int v107; // [sp+F8h] [bp-9Ch]
  int v108; // [sp+F8h] [bp-9Ch]
  int v109; // [sp+F8h] [bp-9Ch]
  int v110; // [sp+FCh] [bp-98h]
  int v111; // [sp+FCh] [bp-98h]
  int v112; // [sp+FCh] [bp-98h]
  int v113; // [sp+FCh] [bp-98h]
  int v114; // [sp+FCh] [bp-98h]
  int v115; // [sp+FCh] [bp-98h]
  int v116; // [sp+FCh] [bp-98h]
  int v117; // [sp+FCh] [bp-98h]
  int v118; // [sp+FCh] [bp-98h]
  int v119; // [sp+FCh] [bp-98h]
  int v120; // [sp+100h] [bp-94h]
  int v121; // [sp+100h] [bp-94h]
  int v122; // [sp+100h] [bp-94h]
  int v123; // [sp+100h] [bp-94h]
  int v124; // [sp+100h] [bp-94h]
  int v125; // [sp+100h] [bp-94h]
  int v126; // [sp+100h] [bp-94h]
  int v127; // [sp+100h] [bp-94h]
  int v128; // [sp+100h] [bp-94h]
  int v129; // [sp+100h] [bp-94h]
  int v130; // [sp+104h] [bp-90h]
  int v131; // [sp+104h] [bp-90h]
  int v132; // [sp+104h] [bp-90h]
  int v133; // [sp+104h] [bp-90h]
  int v134; // [sp+104h] [bp-90h]
  int v135; // [sp+104h] [bp-90h]
  int v136; // [sp+104h] [bp-90h]
  int v137; // [sp+104h] [bp-90h]
  int v138; // [sp+108h] [bp-8Ch]
  int v139; // [sp+108h] [bp-8Ch]
  int v140; // [sp+108h] [bp-8Ch]
  int v141; // [sp+108h] [bp-8Ch]
  int v142; // [sp+10Ch] [bp-88h]
  int v143; // [sp+10Ch] [bp-88h]
  int v144; // [sp+10Ch] [bp-88h]
  int v145; // [sp+10Ch] [bp-88h]
  int v146; // [sp+10Ch] [bp-88h]
  int v147; // [sp+10Ch] [bp-88h]
  int v148; // [sp+10Ch] [bp-88h]
  int v149; // [sp+10Ch] [bp-88h]
  int v150; // [sp+10Ch] [bp-88h]
  int v151; // [sp+10Ch] [bp-88h]
  int v152; // [sp+10Ch] [bp-88h]
  int v153; // [sp+110h] [bp-84h]
  int v154; // [sp+110h] [bp-84h]
  int v155; // [sp+110h] [bp-84h]
  int v156; // [sp+110h] [bp-84h]
  int v157; // [sp+110h] [bp-84h]
  int v158; // [sp+110h] [bp-84h]
  int v159; // [sp+110h] [bp-84h]
  int v160; // [sp+110h] [bp-84h]
  int v161; // [sp+110h] [bp-84h]
  int v162; // [sp+110h] [bp-84h]
  int v163; // [sp+110h] [bp-84h]
  int v164; // [sp+114h] [bp-80h]
  int v165; // [sp+114h] [bp-80h]
  int v166; // [sp+114h] [bp-80h]
  int v167; // [sp+114h] [bp-80h]
  int v168; // [sp+114h] [bp-80h]
  int v169; // [sp+114h] [bp-80h]
  int v170; // [sp+114h] [bp-80h]
  int v171; // [sp+114h] [bp-80h]
  int v172; // [sp+114h] [bp-80h]
  int v173; // [sp+118h] [bp-7Ch]
  int v174; // [sp+118h] [bp-7Ch]
  int v175; // [sp+118h] [bp-7Ch]
  int v176; // [sp+118h] [bp-7Ch]
  int v177; // [sp+118h] [bp-7Ch]
  int v178; // [sp+118h] [bp-7Ch]
  int v179; // [sp+118h] [bp-7Ch]
  int v180; // [sp+118h] [bp-7Ch]
  int v181; // [sp+118h] [bp-7Ch]
  int v182; // [sp+118h] [bp-7Ch]
  int v183; // [sp+118h] [bp-7Ch]
  int v184; // [sp+11Ch] [bp-78h]
  int v185; // [sp+11Ch] [bp-78h]
  int v186; // [sp+11Ch] [bp-78h]
  int v187; // [sp+11Ch] [bp-78h]
  int v188; // [sp+11Ch] [bp-78h]
  int v189; // [sp+11Ch] [bp-78h]
  int v190; // [sp+11Ch] [bp-78h]
  int v191; // [sp+11Ch] [bp-78h]
  int v192; // [sp+11Ch] [bp-78h]
  int v193; // [sp+11Ch] [bp-78h]
  int v194; // [sp+120h] [bp-74h]
  int v195; // [sp+120h] [bp-74h]
  int v196; // [sp+120h] [bp-74h]
  int v197; // [sp+120h] [bp-74h]
  int v198; // [sp+120h] [bp-74h]
  int v199; // [sp+120h] [bp-74h]
  int v200; // [sp+120h] [bp-74h]
  int v201; // [sp+120h] [bp-74h]
  int v202; // [sp+120h] [bp-74h]
  int v203; // [sp+120h] [bp-74h]
  int v204; // [sp+124h] [bp-70h]
  int v205; // [sp+124h] [bp-70h]
  int v206; // [sp+124h] [bp-70h]
  int v207; // [sp+124h] [bp-70h]
  int v208; // [sp+124h] [bp-70h]
  int v209; // [sp+124h] [bp-70h]
  int v210; // [sp+124h] [bp-70h]
  int v211; // [sp+124h] [bp-70h]
  int v212; // [sp+128h] [bp-6Ch]
  int v213; // [sp+128h] [bp-6Ch]
  int v214; // [sp+128h] [bp-6Ch]
  int v215; // [sp+128h] [bp-6Ch]
  int v216; // [sp+12Ch] [bp-68h]
  int v217; // [sp+12Ch] [bp-68h]
  int v218; // [sp+12Ch] [bp-68h]
  int v219; // [sp+12Ch] [bp-68h]
  int v220; // [sp+12Ch] [bp-68h]
  int v221; // [sp+12Ch] [bp-68h]
  int v222; // [sp+12Ch] [bp-68h]
  int v223; // [sp+12Ch] [bp-68h]
  int v224; // [sp+12Ch] [bp-68h]
  int v225; // [sp+12Ch] [bp-68h]
  int v226; // [sp+12Ch] [bp-68h]
  int v227; // [sp+130h] [bp-64h]
  int v228; // [sp+130h] [bp-64h]
  int v229; // [sp+130h] [bp-64h]
  int v230; // [sp+130h] [bp-64h]
  int v231; // [sp+130h] [bp-64h]
  int v232; // [sp+130h] [bp-64h]
  int v233; // [sp+130h] [bp-64h]
  int v234; // [sp+130h] [bp-64h]
  int v235; // [sp+130h] [bp-64h]
  int v236; // [sp+130h] [bp-64h]
  int v237; // [sp+130h] [bp-64h]
  int v238; // [sp+134h] [bp-60h]
  int v239; // [sp+134h] [bp-60h]
  int v240; // [sp+134h] [bp-60h]
  int v241; // [sp+134h] [bp-60h]
  int v242; // [sp+134h] [bp-60h]
  int v243; // [sp+134h] [bp-60h]
  unsigned int v244; // [sp+134h] [bp-60h]
  int v245; // [sp+134h] [bp-60h]
  int v246; // [sp+134h] [bp-60h]
  int v247; // [sp+134h] [bp-60h]
  int v248; // [sp+138h] [bp-5Ch]
  int v249; // [sp+138h] [bp-5Ch]
  int v250; // [sp+138h] [bp-5Ch]
  int v251; // [sp+138h] [bp-5Ch]
  int v252; // [sp+138h] [bp-5Ch]
  int v253; // [sp+138h] [bp-5Ch]
  unsigned int v254; // [sp+138h] [bp-5Ch]
  int v255; // [sp+138h] [bp-5Ch]
  int v256; // [sp+138h] [bp-5Ch]
  int v257; // [sp+138h] [bp-5Ch]
  int v258; // [sp+138h] [bp-5Ch]
  int v259; // [sp+138h] [bp-5Ch]
  int v260; // [sp+13Ch] [bp-58h]
  int v261; // [sp+13Ch] [bp-58h]
  int v262; // [sp+13Ch] [bp-58h]
  int v263; // [sp+13Ch] [bp-58h]
  int v264; // [sp+13Ch] [bp-58h]
  int v265; // [sp+13Ch] [bp-58h]
  int v266; // [sp+13Ch] [bp-58h]
  int v267; // [sp+13Ch] [bp-58h]
  int v268; // [sp+13Ch] [bp-58h]
  int v269; // [sp+13Ch] [bp-58h]
  int v270; // [sp+140h] [bp-54h]
  int v271; // [sp+140h] [bp-54h]
  int v272; // [sp+140h] [bp-54h]
  int v273; // [sp+140h] [bp-54h]
  int v274; // [sp+140h] [bp-54h]
  int v275; // [sp+140h] [bp-54h]
  int v276; // [sp+140h] [bp-54h]
  int v277; // [sp+140h] [bp-54h]
  int v278; // [sp+140h] [bp-54h]
  int v279; // [sp+140h] [bp-54h]
  int v280; // [sp+144h] [bp-50h]
  int v281; // [sp+144h] [bp-50h]
  int v282; // [sp+144h] [bp-50h]
  int v283; // [sp+144h] [bp-50h]
  int v284; // [sp+144h] [bp-50h]
  int v285; // [sp+144h] [bp-50h]
  int v286; // [sp+144h] [bp-50h]
  int v287; // [sp+144h] [bp-50h]
  int v288; // [sp+148h] [bp-4Ch]
  int v289; // [sp+148h] [bp-4Ch]
  int v290; // [sp+148h] [bp-4Ch]
  int v291; // [sp+148h] [bp-4Ch]
  int v292; // [sp+14Ch] [bp-48h]
  int v293; // [sp+14Ch] [bp-48h]
  int v294; // [sp+14Ch] [bp-48h]
  int v295; // [sp+14Ch] [bp-48h]
  int v296; // [sp+14Ch] [bp-48h]
  int v297; // [sp+14Ch] [bp-48h]
  int v298; // [sp+14Ch] [bp-48h]
  int v299; // [sp+14Ch] [bp-48h]
  int v300; // [sp+14Ch] [bp-48h]
  int v301; // [sp+14Ch] [bp-48h]
  int v302; // [sp+14Ch] [bp-48h]
  int v303; // [sp+150h] [bp-44h]
  int v304; // [sp+150h] [bp-44h]
  int v305; // [sp+150h] [bp-44h]
  int v306; // [sp+150h] [bp-44h]
  int v307; // [sp+150h] [bp-44h]
  int v308; // [sp+150h] [bp-44h]
  int v309; // [sp+150h] [bp-44h]
  int v310; // [sp+150h] [bp-44h]
  int v311; // [sp+150h] [bp-44h]
  int v312; // [sp+150h] [bp-44h]
  int v313; // [sp+154h] [bp-40h]
  int v314; // [sp+154h] [bp-40h]
  int v315; // [sp+154h] [bp-40h]
  int v316; // [sp+154h] [bp-40h]
  int v317; // [sp+154h] [bp-40h]
  int v318; // [sp+154h] [bp-40h]
  int v319; // [sp+154h] [bp-40h]
  int v320; // [sp+154h] [bp-40h]
  int v321; // [sp+158h] [bp-3Ch]
  int v322; // [sp+158h] [bp-3Ch]
  int v323; // [sp+158h] [bp-3Ch]
  int v324; // [sp+158h] [bp-3Ch]
  int v325; // [sp+158h] [bp-3Ch]
  unsigned int v326; // [sp+158h] [bp-3Ch]
  int v327; // [sp+158h] [bp-3Ch]
  int v328; // [sp+158h] [bp-3Ch]
  int v329; // [sp+158h] [bp-3Ch]
  int v330; // [sp+158h] [bp-3Ch]
  int v331; // [sp+158h] [bp-3Ch]
  int v332; // [sp+15Ch] [bp-38h]
  int v333; // [sp+15Ch] [bp-38h]
  int v334; // [sp+15Ch] [bp-38h]
  int v335; // [sp+15Ch] [bp-38h]
  int v336; // [sp+15Ch] [bp-38h]
  int v337; // [sp+15Ch] [bp-38h]
  int v338; // [sp+15Ch] [bp-38h]
  int v339; // [sp+15Ch] [bp-38h]
  int v340; // [sp+15Ch] [bp-38h]
  int v341; // [sp+160h] [bp-34h]
  int v342; // [sp+160h] [bp-34h]
  int v343; // [sp+160h] [bp-34h]
  int v344; // [sp+160h] [bp-34h]
  int v345; // [sp+160h] [bp-34h]
  int v346; // [sp+160h] [bp-34h]
  int v347; // [sp+160h] [bp-34h]
  int v348; // [sp+160h] [bp-34h]
  int v349; // [sp+160h] [bp-34h]
  int v350; // [sp+164h] [bp-30h]
  int v351; // [sp+164h] [bp-30h]
  int v352; // [sp+164h] [bp-30h]
  int v353; // [sp+164h] [bp-30h]
  int v354; // [sp+164h] [bp-30h]
  int v355; // [sp+164h] [bp-30h]
  int v356; // [sp+164h] [bp-30h]
  int v357; // [sp+168h] [bp-2Ch]
  int v358; // [sp+168h] [bp-2Ch]
  int v359; // [sp+168h] [bp-2Ch]
  int v360; // [sp+168h] [bp-2Ch]
  unsigned int v361; // [sp+16Ch] [bp-28h]
  int v362; // [sp+16Ch] [bp-28h]
  int v363; // [sp+16Ch] [bp-28h]
  int v364; // [sp+16Ch] [bp-28h]
  int v365; // [sp+16Ch] [bp-28h]
  int v366; // [sp+16Ch] [bp-28h]
  int v367; // [sp+16Ch] [bp-28h]
  int v368; // [sp+170h] [bp-24h]
  int v369; // [sp+170h] [bp-24h]
  int v370; // [sp+170h] [bp-24h]
  int v371; // [sp+170h] [bp-24h]
  int v372; // [sp+170h] [bp-24h]
  int v373; // [sp+170h] [bp-24h]
  int v374; // [sp+170h] [bp-24h]
  int v375; // [sp+170h] [bp-24h]
  int v376; // [sp+174h] [bp-20h]
  int v377; // [sp+174h] [bp-20h]
  int v378; // [sp+174h] [bp-20h]
  int v379; // [sp+174h] [bp-20h]
  int v380; // [sp+174h] [bp-20h]
  int v381; // [sp+174h] [bp-20h]
  int v382; // [sp+178h] [bp-1Ch]
  int v383; // [sp+178h] [bp-1Ch]
  int v384; // [sp+178h] [bp-1Ch]
  int v385; // [sp+178h] [bp-1Ch]
  int v386; // [sp+178h] [bp-1Ch]
  int v387; // [sp+178h] [bp-1Ch]
  int v388; // [sp+178h] [bp-1Ch]
  int v389; // [sp+178h] [bp-1Ch]
  int v390; // [sp+17Ch] [bp-18h]
  int v391; // [sp+17Ch] [bp-18h]
  int v392; // [sp+17Ch] [bp-18h]
  int v393; // [sp+17Ch] [bp-18h]
  int v394; // [sp+17Ch] [bp-18h]
  int v395; // [sp+17Ch] [bp-18h]
  int v396; // [sp+17Ch] [bp-18h]
  int v397; // [sp+180h] [bp-14h]
  int v398; // [sp+180h] [bp-14h]
  int v399; // [sp+180h] [bp-14h]
  int v400; // [sp+180h] [bp-14h]
  int v401; // [sp+180h] [bp-14h]
  int v402; // [sp+180h] [bp-14h]
  int v403; // [sp+180h] [bp-14h]
  int v404; // [sp+184h] [bp-10h]
  int v405; // [sp+184h] [bp-10h]
  int v406; // [sp+184h] [bp-10h]
  int v407; // [sp+184h] [bp-10h]
  int v408; // [sp+184h] [bp-10h]
  int v409; // [sp+184h] [bp-10h]
  int v410; // [sp+184h] [bp-10h]
  int v411; // [sp+188h] [bp-Ch]
  int v412; // [sp+188h] [bp-Ch]
  int v413; // [sp+188h] [bp-Ch]
  int v414; // [sp+188h] [bp-Ch]
  int i; // [sp+18Ch] [bp-8h]

  v4 = a1[8];
  *((_BYTE *)a1 + v4) = a2 & -(128 >> a3) | (128 >> a3);
  result = (unsigned int)memset((char *)a1 + v4 + 1, 0, 31 - v4);
  v411 = a1[9];
  v404 = a1[10];
  v397 = a1[11];
  v390 = a1[12];
  v382 = a1[13];
  v376 = a1[14];
  v368 = a1[15];
  v361 = a1[16];
  v357 = a1[17];
  v350 = a1[18];
  v341 = a1[19];
  v332 = a1[20];
  v321 = a1[21];
  v313 = a1[22];
  v303 = a1[23];
  v292 = a1[24];
  v288 = a1[25];
  v280 = a1[26];
  v270 = a1[27];
  v260 = a1[28];
  v248 = a1[29];
  v238 = a1[30];
  v227 = a1[31];
  v216 = a1[32];
  v212 = a1[33];
  v204 = a1[34];
  v194 = a1[35];
  v184 = a1[36];
  v173 = a1[37];
  v164 = a1[38];
  v153 = a1[39];
  v142 = a1[40];
  v138 = a1[41];
  v130 = a1[42];
  v120 = a1[43];
  v110 = a1[44];
  v99 = a1[45];
  v90 = a1[46];
  v79 = a1[47];
  v68 = a1[48];
  for ( i = 0; i <= 2; ++i )
  {
    v60 = sub_30D7C8(a1);
    v59 = sub_30D7C8(a1 + 1);
    v58 = sub_30D7C8(a1 + 2);
    v56 = sub_30D7C8(a1 + 3);
    v55 = sub_30D7C8(a1 + 4);
    v54 = sub_30D7C8(a1 + 5);
    v52 = sub_30D7C8(a1 + 6);
    result = sub_30D7C8(a1 + 7);
    v44 = v79 ^ v153 ^ v227 ^ v303 ^ v368;
    v45 = v90 ^ v164 ^ v238 ^ v313 ^ v376;
    v46 = v99 ^ v173 ^ v248 ^ v321 ^ v382;
    v47 = v68 ^ v142 ^ v216 ^ v292 ^ v361 ^ v110 ^ v184 ^ v260 ^ v332 ^ v390;
    v48 = v68 ^ v142 ^ v216 ^ v292 ^ v361 ^ v120 ^ v194 ^ v270 ^ v341 ^ v397;
    v49 = v130 ^ v204 ^ v280 ^ v350 ^ v404;
    v50 = v68 ^ v142 ^ v216 ^ v292 ^ v361 ^ v138 ^ v212 ^ v288 ^ v357 ^ v411;
    v51 = v68 ^ v142 ^ v216 ^ v292 ^ v361;
    v412 = v51 ^ v411;
    v405 = v50 ^ v404;
    v398 = v49 ^ v397;
    v391 = v48 ^ v390;
    v383 = v47 ^ v382;
    v377 = v46 ^ v376;
    v369 = v45 ^ v368;
    v358 = v51 ^ v357;
    v351 = v50 ^ v350;
    v342 = v49 ^ v341;
    v333 = v48 ^ v332;
    v322 = v47 ^ v321;
    v314 = v46 ^ v313;
    v304 = v45 ^ v303;
    v293 = v44 ^ v292;
    v289 = v51 ^ v288;
    v281 = v50 ^ v280;
    v271 = v49 ^ v270;
    v261 = v48 ^ v260;
    v249 = v47 ^ v248;
    v239 = v46 ^ v238;
    v228 = v45 ^ v227;
    v217 = v44 ^ v216;
    v213 = v51 ^ v212;
    v205 = v50 ^ v204;
    v195 = v49 ^ v194;
    v185 = v48 ^ v184;
    v174 = v47 ^ v173;
    v165 = v46 ^ v164;
    v154 = v45 ^ v153;
    v143 = v44 ^ v142;
    v139 = v51 ^ v138;
    v131 = v50 ^ v130;
    v121 = v49 ^ v120;
    v111 = v48 ^ v110;
    v100 = v47 ^ v99;
    v91 = v46 ^ v90;
    v80 = v45 ^ v79;
    v69 = v44 ^ v68;
    v43 = v358 ^ v44 ^ v361;
    v42 = v351 ^ v44 ^ v361 ^ v412;
    v41 = v342 ^ v405;
    v40 = v333 ^ v44 ^ v361 ^ v398;
    v39 = v322 ^ v44 ^ v361 ^ v391;
    v38 = v314 ^ v383;
    v37 = v304 ^ v377;
    v36 = v293 ^ v369;
    v35 = v293;
    v294 = v304;
    v305 = v314;
    v315 = v322;
    v323 = v35 ^ v333;
    v334 = v35 ^ v342;
    v343 = v351;
    v352 = v281 ^ v35 ^ v358;
    v344 = v271 ^ v343;
    v335 = v261 ^ v334;
    v324 = v249 ^ v323;
    v316 = v239 ^ v315;
    v306 = v228 ^ v305;
    v295 = v217 ^ v294;
    v34 = v217;
    v218 = v228;
    v229 = v239;
    v240 = v249;
    v250 = v34 ^ v261;
    v262 = v34 ^ v271;
    v272 = v281;
    v282 = v205 ^ v34 ^ v289;
    v273 = v195 ^ v272;
    v263 = v185 ^ v262;
    v251 = v174 ^ v250;
    v241 = v165 ^ v240;
    v230 = v154 ^ v229;
    v219 = v143 ^ v218;
    v33 = v143;
    v144 = v154;
    v155 = v165;
    v166 = v174;
    v175 = v33 ^ v185;
    v186 = v33 ^ v195;
    v196 = v205;
    v206 = v131 ^ v33 ^ v213;
    v197 = v121 ^ v196;
    v187 = v111 ^ v186;
    v176 = v100 ^ v175;
    v167 = v91 ^ v166;
    v156 = v80 ^ v155;
    v145 = v69 ^ v144;
    v32 = v69;
    v70 = v80;
    v81 = v91;
    v92 = v100;
    v101 = v32 ^ v111;
    v112 = v32 ^ v121;
    v122 = v131;
    v132 = v405 ^ v32 ^ v139;
    v123 = v398 ^ v122;
    v113 = v391 ^ v112;
    v102 = v383 ^ v101;
    v93 = v377 ^ v92;
    v82 = v369 ^ v81;
    v71 = v44 ^ v361 ^ v70;
    v406 = v132 ^ v36 ^ v43;
    v399 = v123 ^ v42;
    v392 = v113 ^ v36 ^ v41;
    v384 = v102 ^ v36 ^ v40;
    v378 = v93 ^ v39;
    v370 = v82 ^ v38;
    v362 = v71 ^ v37;
    v31 = v71;
    v72 = v82;
    v83 = v93;
    v94 = v102;
    v103 = v31 ^ v113;
    v114 = v31 ^ v123;
    v124 = v132;
    v133 = v206 ^ v31 ^ v412 ^ v32;
    v125 = v197 ^ v124;
    v115 = v187 ^ v114;
    v104 = v176 ^ v103;
    v95 = v167 ^ v94;
    v84 = v156 ^ v83;
    v73 = v145 ^ v72;
    v30 = v145;
    v146 = v156;
    v157 = v167;
    v168 = v176;
    v177 = v30 ^ v187;
    v188 = v30 ^ v197;
    v198 = v206;
    v207 = v282 ^ v30 ^ v139 ^ v33;
    v199 = v273 ^ v198;
    v189 = v263 ^ v188;
    v178 = v251 ^ v177;
    v169 = v241 ^ v168;
    v158 = v230 ^ v157;
    v147 = v219 ^ v146;
    v29 = v219;
    v220 = v230;
    v231 = v241;
    v242 = v251;
    v252 = v29 ^ v263;
    v264 = v29 ^ v273;
    v274 = v282;
    v283 = v352 ^ v29 ^ v213 ^ v34;
    v275 = v344 ^ v274;
    v265 = v335 ^ v264;
    v253 = v324 ^ v252;
    v243 = v316 ^ v242;
    v232 = v306 ^ v231;
    v221 = v295 ^ v220;
    v28 = v295;
    v296 = v306;
    v307 = v316;
    v317 = v324;
    v325 = v28 ^ v335;
    v336 = v28 ^ v344;
    v345 = v352;
    v411 = v60 ^ v412 ^ v32 ^ v36;
    v404 = v59 ^ v406;
    v397 = v58 ^ v399;
    v390 = v56 ^ v392;
    v382 = v55 ^ v384;
    v376 = v54 ^ v378;
    v368 = v52 ^ v370;
    v361 = result ^ v362;
    v357 = result ^ v43 ^ v28;
    v350 = result ^ v60 ^ v42 ^ v28 ^ v289 ^ v35;
    v341 = v59 ^ v41 ^ v345;
    v332 = result ^ v58 ^ v40 ^ v336;
    v326 = result ^ v56 ^ v39 ^ v325;
    v297 = v52 ^ v36 ^ v296;
    v27 = v52;
    v288 = v52 ^ v289 ^ v35 ^ v29;
    v280 = v52 ^ result ^ v283;
    v270 = result ^ v60 ^ v275;
    v260 = v52 ^ v59 ^ v265;
    v254 = v52 ^ result ^ v58 ^ v253;
    v244 = result ^ v56 ^ v243;
    v53 = result ^ v56;
    v57 = v54 ^ result ^ v60;
    v212 = v54 ^ v213 ^ v34 ^ v30;
    v204 = v54 ^ v27 ^ v207;
    v194 = v27 ^ result ^ v199;
    v184 = v57 ^ v189;
    v138 = v55 ^ v139 ^ v33 ^ v31;
    v130 = v55 ^ v54 ^ v133;
    v120 = v54 ^ v27 ^ v125;
    v110 = v55 ^ v27 ^ result ^ v115;
    v321 = __ROR4__(v326, 31);
    v313 = __ROR4__(v55 ^ v38 ^ v317, 31);
    v303 = __ROR4__(v54 ^ v37 ^ v307, 31);
    v292 = __ROR4__(v297, 31);
    v248 = __ROR4__(v254, 30);
    v238 = __ROR4__(v244, 30);
    v227 = __ROR4__(v55 ^ v232, 30);
    v216 = __ROR4__(v54 ^ v221, 30);
    v173 = __ROR4__(v54 ^ v27 ^ v59 ^ v178, 29);
    v164 = __ROR4__(v27 ^ result ^ v58 ^ v169, 29);
    v153 = __ROR4__(v53 ^ v158, 29);
    v142 = __ROR4__(v55 ^ v147, 29);
    v99 = __ROR4__(v55 ^ v57 ^ v104, 28);
    v90 = __ROR4__(v54 ^ v27 ^ v59 ^ v95, 28);
    v79 = __ROR4__(v27 ^ result ^ v58 ^ v84, 28);
    v68 = __ROR4__(v53 ^ v73, 28);
    for ( j = 0; j <= 7; ++j )
    {
      v9 = v411;
      v400 = v390 ^ v397;
      v413 = v390 ^ (v411 | v404);
      v393 = v9 & v390;
      v407 = v393 ^ ~v404;
      v394 = v400 ^ v393;
      v401 = v407 ^ v413 & v400;
      v408 = v407 | v394;
      v10 = v408 ^ v9;
      v395 = v401 ^ v394;
      v402 = v408 & v401;
      v409 = ~v413 ^ v408;
      v7 = v376;
      v363 = v382 ^ v361;
      v379 = v382 ^ (v376 | v368);
      v385 = v7 & v382;
      v371 = v385 ^ ~v368;
      v386 = v363 ^ v385;
      v364 = v371 ^ v379 & v363;
      v372 = v371 | v386;
      v8 = v372 ^ v7;
      v387 = v364 ^ v386;
      v365 = v372 & v364;
      v373 = ~v379 ^ v372;
      v388 = v10 ^ v387;
      v414 = __ROR4__(v10, 30) ^ v388;
      v389 = __ROR4__(v388, 18) ^ v414;
      v380 = v409 ^ v8;
      v410 = __ROR4__(v409, 30) ^ v409 ^ v8;
      v381 = __ROR4__(v380, 18) ^ v410;
      v404 = __ROR4__(v410, 22) ^ v381;
      v376 = __ROR4__(v381, 31);
      v374 = v402 ^ v373;
      v403 = __ROR4__(v402, 30) ^ v374;
      v375 = __ROR4__(v374, 18) ^ v403;
      v397 = __ROR4__(v403, 22) ^ v375;
      v368 = __ROR4__(v375, 31);
      v366 = v395 ^ v365;
      v396 = __ROR4__(v395, 30) ^ v366;
      v367 = __ROR4__(v366, 18) ^ v396;
      v390 = __ROR4__(v396, 22) ^ v367;
      v361 = __ROR4__(v367, 31);
      v411 = dword_584BD8[j] ^ __ROR4__(v414, 22) ^ v389;
      v382 = dword_584BF8[j] ^ __ROR4__(v389, 31);
    }
    for ( k = 0; k <= 7; ++k )
    {
      v13 = v357;
      v346 = v332 ^ v341;
      v359 = v332 ^ (v357 | v350);
      v337 = v13 & v332;
      v353 = v337 ^ ~v350;
      v338 = v346 ^ v337;
      v347 = v353 ^ v359 & v346;
      v354 = v353 | v338;
      v14 = v354 ^ v13;
      v339 = v347 ^ v338;
      v348 = v354 & v347;
      v355 = ~v359 ^ v354;
      v11 = v313;
      v298 = v321 ^ v292;
      v318 = v321 ^ (v313 | v303);
      v327 = v11 & v321;
      v308 = v327 ^ ~v303;
      v328 = v298 ^ v327;
      v299 = v308 ^ v318 & v298;
      v309 = v308 | v328;
      v12 = v309 ^ v11;
      v329 = v299 ^ v328;
      v300 = v309 & v299;
      v310 = ~v318 ^ v309;
      v330 = v14 ^ v329;
      v360 = __ROR4__(v14, 30) ^ v330;
      v331 = __ROR4__(v330, 18) ^ v360;
      v319 = v355 ^ v12;
      v356 = __ROR4__(v355, 30) ^ v355 ^ v12;
      v320 = __ROR4__(v319, 18) ^ v356;
      v350 = __ROR4__(v356, 22) ^ v320;
      v313 = __ROR4__(v320, 31);
      v311 = v348 ^ v310;
      v349 = __ROR4__(v348, 30) ^ v311;
      v312 = __ROR4__(v311, 18) ^ v349;
      v341 = __ROR4__(v349, 22) ^ v312;
      v303 = __ROR4__(v312, 31);
      v301 = v339 ^ v300;
      v340 = __ROR4__(v339, 30) ^ v301;
      v302 = __ROR4__(v301, 18) ^ v340;
      v332 = __ROR4__(v340, 22) ^ v302;
      v292 = __ROR4__(v302, 31);
      v357 = dword_584C18[k] ^ __ROR4__(v360, 22) ^ v331;
      v321 = dword_584C38[k] ^ __ROR4__(v331, 31);
    }
    for ( m = 0; m <= 7; ++m )
    {
      v17 = v288;
      v276 = v260 ^ v270;
      v290 = v260 ^ (v288 | v280);
      v266 = v17 & v260;
      v284 = v266 ^ ~v280;
      v267 = v276 ^ v266;
      v277 = v284 ^ v290 & v276;
      v285 = v284 | v267;
      v18 = v285 ^ v17;
      v268 = v277 ^ v267;
      v278 = v285 & v277;
      v286 = ~v290 ^ v285;
      v15 = v238;
      v222 = v248 ^ v216;
      v245 = v248 ^ (v238 | v227);
      v255 = v15 & v248;
      v233 = v255 ^ ~v227;
      v256 = v222 ^ v255;
      v223 = v233 ^ v245 & v222;
      v234 = v233 | v256;
      v16 = v234 ^ v15;
      v257 = v223 ^ v256;
      v224 = v234 & v223;
      v235 = ~v245 ^ v234;
      v258 = v18 ^ v257;
      v291 = __ROR4__(v18, 30) ^ v258;
      v259 = __ROR4__(v258, 18) ^ v291;
      v246 = v286 ^ v16;
      v287 = __ROR4__(v286, 30) ^ v286 ^ v16;
      v247 = __ROR4__(v246, 18) ^ v287;
      v280 = __ROR4__(v287, 22) ^ v247;
      v238 = __ROR4__(v247, 31);
      v236 = v278 ^ v235;
      v279 = __ROR4__(v278, 30) ^ v236;
      v237 = __ROR4__(v236, 18) ^ v279;
      v270 = __ROR4__(v279, 22) ^ v237;
      v227 = __ROR4__(v237, 31);
      v225 = v268 ^ v224;
      v269 = __ROR4__(v268, 30) ^ v225;
      v226 = __ROR4__(v225, 18) ^ v269;
      v260 = __ROR4__(v269, 22) ^ v226;
      v216 = __ROR4__(v226, 31);
      v288 = dword_584C58[m] ^ __ROR4__(v291, 22) ^ v259;
      v248 = dword_584C78[m] ^ __ROR4__(v259, 31);
    }
    for ( n = 0; n <= 7; ++n )
    {
      v21 = v212;
      v200 = v184 ^ v194;
      v214 = v184 ^ (v212 | v204);
      v190 = v21 & v184;
      v208 = v190 ^ ~v204;
      v191 = v200 ^ v190;
      v201 = v208 ^ v214 & v200;
      v209 = v208 | v191;
      v22 = v209 ^ v21;
      v192 = v201 ^ v191;
      v202 = v209 & v201;
      v210 = ~v214 ^ v209;
      v19 = v164;
      v148 = v173 ^ v142;
      v170 = v173 ^ (v164 | v153);
      v179 = v19 & v173;
      v159 = v179 ^ ~v153;
      v180 = v148 ^ v179;
      v149 = v159 ^ v170 & v148;
      v160 = v159 | v180;
      v20 = v160 ^ v19;
      v181 = v149 ^ v180;
      v150 = v160 & v149;
      v161 = ~v170 ^ v160;
      v182 = v22 ^ v181;
      v215 = __ROR4__(v22, 30) ^ v182;
      v183 = __ROR4__(v182, 18) ^ v215;
      v171 = v210 ^ v20;
      v211 = __ROR4__(v210, 30) ^ v210 ^ v20;
      v172 = __ROR4__(v171, 18) ^ v211;
      v204 = __ROR4__(v211, 22) ^ v172;
      v164 = __ROR4__(v172, 31);
      v162 = v202 ^ v161;
      v203 = __ROR4__(v202, 30) ^ v162;
      v163 = __ROR4__(v162, 18) ^ v203;
      v194 = __ROR4__(v203, 22) ^ v163;
      v153 = __ROR4__(v163, 31);
      v151 = v192 ^ v150;
      v193 = __ROR4__(v192, 30) ^ v151;
      v152 = __ROR4__(v151, 18) ^ v193;
      v184 = __ROR4__(v193, 22) ^ v152;
      v142 = __ROR4__(v152, 31);
      v212 = dword_584C98[n] ^ __ROR4__(v215, 22) ^ v183;
      v173 = dword_584CB8[n] ^ __ROR4__(v183, 31);
    }
    for ( ii = 0; ii <= 7; ++ii )
    {
      v25 = v138;
      v126 = v110 ^ v120;
      v140 = v110 ^ (v138 | v130);
      v116 = v25 & v110;
      v134 = v116 ^ ~v130;
      v117 = v126 ^ v116;
      v127 = v134 ^ v140 & v126;
      v135 = v134 | v117;
      v26 = v135 ^ v25;
      v118 = v127 ^ v117;
      v128 = v135 & v127;
      v136 = ~v140 ^ v135;
      v23 = v90;
      v74 = v99 ^ v68;
      v96 = v99 ^ (v90 | v79);
      v105 = v23 & v99;
      v85 = v105 ^ ~v79;
      v106 = v74 ^ v105;
      v75 = v85 ^ v96 & v74;
      v86 = v85 | v106;
      v24 = v86 ^ v23;
      v107 = v75 ^ v106;
      v76 = v86 & v75;
      v87 = ~v96 ^ v86;
      v108 = v26 ^ v107;
      v141 = __ROR4__(v26, 30) ^ v108;
      v109 = __ROR4__(v108, 18) ^ v141;
      v97 = v136 ^ v24;
      v137 = __ROR4__(v136, 30) ^ v136 ^ v24;
      v98 = __ROR4__(v97, 18) ^ v137;
      v130 = __ROR4__(v137, 22) ^ v98;
      v90 = __ROR4__(v98, 31);
      v88 = v128 ^ v87;
      v129 = __ROR4__(v128, 30) ^ v88;
      v89 = __ROR4__(v88, 18) ^ v129;
      v120 = __ROR4__(v129, 22) ^ v89;
      v79 = __ROR4__(v89, 31);
      v77 = v118 ^ v76;
      v119 = __ROR4__(v118, 30) ^ v77;
      v78 = __ROR4__(v77, 18) ^ v119;
      v110 = __ROR4__(v119, 22) ^ v78;
      v68 = __ROR4__(v78, 31);
      v138 = dword_584CD8[ii] ^ __ROR4__(v141, 22) ^ v109;
      v99 = dword_584CF8[ii] ^ __ROR4__(v109, 31);
    }
    switch ( i )
    {
      case 1:
        sub_30D74C(a4, v138 ^ v411 ^ v357 ^ v288 ^ v212);
        sub_30D74C(a4 + 4, v130 ^ v404 ^ v350 ^ v280 ^ v204);
        sub_30D74C(a4 + 8, v120 ^ v397 ^ v341 ^ v270 ^ v194);
        sub_30D74C(a4 + 12, v110 ^ v390 ^ v332 ^ v260 ^ v184);
        sub_30D74C(a4 + 16, v99 ^ v382 ^ v321 ^ v248 ^ v173);
        sub_30D74C(a4 + 20, v90 ^ v376 ^ v313 ^ v238 ^ v164);
        sub_30D74C(a4 + 24, v79 ^ v368 ^ v303 ^ v227 ^ v153);
        result = (unsigned int)sub_30D74C(a4 + 28, v68 ^ v361 ^ v292 ^ v216 ^ v142);
        break;
      case 2:
        sub_30D74C(a4 + 32, v138 ^ v411 ^ v357 ^ v288 ^ v212);
        sub_30D74C(a4 + 36, v130 ^ v404 ^ v350 ^ v280 ^ v204);
        sub_30D74C(a4 + 40, v120 ^ v397 ^ v341 ^ v270 ^ v194);
        sub_30D74C(a4 + 44, v110 ^ v390 ^ v332 ^ v260 ^ v184);
        sub_30D74C(a4 + 48, v99 ^ v382 ^ v321 ^ v248 ^ v173);
        sub_30D74C(a4 + 52, v90 ^ v376 ^ v313 ^ v238 ^ v164);
        sub_30D74C(a4 + 56, v79 ^ v368 ^ v303 ^ v227 ^ v153);
        result = (unsigned int)sub_30D74C(a4 + 60, v68 ^ v361 ^ v292 ^ v216 ^ v142);
        break;
      case 0:
        result = (unsigned int)memset(a1, 0, 0x20u);
        break;
    }
  }
  return result;
}
