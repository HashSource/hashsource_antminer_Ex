void *__fastcall sub_2DDB04(_DWORD *a1)
{
  void *result; // r0
  unsigned int v2; // r4
  unsigned int v3; // r4
  unsigned int v4; // r4
  unsigned int v5; // r4
  int v6; // r0
  int v7; // r1
  _DWORD v9[32]; // [sp+8h] [bp-4BCh] BYREF
  unsigned int v10; // [sp+88h] [bp-43Ch]
  unsigned int v11; // [sp+8Ch] [bp-438h]
  unsigned int v12; // [sp+90h] [bp-434h]
  unsigned int v13; // [sp+94h] [bp-430h]
  unsigned int v14; // [sp+98h] [bp-42Ch]
  unsigned int v15; // [sp+9Ch] [bp-428h]
  unsigned int v16; // [sp+A0h] [bp-424h]
  unsigned int v17; // [sp+A4h] [bp-420h]
  unsigned int v18; // [sp+A8h] [bp-41Ch]
  unsigned int v19; // [sp+ACh] [bp-418h]
  unsigned int v20; // [sp+B0h] [bp-414h]
  unsigned int v21; // [sp+B4h] [bp-410h]
  unsigned int v22; // [sp+B8h] [bp-40Ch]
  unsigned int v23; // [sp+BCh] [bp-408h]
  unsigned int v24; // [sp+C0h] [bp-404h]
  unsigned int v25; // [sp+C4h] [bp-400h]
  unsigned int v26; // [sp+C8h] [bp-3FCh]
  unsigned int v27; // [sp+CCh] [bp-3F8h]
  unsigned int v28; // [sp+D0h] [bp-3F4h]
  unsigned int v29; // [sp+D4h] [bp-3F0h]
  unsigned int v30; // [sp+D8h] [bp-3ECh]
  unsigned int v31; // [sp+DCh] [bp-3E8h]
  unsigned int v32; // [sp+E0h] [bp-3E4h]
  unsigned int v33; // [sp+E4h] [bp-3E0h]
  unsigned int v34; // [sp+E8h] [bp-3DCh]
  unsigned int v35; // [sp+ECh] [bp-3D8h]
  unsigned int v36; // [sp+F0h] [bp-3D4h]
  unsigned int v37; // [sp+F4h] [bp-3D0h]
  unsigned int v38; // [sp+F8h] [bp-3CCh]
  unsigned int v39; // [sp+FCh] [bp-3C8h]
  unsigned int v40; // [sp+100h] [bp-3C4h]
  unsigned int v41; // [sp+104h] [bp-3C0h]
  unsigned int v42; // [sp+108h] [bp-3BCh]
  unsigned int v43; // [sp+10Ch] [bp-3B8h]
  unsigned int v44; // [sp+110h] [bp-3B4h]
  int v45; // [sp+114h] [bp-3B0h]
  int v46; // [sp+118h] [bp-3ACh]
  int v47; // [sp+11Ch] [bp-3A8h]
  unsigned int v48; // [sp+120h] [bp-3A4h]
  unsigned int v49; // [sp+124h] [bp-3A0h]
  unsigned int v50; // [sp+128h] [bp-39Ch]
  unsigned int v51; // [sp+12Ch] [bp-398h]
  unsigned int v52; // [sp+130h] [bp-394h]
  unsigned int v53; // [sp+134h] [bp-390h]
  unsigned int v54; // [sp+138h] [bp-38Ch]
  int v55; // [sp+13Ch] [bp-388h]
  int v56; // [sp+140h] [bp-384h]
  int v57; // [sp+144h] [bp-380h]
  unsigned int v58; // [sp+148h] [bp-37Ch]
  unsigned int v59; // [sp+14Ch] [bp-378h]
  unsigned int v60; // [sp+150h] [bp-374h]
  unsigned int v61; // [sp+154h] [bp-370h]
  unsigned int v62; // [sp+158h] [bp-36Ch]
  unsigned int v63; // [sp+15Ch] [bp-368h]
  unsigned int v64; // [sp+160h] [bp-364h]
  int v65; // [sp+164h] [bp-360h]
  int v66; // [sp+168h] [bp-35Ch]
  int v67; // [sp+16Ch] [bp-358h]
  unsigned int v68; // [sp+170h] [bp-354h]
  unsigned int v69; // [sp+174h] [bp-350h]
  unsigned int v70; // [sp+178h] [bp-34Ch]
  unsigned int v71; // [sp+17Ch] [bp-348h]
  unsigned int v72; // [sp+180h] [bp-344h]
  unsigned int v73; // [sp+184h] [bp-340h]
  unsigned int v74; // [sp+188h] [bp-33Ch]
  int v75; // [sp+18Ch] [bp-338h]
  int v76; // [sp+190h] [bp-334h]
  int v77; // [sp+194h] [bp-330h]
  unsigned int v78; // [sp+198h] [bp-32Ch]
  unsigned int v79; // [sp+19Ch] [bp-328h]
  unsigned int v80; // [sp+1A0h] [bp-324h]
  unsigned int v81; // [sp+1A4h] [bp-320h]
  unsigned int v82; // [sp+1A8h] [bp-31Ch]
  unsigned int v83; // [sp+1ACh] [bp-318h]
  unsigned int v84; // [sp+1B0h] [bp-314h]
  int v85; // [sp+1B4h] [bp-310h]
  int v86; // [sp+1B8h] [bp-30Ch]
  int v87; // [sp+1BCh] [bp-308h]
  unsigned int v88; // [sp+1C0h] [bp-304h]
  unsigned int v89; // [sp+1C4h] [bp-300h]
  unsigned int v90; // [sp+1C8h] [bp-2FCh]
  unsigned int v91; // [sp+1CCh] [bp-2F8h]
  unsigned int v92; // [sp+1D0h] [bp-2F4h]
  unsigned int v93; // [sp+1D4h] [bp-2F0h]
  unsigned int v94; // [sp+1D8h] [bp-2ECh]
  int v95; // [sp+1DCh] [bp-2E8h]
  int v96; // [sp+1E0h] [bp-2E4h]
  int v97; // [sp+1E4h] [bp-2E0h]
  unsigned int v98; // [sp+1E8h] [bp-2DCh]
  unsigned int v99; // [sp+1ECh] [bp-2D8h]
  unsigned int v100; // [sp+1F0h] [bp-2D4h]
  unsigned int v101; // [sp+1F4h] [bp-2D0h]
  unsigned int v102; // [sp+1F8h] [bp-2CCh]
  unsigned int v103; // [sp+1FCh] [bp-2C8h]
  unsigned int v104; // [sp+200h] [bp-2C4h]
  int v105; // [sp+204h] [bp-2C0h]
  int v106; // [sp+208h] [bp-2BCh]
  int v107; // [sp+20Ch] [bp-2B8h]
  unsigned int v108; // [sp+210h] [bp-2B4h]
  unsigned int v109; // [sp+214h] [bp-2B0h]
  unsigned int v110; // [sp+218h] [bp-2ACh]
  unsigned int v111; // [sp+21Ch] [bp-2A8h]
  unsigned int v112; // [sp+220h] [bp-2A4h]
  unsigned int v113; // [sp+224h] [bp-2A0h]
  unsigned int v114; // [sp+228h] [bp-29Ch]
  int v115; // [sp+22Ch] [bp-298h]
  int v116; // [sp+230h] [bp-294h]
  int v117; // [sp+234h] [bp-290h]
  unsigned int v118; // [sp+238h] [bp-28Ch]
  unsigned int v119; // [sp+23Ch] [bp-288h]
  unsigned int v120; // [sp+240h] [bp-284h]
  unsigned int v121; // [sp+244h] [bp-280h]
  unsigned int v122; // [sp+248h] [bp-27Ch]
  unsigned int v123; // [sp+24Ch] [bp-278h]
  unsigned int v124; // [sp+250h] [bp-274h]
  int v125; // [sp+254h] [bp-270h]
  int v126; // [sp+258h] [bp-26Ch]
  int v127; // [sp+25Ch] [bp-268h]
  int v128; // [sp+260h] [bp-264h]
  unsigned int v129; // [sp+264h] [bp-260h]
  int v130; // [sp+268h] [bp-25Ch]
  int v131; // [sp+26Ch] [bp-258h]
  unsigned int v132; // [sp+270h] [bp-254h]
  unsigned int v133; // [sp+274h] [bp-250h]
  unsigned int v134; // [sp+278h] [bp-24Ch]
  int v135; // [sp+27Ch] [bp-248h]
  int v136; // [sp+280h] [bp-244h]
  int v137; // [sp+284h] [bp-240h]
  int v138; // [sp+288h] [bp-23Ch]
  int v139; // [sp+28Ch] [bp-238h]
  int v140; // [sp+290h] [bp-234h]
  int v141; // [sp+294h] [bp-230h]
  unsigned int v142; // [sp+298h] [bp-22Ch]
  unsigned int v143; // [sp+29Ch] [bp-228h]
  unsigned int v144; // [sp+2A0h] [bp-224h]
  int v145; // [sp+2A4h] [bp-220h]
  int v146; // [sp+2A8h] [bp-21Ch]
  int v147; // [sp+2ACh] [bp-218h]
  int v148; // [sp+2B0h] [bp-214h]
  int v149; // [sp+2B4h] [bp-210h]
  int v150; // [sp+2B8h] [bp-20Ch]
  int v151; // [sp+2BCh] [bp-208h]
  unsigned int v152; // [sp+2C0h] [bp-204h]
  unsigned int v153; // [sp+2C4h] [bp-200h]
  unsigned int v154; // [sp+2C8h] [bp-1FCh]
  int v155; // [sp+2CCh] [bp-1F8h]
  int v156; // [sp+2D0h] [bp-1F4h]
  int v157; // [sp+2D4h] [bp-1F0h]
  int v158; // [sp+2D8h] [bp-1ECh]
  int v159; // [sp+2DCh] [bp-1E8h]
  int v160; // [sp+2E0h] [bp-1E4h]
  int v161; // [sp+2E4h] [bp-1E0h]
  unsigned int v162; // [sp+2E8h] [bp-1DCh]
  unsigned int v163; // [sp+2ECh] [bp-1D8h]
  unsigned int v164; // [sp+2F0h] [bp-1D4h]
  int v165; // [sp+2F4h] [bp-1D0h]
  int v166; // [sp+2F8h] [bp-1CCh]
  int v167; // [sp+2FCh] [bp-1C8h]
  unsigned int v168; // [sp+300h] [bp-1C4h]
  int v169; // [sp+304h] [bp-1C0h]
  int v170; // [sp+308h] [bp-1BCh]
  int v171; // [sp+30Ch] [bp-1B8h]
  unsigned int v172; // [sp+310h] [bp-1B4h]
  unsigned int v173; // [sp+314h] [bp-1B0h]
  unsigned int v174; // [sp+318h] [bp-1ACh]
  int v175; // [sp+31Ch] [bp-1A8h]
  int v176; // [sp+320h] [bp-1A4h]
  int v177; // [sp+324h] [bp-1A0h]
  int v178; // [sp+328h] [bp-19Ch]
  int v179; // [sp+32Ch] [bp-198h]
  int v180; // [sp+330h] [bp-194h]
  int v181; // [sp+334h] [bp-190h]
  unsigned int v182; // [sp+338h] [bp-18Ch]
  unsigned int v183; // [sp+33Ch] [bp-188h]
  unsigned int v184; // [sp+340h] [bp-184h]
  int v185; // [sp+344h] [bp-180h]
  int v186; // [sp+348h] [bp-17Ch]
  int v187; // [sp+34Ch] [bp-178h]
  int v188; // [sp+350h] [bp-174h]
  int v189; // [sp+354h] [bp-170h]
  int v190; // [sp+358h] [bp-16Ch]
  int v191; // [sp+35Ch] [bp-168h]
  unsigned int v192; // [sp+360h] [bp-164h]
  unsigned int v193; // [sp+364h] [bp-160h]
  unsigned int v194; // [sp+368h] [bp-15Ch]
  int v195; // [sp+36Ch] [bp-158h]
  int v196; // [sp+370h] [bp-154h]
  int v197; // [sp+374h] [bp-150h]
  int v198; // [sp+378h] [bp-14Ch]
  int v199; // [sp+37Ch] [bp-148h]
  int v200; // [sp+380h] [bp-144h]
  int v201; // [sp+384h] [bp-140h]
  unsigned int v202; // [sp+388h] [bp-13Ch]
  unsigned int v203; // [sp+38Ch] [bp-138h]
  unsigned int v204; // [sp+390h] [bp-134h]
  unsigned int v205; // [sp+394h] [bp-130h]
  unsigned int v206; // [sp+398h] [bp-12Ch]
  unsigned int v207; // [sp+39Ch] [bp-128h]
  unsigned int v208; // [sp+3A0h] [bp-124h]
  unsigned int v209; // [sp+3A4h] [bp-120h]
  unsigned int v210; // [sp+3A8h] [bp-11Ch]
  unsigned int v211; // [sp+3ACh] [bp-118h]
  unsigned int v212; // [sp+3B0h] [bp-114h]
  unsigned int v213; // [sp+3B4h] [bp-110h]
  unsigned int v214; // [sp+3B8h] [bp-10Ch]
  unsigned int v215; // [sp+3BCh] [bp-108h]
  unsigned int v216; // [sp+3C0h] [bp-104h]
  unsigned int v217; // [sp+3C4h] [bp-100h]
  unsigned int v218; // [sp+3C8h] [bp-FCh]
  unsigned int v219; // [sp+3CCh] [bp-F8h]
  unsigned int v220; // [sp+3D0h] [bp-F4h]
  unsigned int v221; // [sp+3D4h] [bp-F0h]
  unsigned int v222; // [sp+3D8h] [bp-ECh]
  unsigned int v223; // [sp+3DCh] [bp-E8h]
  unsigned int v224; // [sp+3E0h] [bp-E4h]
  unsigned int v225; // [sp+3E4h] [bp-E0h]
  unsigned int v226; // [sp+3E8h] [bp-DCh]
  unsigned int v227; // [sp+3ECh] [bp-D8h]
  unsigned int v228; // [sp+3F0h] [bp-D4h]
  unsigned int v229; // [sp+3F4h] [bp-D0h]
  unsigned int v230; // [sp+3F8h] [bp-CCh]
  unsigned int v231; // [sp+3FCh] [bp-C8h]
  unsigned int v232; // [sp+400h] [bp-C4h]
  unsigned int v233; // [sp+404h] [bp-C0h]
  unsigned int v234; // [sp+408h] [bp-BCh]
  unsigned int v235; // [sp+40Ch] [bp-B8h]
  unsigned int v236; // [sp+410h] [bp-B4h]
  unsigned int v237; // [sp+414h] [bp-B0h]
  unsigned int v238; // [sp+418h] [bp-ACh]
  unsigned int v239; // [sp+41Ch] [bp-A8h]
  unsigned int v240; // [sp+420h] [bp-A4h]
  unsigned int v241; // [sp+424h] [bp-A0h]
  unsigned int v242; // [sp+428h] [bp-9Ch]
  unsigned int v243; // [sp+42Ch] [bp-98h]
  unsigned int v244; // [sp+430h] [bp-94h]
  unsigned int v245; // [sp+434h] [bp-90h]
  unsigned int v246; // [sp+438h] [bp-8Ch]
  unsigned int v247; // [sp+43Ch] [bp-88h]
  unsigned int v248; // [sp+440h] [bp-84h]
  unsigned int v249; // [sp+444h] [bp-80h]
  unsigned int v250; // [sp+448h] [bp-7Ch]
  unsigned int v251; // [sp+44Ch] [bp-78h]
  unsigned int v252; // [sp+450h] [bp-74h]
  unsigned int v253; // [sp+454h] [bp-70h]
  unsigned int v254; // [sp+458h] [bp-6Ch]
  unsigned int v255; // [sp+45Ch] [bp-68h]
  unsigned int v256; // [sp+460h] [bp-64h]
  unsigned int v257; // [sp+464h] [bp-60h]
  unsigned int v258; // [sp+468h] [bp-5Ch]
  unsigned int v259; // [sp+46Ch] [bp-58h]
  unsigned int v260; // [sp+470h] [bp-54h]
  unsigned int v261; // [sp+474h] [bp-50h]
  unsigned int v262; // [sp+478h] [bp-4Ch]
  unsigned int v263; // [sp+47Ch] [bp-48h]
  unsigned int v264; // [sp+480h] [bp-44h]
  unsigned int v265; // [sp+484h] [bp-40h]
  unsigned int v266; // [sp+488h] [bp-3Ch]
  unsigned int v267; // [sp+48Ch] [bp-38h]
  unsigned int v268; // [sp+490h] [bp-34h]
  _DWORD *v269; // [sp+494h] [bp-30h]
  _DWORD *v270; // [sp+498h] [bp-2Ch]
  unsigned int k; // [sp+49Ch] [bp-28h]
  unsigned int i; // [sp+4A0h] [bp-24h]
  unsigned int j; // [sp+4A4h] [bp-20h]
  int v274; // [sp+4A8h] [bp-1Ch]
  int v275; // [sp+4ACh] [bp-18h]
  int v276; // [sp+4B0h] [bp-14h]
  int v277; // [sp+4B4h] [bp-10h]

  v277 = a1[66];
  v276 = a1[67];
  v275 = a1[68];
  v274 = a1[69];
  result = memcpy(v9, a1 + 34, sizeof(v9));
  for ( i = 0; i <= 7; ++i )
  {
    v2 = i + 8;
    v9[4 * v2] = sub_2D7E9C((int)&a1[4 * i]);
    v3 = i + 8;
    v9[4 * v3 + 1] = sub_2D7E9C((int)&a1[4 * i + 1]);
    v4 = i + 8;
    v9[4 * v4 + 2] = sub_2D7E9C((int)&a1[4 * i + 2]);
    v5 = i + 8;
    result = (void *)sub_2D7E9C((int)&a1[4 * i + 3]);
    v9[4 * v5 + 3] = result;
  }
  for ( j = 0; j <= 9; ++j )
  {
    v268 = dword_57FFF8[HIBYTE(v9[3])]
         ^ dword_57F3F8[LOBYTE(v9[0])]
         ^ dword_57F7F8[BYTE1(v9[1])]
         ^ dword_57FBF8[BYTE2(v9[2])]
         ^ v277;
    v267 = dword_57FFF8[HIBYTE(v9[0])]
         ^ dword_57F3F8[LOBYTE(v9[1])]
         ^ dword_57F7F8[BYTE1(v9[2])]
         ^ dword_57FBF8[BYTE2(v9[3])]
         ^ v276;
    v266 = dword_57FFF8[HIBYTE(v9[1])]
         ^ dword_57F3F8[LOBYTE(v9[2])]
         ^ dword_57F7F8[BYTE1(v9[3])]
         ^ dword_57FBF8[BYTE2(v9[0])]
         ^ v275;
    v265 = dword_57FFF8[HIBYTE(v9[2])]
         ^ dword_57F3F8[LOBYTE(v9[3])]
         ^ dword_57F7F8[BYTE1(v9[0])]
         ^ dword_57FBF8[BYTE2(v9[1])]
         ^ v274;
    v9[0] = dword_57FFF8[HIBYTE(v265)]
          ^ dword_57F3F8[(unsigned __int8)v268]
          ^ dword_57F7F8[BYTE1(v267)]
          ^ dword_57FBF8[BYTE2(v266)];
    v9[1] = dword_57FFF8[HIBYTE(v268)]
          ^ dword_57F3F8[(unsigned __int8)v267]
          ^ dword_57F7F8[BYTE1(v266)]
          ^ dword_57FBF8[BYTE2(v265)];
    v9[2] = dword_57FFF8[HIBYTE(v267)]
          ^ dword_57F3F8[(unsigned __int8)v266]
          ^ dword_57F7F8[BYTE1(v265)]
          ^ dword_57FBF8[BYTE2(v268)];
    v9[3] = dword_57FFF8[HIBYTE(v266)]
          ^ dword_57F3F8[(unsigned __int8)v265]
          ^ dword_57F7F8[BYTE1(v268)]
          ^ dword_57FBF8[BYTE2(v267)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v264 = dword_57FFF8[HIBYTE(v9[7])]
         ^ dword_57F3F8[LOBYTE(v9[4])]
         ^ dword_57F7F8[BYTE1(v9[5])]
         ^ dword_57FBF8[BYTE2(v9[6])]
         ^ v277;
    v263 = dword_57FFF8[HIBYTE(v9[4])]
         ^ dword_57F3F8[LOBYTE(v9[5])]
         ^ dword_57F7F8[BYTE1(v9[6])]
         ^ dword_57FBF8[BYTE2(v9[7])]
         ^ v276;
    v262 = dword_57FFF8[HIBYTE(v9[5])]
         ^ dword_57F3F8[LOBYTE(v9[6])]
         ^ dword_57F7F8[BYTE1(v9[7])]
         ^ dword_57FBF8[BYTE2(v9[4])]
         ^ v275;
    v261 = dword_57FFF8[HIBYTE(v9[6])]
         ^ dword_57F3F8[LOBYTE(v9[7])]
         ^ dword_57F7F8[BYTE1(v9[4])]
         ^ dword_57FBF8[BYTE2(v9[5])]
         ^ v274;
    v9[4] = dword_57FFF8[HIBYTE(v261)]
          ^ dword_57F3F8[(unsigned __int8)v264]
          ^ dword_57F7F8[BYTE1(v263)]
          ^ dword_57FBF8[BYTE2(v262)];
    v9[5] = dword_57FFF8[HIBYTE(v264)]
          ^ dword_57F3F8[(unsigned __int8)v263]
          ^ dword_57F7F8[BYTE1(v262)]
          ^ dword_57FBF8[BYTE2(v261)];
    v9[6] = dword_57FFF8[HIBYTE(v263)]
          ^ dword_57F3F8[(unsigned __int8)v262]
          ^ dword_57F7F8[BYTE1(v261)]
          ^ dword_57FBF8[BYTE2(v264)];
    v9[7] = dword_57FFF8[HIBYTE(v262)]
          ^ dword_57F3F8[(unsigned __int8)v261]
          ^ dword_57F7F8[BYTE1(v264)]
          ^ dword_57FBF8[BYTE2(v263)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v260 = dword_57FFF8[HIBYTE(v9[11])]
         ^ dword_57F3F8[LOBYTE(v9[8])]
         ^ dword_57F7F8[BYTE1(v9[9])]
         ^ dword_57FBF8[BYTE2(v9[10])]
         ^ v277;
    v259 = dword_57FFF8[HIBYTE(v9[8])]
         ^ dword_57F3F8[LOBYTE(v9[9])]
         ^ dword_57F7F8[BYTE1(v9[10])]
         ^ dword_57FBF8[BYTE2(v9[11])]
         ^ v276;
    v258 = dword_57FFF8[HIBYTE(v9[9])]
         ^ dword_57F3F8[LOBYTE(v9[10])]
         ^ dword_57F7F8[BYTE1(v9[11])]
         ^ dword_57FBF8[BYTE2(v9[8])]
         ^ v275;
    v257 = dword_57FFF8[HIBYTE(v9[10])]
         ^ dword_57F3F8[LOBYTE(v9[11])]
         ^ dword_57F7F8[BYTE1(v9[8])]
         ^ dword_57FBF8[BYTE2(v9[9])]
         ^ v274;
    v9[8] = dword_57FFF8[HIBYTE(v257)]
          ^ dword_57F3F8[(unsigned __int8)v260]
          ^ dword_57F7F8[BYTE1(v259)]
          ^ dword_57FBF8[BYTE2(v258)];
    v9[9] = dword_57FFF8[HIBYTE(v260)]
          ^ dword_57F3F8[(unsigned __int8)v259]
          ^ dword_57F7F8[BYTE1(v258)]
          ^ dword_57FBF8[BYTE2(v257)];
    v9[10] = dword_57FFF8[HIBYTE(v259)]
           ^ dword_57F3F8[(unsigned __int8)v258]
           ^ dword_57F7F8[BYTE1(v257)]
           ^ dword_57FBF8[BYTE2(v260)];
    v9[11] = dword_57FFF8[HIBYTE(v258)]
           ^ dword_57F3F8[(unsigned __int8)v257]
           ^ dword_57F7F8[BYTE1(v260)]
           ^ dword_57FBF8[BYTE2(v259)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v256 = dword_57FFF8[HIBYTE(v9[15])]
         ^ dword_57F3F8[LOBYTE(v9[12])]
         ^ dword_57F7F8[BYTE1(v9[13])]
         ^ dword_57FBF8[BYTE2(v9[14])]
         ^ v277;
    v255 = dword_57FFF8[HIBYTE(v9[12])]
         ^ dword_57F3F8[LOBYTE(v9[13])]
         ^ dword_57F7F8[BYTE1(v9[14])]
         ^ dword_57FBF8[BYTE2(v9[15])]
         ^ v276;
    v254 = dword_57FFF8[HIBYTE(v9[13])]
         ^ dword_57F3F8[LOBYTE(v9[14])]
         ^ dword_57F7F8[BYTE1(v9[15])]
         ^ dword_57FBF8[BYTE2(v9[12])]
         ^ v275;
    v253 = dword_57FFF8[HIBYTE(v9[14])]
         ^ dword_57F3F8[LOBYTE(v9[15])]
         ^ dword_57F7F8[BYTE1(v9[12])]
         ^ dword_57FBF8[BYTE2(v9[13])]
         ^ v274;
    v9[12] = dword_57FFF8[HIBYTE(v253)]
           ^ dword_57F3F8[(unsigned __int8)v256]
           ^ dword_57F7F8[BYTE1(v255)]
           ^ dword_57FBF8[BYTE2(v254)];
    v9[13] = dword_57FFF8[HIBYTE(v256)]
           ^ dword_57F3F8[(unsigned __int8)v255]
           ^ dword_57F7F8[BYTE1(v254)]
           ^ dword_57FBF8[BYTE2(v253)];
    v9[14] = dword_57FFF8[HIBYTE(v255)]
           ^ dword_57F3F8[(unsigned __int8)v254]
           ^ dword_57F7F8[BYTE1(v253)]
           ^ dword_57FBF8[BYTE2(v256)];
    v9[15] = dword_57FFF8[HIBYTE(v254)]
           ^ dword_57F3F8[(unsigned __int8)v253]
           ^ dword_57F7F8[BYTE1(v256)]
           ^ dword_57FBF8[BYTE2(v255)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v252 = dword_57FFF8[HIBYTE(v9[19])]
         ^ dword_57F3F8[LOBYTE(v9[16])]
         ^ dword_57F7F8[BYTE1(v9[17])]
         ^ dword_57FBF8[BYTE2(v9[18])]
         ^ v277;
    v251 = dword_57FFF8[HIBYTE(v9[16])]
         ^ dword_57F3F8[LOBYTE(v9[17])]
         ^ dword_57F7F8[BYTE1(v9[18])]
         ^ dword_57FBF8[BYTE2(v9[19])]
         ^ v276;
    v250 = dword_57FFF8[HIBYTE(v9[17])]
         ^ dword_57F3F8[LOBYTE(v9[18])]
         ^ dword_57F7F8[BYTE1(v9[19])]
         ^ dword_57FBF8[BYTE2(v9[16])]
         ^ v275;
    v249 = dword_57FFF8[HIBYTE(v9[18])]
         ^ dword_57F3F8[LOBYTE(v9[19])]
         ^ dword_57F7F8[BYTE1(v9[16])]
         ^ dword_57FBF8[BYTE2(v9[17])]
         ^ v274;
    v9[16] = dword_57FFF8[HIBYTE(v249)]
           ^ dword_57F3F8[(unsigned __int8)v252]
           ^ dword_57F7F8[BYTE1(v251)]
           ^ dword_57FBF8[BYTE2(v250)];
    v9[17] = dword_57FFF8[HIBYTE(v252)]
           ^ dword_57F3F8[(unsigned __int8)v251]
           ^ dword_57F7F8[BYTE1(v250)]
           ^ dword_57FBF8[BYTE2(v249)];
    v9[18] = dword_57FFF8[HIBYTE(v251)]
           ^ dword_57F3F8[(unsigned __int8)v250]
           ^ dword_57F7F8[BYTE1(v249)]
           ^ dword_57FBF8[BYTE2(v252)];
    v9[19] = dword_57FFF8[HIBYTE(v250)]
           ^ dword_57F3F8[(unsigned __int8)v249]
           ^ dword_57F7F8[BYTE1(v252)]
           ^ dword_57FBF8[BYTE2(v251)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v248 = dword_57FFF8[HIBYTE(v9[23])]
         ^ dword_57F3F8[LOBYTE(v9[20])]
         ^ dword_57F7F8[BYTE1(v9[21])]
         ^ dword_57FBF8[BYTE2(v9[22])]
         ^ v277;
    v247 = dword_57FFF8[HIBYTE(v9[20])]
         ^ dword_57F3F8[LOBYTE(v9[21])]
         ^ dword_57F7F8[BYTE1(v9[22])]
         ^ dword_57FBF8[BYTE2(v9[23])]
         ^ v276;
    v246 = dword_57FFF8[HIBYTE(v9[21])]
         ^ dword_57F3F8[LOBYTE(v9[22])]
         ^ dword_57F7F8[BYTE1(v9[23])]
         ^ dword_57FBF8[BYTE2(v9[20])]
         ^ v275;
    v245 = dword_57FFF8[HIBYTE(v9[22])]
         ^ dword_57F3F8[LOBYTE(v9[23])]
         ^ dword_57F7F8[BYTE1(v9[20])]
         ^ dword_57FBF8[BYTE2(v9[21])]
         ^ v274;
    v9[20] = dword_57FFF8[HIBYTE(v245)]
           ^ dword_57F3F8[(unsigned __int8)v248]
           ^ dword_57F7F8[BYTE1(v247)]
           ^ dword_57FBF8[BYTE2(v246)];
    v9[21] = dword_57FFF8[HIBYTE(v248)]
           ^ dword_57F3F8[(unsigned __int8)v247]
           ^ dword_57F7F8[BYTE1(v246)]
           ^ dword_57FBF8[BYTE2(v245)];
    v9[22] = dword_57FFF8[HIBYTE(v247)]
           ^ dword_57F3F8[(unsigned __int8)v246]
           ^ dword_57F7F8[BYTE1(v245)]
           ^ dword_57FBF8[BYTE2(v248)];
    v9[23] = dword_57FFF8[HIBYTE(v246)]
           ^ dword_57F3F8[(unsigned __int8)v245]
           ^ dword_57F7F8[BYTE1(v248)]
           ^ dword_57FBF8[BYTE2(v247)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v244 = dword_57FFF8[HIBYTE(v9[27])]
         ^ dword_57F3F8[LOBYTE(v9[24])]
         ^ dword_57F7F8[BYTE1(v9[25])]
         ^ dword_57FBF8[BYTE2(v9[26])]
         ^ v277;
    v243 = dword_57FFF8[HIBYTE(v9[24])]
         ^ dword_57F3F8[LOBYTE(v9[25])]
         ^ dword_57F7F8[BYTE1(v9[26])]
         ^ dword_57FBF8[BYTE2(v9[27])]
         ^ v276;
    v242 = dword_57FFF8[HIBYTE(v9[25])]
         ^ dword_57F3F8[LOBYTE(v9[26])]
         ^ dword_57F7F8[BYTE1(v9[27])]
         ^ dword_57FBF8[BYTE2(v9[24])]
         ^ v275;
    v241 = dword_57FFF8[HIBYTE(v9[26])]
         ^ dword_57F3F8[LOBYTE(v9[27])]
         ^ dword_57F7F8[BYTE1(v9[24])]
         ^ dword_57FBF8[BYTE2(v9[25])]
         ^ v274;
    v9[24] = dword_57FFF8[HIBYTE(v241)]
           ^ dword_57F3F8[(unsigned __int8)v244]
           ^ dword_57F7F8[BYTE1(v243)]
           ^ dword_57FBF8[BYTE2(v242)];
    v9[25] = dword_57FFF8[HIBYTE(v244)]
           ^ dword_57F3F8[(unsigned __int8)v243]
           ^ dword_57F7F8[BYTE1(v242)]
           ^ dword_57FBF8[BYTE2(v241)];
    v9[26] = dword_57FFF8[HIBYTE(v243)]
           ^ dword_57F3F8[(unsigned __int8)v242]
           ^ dword_57F7F8[BYTE1(v241)]
           ^ dword_57FBF8[BYTE2(v244)];
    v9[27] = dword_57FFF8[HIBYTE(v242)]
           ^ dword_57F3F8[(unsigned __int8)v241]
           ^ dword_57F7F8[BYTE1(v244)]
           ^ dword_57FBF8[BYTE2(v243)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v240 = dword_57FFF8[HIBYTE(v9[31])]
         ^ dword_57F3F8[LOBYTE(v9[28])]
         ^ dword_57F7F8[BYTE1(v9[29])]
         ^ dword_57FBF8[BYTE2(v9[30])]
         ^ v277;
    v239 = dword_57FFF8[HIBYTE(v9[28])]
         ^ dword_57F3F8[LOBYTE(v9[29])]
         ^ dword_57F7F8[BYTE1(v9[30])]
         ^ dword_57FBF8[BYTE2(v9[31])]
         ^ v276;
    v238 = dword_57FFF8[HIBYTE(v9[29])]
         ^ dword_57F3F8[LOBYTE(v9[30])]
         ^ dword_57F7F8[BYTE1(v9[31])]
         ^ dword_57FBF8[BYTE2(v9[28])]
         ^ v275;
    v237 = dword_57FFF8[HIBYTE(v9[30])]
         ^ dword_57F3F8[LOBYTE(v9[31])]
         ^ dword_57F7F8[BYTE1(v9[28])]
         ^ dword_57FBF8[BYTE2(v9[29])]
         ^ v274;
    v9[28] = dword_57FFF8[HIBYTE(v237)]
           ^ dword_57F3F8[(unsigned __int8)v240]
           ^ dword_57F7F8[BYTE1(v239)]
           ^ dword_57FBF8[BYTE2(v238)];
    v9[29] = dword_57FFF8[HIBYTE(v240)]
           ^ dword_57F3F8[(unsigned __int8)v239]
           ^ dword_57F7F8[BYTE1(v238)]
           ^ dword_57FBF8[BYTE2(v237)];
    v9[30] = dword_57FFF8[HIBYTE(v239)]
           ^ dword_57F3F8[(unsigned __int8)v238]
           ^ dword_57F7F8[BYTE1(v237)]
           ^ dword_57FBF8[BYTE2(v240)];
    v9[31] = dword_57FFF8[HIBYTE(v238)]
           ^ dword_57F3F8[(unsigned __int8)v237]
           ^ dword_57F7F8[BYTE1(v240)]
           ^ dword_57FBF8[BYTE2(v239)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v236 = dword_57FFF8[HIBYTE(v13)]
         ^ dword_57F3F8[(unsigned __int8)v10]
         ^ dword_57F7F8[BYTE1(v11)]
         ^ dword_57FBF8[BYTE2(v12)]
         ^ v277;
    v235 = dword_57FFF8[HIBYTE(v10)]
         ^ dword_57F3F8[(unsigned __int8)v11]
         ^ dword_57F7F8[BYTE1(v12)]
         ^ dword_57FBF8[BYTE2(v13)]
         ^ v276;
    v234 = dword_57FFF8[HIBYTE(v11)]
         ^ dword_57F3F8[(unsigned __int8)v12]
         ^ dword_57F7F8[BYTE1(v13)]
         ^ dword_57FBF8[BYTE2(v10)]
         ^ v275;
    v233 = dword_57FFF8[HIBYTE(v12)]
         ^ dword_57F3F8[(unsigned __int8)v13]
         ^ dword_57F7F8[BYTE1(v10)]
         ^ dword_57FBF8[BYTE2(v11)]
         ^ v274;
    v10 = dword_57FFF8[HIBYTE(v233)]
        ^ dword_57F3F8[(unsigned __int8)v236]
        ^ dword_57F7F8[BYTE1(v235)]
        ^ dword_57FBF8[BYTE2(v234)];
    v11 = dword_57FFF8[HIBYTE(v236)]
        ^ dword_57F3F8[(unsigned __int8)v235]
        ^ dword_57F7F8[BYTE1(v234)]
        ^ dword_57FBF8[BYTE2(v233)];
    v12 = dword_57FFF8[HIBYTE(v235)]
        ^ dword_57F3F8[(unsigned __int8)v234]
        ^ dword_57F7F8[BYTE1(v233)]
        ^ dword_57FBF8[BYTE2(v236)];
    v13 = dword_57FFF8[HIBYTE(v234)]
        ^ dword_57F3F8[(unsigned __int8)v233]
        ^ dword_57F7F8[BYTE1(v236)]
        ^ dword_57FBF8[BYTE2(v235)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v232 = dword_57FFF8[HIBYTE(v17)]
         ^ dword_57F3F8[(unsigned __int8)v14]
         ^ dword_57F7F8[BYTE1(v15)]
         ^ dword_57FBF8[BYTE2(v16)]
         ^ v277;
    v231 = dword_57FFF8[HIBYTE(v14)]
         ^ dword_57F3F8[(unsigned __int8)v15]
         ^ dword_57F7F8[BYTE1(v16)]
         ^ dword_57FBF8[BYTE2(v17)]
         ^ v276;
    v230 = dword_57FFF8[HIBYTE(v15)]
         ^ dword_57F3F8[(unsigned __int8)v16]
         ^ dword_57F7F8[BYTE1(v17)]
         ^ dword_57FBF8[BYTE2(v14)]
         ^ v275;
    v229 = dword_57FFF8[HIBYTE(v16)]
         ^ dword_57F3F8[(unsigned __int8)v17]
         ^ dword_57F7F8[BYTE1(v14)]
         ^ dword_57FBF8[BYTE2(v15)]
         ^ v274;
    v14 = dword_57FFF8[HIBYTE(v229)]
        ^ dword_57F3F8[(unsigned __int8)v232]
        ^ dword_57F7F8[BYTE1(v231)]
        ^ dword_57FBF8[BYTE2(v230)];
    v15 = dword_57FFF8[HIBYTE(v232)]
        ^ dword_57F3F8[(unsigned __int8)v231]
        ^ dword_57F7F8[BYTE1(v230)]
        ^ dword_57FBF8[BYTE2(v229)];
    v16 = dword_57FFF8[HIBYTE(v231)]
        ^ dword_57F3F8[(unsigned __int8)v230]
        ^ dword_57F7F8[BYTE1(v229)]
        ^ dword_57FBF8[BYTE2(v232)];
    v17 = dword_57FFF8[HIBYTE(v230)]
        ^ dword_57F3F8[(unsigned __int8)v229]
        ^ dword_57F7F8[BYTE1(v232)]
        ^ dword_57FBF8[BYTE2(v231)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v228 = dword_57FFF8[HIBYTE(v21)]
         ^ dword_57F3F8[(unsigned __int8)v18]
         ^ dword_57F7F8[BYTE1(v19)]
         ^ dword_57FBF8[BYTE2(v20)]
         ^ v277;
    v227 = dword_57FFF8[HIBYTE(v18)]
         ^ dword_57F3F8[(unsigned __int8)v19]
         ^ dword_57F7F8[BYTE1(v20)]
         ^ dword_57FBF8[BYTE2(v21)]
         ^ v276;
    v226 = dword_57FFF8[HIBYTE(v19)]
         ^ dword_57F3F8[(unsigned __int8)v20]
         ^ dword_57F7F8[BYTE1(v21)]
         ^ dword_57FBF8[BYTE2(v18)]
         ^ v275;
    v225 = dword_57FFF8[HIBYTE(v20)]
         ^ dword_57F3F8[(unsigned __int8)v21]
         ^ dword_57F7F8[BYTE1(v18)]
         ^ dword_57FBF8[BYTE2(v19)]
         ^ v274;
    v18 = dword_57FFF8[HIBYTE(v225)]
        ^ dword_57F3F8[(unsigned __int8)v228]
        ^ dword_57F7F8[BYTE1(v227)]
        ^ dword_57FBF8[BYTE2(v226)];
    v19 = dword_57FFF8[HIBYTE(v228)]
        ^ dword_57F3F8[(unsigned __int8)v227]
        ^ dword_57F7F8[BYTE1(v226)]
        ^ dword_57FBF8[BYTE2(v225)];
    v20 = dword_57FFF8[HIBYTE(v227)]
        ^ dword_57F3F8[(unsigned __int8)v226]
        ^ dword_57F7F8[BYTE1(v225)]
        ^ dword_57FBF8[BYTE2(v228)];
    v21 = dword_57FFF8[HIBYTE(v226)]
        ^ dword_57F3F8[(unsigned __int8)v225]
        ^ dword_57F7F8[BYTE1(v228)]
        ^ dword_57FBF8[BYTE2(v227)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v224 = dword_57FFF8[HIBYTE(v25)]
         ^ dword_57F3F8[(unsigned __int8)v22]
         ^ dword_57F7F8[BYTE1(v23)]
         ^ dword_57FBF8[BYTE2(v24)]
         ^ v277;
    v223 = dword_57FFF8[HIBYTE(v22)]
         ^ dword_57F3F8[(unsigned __int8)v23]
         ^ dword_57F7F8[BYTE1(v24)]
         ^ dword_57FBF8[BYTE2(v25)]
         ^ v276;
    v222 = dword_57FFF8[HIBYTE(v23)]
         ^ dword_57F3F8[(unsigned __int8)v24]
         ^ dword_57F7F8[BYTE1(v25)]
         ^ dword_57FBF8[BYTE2(v22)]
         ^ v275;
    v221 = dword_57FFF8[HIBYTE(v24)]
         ^ dword_57F3F8[(unsigned __int8)v25]
         ^ dword_57F7F8[BYTE1(v22)]
         ^ dword_57FBF8[BYTE2(v23)]
         ^ v274;
    v22 = dword_57FFF8[HIBYTE(v221)]
        ^ dword_57F3F8[(unsigned __int8)v224]
        ^ dword_57F7F8[BYTE1(v223)]
        ^ dword_57FBF8[BYTE2(v222)];
    v23 = dword_57FFF8[HIBYTE(v224)]
        ^ dword_57F3F8[(unsigned __int8)v223]
        ^ dword_57F7F8[BYTE1(v222)]
        ^ dword_57FBF8[BYTE2(v221)];
    v24 = dword_57FFF8[HIBYTE(v223)]
        ^ dword_57F3F8[(unsigned __int8)v222]
        ^ dword_57F7F8[BYTE1(v221)]
        ^ dword_57FBF8[BYTE2(v224)];
    v25 = dword_57FFF8[HIBYTE(v222)]
        ^ dword_57F3F8[(unsigned __int8)v221]
        ^ dword_57F7F8[BYTE1(v224)]
        ^ dword_57FBF8[BYTE2(v223)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v220 = dword_57FFF8[HIBYTE(v29)]
         ^ dword_57F3F8[(unsigned __int8)v26]
         ^ dword_57F7F8[BYTE1(v27)]
         ^ dword_57FBF8[BYTE2(v28)]
         ^ v277;
    v219 = dword_57FFF8[HIBYTE(v26)]
         ^ dword_57F3F8[(unsigned __int8)v27]
         ^ dword_57F7F8[BYTE1(v28)]
         ^ dword_57FBF8[BYTE2(v29)]
         ^ v276;
    v218 = dword_57FFF8[HIBYTE(v27)]
         ^ dword_57F3F8[(unsigned __int8)v28]
         ^ dword_57F7F8[BYTE1(v29)]
         ^ dword_57FBF8[BYTE2(v26)]
         ^ v275;
    v217 = dword_57FFF8[HIBYTE(v28)]
         ^ dword_57F3F8[(unsigned __int8)v29]
         ^ dword_57F7F8[BYTE1(v26)]
         ^ dword_57FBF8[BYTE2(v27)]
         ^ v274;
    v26 = dword_57FFF8[HIBYTE(v217)]
        ^ dword_57F3F8[(unsigned __int8)v220]
        ^ dword_57F7F8[BYTE1(v219)]
        ^ dword_57FBF8[BYTE2(v218)];
    v27 = dword_57FFF8[HIBYTE(v220)]
        ^ dword_57F3F8[(unsigned __int8)v219]
        ^ dword_57F7F8[BYTE1(v218)]
        ^ dword_57FBF8[BYTE2(v217)];
    v28 = dword_57FFF8[HIBYTE(v219)]
        ^ dword_57F3F8[(unsigned __int8)v218]
        ^ dword_57F7F8[BYTE1(v217)]
        ^ dword_57FBF8[BYTE2(v220)];
    v29 = dword_57FFF8[HIBYTE(v218)]
        ^ dword_57F3F8[(unsigned __int8)v217]
        ^ dword_57F7F8[BYTE1(v220)]
        ^ dword_57FBF8[BYTE2(v219)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v216 = dword_57FFF8[HIBYTE(v33)]
         ^ dword_57F3F8[(unsigned __int8)v30]
         ^ dword_57F7F8[BYTE1(v31)]
         ^ dword_57FBF8[BYTE2(v32)]
         ^ v277;
    v215 = dword_57FFF8[HIBYTE(v30)]
         ^ dword_57F3F8[(unsigned __int8)v31]
         ^ dword_57F7F8[BYTE1(v32)]
         ^ dword_57FBF8[BYTE2(v33)]
         ^ v276;
    v214 = dword_57FFF8[HIBYTE(v31)]
         ^ dword_57F3F8[(unsigned __int8)v32]
         ^ dword_57F7F8[BYTE1(v33)]
         ^ dword_57FBF8[BYTE2(v30)]
         ^ v275;
    v213 = dword_57FFF8[HIBYTE(v32)]
         ^ dword_57F3F8[(unsigned __int8)v33]
         ^ dword_57F7F8[BYTE1(v30)]
         ^ dword_57FBF8[BYTE2(v31)]
         ^ v274;
    v30 = dword_57FFF8[HIBYTE(v213)]
        ^ dword_57F3F8[(unsigned __int8)v216]
        ^ dword_57F7F8[BYTE1(v215)]
        ^ dword_57FBF8[BYTE2(v214)];
    v31 = dword_57FFF8[HIBYTE(v216)]
        ^ dword_57F3F8[(unsigned __int8)v215]
        ^ dword_57F7F8[BYTE1(v214)]
        ^ dword_57FBF8[BYTE2(v213)];
    v32 = dword_57FFF8[HIBYTE(v215)]
        ^ dword_57F3F8[(unsigned __int8)v214]
        ^ dword_57F7F8[BYTE1(v213)]
        ^ dword_57FBF8[BYTE2(v216)];
    v33 = dword_57FFF8[HIBYTE(v214)]
        ^ dword_57F3F8[(unsigned __int8)v213]
        ^ dword_57F7F8[BYTE1(v216)]
        ^ dword_57FBF8[BYTE2(v215)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v212 = dword_57FFF8[HIBYTE(v37)]
         ^ dword_57F3F8[(unsigned __int8)v34]
         ^ dword_57F7F8[BYTE1(v35)]
         ^ dword_57FBF8[BYTE2(v36)]
         ^ v277;
    v211 = dword_57FFF8[HIBYTE(v34)]
         ^ dword_57F3F8[(unsigned __int8)v35]
         ^ dword_57F7F8[BYTE1(v36)]
         ^ dword_57FBF8[BYTE2(v37)]
         ^ v276;
    v210 = dword_57FFF8[HIBYTE(v35)]
         ^ dword_57F3F8[(unsigned __int8)v36]
         ^ dword_57F7F8[BYTE1(v37)]
         ^ dword_57FBF8[BYTE2(v34)]
         ^ v275;
    v209 = dword_57FFF8[HIBYTE(v36)]
         ^ dword_57F3F8[(unsigned __int8)v37]
         ^ dword_57F7F8[BYTE1(v34)]
         ^ dword_57FBF8[BYTE2(v35)]
         ^ v274;
    v34 = dword_57FFF8[HIBYTE(v209)]
        ^ dword_57F3F8[(unsigned __int8)v212]
        ^ dword_57F7F8[BYTE1(v211)]
        ^ dword_57FBF8[BYTE2(v210)];
    v35 = dword_57FFF8[HIBYTE(v212)]
        ^ dword_57F3F8[(unsigned __int8)v211]
        ^ dword_57F7F8[BYTE1(v210)]
        ^ dword_57FBF8[BYTE2(v209)];
    v36 = dword_57FFF8[HIBYTE(v211)]
        ^ dword_57F3F8[(unsigned __int8)v210]
        ^ dword_57F7F8[BYTE1(v209)]
        ^ dword_57FBF8[BYTE2(v212)];
    v37 = dword_57FFF8[HIBYTE(v210)]
        ^ dword_57F3F8[(unsigned __int8)v209]
        ^ dword_57F7F8[BYTE1(v212)]
        ^ dword_57FBF8[BYTE2(v211)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v208 = dword_57FFF8[HIBYTE(v41)]
         ^ dword_57F3F8[(unsigned __int8)v38]
         ^ dword_57F7F8[BYTE1(v39)]
         ^ dword_57FBF8[BYTE2(v40)]
         ^ v277;
    v207 = dword_57FFF8[HIBYTE(v38)]
         ^ dword_57F3F8[(unsigned __int8)v39]
         ^ dword_57F7F8[BYTE1(v40)]
         ^ dword_57FBF8[BYTE2(v41)]
         ^ v276;
    v206 = dword_57FFF8[HIBYTE(v39)]
         ^ dword_57F3F8[(unsigned __int8)v40]
         ^ dword_57F7F8[BYTE1(v41)]
         ^ dword_57FBF8[BYTE2(v38)]
         ^ v275;
    v205 = dword_57FFF8[HIBYTE(v40)]
         ^ dword_57F3F8[(unsigned __int8)v41]
         ^ dword_57F7F8[BYTE1(v38)]
         ^ dword_57FBF8[BYTE2(v39)]
         ^ v274;
    v38 = dword_57FFF8[HIBYTE(v205)]
        ^ dword_57F3F8[(unsigned __int8)v208]
        ^ dword_57F7F8[BYTE1(v207)]
        ^ dword_57FBF8[BYTE2(v206)];
    v39 = dword_57FFF8[HIBYTE(v208)]
        ^ dword_57F3F8[(unsigned __int8)v207]
        ^ dword_57F7F8[BYTE1(v206)]
        ^ dword_57FBF8[BYTE2(v205)];
    v40 = dword_57FFF8[HIBYTE(v207)]
        ^ dword_57F3F8[(unsigned __int8)v206]
        ^ dword_57F7F8[BYTE1(v205)]
        ^ dword_57FBF8[BYTE2(v208)];
    v41 = dword_57FFF8[HIBYTE(v206)]
        ^ dword_57F3F8[(unsigned __int8)v205]
        ^ dword_57F7F8[BYTE1(v208)]
        ^ dword_57FBF8[BYTE2(v207)];
    if ( !++v277 && !++v276 && !++v275 )
      ++v274;
    v204 = v9[4];
    v9[4] = v9[20];
    v9[20] = v14;
    v14 = v30;
    v30 = v204;
    v204 = v9[5];
    v9[5] = v9[21];
    v9[21] = v15;
    v15 = v31;
    v31 = v204;
    v204 = v9[6];
    v9[6] = v9[22];
    v9[22] = v16;
    v16 = v32;
    v32 = v204;
    v204 = v9[7];
    v9[7] = v9[23];
    v9[23] = v17;
    v17 = v33;
    v203 = v9[8];
    v9[8] = v18;
    v18 = v203;
    v203 = v9[24];
    v9[24] = v34;
    v34 = v203;
    v203 = v9[9];
    v9[9] = v19;
    v19 = v203;
    v203 = v9[25];
    v9[25] = v35;
    v35 = v203;
    v203 = v9[10];
    v9[10] = v20;
    v20 = v203;
    v203 = v9[26];
    v9[26] = v36;
    v36 = v203;
    v203 = v9[11];
    v9[11] = v21;
    v21 = v203;
    v203 = v9[27];
    v9[27] = v37;
    v202 = v38;
    v38 = v22;
    v22 = v9[28];
    v9[28] = v9[12];
    v9[12] = v202;
    v202 = v39;
    v39 = v23;
    v23 = v9[29];
    v9[29] = v9[13];
    v9[13] = v202;
    v202 = v40;
    v40 = v24;
    v24 = v9[30];
    v9[30] = v9[14];
    v9[14] = v202;
    v202 = v41;
    v41 = v25;
    v25 = v9[31];
    v9[31] = v9[15];
    v201 = v9[0];
    v200 = v9[4];
    v199 = v9[8];
    v198 = v9[12];
    v197 = v9[4] ^ v9[0];
    v196 = v9[8] ^ v9[4];
    v195 = v9[12] ^ v9[8];
    v194 = (2 * (v9[4] ^ v9[0])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[4] ^ v9[0]) >> 7) & 0x1010101));
    v193 = (2 * (v9[8] ^ v9[4])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[8] ^ v9[4]) >> 7) & 0x1010101));
    v192 = (2 * (v9[12] ^ v9[8])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[12] ^ v9[8]) >> 7) & 0x1010101));
    v9[0] = v9[12] ^ v194 ^ v9[8] ^ v9[4];
    v9[4] = v9[12] ^ v9[8] ^ v193 ^ v201;
    v9[8] = v9[12] ^ v192 ^ v197;
    v9[12] = v199 ^ v194 ^ v193 ^ v192 ^ v197;
    v191 = v9[1];
    v190 = v9[5];
    v189 = v9[9];
    v188 = v9[13];
    v187 = v9[5] ^ v9[1];
    v186 = v9[9] ^ v9[5];
    v185 = v9[13] ^ v9[9];
    v184 = (2 * (v9[5] ^ v9[1])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[5] ^ v9[1]) >> 7) & 0x1010101));
    v183 = (2 * (v9[9] ^ v9[5])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[9] ^ v9[5]) >> 7) & 0x1010101));
    v182 = (2 * (v9[13] ^ v9[9])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[13] ^ v9[9]) >> 7) & 0x1010101));
    v9[1] = v9[13] ^ v184 ^ v9[9] ^ v9[5];
    v9[5] = v9[13] ^ v9[9] ^ v183 ^ v191;
    v9[9] = v9[13] ^ v182 ^ v187;
    v9[13] = v189 ^ v184 ^ v183 ^ v182 ^ v187;
    v181 = v9[2];
    v180 = v9[6];
    v179 = v9[10];
    v178 = v9[14];
    v177 = v9[6] ^ v9[2];
    v176 = v9[10] ^ v9[6];
    v175 = v9[14] ^ v9[10];
    v174 = (2 * (v9[6] ^ v9[2])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[6] ^ v9[2]) >> 7) & 0x1010101));
    v173 = (2 * (v9[10] ^ v9[6])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[10] ^ v9[6]) >> 7) & 0x1010101));
    v172 = (2 * (v9[14] ^ v9[10])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[14] ^ v9[10]) >> 7) & 0x1010101));
    v9[2] = v9[14] ^ v174 ^ v9[10] ^ v9[6];
    v9[6] = v9[14] ^ v9[10] ^ v173 ^ v181;
    v9[10] = v9[14] ^ v172 ^ v177;
    v9[14] = v179 ^ v174 ^ v173 ^ v172 ^ v177;
    v171 = v9[3];
    v170 = v9[7];
    v169 = v9[11];
    v168 = v202;
    v167 = v9[7] ^ v9[3];
    v166 = v9[11] ^ v9[7];
    v165 = v202 ^ v9[11];
    v164 = (2 * (v9[7] ^ v9[3])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[7] ^ v9[3]) >> 7) & 0x1010101));
    v163 = (2 * (v9[11] ^ v9[7])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[11] ^ v9[7]) >> 7) & 0x1010101));
    v162 = (2 * (v202 ^ v9[11])) & 0xFEFEFEFE ^ (27 * (((v202 ^ v9[11]) >> 7) & 0x1010101));
    v9[3] = v202 ^ v164 ^ v9[11] ^ v9[7];
    v9[7] = v202 ^ v9[11] ^ v163 ^ v171;
    v9[11] = v202 ^ v162 ^ v167;
    v9[15] = v169 ^ v164 ^ v163 ^ v162 ^ v167;
    v161 = v9[16];
    v160 = v9[20];
    v159 = v9[24];
    v158 = v9[28];
    v157 = v9[20] ^ v9[16];
    v156 = v9[24] ^ v9[20];
    v155 = v9[28] ^ v9[24];
    v154 = (2 * (v9[20] ^ v9[16])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[20] ^ v9[16]) >> 7) & 0x1010101));
    v153 = (2 * (v9[24] ^ v9[20])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[24] ^ v9[20]) >> 7) & 0x1010101));
    v152 = (2 * (v9[28] ^ v9[24])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[28] ^ v9[24]) >> 7) & 0x1010101));
    v9[16] = v9[28] ^ v154 ^ v9[24] ^ v9[20];
    v9[20] = v9[28] ^ v9[24] ^ v153 ^ v161;
    v9[24] = v9[28] ^ v152 ^ v157;
    v9[28] = v159 ^ v154 ^ v153 ^ v152 ^ v157;
    v151 = v9[17];
    v150 = v9[21];
    v149 = v9[25];
    v148 = v9[29];
    v147 = v9[21] ^ v9[17];
    v146 = v9[25] ^ v9[21];
    v145 = v9[29] ^ v9[25];
    v144 = (2 * (v9[21] ^ v9[17])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[21] ^ v9[17]) >> 7) & 0x1010101));
    v143 = (2 * (v9[25] ^ v9[21])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[25] ^ v9[21]) >> 7) & 0x1010101));
    v142 = (2 * (v9[29] ^ v9[25])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[29] ^ v9[25]) >> 7) & 0x1010101));
    v9[17] = v9[29] ^ v144 ^ v9[25] ^ v9[21];
    v9[21] = v9[29] ^ v9[25] ^ v143 ^ v151;
    v9[25] = v9[29] ^ v142 ^ v147;
    v9[29] = v149 ^ v144 ^ v143 ^ v142 ^ v147;
    v141 = v9[18];
    v140 = v9[22];
    v139 = v9[26];
    v138 = v9[30];
    v137 = v9[22] ^ v9[18];
    v136 = v9[26] ^ v9[22];
    v135 = v9[30] ^ v9[26];
    v134 = (2 * (v9[22] ^ v9[18])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[22] ^ v9[18]) >> 7) & 0x1010101));
    v133 = (2 * (v9[26] ^ v9[22])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[26] ^ v9[22]) >> 7) & 0x1010101));
    v132 = (2 * (v9[30] ^ v9[26])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[30] ^ v9[26]) >> 7) & 0x1010101));
    v9[18] = v9[30] ^ v134 ^ v9[26] ^ v9[22];
    v9[22] = v9[30] ^ v9[26] ^ v133 ^ v141;
    v9[26] = v9[30] ^ v132 ^ v137;
    v9[30] = v139 ^ v134 ^ v133 ^ v132 ^ v137;
    v131 = v9[19];
    v130 = v9[23];
    v129 = v37;
    v128 = v9[31];
    v127 = v9[23] ^ v9[19];
    v126 = v37 ^ v9[23];
    v125 = v9[31] ^ v37;
    v124 = (2 * (v9[23] ^ v9[19])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[23] ^ v9[19]) >> 7) & 0x1010101));
    v123 = (2 * (v9[27] ^ v9[23])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[27] ^ v9[23]) >> 7) & 0x1010101));
    v122 = (2 * (v9[31] ^ v9[27])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v9[31] ^ v9[27]) >> 7) & 0x1010101));
    v9[19] = v9[31] ^ v124 ^ v37 ^ v9[23];
    v9[23] = v9[31] ^ v37 ^ v123 ^ v131;
    v9[27] = v9[31] ^ v122 ^ v127;
    v9[31] = v37 ^ v124 ^ v123 ^ v122 ^ v127;
    v121 = v10;
    v120 = v14;
    v119 = v18;
    v118 = v22;
    v117 = v14 ^ v10;
    v116 = v18 ^ v14;
    v115 = v22 ^ v18;
    v114 = (2 * (v14 ^ v10)) & 0xFEFEFEFE ^ (27 * (((v14 ^ v10) >> 7) & 0x1010101));
    v113 = (2 * (v18 ^ v14)) & 0xFEFEFEFE ^ (27 * (((v18 ^ v14) >> 7) & 0x1010101));
    v112 = (2 * (v22 ^ v18)) & 0xFEFEFEFE ^ (27 * (((v22 ^ v18) >> 7) & 0x1010101));
    v10 = v22 ^ v114 ^ v18 ^ v14;
    v14 = v22 ^ v18 ^ v113 ^ v121;
    v18 = v22 ^ v112 ^ v117;
    v22 = v119 ^ v114 ^ v113 ^ v112 ^ v117;
    v111 = v11;
    v110 = v15;
    v109 = v19;
    v108 = v23;
    v107 = v15 ^ v11;
    v106 = v19 ^ v15;
    v105 = v23 ^ v19;
    v104 = (2 * (v15 ^ v11)) & 0xFEFEFEFE ^ (27 * (((v15 ^ v11) >> 7) & 0x1010101));
    v103 = (2 * (v19 ^ v15)) & 0xFEFEFEFE ^ (27 * (((v19 ^ v15) >> 7) & 0x1010101));
    v102 = (2 * (v23 ^ v19)) & 0xFEFEFEFE ^ (27 * (((v23 ^ v19) >> 7) & 0x1010101));
    v11 = v23 ^ v104 ^ v19 ^ v15;
    v15 = v23 ^ v19 ^ v103 ^ v111;
    v19 = v23 ^ v102 ^ v107;
    v23 = v109 ^ v104 ^ v103 ^ v102 ^ v107;
    v101 = v12;
    v100 = v16;
    v99 = v20;
    v98 = v24;
    v97 = v16 ^ v12;
    v96 = v20 ^ v16;
    v95 = v24 ^ v20;
    v94 = (2 * (v16 ^ v12)) & 0xFEFEFEFE ^ (27 * (((v16 ^ v12) >> 7) & 0x1010101));
    v93 = (2 * (v20 ^ v16)) & 0xFEFEFEFE ^ (27 * (((v20 ^ v16) >> 7) & 0x1010101));
    v92 = (2 * (v24 ^ v20)) & 0xFEFEFEFE ^ (27 * (((v24 ^ v20) >> 7) & 0x1010101));
    v12 = v24 ^ v94 ^ v20 ^ v16;
    v16 = v24 ^ v20 ^ v93 ^ v101;
    v20 = v24 ^ v92 ^ v97;
    v24 = v99 ^ v94 ^ v93 ^ v92 ^ v97;
    v91 = v13;
    v90 = v33;
    v89 = v21;
    v88 = v25;
    v87 = v33 ^ v13;
    v86 = v21 ^ v33;
    v85 = v25 ^ v21;
    v84 = (2 * (v17 ^ v13)) & 0xFEFEFEFE ^ (27 * (((v17 ^ v13) >> 7) & 0x1010101));
    v83 = (2 * (v21 ^ v17)) & 0xFEFEFEFE ^ (27 * (((v21 ^ v17) >> 7) & 0x1010101));
    v82 = (2 * (v25 ^ v21)) & 0xFEFEFEFE ^ (27 * (((v25 ^ v21) >> 7) & 0x1010101));
    v13 = v25 ^ v84 ^ v21 ^ v33;
    v17 = v25 ^ v21 ^ v83 ^ v91;
    v21 = v25 ^ v82 ^ v87;
    v25 = v89 ^ v84 ^ v83 ^ v82 ^ v87;
    v81 = v26;
    v80 = v30;
    v79 = v34;
    v78 = v38;
    v77 = v30 ^ v26;
    v76 = v34 ^ v30;
    v75 = v38 ^ v34;
    v74 = (2 * (v30 ^ v26)) & 0xFEFEFEFE ^ (27 * (((v30 ^ v26) >> 7) & 0x1010101));
    v73 = (2 * (v34 ^ v30)) & 0xFEFEFEFE ^ (27 * (((v34 ^ v30) >> 7) & 0x1010101));
    v72 = (2 * (v38 ^ v34)) & 0xFEFEFEFE ^ (27 * (((v38 ^ v34) >> 7) & 0x1010101));
    v26 = v38 ^ v74 ^ v34 ^ v30;
    v30 = v38 ^ v34 ^ v73 ^ v81;
    v34 = v38 ^ v72 ^ v77;
    v38 = v79 ^ v74 ^ v73 ^ v72 ^ v77;
    v71 = v27;
    v70 = v31;
    v69 = v35;
    v68 = v39;
    v67 = v31 ^ v27;
    v66 = v35 ^ v31;
    v65 = v39 ^ v35;
    v64 = (2 * (v31 ^ v27)) & 0xFEFEFEFE ^ (27 * (((v31 ^ v27) >> 7) & 0x1010101));
    v63 = (2 * (v35 ^ v31)) & 0xFEFEFEFE ^ (27 * (((v35 ^ v31) >> 7) & 0x1010101));
    v62 = (2 * (v39 ^ v35)) & 0xFEFEFEFE ^ (27 * (((v39 ^ v35) >> 7) & 0x1010101));
    v27 = v39 ^ v64 ^ v35 ^ v31;
    v31 = v39 ^ v35 ^ v63 ^ v71;
    v35 = v39 ^ v62 ^ v67;
    v39 = v69 ^ v64 ^ v63 ^ v62 ^ v67;
    v61 = v28;
    v60 = v32;
    v59 = v36;
    v58 = v40;
    v57 = v32 ^ v28;
    v56 = v36 ^ v32;
    v55 = v40 ^ v36;
    v54 = (2 * (v32 ^ v28)) & 0xFEFEFEFE ^ (27 * (((v32 ^ v28) >> 7) & 0x1010101));
    v53 = (2 * (v36 ^ v32)) & 0xFEFEFEFE ^ (27 * (((v36 ^ v32) >> 7) & 0x1010101));
    v52 = (2 * (v40 ^ v36)) & 0xFEFEFEFE ^ (27 * (((v40 ^ v36) >> 7) & 0x1010101));
    v28 = v40 ^ v54 ^ v36 ^ v32;
    v32 = v40 ^ v36 ^ v53 ^ v61;
    v36 = v40 ^ v52 ^ v57;
    v40 = v59 ^ v54 ^ v53 ^ v52 ^ v57;
    v51 = v29;
    v50 = v204;
    v49 = v203;
    v48 = v41;
    v47 = v204 ^ v29;
    v46 = v203 ^ v204;
    v45 = v41 ^ v203;
    v44 = (2 * (v204 ^ v29)) & 0xFEFEFEFE ^ (27 * (((v204 ^ v29) >> 7) & 0x1010101));
    v43 = (2 * (v203 ^ v204)) & 0xFEFEFEFE ^ (27 * (((v203 ^ v204) >> 7) & 0x1010101));
    v42 = (2 * (v41 ^ v203)) & 0xFEFEFEFE ^ (27 * (((v41 ^ v203) >> 7) & 0x1010101));
    v29 = v41 ^ v44 ^ v203 ^ v204;
    v33 = v41 ^ v203 ^ v43 ^ v51;
    v37 = v41 ^ v42 ^ v47;
    v41 = v203 ^ v44 ^ v43 ^ v42 ^ v47;
  }
  v270 = a1 + 34;
  v269 = v9;
  for ( k = 0; k <= 0x1F; ++k )
  {
    v6 = sub_2D7E9C((int)&a1[k]);
    v7 = v6 ^ v269[k] ^ v269[k + 32];
    result = v270;
    v270[k] ^= v7;
  }
  return result;
}
