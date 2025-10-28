int platform_topol_init()
{
  double *file; // r0
  double *v1; // r11
  _DWORD *v2; // r0
  _DWORD *v3; // r9
  _DWORD *v4; // r0
  const char *v5; // r9
  size_t v6; // r0
  char *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r9
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r9
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r8
  _DWORD *v16; // r0
  _DWORD *v17; // r8
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r2
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r2
  int v25; // r0
  int v26; // r2
  _DWORD *v27; // r0
  _DWORD *v28; // r0
  int v29; // r9
  int v30; // r0
  size_t v31; // r9
  _DWORD *v32; // r0
  int v33; // r6
  int v34; // r0
  _DWORD *v35; // r0
  int v36; // r6
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r6
  int v40; // r0
  _DWORD *v41; // r0
  int v42; // r6
  int v43; // r0
  _DWORD *v44; // r0
  int v45; // r8
  int v46; // r0
  _DWORD *v47; // r0
  _DWORD *v48; // r8
  char *v49; // r2
  _DWORD *v50; // r0
  int v51; // r8
  int v52; // r0
  _DWORD *v53; // r0
  int v54; // r8
  int v55; // r0
  size_t v56; // r0
  int v57; // r6
  void *v58; // r0
  _DWORD *v59; // r0
  int v60; // r6
  int v61; // r0
  _DWORD *v62; // r0
  int v63; // r6
  int v64; // r0
  _DWORD *v65; // r0
  int v66; // r6
  int v67; // r0
  _DWORD *v68; // r0
  int v69; // r6
  int v70; // r0
  int v71; // r3
  _DWORD *v72; // r0
  _DWORD *v73; // r0
  _DWORD *v74; // r10
  int v75; // r6
  _DWORD *v76; // r0
  int v77; // r7
  int v78; // r0
  int v79; // r0
  int v80; // r9
  _DWORD *v81; // r9
  _DWORD *v82; // r0
  _DWORD *v83; // r7
  _DWORD *v84; // r0
  const char *v85; // r7
  _DWORD *v86; // r0
  int v87; // r6
  int v88; // r0
  _DWORD *v89; // r0
  _DWORD *v90; // r6
  _DWORD *v91; // r0
  int v92; // r7
  char **v93; // r8
  const char *v94; // r0
  const char *v95; // r1
  const char *v96; // r11
  const char *v97; // t1
  int v98; // r6
  _DWORD *v99; // r0
  _DWORD *v100; // r7
  _DWORD *v101; // r0
  _DWORD *v102; // r0
  char **v103; // r7
  const char *v104; // r0
  const char *v105; // r1
  const char *v106; // r8
  const char *v107; // t1
  int v108; // r0
  int v109; // r2
  int v110; // r0
  int v111; // r2
  _DWORD *v112; // r0
  _DWORD *v113; // r0
  int v114; // r8
  _DWORD *v115; // r0
  _DWORD *v116; // r0
  int v117; // r9
  char **v118; // r6
  int v119; // r4
  const char *v120; // r7
  const char *v121; // r1
  const char *v122; // t1
  int v123; // r2
  _DWORD *v124; // r0
  int v125; // r6
  int v126; // r0
  int v127; // r4
  int v128; // r5
  int v129; // r0
  int v130; // r3
  int v131; // r6
  int v132; // r5
  int v133; // r4
  void *v134; // r0
  unsigned int *v135; // r3
  unsigned int v136; // r2
  unsigned int v137; // r2
  int v138; // r0
  int v139; // r3
  _DWORD *v140; // r0
  _DWORD *v141; // r0
  _DWORD *v142; // r11
  int v143; // r6
  _DWORD *v144; // r0
  int v145; // r7
  int v146; // r0
  int v147; // r0
  int v148; // r10
  _DWORD *v149; // r10
  _DWORD *v150; // r0
  _DWORD *v151; // r7
  _DWORD *v152; // r0
  const char *v153; // r7
  _DWORD *v154; // r0
  int v155; // r6
  int v156; // r0
  _DWORD *v157; // r0
  _DWORD *v158; // r6
  _DWORD *v159; // r0
  int v160; // r7
  char **v161; // r8
  const char *v162; // r0
  const char *v163; // r1
  const char *v164; // r9
  const char *v165; // t1
  int v166; // r6
  _DWORD *v167; // r0
  _DWORD *v168; // r7
  _DWORD *v169; // r0
  _DWORD *v170; // r0
  char **v171; // r7
  const char *v172; // r0
  const char *v173; // r1
  const char *v174; // r8
  const char *v175; // t1
  int v176; // r0
  int v177; // r0
  int v178; // r0
  int v179; // [sp+14h] [bp-1120h]
  _DWORD *v180; // [sp+18h] [bp-111Ch]
  int v181; // [sp+18h] [bp-111Ch]
  unsigned int v182; // [sp+1Ch] [bp-1118h]
  _DWORD *v183; // [sp+1Ch] [bp-1118h]
  unsigned int i; // [sp+1Ch] [bp-1118h]
  _DWORD *v185; // [sp+20h] [bp-1114h]
  _DWORD *v186; // [sp+20h] [bp-1114h]
  double *v187; // [sp+20h] [bp-1114h]
  double *v188; // [sp+24h] [bp-1110h]
  _DWORD *v189; // [sp+24h] [bp-1110h]
  char v190[252]; // [sp+34h] [bp-1100h] BYREF
  char v191[4100]; // [sp+130h] [bp-1004h] BYREF

  file = json_load_file("/etc/topol.conf", 0, v190);
  v1 = file;
  if ( !file || *(_DWORD *)file )
  {
    V_LOCK();
    v179 = -1;
    logfmt_raw(v191, 0x1000u, 0, "load topol config file %s failed", "/etc/topol.conf");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "platform_topol_init",
      19,
      1489,
      20,
      v191);
    return v179;
  }
  v2 = (_DWORD *)json_object_get(file, "machine");
  v3 = v2;
  if ( !v2 || *v2 != 2 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get machine failed");
    V_UNLOCK();
    v25 = g_zc;
    v26 = 140;
LABEL_26:
    zlog(
      v25,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_machine",
      14,
      v26,
      100,
      v191);
LABEL_27:
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse machine failed");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1496;
    goto LABEL_16;
  }
  V_LOCK();
  v4 = json_string_value(v3);
  logfmt_raw(v191, 0x1000u, 0, "load machine %s conf", v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    143,
    20,
    v191);
  v5 = (const char *)json_string_value(v3);
  v6 = strlen(v5);
  v7 = (char *)calloc(v6 + 1, 1u);
  topol_machine = (int)v7;
  if ( !v7 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get machine failed, Cannot allocate space");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_machine",
      14,
      149,
      100,
      v191);
    goto LABEL_27;
  }
  strcpy(v7, v5);
  V_LOCK();
  logfmt_raw(v191, 0x1000u, 0, "machine : %s ", topol_machine);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    154,
    20,
    v191);
  v8 = (_DWORD *)json_object_get(v1, "hw_version");
  v9 = v8;
  if ( !v8 || *v8 != 2 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get hw_version failed");
    V_UNLOCK();
    v25 = g_zc;
    v26 = 159;
    goto LABEL_26;
  }
  V_LOCK();
  v10 = json_string_value(v9);
  logfmt_raw(v191, 0x1000u, 0, "hw_version: %s", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    162,
    20,
    v191);
  v11 = (_DWORD *)json_object_get(v1, "sw_version");
  v12 = v11;
  if ( !v11 || *v11 != 2 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get sw_version failed");
    V_UNLOCK();
    v25 = g_zc;
    v26 = 167;
    goto LABEL_26;
  }
  V_LOCK();
  v13 = json_string_value(v12);
  logfmt_raw(v191, 0x1000u, 0, "sw_version: %s", v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_machine",
    14,
    170,
    20,
    v191);
  v14 = (_DWORD *)json_object_get(v1, "processor");
  v15 = v14;
  if ( !v14 || *v14 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get processor failed");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 182;
LABEL_93:
    zlog(
      v108,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_processor",
      16,
      v109,
      100,
      v191);
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse processor failed");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1503;
    goto LABEL_16;
  }
  V_LOCK();
  logfmt_raw(v191, 0x1000u, 0, "processor:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_processor",
    16,
    185,
    20,
    v191);
  v16 = (_DWORD *)json_object_get(v15, "type");
  v17 = v16;
  if ( !v16 || *v16 != 2 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    v108 = g_zc;
    v109 = 190;
    goto LABEL_93;
  }
  V_LOCK();
  v18 = json_string_value(v17);
  logfmt_raw(v191, 0x1000u, 0, "type: %s", v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_processor",
    16,
    193,
    20,
    v191);
  if ( sub_65810(v1) )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse power failed");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1510;
    goto LABEL_16;
  }
  if ( sub_65F0C(v1) )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse fan failed");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1517;
    goto LABEL_16;
  }
  v27 = (_DWORD *)json_object_get(v1, "chain");
  v180 = v27;
  if ( !v27 || *v27 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get chain failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 909;
    goto LABEL_95;
  }
  V_LOCK();
  logfmt_raw(v191, 0x1000u, 0, "chain:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    912,
    20,
    v191);
  v28 = (_DWORD *)json_object_get(v180, "chain_num");
  v29 = (int)v28;
  if ( !v28 || *v28 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get chain_num failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 917;
    goto LABEL_95;
  }
  V_LOCK();
  v30 = json_integer_value(v29);
  logfmt_raw(v191, 0x1000u, 0, "chain_num : %d", v30);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    920,
    20,
    v191);
  v31 = json_integer_value(v29);
  dword_1B4A08 = v31;
  V_LOCK();
  logfmt_raw(v191, 0x1000u, 0, "chain_num %d", v31);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_alloc_chain",
    12,
    81,
    20,
    v191);
  dword_1B4A28 = (int)calloc(v31, 0x78u);
  if ( !dword_1B4A28 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "malloc %d chain_t failed", v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_alloc_chain",
      12,
      86,
      100,
      v191);
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "Sweep error string = %s.", "M:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_alloc_chain",
      12,
      87,
      100,
      v191);
    goto LABEL_96;
  }
  v32 = (_DWORD *)json_object_get(v180, "chain_row");
  v33 = (int)v32;
  if ( !v32 || *v32 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get chain_row failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 928;
LABEL_95:
    zlog(
      v110,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain",
      12,
      v111,
      100,
      v191);
LABEL_96:
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse chain failed");
    V_UNLOCK();
    v19 = g_zc;
    v20 = 1525;
LABEL_16:
    zlog(
      v19,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "platform_topol_init",
      19,
      v20,
      20,
      v191);
    if ( *((_DWORD *)v1 + 1) != -1 )
    {
      v21 = (unsigned int *)v1 + 1;
      __dmb(0xBu);
      do
      {
        v22 = __ldrex(v21);
        v23 = v22 - 1;
      }
      while ( __strex(v23, v21) );
      if ( !v23 )
        json_delete(v1);
    }
    return 34;
  }
  V_LOCK();
  v34 = json_integer_value(v33);
  logfmt_raw(v191, 0x1000u, 0, "chain_row: %d", v34);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    931,
    20,
    v191);
  dword_1B4A0C = json_integer_value(v33);
  v35 = (_DWORD *)json_object_get(v180, "chain_column");
  v36 = (int)v35;
  if ( !v35 || *v35 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get chain_column failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 937;
    goto LABEL_95;
  }
  V_LOCK();
  v37 = json_integer_value(v36);
  logfmt_raw(v191, 0x1000u, 0, "chain_column: %d", v37);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    940,
    20,
    v191);
  dword_1B4A10 = json_integer_value(v36);
  v38 = (_DWORD *)json_object_get(v180, "chain_domain_num");
  v39 = (int)v38;
  if ( !v38 || *v38 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get chain_domain_num failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 946;
    goto LABEL_95;
  }
  V_LOCK();
  v40 = json_integer_value(v39);
  logfmt_raw(v191, 0x1000u, 0, "chain_domain_num : %d", v40);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    949,
    20,
    v191);
  dword_1B4A14 = json_integer_value(v39);
  v41 = (_DWORD *)json_object_get(v180, "chain_asic_num");
  v42 = (int)v41;
  if ( !v41 || *v41 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get chain_asic_num failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 955;
    goto LABEL_95;
  }
  V_LOCK();
  v43 = json_integer_value(v42);
  logfmt_raw(v191, 0x1000u, 0, "chain_asic_num : %d", v43);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    958,
    20,
    v191);
  dword_1B4A18 = json_integer_value(v42);
  v44 = (_DWORD *)json_object_get(v180, "domain_asic_num");
  v45 = (int)v44;
  if ( !v44 || *v44 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get domain_asic_num failed");
    V_UNLOCK();
    v110 = g_zc;
    v111 = 964;
    goto LABEL_95;
  }
  V_LOCK();
  v46 = json_integer_value(v45);
  logfmt_raw(v191, 0x1000u, 0, "domain_asic_num : %d", v46);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    967,
    20,
    v191);
  dword_1B4A1C = json_integer_value(v45);
  v47 = (_DWORD *)json_object_get(v180, "pic_mcu_en");
  v48 = v47;
  if ( !v47 || (unsigned int)(*v47 - 5) > 1 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get pic_mcu_en failed!");
    V_UNLOCK();
    v138 = 973;
    goto LABEL_132;
  }
  V_LOCK();
  v49 = "false";
  if ( *v48 == 5 )
    v49 = "true";
  logfmt_raw(v191, 0x1000u, 0, "pic_mcu_en: %s", v49);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    976,
    20,
    v191);
  byte_1B4A20 = *v48 == 5;
  v50 = (_DWORD *)json_object_get(v180, "sensor_mode");
  v51 = (int)v50;
  if ( !v50 || *v50 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get sensor_mode failed");
    V_UNLOCK();
    v138 = 982;
    goto LABEL_132;
  }
  V_LOCK();
  v52 = json_integer_value(v51);
  logfmt_raw(v191, 0x1000u, 0, "sensor mode : %d", v52);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    985,
    20,
    v191);
  *(_DWORD *)(dword_1B4A28 + 88) = json_integer_value(v51);
  v53 = (_DWORD *)json_object_get(v180, "sensor_num");
  v54 = (int)v53;
  if ( !v53 || *v53 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get sensor num failed");
    V_UNLOCK();
    v138 = 991;
LABEL_132:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain",
      12,
      v138,
      100,
      v191);
    goto LABEL_96;
  }
  V_LOCK();
  v55 = json_integer_value(v54);
  logfmt_raw(v191, 0x1000u, 0, "sensor num : %d", v55);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    994,
    20,
    v191);
  v56 = json_integer_value(v54);
  v57 = dword_1B4A28;
  *(_DWORD *)(dword_1B4A28 + 92) = v56;
  v58 = calloc(v56, 0x18u);
  *(_DWORD *)(v57 + 84) = v58;
  if ( !v58 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "calloc sensor failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_alloc_sensor",
      13,
      98,
      100,
      v191);
    goto LABEL_96;
  }
  v59 = (_DWORD *)json_object_get(v180, "max_chip_temp");
  v60 = (int)v59;
  if ( !v59 || *v59 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get max_chip_temp failed");
    V_UNLOCK();
    v138 = 1002;
    goto LABEL_132;
  }
  V_LOCK();
  v61 = json_integer_value(v60);
  logfmt_raw(v191, 0x1000u, 0, "max_chip_temp : %d", v61);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1005,
    20,
    v191);
  *(_DWORD *)(dword_1B4A28 + 96) = json_integer_value(v60);
  v62 = (_DWORD *)json_object_get(v180, "max_pcb_temp");
  v63 = (int)v62;
  if ( !v62 || *v62 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get max_pcb_temp failed");
    V_UNLOCK();
    v138 = 1011;
    goto LABEL_132;
  }
  V_LOCK();
  v64 = json_integer_value(v63);
  logfmt_raw(v191, 0x1000u, 0, "max_pcb_temp : %d", v64);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1014,
    20,
    v191);
  *(_DWORD *)(dword_1B4A28 + 100) = json_integer_value(v63);
  v65 = (_DWORD *)json_object_get(v180, "min_pcb_temp");
  v66 = (int)v65;
  if ( !v65 || *v65 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get min_pcb_temp failed");
    V_UNLOCK();
    v138 = 1020;
    goto LABEL_132;
  }
  V_LOCK();
  v67 = json_integer_value(v66);
  logfmt_raw(v191, 0x1000u, 0, "min_pcb_temp : %d", v67);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1023,
    20,
    v191);
  *(_DWORD *)(dword_1B4A28 + 104) = json_integer_value(v66);
  v68 = (_DWORD *)json_object_get(v180, "max_uneffective_count");
  v69 = (int)v68;
  if ( !v68 || *v68 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get max_uneffective_count failed");
    V_UNLOCK();
    v138 = 1029;
    goto LABEL_132;
  }
  V_LOCK();
  v70 = json_integer_value(v69);
  logfmt_raw(v191, 0x1000u, 0, "max_uneffective_count : %d", v70);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain",
    12,
    1032,
    20,
    v191);
  *(_DWORD *)(dword_1B4A28 + 108) = json_integer_value(v69);
  v179 = sub_66DAC(v180);
  if ( v179 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse asic failed");
    V_UNLOCK();
    v139 = 1038;
    goto LABEL_137;
  }
  if ( byte_1B4A20 && sub_6757C(v180) )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse chain pic failed");
    V_UNLOCK();
    v139 = 1046;
LABEL_137:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain",
      12,
      v139,
      100,
      v191);
    goto LABEL_96;
  }
  v71 = *(_DWORD *)(dword_1B4A28 + 88);
  if ( v71 == 3 )
  {
    v140 = (_DWORD *)json_object_get(v180, "ctrlboard_sensor");
    v189 = v140;
    if ( !v140 || *v140 != 1 )
    {
      V_LOCK();
      logfmt_raw(v191, 0x1000u, 0, "get ctrlboard_sensor sensor failed");
      V_UNLOCK();
      v178 = 641;
LABEL_182:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        v178,
        100,
        v191);
      V_LOCK();
      logfmt_raw(v191, 0x1000u, 0, "parse chain ctrlboard failed");
      V_UNLOCK();
      v138 = 1055;
      goto LABEL_132;
    }
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "ctrlboard_sensor:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_ctrlboard_sensor",
      29,
      644,
      20,
      v191);
    v187 = v1;
    for ( i = 0; i < (unsigned int)json_array_size(v189); ++i )
    {
      v141 = json_array_get(v189, i);
      v142 = v141;
      if ( !v141 || (v143 = *v141) != 0 )
      {
        v1 = v187;
        V_LOCK();
        logfmt_raw(v191, 0x1000u, 0, "get array %d failed", i);
        V_UNLOCK();
        v178 = 651;
        goto LABEL_182;
      }
      v144 = (_DWORD *)json_object_get(v141, "index");
      v145 = (int)v144;
      if ( !v144 || *v144 != 3 )
      {
        v1 = v187;
        V_LOCK();
        logfmt_raw(v191, 0x1000u, 0, "get array %d index failed", i);
        V_UNLOCK();
        v178 = 658;
        goto LABEL_182;
      }
      V_LOCK();
      v146 = json_integer_value(v145);
      logfmt_raw(v191, 0x1000u, 0, "index: %d", v146);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        661,
        20,
        v191);
      v147 = json_integer_value(v145);
      v148 = *(_DWORD *)(dword_1B4A28 + 84);
      *(_DWORD *)(v148 + 24 * v147) = v147;
      v149 = (_DWORD *)(v148 + 24 * v147);
      v149[2] = 2;
      v150 = (_DWORD *)json_object_get(v142, "type");
      v151 = v150;
      if ( !v150 || *v150 != 2 )
      {
        v1 = v187;
        V_LOCK();
        logfmt_raw(v191, 0x1000u, 0, "get array %d type failed", i);
        V_UNLOCK();
        v178 = 670;
        goto LABEL_182;
      }
      V_LOCK();
      v152 = json_string_value(v151);
      logfmt_raw(v191, 0x1000u, 0, "type: %s", v152);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        673,
        20,
        v191);
      v153 = (const char *)json_string_value(v151);
      if ( strcmp(v153, "TMP451") )
      {
        do
          ++v143;
        while ( v143 != 5 && strcmp(v153, off_168064[v143]) );
      }
      v149[1] = v143;
      v154 = (_DWORD *)json_object_get(v142, "iic");
      v155 = (int)v154;
      if ( !v154 || *v154 != 3 )
      {
        v1 = v187;
        V_LOCK();
        logfmt_raw(v191, 0x1000u, 0, "get array %d bind_asic failed", i);
        V_UNLOCK();
        v178 = 679;
        goto LABEL_182;
      }
      V_LOCK();
      v156 = json_integer_value(v155);
      logfmt_raw(v191, 0x1000u, 0, "iic: %d", v156);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        682,
        20,
        v191);
      v149[5] = json_integer_value(v155);
      v157 = (_DWORD *)json_object_get(v142, "x");
      v158 = v157;
      if ( !v157 || *v157 != 2 )
      {
        v1 = v187;
        V_LOCK();
        logfmt_raw(v191, 0x1000u, 0, "get array %d x failed", i);
        V_UNLOCK();
        v178 = 688;
        goto LABEL_182;
      }
      V_LOCK();
      v159 = json_string_value(v158);
      logfmt_raw(v191, 0x1000u, 0, "x: %s", v159);
      V_UNLOCK();
      v160 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        691,
        20,
        v191);
      v161 = off_1680A8;
      v162 = (const char *)json_string_value(v158);
      v163 = "air_in";
      v164 = v162;
      while ( strcmp(v164, v163) )
      {
        v165 = *v161++;
        v163 = v165;
        ++v160;
      }
      v149[3] = v160;
      v166 = 0;
      v167 = (_DWORD *)json_object_get(v142, "y");
      v168 = v167;
      if ( !v167 || *v167 != 2 )
      {
        v1 = v187;
        V_LOCK();
        logfmt_raw(v191, 0x1000u, 0, "get array %d y failed", i);
        V_UNLOCK();
        v178 = 697;
        goto LABEL_182;
      }
      V_LOCK();
      v169 = json_string_value(v168);
      logfmt_raw(v191, 0x1000u, 0, "y: %s", v169);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_ctrlboard_sensor",
        29,
        700,
        20,
        v191);
      v170 = v168;
      v171 = off_1680C8;
      v172 = (const char *)json_string_value(v170);
      v173 = "top";
      v174 = v172;
      while ( strcmp(v174, v173) )
      {
        v175 = *v171++;
        v173 = v175;
        ++v166;
      }
      v149[4] = v166;
    }
    v1 = v187;
    v71 = *(_DWORD *)(dword_1B4A28 + 88);
  }
  if ( (v71 & 0xFFFFFFFD) == 0 )
  {
    v72 = (_DWORD *)json_object_get(v180, "asic_sensor");
    v185 = v72;
    if ( v72 && *v72 == 1 )
    {
      V_LOCK();
      v182 = 0;
      logfmt_raw(v191, 0x1000u, 0, "asic_sensor:");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/topol/topol.c",
        152,
        "_parse_chain_sensor",
        19,
        803,
        20,
        v191);
      v188 = v1;
      while ( 1 )
      {
        if ( v182 >= (unsigned int)json_array_size(v185) )
        {
          v1 = v188;
          goto LABEL_103;
        }
        v73 = json_array_get(v185, v182);
        v74 = v73;
        if ( !v73 )
          break;
        v75 = *v73;
        if ( *v73 )
          break;
        v76 = (_DWORD *)json_object_get(v73, "index");
        v77 = (int)v76;
        if ( !v76 || *v76 != 3 )
        {
          v1 = v188;
          V_LOCK();
          logfmt_raw(v191, 0x1000u, 0, "get array %d index failed", v182);
          V_UNLOCK();
          v177 = 818;
          goto LABEL_173;
        }
        V_LOCK();
        v78 = json_integer_value(v77);
        logfmt_raw(v191, 0x1000u, 0, "index: %d", v78);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          821,
          20,
          v191);
        v79 = json_integer_value(v77);
        v80 = *(_DWORD *)(dword_1B4A28 + 84);
        *(_DWORD *)(v80 + 24 * v79) = v79;
        v81 = (_DWORD *)(v80 + 24 * v79);
        v81[2] = 1;
        v82 = (_DWORD *)json_object_get(v74, "type");
        v83 = v82;
        if ( !v82 || *v82 != 2 )
        {
          v1 = v188;
          V_LOCK();
          logfmt_raw(v191, 0x1000u, 0, "get array %d type failed", v182);
          V_UNLOCK();
          v177 = 830;
          goto LABEL_173;
        }
        V_LOCK();
        v84 = json_string_value(v83);
        logfmt_raw(v191, 0x1000u, 0, "type: %s", v84);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          833,
          20,
          v191);
        v85 = (const char *)json_string_value(v83);
        if ( strcmp(v85, "TMP451") )
        {
          do
            ++v75;
          while ( v75 != 5 && strcmp(v85, off_168064[v75]) );
        }
        v81[1] = v75;
        v86 = (_DWORD *)json_object_get(v74, "bind_asic");
        v87 = (int)v86;
        if ( !v86 || *v86 != 3 )
        {
          v1 = v188;
          V_LOCK();
          logfmt_raw(v191, 0x1000u, 0, "get array %d bind_asic failed", v182);
          V_UNLOCK();
          v177 = 839;
          goto LABEL_173;
        }
        V_LOCK();
        v88 = json_integer_value(v87);
        logfmt_raw(v191, 0x1000u, 0, "bind_asic: %d", v88);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          842,
          20,
          v191);
        v81[5] = json_integer_value(v87);
        v89 = (_DWORD *)json_object_get(v74, "x");
        v90 = v89;
        if ( !v89 || *v89 != 2 )
        {
          v1 = v188;
          V_LOCK();
          logfmt_raw(v191, 0x1000u, 0, "get array %d x failed", v182);
          V_UNLOCK();
          v177 = 848;
          goto LABEL_173;
        }
        V_LOCK();
        v91 = json_string_value(v90);
        logfmt_raw(v191, 0x1000u, 0, "x: %s", v91);
        V_UNLOCK();
        v92 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          851,
          20,
          v191);
        v93 = off_1680A8;
        v94 = (const char *)json_string_value(v90);
        v95 = "air_in";
        v96 = v94;
        while ( strcmp(v96, v95) )
        {
          v97 = *v93++;
          v95 = v97;
          ++v92;
        }
        v81[3] = v92;
        v98 = 0;
        v99 = (_DWORD *)json_object_get(v74, "y");
        v100 = v99;
        if ( !v99 || *v99 != 2 )
        {
          v1 = v188;
          V_LOCK();
          logfmt_raw(v191, 0x1000u, 0, "get array %d y failed", v182);
          V_UNLOCK();
          v177 = 857;
          goto LABEL_173;
        }
        V_LOCK();
        v101 = json_string_value(v100);
        logfmt_raw(v191, 0x1000u, 0, "y: %s", v101);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/topol/topol.c",
          152,
          "_parse_chain_sensor",
          19,
          860,
          20,
          v191);
        v102 = v100;
        v103 = off_1680C8;
        v104 = (const char *)json_string_value(v102);
        v105 = "top";
        v106 = v104;
        while ( strcmp(v106, v105) )
        {
          v107 = *v103++;
          v105 = v107;
          ++v98;
        }
        v81[4] = v98;
        ++v182;
      }
      v1 = v188;
      V_LOCK();
      logfmt_raw(v191, 0x1000u, 0, "get array %d failed", v182);
      V_UNLOCK();
      v177 = 811;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v191, 0x1000u, 0, "get sensor failed");
      V_UNLOCK();
      v177 = 800;
    }
LABEL_173:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_sensor",
      19,
      v177,
      100,
      v191);
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse chain sensor failed");
    V_UNLOCK();
    v138 = 1065;
    goto LABEL_132;
  }
LABEL_103:
  v112 = v180;
  v181 = dword_1B4A08;
  v113 = (_DWORD *)json_object_get(v112, "eeprom");
  v183 = v113;
  if ( !v113 || (v114 = *v113) != 0 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get eeprom failed");
    V_UNLOCK();
    v176 = 761;
    goto LABEL_170;
  }
  V_LOCK();
  logfmt_raw(v191, 0x1000u, 0, "eeprom:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_eeprom",
    19,
    764,
    20,
    v191);
  v115 = (_DWORD *)json_object_get(v183, "type");
  v186 = v115;
  if ( !v115 || *v115 != 2 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get type failed");
    V_UNLOCK();
    v176 = 769;
LABEL_170:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/topol/topol.c",
      152,
      "_parse_chain_eeprom",
      19,
      v176,
      100,
      v191);
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "parse chain eeprom failed");
    V_UNLOCK();
    v138 = 1073;
    goto LABEL_132;
  }
  V_LOCK();
  v116 = json_string_value(v186);
  logfmt_raw(v191, 0x1000u, 0, "type: %s", v116);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_eeprom",
    19,
    772,
    20,
    v191);
  if ( v181 > 0 )
  {
    v117 = 0;
    do
    {
      v118 = off_168194;
      v119 = 0;
      v120 = (const char *)json_string_value(v186);
      v121 = "AT24C02D";
      while ( strcmp(v120, v121) )
      {
        v122 = v118[1];
        ++v118;
        v121 = v122;
        ++v119;
      }
      ++v114;
      v123 = dword_1B4A28 + v117;
      v117 += 120;
      *(_DWORD *)(v123 + 112) = v119;
    }
    while ( v181 != v114 );
  }
  v124 = (_DWORD *)json_object_get(v183, "i2c_addr");
  v125 = (int)v124;
  if ( !v124 || *v124 != 3 )
  {
    V_LOCK();
    logfmt_raw(v191, 0x1000u, 0, "get i2c_addr failed");
    V_UNLOCK();
    v176 = 781;
    goto LABEL_170;
  }
  V_LOCK();
  v126 = json_integer_value(v125);
  logfmt_raw(v191, 0x1000u, 0, "i2c_addr: %d", v126);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/topol/topol.c",
    152,
    "_parse_chain_eeprom",
    19,
    784,
    20,
    v191);
  if ( v181 > 0 )
  {
    v127 = 0;
    v128 = 0;
    do
    {
      ++v127;
      v129 = json_integer_value(v125);
      v130 = dword_1B4A28 + v128;
      v128 += 120;
      *(_DWORD *)(v130 + 116) = v129;
    }
    while ( v181 != v127 );
  }
  v131 = dword_1B4A08;
  if ( dword_1B4A08 > 1 )
  {
    v132 = 120;
    v133 = 1;
    do
    {
      ++v133;
      v134 = (void *)(dword_1B4A28 + v132);
      v132 += 120;
      memcpy(v134, (const void *)dword_1B4A28, 0x78u);
    }
    while ( v131 != v133 );
  }
  if ( *((_DWORD *)v1 + 1) != -1 )
  {
    v135 = (unsigned int *)v1 + 1;
    __dmb(0xBu);
    do
    {
      v136 = __ldrex(v135);
      v137 = v136 - 1;
    }
    while ( __strex(v137, v135) );
    if ( !v137 )
      json_delete(v1);
  }
  return v179;
}
