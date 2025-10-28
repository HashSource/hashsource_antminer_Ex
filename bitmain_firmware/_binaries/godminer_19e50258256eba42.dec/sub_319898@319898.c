unsigned int __fastcall sub_319898(_DWORD *a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // [sp+8h] [bp-3F4h]
  unsigned int v6; // [sp+Ch] [bp-3F0h]
  unsigned int v7; // [sp+10h] [bp-3ECh]
  unsigned int v8; // [sp+14h] [bp-3E8h]
  unsigned int v9; // [sp+18h] [bp-3E4h]
  unsigned int v10; // [sp+1Ch] [bp-3E0h]
  unsigned int v11; // [sp+20h] [bp-3DCh]
  unsigned int v12; // [sp+24h] [bp-3D8h]
  unsigned int v13; // [sp+38h] [bp-3C4h]
  unsigned int v14; // [sp+4Ch] [bp-3B0h]
  unsigned int v15; // [sp+50h] [bp-3ACh]
  unsigned int v16; // [sp+54h] [bp-3A8h]
  int v17; // [sp+58h] [bp-3A4h]
  unsigned int v18; // [sp+60h] [bp-39Ch]
  unsigned int v19; // [sp+64h] [bp-398h]
  unsigned int v20; // [sp+68h] [bp-394h]
  int v21; // [sp+7Ch] [bp-380h]
  unsigned int v22; // [sp+84h] [bp-378h]
  unsigned int v23; // [sp+88h] [bp-374h]
  unsigned int v24; // [sp+8Ch] [bp-370h]
  unsigned int v25; // [sp+90h] [bp-36Ch]
  unsigned int v26; // [sp+94h] [bp-368h]
  unsigned int v27; // [sp+98h] [bp-364h]
  unsigned int v28; // [sp+9Ch] [bp-360h]
  int v29; // [sp+A0h] [bp-35Ch]
  unsigned int v30; // [sp+A8h] [bp-354h]
  unsigned int v31; // [sp+ACh] [bp-350h]
  unsigned int v32; // [sp+B0h] [bp-34Ch]
  unsigned int v33; // [sp+B4h] [bp-348h]
  unsigned int v34; // [sp+B8h] [bp-344h]
  unsigned int v35; // [sp+BCh] [bp-340h]
  unsigned int v36; // [sp+C0h] [bp-33Ch]
  int v37; // [sp+C4h] [bp-338h]
  unsigned int v38; // [sp+CCh] [bp-330h]
  unsigned int v39; // [sp+D0h] [bp-32Ch]
  unsigned int v40; // [sp+D4h] [bp-328h]
  unsigned int v41; // [sp+E8h] [bp-314h]
  unsigned int v42; // [sp+ECh] [bp-310h]
  unsigned int v43; // [sp+F0h] [bp-30Ch]
  unsigned int v44; // [sp+F4h] [bp-308h]
  unsigned int v45; // [sp+F8h] [bp-304h]
  unsigned int v46; // [sp+FCh] [bp-300h]
  unsigned int v47; // [sp+100h] [bp-2FCh]
  unsigned int v48; // [sp+104h] [bp-2F8h]
  unsigned int v49; // [sp+118h] [bp-2E4h]
  unsigned int v50; // [sp+11Ch] [bp-2E0h]
  unsigned int v51; // [sp+120h] [bp-2DCh]
  unsigned int v52; // [sp+124h] [bp-2D8h]
  int v53; // [sp+128h] [bp-2D4h]
  unsigned int v54; // [sp+130h] [bp-2CCh]
  unsigned int v55; // [sp+134h] [bp-2C8h]
  unsigned int v56; // [sp+138h] [bp-2C4h]
  unsigned int v57; // [sp+13Ch] [bp-2C0h]
  unsigned int v58; // [sp+140h] [bp-2BCh]
  unsigned int v59; // [sp+144h] [bp-2B8h]
  unsigned int v60; // [sp+148h] [bp-2B4h]
  int v61; // [sp+14Ch] [bp-2B0h]
  unsigned int v62; // [sp+154h] [bp-2A8h]
  unsigned int v63; // [sp+158h] [bp-2A4h]
  unsigned int v64; // [sp+15Ch] [bp-2A0h]
  int v65; // [sp+170h] [bp-28Ch]
  unsigned int v66; // [sp+178h] [bp-284h]
  unsigned int v67; // [sp+17Ch] [bp-280h]
  unsigned int v68; // [sp+180h] [bp-27Ch]
  unsigned int v69; // [sp+184h] [bp-278h]
  unsigned int v70; // [sp+188h] [bp-274h]
  unsigned int v71; // [sp+18Ch] [bp-270h]
  unsigned int v72; // [sp+190h] [bp-26Ch]
  int v73; // [sp+194h] [bp-268h]
  unsigned int v74; // [sp+19Ch] [bp-260h]
  unsigned int v75; // [sp+1A0h] [bp-25Ch]
  unsigned int v76; // [sp+1A4h] [bp-258h]
  unsigned int v77; // [sp+1A8h] [bp-254h]
  unsigned int v78; // [sp+1ACh] [bp-250h]
  unsigned int v79; // [sp+1B0h] [bp-24Ch]
  unsigned int v80; // [sp+1B4h] [bp-248h]
  unsigned int v81; // [sp+1C8h] [bp-234h]
  unsigned int v82; // [sp+1CCh] [bp-230h]
  unsigned int v83; // [sp+1D0h] [bp-22Ch]
  unsigned int v84; // [sp+1D4h] [bp-228h]
  unsigned int v85; // [sp+1D8h] [bp-224h]
  unsigned int v86; // [sp+1DCh] [bp-220h]
  unsigned int v87; // [sp+1E0h] [bp-21Ch]
  unsigned int v88; // [sp+1E4h] [bp-218h]
  int v89; // [sp+1F8h] [bp-204h]
  unsigned int v90; // [sp+204h] [bp-1F8h]
  unsigned int v91; // [sp+208h] [bp-1F4h]
  unsigned int v92; // [sp+20Ch] [bp-1F0h]
  unsigned int v93; // [sp+210h] [bp-1ECh]
  unsigned int v94; // [sp+214h] [bp-1E8h]
  unsigned int v95; // [sp+218h] [bp-1E4h]
  int v96; // [sp+21Ch] [bp-1E0h]
  unsigned int v97; // [sp+228h] [bp-1D4h]
  unsigned int v98; // [sp+22Ch] [bp-1D0h]
  unsigned int v99; // [sp+230h] [bp-1CCh]
  unsigned int v100; // [sp+234h] [bp-1C8h]
  unsigned int v101; // [sp+238h] [bp-1C4h]
  unsigned int v102; // [sp+23Ch] [bp-1C0h]
  int v103; // [sp+240h] [bp-1BCh]
  unsigned int v104; // [sp+24Ch] [bp-1B0h]
  unsigned int v105; // [sp+250h] [bp-1ACh]
  int v106; // [sp+264h] [bp-198h]
  unsigned int v107; // [sp+270h] [bp-18Ch]
  unsigned int v108; // [sp+274h] [bp-188h]
  unsigned int v109; // [sp+278h] [bp-184h]
  unsigned int v110; // [sp+27Ch] [bp-180h]
  unsigned int v111; // [sp+280h] [bp-17Ch]
  unsigned int v112; // [sp+284h] [bp-178h]
  unsigned int v113; // [sp+288h] [bp-174h]
  unsigned int v114; // [sp+28Ch] [bp-170h]
  unsigned int v115; // [sp+290h] [bp-16Ch]
  unsigned int v116; // [sp+294h] [bp-168h]
  unsigned int v117; // [sp+2A8h] [bp-154h]
  unsigned int v118; // [sp+2ACh] [bp-150h]
  unsigned int v119; // [sp+2B0h] [bp-14Ch]
  unsigned int v120; // [sp+2B4h] [bp-148h]
  unsigned int v121; // [sp+2B8h] [bp-144h]
  unsigned int v122; // [sp+2BCh] [bp-140h]
  unsigned int v123; // [sp+2C0h] [bp-13Ch]
  unsigned int v124; // [sp+2C4h] [bp-138h]
  int v125; // [sp+2C8h] [bp-134h]
  unsigned int v126; // [sp+2D4h] [bp-128h]
  unsigned int v127; // [sp+2D8h] [bp-124h]
  int v128; // [sp+2ECh] [bp-110h]
  unsigned int v129; // [sp+2F4h] [bp-108h]
  unsigned int v130; // [sp+2F8h] [bp-104h]
  unsigned int v131; // [sp+2FCh] [bp-100h]
  unsigned int v132; // [sp+300h] [bp-FCh]
  unsigned int v133; // [sp+304h] [bp-F8h]
  unsigned int v134; // [sp+308h] [bp-F4h]
  int v135; // [sp+310h] [bp-ECh]
  unsigned int v136; // [sp+318h] [bp-E4h]
  unsigned int v137; // [sp+31Ch] [bp-E0h]
  unsigned int v138; // [sp+320h] [bp-DCh]
  unsigned int v139; // [sp+324h] [bp-D8h]
  unsigned int v140; // [sp+328h] [bp-D4h]
  unsigned int v141; // [sp+330h] [bp-CCh]
  int v142; // [sp+334h] [bp-C8h]
  unsigned int v143; // [sp+33Ch] [bp-C0h]
  unsigned int v144; // [sp+340h] [bp-BCh]
  unsigned int v145; // [sp+344h] [bp-B8h]
  int v146; // [sp+358h] [bp-A4h]
  int v147; // [sp+358h] [bp-A4h]
  int v148; // [sp+358h] [bp-A4h]
  int v149; // [sp+358h] [bp-A4h]
  int v150; // [sp+358h] [bp-A4h]
  int v151; // [sp+358h] [bp-A4h]
  int v152; // [sp+358h] [bp-A4h]
  int v153; // [sp+358h] [bp-A4h]
  int v154; // [sp+358h] [bp-A4h]
  int v155; // [sp+35Ch] [bp-A0h]
  int v156; // [sp+35Ch] [bp-A0h]
  int v157; // [sp+35Ch] [bp-A0h]
  unsigned int v158; // [sp+35Ch] [bp-A0h]
  int v159; // [sp+35Ch] [bp-A0h]
  int v160; // [sp+35Ch] [bp-A0h]
  int v161; // [sp+35Ch] [bp-A0h]
  int v162; // [sp+35Ch] [bp-A0h]
  int v163; // [sp+35Ch] [bp-A0h]
  int v164; // [sp+35Ch] [bp-A0h]
  int v165; // [sp+35Ch] [bp-A0h]
  int v166; // [sp+35Ch] [bp-A0h]
  int v167; // [sp+360h] [bp-9Ch]
  int v168; // [sp+360h] [bp-9Ch]
  int v169; // [sp+360h] [bp-9Ch]
  int v170; // [sp+360h] [bp-9Ch]
  int v171; // [sp+360h] [bp-9Ch]
  int v172; // [sp+360h] [bp-9Ch]
  int v173; // [sp+360h] [bp-9Ch]
  int v174; // [sp+360h] [bp-9Ch]
  int v175; // [sp+360h] [bp-9Ch]
  int v176; // [sp+360h] [bp-9Ch]
  int v177; // [sp+360h] [bp-9Ch]
  int v178; // [sp+360h] [bp-9Ch]
  unsigned int v179; // [sp+364h] [bp-98h]
  int v180; // [sp+364h] [bp-98h]
  unsigned int v181; // [sp+364h] [bp-98h]
  int v182; // [sp+364h] [bp-98h]
  unsigned int v183; // [sp+364h] [bp-98h]
  int v184; // [sp+364h] [bp-98h]
  unsigned int v185; // [sp+364h] [bp-98h]
  int v186; // [sp+364h] [bp-98h]
  int v187; // [sp+364h] [bp-98h]
  int v188; // [sp+378h] [bp-84h]
  int v189; // [sp+378h] [bp-84h]
  int v190; // [sp+378h] [bp-84h]
  int v191; // [sp+378h] [bp-84h]
  int v192; // [sp+378h] [bp-84h]
  int v193; // [sp+378h] [bp-84h]
  int v194; // [sp+378h] [bp-84h]
  int v195; // [sp+378h] [bp-84h]
  int v196; // [sp+378h] [bp-84h]
  int v197; // [sp+378h] [bp-84h]
  int v198; // [sp+378h] [bp-84h]
  int v199; // [sp+37Ch] [bp-80h]
  int v200; // [sp+37Ch] [bp-80h]
  int v201; // [sp+37Ch] [bp-80h]
  unsigned int v202; // [sp+37Ch] [bp-80h]
  int v203; // [sp+37Ch] [bp-80h]
  int v204; // [sp+37Ch] [bp-80h]
  int v205; // [sp+37Ch] [bp-80h]
  int v206; // [sp+37Ch] [bp-80h]
  int v207; // [sp+37Ch] [bp-80h]
  int v208; // [sp+37Ch] [bp-80h]
  int v209; // [sp+37Ch] [bp-80h]
  int v210; // [sp+37Ch] [bp-80h]
  int v211; // [sp+37Ch] [bp-80h]
  int v212; // [sp+380h] [bp-7Ch]
  int v213; // [sp+380h] [bp-7Ch]
  int v214; // [sp+380h] [bp-7Ch]
  int v215; // [sp+380h] [bp-7Ch]
  int v216; // [sp+380h] [bp-7Ch]
  int v217; // [sp+380h] [bp-7Ch]
  int v218; // [sp+380h] [bp-7Ch]
  int v219; // [sp+380h] [bp-7Ch]
  int v220; // [sp+380h] [bp-7Ch]
  int v221; // [sp+380h] [bp-7Ch]
  int v222; // [sp+380h] [bp-7Ch]
  int v223; // [sp+380h] [bp-7Ch]
  int v224; // [sp+380h] [bp-7Ch]
  unsigned int v225; // [sp+384h] [bp-78h]
  int v226; // [sp+384h] [bp-78h]
  unsigned int v227; // [sp+384h] [bp-78h]
  int v228; // [sp+384h] [bp-78h]
  unsigned int v229; // [sp+384h] [bp-78h]
  int v230; // [sp+384h] [bp-78h]
  unsigned int v231; // [sp+384h] [bp-78h]
  int v232; // [sp+384h] [bp-78h]
  int v233; // [sp+384h] [bp-78h]
  unsigned int v234; // [sp+38Ch] [bp-70h]
  unsigned int v235; // [sp+390h] [bp-6Ch]
  unsigned int v236; // [sp+394h] [bp-68h]
  int v237; // [sp+398h] [bp-64h]
  int v238; // [sp+398h] [bp-64h]
  int v239; // [sp+398h] [bp-64h]
  int v240; // [sp+398h] [bp-64h]
  int v241; // [sp+398h] [bp-64h]
  int v242; // [sp+398h] [bp-64h]
  int v243; // [sp+398h] [bp-64h]
  int v244; // [sp+398h] [bp-64h]
  int v245; // [sp+398h] [bp-64h]
  int v246; // [sp+398h] [bp-64h]
  int v247; // [sp+398h] [bp-64h]
  int v248; // [sp+39Ch] [bp-60h]
  int v249; // [sp+39Ch] [bp-60h]
  int v250; // [sp+39Ch] [bp-60h]
  unsigned int v251; // [sp+39Ch] [bp-60h]
  int v252; // [sp+39Ch] [bp-60h]
  int v253; // [sp+39Ch] [bp-60h]
  int v254; // [sp+39Ch] [bp-60h]
  int v255; // [sp+39Ch] [bp-60h]
  int v256; // [sp+39Ch] [bp-60h]
  int v257; // [sp+39Ch] [bp-60h]
  int v258; // [sp+39Ch] [bp-60h]
  int v259; // [sp+39Ch] [bp-60h]
  int v260; // [sp+39Ch] [bp-60h]
  int v261; // [sp+3A0h] [bp-5Ch]
  int v262; // [sp+3A0h] [bp-5Ch]
  int v263; // [sp+3A0h] [bp-5Ch]
  int v264; // [sp+3A0h] [bp-5Ch]
  int v265; // [sp+3A0h] [bp-5Ch]
  int v266; // [sp+3A0h] [bp-5Ch]
  int v267; // [sp+3A0h] [bp-5Ch]
  int v268; // [sp+3A0h] [bp-5Ch]
  int v269; // [sp+3A0h] [bp-5Ch]
  int v270; // [sp+3A0h] [bp-5Ch]
  int v271; // [sp+3A0h] [bp-5Ch]
  int v272; // [sp+3A0h] [bp-5Ch]
  int v273; // [sp+3A0h] [bp-5Ch]
  unsigned int v274; // [sp+3A4h] [bp-58h]
  int v275; // [sp+3A4h] [bp-58h]
  unsigned int v276; // [sp+3A4h] [bp-58h]
  int v277; // [sp+3A4h] [bp-58h]
  unsigned int v278; // [sp+3A4h] [bp-58h]
  int v279; // [sp+3A4h] [bp-58h]
  unsigned int v280; // [sp+3A4h] [bp-58h]
  int v281; // [sp+3A4h] [bp-58h]
  int v282; // [sp+3A4h] [bp-58h]
  int v283; // [sp+3B8h] [bp-44h]
  int v284; // [sp+3B8h] [bp-44h]
  int v285; // [sp+3B8h] [bp-44h]
  int v286; // [sp+3BCh] [bp-40h]
  int v287; // [sp+3BCh] [bp-40h]
  int v288; // [sp+3BCh] [bp-40h]
  unsigned int v289; // [sp+3BCh] [bp-40h]
  int v290; // [sp+3BCh] [bp-40h]
  int v291; // [sp+3BCh] [bp-40h]
  int v292; // [sp+3BCh] [bp-40h]
  int v293; // [sp+3BCh] [bp-40h]
  int v294; // [sp+3BCh] [bp-40h]
  int v295; // [sp+3BCh] [bp-40h]
  int v296; // [sp+3BCh] [bp-40h]
  int v297; // [sp+3C0h] [bp-3Ch]
  int v298; // [sp+3C0h] [bp-3Ch]
  unsigned int v299; // [sp+3C0h] [bp-3Ch]
  int v300; // [sp+3C0h] [bp-3Ch]
  int v301; // [sp+3C0h] [bp-3Ch]
  int v302; // [sp+3C4h] [bp-38h]
  int v303; // [sp+3C4h] [bp-38h]
  int v304; // [sp+3C4h] [bp-38h]
  unsigned int v305; // [sp+3C4h] [bp-38h]
  int v306; // [sp+3C4h] [bp-38h]
  int v307; // [sp+3C4h] [bp-38h]
  int v308; // [sp+3C4h] [bp-38h]
  int v309; // [sp+3C4h] [bp-38h]
  int v310; // [sp+3C4h] [bp-38h]
  int v311; // [sp+3C4h] [bp-38h]
  int v312; // [sp+3C4h] [bp-38h]
  int v313; // [sp+3C4h] [bp-38h]
  int v314; // [sp+3C4h] [bp-38h]
  int v315; // [sp+3C8h] [bp-34h]
  int v316; // [sp+3C8h] [bp-34h]
  unsigned int v317; // [sp+3C8h] [bp-34h]
  int v318; // [sp+3C8h] [bp-34h]
  int v319; // [sp+3C8h] [bp-34h]
  int v320; // [sp+3C8h] [bp-34h]
  int v321; // [sp+3CCh] [bp-30h]
  int v322; // [sp+3CCh] [bp-30h]
  int v323; // [sp+3CCh] [bp-30h]
  int v324; // [sp+3CCh] [bp-30h]
  int v325; // [sp+3CCh] [bp-30h]
  int v326; // [sp+3CCh] [bp-30h]
  int v327; // [sp+3CCh] [bp-30h]
  int v328; // [sp+3CCh] [bp-30h]
  int v329; // [sp+3CCh] [bp-30h]
  int v330; // [sp+3CCh] [bp-30h]
  int v331; // [sp+3CCh] [bp-30h]
  int v332; // [sp+3CCh] [bp-30h]
  int v333; // [sp+3CCh] [bp-30h]
  int v334; // [sp+3D0h] [bp-2Ch]
  int v335; // [sp+3D0h] [bp-2Ch]
  unsigned int v336; // [sp+3D0h] [bp-2Ch]
  int v337; // [sp+3D0h] [bp-2Ch]
  int v338; // [sp+3D0h] [bp-2Ch]
  int v339; // [sp+3D0h] [bp-2Ch]
  int v340; // [sp+3D0h] [bp-2Ch]
  unsigned int v341; // [sp+3D4h] [bp-28h]
  int v342; // [sp+3D4h] [bp-28h]
  unsigned int v343; // [sp+3D4h] [bp-28h]
  int v344; // [sp+3D4h] [bp-28h]
  unsigned int v345; // [sp+3D4h] [bp-28h]
  int v346; // [sp+3D4h] [bp-28h]
  unsigned int v347; // [sp+3D4h] [bp-28h]
  int v348; // [sp+3D4h] [bp-28h]
  int v349; // [sp+3D4h] [bp-28h]
  unsigned int v350; // [sp+3D8h] [bp-24h]
  int v351; // [sp+3D8h] [bp-24h]
  int v352; // [sp+3D8h] [bp-24h]
  int v353; // [sp+3D8h] [bp-24h]
  int v354; // [sp+3D8h] [bp-24h]
  int v355; // [sp+3D8h] [bp-24h]
  int v356; // [sp+3D8h] [bp-24h]
  unsigned int v357; // [sp+3DCh] [bp-20h]
  int v358; // [sp+3DCh] [bp-20h]
  int v359; // [sp+3DCh] [bp-20h]
  int v360; // [sp+3DCh] [bp-20h]
  int v361; // [sp+3DCh] [bp-20h]
  int v362; // [sp+3DCh] [bp-20h]
  int v363; // [sp+3DCh] [bp-20h]
  unsigned int v364; // [sp+3E0h] [bp-1Ch]
  int v365; // [sp+3E0h] [bp-1Ch]
  int v366; // [sp+3E0h] [bp-1Ch]
  int v367; // [sp+3E0h] [bp-1Ch]
  int v368; // [sp+3E0h] [bp-1Ch]
  int v369; // [sp+3E0h] [bp-1Ch]
  int v370; // [sp+3E0h] [bp-1Ch]
  int v371; // [sp+3E4h] [bp-18h]
  int v372; // [sp+3E4h] [bp-18h]
  int v373; // [sp+3E4h] [bp-18h]
  int v374; // [sp+3E4h] [bp-18h]
  int v375; // [sp+3E4h] [bp-18h]
  int v376; // [sp+3E4h] [bp-18h]
  int v377; // [sp+3E4h] [bp-18h]
  int v378; // [sp+3E8h] [bp-14h]
  int v379; // [sp+3E8h] [bp-14h]
  int v380; // [sp+3E8h] [bp-14h]
  int v381; // [sp+3E8h] [bp-14h]
  int v382; // [sp+3E8h] [bp-14h]
  int v383; // [sp+3E8h] [bp-14h]
  int v384; // [sp+3E8h] [bp-14h]
  int v385; // [sp+3ECh] [bp-10h]
  int v386; // [sp+3ECh] [bp-10h]
  int v387; // [sp+3ECh] [bp-10h]
  int v388; // [sp+3ECh] [bp-10h]
  int v389; // [sp+3ECh] [bp-10h]
  int v390; // [sp+3ECh] [bp-10h]
  int v391; // [sp+3ECh] [bp-10h]
  int v392; // [sp+3F0h] [bp-Ch]
  int v393; // [sp+3F0h] [bp-Ch]
  int v394; // [sp+3F0h] [bp-Ch]
  int v395; // [sp+3F0h] [bp-Ch]
  int v396; // [sp+3F0h] [bp-Ch]
  int v397; // [sp+3F0h] [bp-Ch]
  int v398; // [sp+3F0h] [bp-Ch]
  int v399; // [sp+3F4h] [bp-8h]
  int v400; // [sp+3F4h] [bp-8h]
  int v401; // [sp+3F4h] [bp-8h]
  int v402; // [sp+3F4h] [bp-8h]
  int v403; // [sp+3F4h] [bp-8h]
  int v404; // [sp+3F4h] [bp-8h]
  int v405; // [sp+3F4h] [bp-8h]

  v399 = a1[17];
  v392 = a1[18];
  v385 = a1[19];
  v378 = a1[20];
  v371 = a1[21];
  v364 = a1[22];
  v357 = a1[23];
  v350 = a1[24];
  v341 = sub_319870(a2);
  v321 = sub_319870(a2 + 4);
  v302 = sub_319870(a2 + 8);
  v286 = sub_319870(a2 + 12);
  v334 = dword_585918[(v286 ^ v350) >> 24]
       ^ dword_584D18[(unsigned __int8)(v341 ^ v371)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v321 ^ v364) >> 8)]
       ^ dword_585518[(unsigned __int8)((v302 ^ v357) >> 16)];
  v315 = dword_585918[(v341 ^ v371) >> 24]
       ^ dword_584D18[(unsigned __int8)(v321 ^ v364)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v302 ^ v357) >> 8)]
       ^ dword_585518[(unsigned __int8)((v286 ^ v350) >> 16)];
  v297 = dword_585918[(v321 ^ v364) >> 24]
       ^ dword_584D18[(unsigned __int8)(v302 ^ v357)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v286 ^ v350) >> 8)]
       ^ dword_585518[(unsigned __int8)((v341 ^ v371) >> 16)];
  v283 = dword_585918[(v302 ^ v357) >> 24]
       ^ dword_584D18[(unsigned __int8)(v286 ^ v350)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v341 ^ v371) >> 8)]
       ^ dword_585518[(unsigned __int8)((v321 ^ v364) >> 16)];
  v274 = sub_319870(a2 + 16);
  v261 = sub_319870(a2 + 20);
  v248 = sub_319870(a2 + 24);
  v237 = sub_319870(a2 + 28);
  v236 = v274 ^ v334;
  v235 = v261 ^ v315;
  v234 = v248 ^ v297;
  v335 = dword_585918[(v237 ^ (unsigned int)v283) >> 24]
       ^ dword_584D18[(unsigned __int8)(v274 ^ v334)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v261 ^ v315) >> 8)]
       ^ dword_585518[(unsigned __int8)((v248 ^ (unsigned int)v297) >> 16)];
  v316 = dword_585918[HIBYTE(v236)]
       ^ dword_584D18[(unsigned __int8)(v261 ^ v315)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v248 ^ v297) >> 8)]
       ^ dword_585518[(unsigned __int8)((v237 ^ (unsigned int)v283) >> 16)];
  v298 = dword_585918[HIBYTE(v235)]
       ^ dword_584D18[(unsigned __int8)(v248 ^ v297)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v237 ^ v283) >> 8)]
       ^ dword_585518[BYTE2(v236)];
  v284 = dword_585918[HIBYTE(v234)]
       ^ dword_584D18[(unsigned __int8)(v237 ^ v283)]
       ^ dword_585118[BYTE1(v236)]
       ^ dword_585518[BYTE2(v235)];
  v225 = sub_319870(a2 + 32);
  v336 = v225 ^ v335;
  v212 = sub_319870(a2 + 36);
  v317 = v212 ^ v316;
  v199 = sub_319870(a2 + 40);
  v299 = v199 ^ v298;
  v188 = sub_319870(a2 + 44);
  v400 = dword_585918[(v188 ^ (unsigned int)v284) >> 24]
       ^ dword_584D18[(unsigned __int8)v336]
       ^ dword_585118[BYTE1(v317)]
       ^ dword_585518[BYTE2(v299)]
       ^ v399;
  v393 = dword_585918[HIBYTE(v336)]
       ^ dword_584D18[(unsigned __int8)v317]
       ^ dword_585118[BYTE1(v299)]
       ^ dword_585518[(unsigned __int8)((v188 ^ (unsigned int)v284) >> 16)]
       ^ v392;
  v386 = dword_585918[HIBYTE(v317)]
       ^ dword_584D18[(unsigned __int8)v299]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v188 ^ v284) >> 8)]
       ^ dword_585518[BYTE2(v336)]
       ^ v385;
  v379 = dword_585918[HIBYTE(v299)]
       ^ dword_584D18[(unsigned __int8)(v188 ^ v284)]
       ^ dword_585118[BYTE1(v336)]
       ^ dword_585518[BYTE2(v317)]
       ^ v378;
  v179 = sub_319870(a2 + 48);
  v167 = sub_319870(a2 + 52);
  v155 = sub_319870(a2 + 56);
  result = sub_319870(a2 + 60);
  v337 = dword_585918[(result ^ v379) >> 24]
       ^ dword_584D18[(unsigned __int8)(v179 ^ v400)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v167 ^ v393) >> 8)]
       ^ dword_585518[(unsigned __int8)((v155 ^ (unsigned int)v386) >> 16)];
  v318 = dword_585918[(v179 ^ v400) >> 24]
       ^ dword_584D18[(unsigned __int8)(v167 ^ v393)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v155 ^ v386) >> 8)]
       ^ dword_585518[(unsigned __int8)((result ^ v379) >> 16)];
  v145 = v321;
  v144 = v302;
  v143 = v286;
  v322 = dword_585918[HIBYTE(v341)]
       ^ dword_584D18[(unsigned __int8)v321]
       ^ dword_585118[BYTE1(v302)]
       ^ dword_585518[BYTE2(v286)];
  v303 = dword_585918[HIBYTE(v145)]
       ^ dword_584D18[(unsigned __int8)v302]
       ^ dword_585118[BYTE1(v286)]
       ^ dword_585518[BYTE2(v341)];
  v287 = dword_585918[HIBYTE(v144)]
       ^ dword_584D18[(unsigned __int8)v286]
       ^ dword_585118[BYTE1(v341)]
       ^ dword_585518[BYTE2(v145)];
  v142 = dword_585918[HIBYTE(v143)]
       ^ dword_584D18[(unsigned __int8)v341]
       ^ dword_585118[BYTE1(v145)]
       ^ dword_585518[BYTE2(v144)];
  v342 = v179 ^ a1[25] ^ v322;
  v323 = v167 ^ ~a1[26] ^ v303;
  v304 = v155 ^ v287;
  v141 = v342 ^ v337;
  v140 = v155
       ^ v287
       ^ dword_585918[(v167 ^ (unsigned int)v393) >> 24]
       ^ dword_584D18[(unsigned __int8)(v155 ^ v386)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(result ^ v379) >> 8)]
       ^ dword_585518[(unsigned __int8)((v179 ^ v400) >> 16)];
  v139 = result
       ^ v142
       ^ dword_585918[(v155 ^ (unsigned int)v386) >> 24]
       ^ dword_584D18[(unsigned __int8)(result ^ v379)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v179 ^ v400) >> 8)]
       ^ dword_585518[(unsigned __int8)((v167 ^ (unsigned int)v393) >> 16)];
  v338 = dword_585918[HIBYTE(v139)]
       ^ dword_584D18[(unsigned __int8)(v342 ^ v337)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v323 ^ v318) >> 8)]
       ^ dword_585518[BYTE2(v140)];
  v138 = v261;
  v137 = v248;
  v136 = v237;
  v262 = dword_585918[HIBYTE(v274)]
       ^ dword_584D18[(unsigned __int8)v261]
       ^ dword_585118[BYTE1(v248)]
       ^ dword_585518[BYTE2(v237)];
  v249 = dword_585918[HIBYTE(v138)]
       ^ dword_584D18[(unsigned __int8)v248]
       ^ dword_585118[BYTE1(v237)]
       ^ dword_585518[BYTE2(v274)];
  v238 = dword_585918[HIBYTE(v137)]
       ^ dword_584D18[(unsigned __int8)v237]
       ^ dword_585118[BYTE1(v274)]
       ^ dword_585518[BYTE2(v138)];
  v135 = dword_585918[HIBYTE(v136)]
       ^ dword_584D18[(unsigned __int8)v274]
       ^ dword_585118[BYTE1(v138)]
       ^ dword_585518[BYTE2(v137)];
  v275 = v342 ^ v262;
  v263 = v323 ^ v249;
  v250 = v155 ^ v287 ^ v238;
  v134 = v263
       ^ dword_585918[HIBYTE(v141)]
       ^ dword_584D18[(unsigned __int8)(v323 ^ v318)]
       ^ dword_585118[BYTE1(v140)]
       ^ dword_585518[BYTE2(v139)];
  v133 = v250
       ^ dword_585918[(v323 ^ (unsigned int)v318) >> 24]
       ^ dword_584D18[(unsigned __int8)v140]
       ^ dword_585118[BYTE1(v139)]
       ^ dword_585518[BYTE2(v141)];
  v132 = result
       ^ v142
       ^ v135
       ^ dword_585918[HIBYTE(v140)]
       ^ dword_584D18[(unsigned __int8)v139]
       ^ dword_585118[BYTE1(v141)]
       ^ dword_585518[(unsigned __int8)((v323 ^ (unsigned int)v318) >> 16)];
  v372 = dword_585918[HIBYTE(v132)]
       ^ dword_584D18[(unsigned __int8)(v275 ^ v338)]
       ^ dword_585118[BYTE1(v134)]
       ^ dword_585518[BYTE2(v133)]
       ^ v371;
  v365 = dword_585918[(v275 ^ (unsigned int)v338) >> 24]
       ^ dword_584D18[(unsigned __int8)v134]
       ^ dword_585118[BYTE1(v133)]
       ^ dword_585518[BYTE2(v132)]
       ^ v364;
  v358 = dword_585918[HIBYTE(v134)]
       ^ dword_584D18[(unsigned __int8)v133]
       ^ dword_585118[BYTE1(v132)]
       ^ dword_585518[(unsigned __int8)((v275 ^ (unsigned int)v338) >> 16)]
       ^ v357;
  v351 = dword_585918[HIBYTE(v133)]
       ^ dword_584D18[(unsigned __int8)v132]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v275 ^ v338) >> 8)]
       ^ dword_585518[BYTE2(v134)]
       ^ v350;
  v131 = v212;
  v130 = v199;
  v129 = v188;
  v213 = dword_585918[HIBYTE(v225)]
       ^ dword_584D18[(unsigned __int8)v212]
       ^ dword_585118[BYTE1(v199)]
       ^ dword_585518[BYTE2(v188)];
  v200 = dword_585918[HIBYTE(v131)]
       ^ dword_584D18[(unsigned __int8)v199]
       ^ dword_585118[BYTE1(v188)]
       ^ dword_585518[BYTE2(v225)];
  v189 = dword_585918[HIBYTE(v130)]
       ^ dword_584D18[(unsigned __int8)v188]
       ^ dword_585118[BYTE1(v225)]
       ^ dword_585518[BYTE2(v131)];
  v128 = dword_585918[HIBYTE(v129)]
       ^ dword_584D18[(unsigned __int8)v225]
       ^ dword_585118[BYTE1(v131)]
       ^ dword_585518[BYTE2(v130)];
  v226 = v275 ^ v213;
  v214 = v263 ^ v200;
  v201 = v250 ^ v189;
  v127 = v167;
  v126 = v155;
  v168 = dword_585918[HIBYTE(v179)]
       ^ dword_584D18[(unsigned __int8)v167]
       ^ dword_585118[BYTE1(v155)]
       ^ dword_585518[BYTE2(result)];
  v156 = dword_585918[HIBYTE(v127)]
       ^ dword_584D18[(unsigned __int8)v155]
       ^ dword_585118[BYTE1(result)]
       ^ dword_585518[BYTE2(v179)];
  v146 = dword_585918[HIBYTE(v126)]
       ^ dword_584D18[(unsigned __int8)result]
       ^ dword_585118[BYTE1(v179)]
       ^ dword_585518[BYTE2(v127)];
  v125 = dword_585918[HIBYTE(result)]
       ^ dword_584D18[(unsigned __int8)v179]
       ^ dword_585118[BYTE1(v127)]
       ^ dword_585518[BYTE2(v126)];
  v180 = v226 ^ v168;
  v169 = v214 ^ v156;
  v157 = v250 ^ v189 ^ v146;
  v124 = v180
       ^ dword_585918[(result ^ v142 ^ v135 ^ v128 ^ v351) >> 24]
       ^ dword_584D18[(unsigned __int8)(v226 ^ v372)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v214 ^ v365) >> 8)]
       ^ dword_585518[(unsigned __int8)((v250 ^ v189 ^ (unsigned int)v358) >> 16)];
  v123 = v169
       ^ dword_585918[(v226 ^ (unsigned int)v372) >> 24]
       ^ dword_584D18[(unsigned __int8)(v214 ^ v365)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v250 ^ v189 ^ v358) >> 8)]
       ^ dword_585518[(unsigned __int8)((result ^ v142 ^ v135 ^ v128 ^ v351) >> 16)];
  v122 = v201
       ^ v146
       ^ dword_585918[(v214 ^ (unsigned int)v365) >> 24]
       ^ dword_584D18[(unsigned __int8)(v201 ^ v358)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(result ^ v142 ^ v135 ^ v128 ^ v351) >> 8)]
       ^ dword_585518[(unsigned __int8)((v226 ^ (unsigned int)v372) >> 16)];
  v121 = result
       ^ v142
       ^ v135
       ^ v128
       ^ v125
       ^ dword_585918[(v250 ^ v189 ^ (unsigned int)v358) >> 24]
       ^ dword_584D18[(unsigned __int8)(result ^ v142 ^ v135 ^ v128 ^ v351)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v226 ^ v372) >> 8)]
       ^ dword_585518[(unsigned __int8)((v214 ^ (unsigned int)v365) >> 16)];
  v343 = v169 ^ v342;
  v324 = v157 ^ v323;
  v305 = result ^ v142 ^ v135 ^ v128 ^ v125 ^ v304;
  v120 = v343
       ^ dword_585918[HIBYTE(v121)]
       ^ dword_584D18[(unsigned __int8)v124]
       ^ dword_585118[BYTE1(v123)]
       ^ dword_585518[BYTE2(v122)];
  v119 = v324
       ^ dword_585918[HIBYTE(v124)]
       ^ dword_584D18[(unsigned __int8)v123]
       ^ dword_585118[BYTE1(v122)]
       ^ dword_585518[BYTE2(v121)];
  v118 = v305
       ^ dword_585918[HIBYTE(v123)]
       ^ dword_584D18[(unsigned __int8)v122]
       ^ dword_585118[BYTE1(v121)]
       ^ dword_585518[BYTE2(v124)];
  v117 = v343
       ^ result
       ^ v142
       ^ dword_585918[HIBYTE(v122)]
       ^ dword_584D18[(unsigned __int8)v121]
       ^ dword_585118[BYTE1(v124)]
       ^ dword_585518[BYTE2(v123)];
  v401 = dword_585918[HIBYTE(v117)]
       ^ dword_584D18[(unsigned __int8)v120]
       ^ dword_585118[BYTE1(v119)]
       ^ dword_585518[BYTE2(v118)]
       ^ v400;
  v394 = dword_585918[HIBYTE(v120)]
       ^ dword_584D18[(unsigned __int8)v119]
       ^ dword_585118[BYTE1(v118)]
       ^ dword_585518[BYTE2(v117)]
       ^ v393;
  v387 = dword_585918[HIBYTE(v119)]
       ^ dword_584D18[(unsigned __int8)v118]
       ^ dword_585118[BYTE1(v117)]
       ^ dword_585518[BYTE2(v120)]
       ^ v386;
  v380 = dword_585918[HIBYTE(v118)]
       ^ dword_584D18[(unsigned __int8)v117]
       ^ dword_585118[BYTE1(v120)]
       ^ dword_585518[BYTE2(v119)]
       ^ v379;
  v276 = v324 ^ v275;
  v264 = v305 ^ v263;
  v251 = v343 ^ result ^ v142 ^ v250;
  v227 = v264 ^ v226;
  v215 = v251 ^ v214;
  v202 = v276 ^ result ^ v142 ^ v135 ^ v201;
  v116 = v227
       ^ dword_585918[(v276 ^ result ^ v142 ^ v135 ^ v380) >> 24]
       ^ dword_584D18[(unsigned __int8)(v276 ^ v401)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v264 ^ v394) >> 8)]
       ^ dword_585518[(unsigned __int8)((v251 ^ v387) >> 16)];
  v115 = v215
       ^ dword_585918[(v276 ^ v401) >> 24]
       ^ dword_584D18[(unsigned __int8)(v264 ^ v394)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v251 ^ v387) >> 8)]
       ^ dword_585518[(unsigned __int8)((v276 ^ result ^ v142 ^ v135 ^ v380) >> 16)];
  v114 = v202
       ^ dword_585918[(v264 ^ (unsigned int)v394) >> 24]
       ^ dword_584D18[(unsigned __int8)(v251 ^ v387)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v276 ^ result ^ v142 ^ v135 ^ v380) >> 8)]
       ^ dword_585518[(unsigned __int8)((v276 ^ v401) >> 16)];
  v113 = v227
       ^ result
       ^ v142
       ^ v135
       ^ v128
       ^ dword_585918[(v251 ^ v387) >> 24]
       ^ dword_584D18[(unsigned __int8)(v276 ^ result ^ v142 ^ v135 ^ v380)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v276 ^ v401) >> 8)]
       ^ dword_585518[(unsigned __int8)((v264 ^ (unsigned int)v394) >> 16)];
  v181 = v215 ^ v180;
  v170 = v202 ^ v169;
  v158 = v227 ^ result ^ v142 ^ v135 ^ v128 ^ v157;
  v112 = v181
       ^ dword_585918[HIBYTE(v113)]
       ^ dword_584D18[(unsigned __int8)v116]
       ^ dword_585118[BYTE1(v115)]
       ^ dword_585518[BYTE2(v114)];
  v111 = v170
       ^ dword_585918[HIBYTE(v116)]
       ^ dword_584D18[(unsigned __int8)v115]
       ^ dword_585118[BYTE1(v114)]
       ^ dword_585518[BYTE2(v113)];
  v110 = v158
       ^ dword_585918[HIBYTE(v115)]
       ^ dword_584D18[(unsigned __int8)v114]
       ^ dword_585118[BYTE1(v113)]
       ^ dword_585518[BYTE2(v116)];
  v109 = v181
       ^ result
       ^ v142
       ^ v135
       ^ v128
       ^ v125
       ^ dword_585918[HIBYTE(v114)]
       ^ dword_584D18[(unsigned __int8)v113]
       ^ dword_585118[BYTE1(v116)]
       ^ dword_585518[BYTE2(v115)];
  v373 = dword_585918[HIBYTE(v109)]
       ^ dword_584D18[(unsigned __int8)v112]
       ^ dword_585118[BYTE1(v111)]
       ^ dword_585518[BYTE2(v110)]
       ^ v372;
  v366 = dword_585918[HIBYTE(v112)]
       ^ dword_584D18[(unsigned __int8)v111]
       ^ dword_585118[BYTE1(v110)]
       ^ dword_585518[BYTE2(v109)]
       ^ v365;
  v359 = dword_585918[HIBYTE(v111)]
       ^ dword_584D18[(unsigned __int8)v110]
       ^ dword_585118[BYTE1(v109)]
       ^ dword_585518[BYTE2(v112)]
       ^ v358;
  v352 = dword_585918[HIBYTE(v110)]
       ^ dword_584D18[(unsigned __int8)v109]
       ^ dword_585118[BYTE1(v112)]
       ^ dword_585518[BYTE2(v111)]
       ^ v351;
  v108 = v324;
  v107 = v305;
  v325 = dword_585918[HIBYTE(v343)]
       ^ dword_584D18[(unsigned __int8)v324]
       ^ dword_585118[BYTE1(v305)]
       ^ dword_585518[(unsigned __int8)((v343 ^ result ^ v142) >> 16)];
  v306 = dword_585918[HIBYTE(v108)]
       ^ dword_584D18[(unsigned __int8)v305]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v343 ^ result ^ v142) >> 8)]
       ^ dword_585518[BYTE2(v343)];
  v288 = dword_585918[HIBYTE(v107)]
       ^ dword_584D18[(unsigned __int8)(v343 ^ result ^ v142)]
       ^ dword_585118[BYTE1(v343)]
       ^ dword_585518[BYTE2(v108)];
  v106 = dword_585918[(v343 ^ result ^ v142) >> 24]
       ^ dword_584D18[(unsigned __int8)v343]
       ^ dword_585118[BYTE1(v108)]
       ^ dword_585518[BYTE2(v107)];
  v344 = v181 ^ v325;
  v326 = v170 ^ v306;
  v307 = v158 ^ v288;
  v289 = v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125 ^ v106;
  v105 = v264;
  v104 = v251;
  v265 = dword_585918[HIBYTE(v276)]
       ^ dword_584D18[(unsigned __int8)v264]
       ^ dword_585118[BYTE1(v251)]
       ^ dword_585518[(unsigned __int8)((v276 ^ result ^ v142 ^ v135) >> 16)];
  v252 = dword_585918[HIBYTE(v105)]
       ^ dword_584D18[(unsigned __int8)v251]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v276 ^ result ^ v142 ^ v135) >> 8)]
       ^ dword_585518[BYTE2(v276)];
  v239 = dword_585918[HIBYTE(v104)]
       ^ dword_584D18[(unsigned __int8)(v276 ^ result ^ v142 ^ v135)]
       ^ dword_585118[BYTE1(v276)]
       ^ dword_585518[BYTE2(v105)];
  v103 = dword_585918[(v276 ^ result ^ v142 ^ v135) >> 24]
       ^ dword_584D18[(unsigned __int8)v276]
       ^ dword_585118[BYTE1(v105)]
       ^ dword_585518[BYTE2(v104)];
  v277 = v344 ^ v265;
  v266 = v326 ^ v252;
  v253 = v307 ^ v239;
  v240 = v289 ^ v103;
  v102 = v277
       ^ dword_585918[(v289 ^ v352) >> 24]
       ^ dword_584D18[(unsigned __int8)(v344 ^ v373)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v326 ^ v366) >> 8)]
       ^ dword_585518[(unsigned __int8)((v307 ^ (unsigned int)v359) >> 16)];
  v101 = v266
       ^ dword_585918[(v344 ^ (unsigned int)v373) >> 24]
       ^ dword_584D18[(unsigned __int8)(v326 ^ v366)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v307 ^ v359) >> 8)]
       ^ dword_585518[(unsigned __int8)((v289 ^ v352) >> 16)];
  v100 = v253
       ^ dword_585918[(v326 ^ (unsigned int)v366) >> 24]
       ^ dword_584D18[(unsigned __int8)(v307 ^ v359)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125 ^ v106 ^ v352) >> 8)]
       ^ dword_585518[(unsigned __int8)((v344 ^ (unsigned int)v373) >> 16)];
  v99 = v289
      ^ v103
      ^ dword_585918[(v307 ^ (unsigned int)v359) >> 24]
      ^ dword_584D18[(unsigned __int8)(v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125 ^ v106 ^ v352)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v344 ^ v373) >> 8)]
      ^ dword_585518[(unsigned __int8)((v326 ^ (unsigned int)v366) >> 16)];
  v98 = v215;
  v97 = v202;
  v216 = dword_585918[HIBYTE(v227)]
       ^ dword_584D18[(unsigned __int8)v215]
       ^ dword_585118[BYTE1(v202)]
       ^ dword_585518[(unsigned __int8)((v227 ^ result ^ v142 ^ v135 ^ v128) >> 16)];
  v203 = dword_585918[HIBYTE(v98)]
       ^ dword_584D18[(unsigned __int8)v202]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v227 ^ result ^ v142 ^ v135 ^ v128) >> 8)]
       ^ dword_585518[BYTE2(v227)];
  v190 = dword_585918[HIBYTE(v97)]
       ^ dword_584D18[(unsigned __int8)(v227 ^ result ^ v142 ^ v135 ^ v128)]
       ^ dword_585118[BYTE1(v227)]
       ^ dword_585518[BYTE2(v98)];
  v96 = dword_585918[(v227 ^ result ^ v142 ^ v135 ^ v128) >> 24]
      ^ dword_584D18[(unsigned __int8)v227]
      ^ dword_585118[BYTE1(v98)]
      ^ dword_585518[BYTE2(v97)];
  v228 = v277 ^ v216;
  v217 = v266 ^ a1[26] ^ v203;
  v204 = v253 ^ ~a1[25] ^ v190;
  v191 = v289 ^ v103 ^ v96;
  v95 = v228
      ^ dword_585918[HIBYTE(v99)]
      ^ dword_584D18[(unsigned __int8)v102]
      ^ dword_585118[BYTE1(v101)]
      ^ dword_585518[BYTE2(v100)];
  v94 = v217
      ^ dword_585918[HIBYTE(v102)]
      ^ dword_584D18[(unsigned __int8)v101]
      ^ dword_585118[BYTE1(v100)]
      ^ dword_585518[BYTE2(v99)];
  v93 = v204
      ^ dword_585918[HIBYTE(v101)]
      ^ dword_584D18[(unsigned __int8)v100]
      ^ dword_585118[BYTE1(v99)]
      ^ dword_585518[BYTE2(v102)];
  v92 = v191
      ^ dword_585918[HIBYTE(v100)]
      ^ dword_584D18[(unsigned __int8)v99]
      ^ dword_585118[BYTE1(v102)]
      ^ dword_585518[BYTE2(v101)];
  v402 = dword_585918[HIBYTE(v92)]
       ^ dword_584D18[(unsigned __int8)v95]
       ^ dword_585118[BYTE1(v94)]
       ^ dword_585518[BYTE2(v93)]
       ^ v401;
  v395 = dword_585918[HIBYTE(v95)]
       ^ dword_584D18[(unsigned __int8)v94]
       ^ dword_585118[BYTE1(v93)]
       ^ dword_585518[BYTE2(v92)]
       ^ v394;
  v388 = dword_585918[HIBYTE(v94)]
       ^ dword_584D18[(unsigned __int8)v93]
       ^ dword_585118[BYTE1(v92)]
       ^ dword_585518[BYTE2(v95)]
       ^ v387;
  v381 = dword_585918[HIBYTE(v93)]
       ^ dword_584D18[(unsigned __int8)v92]
       ^ dword_585118[BYTE1(v95)]
       ^ dword_585518[BYTE2(v94)]
       ^ v380;
  v91 = v170;
  v90 = v158;
  v171 = dword_585918[HIBYTE(v181)]
       ^ dword_584D18[(unsigned __int8)v170]
       ^ dword_585118[BYTE1(v158)]
       ^ dword_585518[(unsigned __int8)((v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125) >> 16)];
  v159 = dword_585918[HIBYTE(v91)]
       ^ dword_584D18[(unsigned __int8)v158]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125) >> 8)]
       ^ dword_585518[BYTE2(v181)];
  v147 = dword_585918[HIBYTE(v90)]
       ^ dword_584D18[(unsigned __int8)(v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125)]
       ^ dword_585118[BYTE1(v181)]
       ^ dword_585518[BYTE2(v91)];
  v89 = dword_585918[(v181 ^ result ^ v142 ^ v135 ^ v128 ^ v125) >> 24]
      ^ dword_584D18[(unsigned __int8)v181]
      ^ dword_585118[BYTE1(v91)]
      ^ dword_585518[BYTE2(v90)];
  v182 = v228 ^ v171;
  v172 = v217 ^ v159;
  v160 = v204 ^ v147;
  v148 = v191 ^ v89;
  v345 = v172 ^ v344;
  v327 = v160 ^ v326;
  v308 = v191 ^ v89 ^ v307;
  v290 = v345 ^ v289;
  v88 = v345
      ^ dword_585918[(v191 ^ v89 ^ (unsigned int)v381) >> 24]
      ^ dword_584D18[(unsigned __int8)(v182 ^ v402)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v172 ^ v395) >> 8)]
      ^ dword_585518[(unsigned __int8)((v160 ^ (unsigned int)v388) >> 16)];
  v87 = v327
      ^ dword_585918[(v182 ^ (unsigned int)v402) >> 24]
      ^ dword_584D18[(unsigned __int8)(v172 ^ v395)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v160 ^ v388) >> 8)]
      ^ dword_585518[(unsigned __int8)((v191 ^ v89 ^ (unsigned int)v381) >> 16)];
  v86 = v308
      ^ dword_585918[(v172 ^ (unsigned int)v395) >> 24]
      ^ dword_584D18[(unsigned __int8)(v160 ^ v388)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v191 ^ v89 ^ v381) >> 8)]
      ^ dword_585518[(unsigned __int8)((v182 ^ (unsigned int)v402) >> 16)];
  v85 = v290
      ^ dword_585918[(v160 ^ (unsigned int)v388) >> 24]
      ^ dword_584D18[(unsigned __int8)(v191 ^ v89 ^ v381)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v182 ^ v402) >> 8)]
      ^ dword_585518[(unsigned __int8)((v172 ^ (unsigned int)v395) >> 16)];
  v278 = v327 ^ v277;
  v267 = v308 ^ v266;
  v254 = v290 ^ v253;
  v241 = v278 ^ v240;
  v84 = v278
      ^ dword_585918[HIBYTE(v85)]
      ^ dword_584D18[(unsigned __int8)v88]
      ^ dword_585118[BYTE1(v87)]
      ^ dword_585518[BYTE2(v86)];
  v83 = v267
      ^ dword_585918[HIBYTE(v88)]
      ^ dword_584D18[(unsigned __int8)v87]
      ^ dword_585118[BYTE1(v86)]
      ^ dword_585518[BYTE2(v85)];
  v82 = v254
      ^ dword_585918[HIBYTE(v87)]
      ^ dword_584D18[(unsigned __int8)v86]
      ^ dword_585118[BYTE1(v85)]
      ^ dword_585518[BYTE2(v88)];
  v81 = v241
      ^ dword_585918[HIBYTE(v86)]
      ^ dword_584D18[(unsigned __int8)v85]
      ^ dword_585118[BYTE1(v88)]
      ^ dword_585518[BYTE2(v87)];
  v374 = dword_585918[HIBYTE(v81)]
       ^ dword_584D18[(unsigned __int8)v84]
       ^ dword_585118[BYTE1(v83)]
       ^ dword_585518[BYTE2(v82)]
       ^ v373;
  v367 = dword_585918[HIBYTE(v84)]
       ^ dword_584D18[(unsigned __int8)v83]
       ^ dword_585118[BYTE1(v82)]
       ^ dword_585518[BYTE2(v81)]
       ^ v366;
  v360 = dword_585918[HIBYTE(v83)]
       ^ dword_584D18[(unsigned __int8)v82]
       ^ dword_585118[BYTE1(v81)]
       ^ dword_585518[BYTE2(v84)]
       ^ v359;
  v353 = dword_585918[HIBYTE(v82)]
       ^ dword_584D18[(unsigned __int8)v81]
       ^ dword_585118[BYTE1(v84)]
       ^ dword_585518[BYTE2(v83)]
       ^ v352;
  v229 = v267 ^ v228;
  v218 = v254 ^ v217;
  v205 = v241 ^ v204;
  v192 = v229 ^ v191;
  v183 = v218 ^ v182;
  v173 = v205 ^ v172;
  v161 = v192 ^ v160;
  v149 = v183 ^ v148;
  v80 = v183
      ^ dword_585918[(v192 ^ (unsigned int)v353) >> 24]
      ^ dword_584D18[(unsigned __int8)(v229 ^ v374)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v218 ^ v367) >> 8)]
      ^ dword_585518[(unsigned __int8)((v205 ^ (unsigned int)v360) >> 16)];
  v79 = v173
      ^ dword_585918[(v229 ^ v374) >> 24]
      ^ dword_584D18[(unsigned __int8)(v218 ^ v367)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v205 ^ v360) >> 8)]
      ^ dword_585518[(unsigned __int8)((v192 ^ (unsigned int)v353) >> 16)];
  v78 = v161
      ^ dword_585918[(v218 ^ (unsigned int)v367) >> 24]
      ^ dword_584D18[(unsigned __int8)(v205 ^ v360)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v192 ^ v353) >> 8)]
      ^ dword_585518[(unsigned __int8)((v229 ^ v374) >> 16)];
  v77 = v149
      ^ dword_585918[(v205 ^ (unsigned int)v360) >> 24]
      ^ dword_584D18[(unsigned __int8)(v192 ^ v353)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v229 ^ v374) >> 8)]
      ^ dword_585518[(unsigned __int8)((v218 ^ (unsigned int)v367) >> 16)];
  v76 = v327;
  v75 = v308;
  v74 = v290;
  v328 = dword_585918[HIBYTE(v345)]
       ^ dword_584D18[(unsigned __int8)v327]
       ^ dword_585118[BYTE1(v308)]
       ^ dword_585518[BYTE2(v290)];
  v309 = dword_585918[HIBYTE(v76)]
       ^ dword_584D18[(unsigned __int8)v308]
       ^ dword_585118[BYTE1(v290)]
       ^ dword_585518[BYTE2(v345)];
  v291 = dword_585918[HIBYTE(v75)]
       ^ dword_584D18[(unsigned __int8)v290]
       ^ dword_585118[BYTE1(v345)]
       ^ dword_585518[BYTE2(v76)];
  v73 = dword_585918[HIBYTE(v74)]
      ^ dword_584D18[(unsigned __int8)v345]
      ^ dword_585118[BYTE1(v76)]
      ^ dword_585518[BYTE2(v75)];
  v346 = v183 ^ v328;
  v329 = v173 ^ v309;
  v310 = v161 ^ v291;
  v292 = v149 ^ v73;
  v72 = v346
      ^ dword_585918[HIBYTE(v77)]
      ^ dword_584D18[(unsigned __int8)v80]
      ^ dword_585118[BYTE1(v79)]
      ^ dword_585518[BYTE2(v78)];
  v71 = v329
      ^ dword_585918[HIBYTE(v80)]
      ^ dword_584D18[(unsigned __int8)v79]
      ^ dword_585118[BYTE1(v78)]
      ^ dword_585518[BYTE2(v77)];
  v70 = v310
      ^ dword_585918[HIBYTE(v79)]
      ^ dword_584D18[(unsigned __int8)v78]
      ^ dword_585118[BYTE1(v77)]
      ^ dword_585518[BYTE2(v80)];
  v69 = v149
      ^ v73
      ^ dword_585918[HIBYTE(v78)]
      ^ dword_584D18[(unsigned __int8)v77]
      ^ dword_585118[BYTE1(v80)]
      ^ dword_585518[BYTE2(v79)];
  v403 = dword_585918[HIBYTE(v69)]
       ^ dword_584D18[(unsigned __int8)v72]
       ^ dword_585118[BYTE1(v71)]
       ^ dword_585518[BYTE2(v70)]
       ^ v402;
  v396 = dword_585918[HIBYTE(v72)]
       ^ dword_584D18[(unsigned __int8)v71]
       ^ dword_585118[BYTE1(v70)]
       ^ dword_585518[BYTE2(v69)]
       ^ v395;
  v389 = dword_585918[HIBYTE(v71)]
       ^ dword_584D18[(unsigned __int8)v70]
       ^ dword_585118[BYTE1(v69)]
       ^ dword_585518[BYTE2(v72)]
       ^ v388;
  v382 = dword_585918[HIBYTE(v70)]
       ^ dword_584D18[(unsigned __int8)v69]
       ^ dword_585118[BYTE1(v72)]
       ^ dword_585518[BYTE2(v71)]
       ^ v381;
  v68 = v267;
  v67 = v254;
  v66 = v241;
  v268 = dword_585918[HIBYTE(v278)]
       ^ dword_584D18[(unsigned __int8)v267]
       ^ dword_585118[BYTE1(v254)]
       ^ dword_585518[BYTE2(v241)];
  v255 = dword_585918[HIBYTE(v68)]
       ^ dword_584D18[(unsigned __int8)v254]
       ^ dword_585118[BYTE1(v241)]
       ^ dword_585518[BYTE2(v278)];
  v242 = dword_585918[HIBYTE(v67)]
       ^ dword_584D18[(unsigned __int8)v241]
       ^ dword_585118[BYTE1(v278)]
       ^ dword_585518[BYTE2(v68)];
  v65 = dword_585918[HIBYTE(v66)]
      ^ dword_584D18[(unsigned __int8)v278]
      ^ dword_585118[BYTE1(v68)]
      ^ dword_585518[BYTE2(v67)];
  v279 = v346 ^ v268;
  v269 = v329 ^ v255;
  v256 = v310 ^ a1[26] ^ v242;
  v243 = v149 ^ v73 ^ ~a1[25] ^ v65;
  v64 = v218;
  v63 = v205;
  v62 = v192;
  v219 = dword_585918[HIBYTE(v229)]
       ^ dword_584D18[(unsigned __int8)v218]
       ^ dword_585118[BYTE1(v205)]
       ^ dword_585518[BYTE2(v192)];
  v206 = dword_585918[HIBYTE(v64)]
       ^ dword_584D18[(unsigned __int8)v205]
       ^ dword_585118[BYTE1(v192)]
       ^ dword_585518[BYTE2(v229)];
  v193 = dword_585918[HIBYTE(v63)]
       ^ dword_584D18[(unsigned __int8)v192]
       ^ dword_585118[BYTE1(v229)]
       ^ dword_585518[BYTE2(v64)];
  v61 = dword_585918[HIBYTE(v62)]
      ^ dword_584D18[(unsigned __int8)v229]
      ^ dword_585118[BYTE1(v64)]
      ^ dword_585518[BYTE2(v63)];
  v230 = v279 ^ v219;
  v220 = v269 ^ v206;
  v207 = v256 ^ v193;
  v194 = v243 ^ v61;
  v60 = v230
      ^ dword_585918[(v243 ^ (unsigned int)v382) >> 24]
      ^ dword_584D18[(unsigned __int8)(v279 ^ v403)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v269 ^ v396) >> 8)]
      ^ dword_585518[(unsigned __int8)((v256 ^ (unsigned int)v389) >> 16)];
  v59 = v220
      ^ dword_585918[(v279 ^ (unsigned int)v403) >> 24]
      ^ dword_584D18[(unsigned __int8)(v269 ^ v396)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v256 ^ v389) >> 8)]
      ^ dword_585518[(unsigned __int8)((v243 ^ (unsigned int)v382) >> 16)];
  v58 = v207
      ^ dword_585918[(v269 ^ (unsigned int)v396) >> 24]
      ^ dword_584D18[(unsigned __int8)(v256 ^ v389)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v243 ^ v382) >> 8)]
      ^ dword_585518[(unsigned __int8)((v279 ^ (unsigned int)v403) >> 16)];
  v57 = v243
      ^ v61
      ^ dword_585918[(v256 ^ (unsigned int)v389) >> 24]
      ^ dword_584D18[(unsigned __int8)(v243 ^ v382)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v279 ^ v403) >> 8)]
      ^ dword_585518[(unsigned __int8)((v269 ^ (unsigned int)v396) >> 16)];
  v56 = v173;
  v55 = v161;
  v54 = v149;
  v174 = dword_585918[HIBYTE(v183)]
       ^ dword_584D18[(unsigned __int8)v173]
       ^ dword_585118[BYTE1(v161)]
       ^ dword_585518[BYTE2(v149)];
  v162 = dword_585918[HIBYTE(v56)]
       ^ dword_584D18[(unsigned __int8)v161]
       ^ dword_585118[BYTE1(v149)]
       ^ dword_585518[BYTE2(v183)];
  v150 = dword_585918[HIBYTE(v55)]
       ^ dword_584D18[(unsigned __int8)v149]
       ^ dword_585118[BYTE1(v183)]
       ^ dword_585518[BYTE2(v56)];
  v53 = dword_585918[HIBYTE(v54)]
      ^ dword_584D18[(unsigned __int8)v183]
      ^ dword_585118[BYTE1(v56)]
      ^ dword_585518[BYTE2(v55)];
  v184 = v230 ^ v174;
  v175 = v220 ^ v162;
  v163 = v207 ^ v150;
  v151 = v243 ^ v61 ^ v53;
  v52 = v184
      ^ dword_585918[HIBYTE(v57)]
      ^ dword_584D18[(unsigned __int8)v60]
      ^ dword_585118[BYTE1(v59)]
      ^ dword_585518[BYTE2(v58)];
  v51 = v175
      ^ dword_585918[HIBYTE(v60)]
      ^ dword_584D18[(unsigned __int8)v59]
      ^ dword_585118[BYTE1(v58)]
      ^ dword_585518[BYTE2(v57)];
  v50 = v163
      ^ dword_585918[HIBYTE(v59)]
      ^ dword_584D18[(unsigned __int8)v58]
      ^ dword_585118[BYTE1(v57)]
      ^ dword_585518[BYTE2(v60)];
  v49 = v151
      ^ dword_585918[HIBYTE(v58)]
      ^ dword_584D18[(unsigned __int8)v57]
      ^ dword_585118[BYTE1(v60)]
      ^ dword_585518[BYTE2(v59)];
  v375 = dword_585918[HIBYTE(v49)]
       ^ dword_584D18[(unsigned __int8)v52]
       ^ dword_585118[BYTE1(v51)]
       ^ dword_585518[BYTE2(v50)]
       ^ v374;
  v368 = dword_585918[HIBYTE(v52)]
       ^ dword_584D18[(unsigned __int8)v51]
       ^ dword_585118[BYTE1(v50)]
       ^ dword_585518[BYTE2(v49)]
       ^ v367;
  v361 = dword_585918[HIBYTE(v51)]
       ^ dword_584D18[(unsigned __int8)v50]
       ^ dword_585118[BYTE1(v49)]
       ^ dword_585518[BYTE2(v52)]
       ^ v360;
  v354 = dword_585918[HIBYTE(v50)]
       ^ dword_584D18[(unsigned __int8)v49]
       ^ dword_585118[BYTE1(v52)]
       ^ dword_585518[BYTE2(v51)]
       ^ v353;
  v347 = v175 ^ v346;
  v330 = v163 ^ v329;
  v311 = v151 ^ v310;
  v293 = v347 ^ v292;
  v280 = v330 ^ v279;
  v270 = v311 ^ v269;
  v257 = v293 ^ v256;
  v244 = v280 ^ v243;
  v48 = v280
      ^ dword_585918[(v293 ^ (unsigned int)v354) >> 24]
      ^ dword_584D18[(unsigned __int8)(v347 ^ v375)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v330 ^ v368) >> 8)]
      ^ dword_585518[(unsigned __int8)((v311 ^ (unsigned int)v361) >> 16)];
  v47 = v270
      ^ dword_585918[(v347 ^ v375) >> 24]
      ^ dword_584D18[(unsigned __int8)(v330 ^ v368)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v311 ^ v361) >> 8)]
      ^ dword_585518[(unsigned __int8)((v293 ^ (unsigned int)v354) >> 16)];
  v46 = v257
      ^ dword_585918[(v330 ^ (unsigned int)v368) >> 24]
      ^ dword_584D18[(unsigned __int8)(v311 ^ v361)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v293 ^ v354) >> 8)]
      ^ dword_585518[(unsigned __int8)((v347 ^ v375) >> 16)];
  v45 = v244
      ^ dword_585918[(v311 ^ (unsigned int)v361) >> 24]
      ^ dword_584D18[(unsigned __int8)(v293 ^ v354)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v347 ^ v375) >> 8)]
      ^ dword_585518[(unsigned __int8)((v330 ^ (unsigned int)v368) >> 16)];
  v231 = v270 ^ v230;
  v221 = v257 ^ v220;
  v208 = v244 ^ v207;
  v195 = v231 ^ v194;
  v44 = v231
      ^ dword_585918[HIBYTE(v45)]
      ^ dword_584D18[(unsigned __int8)v48]
      ^ dword_585118[BYTE1(v47)]
      ^ dword_585518[BYTE2(v46)];
  v43 = v221
      ^ dword_585918[HIBYTE(v48)]
      ^ dword_584D18[(unsigned __int8)v47]
      ^ dword_585118[BYTE1(v46)]
      ^ dword_585518[BYTE2(v45)];
  v42 = v208
      ^ dword_585918[HIBYTE(v47)]
      ^ dword_584D18[(unsigned __int8)v46]
      ^ dword_585118[BYTE1(v45)]
      ^ dword_585518[BYTE2(v48)];
  v41 = v195
      ^ dword_585918[HIBYTE(v46)]
      ^ dword_584D18[(unsigned __int8)v45]
      ^ dword_585118[BYTE1(v48)]
      ^ dword_585518[BYTE2(v47)];
  v404 = dword_585918[HIBYTE(v41)]
       ^ dword_584D18[(unsigned __int8)v44]
       ^ dword_585118[BYTE1(v43)]
       ^ dword_585518[BYTE2(v42)]
       ^ v403;
  v397 = dword_585918[HIBYTE(v44)]
       ^ dword_584D18[(unsigned __int8)v43]
       ^ dword_585118[BYTE1(v42)]
       ^ dword_585518[BYTE2(v41)]
       ^ v396;
  v390 = dword_585918[HIBYTE(v43)]
       ^ dword_584D18[(unsigned __int8)v42]
       ^ dword_585118[BYTE1(v41)]
       ^ dword_585518[BYTE2(v44)]
       ^ v389;
  v383 = dword_585918[HIBYTE(v42)]
       ^ dword_584D18[(unsigned __int8)v41]
       ^ dword_585118[BYTE1(v44)]
       ^ dword_585518[BYTE2(v43)]
       ^ v382;
  v185 = v221 ^ v184;
  v176 = v208 ^ v175;
  v164 = v195 ^ v163;
  v152 = v185 ^ v151;
  v40 = v330;
  v39 = v311;
  v38 = v293;
  v331 = dword_585918[HIBYTE(v347)]
       ^ dword_584D18[(unsigned __int8)v330]
       ^ dword_585118[BYTE1(v311)]
       ^ dword_585518[BYTE2(v293)];
  v312 = dword_585918[HIBYTE(v40)]
       ^ dword_584D18[(unsigned __int8)v311]
       ^ dword_585118[BYTE1(v293)]
       ^ dword_585518[BYTE2(v347)];
  v294 = dword_585918[HIBYTE(v39)]
       ^ dword_584D18[(unsigned __int8)v293]
       ^ dword_585118[BYTE1(v347)]
       ^ dword_585518[BYTE2(v40)];
  v37 = dword_585918[HIBYTE(v38)]
      ^ dword_584D18[(unsigned __int8)v347]
      ^ dword_585118[BYTE1(v40)]
      ^ dword_585518[BYTE2(v39)];
  v348 = v185 ^ v331;
  v332 = v176 ^ v312;
  v313 = v164 ^ v294;
  v295 = v152 ^ v37;
  v36 = v348
      ^ dword_585918[(v152 ^ (unsigned int)v383) >> 24]
      ^ dword_584D18[(unsigned __int8)(v185 ^ v404)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v176 ^ v397) >> 8)]
      ^ dword_585518[(unsigned __int8)((v164 ^ (unsigned int)v390) >> 16)];
  v35 = v332
      ^ dword_585918[(v185 ^ v404) >> 24]
      ^ dword_584D18[(unsigned __int8)(v176 ^ v397)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v164 ^ v390) >> 8)]
      ^ dword_585518[(unsigned __int8)((v152 ^ (unsigned int)v383) >> 16)];
  v34 = v313
      ^ dword_585918[(v176 ^ (unsigned int)v397) >> 24]
      ^ dword_584D18[(unsigned __int8)(v164 ^ v390)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v152 ^ v383) >> 8)]
      ^ dword_585518[(unsigned __int8)((v185 ^ v404) >> 16)];
  v33 = v152
      ^ v37
      ^ dword_585918[(v164 ^ (unsigned int)v390) >> 24]
      ^ dword_584D18[(unsigned __int8)(v152 ^ v383)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v185 ^ v404) >> 8)]
      ^ dword_585518[(unsigned __int8)((v176 ^ (unsigned int)v397) >> 16)];
  v32 = v270;
  v31 = v257;
  v30 = v244;
  v271 = dword_585918[HIBYTE(v280)]
       ^ dword_584D18[(unsigned __int8)v270]
       ^ dword_585118[BYTE1(v257)]
       ^ dword_585518[BYTE2(v244)];
  v258 = dword_585918[HIBYTE(v32)]
       ^ dword_584D18[(unsigned __int8)v257]
       ^ dword_585118[BYTE1(v244)]
       ^ dword_585518[BYTE2(v280)];
  v245 = dword_585918[HIBYTE(v31)]
       ^ dword_584D18[(unsigned __int8)v244]
       ^ dword_585118[BYTE1(v280)]
       ^ dword_585518[BYTE2(v32)];
  v29 = dword_585918[HIBYTE(v30)]
      ^ dword_584D18[(unsigned __int8)v280]
      ^ dword_585118[BYTE1(v32)]
      ^ dword_585518[BYTE2(v31)];
  v281 = v348 ^ v271;
  v272 = v332 ^ v258;
  v259 = v313 ^ v245;
  v246 = v152 ^ v37 ^ v29;
  v28 = v281
      ^ dword_585918[HIBYTE(v33)]
      ^ dword_584D18[(unsigned __int8)v36]
      ^ dword_585118[BYTE1(v35)]
      ^ dword_585518[BYTE2(v34)];
  v27 = v272
      ^ dword_585918[HIBYTE(v36)]
      ^ dword_584D18[(unsigned __int8)v35]
      ^ dword_585118[BYTE1(v34)]
      ^ dword_585518[BYTE2(v33)];
  v26 = v259
      ^ dword_585918[HIBYTE(v35)]
      ^ dword_584D18[(unsigned __int8)v34]
      ^ dword_585118[BYTE1(v33)]
      ^ dword_585518[BYTE2(v36)];
  v25 = v246
      ^ dword_585918[HIBYTE(v34)]
      ^ dword_584D18[(unsigned __int8)v33]
      ^ dword_585118[BYTE1(v36)]
      ^ dword_585518[BYTE2(v35)];
  v376 = dword_585918[HIBYTE(v25)]
       ^ dword_584D18[(unsigned __int8)v28]
       ^ dword_585118[BYTE1(v27)]
       ^ dword_585518[BYTE2(v26)]
       ^ v375;
  v369 = dword_585918[HIBYTE(v28)]
       ^ dword_584D18[(unsigned __int8)v27]
       ^ dword_585118[BYTE1(v26)]
       ^ dword_585518[BYTE2(v25)]
       ^ v368;
  v362 = dword_585918[HIBYTE(v27)]
       ^ dword_584D18[(unsigned __int8)v26]
       ^ dword_585118[BYTE1(v25)]
       ^ dword_585518[BYTE2(v28)]
       ^ v361;
  v355 = dword_585918[HIBYTE(v26)]
       ^ dword_584D18[(unsigned __int8)v25]
       ^ dword_585118[BYTE1(v28)]
       ^ dword_585518[BYTE2(v27)]
       ^ v354;
  v24 = v221;
  v23 = v208;
  v22 = v195;
  v222 = dword_585918[HIBYTE(v231)]
       ^ dword_584D18[(unsigned __int8)v221]
       ^ dword_585118[BYTE1(v208)]
       ^ dword_585518[BYTE2(v195)];
  v209 = dword_585918[HIBYTE(v24)]
       ^ dword_584D18[(unsigned __int8)v208]
       ^ dword_585118[BYTE1(v195)]
       ^ dword_585518[BYTE2(v231)];
  v196 = dword_585918[HIBYTE(v23)]
       ^ dword_584D18[(unsigned __int8)v195]
       ^ dword_585118[BYTE1(v231)]
       ^ dword_585518[BYTE2(v24)];
  v21 = dword_585918[HIBYTE(v22)]
      ^ dword_584D18[(unsigned __int8)v231]
      ^ dword_585118[BYTE1(v24)]
      ^ dword_585518[BYTE2(v23)];
  v232 = v281 ^ v222;
  v223 = v272 ^ v209;
  v210 = v259 ^ v196;
  v197 = v246 ^ v21;
  v339 = dword_585918[(v246 ^ v21 ^ (unsigned int)v355) >> 24]
       ^ dword_584D18[(unsigned __int8)(v232 ^ v376)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v223 ^ v369) >> 8)]
       ^ dword_585518[(unsigned __int8)((v210 ^ (unsigned int)v362) >> 16)];
  v319 = dword_585918[(v232 ^ (unsigned int)v376) >> 24]
       ^ dword_584D18[(unsigned __int8)(v223 ^ v369)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v210 ^ v362) >> 8)]
       ^ dword_585518[(unsigned __int8)((v246 ^ v21 ^ (unsigned int)v355) >> 16)];
  v300 = dword_585918[(v223 ^ (unsigned int)v369) >> 24]
       ^ dword_584D18[(unsigned __int8)(v210 ^ v362)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v152 ^ v37 ^ v29 ^ v21 ^ v355) >> 8)]
       ^ dword_585518[(unsigned __int8)((v232 ^ (unsigned int)v376) >> 16)];
  v285 = dword_585918[(v210 ^ (unsigned int)v362) >> 24]
       ^ dword_584D18[(unsigned __int8)(v152 ^ v37 ^ v29 ^ v21 ^ v355)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v232 ^ v376) >> 8)]
       ^ dword_585518[(unsigned __int8)((v223 ^ (unsigned int)v369) >> 16)];
  v20 = v176;
  v19 = v164;
  v18 = v152;
  v177 = dword_585918[HIBYTE(v185)]
       ^ dword_584D18[(unsigned __int8)v176]
       ^ dword_585118[BYTE1(v164)]
       ^ dword_585518[BYTE2(v152)];
  v165 = dword_585918[HIBYTE(v20)]
       ^ dword_584D18[(unsigned __int8)v164]
       ^ dword_585118[BYTE1(v152)]
       ^ dword_585518[BYTE2(v185)];
  v153 = dword_585918[HIBYTE(v19)]
       ^ dword_584D18[(unsigned __int8)v152]
       ^ dword_585118[BYTE1(v185)]
       ^ dword_585518[BYTE2(v20)];
  v17 = dword_585918[HIBYTE(v18)]
      ^ dword_584D18[(unsigned __int8)v185]
      ^ dword_585118[BYTE1(v20)]
      ^ dword_585518[BYTE2(v19)];
  v186 = v232 ^ a1[25] ^ v177;
  v178 = v223 ^ v165;
  v166 = v210 ^ v153;
  v154 = v246 ^ v21 ^ ~a1[26] ^ v17;
  v16 = v186 ^ v339;
  v15 = v178 ^ v319;
  v14 = v166 ^ v300;
  v340 = dword_585918[(v154 ^ (unsigned int)v285) >> 24]
       ^ dword_584D18[(unsigned __int8)(v186 ^ v339)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v178 ^ v319) >> 8)]
       ^ dword_585518[(unsigned __int8)((v166 ^ (unsigned int)v300) >> 16)];
  v320 = dword_585918[HIBYTE(v16)]
       ^ dword_584D18[(unsigned __int8)(v178 ^ v319)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v166 ^ v300) >> 8)]
       ^ dword_585518[(unsigned __int8)((v154 ^ (unsigned int)v285) >> 16)];
  v301 = dword_585918[HIBYTE(v15)]
       ^ dword_584D18[(unsigned __int8)(v166 ^ v300)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v154 ^ v285) >> 8)]
       ^ dword_585518[BYTE2(v16)];
  v349 = v178 ^ v348;
  v333 = v166 ^ v332;
  v314 = v154 ^ v313;
  v296 = v349 ^ v295;
  v13 = v296
      ^ dword_585918[HIBYTE(v14)]
      ^ dword_584D18[(unsigned __int8)(v154 ^ v285)]
      ^ dword_585118[BYTE1(v16)]
      ^ dword_585518[BYTE2(v15)];
  v405 = dword_585918[HIBYTE(v13)]
       ^ dword_584D18[(unsigned __int8)(v349 ^ v340)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v333 ^ v320) >> 8)]
       ^ dword_585518[(unsigned __int8)((v314 ^ (unsigned int)v301) >> 16)]
       ^ v404;
  v398 = dword_585918[(v349 ^ (unsigned int)v340) >> 24]
       ^ dword_584D18[(unsigned __int8)(v333 ^ v320)]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v314 ^ v301) >> 8)]
       ^ dword_585518[BYTE2(v13)]
       ^ v397;
  v391 = dword_585918[(v333 ^ (unsigned int)v320) >> 24]
       ^ dword_584D18[(unsigned __int8)(v314 ^ v301)]
       ^ dword_585118[BYTE1(v13)]
       ^ dword_585518[(unsigned __int8)((v349 ^ (unsigned int)v340) >> 16)]
       ^ v390;
  v384 = dword_585918[(v314 ^ (unsigned int)v301) >> 24]
       ^ dword_584D18[(unsigned __int8)v13]
       ^ dword_585118[(unsigned __int8)((unsigned __int16)(v349 ^ v340) >> 8)]
       ^ dword_585518[(unsigned __int8)((v333 ^ (unsigned int)v320) >> 16)]
       ^ v383;
  v282 = v333 ^ v281;
  v273 = v314 ^ v272;
  v260 = v296 ^ v259;
  v247 = v282 ^ v246;
  v233 = v273 ^ v232;
  v224 = v260 ^ v223;
  v211 = v247 ^ v210;
  v198 = v233 ^ v197;
  v12 = v233
      ^ dword_585918[(v247 ^ (unsigned int)v384) >> 24]
      ^ dword_584D18[(unsigned __int8)(v282 ^ v405)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v273 ^ v398) >> 8)]
      ^ dword_585518[(unsigned __int8)((v260 ^ (unsigned int)v391) >> 16)];
  v11 = v224
      ^ dword_585918[(v282 ^ (unsigned int)v405) >> 24]
      ^ dword_584D18[(unsigned __int8)(v273 ^ v398)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v260 ^ v391) >> 8)]
      ^ dword_585518[(unsigned __int8)((v247 ^ (unsigned int)v384) >> 16)];
  v10 = v211
      ^ dword_585918[(v273 ^ (unsigned int)v398) >> 24]
      ^ dword_584D18[(unsigned __int8)(v260 ^ v391)]
      ^ dword_585118[(unsigned __int8)((unsigned __int16)(v247 ^ v384) >> 8)]
      ^ dword_585518[(unsigned __int8)((v282 ^ (unsigned int)v405) >> 16)];
  v9 = v198
     ^ dword_585918[(v260 ^ (unsigned int)v391) >> 24]
     ^ dword_584D18[(unsigned __int8)(v247 ^ v384)]
     ^ dword_585118[(unsigned __int8)((unsigned __int16)(v282 ^ v405) >> 8)]
     ^ dword_585518[(unsigned __int8)((v273 ^ (unsigned int)v398) >> 16)];
  v187 = v224 ^ v186;
  v8 = v187
     ^ dword_585918[HIBYTE(v9)]
     ^ dword_584D18[(unsigned __int8)v12]
     ^ dword_585118[BYTE1(v11)]
     ^ dword_585518[BYTE2(v10)];
  v7 = v211
     ^ v178
     ^ dword_585918[HIBYTE(v12)]
     ^ dword_584D18[(unsigned __int8)v11]
     ^ dword_585118[BYTE1(v10)]
     ^ dword_585518[BYTE2(v9)];
  v6 = v198
     ^ v166
     ^ dword_585918[HIBYTE(v11)]
     ^ dword_584D18[(unsigned __int8)v10]
     ^ dword_585118[BYTE1(v9)]
     ^ dword_585518[BYTE2(v12)];
  v5 = v187
     ^ v154
     ^ dword_585918[HIBYTE(v10)]
     ^ dword_584D18[(unsigned __int8)v9]
     ^ dword_585118[BYTE1(v12)]
     ^ dword_585518[BYTE2(v11)];
  v377 = dword_585918[HIBYTE(v5)]
       ^ dword_584D18[(unsigned __int8)v8]
       ^ dword_585118[BYTE1(v7)]
       ^ dword_585518[BYTE2(v6)]
       ^ v376;
  v370 = dword_585918[HIBYTE(v8)]
       ^ dword_584D18[(unsigned __int8)v7]
       ^ dword_585118[BYTE1(v6)]
       ^ dword_585518[BYTE2(v5)]
       ^ v369;
  v363 = dword_585918[HIBYTE(v7)]
       ^ dword_584D18[(unsigned __int8)v6]
       ^ dword_585118[BYTE1(v5)]
       ^ dword_585518[BYTE2(v8)]
       ^ v362;
  v356 = dword_585918[HIBYTE(v6)]
       ^ dword_584D18[(unsigned __int8)v5]
       ^ dword_585118[BYTE1(v8)]
       ^ dword_585518[BYTE2(v7)]
       ^ v355;
  a1[17] ^= v405;
  a1[18] ^= v398;
  a1[19] ^= v391;
  a1[20] ^= v384;
  a1[21] ^= v377;
  a1[22] ^= v370;
  a1[23] ^= v363;
  a1[24] ^= v356;
  return result;
}
