unsigned int __fastcall sub_313E44(unsigned int result, char *a2, size_t a3)
{
  size_t n; // [sp+4h] [bp-188h]
  char *src; // [sp+8h] [bp-184h]
  _DWORD *v5; // [sp+Ch] [bp-180h]
  int v6; // [sp+14h] [bp-178h]
  int v7; // [sp+14h] [bp-178h]
  int v8; // [sp+18h] [bp-174h]
  int v9; // [sp+18h] [bp-174h]
  int v10; // [sp+1Ch] [bp-170h]
  int v11; // [sp+1Ch] [bp-170h]
  unsigned int v12; // [sp+20h] [bp-16Ch]
  int v13; // [sp+20h] [bp-16Ch]
  int v14; // [sp+24h] [bp-168h]
  int v15; // [sp+24h] [bp-168h]
  int v16; // [sp+28h] [bp-164h]
  int v17; // [sp+28h] [bp-164h]
  int v18; // [sp+2Ch] [bp-160h]
  int v19; // [sp+2Ch] [bp-160h]
  int v20; // [sp+30h] [bp-15Ch]
  int v21; // [sp+30h] [bp-15Ch]
  int v22; // [sp+34h] [bp-158h]
  int v23; // [sp+34h] [bp-158h]
  int v24; // [sp+38h] [bp-154h]
  int v25; // [sp+38h] [bp-154h]
  unsigned int v26; // [sp+44h] [bp-148h]
  int v27; // [sp+4Ch] [bp-140h]
  int v28; // [sp+50h] [bp-13Ch]
  int v29; // [sp+54h] [bp-138h]
  int v30; // [sp+58h] [bp-134h]
  int v31; // [sp+60h] [bp-12Ch]
  int v32; // [sp+64h] [bp-128h]
  int v33; // [sp+68h] [bp-124h]
  int v34; // [sp+6Ch] [bp-120h]
  int v35; // [sp+78h] [bp-114h]
  int v36; // [sp+7Ch] [bp-110h]
  int v37; // [sp+80h] [bp-10Ch]
  int v38; // [sp+84h] [bp-108h]
  int v39; // [sp+88h] [bp-104h]
  int v40; // [sp+8Ch] [bp-100h]
  int v41; // [sp+90h] [bp-FCh]
  int v42; // [sp+94h] [bp-F8h]
  int v43; // [sp+98h] [bp-F4h]
  int v44; // [sp+9Ch] [bp-F0h]
  int v45; // [sp+A0h] [bp-ECh]
  int v46; // [sp+A4h] [bp-E8h]
  int v47; // [sp+A8h] [bp-E4h]
  int v48; // [sp+ACh] [bp-E0h]
  int v49; // [sp+B0h] [bp-DCh]
  int v50; // [sp+B4h] [bp-D8h]
  unsigned int v51; // [sp+BCh] [bp-D0h]
  unsigned int v52; // [sp+BCh] [bp-D0h]
  unsigned int v53; // [sp+C0h] [bp-CCh]
  unsigned int v54; // [sp+C4h] [bp-C8h]
  unsigned int v55; // [sp+C8h] [bp-C4h]
  unsigned int v56; // [sp+C8h] [bp-C4h]
  unsigned int v57; // [sp+CCh] [bp-C0h]
  unsigned int v58; // [sp+D0h] [bp-BCh]
  unsigned int v59; // [sp+D4h] [bp-B8h]
  int *v60; // [sp+D8h] [bp-B4h]
  int i; // [sp+DCh] [bp-B0h]
  int j; // [sp+DCh] [bp-B0h]
  int k; // [sp+DCh] [bp-B0h]
  int m; // [sp+DCh] [bp-B0h]
  int ii; // [sp+DCh] [bp-B0h]
  size_t v66; // [sp+E0h] [bp-ACh]
  int v67; // [sp+E4h] [bp-A8h]
  int v68; // [sp+E4h] [bp-A8h]
  int v69; // [sp+E4h] [bp-A8h]
  int v70; // [sp+E4h] [bp-A8h]
  int v71; // [sp+E4h] [bp-A8h]
  int v72; // [sp+E4h] [bp-A8h]
  int v73; // [sp+E4h] [bp-A8h]
  int v74; // [sp+E4h] [bp-A8h]
  int v75; // [sp+E4h] [bp-A8h]
  int v76; // [sp+E4h] [bp-A8h]
  int v77; // [sp+E4h] [bp-A8h]
  int v78; // [sp+E8h] [bp-A4h]
  int v79; // [sp+E8h] [bp-A4h]
  int v80; // [sp+E8h] [bp-A4h]
  int v81; // [sp+E8h] [bp-A4h]
  int v82; // [sp+E8h] [bp-A4h]
  int v83; // [sp+E8h] [bp-A4h]
  int v84; // [sp+E8h] [bp-A4h]
  int v85; // [sp+E8h] [bp-A4h]
  int v86; // [sp+E8h] [bp-A4h]
  int v87; // [sp+E8h] [bp-A4h]
  int v88; // [sp+E8h] [bp-A4h]
  int v89; // [sp+ECh] [bp-A0h]
  int v90; // [sp+ECh] [bp-A0h]
  int v91; // [sp+ECh] [bp-A0h]
  int v92; // [sp+ECh] [bp-A0h]
  int v93; // [sp+ECh] [bp-A0h]
  int v94; // [sp+ECh] [bp-A0h]
  int v95; // [sp+ECh] [bp-A0h]
  int v96; // [sp+ECh] [bp-A0h]
  int v97; // [sp+ECh] [bp-A0h]
  int v98; // [sp+F0h] [bp-9Ch]
  int v99; // [sp+F0h] [bp-9Ch]
  int v100; // [sp+F0h] [bp-9Ch]
  int v101; // [sp+F0h] [bp-9Ch]
  int v102; // [sp+F0h] [bp-9Ch]
  int v103; // [sp+F0h] [bp-9Ch]
  int v104; // [sp+F0h] [bp-9Ch]
  int v105; // [sp+F0h] [bp-9Ch]
  int v106; // [sp+F0h] [bp-9Ch]
  int v107; // [sp+F0h] [bp-9Ch]
  int v108; // [sp+F0h] [bp-9Ch]
  unsigned int v109; // [sp+F4h] [bp-98h]
  int v110; // [sp+F4h] [bp-98h]
  int v111; // [sp+F4h] [bp-98h]
  int v112; // [sp+F4h] [bp-98h]
  int v113; // [sp+F4h] [bp-98h]
  int v114; // [sp+F4h] [bp-98h]
  int v115; // [sp+F4h] [bp-98h]
  int v116; // [sp+F4h] [bp-98h]
  int v117; // [sp+F4h] [bp-98h]
  int v118; // [sp+F4h] [bp-98h]
  int v119; // [sp+F8h] [bp-94h]
  int v120; // [sp+F8h] [bp-94h]
  int v121; // [sp+F8h] [bp-94h]
  int v122; // [sp+F8h] [bp-94h]
  int v123; // [sp+F8h] [bp-94h]
  int v124; // [sp+F8h] [bp-94h]
  int v125; // [sp+F8h] [bp-94h]
  int v126; // [sp+F8h] [bp-94h]
  int v127; // [sp+F8h] [bp-94h]
  int v128; // [sp+F8h] [bp-94h]
  int v129; // [sp+FCh] [bp-90h]
  int v130; // [sp+FCh] [bp-90h]
  int v131; // [sp+FCh] [bp-90h]
  int v132; // [sp+FCh] [bp-90h]
  int v133; // [sp+FCh] [bp-90h]
  int v134; // [sp+FCh] [bp-90h]
  int v135; // [sp+FCh] [bp-90h]
  int v136; // [sp+FCh] [bp-90h]
  int v137; // [sp+100h] [bp-8Ch]
  int v138; // [sp+100h] [bp-8Ch]
  int v139; // [sp+100h] [bp-8Ch]
  int v140; // [sp+100h] [bp-8Ch]
  int v141; // [sp+104h] [bp-88h]
  int v142; // [sp+104h] [bp-88h]
  int v143; // [sp+104h] [bp-88h]
  int v144; // [sp+104h] [bp-88h]
  int v145; // [sp+104h] [bp-88h]
  int v146; // [sp+104h] [bp-88h]
  int v147; // [sp+104h] [bp-88h]
  int v148; // [sp+104h] [bp-88h]
  int v149; // [sp+104h] [bp-88h]
  int v150; // [sp+104h] [bp-88h]
  int v151; // [sp+104h] [bp-88h]
  int v152; // [sp+108h] [bp-84h]
  int v153; // [sp+108h] [bp-84h]
  int v154; // [sp+108h] [bp-84h]
  int v155; // [sp+108h] [bp-84h]
  int v156; // [sp+108h] [bp-84h]
  int v157; // [sp+108h] [bp-84h]
  int v158; // [sp+108h] [bp-84h]
  int v159; // [sp+108h] [bp-84h]
  int v160; // [sp+108h] [bp-84h]
  int v161; // [sp+108h] [bp-84h]
  int v162; // [sp+108h] [bp-84h]
  int v163; // [sp+10Ch] [bp-80h]
  int v164; // [sp+10Ch] [bp-80h]
  int v165; // [sp+10Ch] [bp-80h]
  int v166; // [sp+10Ch] [bp-80h]
  int v167; // [sp+10Ch] [bp-80h]
  int v168; // [sp+10Ch] [bp-80h]
  int v169; // [sp+10Ch] [bp-80h]
  int v170; // [sp+10Ch] [bp-80h]
  int v171; // [sp+10Ch] [bp-80h]
  int v172; // [sp+110h] [bp-7Ch]
  int v173; // [sp+110h] [bp-7Ch]
  int v174; // [sp+110h] [bp-7Ch]
  int v175; // [sp+110h] [bp-7Ch]
  int v176; // [sp+110h] [bp-7Ch]
  int v177; // [sp+110h] [bp-7Ch]
  int v178; // [sp+110h] [bp-7Ch]
  int v179; // [sp+110h] [bp-7Ch]
  int v180; // [sp+110h] [bp-7Ch]
  int v181; // [sp+110h] [bp-7Ch]
  int v182; // [sp+110h] [bp-7Ch]
  int v183; // [sp+114h] [bp-78h]
  int v184; // [sp+114h] [bp-78h]
  int v185; // [sp+114h] [bp-78h]
  int v186; // [sp+114h] [bp-78h]
  int v187; // [sp+114h] [bp-78h]
  int v188; // [sp+114h] [bp-78h]
  int v189; // [sp+114h] [bp-78h]
  int v190; // [sp+114h] [bp-78h]
  int v191; // [sp+114h] [bp-78h]
  int v192; // [sp+114h] [bp-78h]
  unsigned int v193; // [sp+118h] [bp-74h]
  int v194; // [sp+118h] [bp-74h]
  int v195; // [sp+118h] [bp-74h]
  int v196; // [sp+118h] [bp-74h]
  int v197; // [sp+118h] [bp-74h]
  int v198; // [sp+118h] [bp-74h]
  int v199; // [sp+118h] [bp-74h]
  int v200; // [sp+118h] [bp-74h]
  int v201; // [sp+118h] [bp-74h]
  int v202; // [sp+118h] [bp-74h]
  int v203; // [sp+11Ch] [bp-70h]
  int v204; // [sp+11Ch] [bp-70h]
  int v205; // [sp+11Ch] [bp-70h]
  int v206; // [sp+11Ch] [bp-70h]
  int v207; // [sp+11Ch] [bp-70h]
  int v208; // [sp+11Ch] [bp-70h]
  int v209; // [sp+11Ch] [bp-70h]
  int v210; // [sp+11Ch] [bp-70h]
  int v211; // [sp+120h] [bp-6Ch]
  int v212; // [sp+120h] [bp-6Ch]
  int v213; // [sp+120h] [bp-6Ch]
  int v214; // [sp+120h] [bp-6Ch]
  int v215; // [sp+124h] [bp-68h]
  int v216; // [sp+124h] [bp-68h]
  int v217; // [sp+124h] [bp-68h]
  int v218; // [sp+124h] [bp-68h]
  int v219; // [sp+124h] [bp-68h]
  int v220; // [sp+124h] [bp-68h]
  int v221; // [sp+124h] [bp-68h]
  int v222; // [sp+124h] [bp-68h]
  int v223; // [sp+124h] [bp-68h]
  int v224; // [sp+124h] [bp-68h]
  int v225; // [sp+124h] [bp-68h]
  int v226; // [sp+128h] [bp-64h]
  int v227; // [sp+128h] [bp-64h]
  int v228; // [sp+128h] [bp-64h]
  int v229; // [sp+128h] [bp-64h]
  int v230; // [sp+128h] [bp-64h]
  int v231; // [sp+128h] [bp-64h]
  int v232; // [sp+128h] [bp-64h]
  int v233; // [sp+128h] [bp-64h]
  int v234; // [sp+128h] [bp-64h]
  int v235; // [sp+128h] [bp-64h]
  int v236; // [sp+128h] [bp-64h]
  int v237; // [sp+12Ch] [bp-60h]
  int v238; // [sp+12Ch] [bp-60h]
  int v239; // [sp+12Ch] [bp-60h]
  int v240; // [sp+12Ch] [bp-60h]
  int v241; // [sp+12Ch] [bp-60h]
  int v242; // [sp+12Ch] [bp-60h]
  unsigned int v243; // [sp+12Ch] [bp-60h]
  int v244; // [sp+12Ch] [bp-60h]
  int v245; // [sp+12Ch] [bp-60h]
  int v246; // [sp+12Ch] [bp-60h]
  int v247; // [sp+130h] [bp-5Ch]
  int v248; // [sp+130h] [bp-5Ch]
  int v249; // [sp+130h] [bp-5Ch]
  int v250; // [sp+130h] [bp-5Ch]
  int v251; // [sp+130h] [bp-5Ch]
  int v252; // [sp+130h] [bp-5Ch]
  unsigned int v253; // [sp+130h] [bp-5Ch]
  int v254; // [sp+130h] [bp-5Ch]
  int v255; // [sp+130h] [bp-5Ch]
  int v256; // [sp+130h] [bp-5Ch]
  int v257; // [sp+130h] [bp-5Ch]
  int v258; // [sp+130h] [bp-5Ch]
  int v259; // [sp+134h] [bp-58h]
  int v260; // [sp+134h] [bp-58h]
  int v261; // [sp+134h] [bp-58h]
  int v262; // [sp+134h] [bp-58h]
  int v263; // [sp+134h] [bp-58h]
  int v264; // [sp+134h] [bp-58h]
  int v265; // [sp+134h] [bp-58h]
  int v266; // [sp+134h] [bp-58h]
  int v267; // [sp+134h] [bp-58h]
  int v268; // [sp+134h] [bp-58h]
  unsigned int v269; // [sp+138h] [bp-54h]
  int v270; // [sp+138h] [bp-54h]
  int v271; // [sp+138h] [bp-54h]
  int v272; // [sp+138h] [bp-54h]
  int v273; // [sp+138h] [bp-54h]
  int v274; // [sp+138h] [bp-54h]
  int v275; // [sp+138h] [bp-54h]
  int v276; // [sp+138h] [bp-54h]
  int v277; // [sp+138h] [bp-54h]
  int v278; // [sp+138h] [bp-54h]
  unsigned int v279; // [sp+13Ch] [bp-50h]
  int v280; // [sp+13Ch] [bp-50h]
  int v281; // [sp+13Ch] [bp-50h]
  int v282; // [sp+13Ch] [bp-50h]
  int v283; // [sp+13Ch] [bp-50h]
  int v284; // [sp+13Ch] [bp-50h]
  int v285; // [sp+13Ch] [bp-50h]
  int v286; // [sp+13Ch] [bp-50h]
  int v287; // [sp+140h] [bp-4Ch]
  int v288; // [sp+140h] [bp-4Ch]
  int v289; // [sp+140h] [bp-4Ch]
  int v290; // [sp+140h] [bp-4Ch]
  int v291; // [sp+144h] [bp-48h]
  int v292; // [sp+144h] [bp-48h]
  int v293; // [sp+144h] [bp-48h]
  int v294; // [sp+144h] [bp-48h]
  int v295; // [sp+144h] [bp-48h]
  int v296; // [sp+144h] [bp-48h]
  int v297; // [sp+144h] [bp-48h]
  int v298; // [sp+144h] [bp-48h]
  int v299; // [sp+144h] [bp-48h]
  int v300; // [sp+144h] [bp-48h]
  int v301; // [sp+144h] [bp-48h]
  int v302; // [sp+148h] [bp-44h]
  int v303; // [sp+148h] [bp-44h]
  int v304; // [sp+148h] [bp-44h]
  int v305; // [sp+148h] [bp-44h]
  int v306; // [sp+148h] [bp-44h]
  int v307; // [sp+148h] [bp-44h]
  int v308; // [sp+148h] [bp-44h]
  int v309; // [sp+148h] [bp-44h]
  int v310; // [sp+148h] [bp-44h]
  int v311; // [sp+148h] [bp-44h]
  int v312; // [sp+14Ch] [bp-40h]
  int v313; // [sp+14Ch] [bp-40h]
  int v314; // [sp+14Ch] [bp-40h]
  int v315; // [sp+14Ch] [bp-40h]
  int v316; // [sp+14Ch] [bp-40h]
  int v317; // [sp+14Ch] [bp-40h]
  int v318; // [sp+14Ch] [bp-40h]
  int v319; // [sp+14Ch] [bp-40h]
  int v320; // [sp+150h] [bp-3Ch]
  int v321; // [sp+150h] [bp-3Ch]
  int v322; // [sp+150h] [bp-3Ch]
  int v323; // [sp+150h] [bp-3Ch]
  int v324; // [sp+150h] [bp-3Ch]
  unsigned int v325; // [sp+150h] [bp-3Ch]
  int v326; // [sp+150h] [bp-3Ch]
  int v327; // [sp+150h] [bp-3Ch]
  int v328; // [sp+150h] [bp-3Ch]
  int v329; // [sp+150h] [bp-3Ch]
  int v330; // [sp+150h] [bp-3Ch]
  unsigned int v331; // [sp+154h] [bp-38h]
  int v332; // [sp+154h] [bp-38h]
  int v333; // [sp+154h] [bp-38h]
  int v334; // [sp+154h] [bp-38h]
  int v335; // [sp+154h] [bp-38h]
  int v336; // [sp+154h] [bp-38h]
  int v337; // [sp+154h] [bp-38h]
  int v338; // [sp+154h] [bp-38h]
  int v339; // [sp+154h] [bp-38h]
  int v340; // [sp+158h] [bp-34h]
  int v341; // [sp+158h] [bp-34h]
  int v342; // [sp+158h] [bp-34h]
  int v343; // [sp+158h] [bp-34h]
  int v344; // [sp+158h] [bp-34h]
  int v345; // [sp+158h] [bp-34h]
  int v346; // [sp+158h] [bp-34h]
  int v347; // [sp+158h] [bp-34h]
  int v348; // [sp+158h] [bp-34h]
  unsigned int v349; // [sp+15Ch] [bp-30h]
  int v350; // [sp+15Ch] [bp-30h]
  int v351; // [sp+15Ch] [bp-30h]
  int v352; // [sp+15Ch] [bp-30h]
  int v353; // [sp+15Ch] [bp-30h]
  int v354; // [sp+15Ch] [bp-30h]
  int v355; // [sp+15Ch] [bp-30h]
  unsigned int v356; // [sp+160h] [bp-2Ch]
  int v357; // [sp+160h] [bp-2Ch]
  int v358; // [sp+160h] [bp-2Ch]
  int v359; // [sp+160h] [bp-2Ch]
  unsigned int v360; // [sp+164h] [bp-28h]
  int v361; // [sp+164h] [bp-28h]
  int v362; // [sp+164h] [bp-28h]
  int v363; // [sp+164h] [bp-28h]
  int v364; // [sp+164h] [bp-28h]
  int v365; // [sp+164h] [bp-28h]
  int v366; // [sp+164h] [bp-28h]
  int v367; // [sp+168h] [bp-24h]
  int v368; // [sp+168h] [bp-24h]
  int v369; // [sp+168h] [bp-24h]
  int v370; // [sp+168h] [bp-24h]
  int v371; // [sp+168h] [bp-24h]
  int v372; // [sp+168h] [bp-24h]
  int v373; // [sp+168h] [bp-24h]
  int v374; // [sp+168h] [bp-24h]
  int v375; // [sp+16Ch] [bp-20h]
  int v376; // [sp+16Ch] [bp-20h]
  int v377; // [sp+16Ch] [bp-20h]
  int v378; // [sp+16Ch] [bp-20h]
  int v379; // [sp+16Ch] [bp-20h]
  int v380; // [sp+16Ch] [bp-20h]
  int v381; // [sp+170h] [bp-1Ch]
  int v382; // [sp+170h] [bp-1Ch]
  int v383; // [sp+170h] [bp-1Ch]
  int v384; // [sp+170h] [bp-1Ch]
  int v385; // [sp+170h] [bp-1Ch]
  int v386; // [sp+170h] [bp-1Ch]
  int v387; // [sp+170h] [bp-1Ch]
  int v388; // [sp+170h] [bp-1Ch]
  int v389; // [sp+174h] [bp-18h]
  int v390; // [sp+174h] [bp-18h]
  int v391; // [sp+174h] [bp-18h]
  int v392; // [sp+174h] [bp-18h]
  int v393; // [sp+174h] [bp-18h]
  int v394; // [sp+174h] [bp-18h]
  int v395; // [sp+174h] [bp-18h]
  int v396; // [sp+178h] [bp-14h]
  int v397; // [sp+178h] [bp-14h]
  int v398; // [sp+178h] [bp-14h]
  int v399; // [sp+178h] [bp-14h]
  int v400; // [sp+178h] [bp-14h]
  int v401; // [sp+178h] [bp-14h]
  int v402; // [sp+178h] [bp-14h]
  int v403; // [sp+17Ch] [bp-10h]
  int v404; // [sp+17Ch] [bp-10h]
  int v405; // [sp+17Ch] [bp-10h]
  int v406; // [sp+17Ch] [bp-10h]
  int v407; // [sp+17Ch] [bp-10h]
  int v408; // [sp+17Ch] [bp-10h]
  int v409; // [sp+17Ch] [bp-10h]
  int v410; // [sp+180h] [bp-Ch]
  int v411; // [sp+180h] [bp-Ch]
  int v412; // [sp+180h] [bp-Ch]
  int v413; // [sp+180h] [bp-Ch]
  int v414; // [sp+184h] [bp-8h]

  v5 = (_DWORD *)result;
  src = a2;
  n = a3;
  v60 = (int *)result;
  v414 = *(_DWORD *)(result + 32);
  if ( a3 >= 32 - v414 )
  {
    v410 = *(_DWORD *)(result + 36);
    v403 = *(_DWORD *)(result + 40);
    v396 = *(_DWORD *)(result + 44);
    v389 = *(_DWORD *)(result + 48);
    v381 = *(_DWORD *)(result + 52);
    v375 = *(_DWORD *)(result + 56);
    v367 = *(_DWORD *)(result + 60);
    v360 = *(_DWORD *)(result + 64);
    v356 = *(_DWORD *)(result + 68);
    v349 = *(_DWORD *)(result + 72);
    v340 = *(_DWORD *)(result + 76);
    v331 = *(_DWORD *)(result + 80);
    v320 = *(_DWORD *)(result + 84);
    v312 = *(_DWORD *)(result + 88);
    v302 = *(_DWORD *)(result + 92);
    v291 = *(_DWORD *)(result + 96);
    v287 = *(_DWORD *)(result + 100);
    v279 = *(_DWORD *)(result + 104);
    v269 = *(_DWORD *)(result + 108);
    v259 = *(_DWORD *)(result + 112);
    v247 = *(_DWORD *)(result + 116);
    v237 = *(_DWORD *)(result + 120);
    v226 = *(_DWORD *)(result + 124);
    v215 = *(_DWORD *)(result + 128);
    v211 = *(_DWORD *)(result + 132);
    v203 = *(_DWORD *)(result + 136);
    v193 = *(_DWORD *)(result + 140);
    v183 = *(_DWORD *)(result + 144);
    v172 = *(_DWORD *)(result + 148);
    v163 = *(_DWORD *)(result + 152);
    v152 = *(_DWORD *)(result + 156);
    v141 = *(_DWORD *)(result + 160);
    v137 = *(_DWORD *)(result + 164);
    v129 = *(_DWORD *)(result + 168);
    v119 = *(_DWORD *)(result + 172);
    v109 = *(_DWORD *)(result + 176);
    v98 = *(_DWORD *)(result + 180);
    v89 = *(_DWORD *)(result + 184);
    v78 = *(_DWORD *)(result + 188);
    v67 = *(_DWORD *)(result + 192);
    while ( n )
    {
      v66 = 32 - v414;
      if ( 32 - v414 > n )
        v66 = n;
      result = (unsigned int)memcpy((char *)v60 + v414, src, v66);
      v414 += v66;
      src += v66;
      n -= v66;
      if ( v414 == 32 )
      {
        v59 = sub_30D7C8(v60);
        v58 = sub_30D7C8(v60 + 1);
        v57 = sub_30D7C8(v60 + 2);
        v55 = sub_30D7C8(v60 + 3);
        v54 = sub_30D7C8(v60 + 4);
        v53 = sub_30D7C8(v60 + 5);
        v51 = sub_30D7C8(v60 + 6);
        result = sub_30D7C8(v60 + 7);
        v43 = v78 ^ v152 ^ v226 ^ v302 ^ v367;
        v44 = v89 ^ v163 ^ v237 ^ v312 ^ v375;
        v45 = v98 ^ v172 ^ v247 ^ v320 ^ v381;
        v46 = v67 ^ v141 ^ v215 ^ v291 ^ v360 ^ v109 ^ v183 ^ v259 ^ v331 ^ v389;
        v47 = v67 ^ v141 ^ v215 ^ v291 ^ v360 ^ v119 ^ v193 ^ v269 ^ v340 ^ v396;
        v48 = v129 ^ v203 ^ v279 ^ v349 ^ v403;
        v49 = v67 ^ v141 ^ v215 ^ v291 ^ v360 ^ v137 ^ v211 ^ v287 ^ v356 ^ v410;
        v50 = v67 ^ v141 ^ v215 ^ v291 ^ v360;
        v411 = v50 ^ v410;
        v404 = v49 ^ v403;
        v397 = v48 ^ v396;
        v390 = v47 ^ v389;
        v382 = v46 ^ v381;
        v376 = v45 ^ v375;
        v368 = v44 ^ v367;
        v357 = v50 ^ v356;
        v350 = v49 ^ v349;
        v341 = v48 ^ v340;
        v332 = v47 ^ v331;
        v321 = v46 ^ v320;
        v313 = v45 ^ v312;
        v303 = v44 ^ v302;
        v292 = v43 ^ v291;
        v288 = v50 ^ v287;
        v280 = v49 ^ v279;
        v270 = v48 ^ v269;
        v260 = v47 ^ v259;
        v248 = v46 ^ v247;
        v238 = v45 ^ v237;
        v227 = v44 ^ v226;
        v216 = v43 ^ v215;
        v212 = v50 ^ v211;
        v204 = v49 ^ v203;
        v194 = v48 ^ v193;
        v184 = v47 ^ v183;
        v173 = v46 ^ v172;
        v164 = v45 ^ v163;
        v153 = v44 ^ v152;
        v142 = v43 ^ v141;
        v138 = v50 ^ v137;
        v130 = v49 ^ v129;
        v120 = v48 ^ v119;
        v110 = v47 ^ v109;
        v99 = v46 ^ v98;
        v90 = v45 ^ v89;
        v79 = v44 ^ v78;
        v68 = v43 ^ v67;
        v42 = v357 ^ v43 ^ v360;
        v41 = v350 ^ v43 ^ v360 ^ v411;
        v40 = v341 ^ v404;
        v39 = v332 ^ v43 ^ v360 ^ v397;
        v38 = v321 ^ v43 ^ v360 ^ v390;
        v37 = v313 ^ v382;
        v36 = v303 ^ v376;
        v35 = v292 ^ v368;
        v34 = v292;
        v293 = v303;
        v304 = v313;
        v314 = v321;
        v322 = v34 ^ v332;
        v333 = v34 ^ v341;
        v342 = v350;
        v351 = v280 ^ v34 ^ v357;
        v343 = v270 ^ v342;
        v334 = v260 ^ v333;
        v323 = v248 ^ v322;
        v315 = v238 ^ v314;
        v305 = v227 ^ v304;
        v294 = v216 ^ v293;
        v33 = v216;
        v217 = v227;
        v228 = v238;
        v239 = v248;
        v249 = v33 ^ v260;
        v261 = v33 ^ v270;
        v271 = v280;
        v281 = v204 ^ v33 ^ v288;
        v272 = v194 ^ v271;
        v262 = v184 ^ v261;
        v250 = v173 ^ v249;
        v240 = v164 ^ v239;
        v229 = v153 ^ v228;
        v218 = v142 ^ v217;
        v32 = v142;
        v143 = v153;
        v154 = v164;
        v165 = v173;
        v174 = v32 ^ v184;
        v185 = v32 ^ v194;
        v195 = v204;
        v205 = v130 ^ v32 ^ v212;
        v196 = v120 ^ v195;
        v186 = v110 ^ v185;
        v175 = v99 ^ v174;
        v166 = v90 ^ v165;
        v155 = v79 ^ v154;
        v144 = v68 ^ v143;
        v31 = v68;
        v69 = v79;
        v80 = v90;
        v91 = v99;
        v100 = v31 ^ v110;
        v111 = v31 ^ v120;
        v121 = v130;
        v131 = v404 ^ v31 ^ v138;
        v122 = v397 ^ v121;
        v112 = v390 ^ v111;
        v101 = v382 ^ v100;
        v92 = v376 ^ v91;
        v81 = v368 ^ v80;
        v70 = v43 ^ v360 ^ v69;
        v405 = v131 ^ v35 ^ v42;
        v398 = v122 ^ v41;
        v391 = v112 ^ v35 ^ v40;
        v383 = v101 ^ v35 ^ v39;
        v377 = v92 ^ v38;
        v369 = v81 ^ v37;
        v361 = v70 ^ v36;
        v30 = v70;
        v71 = v81;
        v82 = v92;
        v93 = v101;
        v102 = v30 ^ v112;
        v113 = v30 ^ v122;
        v123 = v131;
        v132 = v205 ^ v30 ^ v411 ^ v31;
        v124 = v196 ^ v123;
        v114 = v186 ^ v113;
        v103 = v175 ^ v102;
        v94 = v166 ^ v93;
        v83 = v155 ^ v82;
        v72 = v144 ^ v71;
        v29 = v144;
        v145 = v155;
        v156 = v166;
        v167 = v175;
        v176 = v29 ^ v186;
        v187 = v29 ^ v196;
        v197 = v205;
        v206 = v281 ^ v29 ^ v138 ^ v32;
        v198 = v272 ^ v197;
        v188 = v262 ^ v187;
        v177 = v250 ^ v176;
        v168 = v240 ^ v167;
        v157 = v229 ^ v156;
        v146 = v218 ^ v145;
        v28 = v218;
        v219 = v229;
        v230 = v240;
        v241 = v250;
        v251 = v28 ^ v262;
        v263 = v28 ^ v272;
        v273 = v281;
        v282 = v351 ^ v28 ^ v212 ^ v33;
        v274 = v343 ^ v273;
        v264 = v334 ^ v263;
        v252 = v323 ^ v251;
        v242 = v315 ^ v241;
        v231 = v305 ^ v230;
        v220 = v294 ^ v219;
        v27 = v294;
        v295 = v305;
        v306 = v315;
        v316 = v323;
        v324 = v27 ^ v334;
        v335 = v27 ^ v343;
        v344 = v351;
        v410 = v59 ^ v411 ^ v31 ^ v35;
        v403 = v58 ^ v405;
        v396 = v57 ^ v398;
        v389 = v55 ^ v391;
        v381 = v54 ^ v383;
        v375 = v53 ^ v377;
        v367 = v51 ^ v369;
        v360 = result ^ v361;
        v356 = result ^ v42 ^ v27;
        v349 = result ^ v59 ^ v41 ^ v27 ^ v288 ^ v34;
        v340 = v58 ^ v40 ^ v344;
        v331 = result ^ v57 ^ v39 ^ v335;
        v325 = result ^ v55 ^ v38 ^ v324;
        v296 = v51 ^ v35 ^ v295;
        v26 = v51;
        v287 = v51 ^ v288 ^ v34 ^ v28;
        v279 = v51 ^ result ^ v282;
        v269 = result ^ v59 ^ v274;
        v259 = v51 ^ v58 ^ v264;
        v253 = v51 ^ result ^ v57 ^ v252;
        v243 = result ^ v55 ^ v242;
        v52 = result ^ v55;
        v56 = v53 ^ result ^ v59;
        v211 = v53 ^ v212 ^ v33 ^ v29;
        v203 = v53 ^ v26 ^ v206;
        v193 = v26 ^ result ^ v198;
        v183 = v56 ^ v188;
        v137 = v54 ^ v138 ^ v32 ^ v30;
        v129 = v54 ^ v53 ^ v132;
        v119 = v53 ^ v26 ^ v124;
        v109 = v54 ^ v26 ^ result ^ v114;
        v320 = __ROR4__(v325, 31);
        v312 = __ROR4__(v54 ^ v37 ^ v316, 31);
        v302 = __ROR4__(v53 ^ v36 ^ v306, 31);
        v291 = __ROR4__(v296, 31);
        v247 = __ROR4__(v253, 30);
        v237 = __ROR4__(v243, 30);
        v226 = __ROR4__(v54 ^ v231, 30);
        v215 = __ROR4__(v53 ^ v220, 30);
        v172 = __ROR4__(v53 ^ v26 ^ v58 ^ v177, 29);
        v163 = __ROR4__(v26 ^ result ^ v57 ^ v168, 29);
        v152 = __ROR4__(v52 ^ v157, 29);
        v141 = __ROR4__(v54 ^ v146, 29);
        v98 = __ROR4__(v54 ^ v56 ^ v103, 28);
        v89 = __ROR4__(v53 ^ v26 ^ v58 ^ v94, 28);
        v78 = __ROR4__(v26 ^ result ^ v57 ^ v83, 28);
        v67 = __ROR4__(v52 ^ v72, 28);
        for ( i = 0; i <= 7; ++i )
        {
          v8 = v410;
          v399 = v389 ^ v396;
          v412 = v389 ^ (v410 | v403);
          v392 = v8 & v389;
          v406 = v392 ^ ~v403;
          v393 = v399 ^ v392;
          v400 = v406 ^ v412 & v399;
          v407 = v406 | v393;
          v9 = v407 ^ v8;
          v394 = v400 ^ v393;
          v401 = v407 & v400;
          v408 = ~v412 ^ v407;
          v6 = v375;
          v362 = v381 ^ v360;
          v378 = v381 ^ (v375 | v367);
          v384 = v6 & v381;
          v370 = v384 ^ ~v367;
          v385 = v362 ^ v384;
          v363 = v370 ^ v378 & v362;
          v371 = v370 | v385;
          v7 = v371 ^ v6;
          v386 = v363 ^ v385;
          v364 = v371 & v363;
          v372 = ~v378 ^ v371;
          v387 = v9 ^ v386;
          v413 = __ROR4__(v9, 30) ^ v387;
          v388 = __ROR4__(v387, 18) ^ v413;
          v379 = v408 ^ v7;
          v409 = __ROR4__(v408, 30) ^ v408 ^ v7;
          v380 = __ROR4__(v379, 18) ^ v409;
          v403 = __ROR4__(v409, 22) ^ v380;
          v375 = __ROR4__(v380, 31);
          v373 = v401 ^ v372;
          v402 = __ROR4__(v401, 30) ^ v373;
          v374 = __ROR4__(v373, 18) ^ v402;
          v396 = __ROR4__(v402, 22) ^ v374;
          v367 = __ROR4__(v374, 31);
          v365 = v394 ^ v364;
          v395 = __ROR4__(v394, 30) ^ v365;
          v366 = __ROR4__(v365, 18) ^ v395;
          v389 = __ROR4__(v395, 22) ^ v366;
          v360 = __ROR4__(v366, 31);
          v410 = dword_584BD8[i] ^ __ROR4__(v413, 22) ^ v388;
          v381 = dword_584BF8[i] ^ __ROR4__(v388, 31);
        }
        for ( j = 0; j <= 7; ++j )
        {
          v12 = v356;
          v345 = v331 ^ v340;
          v358 = v331 ^ (v356 | v349);
          v336 = v12 & v331;
          v352 = v336 ^ ~v349;
          v337 = v345 ^ v336;
          v346 = v352 ^ v358 & v345;
          v353 = v352 | v337;
          v13 = v353 ^ v12;
          v338 = v346 ^ v337;
          v347 = v353 & v346;
          v354 = ~v358 ^ v353;
          v10 = v312;
          v297 = v320 ^ v291;
          v317 = v320 ^ (v312 | v302);
          v326 = v10 & v320;
          v307 = v326 ^ ~v302;
          v327 = v297 ^ v326;
          v298 = v307 ^ v317 & v297;
          v308 = v307 | v327;
          v11 = v308 ^ v10;
          v328 = v298 ^ v327;
          v299 = v308 & v298;
          v309 = ~v317 ^ v308;
          v329 = v13 ^ v328;
          v359 = __ROR4__(v13, 30) ^ v329;
          v330 = __ROR4__(v329, 18) ^ v359;
          v318 = v354 ^ v11;
          v355 = __ROR4__(v354, 30) ^ v354 ^ v11;
          v319 = __ROR4__(v318, 18) ^ v355;
          v349 = __ROR4__(v355, 22) ^ v319;
          v312 = __ROR4__(v319, 31);
          v310 = v347 ^ v309;
          v348 = __ROR4__(v347, 30) ^ v310;
          v311 = __ROR4__(v310, 18) ^ v348;
          v340 = __ROR4__(v348, 22) ^ v311;
          v302 = __ROR4__(v311, 31);
          v300 = v338 ^ v299;
          v339 = __ROR4__(v338, 30) ^ v300;
          v301 = __ROR4__(v300, 18) ^ v339;
          v331 = __ROR4__(v339, 22) ^ v301;
          v291 = __ROR4__(v301, 31);
          v356 = dword_584C18[j] ^ __ROR4__(v359, 22) ^ v330;
          v320 = dword_584C38[j] ^ __ROR4__(v330, 31);
        }
        for ( k = 0; k <= 7; ++k )
        {
          v16 = v287;
          v275 = v259 ^ v269;
          v289 = v259 ^ (v287 | v279);
          v265 = v16 & v259;
          v283 = v265 ^ ~v279;
          v266 = v275 ^ v265;
          v276 = v283 ^ v289 & v275;
          v284 = v283 | v266;
          v17 = v284 ^ v16;
          v267 = v276 ^ v266;
          v277 = v284 & v276;
          v285 = ~v289 ^ v284;
          v14 = v237;
          v221 = v247 ^ v215;
          v244 = v247 ^ (v237 | v226);
          v254 = v14 & v247;
          v232 = v254 ^ ~v226;
          v255 = v221 ^ v254;
          v222 = v232 ^ v244 & v221;
          v233 = v232 | v255;
          v15 = v233 ^ v14;
          v256 = v222 ^ v255;
          v223 = v233 & v222;
          v234 = ~v244 ^ v233;
          v257 = v17 ^ v256;
          v290 = __ROR4__(v17, 30) ^ v257;
          v258 = __ROR4__(v257, 18) ^ v290;
          v245 = v285 ^ v15;
          v286 = __ROR4__(v285, 30) ^ v285 ^ v15;
          v246 = __ROR4__(v245, 18) ^ v286;
          v279 = __ROR4__(v286, 22) ^ v246;
          v237 = __ROR4__(v246, 31);
          v235 = v277 ^ v234;
          v278 = __ROR4__(v277, 30) ^ v235;
          v236 = __ROR4__(v235, 18) ^ v278;
          v269 = __ROR4__(v278, 22) ^ v236;
          v226 = __ROR4__(v236, 31);
          v224 = v267 ^ v223;
          v268 = __ROR4__(v267, 30) ^ v224;
          v225 = __ROR4__(v224, 18) ^ v268;
          v259 = __ROR4__(v268, 22) ^ v225;
          v215 = __ROR4__(v225, 31);
          v287 = dword_584C58[k] ^ __ROR4__(v290, 22) ^ v258;
          v247 = dword_584C78[k] ^ __ROR4__(v258, 31);
        }
        for ( m = 0; m <= 7; ++m )
        {
          v20 = v211;
          v199 = v183 ^ v193;
          v213 = v183 ^ (v211 | v203);
          v189 = v20 & v183;
          v207 = v189 ^ ~v203;
          v190 = v199 ^ v189;
          v200 = v207 ^ v213 & v199;
          v208 = v207 | v190;
          v21 = v208 ^ v20;
          v191 = v200 ^ v190;
          v201 = v208 & v200;
          v209 = ~v213 ^ v208;
          v18 = v163;
          v147 = v172 ^ v141;
          v169 = v172 ^ (v163 | v152);
          v178 = v18 & v172;
          v158 = v178 ^ ~v152;
          v179 = v147 ^ v178;
          v148 = v158 ^ v169 & v147;
          v159 = v158 | v179;
          v19 = v159 ^ v18;
          v180 = v148 ^ v179;
          v149 = v159 & v148;
          v160 = ~v169 ^ v159;
          v181 = v21 ^ v180;
          v214 = __ROR4__(v21, 30) ^ v181;
          v182 = __ROR4__(v181, 18) ^ v214;
          v170 = v209 ^ v19;
          v210 = __ROR4__(v209, 30) ^ v209 ^ v19;
          v171 = __ROR4__(v170, 18) ^ v210;
          v203 = __ROR4__(v210, 22) ^ v171;
          v163 = __ROR4__(v171, 31);
          v161 = v201 ^ v160;
          v202 = __ROR4__(v201, 30) ^ v161;
          v162 = __ROR4__(v161, 18) ^ v202;
          v193 = __ROR4__(v202, 22) ^ v162;
          v152 = __ROR4__(v162, 31);
          v150 = v191 ^ v149;
          v192 = __ROR4__(v191, 30) ^ v150;
          v151 = __ROR4__(v150, 18) ^ v192;
          v183 = __ROR4__(v192, 22) ^ v151;
          v141 = __ROR4__(v151, 31);
          v211 = dword_584C98[m] ^ __ROR4__(v214, 22) ^ v182;
          v172 = dword_584CB8[m] ^ __ROR4__(v182, 31);
        }
        for ( ii = 0; ii <= 7; ++ii )
        {
          v24 = v137;
          v125 = v109 ^ v119;
          v139 = v109 ^ (v137 | v129);
          v115 = v24 & v109;
          v133 = v115 ^ ~v129;
          v116 = v125 ^ v115;
          v126 = v133 ^ v139 & v125;
          v134 = v133 | v116;
          v25 = v134 ^ v24;
          v117 = v126 ^ v116;
          v127 = v134 & v126;
          v135 = ~v139 ^ v134;
          v22 = v89;
          v73 = v98 ^ v67;
          v95 = v98 ^ (v89 | v78);
          v104 = v22 & v98;
          v84 = v104 ^ ~v78;
          v105 = v73 ^ v104;
          v74 = v84 ^ v95 & v73;
          v85 = v84 | v105;
          v23 = v85 ^ v22;
          v106 = v74 ^ v105;
          v75 = v85 & v74;
          v86 = ~v95 ^ v85;
          v107 = v25 ^ v106;
          v140 = __ROR4__(v25, 30) ^ v107;
          v108 = __ROR4__(v107, 18) ^ v140;
          v96 = v135 ^ v23;
          v136 = __ROR4__(v135, 30) ^ v135 ^ v23;
          v97 = __ROR4__(v96, 18) ^ v136;
          v129 = __ROR4__(v136, 22) ^ v97;
          v89 = __ROR4__(v97, 31);
          v87 = v127 ^ v86;
          v128 = __ROR4__(v127, 30) ^ v87;
          v88 = __ROR4__(v87, 18) ^ v128;
          v119 = __ROR4__(v128, 22) ^ v88;
          v78 = __ROR4__(v88, 31);
          v76 = v117 ^ v75;
          v118 = __ROR4__(v117, 30) ^ v76;
          v77 = __ROR4__(v76, 18) ^ v118;
          v109 = __ROR4__(v118, 22) ^ v77;
          v67 = __ROR4__(v77, 31);
          v137 = dword_584CD8[ii] ^ __ROR4__(v140, 22) ^ v108;
          v98 = dword_584CF8[ii] ^ __ROR4__(v108, 31);
        }
        v414 = 0;
      }
    }
    v5[9] = v410;
    v5[10] = v403;
    v5[11] = v396;
    v5[12] = v389;
    v5[13] = v381;
    v5[14] = v375;
    v5[15] = v367;
    v5[16] = v360;
    v5[17] = v356;
    v5[18] = v349;
    v5[19] = v340;
    v5[20] = v331;
    v5[21] = v320;
    v5[22] = v312;
    v5[23] = v302;
    v5[24] = v291;
    v5[25] = v287;
    v5[26] = v279;
    v5[27] = v269;
    v5[28] = v259;
    v5[29] = v247;
    v5[30] = v237;
    v5[31] = v226;
    v5[32] = v215;
    v5[33] = v211;
    v5[34] = v203;
    v5[35] = v193;
    v5[36] = v183;
    v5[37] = v172;
    v5[38] = v163;
    v5[39] = v152;
    v5[40] = v141;
    v5[41] = v137;
    v5[42] = v129;
    v5[43] = v119;
    v5[44] = v109;
    v5[45] = v98;
    v5[46] = v89;
    v5[47] = v78;
    v5[48] = v67;
    v5[8] = v414;
  }
  else
  {
    result = (unsigned int)memcpy((void *)(result + v414), a2, a3);
    v5[8] = v414 + n;
  }
  return result;
}
