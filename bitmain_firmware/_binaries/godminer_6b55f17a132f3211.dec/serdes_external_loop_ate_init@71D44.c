int __fastcall serdes_external_loop_ate_init(int a1, int a2, int a3, int a4)
{
  int v4; // r7
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
  int v20; // r0
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r3
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r0
  int v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int v104; // r0
  int v105; // r0
  int v106; // r0
  int v107; // r0
  int v108; // r0
  int v109; // r0
  int v110; // r0
  int v111; // r0
  int v112; // r0
  int v113; // r0
  int v114; // r0
  int v115; // r0
  int v116; // r0
  int v117; // r0
  int v118; // r0
  int v119; // r0
  int v120; // r0
  int v121; // r0
  int v122; // r0
  int v123; // r0
  int v124; // r0
  int v125; // r0
  int v126; // r0
  int v127; // r0
  int v128; // r0
  int v129; // r0
  int v130; // r0
  _BYTE v134[32]; // [sp+58h] [bp+20h] BYREF
  int v135; // [sp+78h] [bp+40h] BYREF
  _BYTE v136[32]; // [sp+98h] [bp+60h] BYREF
  int v137; // [sp+B8h] [bp+80h] BYREF
  _BYTE v138[32]; // [sp+D8h] [bp+A0h] BYREF
  int v139; // [sp+F8h] [bp+C0h] BYREF
  _BYTE v140[32]; // [sp+118h] [bp+E0h] BYREF
  int v141; // [sp+138h] [bp+100h] BYREF
  _BYTE v142[32]; // [sp+158h] [bp+120h] BYREF
  int v143; // [sp+178h] [bp+140h] BYREF
  _BYTE v144[32]; // [sp+198h] [bp+160h] BYREF
  int v145; // [sp+1B8h] [bp+180h] BYREF
  _BYTE v146[32]; // [sp+1D8h] [bp+1A0h] BYREF
  int v147; // [sp+1F8h] [bp+1C0h] BYREF
  _BYTE v148[32]; // [sp+218h] [bp+1E0h] BYREF
  int v149; // [sp+238h] [bp+200h] BYREF
  _BYTE v150[32]; // [sp+258h] [bp+220h] BYREF
  int v151; // [sp+278h] [bp+240h] BYREF
  _BYTE v152[32]; // [sp+298h] [bp+260h] BYREF
  int v153; // [sp+2B8h] [bp+280h] BYREF
  _BYTE v154[32]; // [sp+2D8h] [bp+2A0h] BYREF
  int v155; // [sp+2F8h] [bp+2C0h] BYREF
  _BYTE v156[32]; // [sp+318h] [bp+2E0h] BYREF
  int v157; // [sp+338h] [bp+300h] BYREF
  _BYTE v158[32]; // [sp+358h] [bp+320h] BYREF
  int v159; // [sp+378h] [bp+340h] BYREF
  _BYTE v160[32]; // [sp+398h] [bp+360h] BYREF
  int v161; // [sp+3B8h] [bp+380h] BYREF
  _BYTE v162[32]; // [sp+3D8h] [bp+3A0h] BYREF
  int v163; // [sp+3F8h] [bp+3C0h] BYREF
  int v164; // [sp+418h] [bp+3E0h] BYREF
  int v165; // [sp+438h] [bp+400h] BYREF
  int v166; // [sp+458h] [bp+420h] BYREF
  int v167; // [sp+478h] [bp+440h] BYREF
  int v168; // [sp+498h] [bp+460h] BYREF
  int v169; // [sp+4B8h] [bp+480h] BYREF
  int v170; // [sp+4D8h] [bp+4A0h] BYREF
  int v171; // [sp+4F8h] [bp+4C0h] BYREF
  int v172; // [sp+518h] [bp+4E0h] BYREF
  int v173; // [sp+538h] [bp+500h] BYREF
  int v174; // [sp+558h] [bp+520h] BYREF
  int v175; // [sp+578h] [bp+540h] BYREF
  int v176; // [sp+598h] [bp+560h] BYREF
  int v177; // [sp+5B8h] [bp+580h] BYREF
  int v178; // [sp+5D8h] [bp+5A0h] BYREF
  int v179; // [sp+5F8h] [bp+5C0h] BYREF
  int v180; // [sp+618h] [bp+5E0h] BYREF
  int v181; // [sp+638h] [bp+600h] BYREF
  int v182; // [sp+658h] [bp+620h] BYREF
  int v183; // [sp+678h] [bp+640h] BYREF
  int v184; // [sp+698h] [bp+660h] BYREF
  int v185; // [sp+6B8h] [bp+680h] BYREF
  int v186; // [sp+6D8h] [bp+6A0h] BYREF
  int v187; // [sp+6F8h] [bp+6C0h] BYREF
  int v188; // [sp+718h] [bp+6E0h] BYREF
  int v189; // [sp+738h] [bp+700h] BYREF
  int v190; // [sp+758h] [bp+720h] BYREF
  int v191; // [sp+778h] [bp+740h] BYREF
  int v192; // [sp+798h] [bp+760h] BYREF
  int v193; // [sp+7B8h] [bp+780h] BYREF
  _BYTE v194[4100]; // [sp+7D8h] [bp+7A0h] BYREF

  V_LOCK(a1);
  V_INT(v4, "chain");
  v7 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    422,
    60,
    v194);
  sub_6F0E8(a1, a3, 240, 0x80000000);
  sub_6F0E8(a1, a3, 86, 67634184);
  sub_6F0E8(a1, a3, 64, 256);
  sub_6F0E8(a1, a3, 80, 33423870);
  sub_6F0E8(a1, a3, 81, 832516511);
  sub_6F0E8(a1, a3, 88, -1);
  v8 = sub_6F0E8(a1, a3, 86, 201853960);
  V_LOCK(v8);
  V_INT((int)v134, "chain");
  v9 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          173,
          "serdes_external_loop_ate_init",
          29,
          437,
          60,
          v194);
  V_LOCK(v10);
  V_INT((int)&v135, "chain");
  v11 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    438,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_30000 + 3);
  sub_6F0E8(a1, a3, 78, -2144272046);
  sub_6F0E8(a1, a3, 77, 33554944);
  sub_6F0E8(a1, a3, 78, -2144247742);
  sub_6F0E8(a1, a3, 77, 100664832);
  sub_6F0E8(a1, a3, 78, -2144247742);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  v12 = sub_6F0E8(a1, a3, 78, -2144272003);
  V_LOCK(v12);
  V_INT((int)v136, "chain");
  v13 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    445,
    60,
    v194);
  sub_6F660(a1, a3, 24642, a4 | 0x600);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247741);
  sub_6F660(a1, a3, 24644, a4 << 7);
  sub_6F660(a1, a3, 24642, a4 | 0x700);
  sub_6F0E8(a1, a3, 77, 16777472);
  sub_6F0E8(a1, a3, 78, -2144247741);
  v14 = sub_6F660(a1, a3, 24644, a4 << 7);
  V_LOCK(v14);
  V_INT((int)&v137, "chain");
  v15 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    460,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144251892);
  sub_6F0E8(a1, a3, 77, 268439552);
  sub_6F0E8(a1, a3, 78, -2144251892);
  sub_6F0E8(a1, a3, 77, 33489407);
  sub_6F0E8(a1, a3, 78, -2144272086);
  sub_6F0E8(a1, a3, 77, 268374015);
  v16 = sub_6F0E8(a1, a3, 78, -2144272085);
  V_LOCK(v16);
  V_INT((int)v138, "chain");
  v17 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    466,
    60,
    v194);
  sub_6F660(a1, a3, 24644, (a4 << 7) | 0x8020);
  sub_6F660(a1, a3, 24644, (a4 << 7) | 0x8060);
  sub_6F0E8(a1, a3, 77, -1);
  sub_6F0E8(a1, a3, 78, -2144247719);
  sub_6F0E8(a1, a3, 77, -8388737);
  v18 = sub_6F0E8(a1, a3, 78, -2144247718);
  V_LOCK(v18);
  V_INT((int)&v139, "chain");
  v19 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    472,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247776);
  sub_6F0E8(a1, a3, 77, -2136964960);
  v20 = sub_6F0E8(a1, a3, 78, -2144247776);
  V_LOCK(v20);
  V_INT((int)v140, "chain");
  v21 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    476,
    60,
    v194);
  if ( a4 == 2 )
    LOWORD(v22) = 4160;
  else
    LOWORD(v22) = 4144;
  if ( a4 == 2 )
    HIWORD(v22) = 4160;
  else
    HIWORD(v22) = 4144;
  sub_6F0E8(a1, a3, 77, v22);
  sub_6F0E8(a1, a3, 78, -2144247722);
  sub_6F0E8(a1, a3, 77, -1);
  v23 = sub_6F0E8(a1, a3, 78, -2144247718);
  V_LOCK(v23);
  V_INT((int)&v141, "chain");
  v24 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    483,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247771);
  sub_6F0E8(a1, a3, 77, (int)"or PHY power up...");
  v25 = sub_6F0E8(a1, a3, 78, -2144247771);
  V_LOCK(v25);
  V_INT((int)v142, "chain");
  v26 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v26);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    487,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 33554944);
  sub_6F0E8(a1, a3, 78, -2144247760);
  sub_6F0E8(a1, a3, 77, 122947412);
  v27 = sub_6F0E8(a1, a3, 78, -2144247760);
  V_LOCK(v27);
  V_INT((int)&v143, "chain");
  v28 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    491,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 1073758208);
  sub_6F0E8(a1, a3, 78, -2144247770);
  sub_6F0E8(a1, a3, 77, -1072381932);
  v29 = sub_6F0E8(a1, a3, 78, -2144247770);
  V_LOCK(v29);
  V_INT((int)v144, "chain");
  v30 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v30);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    494,
    60,
    v194);
  if ( a4 == 2 )
    LOWORD(v31) = 4;
  else
    LOWORD(v31) = 3;
  if ( a4 == 2 )
    HIWORD(v31) = 4;
  else
    HIWORD(v31) = 3;
  sub_6F0E8(a1, a3, 77, v31);
  sub_6F0E8(a1, a3, 78, -2144247739);
  sub_6F0E8(a1, a3, 77, -1);
  v32 = sub_6F0E8(a1, a3, 78, -2144247732);
  V_LOCK(v32);
  V_INT((int)&v145, "chain");
  v33 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v33);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    501,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 268439552);
  sub_6F0E8(a1, a3, 78, -2144247769);
  sub_6F0E8(a1, a3, 77, 805318656);
  v34 = sub_6F0E8(a1, a3, 78, -2144247769);
  V_LOCK(v34);
  V_INT((int)v146, "chain");
  v35 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v35);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    505,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247751);
  sub_6F0E8(a1, a3, 77, 5505108);
  v36 = sub_6F0E8(a1, a3, 78, -2144247751);
  V_LOCK(v36);
  V_INT((int)&v147, "chain");
  v37 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    508,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  sub_6F0E8(a1, a3, 78, -2144251903);
  sub_6F0E8(a1, a3, 77, 2293795);
  v38 = sub_6F0E8(a1, a3, 78, -2144251903);
  V_LOCK(v38);
  V_INT((int)v148, "chain");
  v39 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v39);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    511,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144251872);
  sub_6F0E8(a1, a3, 77, (int)&loc_80008);
  v40 = sub_6F0E8(a1, a3, 78, -2144251872);
  V_LOCK(v40);
  V_INT((int)&v149, "chain");
  v41 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v41);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    514,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144272111);
  sub_6F0E8(a1, a3, 77, 1073692671);
  v42 = sub_6F0E8(a1, a3, 78, -2144272088);
  V_LOCK(v42);
  V_INT((int)v150, "chain");
  v43 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v43);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    517,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 234884608);
  sub_6F0E8(a1, a3, 78, -2144272382);
  sub_6F0E8(a1, a3, 77, 235408904);
  v44 = sub_6F0E8(a1, a3, 78, -2144272382);
  V_LOCK(v44);
  V_INT((int)&v151, "chain");
  v45 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    520,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 234884608);
  sub_6F0E8(a1, a3, 78, -2144272381);
  sub_6F0E8(a1, a3, 77, 235408904);
  v46 = sub_6F0E8(a1, a3, 78, -2144272381);
  V_LOCK(v46);
  V_INT((int)v152, "chain");
  v47 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v47);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    523,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 1572888);
  v48 = sub_6F0E8(a1, a3, 78, -2144272353);
  V_LOCK(v48);
  V_INT((int)&v153, "chain");
  v49 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v49);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    526,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 22348117);
  sub_6F0E8(a1, a3, 78, -2144272044);
  sub_6F0E8(a1, a3, 77, 67044351);
  v50 = sub_6F0E8(a1, a3, 78, -2144272044);
  V_LOCK(v50);
  V_INT((int)v154, "chain");
  v51 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v51);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    529,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 61277095);
  sub_6F0E8(a1, a3, 78, -2144272380);
  sub_6F0E8(a1, a3, 77, 65471463);
  v52 = sub_6F0E8(a1, a3, 78, -2144272380);
  V_LOCK(v52);
  V_INT((int)&v155, "chain");
  v53 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v53);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    532,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 235408904);
  sub_6F0E8(a1, a3, 78, -2144272382);
  sub_6F0E8(a1, a3, 77, 252186376);
  sub_6F0E8(a1, a3, 78, -2144272382);
  sub_6F0E8(a1, a3, 77, 235408904);
  sub_6F0E8(a1, a3, 78, -2144272381);
  sub_6F0E8(a1, a3, 77, 252186376);
  v54 = sub_6F0E8(a1, a3, 78, -2144272381);
  V_LOCK(v54);
  V_INT((int)v156, "chain");
  v55 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v55);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    537,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_40004);
  sub_6F0E8(a1, a3, 78, -2144272379);
  sub_6F0E8(a1, a3, 77, (int)&loc_C000C);
  v56 = sub_6F0E8(a1, a3, 78, -2144272379);
  V_LOCK(v56);
  V_INT((int)&v157, "chain");
  v57 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v57);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    540,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_40004);
  sub_6F0E8(a1, a3, 78, -2144272378);
  sub_6F0E8(a1, a3, 77, (int)&loc_C000C);
  v58 = sub_6F0E8(a1, a3, 78, -2144272378);
  V_LOCK(v58);
  V_INT((int)v158, "chain");
  v59 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v59);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    543,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144272372);
  sub_6F0E8(a1, a3, 77, (int)&loc_100010);
  v60 = sub_6F0E8(a1, a3, 78, -2144272372);
  V_LOCK(v60);
  V_INT((int)&v159, "chain");
  v61 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v61);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    546,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144272360);
  sub_6F0E8(a1, a3, 77, (int)&loc_100010);
  v62 = sub_6F0E8(a1, a3, 78, -2144272360);
  V_LOCK(v62);
  V_INT((int)v160, "chain");
  v63 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v63);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    550,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144272114);
  sub_6F0E8(a1, a3, 77, 710158932);
  v64 = sub_6F0E8(a1, a3, 78, -2144272114);
  V_LOCK(v64);
  V_INT((int)&v161, "chain");
  v65 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v65);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    553,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144272124);
  sub_6F0E8(a1, a3, 77, (int)"k");
  v66 = sub_6F0E8(a1, a3, 78, -2144272124);
  V_LOCK(v66);
  V_INT((int)v162, "chain");
  v67 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v67);
  v68 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          173,
          "serdes_external_loop_ate_init",
          29,
          557,
          60,
          v194);
  V_LOCK(v68);
  V_INT((int)&v163, "chain");
  v69 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v69);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    558,
    60,
    v194);
  if ( a4 == 2 )
    LOWORD(v70) = 498;
  else
    LOWORD(v70) = 501;
  if ( a4 == 2 )
    HIWORD(v70) = 498;
  else
    HIWORD(v70) = 501;
  sub_6F0E8(a1, a3, 77, v70);
  v71 = sub_6F0E8(a1, a3, 78, -2144247559);
  V_LOCK(v71);
  V_INT((int)&v164, "chain");
  v72 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v72);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    563,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 20971840);
  sub_6F0E8(a1, a3, 78, -2144251901);
  sub_6F0E8(a1, a3, 77, 88606024);
  v73 = sub_6F0E8(a1, a3, 78, -2144251901);
  V_LOCK(v73);
  V_INT((int)&v165, "chain");
  v74 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v74);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    567,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_100010);
  sub_6F0E8(a1, a3, 78, -2144251900);
  sub_6F0E8(a1, a3, 77, 542122064);
  v75 = sub_6F0E8(a1, a3, 78, -2144251900);
  V_LOCK(v75);
  V_INT((int)&v166, "chain");
  v76 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v76);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    570,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247761);
  sub_6F0E8(a1, a3, 77, (int)"k");
  v77 = sub_6F0E8(a1, a3, 78, -2144247761);
  V_LOCK(v77);
  V_INT((int)&v167, "chain");
  v78 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v78);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    574,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 537010178);
  v79 = sub_6F0E8(a1, a3, 78, -2144247750);
  V_LOCK(v79);
  V_INT((int)&v168, "chain");
  v80 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v80);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    576,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 872428544);
  sub_6F0E8(a1, a3, 78, -2144247769);
  sub_6F0E8(a1, a3, 77, 1006648320);
  v81 = sub_6F0E8(a1, a3, 78, -2144247769);
  V_LOCK(v81);
  V_INT((int)&v169, "chain");
  v82 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v82);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    579,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_80008);
  sub_6F0E8(a1, a3, 78, -2144247745);
  sub_6F0E8(a1, a3, 77, 1572888);
  v83 = sub_6F0E8(a1, a3, 78, -2144247745);
  V_LOCK(v83);
  V_INT((int)&v170, "chain");
  v84 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v84);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    582,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247798);
  sub_6F0E8(a1, a3, 77, (int)"k");
  v85 = sub_6F0E8(a1, a3, 78, -2144247798);
  V_LOCK(v85);
  V_INT((int)&v171, "chain");
  v86 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v86);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    585,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  v87 = sub_6F0E8(a1, a3, 78, -2144247604);
  V_LOCK(v87);
  V_INT((int)&v172, "chain");
  v88 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v88);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    587,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144247796);
  sub_6F0E8(a1, a3, 77, 268439552);
  v89 = sub_6F0E8(a1, a3, 78, -2144247796);
  V_LOCK(v89);
  V_INT((int)&v173, "chain");
  v90 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v90);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    591,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, 0);
  sub_6F0E8(a1, a3, 78, -2144243666);
  sub_6F0E8(a1, a3, 77, (int)"k");
  sub_6F0E8(a1, a3, 78, -2144243666);
  sub_6F0E8(a1, a3, 77, 4259905);
  sub_6F0E8(a1, a3, 78, -2144251869);
  sub_6F0E8(a1, a3, 77, 13304011);
  v91 = sub_6F0E8(a1, a3, 78, -2144251869);
  V_LOCK(v91);
  V_INT((int)&v174, "chain");
  v92 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v92);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    596,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_40004);
  v93 = sub_6F0E8(a1, a3, 78, -2144243609);
  V_LOCK(v93);
  V_INT((int)&v175, "chain");
  v94 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v94);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    598,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_A0008 + 2);
  v95 = sub_6F0E8(a1, a3, 78, -2144247768);
  V_LOCK(v95);
  V_INT((int)&v176, "chain");
  v96 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v96);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    600,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_70004 + 3);
  v97 = sub_6F0E8(a1, a3, 78, -2144272078);
  V_LOCK(v97);
  V_INT((int)&v177, "chain");
  v98 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v98);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    602,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, -2136964960);
  sub_6F0E8(a1, a3, 78, -2144247776);
  sub_6F0E8(a1, a3, 77, -2136309590);
  v99 = sub_6F0E8(a1, a3, 78, -2144247776);
  V_LOCK(v99);
  V_INT((int)&v178, "chain");
  v100 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v100);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    605,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 12308, 1);
  serdes_wait_status(a1, a2, a3, 12820, 1);
  serdes_wait_status(a1, a2, a3, 13332, 1);
  v101 = serdes_wait_status(a1, a2, a3, 13844, 1);
  V_LOCK(v101);
  V_INT((int)&v179, "chain");
  v102 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v102);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    611,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 4156, 80);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  v103 = serdes_wait_status(a1, a2, a3, 5692, 80);
  V_LOCK(v103);
  V_INT((int)&v180, "chain");
  v104 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v104);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    616,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 8217, 0);
  serdes_wait_status(a1, a2, a3, 8729, 0);
  serdes_wait_status(a1, a2, a3, 9241, 0);
  v105 = serdes_wait_status(a1, a2, a3, 9753, 0);
  V_LOCK(v105);
  V_INT((int)&v181, "chain");
  v106 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v106);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    621,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 4114, 0);
  serdes_wait_status(a1, a2, a3, 4626, 0);
  serdes_wait_status(a1, a2, a3, 5138, 0);
  v107 = serdes_wait_status(a1, a2, a3, 5650, 0);
  V_LOCK(v107);
  V_INT((int)&v182, "chain");
  v108 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v108);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    626,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 8196, 0);
  serdes_wait_status(a1, a2, a3, 8708, 0);
  serdes_wait_status(a1, a2, a3, 9220, 0);
  v109 = serdes_wait_status(a1, a2, a3, 9732, 0);
  V_LOCK(v109);
  V_INT((int)&v183, "chain");
  v110 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v110);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    631,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  v111 = sub_6F0E8(a1, a3, 78, -2144251791);
  V_LOCK(v111);
  V_INT((int)&v184, "chain");
  v112 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v112);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    633,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_6F0E8(a1, a3, 78, -2144247768);
  sub_6F0E8(a1, a3, 77, (int)&loc_A0008 + 2);
  v113 = sub_6F0E8(a1, a3, 78, -2144247768);
  V_LOCK(v113);
  V_INT((int)&v185, "chain");
  v114 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v114);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    637,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&loc_30000 + 3);
  sub_6F0E8(a1, a3, 78, -2144243377);
  sub_6F0E8(a1, a3, 77, (int)&loc_30000 + 3);
  sub_6F0E8(a1, a3, 78, -2144243377);
  sub_6F0E8(a1, a3, 77, (int)&loc_70004 + 3);
  v115 = sub_6F0E8(a1, a3, 78, -2144243377);
  V_LOCK(v115);
  V_INT((int)&v186, "chain");
  v116 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v116);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    641,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, -2136244053);
  sub_6F0E8(a1, a3, 78, -2144247776);
  sub_6F0E8(a1, a3, 77, -2136244053);
  sub_6F0E8(a1, a3, 78, -2144247776);
  usleep(0xAu);
  serdes_wait_status(a1, a2, a3, 4156, 81);
  serdes_wait_status(a1, a2, a3, 4668, 81);
  serdes_wait_status(a1, a2, a3, 5180, 81);
  serdes_wait_status(a1, a2, a3, 5692, 81);
  sub_6F0E8(a1, a3, 77, -2136309590);
  sub_6F0E8(a1, a3, 78, -2144247776);
  sub_6F0E8(a1, a3, 77, -2136309590);
  sub_6F0E8(a1, a3, 78, -2144247776);
  usleep(0x64u);
  serdes_wait_status(a1, a2, a3, 4156, 84);
  serdes_wait_status(a1, a2, a3, 4668, 80);
  serdes_wait_status(a1, a2, a3, 5180, 80);
  serdes_wait_status(a1, a2, a3, 5692, 84);
  v117 = usleep(0x3Cu);
  V_LOCK(v117);
  V_INT((int)&v187, "chain");
  v118 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v118);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    657,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, -1062551382);
  sub_6F0E8(a1, a3, 78, -2144247776);
  v119 = usleep(0x32u);
  V_LOCK(v119);
  V_INT((int)&v188, "chain");
  v120 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v120);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    660,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 4156, 86);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 86);
  v121 = serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK(v121);
  V_INT((int)&v189, "chain");
  v122 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v122);
  v123 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
           173,
           "serdes_external_loop_ate_init",
           29,
           666,
           60,
           v194);
  if ( a4 == 2 )
  {
    sub_6F0E8(a1, a3, 77, (int)&loc_30000 + 3);
    sub_6F0E8(a1, a3, 78, -2144247798);
    sub_6F0E8(a1, a3, 77, (int)&loc_30000 + 3);
    sub_6F0E8(a1, a3, 78, -2144247798);
    usleep(1u);
    serdes_wait_status(a1, a2, a3, 8218, 1);
    serdes_wait_status(a1, a2, a3, 8730, 1);
    serdes_wait_status(a1, a2, a3, 9242, 1);
    serdes_wait_status(a1, a2, a3, 9754, 1);
    sub_6F0E8(a1, a3, 77, (int)"k");
    sub_6F0E8(a1, a3, 78, -2144247798);
    sub_6F0E8(a1, a3, 77, (int)"k");
    sub_6F0E8(a1, a3, 78, -2144247798);
    usleep(0x64u);
    serdes_wait_status(a1, a2, a3, 8218, 0);
    serdes_wait_status(a1, a2, a3, 8730, 0);
    serdes_wait_status(a1, a2, a3, 9242, 0);
    v123 = serdes_wait_status(a1, a2, a3, 9754, 0);
  }
  V_LOCK(v123);
  V_INT((int)&v190, "chain");
  v124 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v124);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    685,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, -2136309590);
  v125 = sub_6F0E8(a1, a3, 78, -2144247776);
  V_LOCK(v125);
  V_INT((int)&v191, "chain");
  v126 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v126);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    687,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, -1062551382);
  sub_6F0E8(a1, a3, 78, -2144247776);
  v127 = usleep(0x32u);
  V_LOCK(v127);
  V_INT((int)&v192, "chain");
  v128 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v128);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    691,
    60,
    v194);
  serdes_wait_status(a1, a2, a3, 4156, 82);
  serdes_wait_status(a1, a2, a3, 4668, 86);
  serdes_wait_status(a1, a2, a3, 5180, 82);
  v129 = serdes_wait_status(a1, a2, a3, 5692, 86);
  V_LOCK(v129);
  V_INT((int)&v193, "chain");
  v130 = logfmt_raw((int)v194, 0x1000u);
  V_UNLOCK(v130);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    173,
    "serdes_external_loop_ate_init",
    29,
    697,
    60,
    v194);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  sub_6F0E8(a1, a3, 78, -2144251757);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  sub_6F0E8(a1, a3, 78, -2144251757);
  sub_6F0E8(a1, a3, 77, (int)&loc_110010 + 1);
  sub_6F0E8(a1, a3, 78, -2144251757);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  sub_6F0E8(a1, a3, 78, -2144251757);
  sub_6F0E8(a1, a3, 77, (int)&loc_110010 + 1);
  sub_6F0E8(a1, a3, 78, -2144251757);
  sub_6F0E8(a1, a3, 77, (int)&dword_10000 + 1);
  sub_6F0E8(a1, a3, 78, -2144251757);
  usleep(0xAu);
  return 0;
}
