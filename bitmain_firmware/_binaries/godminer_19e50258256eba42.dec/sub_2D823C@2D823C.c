void *__fastcall sub_2D823C(_DWORD *a1)
{
  void *result; // r0
  unsigned int v2; // r4
  unsigned int v3; // r4
  unsigned int v4; // r4
  unsigned int v5; // r4
  int v6; // r4
  int v7; // r4
  int v8; // r0
  int v9; // r1
  _DWORD v11[16]; // [sp+8h] [bp-4BCh] BYREF
  unsigned int v12; // [sp+48h] [bp-47Ch]
  unsigned int v13; // [sp+4Ch] [bp-478h]
  unsigned int v14; // [sp+50h] [bp-474h]
  unsigned int v15; // [sp+54h] [bp-470h]
  unsigned int v16; // [sp+58h] [bp-46Ch]
  unsigned int v17; // [sp+5Ch] [bp-468h]
  unsigned int v18; // [sp+60h] [bp-464h]
  unsigned int v19; // [sp+64h] [bp-460h]
  unsigned int v20; // [sp+68h] [bp-45Ch]
  unsigned int v21; // [sp+6Ch] [bp-458h]
  unsigned int v22; // [sp+70h] [bp-454h]
  unsigned int v23; // [sp+74h] [bp-450h]
  unsigned int v24; // [sp+78h] [bp-44Ch]
  unsigned int v25; // [sp+7Ch] [bp-448h]
  unsigned int v26; // [sp+80h] [bp-444h]
  unsigned int v27; // [sp+84h] [bp-440h]
  unsigned int v28; // [sp+88h] [bp-43Ch]
  unsigned int v29; // [sp+8Ch] [bp-438h]
  unsigned int v30; // [sp+90h] [bp-434h]
  unsigned int v31; // [sp+94h] [bp-430h]
  unsigned int v32; // [sp+98h] [bp-42Ch]
  unsigned int v33; // [sp+9Ch] [bp-428h]
  unsigned int v34; // [sp+A0h] [bp-424h]
  unsigned int v35; // [sp+A4h] [bp-420h]
  unsigned int v36; // [sp+A8h] [bp-41Ch]
  unsigned int v37; // [sp+ACh] [bp-418h]
  unsigned int v38; // [sp+B0h] [bp-414h]
  unsigned int v39; // [sp+B4h] [bp-410h]
  unsigned int v40; // [sp+B8h] [bp-40Ch]
  unsigned int v41; // [sp+BCh] [bp-408h]
  unsigned int v42; // [sp+C0h] [bp-404h]
  unsigned int v43; // [sp+C4h] [bp-400h]
  unsigned int v44; // [sp+C8h] [bp-3FCh]
  unsigned int v45; // [sp+CCh] [bp-3F8h]
  unsigned int v46; // [sp+D0h] [bp-3F4h]
  unsigned int v47; // [sp+D4h] [bp-3F0h]
  unsigned int v48; // [sp+D8h] [bp-3ECh]
  unsigned int v49; // [sp+DCh] [bp-3E8h]
  unsigned int v50; // [sp+E0h] [bp-3E4h]
  unsigned int v51; // [sp+E4h] [bp-3E0h]
  unsigned int v52; // [sp+E8h] [bp-3DCh]
  unsigned int v53; // [sp+ECh] [bp-3D8h]
  unsigned int v54; // [sp+F0h] [bp-3D4h]
  unsigned int v55; // [sp+F4h] [bp-3D0h]
  unsigned int v56; // [sp+F8h] [bp-3CCh]
  unsigned int v57; // [sp+FCh] [bp-3C8h]
  unsigned int v58; // [sp+100h] [bp-3C4h]
  unsigned int v59; // [sp+104h] [bp-3C0h]
  unsigned int v60; // [sp+108h] [bp-3BCh]
  unsigned int v61; // [sp+10Ch] [bp-3B8h]
  unsigned int v62; // [sp+110h] [bp-3B4h]
  int v63; // [sp+114h] [bp-3B0h]
  int v64; // [sp+118h] [bp-3ACh]
  int v65; // [sp+11Ch] [bp-3A8h]
  unsigned int v66; // [sp+120h] [bp-3A4h]
  unsigned int v67; // [sp+124h] [bp-3A0h]
  unsigned int v68; // [sp+128h] [bp-39Ch]
  unsigned int v69; // [sp+12Ch] [bp-398h]
  unsigned int v70; // [sp+130h] [bp-394h]
  unsigned int v71; // [sp+134h] [bp-390h]
  unsigned int v72; // [sp+138h] [bp-38Ch]
  int v73; // [sp+13Ch] [bp-388h]
  int v74; // [sp+140h] [bp-384h]
  int v75; // [sp+144h] [bp-380h]
  unsigned int v76; // [sp+148h] [bp-37Ch]
  unsigned int v77; // [sp+14Ch] [bp-378h]
  unsigned int v78; // [sp+150h] [bp-374h]
  unsigned int v79; // [sp+154h] [bp-370h]
  unsigned int v80; // [sp+158h] [bp-36Ch]
  unsigned int v81; // [sp+15Ch] [bp-368h]
  unsigned int v82; // [sp+160h] [bp-364h]
  int v83; // [sp+164h] [bp-360h]
  int v84; // [sp+168h] [bp-35Ch]
  int v85; // [sp+16Ch] [bp-358h]
  unsigned int v86; // [sp+170h] [bp-354h]
  unsigned int v87; // [sp+174h] [bp-350h]
  unsigned int v88; // [sp+178h] [bp-34Ch]
  unsigned int v89; // [sp+17Ch] [bp-348h]
  unsigned int v90; // [sp+180h] [bp-344h]
  unsigned int v91; // [sp+184h] [bp-340h]
  unsigned int v92; // [sp+188h] [bp-33Ch]
  int v93; // [sp+18Ch] [bp-338h]
  int v94; // [sp+190h] [bp-334h]
  int v95; // [sp+194h] [bp-330h]
  unsigned int v96; // [sp+198h] [bp-32Ch]
  unsigned int v97; // [sp+19Ch] [bp-328h]
  unsigned int v98; // [sp+1A0h] [bp-324h]
  unsigned int v99; // [sp+1A4h] [bp-320h]
  unsigned int v100; // [sp+1A8h] [bp-31Ch]
  unsigned int v101; // [sp+1ACh] [bp-318h]
  unsigned int v102; // [sp+1B0h] [bp-314h]
  int v103; // [sp+1B4h] [bp-310h]
  int v104; // [sp+1B8h] [bp-30Ch]
  int v105; // [sp+1BCh] [bp-308h]
  unsigned int v106; // [sp+1C0h] [bp-304h]
  unsigned int v107; // [sp+1C4h] [bp-300h]
  unsigned int v108; // [sp+1C8h] [bp-2FCh]
  unsigned int v109; // [sp+1CCh] [bp-2F8h]
  unsigned int v110; // [sp+1D0h] [bp-2F4h]
  unsigned int v111; // [sp+1D4h] [bp-2F0h]
  unsigned int v112; // [sp+1D8h] [bp-2ECh]
  int v113; // [sp+1DCh] [bp-2E8h]
  int v114; // [sp+1E0h] [bp-2E4h]
  int v115; // [sp+1E4h] [bp-2E0h]
  unsigned int v116; // [sp+1E8h] [bp-2DCh]
  unsigned int v117; // [sp+1ECh] [bp-2D8h]
  unsigned int v118; // [sp+1F0h] [bp-2D4h]
  unsigned int v119; // [sp+1F4h] [bp-2D0h]
  unsigned int v120; // [sp+1F8h] [bp-2CCh]
  unsigned int v121; // [sp+1FCh] [bp-2C8h]
  unsigned int v122; // [sp+200h] [bp-2C4h]
  int v123; // [sp+204h] [bp-2C0h]
  int v124; // [sp+208h] [bp-2BCh]
  int v125; // [sp+20Ch] [bp-2B8h]
  unsigned int v126; // [sp+210h] [bp-2B4h]
  unsigned int v127; // [sp+214h] [bp-2B0h]
  unsigned int v128; // [sp+218h] [bp-2ACh]
  unsigned int v129; // [sp+21Ch] [bp-2A8h]
  unsigned int v130; // [sp+220h] [bp-2A4h]
  unsigned int v131; // [sp+224h] [bp-2A0h]
  unsigned int v132; // [sp+228h] [bp-29Ch]
  int v133; // [sp+22Ch] [bp-298h]
  int v134; // [sp+230h] [bp-294h]
  int v135; // [sp+234h] [bp-290h]
  unsigned int v136; // [sp+238h] [bp-28Ch]
  unsigned int v137; // [sp+23Ch] [bp-288h]
  unsigned int v138; // [sp+240h] [bp-284h]
  unsigned int v139; // [sp+244h] [bp-280h]
  unsigned int v140; // [sp+248h] [bp-27Ch]
  unsigned int v141; // [sp+24Ch] [bp-278h]
  unsigned int v142; // [sp+250h] [bp-274h]
  int v143; // [sp+254h] [bp-270h]
  int v144; // [sp+258h] [bp-26Ch]
  int v145; // [sp+25Ch] [bp-268h]
  unsigned int v146; // [sp+260h] [bp-264h]
  unsigned int v147; // [sp+264h] [bp-260h]
  unsigned int v148; // [sp+268h] [bp-25Ch]
  unsigned int v149; // [sp+26Ch] [bp-258h]
  unsigned int v150; // [sp+270h] [bp-254h]
  unsigned int v151; // [sp+274h] [bp-250h]
  unsigned int v152; // [sp+278h] [bp-24Ch]
  int v153; // [sp+27Ch] [bp-248h]
  int v154; // [sp+280h] [bp-244h]
  int v155; // [sp+284h] [bp-240h]
  unsigned int v156; // [sp+288h] [bp-23Ch]
  unsigned int v157; // [sp+28Ch] [bp-238h]
  unsigned int v158; // [sp+290h] [bp-234h]
  unsigned int v159; // [sp+294h] [bp-230h]
  unsigned int v160; // [sp+298h] [bp-22Ch]
  unsigned int v161; // [sp+29Ch] [bp-228h]
  unsigned int v162; // [sp+2A0h] [bp-224h]
  int v163; // [sp+2A4h] [bp-220h]
  int v164; // [sp+2A8h] [bp-21Ch]
  int v165; // [sp+2ACh] [bp-218h]
  unsigned int v166; // [sp+2B0h] [bp-214h]
  unsigned int v167; // [sp+2B4h] [bp-210h]
  unsigned int v168; // [sp+2B8h] [bp-20Ch]
  unsigned int v169; // [sp+2BCh] [bp-208h]
  unsigned int v170; // [sp+2C0h] [bp-204h]
  unsigned int v171; // [sp+2C4h] [bp-200h]
  unsigned int v172; // [sp+2C8h] [bp-1FCh]
  int v173; // [sp+2CCh] [bp-1F8h]
  int v174; // [sp+2D0h] [bp-1F4h]
  int v175; // [sp+2D4h] [bp-1F0h]
  unsigned int v176; // [sp+2D8h] [bp-1ECh]
  unsigned int v177; // [sp+2DCh] [bp-1E8h]
  unsigned int v178; // [sp+2E0h] [bp-1E4h]
  unsigned int v179; // [sp+2E4h] [bp-1E0h]
  unsigned int v180; // [sp+2E8h] [bp-1DCh]
  unsigned int v181; // [sp+2ECh] [bp-1D8h]
  unsigned int v182; // [sp+2F0h] [bp-1D4h]
  int v183; // [sp+2F4h] [bp-1D0h]
  int v184; // [sp+2F8h] [bp-1CCh]
  int v185; // [sp+2FCh] [bp-1C8h]
  unsigned int v186; // [sp+300h] [bp-1C4h]
  int v187; // [sp+304h] [bp-1C0h]
  int v188; // [sp+308h] [bp-1BCh]
  int v189; // [sp+30Ch] [bp-1B8h]
  unsigned int v190; // [sp+310h] [bp-1B4h]
  unsigned int v191; // [sp+314h] [bp-1B0h]
  unsigned int v192; // [sp+318h] [bp-1ACh]
  int v193; // [sp+31Ch] [bp-1A8h]
  int v194; // [sp+320h] [bp-1A4h]
  int v195; // [sp+324h] [bp-1A0h]
  int v196; // [sp+328h] [bp-19Ch]
  int v197; // [sp+32Ch] [bp-198h]
  int v198; // [sp+330h] [bp-194h]
  int v199; // [sp+334h] [bp-190h]
  unsigned int v200; // [sp+338h] [bp-18Ch]
  unsigned int v201; // [sp+33Ch] [bp-188h]
  unsigned int v202; // [sp+340h] [bp-184h]
  int v203; // [sp+344h] [bp-180h]
  int v204; // [sp+348h] [bp-17Ch]
  int v205; // [sp+34Ch] [bp-178h]
  int v206; // [sp+350h] [bp-174h]
  int v207; // [sp+354h] [bp-170h]
  int v208; // [sp+358h] [bp-16Ch]
  int v209; // [sp+35Ch] [bp-168h]
  unsigned int v210; // [sp+360h] [bp-164h]
  unsigned int v211; // [sp+364h] [bp-160h]
  unsigned int v212; // [sp+368h] [bp-15Ch]
  int v213; // [sp+36Ch] [bp-158h]
  int v214; // [sp+370h] [bp-154h]
  int v215; // [sp+374h] [bp-150h]
  int v216; // [sp+378h] [bp-14Ch]
  int v217; // [sp+37Ch] [bp-148h]
  int v218; // [sp+380h] [bp-144h]
  int v219; // [sp+384h] [bp-140h]
  unsigned int v220; // [sp+388h] [bp-13Ch]
  unsigned int v221; // [sp+38Ch] [bp-138h]
  unsigned int v222; // [sp+390h] [bp-134h]
  unsigned int v223; // [sp+394h] [bp-130h]
  unsigned int v224; // [sp+398h] [bp-12Ch]
  unsigned int v225; // [sp+39Ch] [bp-128h]
  unsigned int v226; // [sp+3A0h] [bp-124h]
  unsigned int v227; // [sp+3A4h] [bp-120h]
  unsigned int v228; // [sp+3A8h] [bp-11Ch]
  unsigned int v229; // [sp+3ACh] [bp-118h]
  unsigned int v230; // [sp+3B0h] [bp-114h]
  unsigned int v231; // [sp+3B4h] [bp-110h]
  unsigned int v232; // [sp+3B8h] [bp-10Ch]
  unsigned int v233; // [sp+3BCh] [bp-108h]
  unsigned int v234; // [sp+3C0h] [bp-104h]
  unsigned int v235; // [sp+3C4h] [bp-100h]
  unsigned int v236; // [sp+3C8h] [bp-FCh]
  unsigned int v237; // [sp+3CCh] [bp-F8h]
  unsigned int v238; // [sp+3D0h] [bp-F4h]
  unsigned int v239; // [sp+3D4h] [bp-F0h]
  unsigned int v240; // [sp+3D8h] [bp-ECh]
  unsigned int v241; // [sp+3DCh] [bp-E8h]
  unsigned int v242; // [sp+3E0h] [bp-E4h]
  unsigned int v243; // [sp+3E4h] [bp-E0h]
  unsigned int v244; // [sp+3E8h] [bp-DCh]
  unsigned int v245; // [sp+3ECh] [bp-D8h]
  unsigned int v246; // [sp+3F0h] [bp-D4h]
  unsigned int v247; // [sp+3F4h] [bp-D0h]
  unsigned int v248; // [sp+3F8h] [bp-CCh]
  unsigned int v249; // [sp+3FCh] [bp-C8h]
  unsigned int v250; // [sp+400h] [bp-C4h]
  unsigned int v251; // [sp+404h] [bp-C0h]
  unsigned int v252; // [sp+408h] [bp-BCh]
  unsigned int v253; // [sp+40Ch] [bp-B8h]
  unsigned int v254; // [sp+410h] [bp-B4h]
  unsigned int v255; // [sp+414h] [bp-B0h]
  unsigned int v256; // [sp+418h] [bp-ACh]
  unsigned int v257; // [sp+41Ch] [bp-A8h]
  unsigned int v258; // [sp+420h] [bp-A4h]
  unsigned int v259; // [sp+424h] [bp-A0h]
  unsigned int v260; // [sp+428h] [bp-9Ch]
  unsigned int v261; // [sp+42Ch] [bp-98h]
  unsigned int v262; // [sp+430h] [bp-94h]
  unsigned int v263; // [sp+434h] [bp-90h]
  unsigned int v264; // [sp+438h] [bp-8Ch]
  unsigned int v265; // [sp+43Ch] [bp-88h]
  unsigned int v266; // [sp+440h] [bp-84h]
  unsigned int v267; // [sp+444h] [bp-80h]
  unsigned int v268; // [sp+448h] [bp-7Ch]
  unsigned int v269; // [sp+44Ch] [bp-78h]
  unsigned int v270; // [sp+450h] [bp-74h]
  unsigned int v271; // [sp+454h] [bp-70h]
  unsigned int v272; // [sp+458h] [bp-6Ch]
  unsigned int v273; // [sp+45Ch] [bp-68h]
  unsigned int v274; // [sp+460h] [bp-64h]
  unsigned int v275; // [sp+464h] [bp-60h]
  unsigned int v276; // [sp+468h] [bp-5Ch]
  unsigned int v277; // [sp+46Ch] [bp-58h]
  unsigned int v278; // [sp+470h] [bp-54h]
  unsigned int v279; // [sp+474h] [bp-50h]
  unsigned int v280; // [sp+478h] [bp-4Ch]
  unsigned int v281; // [sp+47Ch] [bp-48h]
  unsigned int v282; // [sp+480h] [bp-44h]
  unsigned int v283; // [sp+484h] [bp-40h]
  unsigned int v284; // [sp+488h] [bp-3Ch]
  unsigned int v285; // [sp+48Ch] [bp-38h]
  unsigned int v286; // [sp+490h] [bp-34h]
  _DWORD *v287; // [sp+494h] [bp-30h]
  _DWORD *v288; // [sp+498h] [bp-2Ch]
  unsigned int k; // [sp+49Ch] [bp-28h]
  unsigned int i; // [sp+4A0h] [bp-24h]
  unsigned int j; // [sp+4A4h] [bp-20h]
  int v292; // [sp+4A8h] [bp-1Ch]
  int v293; // [sp+4ACh] [bp-18h]
  int v294; // [sp+4B0h] [bp-14h]
  int v295; // [sp+4B4h] [bp-10h]

  v295 = a1[66];
  v294 = a1[67];
  v293 = a1[68];
  v292 = a1[69];
  result = memcpy(v11, a1 + 50, sizeof(v11));
  for ( i = 0; i <= 0xB; ++i )
  {
    v2 = i + 4;
    v11[4 * v2] = sub_2D7E9C((int)&a1[4 * i]);
    v3 = i + 4;
    v11[4 * v3 + 1] = sub_2D7E9C((int)&a1[4 * i + 1]);
    v4 = i + 4;
    v11[4 * v4 + 2] = sub_2D7E9C((int)&a1[4 * i + 2]);
    v5 = i + 4;
    result = (void *)sub_2D7E9C((int)&a1[4 * i + 3]);
    v11[4 * v5 + 3] = result;
  }
  for ( j = 0; j <= 7; ++j )
  {
    v286 = dword_57FFF8[HIBYTE(v11[3])]
         ^ dword_57F3F8[LOBYTE(v11[0])]
         ^ dword_57F7F8[BYTE1(v11[1])]
         ^ dword_57FBF8[BYTE2(v11[2])]
         ^ v295;
    v285 = dword_57FFF8[HIBYTE(v11[0])]
         ^ dword_57F3F8[LOBYTE(v11[1])]
         ^ dword_57F7F8[BYTE1(v11[2])]
         ^ dword_57FBF8[BYTE2(v11[3])]
         ^ v294;
    v284 = dword_57FFF8[HIBYTE(v11[1])]
         ^ dword_57F3F8[LOBYTE(v11[2])]
         ^ dword_57F7F8[BYTE1(v11[3])]
         ^ dword_57FBF8[BYTE2(v11[0])]
         ^ v293;
    v283 = dword_57FFF8[HIBYTE(v11[2])]
         ^ dword_57F3F8[LOBYTE(v11[3])]
         ^ dword_57F7F8[BYTE1(v11[0])]
         ^ dword_57FBF8[BYTE2(v11[1])]
         ^ v292;
    v11[0] = dword_57FFF8[HIBYTE(v283)]
           ^ dword_57F3F8[(unsigned __int8)v286]
           ^ dword_57F7F8[BYTE1(v285)]
           ^ dword_57FBF8[BYTE2(v284)];
    v11[1] = dword_57FFF8[HIBYTE(v286)]
           ^ dword_57F3F8[(unsigned __int8)v285]
           ^ dword_57F7F8[BYTE1(v284)]
           ^ dword_57FBF8[BYTE2(v283)];
    v11[2] = dword_57FFF8[HIBYTE(v285)]
           ^ dword_57F3F8[(unsigned __int8)v284]
           ^ dword_57F7F8[BYTE1(v283)]
           ^ dword_57FBF8[BYTE2(v286)];
    v11[3] = dword_57FFF8[HIBYTE(v284)]
           ^ dword_57F3F8[(unsigned __int8)v283]
           ^ dword_57F7F8[BYTE1(v286)]
           ^ dword_57FBF8[BYTE2(v285)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v282 = dword_57FFF8[HIBYTE(v11[7])]
         ^ dword_57F3F8[LOBYTE(v11[4])]
         ^ dword_57F7F8[BYTE1(v11[5])]
         ^ dword_57FBF8[BYTE2(v11[6])]
         ^ v295;
    v281 = dword_57FFF8[HIBYTE(v11[4])]
         ^ dword_57F3F8[LOBYTE(v11[5])]
         ^ dword_57F7F8[BYTE1(v11[6])]
         ^ dword_57FBF8[BYTE2(v11[7])]
         ^ v294;
    v280 = dword_57FFF8[HIBYTE(v11[5])]
         ^ dword_57F3F8[LOBYTE(v11[6])]
         ^ dword_57F7F8[BYTE1(v11[7])]
         ^ dword_57FBF8[BYTE2(v11[4])]
         ^ v293;
    v279 = dword_57FFF8[HIBYTE(v11[6])]
         ^ dword_57F3F8[LOBYTE(v11[7])]
         ^ dword_57F7F8[BYTE1(v11[4])]
         ^ dword_57FBF8[BYTE2(v11[5])]
         ^ v292;
    v11[4] = dword_57FFF8[HIBYTE(v279)]
           ^ dword_57F3F8[(unsigned __int8)v282]
           ^ dword_57F7F8[BYTE1(v281)]
           ^ dword_57FBF8[BYTE2(v280)];
    v11[5] = dword_57FFF8[HIBYTE(v282)]
           ^ dword_57F3F8[(unsigned __int8)v281]
           ^ dword_57F7F8[BYTE1(v280)]
           ^ dword_57FBF8[BYTE2(v279)];
    v11[6] = dword_57FFF8[HIBYTE(v281)]
           ^ dword_57F3F8[(unsigned __int8)v280]
           ^ dword_57F7F8[BYTE1(v279)]
           ^ dword_57FBF8[BYTE2(v282)];
    v11[7] = dword_57FFF8[HIBYTE(v280)]
           ^ dword_57F3F8[(unsigned __int8)v279]
           ^ dword_57F7F8[BYTE1(v282)]
           ^ dword_57FBF8[BYTE2(v281)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v278 = dword_57FFF8[HIBYTE(v11[11])]
         ^ dword_57F3F8[LOBYTE(v11[8])]
         ^ dword_57F7F8[BYTE1(v11[9])]
         ^ dword_57FBF8[BYTE2(v11[10])]
         ^ v295;
    v277 = dword_57FFF8[HIBYTE(v11[8])]
         ^ dword_57F3F8[LOBYTE(v11[9])]
         ^ dword_57F7F8[BYTE1(v11[10])]
         ^ dword_57FBF8[BYTE2(v11[11])]
         ^ v294;
    v276 = dword_57FFF8[HIBYTE(v11[9])]
         ^ dword_57F3F8[LOBYTE(v11[10])]
         ^ dword_57F7F8[BYTE1(v11[11])]
         ^ dword_57FBF8[BYTE2(v11[8])]
         ^ v293;
    v275 = dword_57FFF8[HIBYTE(v11[10])]
         ^ dword_57F3F8[LOBYTE(v11[11])]
         ^ dword_57F7F8[BYTE1(v11[8])]
         ^ dword_57FBF8[BYTE2(v11[9])]
         ^ v292;
    v11[8] = dword_57FFF8[HIBYTE(v275)]
           ^ dword_57F3F8[(unsigned __int8)v278]
           ^ dword_57F7F8[BYTE1(v277)]
           ^ dword_57FBF8[BYTE2(v276)];
    v11[9] = dword_57FFF8[HIBYTE(v278)]
           ^ dword_57F3F8[(unsigned __int8)v277]
           ^ dword_57F7F8[BYTE1(v276)]
           ^ dword_57FBF8[BYTE2(v275)];
    v11[10] = dword_57FFF8[HIBYTE(v277)]
            ^ dword_57F3F8[(unsigned __int8)v276]
            ^ dword_57F7F8[BYTE1(v275)]
            ^ dword_57FBF8[BYTE2(v278)];
    v11[11] = dword_57FFF8[HIBYTE(v276)]
            ^ dword_57F3F8[(unsigned __int8)v275]
            ^ dword_57F7F8[BYTE1(v278)]
            ^ dword_57FBF8[BYTE2(v277)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v274 = dword_57FFF8[HIBYTE(v11[15])]
         ^ dword_57F3F8[LOBYTE(v11[12])]
         ^ dword_57F7F8[BYTE1(v11[13])]
         ^ dword_57FBF8[BYTE2(v11[14])]
         ^ v295;
    v273 = dword_57FFF8[HIBYTE(v11[12])]
         ^ dword_57F3F8[LOBYTE(v11[13])]
         ^ dword_57F7F8[BYTE1(v11[14])]
         ^ dword_57FBF8[BYTE2(v11[15])]
         ^ v294;
    v272 = dword_57FFF8[HIBYTE(v11[13])]
         ^ dword_57F3F8[LOBYTE(v11[14])]
         ^ dword_57F7F8[BYTE1(v11[15])]
         ^ dword_57FBF8[BYTE2(v11[12])]
         ^ v293;
    v271 = dword_57FFF8[HIBYTE(v11[14])]
         ^ dword_57F3F8[LOBYTE(v11[15])]
         ^ dword_57F7F8[BYTE1(v11[12])]
         ^ dword_57FBF8[BYTE2(v11[13])]
         ^ v292;
    v11[12] = dword_57FFF8[HIBYTE(v271)]
            ^ dword_57F3F8[(unsigned __int8)v274]
            ^ dword_57F7F8[BYTE1(v273)]
            ^ dword_57FBF8[BYTE2(v272)];
    v11[13] = dword_57FFF8[HIBYTE(v274)]
            ^ dword_57F3F8[(unsigned __int8)v273]
            ^ dword_57F7F8[BYTE1(v272)]
            ^ dword_57FBF8[BYTE2(v271)];
    v11[14] = dword_57FFF8[HIBYTE(v273)]
            ^ dword_57F3F8[(unsigned __int8)v272]
            ^ dword_57F7F8[BYTE1(v271)]
            ^ dword_57FBF8[BYTE2(v274)];
    v11[15] = dword_57FFF8[HIBYTE(v272)]
            ^ dword_57F3F8[(unsigned __int8)v271]
            ^ dword_57F7F8[BYTE1(v274)]
            ^ dword_57FBF8[BYTE2(v273)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v270 = dword_57FFF8[HIBYTE(v15)]
         ^ dword_57F3F8[(unsigned __int8)v12]
         ^ dword_57F7F8[BYTE1(v13)]
         ^ dword_57FBF8[BYTE2(v14)]
         ^ v295;
    v269 = dword_57FFF8[HIBYTE(v12)]
         ^ dword_57F3F8[(unsigned __int8)v13]
         ^ dword_57F7F8[BYTE1(v14)]
         ^ dword_57FBF8[BYTE2(v15)]
         ^ v294;
    v268 = dword_57FFF8[HIBYTE(v13)]
         ^ dword_57F3F8[(unsigned __int8)v14]
         ^ dword_57F7F8[BYTE1(v15)]
         ^ dword_57FBF8[BYTE2(v12)]
         ^ v293;
    v267 = dword_57FFF8[HIBYTE(v14)]
         ^ dword_57F3F8[(unsigned __int8)v15]
         ^ dword_57F7F8[BYTE1(v12)]
         ^ dword_57FBF8[BYTE2(v13)]
         ^ v292;
    v12 = dword_57FFF8[HIBYTE(v267)]
        ^ dword_57F3F8[(unsigned __int8)v270]
        ^ dword_57F7F8[BYTE1(v269)]
        ^ dword_57FBF8[BYTE2(v268)];
    v13 = dword_57FFF8[HIBYTE(v270)]
        ^ dword_57F3F8[(unsigned __int8)v269]
        ^ dword_57F7F8[BYTE1(v268)]
        ^ dword_57FBF8[BYTE2(v267)];
    v14 = dword_57FFF8[HIBYTE(v269)]
        ^ dword_57F3F8[(unsigned __int8)v268]
        ^ dword_57F7F8[BYTE1(v267)]
        ^ dword_57FBF8[BYTE2(v270)];
    v15 = dword_57FFF8[HIBYTE(v268)]
        ^ dword_57F3F8[(unsigned __int8)v267]
        ^ dword_57F7F8[BYTE1(v270)]
        ^ dword_57FBF8[BYTE2(v269)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v266 = dword_57FFF8[HIBYTE(v19)]
         ^ dword_57F3F8[(unsigned __int8)v16]
         ^ dword_57F7F8[BYTE1(v17)]
         ^ dword_57FBF8[BYTE2(v18)]
         ^ v295;
    v265 = dword_57FFF8[HIBYTE(v16)]
         ^ dword_57F3F8[(unsigned __int8)v17]
         ^ dword_57F7F8[BYTE1(v18)]
         ^ dword_57FBF8[BYTE2(v19)]
         ^ v294;
    v264 = dword_57FFF8[HIBYTE(v17)]
         ^ dword_57F3F8[(unsigned __int8)v18]
         ^ dword_57F7F8[BYTE1(v19)]
         ^ dword_57FBF8[BYTE2(v16)]
         ^ v293;
    v263 = dword_57FFF8[HIBYTE(v18)]
         ^ dword_57F3F8[(unsigned __int8)v19]
         ^ dword_57F7F8[BYTE1(v16)]
         ^ dword_57FBF8[BYTE2(v17)]
         ^ v292;
    v16 = dword_57FFF8[HIBYTE(v263)]
        ^ dword_57F3F8[(unsigned __int8)v266]
        ^ dword_57F7F8[BYTE1(v265)]
        ^ dword_57FBF8[BYTE2(v264)];
    v17 = dword_57FFF8[HIBYTE(v266)]
        ^ dword_57F3F8[(unsigned __int8)v265]
        ^ dword_57F7F8[BYTE1(v264)]
        ^ dword_57FBF8[BYTE2(v263)];
    v18 = dword_57FFF8[HIBYTE(v265)]
        ^ dword_57F3F8[(unsigned __int8)v264]
        ^ dword_57F7F8[BYTE1(v263)]
        ^ dword_57FBF8[BYTE2(v266)];
    v19 = dword_57FFF8[HIBYTE(v264)]
        ^ dword_57F3F8[(unsigned __int8)v263]
        ^ dword_57F7F8[BYTE1(v266)]
        ^ dword_57FBF8[BYTE2(v265)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v262 = dword_57FFF8[HIBYTE(v23)]
         ^ dword_57F3F8[(unsigned __int8)v20]
         ^ dword_57F7F8[BYTE1(v21)]
         ^ dword_57FBF8[BYTE2(v22)]
         ^ v295;
    v261 = dword_57FFF8[HIBYTE(v20)]
         ^ dword_57F3F8[(unsigned __int8)v21]
         ^ dword_57F7F8[BYTE1(v22)]
         ^ dword_57FBF8[BYTE2(v23)]
         ^ v294;
    v260 = dword_57FFF8[HIBYTE(v21)]
         ^ dword_57F3F8[(unsigned __int8)v22]
         ^ dword_57F7F8[BYTE1(v23)]
         ^ dword_57FBF8[BYTE2(v20)]
         ^ v293;
    v259 = dword_57FFF8[HIBYTE(v22)]
         ^ dword_57F3F8[(unsigned __int8)v23]
         ^ dword_57F7F8[BYTE1(v20)]
         ^ dword_57FBF8[BYTE2(v21)]
         ^ v292;
    v20 = dword_57FFF8[HIBYTE(v259)]
        ^ dword_57F3F8[(unsigned __int8)v262]
        ^ dword_57F7F8[BYTE1(v261)]
        ^ dword_57FBF8[BYTE2(v260)];
    v21 = dword_57FFF8[HIBYTE(v262)]
        ^ dword_57F3F8[(unsigned __int8)v261]
        ^ dword_57F7F8[BYTE1(v260)]
        ^ dword_57FBF8[BYTE2(v259)];
    v22 = dword_57FFF8[HIBYTE(v261)]
        ^ dword_57F3F8[(unsigned __int8)v260]
        ^ dword_57F7F8[BYTE1(v259)]
        ^ dword_57FBF8[BYTE2(v262)];
    v23 = dword_57FFF8[HIBYTE(v260)]
        ^ dword_57F3F8[(unsigned __int8)v259]
        ^ dword_57F7F8[BYTE1(v262)]
        ^ dword_57FBF8[BYTE2(v261)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v258 = dword_57FFF8[HIBYTE(v27)]
         ^ dword_57F3F8[(unsigned __int8)v24]
         ^ dword_57F7F8[BYTE1(v25)]
         ^ dword_57FBF8[BYTE2(v26)]
         ^ v295;
    v257 = dword_57FFF8[HIBYTE(v24)]
         ^ dword_57F3F8[(unsigned __int8)v25]
         ^ dword_57F7F8[BYTE1(v26)]
         ^ dword_57FBF8[BYTE2(v27)]
         ^ v294;
    v256 = dword_57FFF8[HIBYTE(v25)]
         ^ dword_57F3F8[(unsigned __int8)v26]
         ^ dword_57F7F8[BYTE1(v27)]
         ^ dword_57FBF8[BYTE2(v24)]
         ^ v293;
    v255 = dword_57FFF8[HIBYTE(v26)]
         ^ dword_57F3F8[(unsigned __int8)v27]
         ^ dword_57F7F8[BYTE1(v24)]
         ^ dword_57FBF8[BYTE2(v25)]
         ^ v292;
    v24 = dword_57FFF8[HIBYTE(v255)]
        ^ dword_57F3F8[(unsigned __int8)v258]
        ^ dword_57F7F8[BYTE1(v257)]
        ^ dword_57FBF8[BYTE2(v256)];
    v25 = dword_57FFF8[HIBYTE(v258)]
        ^ dword_57F3F8[(unsigned __int8)v257]
        ^ dword_57F7F8[BYTE1(v256)]
        ^ dword_57FBF8[BYTE2(v255)];
    v26 = dword_57FFF8[HIBYTE(v257)]
        ^ dword_57F3F8[(unsigned __int8)v256]
        ^ dword_57F7F8[BYTE1(v255)]
        ^ dword_57FBF8[BYTE2(v258)];
    v27 = dword_57FFF8[HIBYTE(v256)]
        ^ dword_57F3F8[(unsigned __int8)v255]
        ^ dword_57F7F8[BYTE1(v258)]
        ^ dword_57FBF8[BYTE2(v257)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v254 = dword_57FFF8[HIBYTE(v31)]
         ^ dword_57F3F8[(unsigned __int8)v28]
         ^ dword_57F7F8[BYTE1(v29)]
         ^ dword_57FBF8[BYTE2(v30)]
         ^ v295;
    v253 = dword_57FFF8[HIBYTE(v28)]
         ^ dword_57F3F8[(unsigned __int8)v29]
         ^ dword_57F7F8[BYTE1(v30)]
         ^ dword_57FBF8[BYTE2(v31)]
         ^ v294;
    v252 = dword_57FFF8[HIBYTE(v29)]
         ^ dword_57F3F8[(unsigned __int8)v30]
         ^ dword_57F7F8[BYTE1(v31)]
         ^ dword_57FBF8[BYTE2(v28)]
         ^ v293;
    v251 = dword_57FFF8[HIBYTE(v30)]
         ^ dword_57F3F8[(unsigned __int8)v31]
         ^ dword_57F7F8[BYTE1(v28)]
         ^ dword_57FBF8[BYTE2(v29)]
         ^ v292;
    v28 = dword_57FFF8[HIBYTE(v251)]
        ^ dword_57F3F8[(unsigned __int8)v254]
        ^ dword_57F7F8[BYTE1(v253)]
        ^ dword_57FBF8[BYTE2(v252)];
    v29 = dword_57FFF8[HIBYTE(v254)]
        ^ dword_57F3F8[(unsigned __int8)v253]
        ^ dword_57F7F8[BYTE1(v252)]
        ^ dword_57FBF8[BYTE2(v251)];
    v30 = dword_57FFF8[HIBYTE(v253)]
        ^ dword_57F3F8[(unsigned __int8)v252]
        ^ dword_57F7F8[BYTE1(v251)]
        ^ dword_57FBF8[BYTE2(v254)];
    v31 = dword_57FFF8[HIBYTE(v252)]
        ^ dword_57F3F8[(unsigned __int8)v251]
        ^ dword_57F7F8[BYTE1(v254)]
        ^ dword_57FBF8[BYTE2(v253)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v250 = dword_57FFF8[HIBYTE(v35)]
         ^ dword_57F3F8[(unsigned __int8)v32]
         ^ dword_57F7F8[BYTE1(v33)]
         ^ dword_57FBF8[BYTE2(v34)]
         ^ v295;
    v249 = dword_57FFF8[HIBYTE(v32)]
         ^ dword_57F3F8[(unsigned __int8)v33]
         ^ dword_57F7F8[BYTE1(v34)]
         ^ dword_57FBF8[BYTE2(v35)]
         ^ v294;
    v248 = dword_57FFF8[HIBYTE(v33)]
         ^ dword_57F3F8[(unsigned __int8)v34]
         ^ dword_57F7F8[BYTE1(v35)]
         ^ dword_57FBF8[BYTE2(v32)]
         ^ v293;
    v247 = dword_57FFF8[HIBYTE(v34)]
         ^ dword_57F3F8[(unsigned __int8)v35]
         ^ dword_57F7F8[BYTE1(v32)]
         ^ dword_57FBF8[BYTE2(v33)]
         ^ v292;
    v32 = dword_57FFF8[HIBYTE(v247)]
        ^ dword_57F3F8[(unsigned __int8)v250]
        ^ dword_57F7F8[BYTE1(v249)]
        ^ dword_57FBF8[BYTE2(v248)];
    v33 = dword_57FFF8[HIBYTE(v250)]
        ^ dword_57F3F8[(unsigned __int8)v249]
        ^ dword_57F7F8[BYTE1(v248)]
        ^ dword_57FBF8[BYTE2(v247)];
    v34 = dword_57FFF8[HIBYTE(v249)]
        ^ dword_57F3F8[(unsigned __int8)v248]
        ^ dword_57F7F8[BYTE1(v247)]
        ^ dword_57FBF8[BYTE2(v250)];
    v35 = dword_57FFF8[HIBYTE(v248)]
        ^ dword_57F3F8[(unsigned __int8)v247]
        ^ dword_57F7F8[BYTE1(v250)]
        ^ dword_57FBF8[BYTE2(v249)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v246 = dword_57FFF8[HIBYTE(v39)]
         ^ dword_57F3F8[(unsigned __int8)v36]
         ^ dword_57F7F8[BYTE1(v37)]
         ^ dword_57FBF8[BYTE2(v38)]
         ^ v295;
    v245 = dword_57FFF8[HIBYTE(v36)]
         ^ dword_57F3F8[(unsigned __int8)v37]
         ^ dword_57F7F8[BYTE1(v38)]
         ^ dword_57FBF8[BYTE2(v39)]
         ^ v294;
    v244 = dword_57FFF8[HIBYTE(v37)]
         ^ dword_57F3F8[(unsigned __int8)v38]
         ^ dword_57F7F8[BYTE1(v39)]
         ^ dword_57FBF8[BYTE2(v36)]
         ^ v293;
    v243 = dword_57FFF8[HIBYTE(v38)]
         ^ dword_57F3F8[(unsigned __int8)v39]
         ^ dword_57F7F8[BYTE1(v36)]
         ^ dword_57FBF8[BYTE2(v37)]
         ^ v292;
    v36 = dword_57FFF8[HIBYTE(v243)]
        ^ dword_57F3F8[(unsigned __int8)v246]
        ^ dword_57F7F8[BYTE1(v245)]
        ^ dword_57FBF8[BYTE2(v244)];
    v37 = dword_57FFF8[HIBYTE(v246)]
        ^ dword_57F3F8[(unsigned __int8)v245]
        ^ dword_57F7F8[BYTE1(v244)]
        ^ dword_57FBF8[BYTE2(v243)];
    v38 = dword_57FFF8[HIBYTE(v245)]
        ^ dword_57F3F8[(unsigned __int8)v244]
        ^ dword_57F7F8[BYTE1(v243)]
        ^ dword_57FBF8[BYTE2(v246)];
    v39 = dword_57FFF8[HIBYTE(v244)]
        ^ dword_57F3F8[(unsigned __int8)v243]
        ^ dword_57F7F8[BYTE1(v246)]
        ^ dword_57FBF8[BYTE2(v245)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v242 = dword_57FFF8[HIBYTE(v43)]
         ^ dword_57F3F8[(unsigned __int8)v40]
         ^ dword_57F7F8[BYTE1(v41)]
         ^ dword_57FBF8[BYTE2(v42)]
         ^ v295;
    v241 = dword_57FFF8[HIBYTE(v40)]
         ^ dword_57F3F8[(unsigned __int8)v41]
         ^ dword_57F7F8[BYTE1(v42)]
         ^ dword_57FBF8[BYTE2(v43)]
         ^ v294;
    v240 = dword_57FFF8[HIBYTE(v41)]
         ^ dword_57F3F8[(unsigned __int8)v42]
         ^ dword_57F7F8[BYTE1(v43)]
         ^ dword_57FBF8[BYTE2(v40)]
         ^ v293;
    v239 = dword_57FFF8[HIBYTE(v42)]
         ^ dword_57F3F8[(unsigned __int8)v43]
         ^ dword_57F7F8[BYTE1(v40)]
         ^ dword_57FBF8[BYTE2(v41)]
         ^ v292;
    v40 = dword_57FFF8[HIBYTE(v239)]
        ^ dword_57F3F8[(unsigned __int8)v242]
        ^ dword_57F7F8[BYTE1(v241)]
        ^ dword_57FBF8[BYTE2(v240)];
    v41 = dword_57FFF8[HIBYTE(v242)]
        ^ dword_57F3F8[(unsigned __int8)v241]
        ^ dword_57F7F8[BYTE1(v240)]
        ^ dword_57FBF8[BYTE2(v239)];
    v42 = dword_57FFF8[HIBYTE(v241)]
        ^ dword_57F3F8[(unsigned __int8)v240]
        ^ dword_57F7F8[BYTE1(v239)]
        ^ dword_57FBF8[BYTE2(v242)];
    v43 = dword_57FFF8[HIBYTE(v240)]
        ^ dword_57F3F8[(unsigned __int8)v239]
        ^ dword_57F7F8[BYTE1(v242)]
        ^ dword_57FBF8[BYTE2(v241)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v238 = dword_57FFF8[HIBYTE(v47)]
         ^ dword_57F3F8[(unsigned __int8)v44]
         ^ dword_57F7F8[BYTE1(v45)]
         ^ dword_57FBF8[BYTE2(v46)]
         ^ v295;
    v237 = dword_57FFF8[HIBYTE(v44)]
         ^ dword_57F3F8[(unsigned __int8)v45]
         ^ dword_57F7F8[BYTE1(v46)]
         ^ dword_57FBF8[BYTE2(v47)]
         ^ v294;
    v236 = dword_57FFF8[HIBYTE(v45)]
         ^ dword_57F3F8[(unsigned __int8)v46]
         ^ dword_57F7F8[BYTE1(v47)]
         ^ dword_57FBF8[BYTE2(v44)]
         ^ v293;
    v235 = dword_57FFF8[HIBYTE(v46)]
         ^ dword_57F3F8[(unsigned __int8)v47]
         ^ dword_57F7F8[BYTE1(v44)]
         ^ dword_57FBF8[BYTE2(v45)]
         ^ v292;
    v44 = dword_57FFF8[HIBYTE(v235)]
        ^ dword_57F3F8[(unsigned __int8)v238]
        ^ dword_57F7F8[BYTE1(v237)]
        ^ dword_57FBF8[BYTE2(v236)];
    v45 = dword_57FFF8[HIBYTE(v238)]
        ^ dword_57F3F8[(unsigned __int8)v237]
        ^ dword_57F7F8[BYTE1(v236)]
        ^ dword_57FBF8[BYTE2(v235)];
    v46 = dword_57FFF8[HIBYTE(v237)]
        ^ dword_57F3F8[(unsigned __int8)v236]
        ^ dword_57F7F8[BYTE1(v235)]
        ^ dword_57FBF8[BYTE2(v238)];
    v47 = dword_57FFF8[HIBYTE(v236)]
        ^ dword_57F3F8[(unsigned __int8)v235]
        ^ dword_57F7F8[BYTE1(v238)]
        ^ dword_57FBF8[BYTE2(v237)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v234 = dword_57FFF8[HIBYTE(v51)]
         ^ dword_57F3F8[(unsigned __int8)v48]
         ^ dword_57F7F8[BYTE1(v49)]
         ^ dword_57FBF8[BYTE2(v50)]
         ^ v295;
    v233 = dword_57FFF8[HIBYTE(v48)]
         ^ dword_57F3F8[(unsigned __int8)v49]
         ^ dword_57F7F8[BYTE1(v50)]
         ^ dword_57FBF8[BYTE2(v51)]
         ^ v294;
    v232 = dword_57FFF8[HIBYTE(v49)]
         ^ dword_57F3F8[(unsigned __int8)v50]
         ^ dword_57F7F8[BYTE1(v51)]
         ^ dword_57FBF8[BYTE2(v48)]
         ^ v293;
    v231 = dword_57FFF8[HIBYTE(v50)]
         ^ dword_57F3F8[(unsigned __int8)v51]
         ^ dword_57F7F8[BYTE1(v48)]
         ^ dword_57FBF8[BYTE2(v49)]
         ^ v292;
    v48 = dword_57FFF8[HIBYTE(v231)]
        ^ dword_57F3F8[(unsigned __int8)v234]
        ^ dword_57F7F8[BYTE1(v233)]
        ^ dword_57FBF8[BYTE2(v232)];
    v49 = dword_57FFF8[HIBYTE(v234)]
        ^ dword_57F3F8[(unsigned __int8)v233]
        ^ dword_57F7F8[BYTE1(v232)]
        ^ dword_57FBF8[BYTE2(v231)];
    v50 = dword_57FFF8[HIBYTE(v233)]
        ^ dword_57F3F8[(unsigned __int8)v232]
        ^ dword_57F7F8[BYTE1(v231)]
        ^ dword_57FBF8[BYTE2(v234)];
    v51 = dword_57FFF8[HIBYTE(v232)]
        ^ dword_57F3F8[(unsigned __int8)v231]
        ^ dword_57F7F8[BYTE1(v234)]
        ^ dword_57FBF8[BYTE2(v233)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v230 = dword_57FFF8[HIBYTE(v55)]
         ^ dword_57F3F8[(unsigned __int8)v52]
         ^ dword_57F7F8[BYTE1(v53)]
         ^ dword_57FBF8[BYTE2(v54)]
         ^ v295;
    v229 = dword_57FFF8[HIBYTE(v52)]
         ^ dword_57F3F8[(unsigned __int8)v53]
         ^ dword_57F7F8[BYTE1(v54)]
         ^ dword_57FBF8[BYTE2(v55)]
         ^ v294;
    v228 = dword_57FFF8[HIBYTE(v53)]
         ^ dword_57F3F8[(unsigned __int8)v54]
         ^ dword_57F7F8[BYTE1(v55)]
         ^ dword_57FBF8[BYTE2(v52)]
         ^ v293;
    v227 = dword_57FFF8[HIBYTE(v54)]
         ^ dword_57F3F8[(unsigned __int8)v55]
         ^ dword_57F7F8[BYTE1(v52)]
         ^ dword_57FBF8[BYTE2(v53)]
         ^ v292;
    v52 = dword_57FFF8[HIBYTE(v227)]
        ^ dword_57F3F8[(unsigned __int8)v230]
        ^ dword_57F7F8[BYTE1(v229)]
        ^ dword_57FBF8[BYTE2(v228)];
    v53 = dword_57FFF8[HIBYTE(v230)]
        ^ dword_57F3F8[(unsigned __int8)v229]
        ^ dword_57F7F8[BYTE1(v228)]
        ^ dword_57FBF8[BYTE2(v227)];
    v54 = dword_57FFF8[HIBYTE(v229)]
        ^ dword_57F3F8[(unsigned __int8)v228]
        ^ dword_57F7F8[BYTE1(v227)]
        ^ dword_57FBF8[BYTE2(v230)];
    v55 = dword_57FFF8[HIBYTE(v228)]
        ^ dword_57F3F8[(unsigned __int8)v227]
        ^ dword_57F7F8[BYTE1(v230)]
        ^ dword_57FBF8[BYTE2(v229)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v226 = dword_57FFF8[HIBYTE(v59)]
         ^ dword_57F3F8[(unsigned __int8)v56]
         ^ dword_57F7F8[BYTE1(v57)]
         ^ dword_57FBF8[BYTE2(v58)]
         ^ v295;
    v225 = dword_57FFF8[HIBYTE(v56)]
         ^ dword_57F3F8[(unsigned __int8)v57]
         ^ dword_57F7F8[BYTE1(v58)]
         ^ dword_57FBF8[BYTE2(v59)]
         ^ v294;
    v224 = dword_57FFF8[HIBYTE(v57)]
         ^ dword_57F3F8[(unsigned __int8)v58]
         ^ dword_57F7F8[BYTE1(v59)]
         ^ dword_57FBF8[BYTE2(v56)]
         ^ v293;
    v223 = dword_57FFF8[HIBYTE(v58)]
         ^ dword_57F3F8[(unsigned __int8)v59]
         ^ dword_57F7F8[BYTE1(v56)]
         ^ dword_57FBF8[BYTE2(v57)]
         ^ v292;
    v56 = dword_57FFF8[HIBYTE(v223)]
        ^ dword_57F3F8[(unsigned __int8)v226]
        ^ dword_57F7F8[BYTE1(v225)]
        ^ dword_57FBF8[BYTE2(v224)];
    v57 = dword_57FFF8[HIBYTE(v226)]
        ^ dword_57F3F8[(unsigned __int8)v225]
        ^ dword_57F7F8[BYTE1(v224)]
        ^ dword_57FBF8[BYTE2(v223)];
    v58 = dword_57FFF8[HIBYTE(v225)]
        ^ dword_57F3F8[(unsigned __int8)v224]
        ^ dword_57F7F8[BYTE1(v223)]
        ^ dword_57FBF8[BYTE2(v226)];
    v59 = dword_57FFF8[HIBYTE(v224)]
        ^ dword_57F3F8[(unsigned __int8)v223]
        ^ dword_57F7F8[BYTE1(v226)]
        ^ dword_57FBF8[BYTE2(v225)];
    if ( !++v295 && !++v294 && !++v293 )
      ++v292;
    v222 = v11[4];
    v11[4] = v16;
    v16 = v32;
    v32 = v48;
    v48 = v222;
    v222 = v11[5];
    v11[5] = v17;
    v17 = v33;
    v33 = v49;
    v49 = v222;
    v222 = v11[6];
    v11[6] = v18;
    v18 = v34;
    v34 = v50;
    v50 = v222;
    v222 = v11[7];
    v11[7] = v19;
    v19 = v35;
    v35 = v51;
    v221 = v11[8];
    v11[8] = v36;
    v36 = v221;
    v221 = v20;
    v20 = v52;
    v52 = v221;
    v221 = v11[9];
    v11[9] = v37;
    v37 = v221;
    v221 = v21;
    v21 = v53;
    v53 = v221;
    v221 = v11[10];
    v11[10] = v38;
    v38 = v221;
    v221 = v22;
    v22 = v54;
    v54 = v221;
    v221 = v11[11];
    v11[11] = v39;
    v39 = v221;
    v221 = v23;
    v23 = v55;
    v220 = v56;
    v56 = v40;
    v40 = v24;
    v24 = v11[12];
    v11[12] = v220;
    v220 = v57;
    v57 = v41;
    v41 = v25;
    v25 = v11[13];
    v11[13] = v220;
    v220 = v58;
    v58 = v42;
    v42 = v26;
    v26 = v11[14];
    v11[14] = v220;
    v220 = v59;
    v59 = v43;
    v43 = v27;
    v27 = v11[15];
    v219 = v11[0];
    v218 = v11[4];
    v217 = v11[8];
    v216 = v11[12];
    v215 = v11[4] ^ v11[0];
    v214 = v11[8] ^ v11[4];
    v213 = v11[12] ^ v11[8];
    v212 = (2 * (v11[4] ^ v11[0])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[4] ^ v11[0]) >> 7) & 0x1010101));
    v211 = (2 * (v11[8] ^ v11[4])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[8] ^ v11[4]) >> 7) & 0x1010101));
    v210 = (2 * (v11[12] ^ v11[8])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[12] ^ v11[8]) >> 7) & 0x1010101));
    v11[0] = v11[12] ^ v212 ^ v11[8] ^ v11[4];
    v11[4] = v11[12] ^ v11[8] ^ v211 ^ v219;
    v11[8] = v11[12] ^ v210 ^ v215;
    v11[12] = v217 ^ v212 ^ v211 ^ v210 ^ v215;
    v209 = v11[1];
    v208 = v11[5];
    v207 = v11[9];
    v206 = v11[13];
    v205 = v11[5] ^ v11[1];
    v204 = v11[9] ^ v11[5];
    v203 = v11[13] ^ v11[9];
    v202 = (2 * (v11[5] ^ v11[1])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[5] ^ v11[1]) >> 7) & 0x1010101));
    v201 = (2 * (v11[9] ^ v11[5])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[9] ^ v11[5]) >> 7) & 0x1010101));
    v200 = (2 * (v11[13] ^ v11[9])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[13] ^ v11[9]) >> 7) & 0x1010101));
    v11[1] = v11[13] ^ v202 ^ v11[9] ^ v11[5];
    v11[5] = v11[13] ^ v11[9] ^ v201 ^ v209;
    v11[9] = v11[13] ^ v200 ^ v205;
    v11[13] = v207 ^ v202 ^ v201 ^ v200 ^ v205;
    v199 = v11[2];
    v198 = v11[6];
    v197 = v11[10];
    v196 = v11[14];
    v195 = v11[6] ^ v11[2];
    v194 = v11[10] ^ v11[6];
    v193 = v11[14] ^ v11[10];
    v192 = (2 * (v11[6] ^ v11[2])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[6] ^ v11[2]) >> 7) & 0x1010101));
    v191 = (2 * (v11[10] ^ v11[6])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[10] ^ v11[6]) >> 7) & 0x1010101));
    v190 = (2 * (v11[14] ^ v11[10])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[14] ^ v11[10]) >> 7) & 0x1010101));
    v11[2] = v11[14] ^ v192 ^ v11[10] ^ v11[6];
    v11[6] = v11[14] ^ v11[10] ^ v191 ^ v199;
    v11[10] = v11[14] ^ v190 ^ v195;
    v11[14] = v197 ^ v192 ^ v191 ^ v190 ^ v195;
    v189 = v11[3];
    v188 = v11[7];
    v187 = v11[11];
    v186 = v220;
    v185 = v11[7] ^ v11[3];
    v184 = v11[11] ^ v11[7];
    v183 = v220 ^ v11[11];
    v182 = (2 * (v11[7] ^ v11[3])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[7] ^ v11[3]) >> 7) & 0x1010101));
    v181 = (2 * (v11[11] ^ v11[7])) & 0xFEFEFEFE ^ (27 * (((unsigned int)(v11[11] ^ v11[7]) >> 7) & 0x1010101));
    v180 = (2 * (v220 ^ v11[11])) & 0xFEFEFEFE ^ (27 * (((v220 ^ v11[11]) >> 7) & 0x1010101));
    v11[3] = v220 ^ v182 ^ v11[11] ^ v11[7];
    v11[7] = v220 ^ v11[11] ^ v181 ^ v189;
    v11[11] = v220 ^ v180 ^ v185;
    v11[15] = v187 ^ v182 ^ v181 ^ v180 ^ v185;
    v179 = v12;
    v178 = v16;
    v177 = v20;
    v176 = v24;
    v175 = v16 ^ v12;
    v174 = v20 ^ v16;
    v173 = v24 ^ v20;
    v172 = (2 * (v16 ^ v12)) & 0xFEFEFEFE ^ (27 * (((v16 ^ v12) >> 7) & 0x1010101));
    v171 = (2 * (v20 ^ v16)) & 0xFEFEFEFE ^ (27 * (((v20 ^ v16) >> 7) & 0x1010101));
    v170 = (2 * (v24 ^ v20)) & 0xFEFEFEFE ^ (27 * (((v24 ^ v20) >> 7) & 0x1010101));
    v12 = v24 ^ v172 ^ v20 ^ v16;
    v16 = v24 ^ v20 ^ v171 ^ v179;
    v20 = v24 ^ v170 ^ v175;
    v24 = v177 ^ v172 ^ v171 ^ v170 ^ v175;
    v169 = v13;
    v168 = v17;
    v167 = v21;
    v166 = v25;
    v165 = v17 ^ v13;
    v164 = v21 ^ v17;
    v163 = v25 ^ v21;
    v162 = (2 * (v17 ^ v13)) & 0xFEFEFEFE ^ (27 * (((v17 ^ v13) >> 7) & 0x1010101));
    v161 = (2 * (v21 ^ v17)) & 0xFEFEFEFE ^ (27 * (((v21 ^ v17) >> 7) & 0x1010101));
    v160 = (2 * (v25 ^ v21)) & 0xFEFEFEFE ^ (27 * (((v25 ^ v21) >> 7) & 0x1010101));
    v13 = v25 ^ v162 ^ v21 ^ v17;
    v17 = v25 ^ v21 ^ v161 ^ v169;
    v21 = v25 ^ v160 ^ v165;
    v25 = v167 ^ v162 ^ v161 ^ v160 ^ v165;
    v159 = v14;
    v158 = v18;
    v157 = v22;
    v156 = v26;
    v155 = v18 ^ v14;
    v154 = v22 ^ v18;
    v153 = v26 ^ v22;
    v152 = (2 * (v18 ^ v14)) & 0xFEFEFEFE ^ (27 * (((v18 ^ v14) >> 7) & 0x1010101));
    v151 = (2 * (v22 ^ v18)) & 0xFEFEFEFE ^ (27 * (((v22 ^ v18) >> 7) & 0x1010101));
    v150 = (2 * (v26 ^ v22)) & 0xFEFEFEFE ^ (27 * (((v26 ^ v22) >> 7) & 0x1010101));
    v14 = v26 ^ v152 ^ v22 ^ v18;
    v18 = v26 ^ v22 ^ v151 ^ v159;
    v22 = v26 ^ v150 ^ v155;
    v26 = v157 ^ v152 ^ v151 ^ v150 ^ v155;
    v149 = v15;
    v148 = v19;
    v147 = v55;
    v146 = v27;
    v145 = v19 ^ v15;
    v144 = v55 ^ v19;
    v143 = v27 ^ v55;
    v142 = (2 * (v19 ^ v15)) & 0xFEFEFEFE ^ (27 * (((v19 ^ v15) >> 7) & 0x1010101));
    v141 = (2 * (v23 ^ v19)) & 0xFEFEFEFE ^ (27 * (((v23 ^ v19) >> 7) & 0x1010101));
    v140 = (2 * (v27 ^ v23)) & 0xFEFEFEFE ^ (27 * (((v27 ^ v23) >> 7) & 0x1010101));
    v15 = v27 ^ v142 ^ v55 ^ v19;
    v19 = v27 ^ v55 ^ v141 ^ v149;
    v23 = v27 ^ v140 ^ v145;
    v27 = v55 ^ v142 ^ v141 ^ v140 ^ v145;
    v139 = v28;
    v138 = v32;
    v137 = v36;
    v136 = v40;
    v135 = v32 ^ v28;
    v134 = v36 ^ v32;
    v133 = v40 ^ v36;
    v132 = (2 * (v32 ^ v28)) & 0xFEFEFEFE ^ (27 * (((v32 ^ v28) >> 7) & 0x1010101));
    v131 = (2 * (v36 ^ v32)) & 0xFEFEFEFE ^ (27 * (((v36 ^ v32) >> 7) & 0x1010101));
    v130 = (2 * (v40 ^ v36)) & 0xFEFEFEFE ^ (27 * (((v40 ^ v36) >> 7) & 0x1010101));
    v28 = v40 ^ v132 ^ v36 ^ v32;
    v32 = v40 ^ v36 ^ v131 ^ v139;
    v36 = v40 ^ v130 ^ v135;
    v40 = v137 ^ v132 ^ v131 ^ v130 ^ v135;
    v129 = v29;
    v128 = v33;
    v127 = v37;
    v126 = v41;
    v125 = v33 ^ v29;
    v124 = v37 ^ v33;
    v123 = v41 ^ v37;
    v122 = (2 * (v33 ^ v29)) & 0xFEFEFEFE ^ (27 * (((v33 ^ v29) >> 7) & 0x1010101));
    v121 = (2 * (v37 ^ v33)) & 0xFEFEFEFE ^ (27 * (((v37 ^ v33) >> 7) & 0x1010101));
    v120 = (2 * (v41 ^ v37)) & 0xFEFEFEFE ^ (27 * (((v41 ^ v37) >> 7) & 0x1010101));
    v29 = v41 ^ v122 ^ v37 ^ v33;
    v33 = v41 ^ v37 ^ v121 ^ v129;
    v37 = v41 ^ v120 ^ v125;
    v41 = v127 ^ v122 ^ v121 ^ v120 ^ v125;
    v119 = v30;
    v118 = v34;
    v117 = v38;
    v116 = v42;
    v115 = v34 ^ v30;
    v114 = v38 ^ v34;
    v113 = v42 ^ v38;
    v112 = (2 * (v34 ^ v30)) & 0xFEFEFEFE ^ (27 * (((v34 ^ v30) >> 7) & 0x1010101));
    v111 = (2 * (v38 ^ v34)) & 0xFEFEFEFE ^ (27 * (((v38 ^ v34) >> 7) & 0x1010101));
    v110 = (2 * (v42 ^ v38)) & 0xFEFEFEFE ^ (27 * (((v42 ^ v38) >> 7) & 0x1010101));
    v30 = v42 ^ v112 ^ v38 ^ v34;
    v34 = v42 ^ v38 ^ v111 ^ v119;
    v38 = v42 ^ v110 ^ v115;
    v42 = v117 ^ v112 ^ v111 ^ v110 ^ v115;
    v109 = v31;
    v108 = v51;
    v107 = v39;
    v106 = v43;
    v105 = v51 ^ v31;
    v104 = v39 ^ v51;
    v103 = v43 ^ v39;
    v102 = (2 * (v35 ^ v31)) & 0xFEFEFEFE ^ (27 * (((v35 ^ v31) >> 7) & 0x1010101));
    v101 = (2 * (v39 ^ v35)) & 0xFEFEFEFE ^ (27 * (((v39 ^ v35) >> 7) & 0x1010101));
    v100 = (2 * (v43 ^ v39)) & 0xFEFEFEFE ^ (27 * (((v43 ^ v39) >> 7) & 0x1010101));
    v31 = v43 ^ v102 ^ v39 ^ v51;
    v35 = v43 ^ v39 ^ v101 ^ v109;
    v39 = v43 ^ v100 ^ v105;
    v43 = v107 ^ v102 ^ v101 ^ v100 ^ v105;
    v99 = v44;
    v98 = v48;
    v97 = v52;
    v96 = v56;
    v95 = v48 ^ v44;
    v94 = v52 ^ v48;
    v93 = v56 ^ v52;
    v92 = (2 * (v48 ^ v44)) & 0xFEFEFEFE ^ (27 * (((v48 ^ v44) >> 7) & 0x1010101));
    v91 = (2 * (v52 ^ v48)) & 0xFEFEFEFE ^ (27 * (((v52 ^ v48) >> 7) & 0x1010101));
    v90 = (2 * (v56 ^ v52)) & 0xFEFEFEFE ^ (27 * (((v56 ^ v52) >> 7) & 0x1010101));
    v44 = v56 ^ v92 ^ v52 ^ v48;
    v48 = v56 ^ v52 ^ v91 ^ v99;
    v52 = v56 ^ v90 ^ v95;
    v56 = v97 ^ v92 ^ v91 ^ v90 ^ v95;
    v89 = v45;
    v88 = v49;
    v87 = v53;
    v86 = v57;
    v85 = v49 ^ v45;
    v84 = v53 ^ v49;
    v83 = v57 ^ v53;
    v82 = (2 * (v49 ^ v45)) & 0xFEFEFEFE ^ (27 * (((v49 ^ v45) >> 7) & 0x1010101));
    v81 = (2 * (v53 ^ v49)) & 0xFEFEFEFE ^ (27 * (((v53 ^ v49) >> 7) & 0x1010101));
    v80 = (2 * (v57 ^ v53)) & 0xFEFEFEFE ^ (27 * (((v57 ^ v53) >> 7) & 0x1010101));
    v45 = v57 ^ v82 ^ v53 ^ v49;
    v49 = v57 ^ v53 ^ v81 ^ v89;
    v53 = v57 ^ v80 ^ v85;
    v57 = v87 ^ v82 ^ v81 ^ v80 ^ v85;
    v79 = v46;
    v78 = v50;
    v77 = v54;
    v76 = v58;
    v75 = v50 ^ v46;
    v74 = v54 ^ v50;
    v73 = v58 ^ v54;
    v72 = (2 * (v50 ^ v46)) & 0xFEFEFEFE ^ (27 * (((v50 ^ v46) >> 7) & 0x1010101));
    v71 = (2 * (v54 ^ v50)) & 0xFEFEFEFE ^ (27 * (((v54 ^ v50) >> 7) & 0x1010101));
    v70 = (2 * (v58 ^ v54)) & 0xFEFEFEFE ^ (27 * (((v58 ^ v54) >> 7) & 0x1010101));
    v46 = v58 ^ v72 ^ v54 ^ v50;
    v50 = v58 ^ v54 ^ v71 ^ v79;
    v54 = v58 ^ v70 ^ v75;
    v58 = v77 ^ v72 ^ v71 ^ v70 ^ v75;
    v69 = v47;
    v68 = v222;
    v67 = v221;
    v66 = v59;
    v65 = v222 ^ v47;
    v64 = v221 ^ v222;
    v63 = v59 ^ v221;
    v62 = (2 * (v222 ^ v47)) & 0xFEFEFEFE ^ (27 * (((v222 ^ v47) >> 7) & 0x1010101));
    v61 = (2 * (v221 ^ v222)) & 0xFEFEFEFE ^ (27 * (((v221 ^ v222) >> 7) & 0x1010101));
    v60 = (2 * (v59 ^ v221)) & 0xFEFEFEFE ^ (27 * (((v59 ^ v221) >> 7) & 0x1010101));
    v47 = v59 ^ v62 ^ v221 ^ v222;
    v51 = v59 ^ v221 ^ v61 ^ v69;
    v55 = v59 ^ v60 ^ v65;
    v59 = v221 ^ v62 ^ v61 ^ v60 ^ v65;
  }
  v288 = a1 + 50;
  v287 = v11;
  for ( k = 0; k <= 0xF; ++k )
  {
    v6 = sub_2D7E9C((int)&a1[k]);
    v7 = v6 ^ sub_2D7E9C((int)&a1[k + 16]);
    v8 = sub_2D7E9C((int)&a1[k + 32]);
    v9 = v7 ^ v8 ^ v287[k] ^ v287[k + 16] ^ v287[k + 32] ^ v287[k + 48];
    result = v288;
    v288[k] ^= v9;
  }
  return result;
}
