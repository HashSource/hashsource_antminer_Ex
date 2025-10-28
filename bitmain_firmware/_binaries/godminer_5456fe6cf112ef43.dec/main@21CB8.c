int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // r1
  int v6; // r2
  int v7; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int device_num; // r0
  int version_file; // r0
  int hardware_version; // r9
  int v21; // r0
  int v22; // r3
  int v23; // r2
  int v24; // r9
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r9
  _DWORD *all_created_runtime; // r5
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int (__fastcall *v34)(int); // r3
  int v35; // r0
  int v36; // r0
  int v37; // r10
  int eeprom_chain_load_state; // r0
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
  const char *v49; // r1
  int v50; // r12
  int v51; // r3
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // lr
  int v60; // r12
  int v61; // r3
  FILE *v62; // r0
  FILE *v63; // r4
  size_t v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // r4
  int *v72; // r0
  int v73; // r12
  int k; // r4
  int (__fastcall *v75)(int); // r3
  int v76; // r0
  int v77; // r0
  int v78; // r0
  unsigned int v79; // r0
  int v80; // r0
  int v81; // r4
  int v82; // r1
  int m; // r4
  void *(**v84)(void *); // r3
  pthread_t *v85; // r0
  int n; // r4
  pthread_t v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  _DWORD *v91; // r5
  int ii; // r4
  int v93; // r1
  int v94; // r0
  int v95; // r0
  int v96; // r0
  bool v97; // cc
  int v98; // r4
  int v99; // r0
  __sighandler_t v100; // r0
  int v101; // r0
  int v102; // r0
  int pool_stratum_threads; // r0
  int v104; // r9
  unsigned int v105; // r0
  int v107; // r1
  int v108; // r0
  int v109; // r0
  int v110; // r0
  int v111; // r0
  int v112; // r9
  int v113; // r0
  int v114; // r0
  int v115; // r0
  int v116; // r0
  int v117; // r0
  int v118; // r0
  int v119; // r5
  int v120; // r0
  int v121; // r5
  int v122; // r0
  int v123; // r0
  int (__fastcall *v124)(int); // r3
  int v125; // r0
  int v126; // r5
  int v127; // r6
  int v128; // r0
  int v129; // r0
  int v130; // r0
  int v131; // r0
  int v132; // r0
  unsigned int v133; // r0
  int v134; // r0
  int v135; // r0
  int v136; // r0
  int v137; // r0
  int v138; // r0
  unsigned int v139; // r0
  int v140; // r0
  int v141; // r0
  int v142; // r0
  int v143; // r0
  int v144; // r0
  int v145; // r0
  int *v146; // r5
  int v147; // r9
  int v148; // r0
  int v149; // r0
  int v150; // t1
  int v151; // r3
  int v152; // r6
  int i; // r9
  int j; // r4
  int v155; // r9
  int v156; // r0
  int v157; // r0
  int v158; // r0
  int v159; // r0
  int v160; // r0
  int v161; // r0
  int v162; // r0
  int v163; // r0
  char *s1; // [sp+2Ch] [bp-10B8h]
  char *s1a; // [sp+2Ch] [bp-10B8h]
  int v166; // [sp+30h] [bp-10B4h]
  int *v167; // [sp+38h] [bp-10ACh]
  _DWORD *v168; // [sp+48h] [bp-109Ch]
  int v169; // [sp+54h] [bp-1090h] BYREF
  int v170; // [sp+58h] [bp-108Ch] BYREF
  size_t nmemb[4]; // [sp+5Ch] [bp-1088h] BYREF
  _DWORD ptr[4]; // [sp+6Ch] [bp-1078h] BYREF
  __int16 v173; // [sp+7Ch] [bp-1068h]
  char v174[32]; // [sp+80h] [bp-1064h] BYREF
  char v175[32]; // [sp+A0h] [bp-1044h] BYREF
  char v176[32]; // [sp+C0h] [bp-1024h] BYREF
  _BYTE v177[4100]; // [sp+E0h] [bp-1004h] BYREF

  v169 = 0;
  if ( sub_2B468("godminer", argv, envp) > 1 )
  {
    v7 = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return v7;
  }
  if ( sub_2B468("godminer-update", v5, v6) > 0 )
  {
    v7 = 1;
    printf("godminer-update is running now, exit.");
    return v7;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v9 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", &off_12EA7C, 0);
    if ( v9 < 0 )
      break;
    parse_arg(v9, (char *)optarg);
  }
  if ( argc > optind )
  {
    ((void (*)(void))V_LOCK)();
    v159 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v159);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_cmdline",
      13,
      604,
      100,
      v177);
    exit(1);
  }
  if ( !total_pools )
  {
    ((void (*)(void))V_LOCK)();
    v46 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v46);
    v7 = 1;
    v47 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1124,
            80,
            v177);
    V_LOCK(v47);
    v48 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v48);
    v49 = "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c";
    v50 = 100;
    v51 = 1125;
    v52 = g_zc;
LABEL_34:
    zlog(v52, v49, 132, "main", 4, v51, v50, v177);
    return v7;
  }
  V_LOCK(v9);
  v10 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1130,
          40,
          v177);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v12);
  v13 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1140,
          40,
          v177);
  check_pool_worker(v13);
  v14 = system_info_init(opt_algo);
  if ( v14 )
  {
    V_LOCK(v14);
    v7 = 1;
    v53 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v53);
    v50 = 100;
    v51 = 1151;
LABEL_37:
    LOWORD(v49) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/god-miner.c";
LABEL_38:
    HIWORD(v49) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    v52 = g_zc;
    goto LABEL_34;
  }
  v15 = ((int (*)(void))dev_ctrl)();
  v16 = (*(int (__fastcall **)(int))(v15 + 8))(opt_algo);
  v7 = v16;
  if ( v16 )
  {
    V_LOCK(v16);
    v7 = 1;
    v54 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v54);
    v50 = 100;
    v51 = 1157;
    goto LABEL_37;
  }
  v17 = check_fan_valiad();
  device_num = query_device_num(v17);
  v169 = device_num;
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v88 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v88);
    v50 = 80;
    v51 = 1167;
    goto LABEL_37;
  }
  if ( opt_version_path )
    version_file = read_version_file();
  else
    version_file = make_fake_version(opt_algo);
  hardware_version = get_hardware_version(version_file);
  V_LOCK(hardware_version);
  v21 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "init_miner_version",
    18,
    684,
    40,
    v177);
  v22 = BYTE2(hardware_version);
  v23 = (unsigned __int8)hardware_version;
  v24 = 0;
  v25 = sprintf(g_miner_version, "%d.%d-%s", v23, v22, "1.0.0");
  V_LOCK(v25);
  getpid();
  v26 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v26);
  v27 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1178,
          60,
          v177);
  V_LOCK(v27);
  v28 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1179,
    60,
    v177);
  while ( v169 > v24 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      v7 = 1;
      V_LOCK(0);
      v58 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v58);
      v59 = 80;
      v60 = 1183;
LABEL_42:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v60,
        v59,
        v177);
      return v7;
    }
    ++v24;
  }
  v29 = 0;
  all_created_runtime = (_DWORD *)get_all_created_runtime(&v169);
  while ( v169 > v29 )
  {
    v31 = ((int (*)(void))dev_ctrl)();
    v32 = (*(int (__fastcall **)(int))(v31 + 40))(v29);
    v33 = printf("eeprom add device :%d\n", v32);
    v34 = *(int (__fastcall **)(int))(dev_ctrl(v33) + 40);
    v35 = v29++;
    v36 = v34(v35);
    add_eeprom_device(v36);
  }
  v37 = eeprom_load();
  while ( v169 > v7 )
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v7);
    if ( eeprom_chain_load_state == -1 )
    {
      v55 = V_LOCK(-1);
      v56 = dev_ctrl(v55);
      (*(void (__fastcall **)(int))(v56 + 40))(v7);
      v57 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v57);
      v42 = 1206;
      goto LABEL_31;
    }
    if ( !eeprom_chain_load_state )
    {
      v39 = V_LOCK(0);
      v40 = dev_ctrl(v39);
      (*(void (__fastcall **)(int))(v40 + 40))(v7);
      v41 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v41);
      v42 = 1208;
LABEL_31:
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/god-miner.c",
                                  132,
                                  "main",
                                  4,
                                  v42,
                                  100,
                                  v177);
LABEL_32:
      v43 = V_LOCK(eeprom_chain_load_state);
      v44 = dev_ctrl(v43);
      (*(void (__fastcall **)(int))(v44 + 40))(v7);
      v45 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v45);
      v7 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1230,
        60,
        v177);
      return v7;
    }
    if ( eeprom_chain_load_state <= 0 )
      goto LABEL_32;
    ++v7;
  }
  ptr[1] = 0;
  ptr[0] = 0;
  if ( opt_algo == 5 )
    LOWORD(v61) = -1896;
  else
    LOWORD(v61) = -1888;
  HIWORD(v61) = 18;
  g_miner_sn_file_path = v61;
  ptr[2] = 0;
  ptr[3] = 0;
  v173 = 0;
  v62 = (FILE *)fopen64(v61, "r");
  v63 = v62;
  if ( v62 )
  {
    v64 = fread(ptr, 0x11u, 1u, v62);
    if ( v64 )
    {
      V_LOCK(v64);
      v65 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v65);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1254,
        60,
        v177);
    }
    v66 = fclose(v63);
  }
  else
  {
    V_LOCK(0);
    v108 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v108);
    v66 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1248,
            100,
            v177);
  }
  if ( v37 )
  {
    V_LOCK(v66);
    v7 = 1;
    v89 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v89);
    v59 = 100;
    v60 = 1277;
    goto LABEL_42;
  }
  opt_custom_freq = eeprom_get_min_freq(v66);
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK(opt_custom_voltage);
  v67 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v67);
  v68 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1273,
          60,
          v177);
  V_LOCK(v68);
  v69 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v69);
  v70 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1274,
          60,
          v177);
  if ( opt_algo == 6 )
    sub_2C0A4(v70);
  v71 = 0;
  nmemb[0] = 0;
  s1 = (char *)get_all_created_runtime(nmemb);
  v72 = (int *)is_eeprom_loaded();
  if ( v72 )
  {
    while ( v71 < (int)nmemb[0] )
    {
      v73 = *(_DWORD *)&s1[4 * v71++];
      v72 = (int *)(*(int (__fastcall **)(int, int, int))(v73 + 108))(v73, 1, opt_custom_freq);
    }
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v72 = (int *)calloc(nmemb[0], 4u);
    v168 = all_created_runtime;
    v146 = v72;
    v167 = v72;
    v147 = 0;
    v166 = 0;
    while ( v147 < (int)nmemb[0] )
    {
      v148 = (*(int (**)(void))(*(_DWORD *)&s1[4 * v147] + 116))();
      V_LOCK(v148);
      ++v147;
      V_INT((int)v176, "chain");
      v149 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v149);
      v72 = (int *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/god-miner.c",
                     132,
                     "backend_runtime_custom_parameter_update",
                     39,
                     973,
                     60,
                     v177);
      v150 = *v146++;
      v151 = v166;
      if ( (unsigned int)(v150 - 1) >= 2 )
        v151 = 1;
      v166 = v151;
    }
    v152 = v166;
    for ( i = 1; ; i = 2 )
    {
      for ( j = 0; j < (int)nmemb[0]; ++j )
      {
        if ( v152 && v167[j] == i )
        {
          V_LOCK(v72);
          --v152;
          V_INT((int)v175, "chain");
          v157 = logfmt_raw((int)v177, 0x1000u);
          V_UNLOCK(v157);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "backend_runtime_custom_parameter_update",
            39,
            982,
            60,
            v177);
          v72 = (int *)(*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)&s1[4 * j] + 108))(
                         *(_DWORD *)&s1[4 * j],
                         1,
                         (int)*(float *)(*(_DWORD *)&s1[4 * j] + 760) + 25,
                         0,
                         0);
        }
      }
      if ( i == 2 )
        break;
    }
    v155 = 0;
    while ( v155 < (int)nmemb[0] )
    {
      V_LOCK(v72);
      V_INT((int)v174, "chain");
      ++v155;
      v156 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v156);
      v72 = (int *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/god-miner.c",
                     132,
                     "backend_runtime_custom_parameter_update",
                     39,
                     990,
                     60,
                     v177);
    }
    v37 = 0;
    all_created_runtime = v168;
  }
  for ( k = 0; v169 > k; ++k )
  {
    v75 = *(int (__fastcall **)(int))(dev_ctrl(v72) + 28);
    v76 = k;
    v72 = (int *)v75(v76);
  }
  V_LOCK(v72);
  v77 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v77);
  v78 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1289,
          60,
          v177);
  power_off(v78);
  v79 = sleep(8u);
  v80 = power_init(v79);
  v81 = v80;
  if ( v80 )
  {
    V_LOCK(v80);
    v7 = 1;
    v135 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v135);
    v50 = 100;
    v51 = 1293;
    goto LABEL_37;
  }
  while ( v169 > v81 )
  {
    (*(void (**)(void))all_created_runtime[v81])();
    v82 = all_created_runtime[v81++];
    v80 = redirect_nonce_output(*all_created_runtime, v82);
  }
  for ( m = 0; v169 > m; ++m )
  {
    ((void (*)(void))sub_2B1CC)();
    v84 = (void *(**)(void *))all_created_runtime[m];
    v85 = &nmemb[m];
    v80 = pthread_create(v85, 0, v84[1], v84);
  }
  for ( n = 0; v169 > n; ++n )
  {
    v87 = nmemb[n];
    v80 = pthread_join(v87, 0);
  }
  check_and_destroy_abnormal_runtime(v80);
  v90 = get_all_created_runtime(&v169);
  v91 = (_DWORD *)v90;
  if ( v169 <= 0 )
  {
    V_LOCK(v90);
    v7 = 1;
    v145 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v145);
    v59 = 100;
    v60 = 1328;
    goto LABEL_42;
  }
  for ( ii = 0; ii < v169; ++ii )
  {
    v93 = v91[ii];
    v94 = redirect_nonce_output(*v91, v93);
  }
  if ( is_check_asic_voltage_enable(v94) )
  {
    if ( opt_algo == 6 )
    {
      set_working_voltage_and_runtime_freq();
    }
    else
    {
      ((void (*)(void))sub_2B1CC)();
      set_working_voltage(1);
    }
  }
  set_baud(3125000);
  v95 = opt_algo;
  if ( opt_algo == 8 )
    v95 = 2;
  v96 = set_frontend_runtime_type(v95);
  while ( total_pools > v37 )
  {
    v97 = opt_algo != 0;
    if ( opt_algo )
      v97 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v97 )
    {
      v98 = *(_DWORD *)(pools + 4 * v37);
      V_LOCK(v96);
      v99 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v99);
      v96 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/god-miner.c",
              132,
              "main",
              4,
              1358,
              40,
              v177);
      *(_BYTE *)(v98 + 1824) = 1;
    }
    ++v37;
  }
  start_dag_gen_engine(v96);
  signal(2, (__sighandler_t)sub_2B220);
  signal(3, (__sighandler_t)sub_2B220);
  signal(15, (__sighandler_t)sub_2B220);
  signal(11, (__sighandler_t)sub_2B220);
  signal(10, (__sighandler_t)sub_2B220);
  v100 = signal(13, (__sighandler_t)1);
  V_LOCK(v100);
  v101 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v101);
  v102 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "main",
           4,
           1379,
           60,
           v177);
  pool_stratum_threads = create_pool_stratum_threads(v102);
  if ( pool_stratum_threads )
  {
    V_LOCK(pool_stratum_threads);
    v7 = 1;
    v144 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v144);
    v50 = 100;
    v51 = 1382;
    LOWORD(v49) = -4000;
    goto LABEL_38;
  }
  v104 = 1;
  v105 = sleep(1u);
  while ( v104 != 60 && ((unsigned __int8)pools_active ^ 1) & 1 )
  {
    ++v104;
    sleep(1u);
    v105 = sub_12CEEC(v104, 10);
    if ( !v107 )
      v105 = sub_2B1CC(v105);
  }
  v109 = miner_monitor_init(v105);
  v110 = godminer_register_status_monitor(v109);
  v111 = miner_monitor_start(v110);
  v112 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK(v111);
    v113 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v113);
    v114 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1400,
             100,
             v177);
    V_LOCK(v114);
    v115 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v115);
    v116 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1401,
             100,
             v177);
    V_LOCK(v116);
    v117 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v117);
    v118 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1402,
             100,
             v177);
    while ( total_pools > v112 )
    {
      v119 = *(_DWORD *)(pools + 4 * v112);
      V_LOCK(v118);
      v120 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v120);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1408,
        80,
        v177);
      v118 = *(_DWORD *)(v119 + 16);
      if ( v118 )
      {
        s1a = *(char **)(v119 + 12);
        if ( s1a )
        {
          if ( strstr((const char *)v118, "stats") )
            v118 = 1;
          else
            v118 = strcmp(s1a, "benchmark") == 0;
          *(_BYTE *)(v119 + 1816) = v118;
        }
      }
      ++v112;
    }
    v7 = 0;
    V_LOCK(v118);
    v121 = 0;
    v122 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v122);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1414,
             100,
             v177);
    while ( v169 > v121 )
    {
      v124 = *(int (__fastcall **)(int))(dev_ctrl(v123) + 28);
      v125 = v121++;
      v123 = v124(v125);
    }
    v126 = 0;
    v170 = 0;
    v127 = get_all_created_runtime(&v170);
    while ( v126 < v170 )
    {
      (*(void (**)(void))(*(_DWORD *)(v127 + 4 * v126) + 8))();
      v128 = *(_DWORD *)(v127 + 4 * v126++);
      (*(void (**)(void))(v128 + 16))();
    }
    v129 = fan_pwm_set(20);
    v130 = green_led_off(v129);
    v131 = red_led_off(v130);
    power_off(v131);
    if ( opt_api_remote && (dword_16CEF0 = 1, (v132 = sub_21C78((int)&dword_16CEF0, (void *(*)(void *))sub_2C074)) != 0) )
    {
      V_LOCK(v132);
      v160 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v160);
      v133 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "process_no_servers_could_be_used",
               32,
               927,
               100,
               v177);
    }
    else
    {
      v133 = set_miner_network_working_status(1);
      while ( !pools_active )
        v133 = sleep(1u);
    }
    V_LOCK(v133);
    v134 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v134);
    v59 = 60;
    v60 = 1420;
    goto LABEL_42;
  }
  thr_info = 0;
  v136 = sub_21C78((int)&thr_info, (void *(*)(void *))work_generator_thread);
  if ( v136 )
  {
    V_LOCK(v136);
    v7 = 1;
    v158 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v158);
    v59 = 100;
    v60 = 1429;
    goto LABEL_42;
  }
  dword_16CEF0 = 1;
  v137 = sub_21C78((int)&dword_16CEF0, (void *(*)(void *))nonce_submit_thread);
  if ( v137 )
  {
    V_LOCK(v137);
    v7 = 1;
    v162 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v162);
    v59 = 100;
    v60 = 1437;
    goto LABEL_42;
  }
  set_miner_start_time();
  dword_16CF20 = 2;
  v138 = sub_21C78((int)&dword_16CF20, (void *(*)(void *))watchpool_thread);
  v7 = v138;
  if ( v138 )
  {
    V_LOCK(v138);
    v7 = 1;
    v161 = logfmt_raw((int)v177, 0x1000u);
    V_UNLOCK(v161);
    v59 = 100;
    v60 = 1448;
    goto LABEL_42;
  }
  v139 = sleep(5u);
  if ( opt_api_remote )
  {
    dword_16CF50 = 3;
    v139 = sub_21C78((int)&dword_16CF50, (void *(*)(void *))sub_2C074);
    if ( v139 )
    {
      V_LOCK(v139);
      v7 = 1;
      v163 = logfmt_raw((int)v177, 0x1000u);
      V_UNLOCK(v163);
      v59 = 100;
      v60 = 1459;
      goto LABEL_42;
    }
  }
  v140 = http_test_case_init(v139);
  start_http_thread(v140);
  v141 = pthread_join(dword_16CEC4, 0);
  V_LOCK(v141);
  v142 = logfmt_raw((int)v177, 0x1000u);
  V_UNLOCK(v142);
  v143 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "main",
           4,
           1471,
           80,
           v177);
  print_summary(v143);
  return v7;
}
