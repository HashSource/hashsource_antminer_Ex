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
  int all_created_runtime; // r0
  void *v30; // lr
  _DWORD *v31; // r5
  int v32; // r1
  int v33; // r12
  int v34; // r0
  int i; // r3
  int v36; // r2
  int j; // r9
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int (__fastcall *v41)(int); // r3
  int v42; // r0
  int v43; // r0
  int eeprom_chain_load_state; // r0
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
  const char *v55; // r1
  int v56; // r12
  int v57; // r3
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // lr
  int v66; // r12
  int v67; // r3
  FILE *v68; // r0
  FILE *v69; // r4
  size_t v70; // r0
  int v71; // r0
  int v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int v76; // r4
  int v77; // r9
  _DWORD *v78; // r0
  int n; // r4
  int (__fastcall *v80)(int); // r3
  int v81; // r0
  int v82; // r0
  int v83; // r0
  int v84; // r0
  unsigned int v85; // r0
  int v86; // r0
  int ii; // r4
  int v88; // r1
  int jj; // r4
  void *(**v90)(void *); // r3
  pthread_t *v91; // r0
  int kk; // r4
  pthread_t v93; // r0
  int v94; // r12
  int v95; // r0
  int v96; // r0
  int v97; // r0
  _DWORD *v98; // r5
  int mm; // r4
  int v100; // r1
  int v101; // r0
  int v102; // r0
  int v103; // r0
  int nn; // r10
  bool v105; // cc
  int v106; // r0
  __sighandler_t v107; // r0
  int v108; // r0
  int v109; // r0
  int pool_stratum_threads; // r0
  int v111; // r9
  unsigned int v112; // r0
  int v114; // r1
  int v115; // r0
  int v116; // r0
  int v117; // r0
  int v118; // r0
  int v119; // r0
  int v120; // r0
  int v121; // r9
  int v122; // r0
  int v123; // r0
  int v124; // r0
  int v125; // r0
  int v126; // r0
  int v127; // r0
  int v128; // r8
  int v129; // r0
  int v130; // r7
  int v131; // r0
  int v132; // r0
  int (__fastcall *v133)(int); // r3
  int v134; // r0
  int v135; // r7
  int v136; // r8
  int v137; // r0
  int v138; // r0
  int v139; // r0
  int v140; // r0
  int v141; // r0
  unsigned int v142; // r0
  int v143; // r0
  int v144; // r0
  int v145; // r0
  unsigned int v146; // r0
  int v147; // r0
  int v148; // r0
  int v149; // r0
  int v150; // r0
  int v151; // r0
  int v152; // r0
  int v153; // r0
  int v154; // r0
  int v155; // r0
  int v156; // r0
  int v157; // r10
  int v158; // r0
  int v159; // r0
  unsigned int v160; // r3
  bool v161; // cf
  int v162; // r3
  int m; // r4
  int v164; // r0
  int v165; // r5
  int v166; // r0
  int v167; // r0
  int v168; // r0
  int v169; // r0
  int v170; // r0
  char *v171; // [sp+28h] [bp-10B4h]
  char *v172; // [sp+28h] [bp-10B4h]
  char *s1; // [sp+2Ch] [bp-10B0h]
  char *s1a; // [sp+2Ch] [bp-10B0h]
  _DWORD *v175; // [sp+30h] [bp-10ACh]
  int k; // [sp+30h] [bp-10ACh]
  _DWORD *v177; // [sp+38h] [bp-10A4h]
  _DWORD *v178; // [sp+44h] [bp-1098h]
  int v179; // [sp+4Ch] [bp-1090h] BYREF
  int v180; // [sp+50h] [bp-108Ch] BYREF
  size_t nmemb[4]; // [sp+54h] [bp-1088h] BYREF
  _DWORD ptr[4]; // [sp+64h] [bp-1078h] BYREF
  __int16 v183; // [sp+74h] [bp-1068h]
  char v184[32]; // [sp+78h] [bp-1064h] BYREF
  char v185[32]; // [sp+98h] [bp-1044h] BYREF
  char v186[32]; // [sp+B8h] [bp-1024h] BYREF
  _BYTE v187[4100]; // [sp+D8h] [bp-1004h] BYREF

  v179 = 0;
  if ( sub_2B74C("godminer", argv, envp) > 1 )
  {
    v7 = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return v7;
  }
  if ( sub_2B74C("godminer-update", v5, v6) > 0 )
  {
    v7 = 1;
    printf("godminer-update is running now, exit.");
    return v7;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v9 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", &off_12FF04, 0);
    if ( v9 < 0 )
      break;
    parse_arg(v9, (char *)optarg);
  }
  if ( argc > optind )
  {
    ((void (*)(void))V_LOCK)();
    v167 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v167);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_cmdline",
      13,
      615,
      100,
      v187);
    exit(1);
  }
  if ( !total_pools )
  {
    ((void (*)(void))V_LOCK)();
    v52 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v52);
    v7 = 1;
    v53 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1168,
            80,
            v187);
    V_LOCK(v53);
    v54 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v54);
    v55 = "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c";
    v56 = 100;
    v57 = 1169;
    v58 = g_zc;
LABEL_40:
    zlog(v58, v55, 132, "main", 4, v57, v56, v187);
    return v7;
  }
  V_LOCK(v9);
  v10 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1174,
          40,
          v187);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v12);
  v13 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1184,
          40,
          v187);
  check_pool_worker(v13);
  v14 = system_info_init(opt_algo);
  if ( v14 )
  {
    V_LOCK(v14);
    v7 = 1;
    v59 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v59);
    v56 = 100;
    v57 = 1195;
LABEL_43:
    LOWORD(v55) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/god-miner.c";
LABEL_44:
    HIWORD(v55) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    v58 = g_zc;
    goto LABEL_40;
  }
  v15 = ((int (*)(void))dev_ctrl)();
  v16 = (*(int (__fastcall **)(int))(v15 + 8))(opt_algo);
  v7 = v16;
  if ( v16 )
  {
    V_LOCK(v16);
    v7 = 1;
    v60 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v60);
    v56 = 100;
    v57 = 1201;
    goto LABEL_43;
  }
  v17 = check_fan_valiad();
  device_num = query_device_num(v17);
  v179 = device_num;
  if ( device_num <= 0 )
  {
    V_LOCK(device_num);
    v95 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v95);
    v56 = 80;
    v57 = 1211;
    goto LABEL_43;
  }
  if ( opt_version_path )
    version_file = read_version_file();
  else
    version_file = make_fake_version(opt_algo);
  hardware_version = get_hardware_version(version_file);
  V_LOCK(hardware_version);
  v21 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "init_miner_version",
    18,
    695,
    40,
    v187);
  v22 = BYTE2(hardware_version);
  v23 = (unsigned __int8)hardware_version;
  v24 = 0;
  v25 = sprintf(g_miner_version, "%d.%d-%s", v23, v22, "1.0.0");
  V_LOCK(v25);
  getpid();
  v26 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v26);
  v27 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1222,
          60,
          v187);
  V_LOCK(v27);
  v28 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1223,
    60,
    v187);
  while ( v179 > v24 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      v7 = 1;
      V_LOCK(0);
      v64 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v64);
      v65 = 80;
      v66 = 1227;
LABEL_48:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v66,
        v65,
        v187);
      return v7;
    }
    ++v24;
  }
  all_created_runtime = get_all_created_runtime(&v179);
  v30 = &unk_145005;
  v31 = (_DWORD *)all_created_runtime;
  v32 = v179;
  if ( opt_custom_power_mode != 3 )
    v30 = &loc_E7E20 + 1;
  v33 = opt_algo;
  v34 = opt_custom_power_mode == 3;
  for ( i = 0; v32 > i; ++i )
  {
    v36 = v31[i];
    *(_BYTE *)(v36 + 788) = v34;
    if ( v33 == 6 )
      *(_DWORD *)(v36 + 780) = v30;
  }
  for ( j = 0; v179 > j; ++j )
  {
    v38 = ((int (*)(void))dev_ctrl)();
    v39 = (*(int (__fastcall **)(int))(v38 + 40))(j);
    v40 = printf("eeprom add device :%d\n", v39);
    v41 = *(int (__fastcall **)(int))(dev_ctrl(v40) + 40);
    v42 = j;
    v43 = v41(v42);
    v34 = add_eeprom_device(v43);
  }
  s1 = (char *)eeprom_load(v34);
  while ( v179 > v7 )
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v7);
    if ( eeprom_chain_load_state == -1 )
    {
      v61 = V_LOCK(-1);
      v62 = dev_ctrl(v61);
      (*(void (__fastcall **)(int))(v62 + 40))(v7);
      v63 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v63);
      v48 = 1255;
      goto LABEL_37;
    }
    if ( !eeprom_chain_load_state )
    {
      v45 = V_LOCK(0);
      v46 = dev_ctrl(v45);
      (*(void (__fastcall **)(int))(v46 + 40))(v7);
      v47 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v47);
      v48 = 1257;
LABEL_37:
      eeprom_chain_load_state = zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/god-miner.c",
                                  132,
                                  "main",
                                  4,
                                  v48,
                                  100,
                                  v187);
LABEL_38:
      v49 = V_LOCK(eeprom_chain_load_state);
      v50 = dev_ctrl(v49);
      (*(void (__fastcall **)(int))(v50 + 40))(v7);
      v51 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v51);
      v7 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1279,
        60,
        v187);
      return v7;
    }
    if ( eeprom_chain_load_state <= 0 )
      goto LABEL_38;
    ++v7;
  }
  ptr[1] = 0;
  ptr[0] = 0;
  if ( opt_algo == 5 )
    LOWORD(v67) = 3536;
  else
    LOWORD(v67) = 3544;
  HIWORD(v67) = 19;
  g_miner_sn_file_path = v67;
  ptr[2] = 0;
  ptr[3] = 0;
  v183 = 0;
  v68 = (FILE *)fopen64(v67, "r");
  v69 = v68;
  if ( v68 )
  {
    v70 = fread(ptr, 0x11u, 1u, v68);
    if ( v70 )
    {
      V_LOCK(v70);
      v116 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v116);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1303,
        60,
        v187);
    }
    v71 = fclose(v69);
  }
  else
  {
    V_LOCK(0);
    v115 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v115);
    v71 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1297,
            100,
            v187);
  }
  if ( s1 )
  {
    V_LOCK(v71);
    v7 = 1;
    v96 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v96);
    v65 = 100;
    v66 = 1326;
    goto LABEL_48;
  }
  opt_custom_freq = eeprom_get_min_freq(v71);
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK(opt_custom_voltage);
  v72 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v72);
  v73 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1322,
          60,
          v187);
  V_LOCK(v73);
  v74 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v74);
  v75 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1323,
          60,
          v187);
  if ( opt_algo == 6 )
    sub_2C388(v75);
  v76 = 0;
  nmemb[0] = 0;
  v77 = get_all_created_runtime(nmemb);
  v78 = (_DWORD *)is_eeprom_loaded();
  if ( v78 )
  {
    while ( v76 < (int)nmemb[0] )
    {
      v94 = *(_DWORD *)(v77 + 4 * v76++);
      v78 = (_DWORD *)(*(int (__fastcall **)(int, int, int))(v94 + 108))(v94, 1, opt_custom_freq);
    }
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v78 = calloc(nmemb[0], 4u);
    v177 = v78;
    v175 = v78;
    v157 = 0;
    v172 = 0;
    v178 = v31;
    while ( v157 < (int)nmemb[0] )
    {
      v158 = (*(int (**)(void))(*(_DWORD *)(v77 + 4 * v157) + 116))();
      V_LOCK(v158);
      ++v157;
      V_INT((int)v186, "chain");
      v159 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v159);
      v78 = (_DWORD *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/god-miner.c",
                        132,
                        "backend_runtime_custom_parameter_update",
                        39,
                        984,
                        60,
                        v187);
      v160 = *v175++ - 1;
      v161 = v160 >= 2;
      v162 = (int)v172;
      if ( v161 )
        v162 = 1;
      v172 = (char *)v162;
    }
    for ( k = 1; ; k = 2 )
    {
      for ( m = 0; m < (int)nmemb[0]; ++m )
      {
        if ( v172 && v177[m] == k )
        {
          V_LOCK(v78);
          --v172;
          V_INT((int)v185, "chain");
          v164 = logfmt_raw((int)v187, 0x1000u);
          V_UNLOCK(v164);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "backend_runtime_custom_parameter_update",
            39,
            993,
            60,
            v187);
          v78 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(v77 + 4 * m) + 108))(
                            *(_DWORD *)(v77 + 4 * m),
                            1,
                            (int)*(float *)(*(_DWORD *)(v77 + 4 * m) + 768) + 25,
                            0,
                            0);
        }
      }
      if ( k == 2 )
        break;
    }
    v165 = 0;
    while ( v165 < (int)nmemb[0] )
    {
      V_LOCK(v78);
      V_INT((int)v184, "chain");
      ++v165;
      v166 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v166);
      v78 = (_DWORD *)zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/buil"
                        "d/godminer-origin_master/god-miner.c",
                        132,
                        "backend_runtime_custom_parameter_update",
                        39,
                        1001,
                        60,
                        v187);
    }
    v31 = v178;
  }
  for ( n = 0; v179 > n; ++n )
  {
    v80 = *(int (__fastcall **)(int))(dev_ctrl(v78) + 28);
    v81 = n;
    v78 = (_DWORD *)v80(v81);
  }
  V_LOCK(v78);
  v82 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v82);
  v83 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "main",
          4,
          1338,
          60,
          v187);
  v84 = power_off(v83);
  if ( opt_algo == 6 && opt_custom_power_mode == 1 )
  {
    V_LOCK(v84);
    v154 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v154);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1341,
      60,
      v187);
    fan_pwm_set(0);
    while ( 1 )
      sleep(0xAu);
  }
  v85 = sleep(8u);
  v86 = power_init(v85);
  if ( v86 )
  {
    V_LOCK(v86);
    v7 = 1;
    v117 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v117);
    v65 = 100;
    v66 = 1348;
    goto LABEL_48;
  }
  for ( ii = 0; v179 > ii; ++ii )
  {
    (*(void (**)(void))v31[ii])();
    v88 = v31[ii];
    v86 = redirect_nonce_output(*v31, v88);
  }
  for ( jj = 0; v179 > jj; ++jj )
  {
    ((void (*)(void))sub_2B4B0)();
    v90 = (void *(**)(void *))v31[jj];
    v91 = &nmemb[jj];
    v86 = pthread_create(v91, 0, v90[1], v90);
  }
  for ( kk = 0; v179 > kk; ++kk )
  {
    v93 = nmemb[kk];
    v86 = pthread_join(v93, 0);
  }
  check_and_destroy_abnormal_runtime(v86);
  v97 = get_all_created_runtime(&v179);
  v98 = (_DWORD *)v97;
  if ( v179 <= 0 )
  {
    V_LOCK(v97);
    v7 = 1;
    v156 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v156);
    v65 = 100;
    v66 = 1383;
    goto LABEL_48;
  }
  for ( mm = 0; mm < v179; ++mm )
  {
    v100 = v98[mm];
    v101 = redirect_nonce_output(*v98, v100);
  }
  if ( is_check_asic_voltage_enable(v101) )
  {
    if ( opt_algo == 6 )
    {
      set_working_voltage_and_runtime_freq();
    }
    else
    {
      ((void (*)(void))sub_2B4B0)();
      set_working_voltage(1);
    }
  }
  set_baud(3125000);
  v102 = opt_algo;
  if ( opt_algo == 8 )
    v102 = 2;
  v103 = set_frontend_runtime_type(v102);
  for ( nn = 0; total_pools > nn; ++nn )
  {
    v105 = opt_algo != 0;
    if ( opt_algo )
      v105 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v105 )
    {
      v171 = *(char **)(pools + 4 * nn);
      V_LOCK(v103);
      v106 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v106);
      v103 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "main",
               4,
               1414,
               40,
               v187);
      v171[1824] = 1;
    }
  }
  start_dag_gen_engine(v103);
  signal(2, (__sighandler_t)sub_2B504);
  signal(3, (__sighandler_t)sub_2B504);
  signal(15, (__sighandler_t)sub_2B504);
  signal(11, (__sighandler_t)sub_2B504);
  signal(10, (__sighandler_t)sub_2B504);
  v107 = signal(13, (__sighandler_t)1);
  V_LOCK(v107);
  v108 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v108);
  v109 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "main",
           4,
           1435,
           60,
           v187);
  pool_stratum_threads = create_pool_stratum_threads(v109);
  v7 = pool_stratum_threads;
  if ( pool_stratum_threads )
  {
    V_LOCK(pool_stratum_threads);
    v7 = 1;
    v155 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v155);
    v56 = 100;
    v57 = 1438;
    LOWORD(v55) = 1256;
    goto LABEL_44;
  }
  v111 = 1;
  v112 = sleep(1u);
  while ( v111 != 60 && ((unsigned __int8)pools_active ^ 1) & 1 )
  {
    ++v111;
    sleep(1u);
    v112 = sub_12E374(v111, 10);
    if ( !v114 )
      v112 = sub_2B4B0(v112);
  }
  v118 = miner_monitor_init(v112);
  v119 = godminer_register_status_monitor(v118);
  v120 = miner_monitor_start(v119);
  v121 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK(v120);
    v122 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v122);
    v123 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1456,
             100,
             v187);
    V_LOCK(v123);
    v124 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v124);
    v125 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1457,
             100,
             v187);
    V_LOCK(v125);
    v126 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v126);
    v127 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1458,
             100,
             v187);
    while ( total_pools > v121 )
    {
      v128 = *(_DWORD *)(pools + 4 * v121);
      V_LOCK(v127);
      v129 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v129);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1464,
        80,
        v187);
      v127 = *(_DWORD *)(v128 + 16);
      if ( v127 )
      {
        s1a = *(char **)(v128 + 12);
        if ( s1a )
        {
          if ( strstr((const char *)v127, "stats") )
            v127 = 1;
          else
            v127 = strcmp(s1a, "benchmark") == 0;
          *(_BYTE *)(v128 + 1816) = v127;
        }
      }
      ++v121;
    }
    V_LOCK(v127);
    v130 = 0;
    v131 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v131);
    v132 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/god-miner.c",
             132,
             "main",
             4,
             1470,
             100,
             v187);
    while ( v179 > v130 )
    {
      v133 = *(int (__fastcall **)(int))(dev_ctrl(v132) + 28);
      v134 = v130++;
      v132 = v133(v134);
    }
    v135 = 0;
    v180 = 0;
    v136 = get_all_created_runtime(&v180);
    while ( v135 < v180 )
    {
      (*(void (**)(void))(*(_DWORD *)(v136 + 4 * v135) + 8))();
      v137 = *(_DWORD *)(v136 + 4 * v135++);
      (*(void (**)(void))(v137 + 16))();
    }
    v138 = fan_pwm_set(20);
    v139 = green_led_off(v138);
    v140 = red_led_off(v139);
    power_off(v140);
    if ( opt_api_remote && (dword_16DF00 = 1, (v141 = sub_21E80((int)&dword_16DF00, (void *(*)(void *))sub_2C358)) != 0) )
    {
      V_LOCK(v141);
      v151 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v151);
      v142 = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "process_no_servers_could_be_used",
               32,
               938,
               100,
               v187);
    }
    else
    {
      v142 = set_miner_network_working_status(1);
      while ( !pools_active )
        v142 = sleep(1u);
    }
    V_LOCK(v142);
    v152 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v152);
    v65 = 60;
    v66 = 1476;
    goto LABEL_48;
  }
  thr_info = 0;
  v143 = sub_21E80((int)&thr_info, (void *(*)(void *))work_generator_thread);
  if ( v143 )
  {
    V_LOCK(v143);
    v7 = 1;
    v153 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v153);
    v65 = 100;
    v66 = 1485;
    goto LABEL_48;
  }
  dword_16DF00 = 1;
  v144 = sub_21E80((int)&dword_16DF00, (void *(*)(void *))nonce_submit_thread);
  if ( v144 )
  {
    V_LOCK(v144);
    v7 = 1;
    v169 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v169);
    v65 = 100;
    v66 = 1493;
    goto LABEL_48;
  }
  set_miner_start_time();
  dword_16DF30 = 2;
  v145 = sub_21E80((int)&dword_16DF30, (void *(*)(void *))watchpool_thread);
  v7 = v145;
  if ( v145 )
  {
    V_LOCK(v145);
    v7 = 1;
    v168 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v168);
    v65 = 100;
    v66 = 1504;
    goto LABEL_48;
  }
  v146 = sleep(5u);
  if ( opt_api_remote )
  {
    dword_16DF60 = 3;
    v146 = sub_21E80((int)&dword_16DF60, (void *(*)(void *))sub_2C358);
    if ( v146 )
    {
      V_LOCK(v146);
      v7 = 1;
      v170 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v170);
      v65 = 100;
      v66 = 1515;
      goto LABEL_48;
    }
  }
  v147 = http_test_case_init(v146);
  start_http_thread(v147);
  v148 = pthread_join(dword_16DED4, 0);
  V_LOCK(v148);
  v149 = logfmt_raw((int)v187, 0x1000u);
  V_UNLOCK(v149);
  v150 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/god-miner.c",
           132,
           "main",
           4,
           1527,
           80,
           v187);
  print_summary(v150);
  return v7;
}
