int platform_topol_init()
{
  _DWORD *file; // r0
  _DWORD *v1; // r11
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  int v4; // r0
  const char *v5; // r9
  size_t v6; // r0
  char *v7; // r0
  char *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r9
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r9
  int v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r8
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r2
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r2
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  _DWORD *v39; // r0
  int v40; // r0
  _DWORD *v41; // r0
  int v42; // r9
  int v43; // r0
  size_t v44; // r9
  int v45; // r0
  _DWORD *v46; // r0
  int v47; // r6
  int v48; // r0
  _DWORD *v49; // r0
  int v50; // r6
  int v51; // r0
  _DWORD *v52; // r0
  int v53; // r6
  int v54; // r0
  _DWORD *v55; // r0
  int v56; // r6
  int v57; // r0
  _DWORD *v58; // r0
  int v59; // r8
  int v60; // r0
  _DWORD *v61; // r0
  _DWORD *v62; // r8
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r8
  int v66; // r0
  _DWORD *v67; // r0
  int v68; // r8
  int v69; // r0
  size_t v70; // r0
  int v71; // r6
  void *v72; // r0
  _DWORD *v73; // r0
  int v74; // r6
  int v75; // r0
  _DWORD *v76; // r0
  int v77; // r6
  int v78; // r0
  _DWORD *v79; // r0
  int v80; // r6
  int v81; // r0
  _DWORD *v82; // r0
  int v83; // r6
  int v84; // r0
  int v85; // r0
  int v86; // r3
  _DWORD *v87; // r0
  int v88; // r0
  _DWORD *v89; // r0
  _DWORD *v90; // r11
  _DWORD *v91; // r0
  int v92; // r7
  int v93; // r0
  int v94; // r0
  int v95; // r9
  _DWORD *v96; // r9
  _DWORD *v97; // r0
  _DWORD *v98; // r7
  int v99; // r0
  const char *v100; // r6
  int v101; // r3
  _DWORD *v102; // r0
  int v103; // r6
  int v104; // r0
  _DWORD *v105; // r0
  _DWORD *v106; // r6
  int v107; // r0
  int v108; // r7
  char **v109; // r8
  const char *v110; // r0
  const char *v111; // r1
  const char *v112; // r10
  const char *v113; // t1
  int v114; // r6
  _DWORD *v115; // r0
  _DWORD *v116; // r8
  int v117; // r0
  const char **v118; // r7
  const char *v119; // r0
  const char *v120; // r1
  const char *v121; // r8
  const char *v122; // t1
  int v123; // r0
  int v124; // r0
  int v125; // r2
  int v126; // r0
  int v127; // r0
  int v128; // r0
  int v129; // r0
  int v130; // r2
  int v131; // r0
  int v132; // r0
  int v133; // r0
  int v134; // r0
  int v135; // r0
  int v136; // r0
  int v137; // r0
  _DWORD *v138; // r0
  _DWORD *v139; // r0
  int v140; // r8
  int v141; // r0
  _DWORD *v142; // r0
  int v143; // r0
  int v144; // r9
  char **v145; // r6
  int v146; // r4
  const char *v147; // r7
  const char *v148; // r1
  const char *v149; // t1
  int v150; // r2
  _DWORD *v151; // r0
  int v152; // r6
  int v153; // r0
  int v154; // r4
  int v155; // r5
  int v156; // r0
  int v157; // r3
  int v158; // r6
  int v159; // r5
  int v160; // r4
  void *v161; // r0
  unsigned int *v162; // r3
  unsigned int v163; // r2
  unsigned int v164; // r2
  int v165; // r0
  int v166; // r0
  int v167; // r0
  int v168; // r0
  int v169; // r0
  int v170; // r0
  int v171; // r0
  int v172; // r0
  int v173; // r0
  int v174; // r0
  int v175; // r3
  _DWORD *v176; // r0
  int v177; // r0
  _DWORD *v178; // r0
  _DWORD *v179; // r11
  _DWORD *v180; // r0
  int v181; // r7
  int v182; // r0
  int v183; // r0
  int v184; // r10
  _DWORD *v185; // r10
  _DWORD *v186; // r0
  _DWORD *v187; // r7
  int v188; // r0
  const char *v189; // r6
  int v190; // r3
  _DWORD *v191; // r0
  int v192; // r6
  int v193; // r0
  _DWORD *v194; // r0
  _DWORD *v195; // r6
  int v196; // r0
  int v197; // r7
  char **v198; // r8
  const char *v199; // r0
  const char *v200; // r1
  const char *v201; // r9
  const char *v202; // t1
  int v203; // r6
  _DWORD *v204; // r0
  _DWORD *v205; // r8
  int v206; // r0
  const char **v207; // r7
  const char *v208; // r0
  const char *v209; // r1
  const char *v210; // r8
  const char *v211; // t1
  int v212; // r0
  int v213; // r0
  int v214; // r0
  int v215; // r0
  int v216; // r0
  int v217; // r0
  int v218; // r0
  int v219; // r0
  int v220; // r0
  int v221; // r0
  int v222; // r0
  int v223; // r0
  int v224; // r0
  int v225; // r0
  int v226; // r0
  int v227; // r0
  int v228; // r0
  int v229; // r0
  int v230; // r0
  int v231; // r0
  int v232; // r0
  int v233; // r0
  int v234; // r0
  int v235; // r0
  int v236; // r0
  int v237; // r0
  int v238; // r0
  int v239; // r0
  int v240; // r0
  int v241; // r0
  int v242; // r0
  int v243; // r0
  int v244; // r0
  int v245; // r0
  int v246; // r0
  int v247; // [sp+10h] [bp-1124h]
  _DWORD *v248; // [sp+14h] [bp-1120h]
  int v249; // [sp+14h] [bp-1120h]
  unsigned int v250; // [sp+18h] [bp-111Ch]
  _DWORD *v251; // [sp+18h] [bp-111Ch]
  unsigned int i; // [sp+18h] [bp-111Ch]
  _DWORD *v253; // [sp+1Ch] [bp-1118h]
  _DWORD *v254; // [sp+1Ch] [bp-1118h]
  _DWORD *v255; // [sp+1Ch] [bp-1118h]
  _DWORD *v256; // [sp+20h] [bp-1114h]
  _DWORD *v257; // [sp+20h] [bp-1114h]
  char v258[252]; // [sp+34h] [bp-1100h] BYREF
  _BYTE v259[4100]; // [sp+130h] [bp-1004h] BYREF

  file = (_DWORD *)json_load_file("/etc/topol.conf", 0, v258);
  v1 = file;
  if ( !file || *file )
  {
    V_LOCK(file);
    v247 = -1;
    v133 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v133);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "platform_topol_init",
      19,
      1488,
      20,
      v259);
    return v247;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK(v2);
    v32 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v32);
    v33 = g_zc;
    v34 = 139;
LABEL_26:
    v35 = zlog(
            v33,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/topol/topol.c",
            152,
            "_parse_machine",
            14,
            v34,
            100,
            v259);
LABEL_27:
    V_LOCK(v35);
    v36 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v36);
    v24 = g_zc;
    v25 = 1495;
    goto LABEL_16;
  }
  V_LOCK(v2);
  json_string_value(v3);
  v4 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    142,
    20,
    v259);
  v5 = (const char *)json_string_value(v3);
  v6 = strlen(v5);
  v7 = (char *)calloc(v6 + 1, 1u);
  topol_machine = (int)v7;
  if ( !v7 )
  {
    V_LOCK(0);
    v135 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v135);
    v35 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/topol/topol.c",
            152,
            "_parse_machine",
            14,
            148,
            100,
            v259);
    goto LABEL_27;
  }
  v8 = strcpy(v7, v5);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    153,
    20,
    v259);
  v10 = (_DWORD *)json_object_get(v1, "hw_version");
  v11 = v10;
  if ( !v10 || *v10 != 2 )
  {
    V_LOCK(v10);
    v37 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v37);
    v33 = g_zc;
    v34 = 158;
    goto LABEL_26;
  }
  V_LOCK(v10);
  json_string_value(v11);
  v12 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    161,
    20,
    v259);
  v13 = (_DWORD *)json_object_get(v1, "sw_version");
  v14 = v13;
  if ( !v13 || *v13 != 2 )
  {
    V_LOCK(v13);
    v38 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v38);
    v33 = g_zc;
    v34 = 166;
    goto LABEL_26;
  }
  V_LOCK(v13);
  json_string_value(v14);
  v15 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    169,
    20,
    v259);
  v16 = (_DWORD *)json_object_get(v1, "processor");
  v17 = v16;
  if ( !v16 || *v16 )
  {
    V_LOCK(v16);
    v123 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v123);
    v124 = g_zc;
    v125 = 181;
LABEL_93:
    v126 = zlog(
             v124,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_parse_processor",
             16,
             v125,
             100,
             v259);
    V_LOCK(v126);
    v127 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v127);
    v24 = g_zc;
    v25 = 1502;
    goto LABEL_16;
  }
  V_LOCK(v16);
  v18 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_processor",
    16,
    184,
    20,
    v259);
  v19 = (_DWORD *)json_object_get(v17, "type");
  v20 = v19;
  if ( !v19 || *v19 != 2 )
  {
    V_LOCK(v19);
    v134 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v134);
    v124 = g_zc;
    v125 = 189;
    goto LABEL_93;
  }
  V_LOCK(v19);
  json_string_value(v20);
  v21 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_processor",
    16,
    192,
    20,
    v259);
  v22 = sub_5C178(v1);
  if ( v22 )
  {
    V_LOCK(v22);
    v23 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v23);
    v24 = g_zc;
    v25 = 1509;
    goto LABEL_16;
  }
  v30 = sub_5C874(v1);
  if ( v30 )
  {
    V_LOCK(v30);
    v31 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v31);
    v24 = g_zc;
    v25 = 1516;
    goto LABEL_16;
  }
  v39 = (_DWORD *)json_object_get(v1, "chain");
  v248 = v39;
  if ( !v39 || *v39 )
  {
    V_LOCK(v39);
    v137 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v137);
    v129 = g_zc;
    v130 = 908;
    goto LABEL_95;
  }
  V_LOCK(v39);
  v40 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v40);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    911,
    20,
    v259);
  v41 = (_DWORD *)json_object_get(v248, "chain_num");
  v42 = (int)v41;
  if ( !v41 || *v41 != 3 )
  {
    V_LOCK(v41);
    v136 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v136);
    v129 = g_zc;
    v130 = 916;
    goto LABEL_95;
  }
  V_LOCK(v41);
  json_integer_value(v42);
  v43 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v43);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    919,
    20,
    v259);
  v44 = json_integer_value(v42);
  dword_18EC60 = v44;
  V_LOCK(v44);
  v45 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_alloc_chain",
    12,
    80,
    20,
    v259);
  dword_18EC80 = (int)calloc(v44, 0x78u);
  if ( !dword_18EC80 )
  {
    V_LOCK(0);
    v214 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v214);
    v215 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_alloc_chain",
             12,
             85,
             100,
             v259);
    V_LOCK(v215);
    v216 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v216);
    v131 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_alloc_chain",
             12,
             86,
             100,
             v259);
    goto LABEL_96;
  }
  v46 = (_DWORD *)json_object_get(v248, "chain_row");
  v47 = (int)v46;
  if ( !v46 || *v46 != 3 )
  {
    V_LOCK(v46);
    v128 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v128);
    v129 = g_zc;
    v130 = 927;
LABEL_95:
    v131 = zlog(
             v129,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_parse_chain",
             12,
             v130,
             100,
             v259);
LABEL_96:
    V_LOCK(v131);
    v132 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v132);
    v24 = g_zc;
    v25 = 1524;
LABEL_16:
    zlog(
      v24,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "platform_topol_init",
      19,
      v25,
      20,
      v259);
    if ( v1[1] != -1 )
    {
      v26 = v1 + 1;
      __dmb(0xBu);
      do
      {
        v27 = __ldrex(v26);
        v28 = v27 - 1;
      }
      while ( __strex(v28, v26) );
      if ( !v28 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK(v46);
  json_integer_value(v47);
  v48 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v48);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    930,
    20,
    v259);
  dword_18EC64 = json_integer_value(v47);
  v49 = (_DWORD *)json_object_get(v248, "chain_column");
  v50 = (int)v49;
  if ( !v49 || *v49 != 3 )
  {
    V_LOCK(v49);
    v165 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v165);
    v129 = g_zc;
    v130 = 936;
    goto LABEL_95;
  }
  V_LOCK(v49);
  json_integer_value(v50);
  v51 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v51);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    939,
    20,
    v259);
  dword_18EC68 = json_integer_value(v50);
  v52 = (_DWORD *)json_object_get(v248, "chain_domain_num");
  v53 = (int)v52;
  if ( !v52 || *v52 != 3 )
  {
    V_LOCK(v52);
    v166 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v166);
    v129 = g_zc;
    v130 = 945;
    goto LABEL_95;
  }
  V_LOCK(v52);
  json_integer_value(v53);
  v54 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v54);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    948,
    20,
    v259);
  dword_18EC6C = json_integer_value(v53);
  v55 = (_DWORD *)json_object_get(v248, "chain_asic_num");
  v56 = (int)v55;
  if ( !v55 || *v55 != 3 )
  {
    V_LOCK(v55);
    v167 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v167);
    v129 = g_zc;
    v130 = 954;
    goto LABEL_95;
  }
  V_LOCK(v55);
  json_integer_value(v56);
  v57 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v57);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    957,
    20,
    v259);
  dword_18EC70 = json_integer_value(v56);
  v58 = (_DWORD *)json_object_get(v248, "domain_asic_num");
  v59 = (int)v58;
  if ( !v58 || *v58 != 3 )
  {
    V_LOCK(v58);
    v168 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v168);
    v129 = g_zc;
    v130 = 963;
    goto LABEL_95;
  }
  V_LOCK(v58);
  json_integer_value(v59);
  v60 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v60);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    966,
    20,
    v259);
  dword_18EC74 = json_integer_value(v59);
  v61 = (_DWORD *)json_object_get(v248, "pic_mcu_en");
  v62 = v61;
  if ( !v61 || (unsigned int)(*v61 - 5) > 1 )
  {
    V_LOCK(v61);
    v172 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v172);
    v170 = 972;
    goto LABEL_132;
  }
  V_LOCK(v61);
  v63 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v63);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    975,
    20,
    v259);
  byte_18EC78 = *v62 == 5;
  v64 = (_DWORD *)json_object_get(v248, "sensor_mode");
  v65 = (int)v64;
  if ( !v64 || *v64 != 3 )
  {
    V_LOCK(v64);
    v171 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v171);
    v170 = 981;
    goto LABEL_132;
  }
  V_LOCK(v64);
  json_integer_value(v65);
  v66 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v66);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    984,
    20,
    v259);
  *(_DWORD *)(dword_18EC80 + 88) = json_integer_value(v65);
  v67 = (_DWORD *)json_object_get(v248, "sensor_num");
  v68 = (int)v67;
  if ( !v67 || *v67 != 3 )
  {
    V_LOCK(v67);
    v169 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v169);
    v170 = 990;
LABEL_132:
    v131 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_parse_chain",
             12,
             v170,
             100,
             v259);
    goto LABEL_96;
  }
  V_LOCK(v67);
  json_integer_value(v68);
  v69 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v69);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    993,
    20,
    v259);
  v70 = json_integer_value(v68);
  v71 = dword_18EC80;
  *(_DWORD *)(dword_18EC80 + 92) = v70;
  v72 = calloc(v70, 0x18u);
  *(_DWORD *)(v71 + 84) = v72;
  if ( !v72 )
  {
    V_LOCK(0);
    v245 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v245);
    v131 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_alloc_sensor",
             13,
             97,
             100,
             v259);
    goto LABEL_96;
  }
  v73 = (_DWORD *)json_object_get(v248, "max_chip_temp");
  v74 = (int)v73;
  if ( !v73 || *v73 != 3 )
  {
    V_LOCK(v73);
    v213 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v213);
    v170 = 1001;
    goto LABEL_132;
  }
  V_LOCK(v73);
  json_integer_value(v74);
  v75 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v75);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1004,
    20,
    v259);
  *(_DWORD *)(dword_18EC80 + 96) = json_integer_value(v74);
  v76 = (_DWORD *)json_object_get(v248, "max_pcb_temp");
  v77 = (int)v76;
  if ( !v76 || *v76 != 3 )
  {
    V_LOCK(v76);
    v212 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v212);
    v170 = 1010;
    goto LABEL_132;
  }
  V_LOCK(v76);
  json_integer_value(v77);
  v78 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v78);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1013,
    20,
    v259);
  *(_DWORD *)(dword_18EC80 + 100) = json_integer_value(v77);
  v79 = (_DWORD *)json_object_get(v248, "min_pcb_temp");
  v80 = (int)v79;
  if ( !v79 || *v79 != 3 )
  {
    V_LOCK(v79);
    v223 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v223);
    v170 = 1019;
    goto LABEL_132;
  }
  V_LOCK(v79);
  json_integer_value(v80);
  v81 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v81);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1022,
    20,
    v259);
  *(_DWORD *)(dword_18EC80 + 104) = json_integer_value(v80);
  v82 = (_DWORD *)json_object_get(v248, "max_uneffective_count");
  v83 = (int)v82;
  if ( !v82 || *v82 != 3 )
  {
    V_LOCK(v82);
    v222 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v222);
    v170 = 1028;
    goto LABEL_132;
  }
  V_LOCK(v82);
  json_integer_value(v83);
  v84 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v84);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1031,
    20,
    v259);
  *(_DWORD *)(dword_18EC80 + 108) = json_integer_value(v83);
  v85 = sub_5D714(v248);
  v247 = v85;
  if ( v85 )
  {
    V_LOCK(v85);
    v246 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v246);
    v175 = 1037;
    goto LABEL_137;
  }
  if ( byte_18EC78 )
  {
    v173 = sub_5DEE4(v248);
    if ( v173 )
    {
      V_LOCK(v173);
      v174 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v174);
      v175 = 1045;
LABEL_137:
      v131 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/backend/topol/topol.c",
               152,
               "_parse_chain",
               12,
               v175,
               100,
               v259);
      goto LABEL_96;
    }
  }
  v86 = *(_DWORD *)(dword_18EC80 + 88);
  if ( v86 == 3 )
  {
    v176 = (_DWORD *)json_object_get(v248, "ctrlboard_sensor");
    v257 = v176;
    if ( !v176 || *v176 != 1 )
    {
      V_LOCK(v176);
      v244 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v244);
      v235 = 640;
LABEL_184:
      v236 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/backend/topol/topol.c",
               152,
               "_parse_chain_ctrlboard_sensor",
               29,
               v235,
               100,
               v259);
      V_LOCK(v236);
      v237 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v237);
      v170 = 1054;
      goto LABEL_132;
    }
    V_LOCK(v176);
    v177 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v177);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_ctrlboard_sensor",
      29,
      643,
      20,
      v259);
    v255 = v1;
    for ( i = 0; i < (unsigned int)json_array_size(v257); ++i )
    {
      v178 = json_array_get(v257, i);
      v179 = v178;
      if ( !v178 || *v178 )
      {
        v1 = v255;
        V_LOCK(v178);
        v238 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v238);
        v235 = 650;
        goto LABEL_184;
      }
      v180 = (_DWORD *)json_object_get(v178, "index");
      v181 = (int)v180;
      if ( !v180 || *v180 != 3 )
      {
        v1 = v255;
        V_LOCK(v180);
        v234 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v234);
        v235 = 657;
        goto LABEL_184;
      }
      V_LOCK(v180);
      json_integer_value(v181);
      v182 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v182);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        660,
        20,
        v259);
      v183 = json_integer_value(v181);
      v184 = *(_DWORD *)(dword_18EC80 + 84);
      *(_DWORD *)(v184 + 24 * v183) = v183;
      v185 = (_DWORD *)(v184 + 24 * v183);
      v185[2] = 2;
      v186 = (_DWORD *)json_object_get(v179, "type");
      v187 = v186;
      if ( !v186 || *v186 != 2 )
      {
        v1 = v255;
        V_LOCK(v186);
        v242 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v242);
        v235 = 669;
        goto LABEL_184;
      }
      V_LOCK(v186);
      json_string_value(v187);
      v188 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v188);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        672,
        20,
        v259);
      v189 = (const char *)json_string_value(v187);
      v190 = strcmp(v189, "TMP451");
      if ( v190 )
      {
        if ( !strcmp(v189, "LM75A") )
        {
          v190 = 1;
        }
        else if ( !strcmp(v189, "unknow") )
        {
          v190 = 2;
        }
        else
        {
          v190 = 3;
        }
      }
      v185[1] = v190;
      v191 = (_DWORD *)json_object_get(v179, "iic");
      v192 = (int)v191;
      if ( !v191 || *v191 != 3 )
      {
        v1 = v255;
        V_LOCK(v191);
        v241 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v241);
        v235 = 678;
        goto LABEL_184;
      }
      V_LOCK(v191);
      json_integer_value(v192);
      v193 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v193);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        681,
        20,
        v259);
      v185[5] = json_integer_value(v192);
      v194 = (_DWORD *)json_object_get(v179, "x");
      v195 = v194;
      if ( !v194 || *v194 != 2 )
      {
        v1 = v255;
        V_LOCK(v194);
        v240 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v240);
        v235 = 687;
        goto LABEL_184;
      }
      V_LOCK(v194);
      json_string_value(v195);
      v196 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v196);
      v197 = 0;
      v198 = off_148EB0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        690,
        20,
        v259);
      v199 = (const char *)json_string_value(v195);
      v200 = "air_in";
      v201 = v199;
      while ( strcmp(v201, v200) )
      {
        v202 = *v198++;
        v200 = v202;
        ++v197;
      }
      v203 = 0;
      v185[3] = v197;
      v204 = (_DWORD *)json_object_get(v179, "y");
      v205 = v204;
      if ( !v204 || *v204 != 2 )
      {
        v1 = v255;
        V_LOCK(v204);
        v243 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v243);
        v235 = 696;
        goto LABEL_184;
      }
      V_LOCK(v204);
      json_string_value(v205);
      v206 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v206);
      v207 = (const char **)&unk_148ED0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        699,
        20,
        v259);
      v208 = (const char *)json_string_value(v205);
      v209 = "top";
      v210 = v208;
      while ( strcmp(v210, v209) )
      {
        v211 = *v207++;
        v209 = v211;
        ++v203;
      }
      v185[4] = v203;
    }
    v1 = v255;
    v86 = *(_DWORD *)(dword_18EC80 + 88);
  }
  if ( (v86 & 0xFFFFFFFD) == 0 )
  {
    v87 = (_DWORD *)json_object_get(v248, "asic_sensor");
    v253 = v87;
    if ( v87 && *v87 == 1 )
    {
      V_LOCK(v87);
      v250 = 0;
      v88 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v88);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_sensor",
        19,
        802,
        20,
        v259);
      v256 = v1;
      while ( 1 )
      {
        if ( v250 >= (unsigned int)json_array_size(v253) )
        {
          v1 = v256;
          goto LABEL_103;
        }
        v89 = json_array_get(v253, v250);
        v90 = v89;
        if ( !v89 || *v89 )
          break;
        v91 = (_DWORD *)json_object_get(v89, "index");
        v92 = (int)v91;
        if ( !v91 || *v91 != 3 )
        {
          v1 = v256;
          V_LOCK(v91);
          v231 = logfmt_raw((int)v259, 0x1000u);
          V_UNLOCK(v231);
          v225 = 817;
          goto LABEL_176;
        }
        V_LOCK(v91);
        json_integer_value(v92);
        v93 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v93);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          820,
          20,
          v259);
        v94 = json_integer_value(v92);
        v95 = *(_DWORD *)(dword_18EC80 + 84);
        *(_DWORD *)(v95 + 24 * v94) = v94;
        v96 = (_DWORD *)(v95 + 24 * v94);
        v96[2] = 1;
        v97 = (_DWORD *)json_object_get(v90, "type");
        v98 = v97;
        if ( !v97 || *v97 != 2 )
        {
          v1 = v256;
          V_LOCK(v97);
          v230 = logfmt_raw((int)v259, 0x1000u);
          V_UNLOCK(v230);
          v225 = 829;
          goto LABEL_176;
        }
        V_LOCK(v97);
        json_string_value(v98);
        v99 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v99);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          832,
          20,
          v259);
        v100 = (const char *)json_string_value(v98);
        v101 = strcmp(v100, "TMP451");
        if ( v101 )
        {
          if ( !strcmp(v100, "LM75A") )
          {
            v101 = 1;
          }
          else if ( !strcmp(v100, "unknow") )
          {
            v101 = 2;
          }
          else
          {
            v101 = 3;
          }
        }
        v96[1] = v101;
        v102 = (_DWORD *)json_object_get(v90, "bind_asic");
        v103 = (int)v102;
        if ( !v102 || *v102 != 3 )
        {
          v1 = v256;
          V_LOCK(v102);
          v229 = logfmt_raw((int)v259, 0x1000u);
          V_UNLOCK(v229);
          v225 = 838;
          goto LABEL_176;
        }
        V_LOCK(v102);
        json_integer_value(v103);
        v104 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v104);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          841,
          20,
          v259);
        v96[5] = json_integer_value(v103);
        v105 = (_DWORD *)json_object_get(v90, "x");
        v106 = v105;
        if ( !v105 || *v105 != 2 )
        {
          v1 = v256;
          V_LOCK(v105);
          v228 = logfmt_raw((int)v259, 0x1000u);
          V_UNLOCK(v228);
          v225 = 847;
          goto LABEL_176;
        }
        V_LOCK(v105);
        json_string_value(v106);
        v107 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v107);
        v108 = 0;
        v109 = off_148EB0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          850,
          20,
          v259);
        v110 = (const char *)json_string_value(v106);
        v111 = "air_in";
        v112 = v110;
        while ( strcmp(v112, v111) )
        {
          v113 = *v109++;
          v111 = v113;
          ++v108;
        }
        v114 = 0;
        v96[3] = v108;
        v115 = (_DWORD *)json_object_get(v90, "y");
        v116 = v115;
        if ( !v115 || *v115 != 2 )
        {
          v1 = v256;
          V_LOCK(v115);
          v224 = logfmt_raw((int)v259, 0x1000u);
          V_UNLOCK(v224);
          v225 = 856;
          goto LABEL_176;
        }
        V_LOCK(v115);
        json_string_value(v116);
        v117 = logfmt_raw((int)v259, 0x1000u);
        V_UNLOCK(v117);
        v118 = (const char **)&unk_148ED0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          859,
          20,
          v259);
        v119 = (const char *)json_string_value(v116);
        v120 = "top";
        v121 = v119;
        while ( strcmp(v121, v120) )
        {
          v122 = *v118++;
          v120 = v122;
          ++v114;
        }
        v96[4] = v114;
        ++v250;
      }
      v1 = v256;
      V_LOCK(v89);
      v232 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v232);
      v225 = 810;
    }
    else
    {
      V_LOCK(v87);
      v233 = logfmt_raw((int)v259, 0x1000u);
      V_UNLOCK(v233);
      v225 = 799;
    }
LABEL_176:
    v226 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_parse_chain_sensor",
             19,
             v225,
             100,
             v259);
    V_LOCK(v226);
    v227 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v227);
    v170 = 1064;
    goto LABEL_132;
  }
LABEL_103:
  v138 = v248;
  v249 = dword_18EC60;
  v139 = (_DWORD *)json_object_get(v138, "eeprom");
  v251 = v139;
  if ( !v139 || (v140 = *v139) != 0 )
  {
    V_LOCK(v139);
    v239 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v239);
    v218 = 760;
    goto LABEL_171;
  }
  V_LOCK(v139);
  v141 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v141);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_eeprom",
    19,
    763,
    20,
    v259);
  v142 = (_DWORD *)json_object_get(v251, "type");
  v254 = v142;
  if ( !v142 || *v142 != 2 )
  {
    V_LOCK(v142);
    v221 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v221);
    v218 = 768;
    goto LABEL_171;
  }
  V_LOCK(v142);
  json_string_value(v254);
  v143 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v143);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_eeprom",
    19,
    771,
    20,
    v259);
  if ( v249 > 0 )
  {
    v144 = 0;
    do
    {
      v145 = off_148F9C;
      v146 = 0;
      v147 = (const char *)json_string_value(v254);
      v148 = "AT24C02D";
      while ( strcmp(v147, v148) )
      {
        v149 = v145[1];
        ++v145;
        v148 = v149;
        ++v146;
      }
      ++v140;
      v150 = dword_18EC80 + v144;
      v144 += 120;
      *(_DWORD *)(v150 + 112) = v146;
    }
    while ( v249 != v140 );
  }
  v151 = (_DWORD *)json_object_get(v251, "i2c_addr");
  v152 = (int)v151;
  if ( !v151 || *v151 != 3 )
  {
    V_LOCK(v151);
    v217 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v217);
    v218 = 780;
LABEL_171:
    v219 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/topol/topol.c",
             152,
             "_parse_chain_eeprom",
             19,
             v218,
             100,
             v259);
    V_LOCK(v219);
    v220 = logfmt_raw((int)v259, 0x1000u);
    V_UNLOCK(v220);
    v170 = 1072;
    goto LABEL_132;
  }
  V_LOCK(v151);
  json_integer_value(v152);
  v153 = logfmt_raw((int)v259, 0x1000u);
  V_UNLOCK(v153);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_eeprom",
    19,
    783,
    20,
    v259);
  if ( v249 > 0 )
  {
    v154 = 0;
    v155 = 0;
    do
    {
      ++v154;
      v156 = json_integer_value(v152);
      v157 = dword_18EC80 + v155;
      v155 += 120;
      *(_DWORD *)(v157 + 116) = v156;
    }
    while ( v249 != v154 );
  }
  v158 = dword_18EC60;
  if ( dword_18EC60 > 1 )
  {
    v159 = 120;
    v160 = 1;
    do
    {
      ++v160;
      v161 = (void *)(dword_18EC80 + v159);
      v159 += 120;
      memcpy(v161, (const void *)dword_18EC80, 0x78u);
    }
    while ( v158 != v160 );
  }
  if ( v1[1] != -1 )
  {
    v162 = v1 + 1;
    __dmb(0xBu);
    do
    {
      v163 = __ldrex(v162);
      v164 = v163 - 1;
    }
    while ( __strex(v164, v162) );
    if ( !v164 )
      json_delete(v1);
  }
  return v247;
}
