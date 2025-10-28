int __fastcall sub_32DD20(unsigned __int8 *a1, int a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int result; // r0
  int v22; // [sp+Ch] [bp-C60h]
  int v23; // [sp+10h] [bp-C5Ch]
  int v24; // [sp+14h] [bp-C58h]
  int v25; // [sp+18h] [bp-C54h]
  int v26; // [sp+1Ch] [bp-C50h]
  int v27; // [sp+20h] [bp-C4Ch]
  int v28; // [sp+24h] [bp-C48h]
  int v29; // [sp+28h] [bp-C44h]
  int v30; // [sp+2Ch] [bp-C40h]
  int v31; // [sp+30h] [bp-C3Ch]
  int v32; // [sp+34h] [bp-C38h]
  int v33; // [sp+38h] [bp-C34h]
  int v34; // [sp+3Ch] [bp-C30h]
  int v35; // [sp+40h] [bp-C2Ch]
  int v36; // [sp+44h] [bp-C28h]
  int v37; // [sp+48h] [bp-C24h]
  int v38; // [sp+4Ch] [bp-C20h]
  int v39; // [sp+50h] [bp-C1Ch]
  int v40; // [sp+54h] [bp-C18h]
  int v41; // [sp+58h] [bp-C14h]
  int v42; // [sp+5Ch] [bp-C10h]
  int v43; // [sp+60h] [bp-C0Ch]
  int v44; // [sp+64h] [bp-C08h]
  int v45; // [sp+68h] [bp-C04h]
  int v46; // [sp+6Ch] [bp-C00h]
  int v47; // [sp+70h] [bp-BFCh]
  int v48; // [sp+74h] [bp-BF8h]
  int v49; // [sp+78h] [bp-BF4h]
  int v50; // [sp+7Ch] [bp-BF0h]
  int v51; // [sp+80h] [bp-BECh]
  int v52; // [sp+84h] [bp-BE8h]
  int v53; // [sp+88h] [bp-BE4h]
  int v54; // [sp+8Ch] [bp-BE0h]
  int v55; // [sp+90h] [bp-BDCh]
  int v56; // [sp+94h] [bp-BD8h]
  int v57; // [sp+98h] [bp-BD4h]
  int v58; // [sp+9Ch] [bp-BD0h]
  int v59; // [sp+A0h] [bp-BCCh]
  int v60; // [sp+A4h] [bp-BC8h]
  int v61; // [sp+A8h] [bp-BC4h]
  int v62; // [sp+ACh] [bp-BC0h]
  int v63; // [sp+B0h] [bp-BBCh]
  int v64; // [sp+B4h] [bp-BB8h]
  int v65; // [sp+B8h] [bp-BB4h]
  int v66; // [sp+BCh] [bp-BB0h]
  int v67; // [sp+C0h] [bp-BACh]
  int v68; // [sp+C4h] [bp-BA8h]
  int v69; // [sp+C8h] [bp-BA4h]
  int v70; // [sp+CCh] [bp-BA0h]
  int v71; // [sp+D0h] [bp-B9Ch]
  int v72; // [sp+D4h] [bp-B98h]
  int v73; // [sp+D8h] [bp-B94h]
  int v74; // [sp+DCh] [bp-B90h]
  int v75; // [sp+E0h] [bp-B8Ch]
  int v76; // [sp+E4h] [bp-B88h]
  int v77; // [sp+E8h] [bp-B84h]
  int v78; // [sp+ECh] [bp-B80h]
  int v79; // [sp+F0h] [bp-B7Ch]
  int v80; // [sp+F4h] [bp-B78h]
  int v81; // [sp+F8h] [bp-B74h]
  int v82; // [sp+FCh] [bp-B70h]
  int v83; // [sp+100h] [bp-B6Ch]
  int v84; // [sp+104h] [bp-B68h]
  int v85; // [sp+108h] [bp-B64h]
  int v86; // [sp+10Ch] [bp-B60h]
  int v87; // [sp+110h] [bp-B5Ch]
  int v88; // [sp+114h] [bp-B58h]
  int v89; // [sp+118h] [bp-B54h]
  int v90; // [sp+11Ch] [bp-B50h]
  int v91; // [sp+120h] [bp-B4Ch]
  int v92; // [sp+124h] [bp-B48h]
  int v93; // [sp+128h] [bp-B44h]
  int v94; // [sp+12Ch] [bp-B40h]
  int v95; // [sp+130h] [bp-B3Ch]
  int v96; // [sp+134h] [bp-B38h]
  int v97; // [sp+138h] [bp-B34h]
  int v98; // [sp+13Ch] [bp-B30h]
  int v99; // [sp+140h] [bp-B2Ch]
  int v100; // [sp+144h] [bp-B28h]
  int v101; // [sp+148h] [bp-B24h]
  int v102; // [sp+14Ch] [bp-B20h]
  int v103; // [sp+150h] [bp-B1Ch]
  int v104; // [sp+154h] [bp-B18h]
  int v105; // [sp+158h] [bp-B14h]
  int v106; // [sp+15Ch] [bp-B10h]
  int v107; // [sp+160h] [bp-B0Ch]
  int v108; // [sp+164h] [bp-B08h]
  int v109; // [sp+168h] [bp-B04h]
  int v110; // [sp+16Ch] [bp-B00h]
  int v111; // [sp+170h] [bp-AFCh]
  int v112; // [sp+174h] [bp-AF8h]
  int v113; // [sp+178h] [bp-AF4h]
  int v114; // [sp+17Ch] [bp-AF0h]
  int v115; // [sp+180h] [bp-AECh]
  int v116; // [sp+184h] [bp-AE8h]
  int v117; // [sp+188h] [bp-AE4h]
  int v118; // [sp+18Ch] [bp-AE0h]
  int v119; // [sp+190h] [bp-ADCh]
  int v120; // [sp+194h] [bp-AD8h]
  int v121; // [sp+198h] [bp-AD4h]
  int v122; // [sp+19Ch] [bp-AD0h]
  int v123; // [sp+1A0h] [bp-ACCh]
  int v124; // [sp+1A4h] [bp-AC8h]
  int v125; // [sp+1A8h] [bp-AC4h]
  int v126; // [sp+1ACh] [bp-AC0h]
  int v127; // [sp+1B0h] [bp-ABCh]
  int v128; // [sp+1B4h] [bp-AB8h]
  int v129; // [sp+1B8h] [bp-AB4h]
  int v130; // [sp+1BCh] [bp-AB0h]
  int v131; // [sp+1C0h] [bp-AACh]
  int v132; // [sp+1C4h] [bp-AA8h]
  int v133; // [sp+1C8h] [bp-AA4h]
  int v134; // [sp+1CCh] [bp-AA0h]
  int v135; // [sp+1D0h] [bp-A9Ch]
  int v136; // [sp+1D4h] [bp-A98h]
  int v137; // [sp+1D8h] [bp-A94h]
  int v138; // [sp+1DCh] [bp-A90h]
  int v139; // [sp+1E0h] [bp-A8Ch]
  int v140; // [sp+1E4h] [bp-A88h]
  int v141; // [sp+1E8h] [bp-A84h]
  int v142; // [sp+1ECh] [bp-A80h]
  int v143; // [sp+1F0h] [bp-A7Ch]
  int v144; // [sp+1F4h] [bp-A78h]
  int v145; // [sp+1F8h] [bp-A74h]
  int v146; // [sp+1FCh] [bp-A70h]
  int v147; // [sp+200h] [bp-A6Ch]
  int v148; // [sp+204h] [bp-A68h]
  int v149; // [sp+208h] [bp-A64h]
  int v150; // [sp+20Ch] [bp-A60h]
  int v151; // [sp+210h] [bp-A5Ch]
  int v152; // [sp+214h] [bp-A58h]
  int v153; // [sp+218h] [bp-A54h]
  int v154; // [sp+21Ch] [bp-A50h]
  int v155; // [sp+220h] [bp-A4Ch]
  int v156; // [sp+224h] [bp-A48h]
  int v157; // [sp+228h] [bp-A44h]
  int v158; // [sp+22Ch] [bp-A40h]
  int v159; // [sp+230h] [bp-A3Ch]
  int v160; // [sp+234h] [bp-A38h]
  int v161; // [sp+238h] [bp-A34h]
  int v162; // [sp+23Ch] [bp-A30h]
  int v163; // [sp+240h] [bp-A2Ch]
  int v164; // [sp+244h] [bp-A28h]
  int v165; // [sp+248h] [bp-A24h]
  int v166; // [sp+24Ch] [bp-A20h]
  int v167; // [sp+250h] [bp-A1Ch]
  int v168; // [sp+254h] [bp-A18h]
  int v169; // [sp+258h] [bp-A14h]
  int v170; // [sp+25Ch] [bp-A10h]
  int v171; // [sp+260h] [bp-A0Ch]
  int v172; // [sp+264h] [bp-A08h]
  int v173; // [sp+268h] [bp-A04h]
  int v174; // [sp+26Ch] [bp-A00h]
  int v175; // [sp+270h] [bp-9FCh]
  int v176; // [sp+274h] [bp-9F8h]
  int v177; // [sp+278h] [bp-9F4h]
  int v178; // [sp+27Ch] [bp-9F0h]
  int v179; // [sp+280h] [bp-9ECh]
  int v180; // [sp+284h] [bp-9E8h]
  int v181; // [sp+288h] [bp-9E4h]
  int v182; // [sp+28Ch] [bp-9E0h]
  int v183; // [sp+290h] [bp-9DCh]
  int v184; // [sp+294h] [bp-9D8h]
  int v185; // [sp+298h] [bp-9D4h]
  int v186; // [sp+29Ch] [bp-9D0h]
  int v187; // [sp+2A0h] [bp-9CCh]
  int v188; // [sp+2A4h] [bp-9C8h]
  int v189; // [sp+2A8h] [bp-9C4h]
  int v190; // [sp+2ACh] [bp-9C0h]
  int v191; // [sp+2B0h] [bp-9BCh]
  int v192; // [sp+2B4h] [bp-9B8h]
  int v193; // [sp+2B8h] [bp-9B4h]
  int v194; // [sp+2BCh] [bp-9B0h]
  int v195; // [sp+2C0h] [bp-9ACh]
  int v196; // [sp+2C4h] [bp-9A8h]
  int v197; // [sp+2C8h] [bp-9A4h]
  int v198; // [sp+2CCh] [bp-9A0h]
  int v199; // [sp+2D0h] [bp-99Ch]
  int v200; // [sp+2D4h] [bp-998h]
  int v201; // [sp+2D8h] [bp-994h]
  int v202; // [sp+2DCh] [bp-990h]
  int v203; // [sp+2E0h] [bp-98Ch]
  int v204; // [sp+2E4h] [bp-988h]
  int v205; // [sp+2E8h] [bp-984h]
  int v206; // [sp+2ECh] [bp-980h]
  int v207; // [sp+2F0h] [bp-97Ch]
  int v208; // [sp+2F4h] [bp-978h]
  int v209; // [sp+2F8h] [bp-974h]
  int v210; // [sp+2FCh] [bp-970h]
  int v211; // [sp+300h] [bp-96Ch]
  int v212; // [sp+304h] [bp-968h]
  int v213; // [sp+308h] [bp-964h]
  int v214; // [sp+30Ch] [bp-960h]
  int v215; // [sp+310h] [bp-95Ch]
  int v216; // [sp+314h] [bp-958h]
  int v217; // [sp+318h] [bp-954h]
  int v218; // [sp+31Ch] [bp-950h]
  int v219; // [sp+320h] [bp-94Ch]
  int v220; // [sp+324h] [bp-948h]
  int v221; // [sp+328h] [bp-944h]
  int v222; // [sp+32Ch] [bp-940h]
  int v223; // [sp+330h] [bp-93Ch]
  int v224; // [sp+334h] [bp-938h]
  int v225; // [sp+338h] [bp-934h]
  int v226; // [sp+33Ch] [bp-930h]
  int v227; // [sp+340h] [bp-92Ch]
  int v228; // [sp+344h] [bp-928h]
  int v229; // [sp+348h] [bp-924h]
  int v230; // [sp+34Ch] [bp-920h]
  int v231; // [sp+350h] [bp-91Ch]
  int v232; // [sp+354h] [bp-918h]
  int v233; // [sp+358h] [bp-914h]
  int v234; // [sp+35Ch] [bp-910h]
  int v235; // [sp+360h] [bp-90Ch]
  int v236; // [sp+364h] [bp-908h]
  int v237; // [sp+368h] [bp-904h]
  int v238; // [sp+36Ch] [bp-900h]
  int v239; // [sp+370h] [bp-8FCh]
  int v240; // [sp+374h] [bp-8F8h]
  int v241; // [sp+378h] [bp-8F4h]
  int v242; // [sp+37Ch] [bp-8F0h]
  int v243; // [sp+380h] [bp-8ECh]
  int v244; // [sp+384h] [bp-8E8h]
  int v245; // [sp+388h] [bp-8E4h]
  int v246; // [sp+38Ch] [bp-8E0h]
  int v247; // [sp+390h] [bp-8DCh]
  int v248; // [sp+394h] [bp-8D8h]
  int v249; // [sp+398h] [bp-8D4h]
  int v250; // [sp+39Ch] [bp-8D0h]
  int v251; // [sp+3A0h] [bp-8CCh]
  int v252; // [sp+3A4h] [bp-8C8h]
  int v253; // [sp+3A8h] [bp-8C4h]
  int v254; // [sp+3ACh] [bp-8C0h]
  int v255; // [sp+3B0h] [bp-8BCh]
  int v256; // [sp+3B4h] [bp-8B8h]
  int v257; // [sp+3B8h] [bp-8B4h]
  int v258; // [sp+3BCh] [bp-8B0h]
  int v259; // [sp+3C0h] [bp-8ACh]
  int v260; // [sp+3C4h] [bp-8A8h]
  int v261; // [sp+3C8h] [bp-8A4h]
  int v262; // [sp+3CCh] [bp-8A0h]
  int v263; // [sp+3D0h] [bp-89Ch]
  int v264; // [sp+3D4h] [bp-898h]
  int v265; // [sp+3D8h] [bp-894h]
  int v266; // [sp+3DCh] [bp-890h]
  int v267; // [sp+3E0h] [bp-88Ch]
  int v268; // [sp+3E4h] [bp-888h]
  int v269; // [sp+3E8h] [bp-884h]
  int v270; // [sp+3ECh] [bp-880h]
  int v271; // [sp+3F0h] [bp-87Ch]
  int v272; // [sp+3F4h] [bp-878h]
  int v273; // [sp+3F8h] [bp-874h]
  int v274; // [sp+3FCh] [bp-870h]
  int v275; // [sp+400h] [bp-86Ch]
  int v276; // [sp+404h] [bp-868h]
  int v277; // [sp+408h] [bp-864h]
  int v278; // [sp+40Ch] [bp-860h]
  int v279; // [sp+410h] [bp-85Ch]
  int v280; // [sp+414h] [bp-858h]
  int v281; // [sp+418h] [bp-854h]
  int v282; // [sp+41Ch] [bp-850h]
  int v283; // [sp+420h] [bp-84Ch]
  int v284; // [sp+424h] [bp-848h]
  int v285; // [sp+428h] [bp-844h]
  int v286; // [sp+42Ch] [bp-840h]
  int v287; // [sp+430h] [bp-83Ch]
  int v288; // [sp+434h] [bp-838h]
  int v289; // [sp+438h] [bp-834h]
  int v290; // [sp+43Ch] [bp-830h]
  int v291; // [sp+440h] [bp-82Ch]
  int v292; // [sp+444h] [bp-828h]
  int v293; // [sp+448h] [bp-824h]
  int v294; // [sp+44Ch] [bp-820h]
  int v295; // [sp+450h] [bp-81Ch]
  int v296; // [sp+454h] [bp-818h]
  int v297; // [sp+458h] [bp-814h]
  int v298; // [sp+45Ch] [bp-810h]
  int v299; // [sp+460h] [bp-80Ch]
  int v300; // [sp+464h] [bp-808h]
  int v301; // [sp+468h] [bp-804h]
  int v302; // [sp+46Ch] [bp-800h]
  int v303; // [sp+470h] [bp-7FCh]
  int v304; // [sp+474h] [bp-7F8h]
  int v305; // [sp+478h] [bp-7F4h]
  int v306; // [sp+47Ch] [bp-7F0h]
  int v307; // [sp+480h] [bp-7ECh]
  int v308; // [sp+484h] [bp-7E8h]
  int v309; // [sp+488h] [bp-7E4h]
  int v310; // [sp+48Ch] [bp-7E0h]
  int v311; // [sp+490h] [bp-7DCh]
  int v312; // [sp+494h] [bp-7D8h]
  int v313; // [sp+498h] [bp-7D4h]
  int v314; // [sp+49Ch] [bp-7D0h]
  int v315; // [sp+4A0h] [bp-7CCh]
  int v316; // [sp+4A4h] [bp-7C8h]
  int v317; // [sp+4A8h] [bp-7C4h]
  int v318; // [sp+4ACh] [bp-7C0h]
  int v319; // [sp+4B0h] [bp-7BCh]
  int v320; // [sp+4B4h] [bp-7B8h]
  int v321; // [sp+4B8h] [bp-7B4h]
  int v322; // [sp+4BCh] [bp-7B0h]
  int v323; // [sp+4C0h] [bp-7ACh]
  int v324; // [sp+4C4h] [bp-7A8h]
  int v325; // [sp+4C8h] [bp-7A4h]
  int v326; // [sp+4CCh] [bp-7A0h]
  int v327; // [sp+4D0h] [bp-79Ch]
  int v328; // [sp+4D4h] [bp-798h]
  int v329; // [sp+4D8h] [bp-794h]
  int v330; // [sp+4DCh] [bp-790h]
  int v331; // [sp+4E0h] [bp-78Ch]
  int v332; // [sp+4E4h] [bp-788h]
  int v333; // [sp+4E8h] [bp-784h]
  int v334; // [sp+4ECh] [bp-780h]
  int v335; // [sp+4F0h] [bp-77Ch]
  int v336; // [sp+4F4h] [bp-778h]
  int v337; // [sp+4F8h] [bp-774h]
  int v338; // [sp+4FCh] [bp-770h]
  int v339; // [sp+500h] [bp-76Ch]
  int v340; // [sp+504h] [bp-768h]
  int v341; // [sp+508h] [bp-764h]
  int v342; // [sp+50Ch] [bp-760h]
  int v343; // [sp+510h] [bp-75Ch]
  int v344; // [sp+514h] [bp-758h]
  int v345; // [sp+518h] [bp-754h]
  int v346; // [sp+51Ch] [bp-750h]
  int v347; // [sp+520h] [bp-74Ch]
  int v348; // [sp+524h] [bp-748h]
  int v349; // [sp+528h] [bp-744h]
  int v350; // [sp+52Ch] [bp-740h]
  int v351; // [sp+530h] [bp-73Ch]
  int v352; // [sp+534h] [bp-738h]
  int v353; // [sp+538h] [bp-734h]
  int v354; // [sp+53Ch] [bp-730h]
  int v355; // [sp+540h] [bp-72Ch]
  int v356; // [sp+544h] [bp-728h]
  int v357; // [sp+548h] [bp-724h]
  int v358; // [sp+54Ch] [bp-720h]
  int v359; // [sp+550h] [bp-71Ch]
  int v360; // [sp+554h] [bp-718h]
  int v361; // [sp+558h] [bp-714h]
  int v362; // [sp+55Ch] [bp-710h]
  int v363; // [sp+560h] [bp-70Ch]
  int v364; // [sp+564h] [bp-708h]
  int v365; // [sp+568h] [bp-704h]
  int v366; // [sp+56Ch] [bp-700h]
  int v367; // [sp+570h] [bp-6FCh]
  int v368; // [sp+574h] [bp-6F8h]
  int v369; // [sp+578h] [bp-6F4h]
  int v370; // [sp+57Ch] [bp-6F0h]
  int v371; // [sp+580h] [bp-6ECh]
  int v372; // [sp+584h] [bp-6E8h]
  int v373; // [sp+588h] [bp-6E4h]
  int v374; // [sp+58Ch] [bp-6E0h]
  int v375; // [sp+590h] [bp-6DCh]
  int v376; // [sp+594h] [bp-6D8h]
  int v377; // [sp+598h] [bp-6D4h]
  int v378; // [sp+59Ch] [bp-6D0h]
  int v379; // [sp+5A0h] [bp-6CCh]
  int v380; // [sp+5A4h] [bp-6C8h]
  int v381; // [sp+5A8h] [bp-6C4h]
  int v382; // [sp+5ACh] [bp-6C0h]
  int v383; // [sp+5B0h] [bp-6BCh]
  int v384; // [sp+5B4h] [bp-6B8h]
  int v385; // [sp+5B8h] [bp-6B4h]
  int v386; // [sp+5BCh] [bp-6B0h]
  int v387; // [sp+5C0h] [bp-6ACh]
  int v388; // [sp+5C4h] [bp-6A8h]
  int v389; // [sp+5C8h] [bp-6A4h]
  int v390; // [sp+5CCh] [bp-6A0h]
  int v391; // [sp+5D0h] [bp-69Ch]
  int v392; // [sp+5D4h] [bp-698h]
  int v393; // [sp+5D8h] [bp-694h]
  int v394; // [sp+5DCh] [bp-690h]
  int v395; // [sp+5E0h] [bp-68Ch]
  int v396; // [sp+5E4h] [bp-688h]
  int v397; // [sp+5E8h] [bp-684h]
  int v398; // [sp+5ECh] [bp-680h]
  int v399; // [sp+5F0h] [bp-67Ch]
  int v400; // [sp+5F4h] [bp-678h]
  int v401; // [sp+5F8h] [bp-674h]
  int v402; // [sp+5FCh] [bp-670h]
  int v403; // [sp+600h] [bp-66Ch]
  int v404; // [sp+604h] [bp-668h]
  int v405; // [sp+608h] [bp-664h]
  int v406; // [sp+60Ch] [bp-660h]
  int v407; // [sp+610h] [bp-65Ch]
  int v408; // [sp+614h] [bp-658h]
  int v409; // [sp+618h] [bp-654h]
  int v410; // [sp+61Ch] [bp-650h]
  int v411; // [sp+620h] [bp-64Ch]
  int v412; // [sp+624h] [bp-648h]
  int v413; // [sp+628h] [bp-644h]
  int v414; // [sp+62Ch] [bp-640h]
  int v415; // [sp+630h] [bp-63Ch]
  int v416; // [sp+634h] [bp-638h]
  int v417; // [sp+638h] [bp-634h]
  int v418; // [sp+63Ch] [bp-630h]
  int v419; // [sp+640h] [bp-62Ch]
  int v420; // [sp+644h] [bp-628h]
  int v421; // [sp+648h] [bp-624h]
  int v422; // [sp+64Ch] [bp-620h]
  int v423; // [sp+650h] [bp-61Ch]
  int v424; // [sp+654h] [bp-618h]
  int v425; // [sp+658h] [bp-614h]
  int v426; // [sp+65Ch] [bp-610h]
  int v427; // [sp+660h] [bp-60Ch]
  int v428; // [sp+664h] [bp-608h]
  int v429; // [sp+668h] [bp-604h]
  int v430; // [sp+66Ch] [bp-600h]
  int v431; // [sp+670h] [bp-5FCh]
  int v432; // [sp+674h] [bp-5F8h]
  int v433; // [sp+678h] [bp-5F4h]
  int v434; // [sp+67Ch] [bp-5F0h]
  int v435; // [sp+680h] [bp-5ECh]
  int v436; // [sp+684h] [bp-5E8h]
  int v437; // [sp+688h] [bp-5E4h]
  int v438; // [sp+68Ch] [bp-5E0h]
  int v439; // [sp+690h] [bp-5DCh]
  int v440; // [sp+694h] [bp-5D8h]
  int v441; // [sp+698h] [bp-5D4h]
  int v442; // [sp+69Ch] [bp-5D0h]
  int v443; // [sp+6A0h] [bp-5CCh]
  int v444; // [sp+6A4h] [bp-5C8h]
  int v445; // [sp+6A8h] [bp-5C4h]
  int v446; // [sp+6ACh] [bp-5C0h]
  int v447; // [sp+6B0h] [bp-5BCh]
  int v448; // [sp+6B4h] [bp-5B8h]
  int v449; // [sp+6B8h] [bp-5B4h]
  int v450; // [sp+6BCh] [bp-5B0h]
  int v451; // [sp+6C0h] [bp-5ACh]
  int v452; // [sp+6C4h] [bp-5A8h]
  int v453; // [sp+6C8h] [bp-5A4h]
  int v454; // [sp+6CCh] [bp-5A0h]
  int v455; // [sp+6D0h] [bp-59Ch]
  int v456; // [sp+6D4h] [bp-598h]
  int v457; // [sp+6D8h] [bp-594h]
  int v458; // [sp+6DCh] [bp-590h]
  int v459; // [sp+6E0h] [bp-58Ch]
  int v460; // [sp+6E4h] [bp-588h]
  int v461; // [sp+6E8h] [bp-584h]
  int v462; // [sp+6ECh] [bp-580h]
  int v463; // [sp+6F0h] [bp-57Ch]
  int v464; // [sp+6F4h] [bp-578h]
  int v465; // [sp+6F8h] [bp-574h]
  int v466; // [sp+6FCh] [bp-570h]
  int v467; // [sp+700h] [bp-56Ch]
  int v468; // [sp+704h] [bp-568h]
  int v469; // [sp+708h] [bp-564h]
  int v470; // [sp+70Ch] [bp-560h]
  int v471; // [sp+710h] [bp-55Ch]
  int v472; // [sp+714h] [bp-558h]
  int v473; // [sp+718h] [bp-554h]
  int v474; // [sp+71Ch] [bp-550h]
  int v475; // [sp+720h] [bp-54Ch]
  int v476; // [sp+724h] [bp-548h]
  int v477; // [sp+728h] [bp-544h]
  int v478; // [sp+72Ch] [bp-540h]
  int v479; // [sp+730h] [bp-53Ch]
  int v480; // [sp+734h] [bp-538h]
  int v481; // [sp+738h] [bp-534h]
  int v482; // [sp+73Ch] [bp-530h]
  int v483; // [sp+740h] [bp-52Ch]
  int v484; // [sp+744h] [bp-528h]
  int v485; // [sp+748h] [bp-524h]
  int v486; // [sp+74Ch] [bp-520h]
  int v487; // [sp+750h] [bp-51Ch]
  int v488; // [sp+754h] [bp-518h]
  int v489; // [sp+758h] [bp-514h]
  int v490; // [sp+75Ch] [bp-510h]
  int v491; // [sp+760h] [bp-50Ch]
  int v492; // [sp+764h] [bp-508h]
  int v493; // [sp+768h] [bp-504h]
  int v494; // [sp+76Ch] [bp-500h]
  int v495; // [sp+770h] [bp-4FCh]
  int v496; // [sp+774h] [bp-4F8h]
  int v497; // [sp+778h] [bp-4F4h]
  int v498; // [sp+77Ch] [bp-4F0h]
  int v499; // [sp+780h] [bp-4ECh]
  int v500; // [sp+784h] [bp-4E8h]
  int v501; // [sp+788h] [bp-4E4h]
  int v502; // [sp+78Ch] [bp-4E0h]
  int v503; // [sp+790h] [bp-4DCh]
  int v504; // [sp+794h] [bp-4D8h]
  int v505; // [sp+798h] [bp-4D4h]
  int v506; // [sp+79Ch] [bp-4D0h]
  int v507; // [sp+7A0h] [bp-4CCh]
  int v508; // [sp+7A4h] [bp-4C8h]
  int v509; // [sp+7A8h] [bp-4C4h]
  int v510; // [sp+7ACh] [bp-4C0h]
  int v511; // [sp+7B0h] [bp-4BCh]
  int v512; // [sp+7B4h] [bp-4B8h]
  int v513; // [sp+7B8h] [bp-4B4h]
  int v514; // [sp+7BCh] [bp-4B0h]
  int v515; // [sp+7C0h] [bp-4ACh]
  int v516; // [sp+7C4h] [bp-4A8h]
  int v517; // [sp+7C8h] [bp-4A4h]
  int v518; // [sp+7CCh] [bp-4A0h]
  int v519; // [sp+7D0h] [bp-49Ch]
  int v520; // [sp+7D4h] [bp-498h]
  int v521; // [sp+7D8h] [bp-494h]
  int v522; // [sp+7DCh] [bp-490h]
  int v523; // [sp+7E0h] [bp-48Ch]
  int v524; // [sp+7E4h] [bp-488h]
  int v525; // [sp+7E8h] [bp-484h]
  int v526; // [sp+7ECh] [bp-480h]
  int v527; // [sp+7F0h] [bp-47Ch]
  int v528; // [sp+7F4h] [bp-478h]
  int v529; // [sp+7F8h] [bp-474h]
  int v530; // [sp+7FCh] [bp-470h]
  int v531; // [sp+800h] [bp-46Ch]
  int v532; // [sp+804h] [bp-468h]
  int v533; // [sp+808h] [bp-464h]
  int v534; // [sp+80Ch] [bp-460h]
  int v535; // [sp+810h] [bp-45Ch]
  int v536; // [sp+814h] [bp-458h]
  int v537; // [sp+818h] [bp-454h]
  int v538; // [sp+81Ch] [bp-450h]
  int v539; // [sp+820h] [bp-44Ch]
  int v540; // [sp+824h] [bp-448h]
  int v541; // [sp+828h] [bp-444h]
  int v542; // [sp+82Ch] [bp-440h]
  int v543; // [sp+830h] [bp-43Ch]
  int v544; // [sp+834h] [bp-438h]
  int v545; // [sp+838h] [bp-434h]
  int v546; // [sp+83Ch] [bp-430h]
  int v547; // [sp+840h] [bp-42Ch]
  int v548; // [sp+844h] [bp-428h]
  int v549; // [sp+848h] [bp-424h]
  int v550; // [sp+84Ch] [bp-420h]
  int v551; // [sp+850h] [bp-41Ch]
  int v552; // [sp+854h] [bp-418h]
  int v553; // [sp+858h] [bp-414h]
  int v554; // [sp+85Ch] [bp-410h]
  int v555; // [sp+860h] [bp-40Ch]
  int v556; // [sp+864h] [bp-408h]
  int v557; // [sp+868h] [bp-404h]
  int v558; // [sp+86Ch] [bp-400h]
  int v559; // [sp+870h] [bp-3FCh]
  int v560; // [sp+874h] [bp-3F8h]
  int v561; // [sp+878h] [bp-3F4h]
  int v562; // [sp+87Ch] [bp-3F0h]
  int v563; // [sp+880h] [bp-3ECh]
  int v564; // [sp+884h] [bp-3E8h]
  int v565; // [sp+888h] [bp-3E4h]
  int v566; // [sp+88Ch] [bp-3E0h]
  int v567; // [sp+890h] [bp-3DCh]
  int v568; // [sp+894h] [bp-3D8h]
  int v569; // [sp+898h] [bp-3D4h]
  int v570; // [sp+89Ch] [bp-3D0h]
  int v571; // [sp+8A0h] [bp-3CCh]
  int v572; // [sp+8A4h] [bp-3C8h]
  int v573; // [sp+8A8h] [bp-3C4h]
  int v574; // [sp+8ACh] [bp-3C0h]
  int v575; // [sp+8B0h] [bp-3BCh]
  int v576; // [sp+8B4h] [bp-3B8h]
  int v577; // [sp+8B8h] [bp-3B4h]
  int v578; // [sp+8BCh] [bp-3B0h]
  int v579; // [sp+8C0h] [bp-3ACh]
  int v580; // [sp+8C4h] [bp-3A8h]
  int v581; // [sp+8C8h] [bp-3A4h]
  int v582; // [sp+8CCh] [bp-3A0h]
  int v583; // [sp+8D0h] [bp-39Ch]
  int v584; // [sp+8D4h] [bp-398h]
  int v585; // [sp+8D8h] [bp-394h]
  int v586; // [sp+8DCh] [bp-390h]
  int v587; // [sp+8E0h] [bp-38Ch]
  int v588; // [sp+8E4h] [bp-388h]
  int v589; // [sp+8E8h] [bp-384h]
  int v590; // [sp+8ECh] [bp-380h]
  int v591; // [sp+8F0h] [bp-37Ch]
  int v592; // [sp+8F4h] [bp-378h]
  int v593; // [sp+8F8h] [bp-374h]
  int v594; // [sp+8FCh] [bp-370h]
  int v595; // [sp+900h] [bp-36Ch]
  int v596; // [sp+904h] [bp-368h]
  int v597; // [sp+908h] [bp-364h]
  int v598; // [sp+90Ch] [bp-360h]
  int v599; // [sp+910h] [bp-35Ch]
  int v600; // [sp+914h] [bp-358h]
  int v601; // [sp+918h] [bp-354h]
  int v602; // [sp+91Ch] [bp-350h]
  int v603; // [sp+920h] [bp-34Ch]
  int v604; // [sp+924h] [bp-348h]
  int v605; // [sp+928h] [bp-344h]
  int v606; // [sp+92Ch] [bp-340h]
  int v607; // [sp+930h] [bp-33Ch]
  int v608; // [sp+934h] [bp-338h]
  int v609; // [sp+938h] [bp-334h]
  int v610; // [sp+93Ch] [bp-330h]
  int v611; // [sp+940h] [bp-32Ch]
  int v612; // [sp+944h] [bp-328h]
  int v613; // [sp+948h] [bp-324h]
  int v614; // [sp+94Ch] [bp-320h]
  int v615; // [sp+950h] [bp-31Ch]
  int v616; // [sp+954h] [bp-318h]
  int v617; // [sp+958h] [bp-314h]
  int v618; // [sp+95Ch] [bp-310h]
  int v619; // [sp+960h] [bp-30Ch]
  int v620; // [sp+964h] [bp-308h]
  int v621; // [sp+968h] [bp-304h]
  int v622; // [sp+96Ch] [bp-300h]
  int v623; // [sp+970h] [bp-2FCh]
  int v624; // [sp+974h] [bp-2F8h]
  int v625; // [sp+978h] [bp-2F4h]
  int v626; // [sp+97Ch] [bp-2F0h]
  int v627; // [sp+980h] [bp-2ECh]
  int v628; // [sp+984h] [bp-2E8h]
  int v629; // [sp+988h] [bp-2E4h]
  int v630; // [sp+98Ch] [bp-2E0h]
  int v631; // [sp+990h] [bp-2DCh]
  int v632; // [sp+994h] [bp-2D8h]
  int v633; // [sp+998h] [bp-2D4h]
  int v634; // [sp+99Ch] [bp-2D0h]
  int v635; // [sp+9A0h] [bp-2CCh]
  int v636; // [sp+9A4h] [bp-2C8h]
  int v637; // [sp+9A8h] [bp-2C4h]
  int v638; // [sp+9ACh] [bp-2C0h]
  int v639; // [sp+9B0h] [bp-2BCh]
  int v640; // [sp+9B4h] [bp-2B8h]
  int v641; // [sp+9B8h] [bp-2B4h]
  int v642; // [sp+9BCh] [bp-2B0h]
  int v643; // [sp+9C0h] [bp-2ACh]
  int v644; // [sp+9C4h] [bp-2A8h]
  int v645; // [sp+9C8h] [bp-2A4h]
  int v646; // [sp+9CCh] [bp-2A0h]
  int v647; // [sp+9D0h] [bp-29Ch]
  int v648; // [sp+9D4h] [bp-298h]
  int v649; // [sp+9D8h] [bp-294h]
  int v650; // [sp+9DCh] [bp-290h]
  int v651; // [sp+9E0h] [bp-28Ch]
  int v652; // [sp+9E4h] [bp-288h]
  int v653; // [sp+9E8h] [bp-284h]
  int v654; // [sp+9ECh] [bp-280h]
  int v655; // [sp+9F0h] [bp-27Ch]
  int v656; // [sp+9F4h] [bp-278h]
  int v657; // [sp+9F8h] [bp-274h]
  int v658; // [sp+9FCh] [bp-270h]
  int v659; // [sp+A00h] [bp-26Ch]
  int v660; // [sp+A04h] [bp-268h]
  int v661; // [sp+A08h] [bp-264h]
  int v662; // [sp+A0Ch] [bp-260h]
  int v663; // [sp+A10h] [bp-25Ch]
  int v664; // [sp+A14h] [bp-258h]
  int v665; // [sp+A18h] [bp-254h]
  int v666; // [sp+A1Ch] [bp-250h]
  int v667; // [sp+A20h] [bp-24Ch]
  int v668; // [sp+A24h] [bp-248h]
  int v669; // [sp+A28h] [bp-244h]
  int v670; // [sp+A2Ch] [bp-240h]
  int v671; // [sp+A30h] [bp-23Ch]
  int v672; // [sp+A34h] [bp-238h]
  int v673; // [sp+A38h] [bp-234h]
  int v674; // [sp+A3Ch] [bp-230h]
  int v675; // [sp+A40h] [bp-22Ch]
  int v676; // [sp+A44h] [bp-228h]
  int v677; // [sp+A48h] [bp-224h]
  int v678; // [sp+A4Ch] [bp-220h]
  int v679; // [sp+A50h] [bp-21Ch]
  int v680; // [sp+A54h] [bp-218h]
  int v681; // [sp+A58h] [bp-214h]
  int v682; // [sp+A5Ch] [bp-210h]
  int v683; // [sp+A60h] [bp-20Ch]
  int v684; // [sp+A64h] [bp-208h]
  int v685; // [sp+A68h] [bp-204h]
  int v686; // [sp+A6Ch] [bp-200h]
  int v687; // [sp+A70h] [bp-1FCh]
  int v688; // [sp+A74h] [bp-1F8h]
  int v689; // [sp+A78h] [bp-1F4h]
  int v690; // [sp+A7Ch] [bp-1F0h]
  int v691; // [sp+A80h] [bp-1ECh]
  int v692; // [sp+A84h] [bp-1E8h]
  int v693; // [sp+A88h] [bp-1E4h]
  int v694; // [sp+A8Ch] [bp-1E0h]
  int v695; // [sp+A90h] [bp-1DCh]
  int v696; // [sp+A94h] [bp-1D8h]
  int v697; // [sp+A98h] [bp-1D4h]
  int v698; // [sp+A9Ch] [bp-1D0h]
  int v699; // [sp+AA0h] [bp-1CCh]
  int v700; // [sp+AA4h] [bp-1C8h]
  int v701; // [sp+AA8h] [bp-1C4h]
  int v702; // [sp+AACh] [bp-1C0h]
  int v703; // [sp+AB0h] [bp-1BCh]
  int v704; // [sp+AB4h] [bp-1B8h]
  int v705; // [sp+AB8h] [bp-1B4h]
  int v706; // [sp+ABCh] [bp-1B0h]
  int v707; // [sp+AC0h] [bp-1ACh]
  int v708; // [sp+AC4h] [bp-1A8h]
  int v709; // [sp+AC8h] [bp-1A4h]
  int v710; // [sp+ACCh] [bp-1A0h]
  int v711; // [sp+AD0h] [bp-19Ch]
  int v712; // [sp+AD4h] [bp-198h]
  int v713; // [sp+AD8h] [bp-194h]
  int v714; // [sp+ADCh] [bp-190h]
  int v715; // [sp+AE0h] [bp-18Ch]
  int v716; // [sp+AE4h] [bp-188h]
  int v717; // [sp+AE8h] [bp-184h]
  int v718; // [sp+AECh] [bp-180h]
  int v719; // [sp+AF0h] [bp-17Ch]
  int v720; // [sp+AF4h] [bp-178h]
  int v721; // [sp+AF8h] [bp-174h]
  int v722; // [sp+AFCh] [bp-170h]
  int v723; // [sp+B00h] [bp-16Ch]
  int v724; // [sp+B04h] [bp-168h]
  int v725; // [sp+B08h] [bp-164h]
  int v726; // [sp+B0Ch] [bp-160h]
  int v727; // [sp+B10h] [bp-15Ch]
  int v728; // [sp+B14h] [bp-158h]
  int v729; // [sp+B18h] [bp-154h]
  int v730; // [sp+B1Ch] [bp-150h]
  int v731; // [sp+B20h] [bp-14Ch]
  int v732; // [sp+B24h] [bp-148h]
  int v733; // [sp+B28h] [bp-144h]
  int v734; // [sp+B2Ch] [bp-140h]
  int v735; // [sp+B30h] [bp-13Ch]
  int v736; // [sp+B34h] [bp-138h]
  int v737; // [sp+B38h] [bp-134h]
  int v738; // [sp+B3Ch] [bp-130h]
  int v739; // [sp+B40h] [bp-12Ch]
  int v740; // [sp+B44h] [bp-128h]
  int v741; // [sp+B48h] [bp-124h]
  int v742; // [sp+B4Ch] [bp-120h]
  int v743; // [sp+B50h] [bp-11Ch]
  int v744; // [sp+B54h] [bp-118h]
  int v745; // [sp+B58h] [bp-114h]
  int v746; // [sp+B5Ch] [bp-110h]
  int v747; // [sp+B60h] [bp-10Ch]
  int v748; // [sp+B64h] [bp-108h]
  int v749; // [sp+B68h] [bp-104h]
  int v750; // [sp+B6Ch] [bp-100h]
  int v751; // [sp+B70h] [bp-FCh]
  int v752; // [sp+B74h] [bp-F8h]
  int v753; // [sp+B78h] [bp-F4h]
  int v754; // [sp+B7Ch] [bp-F0h]
  int v755; // [sp+B80h] [bp-ECh]
  int v756; // [sp+B84h] [bp-E8h]
  int v757; // [sp+B88h] [bp-E4h]
  int v758; // [sp+B8Ch] [bp-E0h]
  int v759; // [sp+B90h] [bp-DCh]
  int v760; // [sp+B94h] [bp-D8h]
  int v761; // [sp+B98h] [bp-D4h]
  int v762; // [sp+B9Ch] [bp-D0h]
  int v763; // [sp+BA0h] [bp-CCh]
  int v764; // [sp+BA4h] [bp-C8h]
  int v765; // [sp+BA8h] [bp-C4h]
  int v766; // [sp+BACh] [bp-C0h]
  int v767; // [sp+BB0h] [bp-BCh]
  int v768; // [sp+BB4h] [bp-B8h]
  int v769; // [sp+BB8h] [bp-B4h]
  int v770; // [sp+BBCh] [bp-B0h]
  int v771; // [sp+BC0h] [bp-ACh]
  int v772; // [sp+BC4h] [bp-A8h]
  int v773; // [sp+BC8h] [bp-A4h]
  int v774; // [sp+BCCh] [bp-A0h]
  int v775; // [sp+BD0h] [bp-9Ch]
  int v776; // [sp+BD4h] [bp-98h]
  int v777; // [sp+BD8h] [bp-94h]
  int v778; // [sp+BDCh] [bp-90h]
  int v779; // [sp+BE0h] [bp-8Ch]
  int v780; // [sp+BE4h] [bp-88h]
  int v781; // [sp+BE8h] [bp-84h]
  int v782; // [sp+BECh] [bp-80h]
  int v783; // [sp+BF0h] [bp-7Ch]
  int v784; // [sp+BF4h] [bp-78h]
  int v785; // [sp+BF8h] [bp-74h]
  int v786; // [sp+BFCh] [bp-70h]
  int v787; // [sp+C00h] [bp-6Ch]
  int v788; // [sp+C04h] [bp-68h]
  int v789; // [sp+C08h] [bp-64h]
  int v790; // [sp+C0Ch] [bp-60h]
  int v791; // [sp+C10h] [bp-5Ch]
  int v792; // [sp+C14h] [bp-58h]
  int v793; // [sp+C18h] [bp-54h]
  int v794; // [sp+C1Ch] [bp-50h]
  int v795; // [sp+C20h] [bp-4Ch]
  int v796; // [sp+C24h] [bp-48h]
  unsigned __int8 *v797; // [sp+C28h] [bp-44h]
  int v798; // [sp+C2Ch] [bp-40h]
  unsigned int jj; // [sp+C30h] [bp-3Ch]
  int v800; // [sp+C34h] [bp-38h]
  unsigned int ii; // [sp+C38h] [bp-34h]
  int v802; // [sp+C3Ch] [bp-30h]
  unsigned int n; // [sp+C40h] [bp-2Ch]
  int v804; // [sp+C44h] [bp-28h]
  unsigned int m; // [sp+C48h] [bp-24h]
  int v806; // [sp+C4Ch] [bp-20h]
  unsigned int k; // [sp+C50h] [bp-1Ch]
  int v808; // [sp+C54h] [bp-18h]
  unsigned int j; // [sp+C58h] [bp-14h]
  int v810; // [sp+C5Ch] [bp-10h]
  unsigned int i; // [sp+C60h] [bp-Ch]
  int kk; // [sp+C64h] [bp-8h]

  v797 = a1;
  v796 = *a1;
  v795 = a1[16];
  v794 = a1[32];
  v793 = a1[48];
  v792 = v796 + v794;
  v791 = v796 + 16 * v794;
  v790 = v796 - v794;
  v789 = v796 - 16 * v794;
  v788 = v795 + v793;
  v787 = (unsigned __int8)(4 * v795 + ((_BYTE)v793 << 6)) - ((4 * v795 + (v793 << 6)) >> 8);
  v786 = 16 * v795 - 16 * v793;
  v785 = (unsigned __int8)(((_BYTE)v795 << 6) + 4 * v793) - (((v795 << 6) + 4 * v793) >> 8);
  v784 = v796 + v794 + v795 + v793;
  v783 = v791 + v787;
  v782 = v796 - v794 + v786;
  v781 = v789 + v785;
  v780 = v796 + v794 - (v795 + v793);
  v779 = v791 - v787;
  v778 = v796 - v794 - v786;
  v777 = v789 - v785;
  v776 = a1[8];
  v775 = a1[24];
  v774 = a1[40];
  v773 = a1[56];
  v772 = v776 + v774;
  v771 = v776 + 16 * v774;
  v770 = v776 - v774;
  v769 = v776 - 16 * v774;
  v768 = v775 + v773;
  v767 = (unsigned __int8)(4 * v775 + ((_BYTE)v773 << 6)) - ((4 * v775 + (v773 << 6)) >> 8);
  v766 = 16 * v775 - 16 * v773;
  v765 = (unsigned __int8)(((_BYTE)v775 << 6) + 4 * v773) - (((v775 << 6) + 4 * v773) >> 8);
  v764 = v776 + v774 + v775 + v773;
  v763 = v771 + v767;
  v762 = v776 - v774 + v766;
  v761 = v769 + v765;
  v760 = v776 + v774 - (v775 + v773);
  v759 = v771 - v767;
  v758 = v776 - v774 - v766;
  v757 = v769 - v765;
  v22 = v784 + v764;
  v23 = 2 * (v771 + v767) + v791 + v787;
  v24 = 4 * v762 + v782;
  v25 = 8 * (v769 + v765) + v789 + v785;
  v26 = 16 * v760 + v780;
  v27 = 32 * (v771 - v767) + v791 - v787;
  v28 = (v758 << 6) + v778;
  v29 = ((v769 - v765) << 7) + v789 - v785;
  v30 = v784 - v764;
  v31 = v791 + v787 - 2 * (v771 + v767);
  v32 = v782 - 4 * v762;
  v33 = v789 + v785 - 8 * (v769 + v765);
  v34 = v780 - 16 * v760;
  v35 = v791 - v787 - 32 * (v771 - v767);
  v36 = v778 - (v758 << 6);
  v37 = v789 - v785 - ((v769 - v765) << 7);
  v756 = a1[4];
  v755 = a1[20];
  v754 = a1[36];
  v753 = a1[52];
  v752 = v756 + v754;
  v751 = v756 + 16 * v754;
  v750 = v756 - v754;
  v749 = v756 - 16 * v754;
  v748 = v755 + v753;
  v747 = (unsigned __int8)(4 * v755 + ((_BYTE)v753 << 6)) - ((4 * v755 + (v753 << 6)) >> 8);
  v746 = 16 * v755 - 16 * v753;
  v745 = (unsigned __int8)(((_BYTE)v755 << 6) + 4 * v753) - (((v755 << 6) + 4 * v753) >> 8);
  v744 = v756 + v754 + v755 + v753;
  v743 = v751 + v747;
  v742 = v756 - v754 + v746;
  v741 = v749 + v745;
  v740 = v756 + v754 - (v755 + v753);
  v739 = v751 - v747;
  v738 = v756 - v754 - v746;
  v737 = v749 - v745;
  v736 = a1[12];
  v735 = a1[28];
  v734 = a1[44];
  v733 = a1[60];
  v732 = v736 + v734;
  v731 = v736 + 16 * v734;
  v730 = v736 - v734;
  v729 = v736 - 16 * v734;
  v728 = v735 + v733;
  v727 = (unsigned __int8)(4 * v735 + ((_BYTE)v733 << 6)) - ((4 * v735 + (v733 << 6)) >> 8);
  v726 = 16 * v735 - 16 * v733;
  v725 = (unsigned __int8)(((_BYTE)v735 << 6) + 4 * v733) - (((v735 << 6) + 4 * v733) >> 8);
  v724 = v736 + v734 + v735 + v733;
  v723 = v731 + v727;
  v722 = v736 - v734 + v726;
  v721 = v729 + v725;
  v720 = v736 + v734 - (v735 + v733);
  v719 = v731 - v727;
  v718 = v736 - v734 - v726;
  v717 = v729 - v725;
  v39 = 2 * (v731 + v727) + v751 + v747;
  v40 = 4 * v722 + v742;
  v41 = 8 * (v729 + v725) + v749 + v745;
  v42 = 16 * v720 + v740;
  v43 = 32 * (v731 - v727) + v751 - v747;
  v44 = (v718 << 6) + v738;
  v45 = ((v729 - v725) << 7) + v749 - v745;
  v46 = v744 - v724;
  v47 = v751 + v747 - 2 * (v731 + v727);
  v48 = v742 - 4 * v722;
  v49 = v749 + v745 - 8 * (v729 + v725);
  v50 = v740 - 16 * v720;
  v51 = v751 - v747 - 32 * (v731 - v727);
  v52 = v738 - (v718 << 6);
  v53 = v749 - v745 - ((v729 - v725) << 7);
  v716 = v784 + v764;
  v715 = v744 + v724;
  v22 = v784 + v764 + v744 + v724;
  v38 = v784 + v764 - (v744 + v724);
  v810 = 0;
  for ( i = 0; ; *(&v22 + i + 16) = v716 - v714 )
  {
    v716 = *(&v22 + i + 1);
    v715 = *(&v22 + i + 17);
    v714 = (unsigned __int16)(v715 * dword_585DD8[v810 + 8]) + ((v715 * dword_585DD8[v810 + 8]) >> 16);
    *(&v22 + i + 1) = v716 + v714;
    *(&v22 + i + 17) = v716 - v714;
    v716 = *(&v22 + i + 2);
    v715 = *(&v22 + i + 18);
    v714 = (unsigned __int16)(v715 * dword_585DD8[v810 + 16]) + ((v715 * dword_585DD8[v810 + 16]) >> 16);
    *(&v22 + i + 2) = v716 + v714;
    *(&v22 + i + 18) = v716 - v714;
    v716 = *(&v22 + i + 3);
    v715 = *(&v22 + i + 19);
    v714 = (unsigned __int16)(v715 * dword_585DD8[v810 + 24]) + ((v715 * dword_585DD8[v810 + 24]) >> 16);
    *(&v22 + i + 3) = v716 + v714;
    *(&v22 + i + 19) = v716 - v714;
    i += 4;
    v810 += 32;
    if ( i > 0xF )
      break;
    v716 = *(&v22 + i);
    v715 = *(&v22 + i + 16);
    v714 = (unsigned __int16)(v715 * dword_585DD8[v810]) + ((v715 * dword_585DD8[v810]) >> 16);
    *(&v22 + i) = v716 + v714;
  }
  v713 = v797[2];
  v712 = v797[18];
  v711 = v797[34];
  v710 = v797[50];
  v709 = v713 + v711;
  v708 = v713 + 16 * v711;
  v707 = v713 - v711;
  v706 = v713 - 16 * v711;
  v705 = v712 + v710;
  v704 = (unsigned __int8)(4 * v712 + ((_BYTE)v710 << 6)) - ((4 * v712 + (v710 << 6)) >> 8);
  v703 = 16 * v712 - 16 * v710;
  v702 = (unsigned __int8)(((_BYTE)v712 << 6) + 4 * v710) - (((v712 << 6) + 4 * v710) >> 8);
  v701 = v713 + v711 + v712 + v710;
  v700 = v708 + v704;
  v699 = v713 - v711 + v703;
  v698 = v706 + v702;
  v697 = v713 + v711 - (v712 + v710);
  v696 = v708 - v704;
  v695 = v713 - v711 - v703;
  v694 = v706 - v702;
  v693 = v797[10];
  v692 = v797[26];
  v691 = v797[42];
  v690 = v797[58];
  v689 = v693 + v691;
  v688 = v693 + 16 * v691;
  v687 = v693 - v691;
  v686 = v693 - 16 * v691;
  v685 = v692 + v690;
  v684 = (unsigned __int8)(4 * v692 + ((_BYTE)v690 << 6)) - ((4 * v692 + (v690 << 6)) >> 8);
  v683 = 16 * v692 - 16 * v690;
  v682 = (unsigned __int8)(((_BYTE)v692 << 6) + 4 * v690) - (((v692 << 6) + 4 * v690) >> 8);
  v681 = v693 + v691 + v692 + v690;
  v680 = v688 + v684;
  v679 = v693 - v691 + v683;
  v678 = v686 + v682;
  v677 = v693 + v691 - (v692 + v690);
  v676 = v688 - v684;
  v675 = v693 - v691 - v683;
  v674 = v686 - v682;
  v54 = v701 + v681;
  v55 = 2 * (v688 + v684) + v708 + v704;
  v56 = 4 * v679 + v699;
  v57 = 8 * (v686 + v682) + v706 + v702;
  v58 = 16 * v677 + v697;
  v59 = 32 * (v688 - v684) + v708 - v704;
  v60 = (v675 << 6) + v695;
  v61 = ((v686 - v682) << 7) + v706 - v702;
  v62 = v701 - v681;
  v63 = v708 + v704 - 2 * (v688 + v684);
  v64 = v699 - 4 * v679;
  v65 = v706 + v702 - 8 * (v686 + v682);
  v66 = v697 - 16 * v677;
  v67 = v708 - v704 - 32 * (v688 - v684);
  v68 = v695 - (v675 << 6);
  v69 = v706 - v702 - ((v686 - v682) << 7);
  v673 = v797[6];
  v672 = v797[22];
  v671 = v797[38];
  v670 = v797[54];
  v669 = v673 + v671;
  v668 = v673 + 16 * v671;
  v667 = v673 - v671;
  v666 = v673 - 16 * v671;
  v665 = v672 + v670;
  v664 = (unsigned __int8)(4 * v672 + ((_BYTE)v670 << 6)) - ((4 * v672 + (v670 << 6)) >> 8);
  v663 = 16 * v672 - 16 * v670;
  v662 = (unsigned __int8)(((_BYTE)v672 << 6) + 4 * v670) - (((v672 << 6) + 4 * v670) >> 8);
  v661 = v673 + v671 + v672 + v670;
  v660 = v668 + v664;
  v659 = v673 - v671 + v663;
  v658 = v666 + v662;
  v657 = v673 + v671 - (v672 + v670);
  v656 = v668 - v664;
  v655 = v673 - v671 - v663;
  v654 = v666 - v662;
  v653 = v797[14];
  v652 = v797[30];
  v651 = v797[46];
  v650 = v797[62];
  v649 = v653 + v651;
  v648 = v653 + 16 * v651;
  v647 = v653 - v651;
  v646 = v653 - 16 * v651;
  v645 = v652 + v650;
  v644 = (unsigned __int8)(4 * v652 + ((_BYTE)v650 << 6)) - ((4 * v652 + (v650 << 6)) >> 8);
  v643 = 16 * v652 - 16 * v650;
  v642 = (unsigned __int8)(((_BYTE)v652 << 6) + 4 * v650) - (((v652 << 6) + 4 * v650) >> 8);
  v641 = v653 + v651 + v652 + v650;
  v640 = v648 + v644;
  v639 = v653 - v651 + v643;
  v638 = v646 + v642;
  v637 = v653 + v651 - (v652 + v650);
  v636 = v648 - v644;
  v635 = v653 - v651 - v643;
  v634 = v646 - v642;
  v71 = 2 * (v648 + v644) + v668 + v664;
  v72 = 4 * v639 + v659;
  v73 = 8 * (v646 + v642) + v666 + v662;
  v74 = 16 * v637 + v657;
  v75 = 32 * (v648 - v644) + v668 - v664;
  v76 = (v635 << 6) + v655;
  v77 = ((v646 - v642) << 7) + v666 - v662;
  v78 = v661 - v641;
  v79 = v668 + v664 - 2 * (v648 + v644);
  v80 = v659 - 4 * v639;
  v81 = v666 + v662 - 8 * (v646 + v642);
  v82 = v657 - 16 * v637;
  v83 = v668 - v664 - 32 * (v648 - v644);
  v84 = v655 - (v635 << 6);
  v85 = v666 - v662 - ((v646 - v642) << 7);
  v633 = v701 + v681;
  v632 = v661 + v641;
  v54 = v701 + v681 + v661 + v641;
  v70 = v701 + v681 - (v661 + v641);
  v808 = 0;
  for ( j = 0; ; *(&v22 + j + 48) = v633 - v631 )
  {
    v633 = *(&v22 + j + 33);
    v632 = *(&v22 + j + 49);
    v631 = (unsigned __int16)(v632 * dword_585DD8[v808 + 8]) + ((v632 * dword_585DD8[v808 + 8]) >> 16);
    *(&v22 + j + 33) = v633 + v631;
    *(&v22 + j + 49) = v633 - v631;
    v633 = *(&v22 + j + 34);
    v632 = *(&v22 + j + 50);
    v631 = (unsigned __int16)(v632 * dword_585DD8[v808 + 16]) + ((v632 * dword_585DD8[v808 + 16]) >> 16);
    *(&v22 + j + 34) = v633 + v631;
    *(&v22 + j + 50) = v633 - v631;
    v633 = *(&v22 + j + 35);
    v632 = *(&v22 + j + 51);
    v631 = (unsigned __int16)(v632 * dword_585DD8[v808 + 24]) + ((v632 * dword_585DD8[v808 + 24]) >> 16);
    *(&v22 + j + 35) = v633 + v631;
    *(&v22 + j + 51) = v633 - v631;
    j += 4;
    v808 += 32;
    if ( j > 0xF )
      break;
    v633 = *(&v22 + j + 32);
    v632 = *(&v22 + j + 48);
    v631 = (unsigned __int16)(v632 * dword_585DD8[v808]) + ((v632 * dword_585DD8[v808]) >> 16);
    *(&v22 + j + 32) = v633 + v631;
  }
  v630 = v22;
  v629 = v54;
  v22 += v54;
  v54 = v630 - v54;
  v806 = 0;
  for ( k = 0; ; *(&v22 + k + 32) = v630 - v628 )
  {
    v630 = *(&v22 + k + 1);
    v629 = *(&v22 + k + 33);
    v628 = (unsigned __int16)(v629 * dword_585DD8[v806 + 4]) + ((v629 * dword_585DD8[v806 + 4]) >> 16);
    *(&v22 + k + 1) = v630 + v628;
    *(&v22 + k + 33) = v630 - v628;
    v630 = *(&v22 + k + 2);
    v629 = *(&v22 + k + 34);
    v628 = (unsigned __int16)(v629 * dword_585DD8[v806 + 8]) + ((v629 * dword_585DD8[v806 + 8]) >> 16);
    *(&v22 + k + 2) = v630 + v628;
    *(&v22 + k + 34) = v630 - v628;
    v630 = *(&v22 + k + 3);
    v629 = *(&v22 + k + 35);
    v628 = (unsigned __int16)(v629 * dword_585DD8[v806 + 12]) + ((v629 * dword_585DD8[v806 + 12]) >> 16);
    *(&v22 + k + 3) = v630 + v628;
    *(&v22 + k + 35) = v630 - v628;
    k += 4;
    v806 += 16;
    if ( k > 0x1F )
      break;
    v630 = *(&v22 + k);
    v629 = *(&v22 + k + 32);
    v628 = (unsigned __int16)(v629 * dword_585DD8[v806]) + ((v629 * dword_585DD8[v806]) >> 16);
    *(&v22 + k) = v630 + v628;
  }
  v627 = v797[1];
  v626 = v797[17];
  v625 = v797[33];
  v624 = v797[49];
  v623 = v627 + v625;
  v622 = v627 + 16 * v625;
  v621 = v627 - v625;
  v620 = v627 - 16 * v625;
  v619 = v626 + v624;
  v618 = (unsigned __int8)(4 * v626 + ((_BYTE)v624 << 6)) - ((4 * v626 + (v624 << 6)) >> 8);
  v617 = 16 * v626 - 16 * v624;
  v616 = (unsigned __int8)(((_BYTE)v626 << 6) + 4 * v624) - (((v626 << 6) + 4 * v624) >> 8);
  v615 = v627 + v625 + v626 + v624;
  v614 = v622 + v618;
  v613 = v627 - v625 + v617;
  v612 = v620 + v616;
  v611 = v627 + v625 - (v626 + v624);
  v610 = v622 - v618;
  v609 = v627 - v625 - v617;
  v608 = v620 - v616;
  v607 = v797[9];
  v606 = v797[25];
  v605 = v797[41];
  v604 = v797[57];
  v603 = v607 + v605;
  v602 = v607 + 16 * v605;
  v601 = v607 - v605;
  v600 = v607 - 16 * v605;
  v599 = v606 + v604;
  v598 = (unsigned __int8)(4 * v606 + ((_BYTE)v604 << 6)) - ((4 * v606 + (v604 << 6)) >> 8);
  v597 = 16 * v606 - 16 * v604;
  v596 = (unsigned __int8)(((_BYTE)v606 << 6) + 4 * v604) - (((v606 << 6) + 4 * v604) >> 8);
  v595 = v607 + v605 + v606 + v604;
  v594 = v602 + v598;
  v593 = v607 - v605 + v597;
  v592 = v600 + v596;
  v591 = v607 + v605 - (v606 + v604);
  v590 = v602 - v598;
  v589 = v607 - v605 - v597;
  v588 = v600 - v596;
  v86 = v615 + v595;
  v87 = 2 * (v602 + v598) + v622 + v618;
  v88 = 4 * v593 + v613;
  v89 = 8 * (v600 + v596) + v620 + v616;
  v90 = 16 * v591 + v611;
  v91 = 32 * (v602 - v598) + v622 - v618;
  v92 = (v589 << 6) + v609;
  v93 = ((v600 - v596) << 7) + v620 - v616;
  v94 = v615 - v595;
  v95 = v622 + v618 - 2 * (v602 + v598);
  v96 = v613 - 4 * v593;
  v97 = v620 + v616 - 8 * (v600 + v596);
  v98 = v611 - 16 * v591;
  v99 = v622 - v618 - 32 * (v602 - v598);
  v100 = v609 - (v589 << 6);
  v101 = v620 - v616 - ((v600 - v596) << 7);
  v587 = v797[5];
  v586 = v797[21];
  v585 = v797[37];
  v584 = v797[53];
  v583 = v587 + v585;
  v582 = v587 + 16 * v585;
  v581 = v587 - v585;
  v580 = v587 - 16 * v585;
  v579 = v586 + v584;
  v578 = (unsigned __int8)(4 * v586 + ((_BYTE)v584 << 6)) - ((4 * v586 + (v584 << 6)) >> 8);
  v577 = 16 * v586 - 16 * v584;
  v576 = (unsigned __int8)(((_BYTE)v586 << 6) + 4 * v584) - (((v586 << 6) + 4 * v584) >> 8);
  v575 = v587 + v585 + v586 + v584;
  v574 = v582 + v578;
  v573 = v587 - v585 + v577;
  v572 = v580 + v576;
  v571 = v587 + v585 - (v586 + v584);
  v570 = v582 - v578;
  v569 = v587 - v585 - v577;
  v568 = v580 - v576;
  v567 = v797[13];
  v566 = v797[29];
  v565 = v797[45];
  v564 = v797[61];
  v563 = v567 + v565;
  v562 = v567 + 16 * v565;
  v561 = v567 - v565;
  v560 = v567 - 16 * v565;
  v559 = v566 + v564;
  v558 = (unsigned __int8)(4 * v566 + ((_BYTE)v564 << 6)) - ((4 * v566 + (v564 << 6)) >> 8);
  v557 = 16 * v566 - 16 * v564;
  v556 = (unsigned __int8)(((_BYTE)v566 << 6) + 4 * v564) - (((v566 << 6) + 4 * v564) >> 8);
  v555 = v567 + v565 + v566 + v564;
  v554 = v562 + v558;
  v553 = v567 - v565 + v557;
  v552 = v560 + v556;
  v551 = v567 + v565 - (v566 + v564);
  v550 = v562 - v558;
  v549 = v567 - v565 - v557;
  v548 = v560 - v556;
  v103 = 2 * (v562 + v558) + v582 + v578;
  v104 = 4 * v553 + v573;
  v105 = 8 * (v560 + v556) + v580 + v576;
  v106 = 16 * v551 + v571;
  v107 = 32 * (v562 - v558) + v582 - v578;
  v108 = (v549 << 6) + v569;
  v109 = ((v560 - v556) << 7) + v580 - v576;
  v110 = v575 - v555;
  v111 = v582 + v578 - 2 * (v562 + v558);
  v112 = v573 - 4 * v553;
  v113 = v580 + v576 - 8 * (v560 + v556);
  v114 = v571 - 16 * v551;
  v115 = v582 - v578 - 32 * (v562 - v558);
  v116 = v569 - (v549 << 6);
  v117 = v580 - v576 - ((v560 - v556) << 7);
  v547 = v615 + v595;
  v546 = v575 + v555;
  v86 = v615 + v595 + v575 + v555;
  v102 = v615 + v595 - (v575 + v555);
  v804 = 0;
  for ( m = 0; ; *(&v22 + m + 80) = v547 - v545 )
  {
    v547 = *(&v22 + m + 65);
    v546 = *(&v22 + m + 81);
    v545 = (unsigned __int16)(v546 * dword_585DD8[v804 + 8]) + ((v546 * dword_585DD8[v804 + 8]) >> 16);
    *(&v22 + m + 65) = v547 + v545;
    *(&v22 + m + 81) = v547 - v545;
    v547 = *(&v22 + m + 66);
    v546 = *(&v22 + m + 82);
    v545 = (unsigned __int16)(v546 * dword_585DD8[v804 + 16]) + ((v546 * dword_585DD8[v804 + 16]) >> 16);
    *(&v22 + m + 66) = v547 + v545;
    *(&v22 + m + 82) = v547 - v545;
    v547 = *(&v22 + m + 67);
    v546 = *(&v22 + m + 83);
    v545 = (unsigned __int16)(v546 * dword_585DD8[v804 + 24]) + ((v546 * dword_585DD8[v804 + 24]) >> 16);
    *(&v22 + m + 67) = v547 + v545;
    *(&v22 + m + 83) = v547 - v545;
    m += 4;
    v804 += 32;
    if ( m > 0xF )
      break;
    v547 = *(&v22 + m + 64);
    v546 = *(&v22 + m + 80);
    v545 = (unsigned __int16)(v546 * dword_585DD8[v804]) + ((v546 * dword_585DD8[v804]) >> 16);
    *(&v22 + m + 64) = v547 + v545;
  }
  v544 = v797[3];
  v543 = v797[19];
  v542 = v797[35];
  v541 = v797[51];
  v540 = v544 + v542;
  v539 = v544 + 16 * v542;
  v538 = v544 - v542;
  v537 = v544 - 16 * v542;
  v536 = v543 + v541;
  v535 = (unsigned __int8)(4 * v543 + ((_BYTE)v541 << 6)) - ((4 * v543 + (v541 << 6)) >> 8);
  v534 = 16 * v543 - 16 * v541;
  v533 = (unsigned __int8)(((_BYTE)v543 << 6) + 4 * v541) - (((v543 << 6) + 4 * v541) >> 8);
  v532 = v544 + v542 + v543 + v541;
  v531 = v539 + v535;
  v530 = v544 - v542 + v534;
  v529 = v537 + v533;
  v528 = v544 + v542 - (v543 + v541);
  v527 = v539 - v535;
  v526 = v544 - v542 - v534;
  v525 = v537 - v533;
  v524 = v797[11];
  v523 = v797[27];
  v522 = v797[43];
  v521 = v797[59];
  v520 = v524 + v522;
  v519 = v524 + 16 * v522;
  v518 = v524 - v522;
  v517 = v524 - 16 * v522;
  v516 = v523 + v521;
  v515 = (unsigned __int8)(4 * v523 + ((_BYTE)v521 << 6)) - ((4 * v523 + (v521 << 6)) >> 8);
  v514 = 16 * v523 - 16 * v521;
  v513 = (unsigned __int8)(((_BYTE)v523 << 6) + 4 * v521) - (((v523 << 6) + 4 * v521) >> 8);
  v512 = v524 + v522 + v523 + v521;
  v511 = v519 + v515;
  v510 = v524 - v522 + v514;
  v509 = v517 + v513;
  v508 = v524 + v522 - (v523 + v521);
  v507 = v519 - v515;
  v506 = v524 - v522 - v514;
  v505 = v517 - v513;
  v118 = v532 + v512;
  v119 = 2 * (v519 + v515) + v539 + v535;
  v120 = 4 * v510 + v530;
  v121 = 8 * (v517 + v513) + v537 + v533;
  v122 = 16 * v508 + v528;
  v123 = 32 * (v519 - v515) + v539 - v535;
  v124 = (v506 << 6) + v526;
  v125 = ((v517 - v513) << 7) + v537 - v533;
  v126 = v532 - v512;
  v127 = v539 + v535 - 2 * (v519 + v515);
  v128 = v530 - 4 * v510;
  v129 = v537 + v533 - 8 * (v517 + v513);
  v130 = v528 - 16 * v508;
  v131 = v539 - v535 - 32 * (v519 - v515);
  v132 = v526 - (v506 << 6);
  v133 = v537 - v533 - ((v517 - v513) << 7);
  v504 = v797[7];
  v503 = v797[23];
  v502 = v797[39];
  v501 = v797[55];
  v500 = v504 + v502;
  v499 = v504 + 16 * v502;
  v498 = v504 - v502;
  v497 = v504 - 16 * v502;
  v496 = v503 + v501;
  v495 = (unsigned __int8)(4 * v503 + ((_BYTE)v501 << 6)) - ((4 * v503 + (v501 << 6)) >> 8);
  v494 = 16 * v503 - 16 * v501;
  v493 = (unsigned __int8)(((_BYTE)v503 << 6) + 4 * v501) - (((v503 << 6) + 4 * v501) >> 8);
  v492 = v504 + v502 + v503 + v501;
  v491 = v499 + v495;
  v490 = v504 - v502 + v494;
  v489 = v497 + v493;
  v488 = v504 + v502 - (v503 + v501);
  v487 = v499 - v495;
  v486 = v504 - v502 - v494;
  v485 = v497 - v493;
  v484 = v797[15];
  v483 = v797[31];
  v482 = v797[47];
  v481 = v797[63];
  v480 = v484 + v482;
  v479 = v484 + 16 * v482;
  v478 = v484 - v482;
  v477 = v484 - 16 * v482;
  v476 = v483 + v481;
  v475 = (unsigned __int8)(4 * v483 + ((_BYTE)v481 << 6)) - ((4 * v483 + (v481 << 6)) >> 8);
  v474 = 16 * v483 - 16 * v481;
  v473 = (unsigned __int8)(((_BYTE)v483 << 6) + 4 * v481) - (((v483 << 6) + 4 * v481) >> 8);
  v472 = v484 + v482 + v483 + v481;
  v471 = v479 + v475;
  v470 = v484 - v482 + v474;
  v469 = v477 + v473;
  v468 = v484 + v482 - (v483 + v481);
  v467 = v479 - v475;
  v466 = v484 - v482 - v474;
  v465 = v477 - v473;
  v135 = 2 * (v479 + v475) + v499 + v495;
  v136 = 4 * v470 + v490;
  v137 = 8 * (v477 + v473) + v497 + v493;
  v138 = 16 * v468 + v488;
  v139 = 32 * (v479 - v475) + v499 - v495;
  v140 = (v466 << 6) + v486;
  v141 = ((v477 - v473) << 7) + v497 - v493;
  v142 = v492 - v472;
  v143 = v499 + v495 - 2 * (v479 + v475);
  v144 = v490 - 4 * v470;
  v145 = v497 + v493 - 8 * (v477 + v473);
  v146 = v488 - 16 * v468;
  v147 = v499 - v495 - 32 * (v479 - v475);
  v148 = v486 - (v466 << 6);
  v149 = v497 - v493 - ((v477 - v473) << 7);
  v464 = v532 + v512;
  v463 = v492 + v472;
  v118 = v532 + v512 + v492 + v472;
  v134 = v532 + v512 - (v492 + v472);
  v802 = 0;
  for ( n = 0; ; *(&v22 + n + 112) = v464 - v462 )
  {
    v464 = *(&v22 + n + 97);
    v463 = *(&v22 + n + 113);
    v462 = (unsigned __int16)(v463 * dword_585DD8[v802 + 8]) + ((v463 * dword_585DD8[v802 + 8]) >> 16);
    *(&v22 + n + 97) = v464 + v462;
    *(&v22 + n + 113) = v464 - v462;
    v464 = *(&v22 + n + 98);
    v463 = *(&v22 + n + 114);
    v462 = (unsigned __int16)(v463 * dword_585DD8[v802 + 16]) + ((v463 * dword_585DD8[v802 + 16]) >> 16);
    *(&v22 + n + 98) = v464 + v462;
    *(&v22 + n + 114) = v464 - v462;
    v464 = *(&v22 + n + 99);
    v463 = *(&v22 + n + 115);
    v462 = (unsigned __int16)(v463 * dword_585DD8[v802 + 24]) + ((v463 * dword_585DD8[v802 + 24]) >> 16);
    *(&v22 + n + 99) = v464 + v462;
    *(&v22 + n + 115) = v464 - v462;
    n += 4;
    v802 += 32;
    if ( n > 0xF )
      break;
    v464 = *(&v22 + n + 96);
    v463 = *(&v22 + n + 112);
    v462 = (unsigned __int16)(v463 * dword_585DD8[v802]) + ((v463 * dword_585DD8[v802]) >> 16);
    *(&v22 + n + 96) = v464 + v462;
  }
  v461 = v86;
  v460 = v118;
  v86 += v118;
  v118 = v461 - v118;
  v800 = 0;
  for ( ii = 0; ; *(&v22 + ii + 96) = v461 - v459 )
  {
    v461 = *(&v22 + ii + 65);
    v460 = *(&v22 + ii + 97);
    v459 = (unsigned __int16)(v460 * dword_585DD8[v800 + 4]) + ((v460 * dword_585DD8[v800 + 4]) >> 16);
    *(&v22 + ii + 65) = v461 + v459;
    *(&v22 + ii + 97) = v461 - v459;
    v461 = *(&v22 + ii + 66);
    v460 = *(&v22 + ii + 98);
    v459 = (unsigned __int16)(v460 * dword_585DD8[v800 + 8]) + ((v460 * dword_585DD8[v800 + 8]) >> 16);
    *(&v22 + ii + 66) = v461 + v459;
    *(&v22 + ii + 98) = v461 - v459;
    v461 = *(&v22 + ii + 67);
    v460 = *(&v22 + ii + 99);
    v459 = (unsigned __int16)(v460 * dword_585DD8[v800 + 12]) + ((v460 * dword_585DD8[v800 + 12]) >> 16);
    *(&v22 + ii + 67) = v461 + v459;
    *(&v22 + ii + 99) = v461 - v459;
    ii += 4;
    v800 += 16;
    if ( ii > 0x1F )
      break;
    v461 = *(&v22 + ii + 64);
    v460 = *(&v22 + ii + 96);
    v459 = (unsigned __int16)(v460 * dword_585DD8[v800]) + ((v460 * dword_585DD8[v800]) >> 16);
    *(&v22 + ii + 64) = v461 + v459;
  }
  v458 = v22;
  v457 = v86;
  v22 += v86;
  v86 = v458 - v86;
  v798 = 0;
  for ( jj = 0; ; *(&v22 + jj + 64) = v458 - v456 )
  {
    v458 = *(&v22 + jj + 1);
    v457 = *(&v22 + jj + 65);
    v456 = (unsigned __int16)(v457 * dword_585DD8[v798 + 2]) + ((v457 * dword_585DD8[v798 + 2]) >> 16);
    *(&v22 + jj + 1) = v458 + v456;
    *(&v22 + jj + 65) = v458 - v456;
    v458 = *(&v22 + jj + 2);
    v457 = *(&v22 + jj + 66);
    v456 = (unsigned __int16)(v457 * dword_585DD8[v798 + 4]) + ((v457 * dword_585DD8[v798 + 4]) >> 16);
    *(&v22 + jj + 2) = v458 + v456;
    *(&v22 + jj + 66) = v458 - v456;
    v458 = *(&v22 + jj + 3);
    v457 = *(&v22 + jj + 67);
    v456 = (unsigned __int16)(v457 * dword_585DD8[v798 + 6]) + ((v457 * dword_585DD8[v798 + 6]) >> 16);
    *(&v22 + jj + 3) = v458 + v456;
    *(&v22 + jj + 67) = v458 - v456;
    jj += 4;
    v798 += 8;
    if ( jj > 0x3F )
      break;
    v458 = *(&v22 + jj);
    v457 = *(&v22 + jj + 64);
    v456 = (unsigned __int16)(v457 * dword_585DD8[v798]) + ((v457 * dword_585DD8[v798]) >> 16);
    *(&v22 + jj) = v458 + v456;
  }
  if ( a2 )
  {
    for ( kk = 0; kk <= 127; ++kk )
    {
      v454 = *(&v22 + kk) + word_5862D8[kk];
      v454 = (unsigned __int16)v454 + (v454 >> 16);
      v454 = (unsigned __int8)v454 - (v454 >> 8);
      v454 = (unsigned __int8)v454 - (v454 >> 8);
      if ( v454 <= 128 )
        v2 = v454;
      else
        v2 = v454 - 257;
      *(&v22 + kk) = v2;
    }
  }
  else
  {
    for ( kk = 0; kk <= 127; ++kk )
    {
      v455 = *(&v22 + kk) + word_5861D8[kk];
      v455 = (unsigned __int16)v455 + (v455 >> 16);
      v455 = (unsigned __int8)v455 - (v455 >> 8);
      v455 = (unsigned __int8)v455 - (v455 >> 8);
      if ( v455 <= 128 )
        v3 = v455;
      else
        v3 = v455 - 257;
      *(&v22 + kk) = v3;
    }
  }
  v453 = *((_DWORD *)a1 + 17);
  v452 = *((_DWORD *)a1 + 18);
  v451 = *((_DWORD *)a1 + 19);
  v450 = *((_DWORD *)a1 + 20);
  v449 = *((_DWORD *)a1 + 21);
  v448 = *((_DWORD *)a1 + 22);
  v447 = *((_DWORD *)a1 + 23);
  v446 = *((_DWORD *)a1 + 24);
  v445 = *((_DWORD *)a1 + 25);
  v444 = *((_DWORD *)a1 + 26);
  v443 = *((_DWORD *)a1 + 27);
  v442 = *((_DWORD *)a1 + 28);
  v441 = *((_DWORD *)a1 + 29);
  v440 = *((_DWORD *)a1 + 30);
  v439 = *((_DWORD *)a1 + 31);
  v438 = *((_DWORD *)a1 + 32);
  v4 = sub_32BB74((int)v797);
  v453 ^= v4;
  v5 = sub_32BB74((int)(v797 + 4));
  v452 ^= v5;
  v6 = sub_32BB74((int)(v797 + 8));
  v451 ^= v6;
  v7 = sub_32BB74((int)(v797 + 12));
  v450 ^= v7;
  v8 = sub_32BB74((int)(v797 + 16));
  v449 ^= v8;
  v9 = sub_32BB74((int)(v797 + 20));
  v448 ^= v9;
  v10 = sub_32BB74((int)(v797 + 24));
  v447 ^= v10;
  v11 = sub_32BB74((int)(v797 + 28));
  v446 ^= v11;
  v12 = sub_32BB74((int)(v797 + 32));
  v445 ^= v12;
  v13 = sub_32BB74((int)(v797 + 36));
  v444 ^= v13;
  v14 = sub_32BB74((int)(v797 + 40));
  v443 ^= v14;
  v15 = sub_32BB74((int)(v797 + 44));
  v442 ^= v15;
  v16 = sub_32BB74((int)(v797 + 48));
  v441 ^= v16;
  v17 = sub_32BB74((int)(v797 + 52));
  v440 ^= v17;
  v18 = sub_32BB74((int)(v797 + 56));
  v439 ^= v18;
  v19 = sub_32BB74((int)(v797 + 60));
  v438 ^= v19;
  v437 = __ROR4__(v453, 29);
  v436 = __ROR4__(v452, 29);
  v435 = __ROR4__(v451, 29);
  v434 = __ROR4__(v450, 29);
  v433 = (unsigned __int16)(185 * v54) + 12124160 * v55 + v441 + (v445 ^ (v449 ^ v445) & v453);
  v453 = v436 + __ROR4__(v433, 9);
  v441 = v445;
  v445 = v449;
  v432 = (unsigned __int16)(185 * v56) + 12124160 * v57 + v440 + (v444 ^ (v448 ^ v444) & v452);
  v452 = v437 + __ROR4__(v432, 9);
  v440 = v444;
  v444 = v448;
  v431 = (unsigned __int16)(185 * v58) + 12124160 * v59 + v439 + (v443 ^ (v447 ^ v443) & v451);
  v451 = v434 + __ROR4__(v431, 9);
  v439 = v443;
  v443 = v447;
  v430 = (unsigned __int16)(185 * v60) + 12124160 * v61 + v438 + (v442 ^ (v446 ^ v442) & v450);
  v450 = v435 + __ROR4__(v430, 9);
  v438 = v442;
  v442 = v446;
  v429 = __ROR4__(v453, 9);
  v428 = __ROR4__(v452, 9);
  v427 = __ROR4__(v451, 9);
  v426 = __ROR4__(v450, 9);
  v425 = (unsigned __int16)(185 * v70) + 12124160 * v71 + v441 + (v445 ^ (v437 ^ v445) & v453);
  v453 = v427 + __ROR4__(v425, 15);
  v424 = (unsigned __int16)(185 * v72) + 12124160 * v73 + v440 + (v444 ^ (v436 ^ v444) & v452);
  v452 = v426 + __ROR4__(v424, 15);
  v423 = (unsigned __int16)(185 * v74) + 12124160 * v75 + v439 + (v443 ^ (v435 ^ v443) & v451);
  v451 = v429 + __ROR4__(v423, 15);
  v422 = (unsigned __int16)(185 * v76) + 12124160 * v77 + v438 + (v442 ^ (v434 ^ v442) & v450);
  v450 = v428 + __ROR4__(v422, 15);
  v421 = __ROR4__(v453, 15);
  v420 = __ROR4__(v452, 15);
  v419 = __ROR4__(v451, 15);
  v418 = __ROR4__(v450, 15);
  v417 = (unsigned __int16)(185 * v22) + 12124160 * v23 + v449 + (v437 ^ (v429 ^ v437) & v453);
  v453 = v418 + __ROR4__(v417, 5);
  v416 = (unsigned __int16)(185 * v24) + 12124160 * v25 + v448 + (v436 ^ (v428 ^ v436) & v452);
  v452 = v419 + __ROR4__(v416, 5);
  v415 = (unsigned __int16)(185 * v26) + 12124160 * v27 + v447 + (v435 ^ (v427 ^ v435) & v451);
  v451 = v420 + __ROR4__(v415, 5);
  v414 = (unsigned __int16)(185 * v28) + 12124160 * v29 + v446 + (v434 ^ (v426 ^ v434) & v450);
  v450 = v421 + __ROR4__(v414, 5);
  v413 = __ROR4__(v453, 5);
  v412 = __ROR4__(v452, 5);
  v411 = __ROR4__(v451, 5);
  v410 = __ROR4__(v450, 5);
  v409 = (unsigned __int16)(185 * v38) + 12124160 * v39 + v437 + (v429 ^ (v421 ^ v429) & v453);
  v453 = v412 + __ROR4__(v409, 29);
  v408 = (unsigned __int16)(185 * v40) + 12124160 * v41 + v436 + (v428 ^ (v420 ^ v428) & v452);
  v452 = v413 + __ROR4__(v408, 29);
  v407 = (unsigned __int16)(185 * v42) + 12124160 * v43 + v435 + (v427 ^ (v419 ^ v427) & v451);
  v451 = v410 + __ROR4__(v407, 29);
  v406 = (unsigned __int16)(185 * v44) + 12124160 * v45 + v434 + (v426 ^ (v418 ^ v426) & v450);
  v450 = v411 + __ROR4__(v406, 29);
  v405 = __ROR4__(v453, 29);
  v404 = __ROR4__(v452, 29);
  v403 = __ROR4__(v451, 29);
  v402 = __ROR4__(v450, 29);
  v401 = (unsigned __int16)(185 * v78) + 12124160 * v79 + v429 + (v453 & v413 | v421 & (v453 | v413));
  v453 = v403 + __ROR4__(v401, 9);
  v400 = (unsigned __int16)(185 * v80) + 12124160 * v81 + v428 + (v452 & v412 | v420 & (v452 | v412));
  v452 = v402 + __ROR4__(v400, 9);
  v399 = (unsigned __int16)(185 * v82) + 12124160 * v83 + v427 + (v451 & v411 | v419 & (v451 | v411));
  v451 = v405 + __ROR4__(v399, 9);
  v398 = (unsigned __int16)(185 * v84) + 12124160 * v85 + v426 + (v450 & v410 | v418 & (v450 | v410));
  v450 = v404 + __ROR4__(v398, 9);
  v397 = __ROR4__(v453, 9);
  v396 = __ROR4__(v452, 9);
  v395 = __ROR4__(v451, 9);
  v394 = __ROR4__(v450, 9);
  v393 = (unsigned __int16)(185 * v62) + 12124160 * v63 + v421 + (v453 & v405 | v413 & (v453 | v405));
  v453 = v394 + __ROR4__(v393, 15);
  v392 = (unsigned __int16)(185 * v64) + 12124160 * v65 + v420 + (v452 & v404 | v412 & (v452 | v404));
  v452 = v395 + __ROR4__(v392, 15);
  v391 = (unsigned __int16)(185 * v66) + 12124160 * v67 + v419 + (v451 & v403 | v411 & (v451 | v403));
  v451 = v396 + __ROR4__(v391, 15);
  v390 = (unsigned __int16)(185 * v68) + 12124160 * v69 + v418 + (v450 & v402 | v410 & (v450 | v402));
  v450 = v397 + __ROR4__(v390, 15);
  v389 = __ROR4__(v453, 15);
  v388 = __ROR4__(v452, 15);
  v387 = __ROR4__(v451, 15);
  v386 = __ROR4__(v450, 15);
  v385 = (unsigned __int16)(185 * v46) + 12124160 * v47 + v413 + (v453 & v397 | v405 & (v453 | v397));
  v453 = v388 + __ROR4__(v385, 5);
  v384 = (unsigned __int16)(185 * v48) + 12124160 * v49 + v412 + (v452 & v396 | v404 & (v452 | v396));
  v452 = v389 + __ROR4__(v384, 5);
  v383 = (unsigned __int16)(185 * v50) + 12124160 * v51 + v411 + (v451 & v395 | v403 & (v451 | v395));
  v451 = v386 + __ROR4__(v383, 5);
  v382 = (unsigned __int16)(185 * v52) + 12124160 * v53 + v410 + (v450 & v394 | v402 & (v450 | v394));
  v450 = v387 + __ROR4__(v382, 5);
  v381 = __ROR4__(v453, 5);
  v380 = __ROR4__(v452, 5);
  v379 = __ROR4__(v451, 5);
  v378 = __ROR4__(v450, 5);
  v377 = (unsigned __int16)(185 * v30) + 12124160 * v31 + v405 + (v453 & v389 | v397 & (v453 | v389));
  v453 = v379 + __ROR4__(v377, 29);
  v376 = (unsigned __int16)(185 * v32) + 12124160 * v33 + v404 + (v452 & v388 | v396 & (v452 | v388));
  v452 = v378 + __ROR4__(v376, 29);
  v375 = (unsigned __int16)(185 * v34) + 12124160 * v35 + v403 + (v451 & v387 | v395 & (v451 | v387));
  v451 = v381 + __ROR4__(v375, 29);
  v374 = (unsigned __int16)(185 * v36) + 12124160 * v37 + v402 + (v450 & v386 | v394 & (v450 | v386));
  v450 = v380 + __ROR4__(v374, 29);
  v373 = __ROR4__(v453, 4);
  v372 = __ROR4__(v452, 4);
  v371 = __ROR4__(v451, 4);
  v370 = __ROR4__(v450, 4);
  v369 = (unsigned __int16)(185 * v142) + 12124160 * v143 + v397 + (v389 ^ (v381 ^ v389) & v453);
  v453 = v370 + __ROR4__(v369, 13);
  v368 = (unsigned __int16)(185 * v144) + 12124160 * v145 + v396 + (v388 ^ (v380 ^ v388) & v452);
  v452 = v371 + __ROR4__(v368, 13);
  v367 = (unsigned __int16)(185 * v146) + 12124160 * v147 + v395 + (v387 ^ (v379 ^ v387) & v451);
  v451 = v372 + __ROR4__(v367, 13);
  v366 = (unsigned __int16)(185 * v148) + 12124160 * v149 + v394 + (v386 ^ (v378 ^ v386) & v450);
  v450 = v373 + __ROR4__(v366, 13);
  v365 = __ROR4__(v453, 13);
  v364 = __ROR4__(v452, 13);
  v363 = __ROR4__(v451, 13);
  v362 = __ROR4__(v450, 13);
  v361 = (unsigned __int16)(185 * v110) + 12124160 * v111 + v389 + (v381 ^ (v373 ^ v381) & v453);
  v453 = v364 + __ROR4__(v361, 10);
  v360 = (unsigned __int16)(185 * v112) + 12124160 * v113 + v388 + (v380 ^ (v372 ^ v380) & v452);
  v452 = v365 + __ROR4__(v360, 10);
  v359 = (unsigned __int16)(185 * v114) + 12124160 * v115 + v387 + (v379 ^ (v371 ^ v379) & v451);
  v451 = v362 + __ROR4__(v359, 10);
  v358 = (unsigned __int16)(185 * v116) + 12124160 * v117 + v386 + (v378 ^ (v370 ^ v378) & v450);
  v450 = v363 + __ROR4__(v358, 10);
  v357 = __ROR4__(v453, 10);
  v356 = __ROR4__(v452, 10);
  v355 = __ROR4__(v451, 10);
  v354 = __ROR4__(v450, 10);
  v353 = (unsigned __int16)(185 * v118) + 12124160 * v119 + v381 + (v373 ^ (v365 ^ v373) & v453);
  v453 = v355 + __ROR4__(v353, 25);
  v352 = (unsigned __int16)(185 * v120) + 12124160 * v121 + v380 + (v372 ^ (v364 ^ v372) & v452);
  v452 = v354 + __ROR4__(v352, 25);
  v351 = (unsigned __int16)(185 * v122) + 12124160 * v123 + v379 + (v371 ^ (v363 ^ v371) & v451);
  v451 = v357 + __ROR4__(v351, 25);
  v350 = (unsigned __int16)(185 * v124) + 12124160 * v125 + v378 + (v370 ^ (v362 ^ v370) & v450);
  v450 = v356 + __ROR4__(v350, 25);
  v349 = __ROR4__(v453, 25);
  v348 = __ROR4__(v452, 25);
  v347 = __ROR4__(v451, 25);
  v346 = __ROR4__(v450, 25);
  v345 = (unsigned __int16)(185 * v86) + 12124160 * v87 + v373 + (v365 ^ (v357 ^ v365) & v453);
  v453 = v346 + __ROR4__(v345, 4);
  v344 = (unsigned __int16)(185 * v88) + 12124160 * v89 + v372 + (v364 ^ (v356 ^ v364) & v452);
  v452 = v347 + __ROR4__(v344, 4);
  v343 = (unsigned __int16)(185 * v90) + 12124160 * v91 + v371 + (v363 ^ (v355 ^ v363) & v451);
  v451 = v348 + __ROR4__(v343, 4);
  v342 = (unsigned __int16)(185 * v92) + 12124160 * v93 + v370 + (v362 ^ (v354 ^ v362) & v450);
  v450 = v349 + __ROR4__(v342, 4);
  v341 = __ROR4__(v453, 4);
  v340 = __ROR4__(v452, 4);
  v339 = __ROR4__(v451, 4);
  v338 = __ROR4__(v450, 4);
  v337 = (unsigned __int16)(185 * v94) + 12124160 * v95 + v365 + (v453 & v349 | v357 & (v453 | v349));
  v453 = v340 + __ROR4__(v337, 13);
  v336 = (unsigned __int16)(185 * v96) + 12124160 * v97 + v364 + (v452 & v348 | v356 & (v452 | v348));
  v452 = v341 + __ROR4__(v336, 13);
  v335 = (unsigned __int16)(185 * v98) + 12124160 * v99 + v363 + (v451 & v347 | v355 & (v451 | v347));
  v451 = v338 + __ROR4__(v335, 13);
  v334 = (unsigned __int16)(185 * v100) + 12124160 * v101 + v362 + (v450 & v346 | v354 & (v450 | v346));
  v450 = v339 + __ROR4__(v334, 13);
  v333 = __ROR4__(v453, 13);
  v332 = __ROR4__(v452, 13);
  v331 = __ROR4__(v451, 13);
  v330 = __ROR4__(v450, 13);
  v329 = (unsigned __int16)(185 * v126) + 12124160 * v127 + v357 + (v453 & v341 | v349 & (v453 | v341));
  v453 = v331 + __ROR4__(v329, 10);
  v328 = (unsigned __int16)(185 * v128) + 12124160 * v129 + v356 + (v452 & v340 | v348 & (v452 | v340));
  v452 = v330 + __ROR4__(v328, 10);
  v327 = (unsigned __int16)(185 * v130) + 12124160 * v131 + v355 + (v451 & v339 | v347 & (v451 | v339));
  v451 = v333 + __ROR4__(v327, 10);
  v326 = (unsigned __int16)(185 * v132) + 12124160 * v133 + v354 + (v450 & v338 | v346 & (v450 | v338));
  v450 = v332 + __ROR4__(v326, 10);
  v325 = __ROR4__(v453, 10);
  v324 = __ROR4__(v452, 10);
  v323 = __ROR4__(v451, 10);
  v322 = __ROR4__(v450, 10);
  v321 = (unsigned __int16)(185 * v102) + 12124160 * v103 + v349 + (v453 & v333 | v341 & (v453 | v333));
  v453 = v322 + __ROR4__(v321, 25);
  v320 = (unsigned __int16)(185 * v104) + 12124160 * v105 + v348 + (v452 & v332 | v340 & (v452 | v332));
  v452 = v323 + __ROR4__(v320, 25);
  v319 = (unsigned __int16)(185 * v106) + 12124160 * v107 + v347 + (v451 & v331 | v339 & (v451 | v331));
  v451 = v324 + __ROR4__(v319, 25);
  v318 = (unsigned __int16)(185 * v108) + 12124160 * v109 + v346 + (v450 & v330 | v338 & (v450 | v330));
  v450 = v325 + __ROR4__(v318, 25);
  v317 = __ROR4__(v453, 25);
  v316 = __ROR4__(v452, 25);
  v315 = __ROR4__(v451, 25);
  v314 = __ROR4__(v450, 25);
  v313 = (unsigned __int16)(185 * v134) + 12124160 * v135 + v341 + (v453 & v325 | v333 & (v453 | v325));
  v453 = v316 + __ROR4__(v313, 4);
  v312 = (unsigned __int16)(185 * v136) + 12124160 * v137 + v340 + (v452 & v324 | v332 & (v452 | v324));
  v452 = v317 + __ROR4__(v312, 4);
  v311 = (unsigned __int16)(185 * v138) + 12124160 * v139 + v339 + (v451 & v323 | v331 & (v451 | v323));
  v451 = v314 + __ROR4__(v311, 4);
  v310 = (unsigned __int16)(185 * v140) + 12124160 * v141 + v338 + (v450 & v322 | v330 & (v450 | v322));
  v450 = v315 + __ROR4__(v310, 4);
  v309 = __ROR4__(v453, 3);
  v308 = __ROR4__(v452, 3);
  v307 = __ROR4__(v451, 3);
  v306 = __ROR4__(v450, 3);
  v305 = (unsigned __int16)(233 * v30) + 15269888 * v94 + v333 + (v325 ^ (v317 ^ v325) & v453);
  v453 = v307 + __ROR4__(v305, 23);
  v304 = (unsigned __int16)(233 * v32) + 15269888 * v96 + v332 + (v324 ^ (v316 ^ v324) & v452);
  v452 = v306 + __ROR4__(v304, 23);
  v303 = (unsigned __int16)(233 * v34) + 15269888 * v98 + v331 + (v323 ^ (v315 ^ v323) & v451);
  v451 = v309 + __ROR4__(v303, 23);
  v302 = (unsigned __int16)(233 * v36) + 15269888 * v100 + v330 + (v322 ^ (v314 ^ v322) & v450);
  v450 = v308 + __ROR4__(v302, 23);
  v301 = __ROR4__(v453, 23);
  v300 = __ROR4__(v452, 23);
  v299 = __ROR4__(v451, 23);
  v298 = __ROR4__(v450, 23);
  v297 = (unsigned __int16)(233 * v38) + 15269888 * v102 + v325 + (v317 ^ (v309 ^ v317) & v453);
  v453 = v298 + __ROR4__(v297, 17);
  v296 = (unsigned __int16)(233 * v40) + 15269888 * v104 + v324 + (v316 ^ (v308 ^ v316) & v452);
  v452 = v299 + __ROR4__(v296, 17);
  v295 = (unsigned __int16)(233 * v42) + 15269888 * v106 + v323 + (v315 ^ (v307 ^ v315) & v451);
  v451 = v300 + __ROR4__(v295, 17);
  v294 = (unsigned __int16)(233 * v44) + 15269888 * v108 + v322 + (v314 ^ (v306 ^ v314) & v450);
  v450 = v301 + __ROR4__(v294, 17);
  v293 = __ROR4__(v453, 17);
  v292 = __ROR4__(v452, 17);
  v291 = __ROR4__(v451, 17);
  v290 = __ROR4__(v450, 17);
  v289 = (unsigned __int16)(233 * v78) + 15269888 * v142 + v317 + (v309 ^ (v301 ^ v309) & v453);
  v453 = v292 + __ROR4__(v289, 27);
  v288 = (unsigned __int16)(233 * v80) + 15269888 * v144 + v316 + (v308 ^ (v300 ^ v308) & v452);
  v452 = v293 + __ROR4__(v288, 27);
  v287 = (unsigned __int16)(233 * v82) + 15269888 * v146 + v315 + (v307 ^ (v299 ^ v307) & v451);
  v451 = v290 + __ROR4__(v287, 27);
  v286 = (unsigned __int16)(233 * v84) + 15269888 * v148 + v314 + (v306 ^ (v298 ^ v306) & v450);
  v450 = v291 + __ROR4__(v286, 27);
  v285 = __ROR4__(v453, 27);
  v284 = __ROR4__(v452, 27);
  v283 = __ROR4__(v451, 27);
  v282 = __ROR4__(v450, 27);
  v281 = (unsigned __int16)(233 * v54) + 15269888 * v118 + v309 + (v301 ^ (v293 ^ v301) & v453);
  v453 = v283 + __ROR4__(v281, 3);
  v280 = (unsigned __int16)(233 * v56) + 15269888 * v120 + v308 + (v300 ^ (v292 ^ v300) & v452);
  v452 = v282 + __ROR4__(v280, 3);
  v279 = (unsigned __int16)(233 * v58) + 15269888 * v122 + v307 + (v299 ^ (v291 ^ v299) & v451);
  v451 = v285 + __ROR4__(v279, 3);
  v278 = (unsigned __int16)(233 * v60) + 15269888 * v124 + v306 + (v298 ^ (v290 ^ v298) & v450);
  v450 = v284 + __ROR4__(v278, 3);
  v277 = __ROR4__(v453, 3);
  v276 = __ROR4__(v452, 3);
  v275 = __ROR4__(v451, 3);
  v274 = __ROR4__(v450, 3);
  v273 = (unsigned __int16)(233 * v70) + 15269888 * v134 + v301 + (v453 & v285 | v293 & (v453 | v285));
  v453 = v274 + __ROR4__(v273, 23);
  v272 = (unsigned __int16)(233 * v72) + 15269888 * v136 + v300 + (v452 & v284 | v292 & (v452 | v284));
  v452 = v275 + __ROR4__(v272, 23);
  v271 = (unsigned __int16)(233 * v74) + 15269888 * v138 + v299 + (v451 & v283 | v291 & (v451 | v283));
  v451 = v276 + __ROR4__(v271, 23);
  v270 = (unsigned __int16)(233 * v76) + 15269888 * v140 + v298 + (v450 & v282 | v290 & (v450 | v282));
  v450 = v277 + __ROR4__(v270, 23);
  v269 = __ROR4__(v453, 23);
  v268 = __ROR4__(v452, 23);
  v267 = __ROR4__(v451, 23);
  v266 = __ROR4__(v450, 23);
  v265 = (unsigned __int16)(233 * v62) + 15269888 * v126 + v293 + (v453 & v277 | v285 & (v453 | v277));
  v453 = v268 + __ROR4__(v265, 17);
  v264 = (unsigned __int16)(233 * v64) + 15269888 * v128 + v292 + (v452 & v276 | v284 & (v452 | v276));
  v452 = v269 + __ROR4__(v264, 17);
  v263 = (unsigned __int16)(233 * v66) + 15269888 * v130 + v291 + (v451 & v275 | v283 & (v451 | v275));
  v451 = v266 + __ROR4__(v263, 17);
  v262 = (unsigned __int16)(233 * v68) + 15269888 * v132 + v290 + (v450 & v274 | v282 & (v450 | v274));
  v450 = v267 + __ROR4__(v262, 17);
  v261 = __ROR4__(v453, 17);
  v260 = __ROR4__(v452, 17);
  v259 = __ROR4__(v451, 17);
  v258 = __ROR4__(v450, 17);
  v257 = (unsigned __int16)(233 * v22) + 15269888 * v86 + v285 + (v453 & v269 | v277 & (v453 | v269));
  v453 = v259 + __ROR4__(v257, 27);
  v256 = (unsigned __int16)(233 * v24) + 15269888 * v88 + v284 + (v452 & v268 | v276 & (v452 | v268));
  v452 = v258 + __ROR4__(v256, 27);
  v255 = (unsigned __int16)(233 * v26) + 15269888 * v90 + v283 + (v451 & v267 | v275 & (v451 | v267));
  v451 = v261 + __ROR4__(v255, 27);
  v254 = (unsigned __int16)(233 * v28) + 15269888 * v92 + v282 + (v450 & v266 | v274 & (v450 | v266));
  v450 = v260 + __ROR4__(v254, 27);
  v253 = __ROR4__(v453, 27);
  v252 = __ROR4__(v452, 27);
  v251 = __ROR4__(v451, 27);
  v250 = __ROR4__(v450, 27);
  v249 = (unsigned __int16)(233 * v46) + 15269888 * v110 + v277 + (v453 & v261 | v269 & (v453 | v261));
  v453 = v250 + __ROR4__(v249, 3);
  v248 = (unsigned __int16)(233 * v48) + 15269888 * v112 + v276 + (v452 & v260 | v268 & (v452 | v260));
  v452 = v251 + __ROR4__(v248, 3);
  v247 = (unsigned __int16)(233 * v50) + 15269888 * v114 + v275 + (v451 & v259 | v267 & (v451 | v259));
  v451 = v252 + __ROR4__(v247, 3);
  v246 = (unsigned __int16)(233 * v52) + 15269888 * v116 + v274 + (v450 & v258 | v266 & (v450 | v258));
  v450 = v253 + __ROR4__(v246, 3);
  v245 = __ROR4__(v453, 28);
  v244 = __ROR4__(v452, 28);
  v243 = __ROR4__(v451, 28);
  v242 = __ROR4__(v450, 28);
  v241 = (unsigned __int16)(233 * v71) + 15269888 * v135 + v269 + (v261 ^ (v253 ^ v261) & v453);
  v453 = v244 + __ROR4__(v241, 19);
  v240 = (unsigned __int16)(233 * v73) + 15269888 * v137 + v268 + (v260 ^ (v252 ^ v260) & v452);
  v452 = v245 + __ROR4__(v240, 19);
  v239 = (unsigned __int16)(233 * v75) + 15269888 * v139 + v267 + (v259 ^ (v251 ^ v259) & v451);
  v451 = v242 + __ROR4__(v239, 19);
  v238 = (unsigned __int16)(233 * v77) + 15269888 * v141 + v266 + (v258 ^ (v250 ^ v258) & v450);
  v450 = v243 + __ROR4__(v238, 19);
  v237 = __ROR4__(v453, 19);
  v236 = __ROR4__(v452, 19);
  v235 = __ROR4__(v451, 19);
  v234 = __ROR4__(v450, 19);
  v233 = (unsigned __int16)(233 * v23) + 15269888 * v87 + v261 + (v253 ^ (v245 ^ v253) & v453);
  v453 = v235 + __ROR4__(v233, 22);
  v232 = (unsigned __int16)(233 * v25) + 15269888 * v89 + v260 + (v252 ^ (v244 ^ v252) & v452);
  v452 = v234 + __ROR4__(v232, 22);
  v231 = (unsigned __int16)(233 * v27) + 15269888 * v91 + v259 + (v251 ^ (v243 ^ v251) & v451);
  v451 = v237 + __ROR4__(v231, 22);
  v230 = (unsigned __int16)(233 * v29) + 15269888 * v93 + v258 + (v250 ^ (v242 ^ v250) & v450);
  v450 = v236 + __ROR4__(v230, 22);
  v229 = __ROR4__(v453, 22);
  v228 = __ROR4__(v452, 22);
  v227 = __ROR4__(v451, 22);
  v226 = __ROR4__(v450, 22);
  v225 = (unsigned __int16)(233 * v31) + 15269888 * v95 + v253 + (v245 ^ (v237 ^ v245) & v453);
  v453 = v226 + __ROR4__(v225, 7);
  v224 = (unsigned __int16)(233 * v33) + 15269888 * v97 + v252 + (v244 ^ (v236 ^ v244) & v452);
  v452 = v227 + __ROR4__(v224, 7);
  v223 = (unsigned __int16)(233 * v35) + 15269888 * v99 + v251 + (v243 ^ (v235 ^ v243) & v451);
  v451 = v228 + __ROR4__(v223, 7);
  v222 = (unsigned __int16)(233 * v37) + 15269888 * v101 + v250 + (v242 ^ (v234 ^ v242) & v450);
  v450 = v229 + __ROR4__(v222, 7);
  v221 = __ROR4__(v453, 7);
  v220 = __ROR4__(v452, 7);
  v219 = __ROR4__(v451, 7);
  v218 = __ROR4__(v450, 7);
  v217 = (unsigned __int16)(233 * v79) + 15269888 * v143 + v245 + (v237 ^ (v229 ^ v237) & v453);
  v453 = v220 + __ROR4__(v217, 28);
  v216 = (unsigned __int16)(233 * v81) + 15269888 * v145 + v244 + (v236 ^ (v228 ^ v236) & v452);
  v452 = v221 + __ROR4__(v216, 28);
  v215 = (unsigned __int16)(233 * v83) + 15269888 * v147 + v243 + (v235 ^ (v227 ^ v235) & v451);
  v451 = v218 + __ROR4__(v215, 28);
  v214 = (unsigned __int16)(233 * v85) + 15269888 * v149 + v242 + (v234 ^ (v226 ^ v234) & v450);
  v450 = v219 + __ROR4__(v214, 28);
  v213 = __ROR4__(v453, 28);
  v212 = __ROR4__(v452, 28);
  v211 = __ROR4__(v451, 28);
  v210 = __ROR4__(v450, 28);
  v209 = (unsigned __int16)(233 * v47) + 15269888 * v111 + v237 + (v453 & v221 | v229 & (v453 | v221));
  v453 = v211 + __ROR4__(v209, 19);
  v208 = (unsigned __int16)(233 * v49) + 15269888 * v113 + v236 + (v452 & v220 | v228 & (v452 | v220));
  v452 = v210 + __ROR4__(v208, 19);
  v207 = (unsigned __int16)(233 * v51) + 15269888 * v115 + v235 + (v451 & v219 | v227 & (v451 | v219));
  v451 = v213 + __ROR4__(v207, 19);
  v206 = (unsigned __int16)(233 * v53) + 15269888 * v117 + v234 + (v450 & v218 | v226 & (v450 | v218));
  v450 = v212 + __ROR4__(v206, 19);
  v205 = __ROR4__(v453, 19);
  v204 = __ROR4__(v452, 19);
  v203 = __ROR4__(v451, 19);
  v202 = __ROR4__(v450, 19);
  v201 = (unsigned __int16)(233 * v63) + 15269888 * v127 + v229 + (v453 & v213 | v221 & (v453 | v213));
  v453 = v202 + __ROR4__(v201, 22);
  v200 = (unsigned __int16)(233 * v65) + 15269888 * v129 + v228 + (v452 & v212 | v220 & (v452 | v212));
  v452 = v203 + __ROR4__(v200, 22);
  v199 = (unsigned __int16)(233 * v67) + 15269888 * v131 + v227 + (v451 & v211 | v219 & (v451 | v211));
  v451 = v204 + __ROR4__(v199, 22);
  v198 = (unsigned __int16)(233 * v69) + 15269888 * v133 + v226 + (v450 & v210 | v218 & (v450 | v210));
  v450 = v205 + __ROR4__(v198, 22);
  v197 = __ROR4__(v453, 22);
  v196 = __ROR4__(v452, 22);
  v195 = __ROR4__(v451, 22);
  v194 = __ROR4__(v450, 22);
  v193 = (unsigned __int16)(233 * v55) + 15269888 * v119 + v221 + (v453 & v205 | v213 & (v453 | v205));
  v453 = v196 + __ROR4__(v193, 7);
  v192 = (unsigned __int16)(233 * v57) + 15269888 * v121 + v220 + (v452 & v204 | v212 & (v452 | v204));
  v452 = v197 + __ROR4__(v192, 7);
  v191 = (unsigned __int16)(233 * v59) + 15269888 * v123 + v219 + (v451 & v203 | v211 & (v451 | v203));
  v451 = v194 + __ROR4__(v191, 7);
  v190 = (unsigned __int16)(233 * v61) + 15269888 * v125 + v218 + (v450 & v202 | v210 & (v450 | v202));
  v450 = v195 + __ROR4__(v190, 7);
  v189 = __ROR4__(v453, 7);
  v188 = __ROR4__(v452, 7);
  v187 = __ROR4__(v451, 7);
  v186 = __ROR4__(v450, 7);
  v185 = (unsigned __int16)(233 * v39) + 15269888 * v103 + v213 + (v453 & v197 | v205 & (v453 | v197));
  v453 = v187 + __ROR4__(v185, 28);
  v441 = v205;
  v445 = v197;
  v449 = v189;
  v184 = (unsigned __int16)(233 * v41) + 15269888 * v105 + v212 + (v452 & v196 | v204 & (v452 | v196));
  v452 = v186 + __ROR4__(v184, 28);
  v440 = v204;
  v444 = v196;
  v448 = v188;
  v183 = (unsigned __int16)(233 * v43) + 15269888 * v107 + v211 + (v451 & v195 | v203 & (v451 | v195));
  v451 = v189 + __ROR4__(v183, 28);
  v439 = v203;
  v443 = v195;
  v447 = v187;
  result = v450 | v194;
  v182 = (unsigned __int16)(233 * v45) + 15269888 * v109 + v210 + (v450 & v194 | v202 & (v450 | v194));
  v450 = v188 + __ROR4__(v182, 28);
  v438 = v202;
  v442 = v194;
  v446 = v186;
  v181 = __ROR4__(v453, 28);
  v180 = __ROR4__(v452, 28);
  v179 = __ROR4__(v451, 28);
  v178 = __ROR4__(v450, 28);
  v177 = *((_DWORD *)a1 + 17) + v205 + (v197 ^ (v189 ^ v197) & v453);
  v453 = v178 + __ROR4__(v177, 19);
  v441 = v197;
  v445 = v189;
  v449 = v181;
  v176 = *((_DWORD *)a1 + 18) + v204 + (v196 ^ (v188 ^ v196) & v452);
  v452 = v179 + __ROR4__(v176, 19);
  v440 = v196;
  v444 = v188;
  v448 = v180;
  v175 = *((_DWORD *)a1 + 19) + v203 + (v195 ^ (v187 ^ v195) & v451);
  v451 = v180 + __ROR4__(v175, 19);
  v439 = v195;
  v443 = v187;
  v447 = v179;
  v174 = *((_DWORD *)a1 + 20) + v202 + (v194 ^ (v186 ^ v194) & v450);
  v450 = v181 + __ROR4__(v174, 19);
  v438 = v194;
  v442 = v186;
  v446 = v178;
  v173 = __ROR4__(v453, 19);
  v172 = __ROR4__(v452, 19);
  v171 = __ROR4__(v451, 19);
  v170 = __ROR4__(v450, 19);
  v169 = *((_DWORD *)a1 + 21) + v197 + (v189 ^ (v181 ^ v189) & v453);
  v453 = v172 + __ROR4__(v169, 22);
  v441 = v189;
  v445 = v181;
  v449 = v173;
  v168 = *((_DWORD *)a1 + 22) + v196 + (v188 ^ (v180 ^ v188) & v452);
  v452 = v173 + __ROR4__(v168, 22);
  v440 = v188;
  v444 = v180;
  v448 = v172;
  v167 = *((_DWORD *)a1 + 23) + v195 + (v187 ^ (v179 ^ v187) & v451);
  v451 = v170 + __ROR4__(v167, 22);
  v439 = v187;
  v443 = v179;
  v447 = v171;
  v166 = *((_DWORD *)a1 + 24) + v194 + (v186 ^ (v178 ^ v186) & v450);
  v450 = v171 + __ROR4__(v166, 22);
  v438 = v186;
  v442 = v178;
  v446 = v170;
  v165 = __ROR4__(v453, 22);
  v164 = __ROR4__(v452, 22);
  v163 = __ROR4__(v451, 22);
  v162 = __ROR4__(v450, 22);
  v161 = *((_DWORD *)a1 + 25) + v189 + (v181 ^ (v173 ^ v181) & v453);
  v453 = v163 + __ROR4__(v161, 7);
  v441 = v181;
  v445 = v173;
  v449 = v165;
  v160 = *((_DWORD *)a1 + 26) + v188 + (v180 ^ (v172 ^ v180) & v452);
  v452 = v162 + __ROR4__(v160, 7);
  v440 = v180;
  v444 = v172;
  v448 = v164;
  v159 = *((_DWORD *)a1 + 27) + v187 + (v179 ^ (v171 ^ v179) & v451);
  v451 = v165 + __ROR4__(v159, 7);
  v439 = v179;
  v443 = v171;
  v447 = v163;
  v158 = *((_DWORD *)a1 + 28) + v186 + (v178 ^ (v170 ^ v178) & v450);
  v450 = v164 + __ROR4__(v158, 7);
  v438 = v178;
  v442 = v170;
  v446 = v162;
  v157 = __ROR4__(v453, 7);
  v156 = __ROR4__(v452, 7);
  v155 = __ROR4__(v451, 7);
  v154 = __ROR4__(v450, 7);
  v153 = *((_DWORD *)a1 + 29) + v181 + (v173 ^ (v165 ^ v173) & v453);
  v453 = v154 + __ROR4__(v153, 28);
  v441 = v173;
  v445 = v165;
  v449 = v157;
  v152 = *((_DWORD *)a1 + 30) + v180 + (v172 ^ (v164 ^ v172) & v452);
  v452 = v155 + __ROR4__(v152, 28);
  v440 = v172;
  v444 = v164;
  v448 = v156;
  v151 = *((_DWORD *)a1 + 31) + v179 + (v171 ^ (v163 ^ v171) & v451);
  v451 = v156 + __ROR4__(v151, 28);
  v439 = v171;
  v443 = v163;
  v447 = v155;
  v150 = *((_DWORD *)a1 + 32) + v178 + (v170 ^ (v162 ^ v170) & v450);
  v450 = v157 + __ROR4__(v150, 28);
  v438 = v170;
  v442 = v162;
  v446 = v154;
  *((_DWORD *)a1 + 17) = v453;
  *((_DWORD *)a1 + 18) = v452;
  *((_DWORD *)a1 + 19) = v451;
  *((_DWORD *)a1 + 20) = v450;
  *((_DWORD *)a1 + 21) = v449;
  *((_DWORD *)a1 + 22) = v448;
  *((_DWORD *)a1 + 23) = v447;
  *((_DWORD *)a1 + 24) = v446;
  *((_DWORD *)a1 + 25) = v445;
  *((_DWORD *)a1 + 26) = v444;
  *((_DWORD *)a1 + 27) = v443;
  *((_DWORD *)a1 + 28) = v442;
  *((_DWORD *)a1 + 29) = v441;
  *((_DWORD *)a1 + 30) = v440;
  *((_DWORD *)a1 + 31) = v439;
  *((_DWORD *)a1 + 32) = v438;
  return result;
}
