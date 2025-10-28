unsigned int __fastcall sub_320D00(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // [sp+Ch] [bp-5B8h]
  unsigned int v6; // [sp+10h] [bp-5B4h]
  unsigned int v7; // [sp+14h] [bp-5B0h]
  unsigned int v8; // [sp+18h] [bp-5ACh]
  unsigned int v9; // [sp+1Ch] [bp-5A8h]
  unsigned int v10; // [sp+20h] [bp-5A4h]
  unsigned int v11; // [sp+24h] [bp-5A0h]
  unsigned int v12; // [sp+28h] [bp-59Ch]
  unsigned int v13; // [sp+2Ch] [bp-598h]
  unsigned int v14; // [sp+30h] [bp-594h]
  unsigned int v15; // [sp+34h] [bp-590h]
  unsigned int v16; // [sp+38h] [bp-58Ch]
  unsigned int v17; // [sp+4Ch] [bp-578h]
  unsigned int v18; // [sp+50h] [bp-574h]
  unsigned int v19; // [sp+54h] [bp-570h]
  unsigned int v20; // [sp+58h] [bp-56Ch]
  unsigned int v21; // [sp+5Ch] [bp-568h]
  unsigned int v22; // [sp+60h] [bp-564h]
  unsigned int v23; // [sp+64h] [bp-560h]
  unsigned int v24; // [sp+68h] [bp-55Ch]
  unsigned int v25; // [sp+6Ch] [bp-558h]
  unsigned int v26; // [sp+70h] [bp-554h]
  unsigned int v27; // [sp+74h] [bp-550h]
  unsigned int v28; // [sp+78h] [bp-54Ch]
  unsigned int v29; // [sp+8Ch] [bp-538h]
  unsigned int v30; // [sp+90h] [bp-534h]
  unsigned int v31; // [sp+94h] [bp-530h]
  unsigned int v32; // [sp+98h] [bp-52Ch]
  int v33; // [sp+9Ch] [bp-528h]
  unsigned int v34; // [sp+A4h] [bp-520h]
  unsigned int v35; // [sp+A8h] [bp-51Ch]
  unsigned int v36; // [sp+ACh] [bp-518h]
  unsigned int v37; // [sp+B0h] [bp-514h]
  unsigned int v38; // [sp+B4h] [bp-510h]
  unsigned int v39; // [sp+B8h] [bp-50Ch]
  unsigned int v40; // [sp+BCh] [bp-508h]
  int v41; // [sp+C0h] [bp-504h]
  unsigned int v42; // [sp+C8h] [bp-4FCh]
  unsigned int v43; // [sp+CCh] [bp-4F8h]
  unsigned int v44; // [sp+D0h] [bp-4F4h]
  unsigned int v45; // [sp+D4h] [bp-4F0h]
  unsigned int v46; // [sp+D8h] [bp-4ECh]
  unsigned int v47; // [sp+DCh] [bp-4E8h]
  unsigned int v48; // [sp+E0h] [bp-4E4h]
  int v49; // [sp+E4h] [bp-4E0h]
  unsigned int v50; // [sp+ECh] [bp-4D8h]
  unsigned int v51; // [sp+F0h] [bp-4D4h]
  unsigned int v52; // [sp+F4h] [bp-4D0h]
  int v53; // [sp+108h] [bp-4BCh]
  unsigned int v54; // [sp+110h] [bp-4B4h]
  unsigned int v55; // [sp+114h] [bp-4B0h]
  unsigned int v56; // [sp+118h] [bp-4ACh]
  unsigned int v57; // [sp+11Ch] [bp-4A8h]
  unsigned int v58; // [sp+120h] [bp-4A4h]
  unsigned int v59; // [sp+124h] [bp-4A0h]
  unsigned int v60; // [sp+128h] [bp-49Ch]
  int v61; // [sp+12Ch] [bp-498h]
  unsigned int v62; // [sp+134h] [bp-490h]
  unsigned int v63; // [sp+138h] [bp-48Ch]
  unsigned int v64; // [sp+13Ch] [bp-488h]
  unsigned int v65; // [sp+140h] [bp-484h]
  unsigned int v66; // [sp+144h] [bp-480h]
  unsigned int v67; // [sp+148h] [bp-47Ch]
  unsigned int v68; // [sp+14Ch] [bp-478h]
  int v69; // [sp+150h] [bp-474h]
  unsigned int v70; // [sp+158h] [bp-46Ch]
  unsigned int v71; // [sp+15Ch] [bp-468h]
  unsigned int v72; // [sp+160h] [bp-464h]
  unsigned int v73; // [sp+164h] [bp-460h]
  unsigned int v74; // [sp+168h] [bp-45Ch]
  unsigned int v75; // [sp+16Ch] [bp-458h]
  unsigned int v76; // [sp+170h] [bp-454h]
  int v77; // [sp+174h] [bp-450h]
  unsigned int v78; // [sp+17Ch] [bp-448h]
  unsigned int v79; // [sp+180h] [bp-444h]
  unsigned int v80; // [sp+184h] [bp-440h]
  int v81; // [sp+198h] [bp-42Ch]
  unsigned int v82; // [sp+1A0h] [bp-424h]
  unsigned int v83; // [sp+1A4h] [bp-420h]
  unsigned int v84; // [sp+1A8h] [bp-41Ch]
  unsigned int v85; // [sp+1ACh] [bp-418h]
  unsigned int v86; // [sp+1B0h] [bp-414h]
  unsigned int v87; // [sp+1B4h] [bp-410h]
  unsigned int v88; // [sp+1B8h] [bp-40Ch]
  unsigned int v89; // [sp+1BCh] [bp-408h]
  unsigned int v90; // [sp+1C0h] [bp-404h]
  unsigned int v91; // [sp+1C4h] [bp-400h]
  unsigned int v92; // [sp+1C8h] [bp-3FCh]
  unsigned int v93; // [sp+1CCh] [bp-3F8h]
  unsigned int v94; // [sp+1D0h] [bp-3F4h]
  unsigned int v95; // [sp+1D4h] [bp-3F0h]
  unsigned int v96; // [sp+1D8h] [bp-3ECh]
  unsigned int v97; // [sp+1ECh] [bp-3D8h]
  unsigned int v98; // [sp+1F0h] [bp-3D4h]
  unsigned int v99; // [sp+1F4h] [bp-3D0h]
  unsigned int v100; // [sp+1F8h] [bp-3CCh]
  unsigned int v101; // [sp+1FCh] [bp-3C8h]
  unsigned int v102; // [sp+200h] [bp-3C4h]
  unsigned int v103; // [sp+204h] [bp-3C0h]
  unsigned int v104; // [sp+208h] [bp-3BCh]
  unsigned int v105; // [sp+20Ch] [bp-3B8h]
  unsigned int v106; // [sp+210h] [bp-3B4h]
  unsigned int v107; // [sp+214h] [bp-3B0h]
  unsigned int v108; // [sp+218h] [bp-3ACh]
  int v109; // [sp+23Ch] [bp-388h]
  unsigned int v110; // [sp+244h] [bp-380h]
  unsigned int v111; // [sp+248h] [bp-37Ch]
  unsigned int v112; // [sp+24Ch] [bp-378h]
  unsigned int v113; // [sp+250h] [bp-374h]
  unsigned int v114; // [sp+254h] [bp-370h]
  unsigned int v115; // [sp+258h] [bp-36Ch]
  unsigned int v116; // [sp+25Ch] [bp-368h]
  int v117; // [sp+260h] [bp-364h]
  unsigned int v118; // [sp+268h] [bp-35Ch]
  unsigned int v119; // [sp+26Ch] [bp-358h]
  unsigned int v120; // [sp+270h] [bp-354h]
  unsigned int v121; // [sp+274h] [bp-350h]
  unsigned int v122; // [sp+278h] [bp-34Ch]
  unsigned int v123; // [sp+27Ch] [bp-348h]
  unsigned int v124; // [sp+280h] [bp-344h]
  int v125; // [sp+284h] [bp-340h]
  unsigned int v126; // [sp+28Ch] [bp-338h]
  unsigned int v127; // [sp+290h] [bp-334h]
  unsigned int v128; // [sp+294h] [bp-330h]
  int v129; // [sp+2A8h] [bp-31Ch]
  unsigned int v130; // [sp+2B0h] [bp-314h]
  unsigned int v131; // [sp+2B4h] [bp-310h]
  unsigned int v132; // [sp+2B8h] [bp-30Ch]
  unsigned int v133; // [sp+2BCh] [bp-308h]
  unsigned int v134; // [sp+2C0h] [bp-304h]
  int v135; // [sp+2CCh] [bp-2F8h]
  unsigned int v136; // [sp+2D4h] [bp-2F0h]
  unsigned int v137; // [sp+2D8h] [bp-2ECh]
  unsigned int v138; // [sp+2DCh] [bp-2E8h]
  unsigned int v139; // [sp+2E0h] [bp-2E4h]
  unsigned int v140; // [sp+2E8h] [bp-2DCh]
  unsigned int v141; // [sp+2ECh] [bp-2D8h]
  int v142; // [sp+2F0h] [bp-2D4h]
  unsigned int v143; // [sp+2F8h] [bp-2CCh]
  unsigned int v144; // [sp+2FCh] [bp-2C8h]
  unsigned int v145; // [sp+300h] [bp-2C4h]
  unsigned int v146; // [sp+308h] [bp-2BCh]
  unsigned int v147; // [sp+30Ch] [bp-2B8h]
  unsigned int v148; // [sp+310h] [bp-2B4h]
  int v149; // [sp+314h] [bp-2B0h]
  unsigned int v150; // [sp+31Ch] [bp-2A8h]
  unsigned int v151; // [sp+320h] [bp-2A4h]
  unsigned int v152; // [sp+324h] [bp-2A0h]
  int v153; // [sp+338h] [bp-28Ch]
  unsigned int v154; // [sp+340h] [bp-284h]
  unsigned int v155; // [sp+344h] [bp-280h]
  unsigned int v156; // [sp+348h] [bp-27Ch]
  unsigned int v157; // [sp+34Ch] [bp-278h]
  unsigned int v158; // [sp+350h] [bp-274h]
  unsigned int v159; // [sp+354h] [bp-270h]
  unsigned int v160; // [sp+358h] [bp-26Ch]
  unsigned int v161; // [sp+370h] [bp-254h]
  unsigned int v162; // [sp+374h] [bp-250h]
  unsigned int v163; // [sp+378h] [bp-24Ch]
  unsigned int v164; // [sp+37Ch] [bp-248h]
  int v165; // [sp+380h] [bp-244h]
  unsigned int v166; // [sp+388h] [bp-23Ch]
  unsigned int v167; // [sp+38Ch] [bp-238h]
  unsigned int v168; // [sp+390h] [bp-234h]
  unsigned int v169; // [sp+394h] [bp-230h]
  unsigned int v170; // [sp+398h] [bp-22Ch]
  unsigned int v171; // [sp+39Ch] [bp-228h]
  unsigned int v172; // [sp+3A0h] [bp-224h]
  int v173; // [sp+3A4h] [bp-220h]
  unsigned int v174; // [sp+3ACh] [bp-218h]
  unsigned int v175; // [sp+3B0h] [bp-214h]
  unsigned int v176; // [sp+3B4h] [bp-210h]
  int v177; // [sp+3C8h] [bp-1FCh]
  unsigned int v178; // [sp+3D0h] [bp-1F4h]
  unsigned int v179; // [sp+3D4h] [bp-1F0h]
  unsigned int v180; // [sp+3D8h] [bp-1ECh]
  unsigned int v181; // [sp+3DCh] [bp-1E8h]
  unsigned int v182; // [sp+3E0h] [bp-1E4h]
  unsigned int v183; // [sp+3E4h] [bp-1E0h]
  unsigned int v184; // [sp+3E8h] [bp-1DCh]
  int v185; // [sp+3ECh] [bp-1D8h]
  unsigned int v186; // [sp+3F4h] [bp-1D0h]
  unsigned int v187; // [sp+3F8h] [bp-1CCh]
  unsigned int v188; // [sp+3FCh] [bp-1C8h]
  unsigned int v189; // [sp+400h] [bp-1C4h]
  unsigned int v190; // [sp+404h] [bp-1C0h]
  unsigned int v191; // [sp+408h] [bp-1BCh]
  unsigned int v192; // [sp+40Ch] [bp-1B8h]
  int v193; // [sp+410h] [bp-1B4h]
  unsigned int v194; // [sp+418h] [bp-1ACh]
  unsigned int v195; // [sp+41Ch] [bp-1A8h]
  unsigned int v196; // [sp+420h] [bp-1A4h]
  unsigned int v197; // [sp+424h] [bp-1A0h]
  unsigned int v198; // [sp+428h] [bp-19Ch]
  unsigned int v199; // [sp+42Ch] [bp-198h]
  unsigned int v200; // [sp+430h] [bp-194h]
  int v201; // [sp+434h] [bp-190h]
  unsigned int v202; // [sp+43Ch] [bp-188h]
  unsigned int v203; // [sp+440h] [bp-184h]
  unsigned int v204; // [sp+444h] [bp-180h]
  int v205; // [sp+458h] [bp-16Ch]
  unsigned int v206; // [sp+460h] [bp-164h]
  unsigned int v207; // [sp+464h] [bp-160h]
  unsigned int v208; // [sp+468h] [bp-15Ch]
  unsigned int v209; // [sp+480h] [bp-144h]
  unsigned int v210; // [sp+484h] [bp-140h]
  unsigned int v211; // [sp+488h] [bp-13Ch]
  unsigned int v212; // [sp+490h] [bp-134h]
  unsigned int v213; // [sp+494h] [bp-130h]
  unsigned int v214; // [sp+498h] [bp-12Ch]
  unsigned int v215; // [sp+4C0h] [bp-104h]
  unsigned int v216; // [sp+4C4h] [bp-100h]
  unsigned int v217; // [sp+4C8h] [bp-FCh]
  unsigned int v218; // [sp+4D0h] [bp-F4h]
  unsigned int v219; // [sp+4D4h] [bp-F0h]
  unsigned int v220; // [sp+4D8h] [bp-ECh]
  int v221; // [sp+4ECh] [bp-D8h]
  int v222; // [sp+4ECh] [bp-D8h]
  int v223; // [sp+4ECh] [bp-D8h]
  int v224; // [sp+4ECh] [bp-D8h]
  int v225; // [sp+4ECh] [bp-D8h]
  int v226; // [sp+4ECh] [bp-D8h]
  int v227; // [sp+4ECh] [bp-D8h]
  int v228; // [sp+4ECh] [bp-D8h]
  int v229; // [sp+4F0h] [bp-D4h]
  int v230; // [sp+4F0h] [bp-D4h]
  int v231; // [sp+4F0h] [bp-D4h]
  unsigned int v232; // [sp+4F0h] [bp-D4h]
  int v233; // [sp+4F0h] [bp-D4h]
  int v234; // [sp+4F0h] [bp-D4h]
  int v235; // [sp+4F0h] [bp-D4h]
  unsigned int v236; // [sp+4F0h] [bp-D4h]
  int v237; // [sp+4F0h] [bp-D4h]
  int v238; // [sp+4F0h] [bp-D4h]
  int v239; // [sp+4F0h] [bp-D4h]
  int v240; // [sp+4F4h] [bp-D0h]
  int v241; // [sp+4F4h] [bp-D0h]
  int v242; // [sp+4F4h] [bp-D0h]
  unsigned int v243; // [sp+4F4h] [bp-D0h]
  int v244; // [sp+4F4h] [bp-D0h]
  int v245; // [sp+4F4h] [bp-D0h]
  int v246; // [sp+4F4h] [bp-D0h]
  unsigned int v247; // [sp+4F4h] [bp-D0h]
  int v248; // [sp+4F4h] [bp-D0h]
  int v249; // [sp+4F4h] [bp-D0h]
  int v250; // [sp+4F4h] [bp-D0h]
  int v251; // [sp+4F4h] [bp-D0h]
  int v252; // [sp+4F8h] [bp-CCh]
  int v253; // [sp+4F8h] [bp-CCh]
  int v254; // [sp+4F8h] [bp-CCh]
  unsigned int v255; // [sp+4F8h] [bp-CCh]
  int v256; // [sp+4F8h] [bp-CCh]
  int v257; // [sp+4F8h] [bp-CCh]
  int v258; // [sp+4F8h] [bp-CCh]
  unsigned int v259; // [sp+4F8h] [bp-CCh]
  int v260; // [sp+4F8h] [bp-CCh]
  int v261; // [sp+4F8h] [bp-CCh]
  int v262; // [sp+4F8h] [bp-CCh]
  int v263; // [sp+4F8h] [bp-CCh]
  int i; // [sp+4FCh] [bp-C8h]
  unsigned int v265; // [sp+500h] [bp-C4h]
  int v266; // [sp+500h] [bp-C4h]
  int v267; // [sp+500h] [bp-C4h]
  int v268; // [sp+500h] [bp-C4h]
  int v269; // [sp+500h] [bp-C4h]
  int v270; // [sp+500h] [bp-C4h]
  unsigned int v271; // [sp+504h] [bp-C0h]
  int v272; // [sp+504h] [bp-C0h]
  int v273; // [sp+504h] [bp-C0h]
  int v274; // [sp+504h] [bp-C0h]
  int v275; // [sp+504h] [bp-C0h]
  int v276; // [sp+504h] [bp-C0h]
  unsigned int v277; // [sp+508h] [bp-BCh]
  int v278; // [sp+508h] [bp-BCh]
  int v279; // [sp+508h] [bp-BCh]
  int v280; // [sp+508h] [bp-BCh]
  int v281; // [sp+508h] [bp-BCh]
  int v282; // [sp+508h] [bp-BCh]
  unsigned int v283; // [sp+50Ch] [bp-B8h]
  int v284; // [sp+50Ch] [bp-B8h]
  unsigned int v285; // [sp+50Ch] [bp-B8h]
  int v286; // [sp+50Ch] [bp-B8h]
  int v287; // [sp+510h] [bp-B4h]
  int v288; // [sp+510h] [bp-B4h]
  int v289; // [sp+510h] [bp-B4h]
  int v290; // [sp+510h] [bp-B4h]
  int v291; // [sp+510h] [bp-B4h]
  int v292; // [sp+510h] [bp-B4h]
  int v293; // [sp+510h] [bp-B4h]
  int v294; // [sp+510h] [bp-B4h]
  int v295; // [sp+514h] [bp-B0h]
  int v296; // [sp+514h] [bp-B0h]
  int v297; // [sp+514h] [bp-B0h]
  int v298; // [sp+514h] [bp-B0h]
  int v299; // [sp+514h] [bp-B0h]
  int v300; // [sp+514h] [bp-B0h]
  int v301; // [sp+514h] [bp-B0h]
  int v302; // [sp+514h] [bp-B0h]
  int v303; // [sp+518h] [bp-ACh]
  int v304; // [sp+518h] [bp-ACh]
  int v305; // [sp+518h] [bp-ACh]
  int v306; // [sp+518h] [bp-ACh]
  int v307; // [sp+518h] [bp-ACh]
  int v308; // [sp+518h] [bp-ACh]
  int v309; // [sp+518h] [bp-ACh]
  int v310; // [sp+518h] [bp-ACh]
  unsigned int v311; // [sp+51Ch] [bp-A8h]
  int v312; // [sp+51Ch] [bp-A8h]
  unsigned int v313; // [sp+51Ch] [bp-A8h]
  int v314; // [sp+51Ch] [bp-A8h]
  int v315; // [sp+51Ch] [bp-A8h]
  int v316; // [sp+520h] [bp-A4h]
  int v317; // [sp+520h] [bp-A4h]
  int v318; // [sp+520h] [bp-A4h]
  int v319; // [sp+520h] [bp-A4h]
  int v320; // [sp+520h] [bp-A4h]
  int v321; // [sp+520h] [bp-A4h]
  int v322; // [sp+520h] [bp-A4h]
  int v323; // [sp+524h] [bp-A0h]
  int v324; // [sp+524h] [bp-A0h]
  int v325; // [sp+524h] [bp-A0h]
  int v326; // [sp+524h] [bp-A0h]
  int v327; // [sp+524h] [bp-A0h]
  int v328; // [sp+524h] [bp-A0h]
  int v329; // [sp+524h] [bp-A0h]
  int v330; // [sp+524h] [bp-A0h]
  int v331; // [sp+528h] [bp-9Ch]
  int v332; // [sp+528h] [bp-9Ch]
  int v333; // [sp+528h] [bp-9Ch]
  int v334; // [sp+528h] [bp-9Ch]
  int v335; // [sp+528h] [bp-9Ch]
  int v336; // [sp+528h] [bp-9Ch]
  int v337; // [sp+528h] [bp-9Ch]
  int v338; // [sp+528h] [bp-9Ch]
  unsigned int v339; // [sp+52Ch] [bp-98h]
  int v340; // [sp+52Ch] [bp-98h]
  unsigned int v341; // [sp+52Ch] [bp-98h]
  int v342; // [sp+52Ch] [bp-98h]
  int v343; // [sp+52Ch] [bp-98h]
  int v344; // [sp+530h] [bp-94h]
  int v345; // [sp+530h] [bp-94h]
  int v346; // [sp+530h] [bp-94h]
  int v347; // [sp+530h] [bp-94h]
  int v348; // [sp+530h] [bp-94h]
  int v349; // [sp+530h] [bp-94h]
  int v350; // [sp+530h] [bp-94h]
  int v351; // [sp+534h] [bp-90h]
  int v352; // [sp+534h] [bp-90h]
  int v353; // [sp+534h] [bp-90h]
  int v354; // [sp+534h] [bp-90h]
  int v355; // [sp+534h] [bp-90h]
  int v356; // [sp+534h] [bp-90h]
  int v357; // [sp+534h] [bp-90h]
  int v358; // [sp+538h] [bp-8Ch]
  int v359; // [sp+538h] [bp-8Ch]
  int v360; // [sp+538h] [bp-8Ch]
  int v361; // [sp+538h] [bp-8Ch]
  int v362; // [sp+538h] [bp-8Ch]
  int v363; // [sp+538h] [bp-8Ch]
  int v364; // [sp+538h] [bp-8Ch]
  unsigned int v365; // [sp+53Ch] [bp-88h]
  int v366; // [sp+53Ch] [bp-88h]
  unsigned int v367; // [sp+53Ch] [bp-88h]
  int v368; // [sp+53Ch] [bp-88h]
  int v369; // [sp+540h] [bp-84h]
  int v370; // [sp+540h] [bp-84h]
  int v371; // [sp+540h] [bp-84h]
  int v372; // [sp+540h] [bp-84h]
  int v373; // [sp+540h] [bp-84h]
  int v374; // [sp+540h] [bp-84h]
  int v375; // [sp+540h] [bp-84h]
  int v376; // [sp+544h] [bp-80h]
  int v377; // [sp+544h] [bp-80h]
  int v378; // [sp+544h] [bp-80h]
  int v379; // [sp+544h] [bp-80h]
  int v380; // [sp+544h] [bp-80h]
  int v381; // [sp+544h] [bp-80h]
  int v382; // [sp+544h] [bp-80h]
  int v383; // [sp+544h] [bp-80h]
  int v384; // [sp+548h] [bp-7Ch]
  int v385; // [sp+548h] [bp-7Ch]
  int v386; // [sp+548h] [bp-7Ch]
  int v387; // [sp+548h] [bp-7Ch]
  int v388; // [sp+548h] [bp-7Ch]
  int v389; // [sp+548h] [bp-7Ch]
  int v390; // [sp+548h] [bp-7Ch]
  int v391; // [sp+548h] [bp-7Ch]
  unsigned int v392; // [sp+54Ch] [bp-78h]
  int v393; // [sp+54Ch] [bp-78h]
  unsigned int v394; // [sp+54Ch] [bp-78h]
  int v395; // [sp+54Ch] [bp-78h]
  int v396; // [sp+54Ch] [bp-78h]
  int v397; // [sp+550h] [bp-74h]
  int v398; // [sp+550h] [bp-74h]
  int v399; // [sp+550h] [bp-74h]
  int v400; // [sp+550h] [bp-74h]
  int v401; // [sp+550h] [bp-74h]
  int v402; // [sp+550h] [bp-74h]
  int v403; // [sp+550h] [bp-74h]
  int v404; // [sp+554h] [bp-70h]
  int v405; // [sp+554h] [bp-70h]
  int v406; // [sp+554h] [bp-70h]
  int v407; // [sp+554h] [bp-70h]
  int v408; // [sp+554h] [bp-70h]
  int v409; // [sp+554h] [bp-70h]
  int v410; // [sp+554h] [bp-70h]
  int v411; // [sp+558h] [bp-6Ch]
  int v412; // [sp+558h] [bp-6Ch]
  int v413; // [sp+558h] [bp-6Ch]
  int v414; // [sp+558h] [bp-6Ch]
  int v415; // [sp+558h] [bp-6Ch]
  int v416; // [sp+558h] [bp-6Ch]
  int v417; // [sp+558h] [bp-6Ch]
  unsigned int v418; // [sp+55Ch] [bp-68h]
  int v419; // [sp+55Ch] [bp-68h]
  unsigned int v420; // [sp+55Ch] [bp-68h]
  int v421; // [sp+55Ch] [bp-68h]
  int v422; // [sp+560h] [bp-64h]
  int v423; // [sp+560h] [bp-64h]
  int v424; // [sp+560h] [bp-64h]
  int v425; // [sp+560h] [bp-64h]
  int v426; // [sp+560h] [bp-64h]
  int v427; // [sp+560h] [bp-64h]
  int v428; // [sp+560h] [bp-64h]
  int v429; // [sp+564h] [bp-60h]
  int v430; // [sp+564h] [bp-60h]
  int v431; // [sp+564h] [bp-60h]
  int v432; // [sp+564h] [bp-60h]
  int v433; // [sp+564h] [bp-60h]
  int v434; // [sp+564h] [bp-60h]
  int v435; // [sp+564h] [bp-60h]
  int v436; // [sp+564h] [bp-60h]
  int v437; // [sp+568h] [bp-5Ch]
  int v438; // [sp+568h] [bp-5Ch]
  int v439; // [sp+568h] [bp-5Ch]
  int v440; // [sp+568h] [bp-5Ch]
  int v441; // [sp+568h] [bp-5Ch]
  int v442; // [sp+568h] [bp-5Ch]
  int v443; // [sp+568h] [bp-5Ch]
  int v444; // [sp+568h] [bp-5Ch]
  unsigned int v445; // [sp+56Ch] [bp-58h]
  int v446; // [sp+56Ch] [bp-58h]
  unsigned int v447; // [sp+56Ch] [bp-58h]
  int v448; // [sp+56Ch] [bp-58h]
  int v449; // [sp+56Ch] [bp-58h]
  int v450; // [sp+570h] [bp-54h]
  int v451; // [sp+570h] [bp-54h]
  int v452; // [sp+570h] [bp-54h]
  int v453; // [sp+570h] [bp-54h]
  int v454; // [sp+570h] [bp-54h]
  int v455; // [sp+570h] [bp-54h]
  int v456; // [sp+570h] [bp-54h]
  int v457; // [sp+574h] [bp-50h]
  int v458; // [sp+574h] [bp-50h]
  int v459; // [sp+574h] [bp-50h]
  int v460; // [sp+574h] [bp-50h]
  int v461; // [sp+574h] [bp-50h]
  int v462; // [sp+574h] [bp-50h]
  int v463; // [sp+574h] [bp-50h]
  int v464; // [sp+578h] [bp-4Ch]
  int v465; // [sp+578h] [bp-4Ch]
  int v466; // [sp+578h] [bp-4Ch]
  int v467; // [sp+578h] [bp-4Ch]
  int v468; // [sp+578h] [bp-4Ch]
  int v469; // [sp+578h] [bp-4Ch]
  int v470; // [sp+578h] [bp-4Ch]
  unsigned int v471; // [sp+57Ch] [bp-48h]
  int v472; // [sp+57Ch] [bp-48h]
  unsigned int v473; // [sp+57Ch] [bp-48h]
  int v474; // [sp+57Ch] [bp-48h]
  int v475; // [sp+580h] [bp-44h]
  int v476; // [sp+580h] [bp-44h]
  int v477; // [sp+580h] [bp-44h]
  int v478; // [sp+584h] [bp-40h]
  int v479; // [sp+584h] [bp-40h]
  int v480; // [sp+584h] [bp-40h]
  int v481; // [sp+588h] [bp-3Ch]
  int v482; // [sp+588h] [bp-3Ch]
  int v483; // [sp+588h] [bp-3Ch]
  int v484; // [sp+58Ch] [bp-38h]
  int v485; // [sp+58Ch] [bp-38h]
  int v486; // [sp+58Ch] [bp-38h]
  int v487; // [sp+590h] [bp-34h]
  int v488; // [sp+590h] [bp-34h]
  int v489; // [sp+590h] [bp-34h]
  int v490; // [sp+594h] [bp-30h]
  int v491; // [sp+594h] [bp-30h]
  int v492; // [sp+594h] [bp-30h]
  int v493; // [sp+598h] [bp-2Ch]
  int v494; // [sp+598h] [bp-2Ch]
  int v495; // [sp+598h] [bp-2Ch]
  int v496; // [sp+59Ch] [bp-28h]
  int v497; // [sp+59Ch] [bp-28h]
  int v498; // [sp+59Ch] [bp-28h]
  int v499; // [sp+5A0h] [bp-24h]
  int v500; // [sp+5A0h] [bp-24h]
  int v501; // [sp+5A0h] [bp-24h]
  int v502; // [sp+5A4h] [bp-20h]
  int v503; // [sp+5A4h] [bp-20h]
  int v504; // [sp+5A4h] [bp-20h]
  int v505; // [sp+5A8h] [bp-1Ch]
  int v506; // [sp+5A8h] [bp-1Ch]
  int v507; // [sp+5A8h] [bp-1Ch]
  int v508; // [sp+5ACh] [bp-18h]
  int v509; // [sp+5ACh] [bp-18h]
  int v510; // [sp+5ACh] [bp-18h]
  int v511; // [sp+5B0h] [bp-14h]
  int v512; // [sp+5B0h] [bp-14h]
  int v513; // [sp+5B0h] [bp-14h]
  int v514; // [sp+5B4h] [bp-10h]
  int v515; // [sp+5B4h] [bp-10h]
  int v516; // [sp+5B4h] [bp-10h]
  int v517; // [sp+5B8h] [bp-Ch]
  int v518; // [sp+5B8h] [bp-Ch]
  int v519; // [sp+5B8h] [bp-Ch]
  int v520; // [sp+5BCh] [bp-8h]
  int v521; // [sp+5BCh] [bp-8h]
  int v522; // [sp+5BCh] [bp-8h]

  v520 = a1[33];
  v517 = a1[34];
  v514 = a1[35];
  v511 = a1[36];
  v508 = a1[37];
  v505 = a1[38];
  v502 = a1[39];
  v499 = a1[40];
  v496 = a1[41];
  v493 = a1[42];
  v490 = a1[43];
  v487 = a1[44];
  v484 = a1[45];
  v481 = a1[46];
  v478 = a1[47];
  v475 = a1[48];
  v471 = sub_319870(a2);
  v464 = sub_319870(a2 + 4);
  v457 = sub_319870(a2 + 8);
  v450 = sub_319870(a2 + 12);
  v252 = dword_585918[(v450 ^ (unsigned int)v499) >> 24]
       ^ dword_584D18[(unsigned __int8)(v471 ^ v508)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v464 ^ v505) >> 8)]
       ^ dword_585518[(unsigned __int8)((v457 ^ (unsigned int)v502) >> 16)];
  v240 = dword_585918[(v471 ^ v508) >> 24]
       ^ dword_584D18[(unsigned __int8)(v464 ^ v505)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v457 ^ v502) >> 8)]
       ^ dword_585518[(unsigned __int8)((v450 ^ (unsigned int)v499) >> 16)];
  v229 = dword_585918[(v464 ^ (unsigned int)v505) >> 24]
       ^ dword_584D18[(unsigned __int8)(v457 ^ v502)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v450 ^ v499) >> 8)]
       ^ dword_585518[(unsigned __int8)((v471 ^ v508) >> 16)];
  v221 = dword_585918[(v457 ^ (unsigned int)v502) >> 24]
       ^ dword_584D18[(unsigned __int8)(v450 ^ v499)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v471 ^ v508) >> 8)]
       ^ dword_585518[(unsigned __int8)((v464 ^ (unsigned int)v505) >> 16)];
  v445 = sub_319870(a2 + 16);
  v437 = sub_319870(a2 + 20);
  v429 = sub_319870(a2 + 24);
  v422 = sub_319870(a2 + 28);
  v220 = v445 ^ v252;
  v219 = v437 ^ v240;
  v218 = v429 ^ v229;
  v253 = dword_585918[(v422 ^ (unsigned int)v221) >> 24]
       ^ dword_584D18[(unsigned __int8)(v445 ^ v252)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v437 ^ v240) >> 8)]
       ^ dword_585518[(unsigned __int8)((v429 ^ (unsigned int)v229) >> 16)];
  v241 = dword_585918[HIBYTE(v220)]
       ^ dword_584D18[(unsigned __int8)(v437 ^ v240)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v429 ^ v229) >> 8)]
       ^ dword_585518[(unsigned __int8)((v422 ^ (unsigned int)v221) >> 16)];
  v230 = dword_585918[HIBYTE(v219)]
       ^ dword_584D18[(unsigned __int8)(v429 ^ v229)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v422 ^ v221) >> 8)]
       ^ dword_585518[BYTE2(v220)];
  v222 = dword_585918[HIBYTE(v218)]
       ^ dword_584D18[(unsigned __int8)(v422 ^ v221)]
       ^ dword_585118[BYTE1(v220)]
       ^ dword_585518[BYTE2(v219)];
  v418 = sub_319870(a2 + 32);
  v411 = sub_319870(a2 + 36);
  v404 = sub_319870(a2 + 40);
  v397 = sub_319870(a2 + 44);
  v217 = v418 ^ v253;
  v216 = v411 ^ v241;
  v215 = v404 ^ v230;
  v254 = dword_585918[(v397 ^ (unsigned int)v222) >> 24]
       ^ dword_584D18[(unsigned __int8)(v418 ^ v253)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v411 ^ v241) >> 8)]
       ^ dword_585518[(unsigned __int8)((v404 ^ (unsigned int)v230) >> 16)];
  v242 = dword_585918[HIBYTE(v217)]
       ^ dword_584D18[(unsigned __int8)(v411 ^ v241)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v404 ^ v230) >> 8)]
       ^ dword_585518[(unsigned __int8)((v397 ^ (unsigned int)v222) >> 16)];
  v231 = dword_585918[HIBYTE(v216)]
       ^ dword_584D18[(unsigned __int8)(v404 ^ v230)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v397 ^ v222) >> 8)]
       ^ dword_585518[BYTE2(v217)];
  v223 = dword_585918[HIBYTE(v215)]
       ^ dword_584D18[(unsigned __int8)(v397 ^ v222)]
       ^ dword_585118[BYTE1(v217)]
       ^ dword_585518[BYTE2(v216)];
  v392 = sub_319870(a2 + 48);
  v255 = v392 ^ v254;
  v384 = sub_319870(a2 + 52);
  v243 = v384 ^ v242;
  v376 = sub_319870(a2 + 56);
  v232 = v376 ^ v231;
  v369 = sub_319870(a2 + 60);
  v521 = dword_585918[(v369 ^ (unsigned int)v223) >> 24]
       ^ dword_584D18[(unsigned __int8)v255]
       ^ dword_585118[BYTE1(v243)]
       ^ dword_585518[BYTE2(v232)]
       ^ v520;
  v518 = dword_585918[HIBYTE(v255)]
       ^ dword_584D18[(unsigned __int8)v243]
       ^ dword_585118[BYTE1(v232)]
       ^ dword_585518[(unsigned __int8)((v369 ^ (unsigned int)v223) >> 16)]
       ^ v517;
  v515 = dword_585918[HIBYTE(v243)]
       ^ dword_584D18[(unsigned __int8)v232]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v369 ^ v223) >> 8)]
       ^ dword_585518[BYTE2(v255)]
       ^ v514;
  v512 = dword_585918[HIBYTE(v232)]
       ^ dword_584D18[(unsigned __int8)(v369 ^ v223)]
       ^ dword_585118[BYTE1(v255)]
       ^ dword_585518[BYTE2(v243)]
       ^ v511;
  v365 = sub_319870(a2 + 64);
  v358 = sub_319870(a2 + 68);
  v351 = sub_319870(a2 + 72);
  v344 = sub_319870(a2 + 76);
  v256 = dword_585918[(v344 ^ (unsigned int)v475) >> 24]
       ^ dword_584D18[(unsigned __int8)(v365 ^ v484)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v358 ^ v481) >> 8)]
       ^ dword_585518[(unsigned __int8)((v351 ^ (unsigned int)v478) >> 16)];
  v244 = dword_585918[(v365 ^ v484) >> 24]
       ^ dword_584D18[(unsigned __int8)(v358 ^ v481)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v351 ^ v478) >> 8)]
       ^ dword_585518[(unsigned __int8)((v344 ^ (unsigned int)v475) >> 16)];
  v233 = dword_585918[(v358 ^ (unsigned int)v481) >> 24]
       ^ dword_584D18[(unsigned __int8)(v351 ^ v478)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v344 ^ v475) >> 8)]
       ^ dword_585518[(unsigned __int8)((v365 ^ v484) >> 16)];
  v224 = dword_585918[(v351 ^ (unsigned int)v478) >> 24]
       ^ dword_584D18[(unsigned __int8)(v344 ^ v475)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v365 ^ v484) >> 8)]
       ^ dword_585518[(unsigned __int8)((v358 ^ (unsigned int)v481) >> 16)];
  v339 = sub_319870(a2 + 80);
  v331 = sub_319870(a2 + 84);
  v323 = sub_319870(a2 + 88);
  v316 = sub_319870(a2 + 92);
  v214 = v339 ^ v256;
  v213 = v331 ^ v244;
  v212 = v323 ^ v233;
  v257 = dword_585918[(v316 ^ (unsigned int)v224) >> 24]
       ^ dword_584D18[(unsigned __int8)(v339 ^ v256)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v331 ^ v244) >> 8)]
       ^ dword_585518[(unsigned __int8)((v323 ^ (unsigned int)v233) >> 16)];
  v245 = dword_585918[HIBYTE(v214)]
       ^ dword_584D18[(unsigned __int8)(v331 ^ v244)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v323 ^ v233) >> 8)]
       ^ dword_585518[(unsigned __int8)((v316 ^ (unsigned int)v224) >> 16)];
  v234 = dword_585918[HIBYTE(v213)]
       ^ dword_584D18[(unsigned __int8)(v323 ^ v233)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v316 ^ v224) >> 8)]
       ^ dword_585518[BYTE2(v214)];
  v225 = dword_585918[HIBYTE(v212)]
       ^ dword_584D18[(unsigned __int8)(v316 ^ v224)]
       ^ dword_585118[BYTE1(v214)]
       ^ dword_585518[BYTE2(v213)];
  v311 = sub_319870(a2 + 96);
  v303 = sub_319870(a2 + 100);
  v295 = sub_319870(a2 + 104);
  v287 = sub_319870(a2 + 108);
  v211 = v311 ^ v257;
  v210 = v303 ^ v245;
  v209 = v295 ^ v234;
  v258 = dword_585918[(v287 ^ (unsigned int)v225) >> 24]
       ^ dword_584D18[(unsigned __int8)(v311 ^ v257)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v303 ^ v245) >> 8)]
       ^ dword_585518[(unsigned __int8)((v295 ^ (unsigned int)v234) >> 16)];
  v246 = dword_585918[HIBYTE(v211)]
       ^ dword_584D18[(unsigned __int8)(v303 ^ v245)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v295 ^ v234) >> 8)]
       ^ dword_585518[(unsigned __int8)((v287 ^ (unsigned int)v225) >> 16)];
  v235 = dword_585918[HIBYTE(v210)]
       ^ dword_584D18[(unsigned __int8)(v295 ^ v234)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v287 ^ v225) >> 8)]
       ^ dword_585518[BYTE2(v211)];
  v226 = dword_585918[HIBYTE(v209)]
       ^ dword_584D18[(unsigned __int8)(v287 ^ v225)]
       ^ dword_585118[BYTE1(v211)]
       ^ dword_585518[BYTE2(v210)];
  v283 = sub_319870(a2 + 112);
  v259 = v283 ^ v258;
  v277 = sub_319870(a2 + 116);
  v247 = v277 ^ v246;
  v271 = sub_319870(a2 + 120);
  v236 = v271 ^ v235;
  result = sub_319870(a2 + 124);
  v265 = result;
  v497 = dword_585918[(result ^ v226) >> 24]
       ^ dword_584D18[(unsigned __int8)v259]
       ^ dword_585118[BYTE1(v247)]
       ^ dword_585518[BYTE2(v236)]
       ^ v496;
  v494 = dword_585918[HIBYTE(v259)]
       ^ dword_584D18[(unsigned __int8)v247]
       ^ dword_585118[BYTE1(v236)]
       ^ dword_585518[(unsigned __int8)((result ^ v226) >> 16)]
       ^ v493;
  v491 = dword_585918[HIBYTE(v247)]
       ^ dword_584D18[(unsigned __int8)v236]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(result ^ v226) >> 8)]
       ^ dword_585518[BYTE2(v259)]
       ^ v490;
  v488 = dword_585918[HIBYTE(v236)]
       ^ dword_584D18[(unsigned __int8)(result ^ v226)]
       ^ dword_585118[BYTE1(v259)]
       ^ dword_585518[BYTE2(v247)]
       ^ v487;
  for ( i = 0; i <= 2; ++i )
  {
    v156 = v464;
    v155 = v457;
    v154 = v450;
    v465 = dword_585918[HIBYTE(v471)]
         ^ dword_584D18[(unsigned __int8)v464]
         ^ dword_585118[BYTE1(v457)]
         ^ dword_585518[BYTE2(v450)];
    v458 = dword_585918[HIBYTE(v156)]
         ^ dword_584D18[(unsigned __int8)v457]
         ^ dword_585118[BYTE1(v450)]
         ^ dword_585518[BYTE2(v471)];
    v451 = dword_585918[HIBYTE(v155)]
         ^ dword_584D18[(unsigned __int8)v450]
         ^ dword_585118[BYTE1(v471)]
         ^ dword_585518[BYTE2(v156)];
    v153 = dword_585918[HIBYTE(v154)]
         ^ dword_584D18[(unsigned __int8)v471]
         ^ dword_585118[BYTE1(v156)]
         ^ dword_585518[BYTE2(v155)];
    v472 = v283 ^ v465;
    v466 = v277 ^ v458;
    v459 = v271 ^ v451;
    v452 = v265 ^ v153;
    if ( !i )
    {
      v472 ^= a1[49];
      v466 ^= a1[50];
      v459 ^= a1[51];
      v452 ^= ~a1[52];
    }
    v260 = dword_585918[(v452 ^ (unsigned int)v512) >> 24]
         ^ dword_584D18[(unsigned __int8)(v472 ^ v521)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v466 ^ v518) >> 8)]
         ^ dword_585518[(unsigned __int8)((v459 ^ (unsigned int)v515) >> 16)];
    v248 = dword_585918[(v472 ^ (unsigned int)v521) >> 24]
         ^ dword_584D18[(unsigned __int8)(v466 ^ v518)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v459 ^ v515) >> 8)]
         ^ dword_585518[(unsigned __int8)((v452 ^ (unsigned int)v512) >> 16)];
    v237 = dword_585918[(v466 ^ (unsigned int)v518) >> 24]
         ^ dword_584D18[(unsigned __int8)(v459 ^ v515)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v452 ^ v512) >> 8)]
         ^ dword_585518[(unsigned __int8)((v472 ^ (unsigned int)v521) >> 16)];
    v227 = dword_585918[(v459 ^ (unsigned int)v515) >> 24]
         ^ dword_584D18[(unsigned __int8)(v452 ^ v512)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v472 ^ v521) >> 8)]
         ^ dword_585518[(unsigned __int8)((v466 ^ (unsigned int)v518) >> 16)];
    v152 = v437;
    v151 = v429;
    v150 = v422;
    v438 = dword_585918[HIBYTE(v445)]
         ^ dword_584D18[(unsigned __int8)v437]
         ^ dword_585118[BYTE1(v429)]
         ^ dword_585518[BYTE2(v422)];
    v430 = dword_585918[HIBYTE(v152)]
         ^ dword_584D18[(unsigned __int8)v429]
         ^ dword_585118[BYTE1(v422)]
         ^ dword_585518[BYTE2(v445)];
    v423 = dword_585918[HIBYTE(v151)]
         ^ dword_584D18[(unsigned __int8)v422]
         ^ dword_585118[BYTE1(v445)]
         ^ dword_585518[BYTE2(v152)];
    v149 = dword_585918[HIBYTE(v150)]
         ^ dword_584D18[(unsigned __int8)v445]
         ^ dword_585118[BYTE1(v152)]
         ^ dword_585518[BYTE2(v151)];
    v446 = v472 ^ v438;
    v439 = v466 ^ v430;
    v431 = v459 ^ v423;
    v424 = v452 ^ v149;
    if ( i == 1 )
    {
      v446 ^= a1[52];
      v439 ^= a1[51];
      v431 ^= a1[50];
      v424 ^= ~a1[49];
    }
    v148 = v446 ^ v260;
    v147 = v439 ^ v248;
    v146 = v431 ^ v237;
    v261 = dword_585918[(v424 ^ (unsigned int)v227) >> 24]
         ^ dword_584D18[(unsigned __int8)(v446 ^ v260)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v439 ^ v248) >> 8)]
         ^ dword_585518[(unsigned __int8)((v431 ^ (unsigned int)v237) >> 16)];
    v249 = dword_585918[HIBYTE(v148)]
         ^ dword_584D18[(unsigned __int8)(v439 ^ v248)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v431 ^ v237) >> 8)]
         ^ dword_585518[(unsigned __int8)((v424 ^ (unsigned int)v227) >> 16)];
    v238 = dword_585918[HIBYTE(v147)]
         ^ dword_584D18[(unsigned __int8)(v431 ^ v237)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v424 ^ v227) >> 8)]
         ^ dword_585518[BYTE2(v148)];
    v145 = v411;
    v144 = v404;
    v143 = v397;
    v412 = dword_585918[HIBYTE(v418)]
         ^ dword_584D18[(unsigned __int8)v411]
         ^ dword_585118[BYTE1(v404)]
         ^ dword_585518[BYTE2(v397)];
    v405 = dword_585918[HIBYTE(v145)]
         ^ dword_584D18[(unsigned __int8)v404]
         ^ dword_585118[BYTE1(v397)]
         ^ dword_585518[BYTE2(v418)];
    v398 = dword_585918[HIBYTE(v144)]
         ^ dword_584D18[(unsigned __int8)v397]
         ^ dword_585118[BYTE1(v418)]
         ^ dword_585518[BYTE2(v145)];
    v142 = dword_585918[HIBYTE(v143)]
         ^ dword_584D18[(unsigned __int8)v418]
         ^ dword_585118[BYTE1(v145)]
         ^ dword_585518[BYTE2(v144)];
    v419 = v446 ^ v412;
    v413 = v439 ^ v405;
    v406 = v431 ^ v398;
    v399 = v424 ^ v142;
    v141 = v419 ^ v261;
    v140 = v413 ^ v249;
    v139 = v424
         ^ v142
         ^ dword_585918[HIBYTE(v146)]
         ^ dword_584D18[(unsigned __int8)(v424 ^ v227)]
         ^ dword_585118[BYTE1(v148)]
         ^ dword_585518[BYTE2(v147)];
    v262 = dword_585918[HIBYTE(v139)]
         ^ dword_584D18[(unsigned __int8)(v419 ^ v261)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v413 ^ v249) >> 8)]
         ^ dword_585518[(unsigned __int8)((v406 ^ (unsigned int)v238) >> 16)];
    v250 = dword_585918[HIBYTE(v141)]
         ^ dword_584D18[(unsigned __int8)(v413 ^ v249)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v406 ^ v238) >> 8)]
         ^ dword_585518[BYTE2(v139)];
    v138 = v384;
    v137 = v376;
    v136 = v369;
    v385 = dword_585918[HIBYTE(v392)]
         ^ dword_584D18[(unsigned __int8)v384]
         ^ dword_585118[BYTE1(v376)]
         ^ dword_585518[BYTE2(v369)];
    v377 = dword_585918[HIBYTE(v138)]
         ^ dword_584D18[(unsigned __int8)v376]
         ^ dword_585118[BYTE1(v369)]
         ^ dword_585518[BYTE2(v392)];
    v370 = dword_585918[HIBYTE(v137)]
         ^ dword_584D18[(unsigned __int8)v369]
         ^ dword_585118[BYTE1(v392)]
         ^ dword_585518[BYTE2(v138)];
    v135 = dword_585918[HIBYTE(v136)]
         ^ dword_584D18[(unsigned __int8)v392]
         ^ dword_585118[BYTE1(v138)]
         ^ dword_585518[BYTE2(v137)];
    v393 = v419 ^ v385;
    v386 = v413 ^ v377;
    v378 = v406 ^ v370;
    v371 = v424 ^ v142 ^ v135;
    v134 = v378
         ^ dword_585918[HIBYTE(v140)]
         ^ dword_584D18[(unsigned __int8)(v406 ^ v238)]
         ^ dword_585118[BYTE1(v139)]
         ^ dword_585518[BYTE2(v141)];
    v133 = v371
         ^ dword_585918[(v406 ^ (unsigned int)v238) >> 24]
         ^ dword_584D18[(unsigned __int8)v139]
         ^ dword_585118[BYTE1(v141)]
         ^ dword_585518[BYTE2(v140)];
    v485 = dword_585918[HIBYTE(v133)]
         ^ dword_584D18[(unsigned __int8)(v393 ^ v262)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v386 ^ v250) >> 8)]
         ^ dword_585518[BYTE2(v134)]
         ^ v484;
    v482 = dword_585918[(v393 ^ (unsigned int)v262) >> 24]
         ^ dword_584D18[(unsigned __int8)(v386 ^ v250)]
         ^ dword_585118[BYTE1(v134)]
         ^ dword_585518[BYTE2(v133)]
         ^ v481;
    v479 = dword_585918[(v386 ^ (unsigned int)v250) >> 24]
         ^ dword_584D18[(unsigned __int8)v134]
         ^ dword_585118[BYTE1(v133)]
         ^ dword_585518[(unsigned __int8)((v393 ^ (unsigned int)v262) >> 16)]
         ^ v478;
    v476 = dword_585918[HIBYTE(v134)]
         ^ dword_584D18[(unsigned __int8)v133]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v393 ^ v262) >> 8)]
         ^ dword_585518[(unsigned __int8)((v386 ^ (unsigned int)v250) >> 16)]
         ^ v475;
    v132 = v358;
    v131 = v351;
    v130 = v344;
    v359 = dword_585918[HIBYTE(v365)]
         ^ dword_584D18[(unsigned __int8)v358]
         ^ dword_585118[BYTE1(v351)]
         ^ dword_585518[BYTE2(v344)];
    v352 = dword_585918[HIBYTE(v132)]
         ^ dword_584D18[(unsigned __int8)v351]
         ^ dword_585118[BYTE1(v344)]
         ^ dword_585518[BYTE2(v365)];
    v345 = dword_585918[HIBYTE(v131)]
         ^ dword_584D18[(unsigned __int8)v344]
         ^ dword_585118[BYTE1(v365)]
         ^ dword_585518[BYTE2(v132)];
    v129 = dword_585918[HIBYTE(v130)]
         ^ dword_584D18[(unsigned __int8)v365]
         ^ dword_585118[BYTE1(v132)]
         ^ dword_585518[BYTE2(v131)];
    v366 = v393 ^ v359;
    v360 = v386 ^ v352;
    v353 = v378 ^ v345;
    v346 = v371 ^ v129;
    v128 = v331;
    v127 = v323;
    v126 = v316;
    v332 = dword_585918[HIBYTE(v339)]
         ^ dword_584D18[(unsigned __int8)v331]
         ^ dword_585118[BYTE1(v323)]
         ^ dword_585518[BYTE2(v316)];
    v324 = dword_585918[HIBYTE(v128)]
         ^ dword_584D18[(unsigned __int8)v323]
         ^ dword_585118[BYTE1(v316)]
         ^ dword_585518[BYTE2(v339)];
    v317 = dword_585918[HIBYTE(v127)]
         ^ dword_584D18[(unsigned __int8)v316]
         ^ dword_585118[BYTE1(v339)]
         ^ dword_585518[BYTE2(v128)];
    v125 = dword_585918[HIBYTE(v126)]
         ^ dword_584D18[(unsigned __int8)v339]
         ^ dword_585118[BYTE1(v128)]
         ^ dword_585518[BYTE2(v127)];
    v340 = v366 ^ v332;
    v333 = v360 ^ v324;
    v325 = v353 ^ v317;
    v318 = v371 ^ v129 ^ v125;
    v124 = v340
         ^ dword_585918[(v371 ^ v129 ^ (unsigned int)v488) >> 24]
         ^ dword_584D18[(unsigned __int8)(v366 ^ v497)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v360 ^ v494) >> 8)]
         ^ dword_585518[(unsigned __int8)((v353 ^ (unsigned int)v491) >> 16)];
    v123 = v333
         ^ dword_585918[(v366 ^ (unsigned int)v497) >> 24]
         ^ dword_584D18[(unsigned __int8)(v360 ^ v494)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v353 ^ v491) >> 8)]
         ^ dword_585518[(unsigned __int8)((v371 ^ v129 ^ (unsigned int)v488) >> 16)];
    v122 = v325
         ^ dword_585918[(v360 ^ (unsigned int)v494) >> 24]
         ^ dword_584D18[(unsigned __int8)(v353 ^ v491)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v424 ^ v142 ^ v135 ^ v129 ^ v488) >> 8)]
         ^ dword_585518[(unsigned __int8)((v366 ^ (unsigned int)v497) >> 16)];
    v121 = v318
         ^ dword_585918[(v353 ^ (unsigned int)v491) >> 24]
         ^ dword_584D18[(unsigned __int8)(v424 ^ v142 ^ v135 ^ v129 ^ v488)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v366 ^ v497) >> 8)]
         ^ dword_585518[(unsigned __int8)((v360 ^ (unsigned int)v494) >> 16)];
    v120 = v303;
    v119 = v295;
    v118 = v287;
    v304 = dword_585918[HIBYTE(v311)]
         ^ dword_584D18[(unsigned __int8)v303]
         ^ dword_585118[BYTE1(v295)]
         ^ dword_585518[BYTE2(v287)];
    v296 = dword_585918[HIBYTE(v120)]
         ^ dword_584D18[(unsigned __int8)v295]
         ^ dword_585118[BYTE1(v287)]
         ^ dword_585518[BYTE2(v311)];
    v288 = dword_585918[HIBYTE(v119)]
         ^ dword_584D18[(unsigned __int8)v287]
         ^ dword_585118[BYTE1(v311)]
         ^ dword_585518[BYTE2(v120)];
    v117 = dword_585918[HIBYTE(v118)]
         ^ dword_584D18[(unsigned __int8)v311]
         ^ dword_585118[BYTE1(v120)]
         ^ dword_585518[BYTE2(v119)];
    v312 = v340 ^ v304;
    v305 = v333 ^ v296;
    v297 = v325 ^ v288;
    v289 = v318 ^ v117;
    v116 = v312
         ^ dword_585918[HIBYTE(v121)]
         ^ dword_584D18[(unsigned __int8)v124]
         ^ dword_585118[BYTE1(v123)]
         ^ dword_585518[BYTE2(v122)];
    v115 = v305
         ^ dword_585918[HIBYTE(v124)]
         ^ dword_584D18[(unsigned __int8)v123]
         ^ dword_585118[BYTE1(v122)]
         ^ dword_585518[BYTE2(v121)];
    v114 = v297
         ^ dword_585918[HIBYTE(v123)]
         ^ dword_584D18[(unsigned __int8)v122]
         ^ dword_585118[BYTE1(v121)]
         ^ dword_585518[BYTE2(v124)];
    v113 = v318
         ^ v117
         ^ dword_585918[HIBYTE(v122)]
         ^ dword_584D18[(unsigned __int8)v121]
         ^ dword_585118[BYTE1(v124)]
         ^ dword_585518[BYTE2(v123)];
    v263 = dword_585918[HIBYTE(v113)]
         ^ dword_584D18[(unsigned __int8)v116]
         ^ dword_585118[BYTE1(v115)]
         ^ dword_585518[BYTE2(v114)];
    v251 = dword_585918[HIBYTE(v116)]
         ^ dword_584D18[(unsigned __int8)v115]
         ^ dword_585118[BYTE1(v114)]
         ^ dword_585518[BYTE2(v113)];
    v239 = dword_585918[HIBYTE(v115)]
         ^ dword_584D18[(unsigned __int8)v114]
         ^ dword_585118[BYTE1(v113)]
         ^ dword_585518[BYTE2(v116)];
    v228 = dword_585918[HIBYTE(v114)]
         ^ dword_584D18[(unsigned __int8)v113]
         ^ dword_585118[BYTE1(v116)]
         ^ dword_585518[BYTE2(v115)];
    v112 = v277;
    v111 = v271;
    v110 = v265;
    v278 = dword_585918[HIBYTE(v283)]
         ^ dword_584D18[(unsigned __int8)v277]
         ^ dword_585118[BYTE1(v271)]
         ^ dword_585518[BYTE2(v265)];
    v272 = dword_585918[HIBYTE(v112)]
         ^ dword_584D18[(unsigned __int8)v271]
         ^ dword_585118[BYTE1(v265)]
         ^ dword_585518[BYTE2(v283)];
    v266 = dword_585918[HIBYTE(v111)]
         ^ dword_584D18[(unsigned __int8)v265]
         ^ dword_585118[BYTE1(v283)]
         ^ dword_585518[BYTE2(v112)];
    v109 = dword_585918[HIBYTE(v110)]
         ^ dword_584D18[(unsigned __int8)v283]
         ^ dword_585118[BYTE1(v112)]
         ^ dword_585518[BYTE2(v111)];
    v284 = v312 ^ v278;
    v279 = v305 ^ v272;
    v273 = v297 ^ v266;
    v267 = v318 ^ v117 ^ v109;
    if ( i == 2 )
    {
      v284 ^= a1[51];
      v279 ^= a1[52];
      v273 ^= a1[49];
      v267 ^= ~a1[50];
    }
    v509 = dword_585918[(v267 ^ (unsigned int)v228) >> 24]
         ^ dword_584D18[(unsigned __int8)(v284 ^ v263)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v279 ^ v251) >> 8)]
         ^ dword_585518[(unsigned __int8)((v273 ^ (unsigned int)v239) >> 16)]
         ^ v508;
    v506 = dword_585918[(v284 ^ (unsigned int)v263) >> 24]
         ^ dword_584D18[(unsigned __int8)(v279 ^ v251)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v273 ^ v239) >> 8)]
         ^ dword_585518[(unsigned __int8)((v267 ^ (unsigned int)v228) >> 16)]
         ^ v505;
    v503 = dword_585918[(v279 ^ (unsigned int)v251) >> 24]
         ^ dword_584D18[(unsigned __int8)(v273 ^ v239)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v267 ^ v228) >> 8)]
         ^ dword_585518[(unsigned __int8)((v284 ^ (unsigned int)v263) >> 16)]
         ^ v502;
    v500 = dword_585918[(v273 ^ (unsigned int)v239) >> 24]
         ^ dword_584D18[(unsigned __int8)(v267 ^ v228)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v284 ^ v263) >> 8)]
         ^ dword_585518[(unsigned __int8)((v279 ^ (unsigned int)v251) >> 16)]
         ^ v499;
    v473 = v305 ^ v472;
    v467 = v297 ^ v466;
    v460 = v289 ^ v459;
    v453 = v284 ^ v452;
    v447 = v279 ^ v446;
    v440 = v273 ^ v439;
    v432 = v267 ^ v431;
    v425 = v473 ^ v424;
    v108 = v447
         ^ dword_585918[(v453 ^ (unsigned int)v476) >> 24]
         ^ dword_584D18[(unsigned __int8)(v473 ^ v485)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v467 ^ v482) >> 8)]
         ^ dword_585518[(unsigned __int8)((v460 ^ (unsigned int)v479) >> 16)];
    v107 = v440
         ^ dword_585918[(v473 ^ v485) >> 24]
         ^ dword_584D18[(unsigned __int8)(v467 ^ v482)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v460 ^ v479) >> 8)]
         ^ dword_585518[(unsigned __int8)((v453 ^ (unsigned int)v476) >> 16)];
    v106 = v432
         ^ dword_585918[(v467 ^ (unsigned int)v482) >> 24]
         ^ dword_584D18[(unsigned __int8)(v460 ^ v479)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v453 ^ v476) >> 8)]
         ^ dword_585518[(unsigned __int8)((v473 ^ v485) >> 16)];
    v105 = v425
         ^ dword_585918[(v460 ^ (unsigned int)v479) >> 24]
         ^ dword_584D18[(unsigned __int8)(v453 ^ v476)]
         ^ dword_585118[(unsigned __int8)((unsigned __int16)(v473 ^ v485) >> 8)]
         ^ dword_585518[(unsigned __int8)((v467 ^ (unsigned int)v482) >> 16)];
    v420 = v467 ^ v419;
    v414 = v460 ^ v413;
    v407 = v453 ^ v406;
    v400 = v447 ^ v399;
    v104 = v420
         ^ dword_585918[HIBYTE(v105)]
         ^ dword_584D18[(unsigned __int8)v108]
         ^ dword_585118[BYTE1(v107)]
         ^ dword_585518[BYTE2(v106)];
    v103 = v414
         ^ dword_585918[HIBYTE(v108)]
         ^ dword_584D18[(unsigned __int8)v107]
         ^ dword_585118[BYTE1(v106)]
         ^ dword_585518[BYTE2(v105)];
    v102 = v407
         ^ dword_585918[HIBYTE(v107)]
         ^ dword_584D18[(unsigned __int8)v106]
         ^ dword_585118[BYTE1(v105)]
         ^ dword_585518[BYTE2(v108)];
    v101 = v400
         ^ dword_585918[HIBYTE(v106)]
         ^ dword_584D18[(unsigned __int8)v105]
         ^ dword_585118[BYTE1(v108)]
         ^ dword_585518[BYTE2(v107)];
    v394 = v440 ^ v393;
    v387 = v432 ^ v386;
    v379 = v425 ^ v378;
    v372 = v420 ^ v371;
    v100 = v394
         ^ dword_585918[HIBYTE(v101)]
         ^ dword_584D18[(unsigned __int8)v104]
         ^ dword_585118[BYTE1(v103)]
         ^ dword_585518[BYTE2(v102)];
    v99 = v387
        ^ dword_585918[HIBYTE(v104)]
        ^ dword_584D18[(unsigned __int8)v103]
        ^ dword_585118[BYTE1(v102)]
        ^ dword_585518[BYTE2(v101)];
    v98 = v379
        ^ dword_585918[HIBYTE(v103)]
        ^ dword_584D18[(unsigned __int8)v102]
        ^ dword_585118[BYTE1(v101)]
        ^ dword_585518[BYTE2(v104)];
    v97 = v372
        ^ dword_585918[HIBYTE(v102)]
        ^ dword_584D18[(unsigned __int8)v101]
        ^ dword_585118[BYTE1(v104)]
        ^ dword_585518[BYTE2(v103)];
    v498 = dword_585918[HIBYTE(v97)]
         ^ dword_584D18[(unsigned __int8)v100]
         ^ dword_585118[BYTE1(v99)]
         ^ dword_585518[BYTE2(v98)]
         ^ v497;
    v495 = dword_585918[HIBYTE(v100)]
         ^ dword_584D18[(unsigned __int8)v99]
         ^ dword_585118[BYTE1(v98)]
         ^ dword_585518[BYTE2(v97)]
         ^ v494;
    v492 = dword_585918[HIBYTE(v99)]
         ^ dword_584D18[(unsigned __int8)v98]
         ^ dword_585118[BYTE1(v97)]
         ^ dword_585518[BYTE2(v100)]
         ^ v491;
    v489 = dword_585918[HIBYTE(v98)]
         ^ dword_584D18[(unsigned __int8)v97]
         ^ dword_585118[BYTE1(v100)]
         ^ dword_585518[BYTE2(v99)]
         ^ v488;
    v367 = v414 ^ v366;
    v361 = v407 ^ v360;
    v354 = v400 ^ v353;
    v347 = v394 ^ v346;
    v341 = v387 ^ v340;
    v334 = v379 ^ v333;
    v326 = v372 ^ v325;
    v319 = v367 ^ v318;
    v96 = v341
        ^ dword_585918[(v347 ^ (unsigned int)v500) >> 24]
        ^ dword_584D18[(unsigned __int8)(v367 ^ v509)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v361 ^ v506) >> 8)]
        ^ dword_585518[(unsigned __int8)((v354 ^ (unsigned int)v503) >> 16)];
    v95 = v334
        ^ dword_585918[(v367 ^ v509) >> 24]
        ^ dword_584D18[(unsigned __int8)(v361 ^ v506)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v354 ^ v503) >> 8)]
        ^ dword_585518[(unsigned __int8)((v347 ^ (unsigned int)v500) >> 16)];
    v94 = v326
        ^ dword_585918[(v361 ^ (unsigned int)v506) >> 24]
        ^ dword_584D18[(unsigned __int8)(v354 ^ v503)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v347 ^ v500) >> 8)]
        ^ dword_585518[(unsigned __int8)((v367 ^ v509) >> 16)];
    v93 = v319
        ^ dword_585918[(v354 ^ (unsigned int)v503) >> 24]
        ^ dword_584D18[(unsigned __int8)(v347 ^ v500)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v367 ^ v509) >> 8)]
        ^ dword_585518[(unsigned __int8)((v361 ^ (unsigned int)v506) >> 16)];
    v313 = v361 ^ v312;
    v306 = v354 ^ v305;
    v298 = v347 ^ v297;
    v290 = v341 ^ v289;
    v92 = v313
        ^ dword_585918[HIBYTE(v93)]
        ^ dword_584D18[(unsigned __int8)v96]
        ^ dword_585118[BYTE1(v95)]
        ^ dword_585518[BYTE2(v94)];
    v91 = v306
        ^ dword_585918[HIBYTE(v96)]
        ^ dword_584D18[(unsigned __int8)v95]
        ^ dword_585118[BYTE1(v94)]
        ^ dword_585518[BYTE2(v93)];
    v90 = v298
        ^ dword_585918[HIBYTE(v95)]
        ^ dword_584D18[(unsigned __int8)v94]
        ^ dword_585118[BYTE1(v93)]
        ^ dword_585518[BYTE2(v96)];
    v89 = v290
        ^ dword_585918[HIBYTE(v94)]
        ^ dword_584D18[(unsigned __int8)v93]
        ^ dword_585118[BYTE1(v96)]
        ^ dword_585518[BYTE2(v95)];
    v285 = v334 ^ v284;
    v280 = v326 ^ v279;
    v274 = v319 ^ v273;
    v268 = v313 ^ v267;
    v88 = v285
        ^ dword_585918[HIBYTE(v89)]
        ^ dword_584D18[(unsigned __int8)v92]
        ^ dword_585118[BYTE1(v91)]
        ^ dword_585518[BYTE2(v90)];
    v87 = v280
        ^ dword_585918[HIBYTE(v92)]
        ^ dword_584D18[(unsigned __int8)v91]
        ^ dword_585118[BYTE1(v90)]
        ^ dword_585518[BYTE2(v89)];
    v86 = v274
        ^ dword_585918[HIBYTE(v91)]
        ^ dword_584D18[(unsigned __int8)v90]
        ^ dword_585118[BYTE1(v89)]
        ^ dword_585518[BYTE2(v92)];
    v85 = v268
        ^ dword_585918[HIBYTE(v90)]
        ^ dword_584D18[(unsigned __int8)v89]
        ^ dword_585118[BYTE1(v92)]
        ^ dword_585518[BYTE2(v91)];
    v522 = dword_585918[HIBYTE(v85)]
         ^ dword_584D18[(unsigned __int8)v88]
         ^ dword_585118[BYTE1(v87)]
         ^ dword_585518[BYTE2(v86)]
         ^ v521;
    v519 = dword_585918[HIBYTE(v88)]
         ^ dword_584D18[(unsigned __int8)v87]
         ^ dword_585118[BYTE1(v86)]
         ^ dword_585518[BYTE2(v85)]
         ^ v518;
    v516 = dword_585918[HIBYTE(v87)]
         ^ dword_584D18[(unsigned __int8)v86]
         ^ dword_585118[BYTE1(v85)]
         ^ dword_585518[BYTE2(v88)]
         ^ v515;
    v513 = dword_585918[HIBYTE(v86)]
         ^ dword_584D18[(unsigned __int8)v85]
         ^ dword_585118[BYTE1(v88)]
         ^ dword_585518[BYTE2(v87)]
         ^ v512;
    v84 = v467;
    v83 = v460;
    v82 = v453;
    v468 = dword_585918[HIBYTE(v473)]
         ^ dword_584D18[(unsigned __int8)v467]
         ^ dword_585118[BYTE1(v460)]
         ^ dword_585518[BYTE2(v453)];
    v461 = dword_585918[HIBYTE(v84)]
         ^ dword_584D18[(unsigned __int8)v460]
         ^ dword_585118[BYTE1(v453)]
         ^ dword_585518[BYTE2(v473)];
    v454 = dword_585918[HIBYTE(v83)]
         ^ dword_584D18[(unsigned __int8)v453]
         ^ dword_585118[BYTE1(v473)]
         ^ dword_585518[BYTE2(v84)];
    v81 = dword_585918[HIBYTE(v82)]
        ^ dword_584D18[(unsigned __int8)v473]
        ^ dword_585118[BYTE1(v84)]
        ^ dword_585518[BYTE2(v83)];
    v474 = v285 ^ v468;
    v469 = v280 ^ v461;
    v462 = v274 ^ v454;
    v455 = v268 ^ v81;
    v80 = v440;
    v79 = v432;
    v78 = v425;
    v441 = dword_585918[HIBYTE(v447)]
         ^ dword_584D18[(unsigned __int8)v440]
         ^ dword_585118[BYTE1(v432)]
         ^ dword_585518[BYTE2(v425)];
    v433 = dword_585918[HIBYTE(v80)]
         ^ dword_584D18[(unsigned __int8)v432]
         ^ dword_585118[BYTE1(v425)]
         ^ dword_585518[BYTE2(v447)];
    v426 = dword_585918[HIBYTE(v79)]
         ^ dword_584D18[(unsigned __int8)v425]
         ^ dword_585118[BYTE1(v447)]
         ^ dword_585518[BYTE2(v80)];
    v77 = dword_585918[HIBYTE(v78)]
        ^ dword_584D18[(unsigned __int8)v447]
        ^ dword_585118[BYTE1(v80)]
        ^ dword_585518[BYTE2(v79)];
    v448 = v474 ^ v441;
    v442 = v469 ^ v433;
    v434 = v462 ^ v426;
    v427 = v268 ^ v81 ^ v77;
    v76 = v448
        ^ dword_585918[(v268 ^ v81 ^ (unsigned int)v489) >> 24]
        ^ dword_584D18[(unsigned __int8)(v474 ^ v498)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v469 ^ v495) >> 8)]
        ^ dword_585518[(unsigned __int8)((v462 ^ (unsigned int)v492) >> 16)];
    v75 = v442
        ^ dword_585918[(v474 ^ (unsigned int)v498) >> 24]
        ^ dword_584D18[(unsigned __int8)(v469 ^ v495)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v462 ^ v492) >> 8)]
        ^ dword_585518[(unsigned __int8)((v268 ^ v81 ^ (unsigned int)v489) >> 16)];
    v74 = v434
        ^ dword_585918[(v469 ^ (unsigned int)v495) >> 24]
        ^ dword_584D18[(unsigned __int8)(v462 ^ v492)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v268 ^ v81 ^ v489) >> 8)]
        ^ dword_585518[(unsigned __int8)((v474 ^ (unsigned int)v498) >> 16)];
    v73 = v427
        ^ dword_585918[(v462 ^ (unsigned int)v492) >> 24]
        ^ dword_584D18[(unsigned __int8)(v268 ^ v81 ^ v489)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v474 ^ v498) >> 8)]
        ^ dword_585518[(unsigned __int8)((v469 ^ (unsigned int)v495) >> 16)];
    v72 = v414;
    v71 = v407;
    v70 = v400;
    v415 = dword_585918[HIBYTE(v420)]
         ^ dword_584D18[(unsigned __int8)v414]
         ^ dword_585118[BYTE1(v407)]
         ^ dword_585518[BYTE2(v400)];
    v408 = dword_585918[HIBYTE(v72)]
         ^ dword_584D18[(unsigned __int8)v407]
         ^ dword_585118[BYTE1(v400)]
         ^ dword_585518[BYTE2(v420)];
    v401 = dword_585918[HIBYTE(v71)]
         ^ dword_584D18[(unsigned __int8)v400]
         ^ dword_585118[BYTE1(v420)]
         ^ dword_585518[BYTE2(v72)];
    v69 = dword_585918[HIBYTE(v70)]
        ^ dword_584D18[(unsigned __int8)v420]
        ^ dword_585118[BYTE1(v72)]
        ^ dword_585518[BYTE2(v71)];
    v421 = v448 ^ v415;
    v416 = v442 ^ v408;
    v409 = v434 ^ v401;
    v402 = v427 ^ v69;
    v68 = v421
        ^ dword_585918[HIBYTE(v73)]
        ^ dword_584D18[(unsigned __int8)v76]
        ^ dword_585118[BYTE1(v75)]
        ^ dword_585518[BYTE2(v74)];
    v67 = v416
        ^ dword_585918[HIBYTE(v76)]
        ^ dword_584D18[(unsigned __int8)v75]
        ^ dword_585118[BYTE1(v74)]
        ^ dword_585518[BYTE2(v73)];
    v66 = v409
        ^ dword_585918[HIBYTE(v75)]
        ^ dword_584D18[(unsigned __int8)v74]
        ^ dword_585118[BYTE1(v73)]
        ^ dword_585518[BYTE2(v76)];
    v65 = v427
        ^ v69
        ^ dword_585918[HIBYTE(v74)]
        ^ dword_584D18[(unsigned __int8)v73]
        ^ dword_585118[BYTE1(v76)]
        ^ dword_585518[BYTE2(v75)];
    v64 = v387;
    v63 = v379;
    v62 = v372;
    v388 = dword_585918[HIBYTE(v394)]
         ^ dword_584D18[(unsigned __int8)v387]
         ^ dword_585118[BYTE1(v379)]
         ^ dword_585518[BYTE2(v372)];
    v380 = dword_585918[HIBYTE(v64)]
         ^ dword_584D18[(unsigned __int8)v379]
         ^ dword_585118[BYTE1(v372)]
         ^ dword_585518[BYTE2(v394)];
    v373 = dword_585918[HIBYTE(v63)]
         ^ dword_584D18[(unsigned __int8)v372]
         ^ dword_585118[BYTE1(v394)]
         ^ dword_585518[BYTE2(v64)];
    v61 = dword_585918[HIBYTE(v62)]
        ^ dword_584D18[(unsigned __int8)v394]
        ^ dword_585118[BYTE1(v64)]
        ^ dword_585518[BYTE2(v63)];
    v395 = v421 ^ v388;
    v389 = v416 ^ v380;
    v381 = v409 ^ v373;
    v374 = v427 ^ v69 ^ v61;
    v60 = v395
        ^ dword_585918[HIBYTE(v65)]
        ^ dword_584D18[(unsigned __int8)v68]
        ^ dword_585118[BYTE1(v67)]
        ^ dword_585518[BYTE2(v66)];
    v59 = v389
        ^ dword_585918[HIBYTE(v68)]
        ^ dword_584D18[(unsigned __int8)v67]
        ^ dword_585118[BYTE1(v66)]
        ^ dword_585518[BYTE2(v65)];
    v58 = v381
        ^ dword_585918[HIBYTE(v67)]
        ^ dword_584D18[(unsigned __int8)v66]
        ^ dword_585118[BYTE1(v65)]
        ^ dword_585518[BYTE2(v68)];
    v57 = v374
        ^ dword_585918[HIBYTE(v66)]
        ^ dword_584D18[(unsigned __int8)v65]
        ^ dword_585118[BYTE1(v68)]
        ^ dword_585518[BYTE2(v67)];
    v508 = dword_585918[HIBYTE(v57)]
         ^ dword_584D18[(unsigned __int8)v60]
         ^ dword_585118[BYTE1(v59)]
         ^ dword_585518[BYTE2(v58)]
         ^ v509;
    v505 = dword_585918[HIBYTE(v60)]
         ^ dword_584D18[(unsigned __int8)v59]
         ^ dword_585118[BYTE1(v58)]
         ^ dword_585518[BYTE2(v57)]
         ^ v506;
    v502 = dword_585918[HIBYTE(v59)]
         ^ dword_584D18[(unsigned __int8)v58]
         ^ dword_585118[BYTE1(v57)]
         ^ dword_585518[BYTE2(v60)]
         ^ v503;
    v499 = dword_585918[HIBYTE(v58)]
         ^ dword_584D18[(unsigned __int8)v57]
         ^ dword_585118[BYTE1(v60)]
         ^ dword_585518[BYTE2(v59)]
         ^ v500;
    v56 = v361;
    v55 = v354;
    v54 = v347;
    v362 = dword_585918[HIBYTE(v367)]
         ^ dword_584D18[(unsigned __int8)v361]
         ^ dword_585118[BYTE1(v354)]
         ^ dword_585518[BYTE2(v347)];
    v355 = dword_585918[HIBYTE(v56)]
         ^ dword_584D18[(unsigned __int8)v354]
         ^ dword_585118[BYTE1(v347)]
         ^ dword_585518[BYTE2(v367)];
    v348 = dword_585918[HIBYTE(v55)]
         ^ dword_584D18[(unsigned __int8)v347]
         ^ dword_585118[BYTE1(v367)]
         ^ dword_585518[BYTE2(v56)];
    v53 = dword_585918[HIBYTE(v54)]
        ^ dword_584D18[(unsigned __int8)v367]
        ^ dword_585118[BYTE1(v56)]
        ^ dword_585518[BYTE2(v55)];
    v368 = v395 ^ v362;
    v363 = v389 ^ v355;
    v356 = v381 ^ v348;
    v349 = v374 ^ v53;
    v52 = v334;
    v51 = v326;
    v50 = v319;
    v335 = dword_585918[HIBYTE(v341)]
         ^ dword_584D18[(unsigned __int8)v334]
         ^ dword_585118[BYTE1(v326)]
         ^ dword_585518[BYTE2(v319)];
    v327 = dword_585918[HIBYTE(v52)]
         ^ dword_584D18[(unsigned __int8)v326]
         ^ dword_585118[BYTE1(v319)]
         ^ dword_585518[BYTE2(v341)];
    v320 = dword_585918[HIBYTE(v51)]
         ^ dword_584D18[(unsigned __int8)v319]
         ^ dword_585118[BYTE1(v341)]
         ^ dword_585518[BYTE2(v52)];
    v49 = dword_585918[HIBYTE(v50)]
        ^ dword_584D18[(unsigned __int8)v341]
        ^ dword_585118[BYTE1(v52)]
        ^ dword_585518[BYTE2(v51)];
    v342 = v368 ^ v335;
    v336 = v363 ^ v327;
    v328 = v356 ^ v320;
    v321 = v374 ^ v53 ^ v49;
    v48 = v342
        ^ dword_585918[(v374 ^ v53 ^ (unsigned int)v513) >> 24]
        ^ dword_584D18[(unsigned __int8)(v368 ^ v522)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v363 ^ v519) >> 8)]
        ^ dword_585518[(unsigned __int8)((v356 ^ (unsigned int)v516) >> 16)];
    v47 = v336
        ^ dword_585918[(v368 ^ (unsigned int)v522) >> 24]
        ^ dword_584D18[(unsigned __int8)(v363 ^ v519)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v356 ^ v516) >> 8)]
        ^ dword_585518[(unsigned __int8)((v374 ^ v53 ^ (unsigned int)v513) >> 16)];
    v46 = v328
        ^ dword_585918[(v363 ^ (unsigned int)v519) >> 24]
        ^ dword_584D18[(unsigned __int8)(v356 ^ v516)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v268 ^ v81 ^ v77 ^ v69 ^ v61 ^ v53 ^ v513) >> 8)]
        ^ dword_585518[(unsigned __int8)((v368 ^ (unsigned int)v522) >> 16)];
    v45 = v321
        ^ dword_585918[(v356 ^ (unsigned int)v516) >> 24]
        ^ dword_584D18[(unsigned __int8)(v268 ^ v81 ^ v77 ^ v69 ^ v61 ^ v53 ^ v513)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v368 ^ v522) >> 8)]
        ^ dword_585518[(unsigned __int8)((v363 ^ (unsigned int)v519) >> 16)];
    v44 = v306;
    v43 = v298;
    v42 = v290;
    v307 = dword_585918[HIBYTE(v313)]
         ^ dword_584D18[(unsigned __int8)v306]
         ^ dword_585118[BYTE1(v298)]
         ^ dword_585518[BYTE2(v290)];
    v299 = dword_585918[HIBYTE(v44)]
         ^ dword_584D18[(unsigned __int8)v298]
         ^ dword_585118[BYTE1(v290)]
         ^ dword_585518[BYTE2(v313)];
    v291 = dword_585918[HIBYTE(v43)]
         ^ dword_584D18[(unsigned __int8)v290]
         ^ dword_585118[BYTE1(v313)]
         ^ dword_585518[BYTE2(v44)];
    v41 = dword_585918[HIBYTE(v42)]
        ^ dword_584D18[(unsigned __int8)v313]
        ^ dword_585118[BYTE1(v44)]
        ^ dword_585518[BYTE2(v43)];
    v314 = v342 ^ v307;
    v308 = v336 ^ v299;
    v300 = v328 ^ v291;
    v292 = v321 ^ v41;
    v40 = v314
        ^ dword_585918[HIBYTE(v45)]
        ^ dword_584D18[(unsigned __int8)v48]
        ^ dword_585118[BYTE1(v47)]
        ^ dword_585518[BYTE2(v46)];
    v39 = v308
        ^ dword_585918[HIBYTE(v48)]
        ^ dword_584D18[(unsigned __int8)v47]
        ^ dword_585118[BYTE1(v46)]
        ^ dword_585518[BYTE2(v45)];
    v38 = v300
        ^ dword_585918[HIBYTE(v47)]
        ^ dword_584D18[(unsigned __int8)v46]
        ^ dword_585118[BYTE1(v45)]
        ^ dword_585518[BYTE2(v48)];
    v37 = v321
        ^ v41
        ^ dword_585918[HIBYTE(v46)]
        ^ dword_584D18[(unsigned __int8)v45]
        ^ dword_585118[BYTE1(v48)]
        ^ dword_585518[BYTE2(v47)];
    v36 = v280;
    v35 = v274;
    v34 = v268;
    v281 = dword_585918[HIBYTE(v285)]
         ^ dword_584D18[(unsigned __int8)v280]
         ^ dword_585118[BYTE1(v274)]
         ^ dword_585518[BYTE2(v268)];
    v275 = dword_585918[HIBYTE(v36)]
         ^ dword_584D18[(unsigned __int8)v274]
         ^ dword_585118[BYTE1(v268)]
         ^ dword_585518[BYTE2(v285)];
    v269 = dword_585918[HIBYTE(v35)]
         ^ dword_584D18[(unsigned __int8)v268]
         ^ dword_585118[BYTE1(v285)]
         ^ dword_585518[BYTE2(v36)];
    v33 = dword_585918[HIBYTE(v34)]
        ^ dword_584D18[(unsigned __int8)v285]
        ^ dword_585118[BYTE1(v36)]
        ^ dword_585518[BYTE2(v35)];
    v286 = v314 ^ v281;
    v282 = v308 ^ v275;
    v276 = v300 ^ v269;
    v270 = v321 ^ v41 ^ v33;
    v32 = v286
        ^ dword_585918[HIBYTE(v37)]
        ^ dword_584D18[(unsigned __int8)v40]
        ^ dword_585118[BYTE1(v39)]
        ^ dword_585518[BYTE2(v38)];
    v31 = v282
        ^ dword_585918[HIBYTE(v40)]
        ^ dword_584D18[(unsigned __int8)v39]
        ^ dword_585118[BYTE1(v38)]
        ^ dword_585518[BYTE2(v37)];
    v30 = v276
        ^ dword_585918[HIBYTE(v39)]
        ^ dword_584D18[(unsigned __int8)v38]
        ^ dword_585118[BYTE1(v37)]
        ^ dword_585518[BYTE2(v40)];
    v29 = v270
        ^ dword_585918[HIBYTE(v38)]
        ^ dword_584D18[(unsigned __int8)v37]
        ^ dword_585118[BYTE1(v40)]
        ^ dword_585518[BYTE2(v39)];
    v484 = dword_585918[HIBYTE(v29)]
         ^ dword_584D18[(unsigned __int8)v32]
         ^ dword_585118[BYTE1(v31)]
         ^ dword_585518[BYTE2(v30)]
         ^ v485;
    v481 = dword_585918[HIBYTE(v32)]
         ^ dword_584D18[(unsigned __int8)v31]
         ^ dword_585118[BYTE1(v30)]
         ^ dword_585518[BYTE2(v29)]
         ^ v482;
    v478 = dword_585918[HIBYTE(v31)]
         ^ dword_584D18[(unsigned __int8)v30]
         ^ dword_585118[BYTE1(v29)]
         ^ dword_585518[BYTE2(v32)]
         ^ v479;
    v475 = dword_585918[HIBYTE(v30)]
         ^ dword_584D18[(unsigned __int8)v29]
         ^ dword_585118[BYTE1(v32)]
         ^ dword_585518[BYTE2(v31)]
         ^ v476;
    v471 = v308 ^ v474;
    v464 = v300 ^ v469;
    v457 = v321 ^ v41 ^ v462;
    v450 = v286 ^ v455;
    v445 = v282 ^ v448;
    v437 = v276 ^ v442;
    v429 = v270 ^ v434;
    v422 = v471 ^ v427;
    v28 = v445
        ^ dword_585918[(v450 ^ (unsigned int)v499) >> 24]
        ^ dword_584D18[(unsigned __int8)(v471 ^ v508)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v464 ^ v505) >> 8)]
        ^ dword_585518[(unsigned __int8)((v457 ^ (unsigned int)v502) >> 16)];
    v27 = v437
        ^ dword_585918[(v471 ^ v508) >> 24]
        ^ dword_584D18[(unsigned __int8)(v464 ^ v505)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v457 ^ v502) >> 8)]
        ^ dword_585518[(unsigned __int8)((v450 ^ (unsigned int)v499) >> 16)];
    v26 = v429
        ^ dword_585918[(v464 ^ (unsigned int)v505) >> 24]
        ^ dword_584D18[(unsigned __int8)(v457 ^ v502)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v450 ^ v499) >> 8)]
        ^ dword_585518[(unsigned __int8)((v471 ^ v508) >> 16)];
    v25 = v422
        ^ dword_585918[(v457 ^ (unsigned int)v502) >> 24]
        ^ dword_584D18[(unsigned __int8)(v450 ^ v499)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v471 ^ v508) >> 8)]
        ^ dword_585518[(unsigned __int8)((v464 ^ (unsigned int)v505) >> 16)];
    v418 = v464 ^ v421;
    v411 = v457 ^ v416;
    v404 = v450 ^ v409;
    v397 = v445 ^ v402;
    v24 = v418
        ^ dword_585918[HIBYTE(v25)]
        ^ dword_584D18[(unsigned __int8)v28]
        ^ dword_585118[BYTE1(v27)]
        ^ dword_585518[BYTE2(v26)];
    v23 = v411
        ^ dword_585918[HIBYTE(v28)]
        ^ dword_584D18[(unsigned __int8)v27]
        ^ dword_585118[BYTE1(v26)]
        ^ dword_585518[BYTE2(v25)];
    v22 = v404
        ^ dword_585918[HIBYTE(v27)]
        ^ dword_584D18[(unsigned __int8)v26]
        ^ dword_585118[BYTE1(v25)]
        ^ dword_585518[BYTE2(v28)];
    v21 = v397
        ^ dword_585918[HIBYTE(v26)]
        ^ dword_584D18[(unsigned __int8)v25]
        ^ dword_585118[BYTE1(v28)]
        ^ dword_585518[BYTE2(v27)];
    v392 = v437 ^ v395;
    v384 = v429 ^ v389;
    v376 = v422 ^ v381;
    v369 = v418 ^ v374;
    v20 = v392
        ^ dword_585918[HIBYTE(v21)]
        ^ dword_584D18[(unsigned __int8)v24]
        ^ dword_585118[BYTE1(v23)]
        ^ dword_585518[BYTE2(v22)];
    v19 = v384
        ^ dword_585918[HIBYTE(v24)]
        ^ dword_584D18[(unsigned __int8)v23]
        ^ dword_585118[BYTE1(v22)]
        ^ dword_585518[BYTE2(v21)];
    v18 = v376
        ^ dword_585918[HIBYTE(v23)]
        ^ dword_584D18[(unsigned __int8)v22]
        ^ dword_585118[BYTE1(v21)]
        ^ dword_585518[BYTE2(v24)];
    v17 = v369
        ^ dword_585918[HIBYTE(v22)]
        ^ dword_584D18[(unsigned __int8)v21]
        ^ dword_585118[BYTE1(v24)]
        ^ dword_585518[BYTE2(v23)];
    v521 = dword_585918[HIBYTE(v17)]
         ^ dword_584D18[(unsigned __int8)v20]
         ^ dword_585118[BYTE1(v19)]
         ^ dword_585518[BYTE2(v18)]
         ^ v522;
    v518 = dword_585918[HIBYTE(v20)]
         ^ dword_584D18[(unsigned __int8)v19]
         ^ dword_585118[BYTE1(v18)]
         ^ dword_585518[BYTE2(v17)]
         ^ v519;
    v515 = dword_585918[HIBYTE(v19)]
         ^ dword_584D18[(unsigned __int8)v18]
         ^ dword_585118[BYTE1(v17)]
         ^ dword_585518[BYTE2(v20)]
         ^ v516;
    v512 = dword_585918[HIBYTE(v18)]
         ^ dword_584D18[(unsigned __int8)v17]
         ^ dword_585118[BYTE1(v20)]
         ^ dword_585518[BYTE2(v19)]
         ^ v513;
    v365 = v411 ^ v368;
    v358 = v404 ^ v363;
    v351 = v397 ^ v356;
    v344 = v392 ^ v349;
    v339 = v384 ^ v342;
    v331 = v376 ^ v336;
    v323 = v369 ^ v328;
    v316 = v365 ^ v321;
    v16 = v339
        ^ dword_585918[(v344 ^ (unsigned int)v475) >> 24]
        ^ dword_584D18[(unsigned __int8)(v365 ^ v484)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v358 ^ v481) >> 8)]
        ^ dword_585518[(unsigned __int8)((v351 ^ (unsigned int)v478) >> 16)];
    v15 = v331
        ^ dword_585918[(v365 ^ v484) >> 24]
        ^ dword_584D18[(unsigned __int8)(v358 ^ v481)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v351 ^ v478) >> 8)]
        ^ dword_585518[(unsigned __int8)((v344 ^ (unsigned int)v475) >> 16)];
    v14 = v323
        ^ dword_585918[(v358 ^ (unsigned int)v481) >> 24]
        ^ dword_584D18[(unsigned __int8)(v351 ^ v478)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v344 ^ v475) >> 8)]
        ^ dword_585518[(unsigned __int8)((v365 ^ v484) >> 16)];
    v13 = v316
        ^ dword_585918[(v351 ^ (unsigned int)v478) >> 24]
        ^ dword_584D18[(unsigned __int8)(v344 ^ v475)]
        ^ dword_585118[(unsigned __int8)((unsigned __int16)(v365 ^ v484) >> 8)]
        ^ dword_585518[(unsigned __int8)((v358 ^ (unsigned int)v481) >> 16)];
    v311 = v358 ^ v314;
    v303 = v351 ^ v308;
    v295 = v344 ^ v300;
    v287 = v339 ^ v292;
    v12 = v311
        ^ dword_585918[HIBYTE(v13)]
        ^ dword_584D18[(unsigned __int8)v16]
        ^ dword_585118[BYTE1(v15)]
        ^ dword_585518[BYTE2(v14)];
    v11 = v303
        ^ dword_585918[HIBYTE(v16)]
        ^ dword_584D18[(unsigned __int8)v15]
        ^ dword_585118[BYTE1(v14)]
        ^ dword_585518[BYTE2(v13)];
    v10 = v295
        ^ dword_585918[HIBYTE(v15)]
        ^ dword_584D18[(unsigned __int8)v14]
        ^ dword_585118[BYTE1(v13)]
        ^ dword_585518[BYTE2(v16)];
    v9 = v287
       ^ dword_585918[HIBYTE(v14)]
       ^ dword_584D18[(unsigned __int8)v13]
       ^ dword_585118[BYTE1(v16)]
       ^ dword_585518[BYTE2(v15)];
    v283 = v331 ^ v286;
    v277 = v323 ^ v282;
    v271 = v316 ^ v276;
    v265 = v311 ^ v270;
    v8 = v283
       ^ dword_585918[HIBYTE(v9)]
       ^ dword_584D18[(unsigned __int8)v12]
       ^ dword_585118[BYTE1(v11)]
       ^ dword_585518[BYTE2(v10)];
    v7 = v277
       ^ dword_585918[HIBYTE(v12)]
       ^ dword_584D18[(unsigned __int8)v11]
       ^ dword_585118[BYTE1(v10)]
       ^ dword_585518[BYTE2(v9)];
    v6 = v271
       ^ dword_585918[HIBYTE(v11)]
       ^ dword_584D18[(unsigned __int8)v10]
       ^ dword_585118[BYTE1(v9)]
       ^ dword_585518[BYTE2(v12)];
    v5 = v265
       ^ dword_585918[HIBYTE(v10)]
       ^ dword_584D18[(unsigned __int8)v9]
       ^ dword_585118[BYTE1(v12)]
       ^ dword_585518[BYTE2(v11)];
    v497 = dword_585918[HIBYTE(v5)]
         ^ dword_584D18[(unsigned __int8)v8]
         ^ dword_585118[BYTE1(v7)]
         ^ dword_585518[BYTE2(v6)]
         ^ v498;
    v494 = dword_585918[HIBYTE(v8)]
         ^ dword_584D18[(unsigned __int8)v7]
         ^ dword_585118[BYTE1(v6)]
         ^ dword_585518[BYTE2(v5)]
         ^ v495;
    v491 = dword_585918[HIBYTE(v7)]
         ^ dword_584D18[(unsigned __int8)v6]
         ^ dword_585118[BYTE1(v5)]
         ^ dword_585518[BYTE2(v8)]
         ^ v492;
    v488 = dword_585918[HIBYTE(v6)]
         ^ dword_584D18[(unsigned __int8)v5]
         ^ dword_585118[BYTE1(v8)]
         ^ dword_585518[BYTE2(v7)]
         ^ v489;
  }
  v208 = v464;
  v207 = v457;
  v206 = v450;
  v470 = dword_585918[HIBYTE(v471)]
       ^ dword_584D18[(unsigned __int8)v464]
       ^ dword_585118[BYTE1(v457)]
       ^ dword_585518[BYTE2(v450)];
  v463 = dword_585918[HIBYTE(v208)]
       ^ dword_584D18[(unsigned __int8)v457]
       ^ dword_585118[BYTE1(v450)]
       ^ dword_585518[BYTE2(v471)];
  v456 = dword_585918[HIBYTE(v207)]
       ^ dword_584D18[(unsigned __int8)v450]
       ^ dword_585118[BYTE1(v471)]
       ^ dword_585518[BYTE2(v208)];
  v205 = dword_585918[HIBYTE(v206)]
       ^ dword_584D18[(unsigned __int8)v471]
       ^ dword_585118[BYTE1(v208)]
       ^ dword_585518[BYTE2(v207)];
  v204 = v437;
  v203 = v429;
  v202 = v422;
  v443 = dword_585918[HIBYTE(v445)]
       ^ dword_584D18[(unsigned __int8)v437]
       ^ dword_585118[BYTE1(v429)]
       ^ dword_585518[BYTE2(v422)];
  v435 = dword_585918[HIBYTE(v204)]
       ^ dword_584D18[(unsigned __int8)v429]
       ^ dword_585118[BYTE1(v422)]
       ^ dword_585518[BYTE2(v445)];
  v428 = dword_585918[HIBYTE(v203)]
       ^ dword_584D18[(unsigned __int8)v422]
       ^ dword_585118[BYTE1(v445)]
       ^ dword_585518[BYTE2(v204)];
  v201 = dword_585918[HIBYTE(v202)]
       ^ dword_584D18[(unsigned __int8)v445]
       ^ dword_585118[BYTE1(v204)]
       ^ dword_585518[BYTE2(v203)];
  v449 = v283 ^ v470 ^ v443;
  v444 = v277 ^ v463 ^ v435;
  v436 = v271 ^ v456 ^ v428;
  v200 = v449
       ^ dword_585918[(v265 ^ v205 ^ v512) >> 24]
       ^ dword_584D18[(unsigned __int8)(v283 ^ v470 ^ v521)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v277 ^ v463 ^ v518) >> 8)]
       ^ dword_585518[(unsigned __int8)((v271 ^ v456 ^ v515) >> 16)];
  v199 = v444
       ^ dword_585918[(v283 ^ v470 ^ v521) >> 24]
       ^ dword_584D18[(unsigned __int8)(v277 ^ v463 ^ v518)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v271 ^ v456 ^ v515) >> 8)]
       ^ dword_585518[(unsigned __int8)((v265 ^ v205 ^ v512) >> 16)];
  v198 = v436
       ^ dword_585918[(v277 ^ v463 ^ v518) >> 24]
       ^ dword_584D18[(unsigned __int8)(v271 ^ v456 ^ v515)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v265 ^ v205 ^ v512) >> 8)]
       ^ dword_585518[(unsigned __int8)((v283 ^ v470 ^ v521) >> 16)];
  v197 = v265
       ^ v205
       ^ v201
       ^ dword_585918[(v271 ^ v456 ^ v515) >> 24]
       ^ dword_584D18[(unsigned __int8)(v265 ^ v205 ^ v512)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v283 ^ v470 ^ v521) >> 8)]
       ^ dword_585518[(unsigned __int8)((v277 ^ v463 ^ v518) >> 16)];
  v196 = v411;
  v195 = v404;
  v194 = v397;
  v417 = dword_585918[HIBYTE(v418)]
       ^ dword_584D18[(unsigned __int8)v411]
       ^ dword_585118[BYTE1(v404)]
       ^ dword_585518[BYTE2(v397)];
  v410 = dword_585918[HIBYTE(v196)]
       ^ dword_584D18[(unsigned __int8)v404]
       ^ dword_585118[BYTE1(v397)]
       ^ dword_585518[BYTE2(v418)];
  v403 = dword_585918[HIBYTE(v195)]
       ^ dword_584D18[(unsigned __int8)v397]
       ^ dword_585118[BYTE1(v418)]
       ^ dword_585518[BYTE2(v196)];
  v193 = dword_585918[HIBYTE(v194)]
       ^ dword_584D18[(unsigned __int8)v418]
       ^ dword_585118[BYTE1(v196)]
       ^ dword_585518[BYTE2(v195)];
  v192 = v449
       ^ v417
       ^ dword_585918[HIBYTE(v197)]
       ^ dword_584D18[(unsigned __int8)v200]
       ^ dword_585118[BYTE1(v199)]
       ^ dword_585518[BYTE2(v198)];
  v191 = v444
       ^ v410
       ^ dword_585918[HIBYTE(v200)]
       ^ dword_584D18[(unsigned __int8)v199]
       ^ dword_585118[BYTE1(v198)]
       ^ dword_585518[BYTE2(v197)];
  v190 = v436
       ^ v403
       ^ dword_585918[HIBYTE(v199)]
       ^ dword_584D18[(unsigned __int8)v198]
       ^ dword_585118[BYTE1(v197)]
       ^ dword_585518[BYTE2(v200)];
  v189 = v265
       ^ v205
       ^ v201
       ^ v193
       ^ dword_585918[HIBYTE(v198)]
       ^ dword_584D18[(unsigned __int8)v197]
       ^ dword_585118[BYTE1(v200)]
       ^ dword_585518[BYTE2(v199)];
  v188 = v384;
  v187 = v376;
  v186 = v369;
  v390 = dword_585918[HIBYTE(v392)]
       ^ dword_584D18[(unsigned __int8)v384]
       ^ dword_585118[BYTE1(v376)]
       ^ dword_585518[BYTE2(v369)];
  v382 = dword_585918[HIBYTE(v188)]
       ^ dword_584D18[(unsigned __int8)v376]
       ^ dword_585118[BYTE1(v369)]
       ^ dword_585518[BYTE2(v392)];
  v375 = dword_585918[HIBYTE(v187)]
       ^ dword_584D18[(unsigned __int8)v369]
       ^ dword_585118[BYTE1(v392)]
       ^ dword_585518[BYTE2(v188)];
  v185 = dword_585918[HIBYTE(v186)]
       ^ dword_584D18[(unsigned __int8)v392]
       ^ dword_585118[BYTE1(v188)]
       ^ dword_585518[BYTE2(v187)];
  v396 = v449 ^ v417 ^ v390;
  v391 = v444 ^ v410 ^ v382;
  v383 = v436 ^ v403 ^ v375;
  v184 = v396
       ^ dword_585918[HIBYTE(v189)]
       ^ dword_584D18[(unsigned __int8)v192]
       ^ dword_585118[BYTE1(v191)]
       ^ dword_585518[BYTE2(v190)];
  v183 = v391
       ^ dword_585918[HIBYTE(v192)]
       ^ dword_584D18[(unsigned __int8)v191]
       ^ dword_585118[BYTE1(v190)]
       ^ dword_585518[BYTE2(v189)];
  v182 = v383
       ^ dword_585918[HIBYTE(v191)]
       ^ dword_584D18[(unsigned __int8)v190]
       ^ dword_585118[BYTE1(v189)]
       ^ dword_585518[BYTE2(v192)];
  v181 = v265
       ^ v205
       ^ v201
       ^ v193
       ^ v185
       ^ dword_585918[HIBYTE(v190)]
       ^ dword_584D18[(unsigned __int8)v189]
       ^ dword_585118[BYTE1(v192)]
       ^ dword_585518[BYTE2(v191)];
  v486 = dword_585918[HIBYTE(v181)]
       ^ dword_584D18[(unsigned __int8)v184]
       ^ dword_585118[BYTE1(v183)]
       ^ dword_585518[BYTE2(v182)]
       ^ v484;
  v483 = dword_585918[HIBYTE(v184)]
       ^ dword_584D18[(unsigned __int8)v183]
       ^ dword_585118[BYTE1(v182)]
       ^ dword_585518[BYTE2(v181)]
       ^ v481;
  v480 = dword_585918[HIBYTE(v183)]
       ^ dword_584D18[(unsigned __int8)v182]
       ^ dword_585118[BYTE1(v181)]
       ^ dword_585518[BYTE2(v184)]
       ^ v478;
  v477 = dword_585918[HIBYTE(v182)]
       ^ dword_584D18[(unsigned __int8)v181]
       ^ dword_585118[BYTE1(v184)]
       ^ dword_585518[BYTE2(v183)]
       ^ v475;
  v180 = v358;
  v179 = v351;
  v178 = v344;
  v364 = dword_585918[HIBYTE(v365)]
       ^ dword_584D18[(unsigned __int8)v358]
       ^ dword_585118[BYTE1(v351)]
       ^ dword_585518[BYTE2(v344)];
  v357 = dword_585918[HIBYTE(v180)]
       ^ dword_584D18[(unsigned __int8)v351]
       ^ dword_585118[BYTE1(v344)]
       ^ dword_585518[BYTE2(v365)];
  v350 = dword_585918[HIBYTE(v179)]
       ^ dword_584D18[(unsigned __int8)v344]
       ^ dword_585118[BYTE1(v365)]
       ^ dword_585518[BYTE2(v180)];
  v177 = dword_585918[HIBYTE(v178)]
       ^ dword_584D18[(unsigned __int8)v365]
       ^ dword_585118[BYTE1(v180)]
       ^ dword_585518[BYTE2(v179)];
  v176 = v331;
  v175 = v323;
  v174 = v316;
  v337 = dword_585918[HIBYTE(v339)]
       ^ dword_584D18[(unsigned __int8)v331]
       ^ dword_585118[BYTE1(v323)]
       ^ dword_585518[BYTE2(v316)];
  v329 = dword_585918[HIBYTE(v176)]
       ^ dword_584D18[(unsigned __int8)v323]
       ^ dword_585118[BYTE1(v316)]
       ^ dword_585518[BYTE2(v339)];
  v322 = dword_585918[HIBYTE(v175)]
       ^ dword_584D18[(unsigned __int8)v316]
       ^ dword_585118[BYTE1(v339)]
       ^ dword_585518[BYTE2(v176)];
  v173 = dword_585918[HIBYTE(v174)]
       ^ dword_584D18[(unsigned __int8)v339]
       ^ dword_585118[BYTE1(v176)]
       ^ dword_585518[BYTE2(v175)];
  v343 = v396 ^ v364 ^ v337;
  v338 = v391 ^ v357 ^ v329;
  v330 = v383 ^ v350 ^ v322;
  v172 = v343
       ^ dword_585918[(v265 ^ v205 ^ v201 ^ v193 ^ v185 ^ v177 ^ v488) >> 24]
       ^ dword_584D18[(unsigned __int8)(v396 ^ v364 ^ v497)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v391 ^ v357 ^ v494) >> 8)]
       ^ dword_585518[(unsigned __int8)((v383 ^ v350 ^ (unsigned int)v491) >> 16)];
  v171 = v338
       ^ dword_585918[(v396 ^ v364 ^ (unsigned int)v497) >> 24]
       ^ dword_584D18[(unsigned __int8)(v391 ^ v357 ^ v494)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v383 ^ v350 ^ v491) >> 8)]
       ^ dword_585518[(unsigned __int8)((v265 ^ v205 ^ v201 ^ v193 ^ v185 ^ v177 ^ v488) >> 16)];
  v170 = v330
       ^ dword_585918[(v391 ^ v357 ^ (unsigned int)v494) >> 24]
       ^ dword_584D18[(unsigned __int8)(v383 ^ v350 ^ v491)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v265 ^ v205 ^ v201 ^ v193 ^ v185 ^ v177 ^ v488) >> 8)]
       ^ dword_585518[(unsigned __int8)((v396 ^ v364 ^ (unsigned int)v497) >> 16)];
  v169 = v265
       ^ v205
       ^ v201
       ^ v193
       ^ v185
       ^ v177
       ^ v173
       ^ dword_585918[(v383 ^ v350 ^ (unsigned int)v491) >> 24]
       ^ dword_584D18[(unsigned __int8)(v265 ^ v205 ^ v201 ^ v193 ^ v185 ^ v177 ^ v488)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v396 ^ v364 ^ v497) >> 8)]
       ^ dword_585518[(unsigned __int8)((v391 ^ v357 ^ (unsigned int)v494) >> 16)];
  v168 = v303;
  v167 = v295;
  v166 = v287;
  v309 = dword_585918[HIBYTE(v311)]
       ^ dword_584D18[(unsigned __int8)v303]
       ^ dword_585118[BYTE1(v295)]
       ^ dword_585518[BYTE2(v287)];
  v301 = dword_585918[HIBYTE(v168)]
       ^ dword_584D18[(unsigned __int8)v295]
       ^ dword_585118[BYTE1(v287)]
       ^ dword_585518[BYTE2(v311)];
  v293 = dword_585918[HIBYTE(v167)]
       ^ dword_584D18[(unsigned __int8)v287]
       ^ dword_585118[BYTE1(v311)]
       ^ dword_585518[BYTE2(v168)];
  v165 = dword_585918[HIBYTE(v166)]
       ^ dword_584D18[(unsigned __int8)v311]
       ^ dword_585118[BYTE1(v168)]
       ^ dword_585518[BYTE2(v167)];
  v315 = v343 ^ a1[50] ^ v309;
  v310 = v338 ^ a1[49] ^ v301;
  v302 = v330 ^ a1[52] ^ v293;
  v294 = v265 ^ v205 ^ v201 ^ v193 ^ v185 ^ v177 ^ v173 ^ ~a1[51] ^ v165;
  v164 = v315
       ^ dword_585918[HIBYTE(v169)]
       ^ dword_584D18[(unsigned __int8)v172]
       ^ dword_585118[BYTE1(v171)]
       ^ dword_585518[BYTE2(v170)];
  v163 = v310
       ^ dword_585918[HIBYTE(v172)]
       ^ dword_584D18[(unsigned __int8)v171]
       ^ dword_585118[BYTE1(v170)]
       ^ dword_585518[BYTE2(v169)];
  v162 = v302
       ^ dword_585918[HIBYTE(v171)]
       ^ dword_584D18[(unsigned __int8)v170]
       ^ dword_585118[BYTE1(v169)]
       ^ dword_585518[BYTE2(v172)];
  v161 = v294
       ^ dword_585918[HIBYTE(v170)]
       ^ dword_584D18[(unsigned __int8)v169]
       ^ dword_585118[BYTE1(v172)]
       ^ dword_585518[BYTE2(v171)];
  v160 = v315
       ^ dword_585918[HIBYTE(v283)]
       ^ dword_584D18[(unsigned __int8)v277]
       ^ dword_585118[BYTE1(v271)]
       ^ dword_585518[BYTE2(v265)]
       ^ dword_585918[HIBYTE(v161)]
       ^ dword_584D18[(unsigned __int8)v164]
       ^ dword_585118[BYTE1(v163)]
       ^ dword_585518[BYTE2(v162)];
  v159 = v310
       ^ dword_585918[HIBYTE(v277)]
       ^ dword_584D18[(unsigned __int8)v271]
       ^ dword_585118[BYTE1(v265)]
       ^ dword_585518[BYTE2(v283)]
       ^ dword_585918[HIBYTE(v164)]
       ^ dword_584D18[(unsigned __int8)v163]
       ^ dword_585118[BYTE1(v162)]
       ^ dword_585518[BYTE2(v161)];
  v158 = v302
       ^ dword_585918[HIBYTE(v271)]
       ^ dword_584D18[(unsigned __int8)v265]
       ^ dword_585118[BYTE1(v283)]
       ^ dword_585518[BYTE2(v277)]
       ^ dword_585918[HIBYTE(v163)]
       ^ dword_584D18[(unsigned __int8)v162]
       ^ dword_585118[BYTE1(v161)]
       ^ dword_585518[BYTE2(v164)];
  v157 = v294
       ^ dword_585918[HIBYTE(v265)]
       ^ dword_584D18[(unsigned __int8)v283]
       ^ dword_585118[BYTE1(v277)]
       ^ dword_585518[BYTE2(v271)]
       ^ dword_585918[HIBYTE(v162)]
       ^ dword_584D18[(unsigned __int8)v161]
       ^ dword_585118[BYTE1(v164)]
       ^ dword_585518[BYTE2(v163)];
  v510 = dword_585918[HIBYTE(v157)]
       ^ dword_584D18[(unsigned __int8)v160]
       ^ dword_585118[BYTE1(v159)]
       ^ dword_585518[BYTE2(v158)]
       ^ v508;
  v507 = dword_585918[HIBYTE(v160)]
       ^ dword_584D18[(unsigned __int8)v159]
       ^ dword_585118[BYTE1(v158)]
       ^ dword_585518[BYTE2(v157)]
       ^ v505;
  v504 = dword_585918[HIBYTE(v159)]
       ^ dword_584D18[(unsigned __int8)v158]
       ^ dword_585118[BYTE1(v157)]
       ^ dword_585518[BYTE2(v160)]
       ^ v502;
  v501 = dword_585918[HIBYTE(v158)]
       ^ dword_584D18[(unsigned __int8)v157]
       ^ dword_585118[BYTE1(v160)]
       ^ dword_585518[BYTE2(v159)]
       ^ v499;
  a1[33] ^= v497;
  a1[34] ^= v494;
  a1[35] ^= v491;
  a1[36] ^= v488;
  a1[37] ^= v486;
  a1[38] ^= v483;
  a1[39] ^= v480;
  a1[40] ^= v477;
  a1[41] ^= v521;
  a1[42] ^= v518;
  a1[43] ^= v515;
  a1[44] ^= v512;
  a1[45] ^= v510;
  a1[46] ^= v507;
  a1[47] ^= v504;
  a1[48] ^= v501;
  return result;
}
