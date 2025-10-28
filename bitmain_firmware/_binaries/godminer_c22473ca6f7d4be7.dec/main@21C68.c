int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // r4
  int v7; // r0
  int v8; // r0
  int hardware_version; // r9
  int v10; // r3
  int v11; // r2
  int v12; // r9
  __pid_t v13; // r0
  int *all_created_runtime; // r0
  int v15; // r9
  int *v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r0
  __int64 (__fastcall *v20)(int); // r3
  int v21; // r0
  __int64 v22; // r0
  int v23; // r10
  int eeprom_chain_load_state; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  const char *v32; // r1
  int v33; // r12
  int v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // lr
  int v40; // r12
  int v41; // r3
  FILE *v42; // r0
  FILE *v43; // r4
  int v44; // r4
  int *v45; // r0
  int v46; // r12
  int k; // r4
  int (__fastcall *v48)(int); // r3
  int v49; // r0
  int v50; // r4
  int v51; // r1
  int m; // r4
  void *(**v53)(void *); // r3
  pthread_t *v54; // r0
  int n; // r4
  pthread_t v56; // r0
  int *v57; // r5
  int ii; // r4
  int v59; // r1
  int v60; // r0
  bool v61; // cc
  int v62; // r4
  int v63; // r9
  int v65; // r1
  int v66; // r9
  int v67; // r5
  const char *v68; // r0
  bool v69; // r0
  int v70; // r5
  int v71; // r0
  int (__fastcall *v72)(int); // r3
  int v73; // r0
  int v74; // r5
  _DWORD *v75; // r6
  int v76; // r0
  int *v77; // r5
  int v78; // r9
  int v79; // r3
  int v80; // t1
  int v81; // r3
  int v82; // r6
  int i; // r9
  int j; // r4
  int v85; // r9
  int v86; // lr
  char *s1; // [sp+2Ch] [bp-10B8h]
  char *s1a; // [sp+2Ch] [bp-10B8h]
  int v89; // [sp+30h] [bp-10B4h]
  int *v90; // [sp+38h] [bp-10ACh]
  int *v91; // [sp+48h] [bp-109Ch]
  int device_num; // [sp+54h] [bp-1090h] BYREF
  int v93; // [sp+58h] [bp-108Ch] BYREF
  size_t nmemb[4]; // [sp+5Ch] [bp-1088h] BYREF
  _DWORD ptr[4]; // [sp+6Ch] [bp-1078h] BYREF
  __int16 v96; // [sp+7Ch] [bp-1068h]
  _DWORD v97[7]; // [sp+80h] [bp-1064h] BYREF
  int v98; // [sp+9Ch] [bp-1048h]
  _DWORD v99[7]; // [sp+A0h] [bp-1044h] BYREF
  int v100; // [sp+BCh] [bp-1028h]
  _DWORD v101[7]; // [sp+C0h] [bp-1024h] BYREF
  int v102; // [sp+DCh] [bp-1008h]
  char v103[4100]; // [sp+E0h] [bp-1004h] BYREF

  device_num = 0;
  if ( (int)sub_2B3F0("godminer") > 1 )
  {
    v5 = 1;
    printf("godminer is forbidden to start again as it is already started, will exit immediately.");
    return v5;
  }
  if ( (int)sub_2B3F0("godminer-update") > 0 )
  {
    v5 = 1;
    printf("godminer-update is running now, exit.");
    return v5;
  }
  if ( log_init() )
    puts("log init error!");
  while ( 1 )
  {
    v7 = EVPX_EncryptInit_ex(argc, (int)argv, "a:c:hp:Po:u:v:F", (const char **)&off_12E8F4, 0);
    if ( v7 < 0 )
      break;
    parse_arg(v7, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK();
    logfmt_raw(v103, 0x1000u, 0, "%s: unsupported non-option argument -- '%s'", *argv, argv[optind]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "parse_cmdline",
      13,
      604,
      100,
      v103);
    exit(1);
  }
  if ( !total_pools )
  {
    V_LOCK();
    logfmt_raw(v103, 0x1000u, 0, "Need to specify at least one pool server.");
    V_UNLOCK();
    v5 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1124,
      80,
      v103);
    V_LOCK();
    logfmt_raw(v103, 0x1000u, 0, "Pool setup failed!");
    V_UNLOCK();
    v32 = "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c";
    v33 = 100;
    v34 = 1125;
    v35 = g_zc;
LABEL_34:
    zlog(v35, v32, 132, "main", 4, v34, v33, v103);
    return v5;
  }
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "release version");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1130,
    40,
    v103);
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "asic mode");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1140,
    40,
    v103);
  check_pool_worker();
  if ( system_info_init(opt_algo) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "system info init failed!");
    V_UNLOCK();
    v33 = 100;
    v34 = 1151;
LABEL_37:
    LOWORD(v32) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/god-miner.c";
LABEL_38:
    HIWORD(v32) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/god-miner.c" >> 16;
    v35 = g_zc;
    goto LABEL_34;
  }
  v8 = dev_ctrl(0);
  v5 = (*(int (__fastcall **)(int))(v8 + 8))(opt_algo);
  if ( v5 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "dev init failed!");
    V_UNLOCK();
    v33 = 100;
    v34 = 1157;
    goto LABEL_37;
  }
  check_fan_valiad();
  device_num = query_device_num();
  if ( device_num <= 0 )
  {
    V_LOCK();
    logfmt_raw(v103, 0x1000u, 0, "query_device_num error code %d and then exit", device_num);
    V_UNLOCK();
    v33 = 80;
    v34 = 1167;
    goto LABEL_37;
  }
  if ( opt_version_path )
    read_version_file();
  else
    make_fake_version();
  hardware_version = get_hardware_version();
  V_LOCK();
  logfmt_raw(
    v103,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "1.0.0_release_dirty_master_4c4db04fc8fb8ce1a21da1db2301f261664943c2_Jun 17 2022 13:30:52");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "init_miner_version",
    18,
    684,
    40,
    v103);
  v10 = BYTE2(hardware_version);
  v11 = (unsigned __int8)hardware_version;
  v12 = 0;
  sprintf(g_miner_version, "%d.%d-%s", v11, v10, "1.0.0");
  V_LOCK();
  v13 = getpid();
  logfmt_raw(v103, 0x1000u, 0, "miner thread with %d backend runtime created pid %d", device_num, v13);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1178,
    60,
    v103);
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_12E898[opt_algo]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1179,
    60,
    v103);
  while ( device_num > v12 )
  {
    if ( !runtime_ctrl(opt_algo) )
    {
      v5 = 1;
      V_LOCK();
      logfmt_raw(v103, 0x1000u, 0, "runtime ctrl error!");
      V_UNLOCK();
      v39 = 80;
      v40 = 1183;
LABEL_42:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v40,
        v39,
        v103);
      return v5;
    }
    ++v12;
  }
  all_created_runtime = (int *)get_all_created_runtime(&device_num);
  v15 = 0;
  v16 = all_created_runtime;
  while ( device_num > v15 )
  {
    v17 = dev_ctrl(all_created_runtime);
    v18 = (*(int (__fastcall **)(int))(v17 + 40))(v15);
    v19 = printf("eeprom add device :%d\n", v18);
    v20 = *(__int64 (__fastcall **)(int))(dev_ctrl(v19) + 40);
    v21 = v15++;
    v22 = v20(v21);
    all_created_runtime = (int *)add_eeprom_device(v22, SHIDWORD(v22));
  }
  v23 = eeprom_load();
  while ( device_num > v5 )
  {
    eeprom_chain_load_state = api_get_eeprom_chain_load_state(v5);
    if ( eeprom_chain_load_state == -1 )
    {
      v36 = V_LOCK();
      v37 = dev_ctrl(v36);
      v38 = (*(int (__fastcall **)(int))(v37 + 40))(v5);
      logfmt_raw(v103, 0x1000u, 0, "g_eeprom_data is not ready, chain = %d", v38);
      V_UNLOCK();
      v28 = 1206;
      goto LABEL_31;
    }
    if ( !eeprom_chain_load_state )
    {
      v25 = V_LOCK();
      v26 = dev_ctrl(v25);
      v27 = (*(int (__fastcall **)(int))(v26 + 40))(v5);
      logfmt_raw(v103, 0x1000u, 0, "Chain%d load EEPROM error.", v27);
      V_UNLOCK();
      v28 = 1208;
LABEL_31:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        v28,
        100,
        v103);
LABEL_32:
      v29 = V_LOCK();
      v30 = dev_ctrl(v29);
      v31 = (*(int (__fastcall **)(int))(v30 + 40))(v5);
      logfmt_raw(v103, 0x1000u, 0, "Error! Chain [%d] EEPROM data corrupted", v31);
      V_UNLOCK();
      v5 = -1;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1230,
        60,
        v103);
      return v5;
    }
    if ( eeprom_chain_load_state <= 0 )
      goto LABEL_32;
    ++v5;
  }
  ptr[1] = 0;
  ptr[0] = 0;
  if ( opt_algo == 5 )
    LOWORD(v41) = -2296;
  else
    LOWORD(v41) = -2288;
  HIWORD(v41) = 18;
  g_miner_sn_file_path = v41;
  ptr[2] = 0;
  ptr[3] = 0;
  v96 = 0;
  v42 = (FILE *)fopen64(v41, "r");
  v43 = v42;
  if ( v42 )
  {
    if ( fread(ptr, 0x11u, 1u, v42) )
    {
      V_LOCK();
      logfmt_raw(v103, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1254,
        60,
        v103);
    }
    fclose(v43);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v103, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1248,
      100,
      v103);
  }
  if ( v23 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "Eeprom load error!");
    V_UNLOCK();
    v39 = 100;
    v40 = 1277;
    goto LABEL_42;
  }
  opt_custom_freq = eeprom_get_min_freq();
  opt_custom_voltage = eeprom_get_max_voltage();
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "MAX voltage: %d", opt_custom_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1273,
    60,
    v103);
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "MIN freq: %d", opt_custom_freq);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1274,
    60,
    v103);
  if ( opt_algo == 6 )
    sub_2C01C();
  v44 = 0;
  nmemb[0] = 0;
  s1 = (char *)get_all_created_runtime(nmemb);
  v45 = (int *)is_eeprom_loaded();
  if ( v45 )
  {
    while ( v44 < (int)nmemb[0] )
    {
      v46 = *(_DWORD *)&s1[4 * v44++];
      v45 = (int *)(*(int (__fastcall **)(int, int, int))(v46 + 108))(v46, 1, opt_custom_freq);
    }
  }
  if ( !opt_custom_freq && opt_algo == 2 )
  {
    v45 = (int *)calloc(nmemb[0], 4u);
    v91 = v16;
    v77 = v45;
    v90 = v45;
    v78 = 0;
    v89 = 0;
    while ( v78 < (int)nmemb[0] )
    {
      (*(void (**)(void))(*(_DWORD *)&s1[4 * v78] + 116))();
      V_LOCK();
      v79 = *(_DWORD *)&s1[4 * v78++];
      V_INT((int)v101, "chain", *(int *)(v79 + 140));
      logfmt_raw(
        v103,
        0x1000u,
        0,
        v102,
        v101[0],
        v101[1],
        v101[2],
        v101[3],
        v101[4],
        v101[5],
        v101[6],
        v102,
        "level %d",
        *v77);
      V_UNLOCK();
      v45 = (int *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/god-miner.c",
                     132,
                     "backend_runtime_custom_parameter_update",
                     39,
                     973,
                     60,
                     v103);
      v80 = *v77++;
      v81 = v89;
      if ( (unsigned int)(v80 - 1) >= 2 )
        v81 = 1;
      v89 = v81;
    }
    v82 = v89;
    for ( i = 1; ; i = 2 )
    {
      for ( j = 0; j < (int)nmemb[0]; ++j )
      {
        if ( v82 && v90[j] == i )
        {
          V_LOCK();
          --v82;
          V_INT((int)v99, "chain", *(int *)(*(_DWORD *)&s1[4 * j] + 140));
          logfmt_raw(
            v103,
            0x1000u,
            0,
            v100,
            v99[0],
            v99[1],
            v99[2],
            v99[3],
            v99[4],
            v99[5],
            v99[6],
            v100,
            "adjust freq to %d",
            (int)*(float *)(*(_DWORD *)&s1[4 * j] + 760) + 25);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "backend_runtime_custom_parameter_update",
            39,
            982,
            60,
            v103);
          v45 = (int *)(*(int (__fastcall **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)&s1[4 * j] + 108))(
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
    v85 = 0;
    while ( v85 < (int)nmemb[0] )
    {
      V_LOCK();
      V_INT((int)v97, "chain", *(int *)(*(_DWORD *)&s1[4 * v85] + 140));
      v86 = *(_DWORD *)&s1[4 * v85++];
      logfmt_raw(
        v103,
        0x1000u,
        0,
        v98,
        v97[0],
        v97[1],
        v97[2],
        v97[3],
        v97[4],
        v97[5],
        v97[6],
        v98,
        "freq %d",
        (int)*(float *)(v86 + 760));
      V_UNLOCK();
      v45 = (int *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/g"
                     "odminer-origin_master/god-miner.c",
                     132,
                     "backend_runtime_custom_parameter_update",
                     39,
                     990,
                     60,
                     v103);
    }
    v23 = 0;
    v16 = v91;
  }
  for ( k = 0; device_num > k; ++k )
  {
    v48 = *(int (__fastcall **)(int))(dev_ctrl(v45) + 28);
    v49 = k;
    v45 = (int *)v48(v49);
  }
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "all runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1289,
    60,
    v103);
  power_off();
  sleep(8u);
  v50 = power_init();
  if ( v50 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "power init error!");
    V_UNLOCK();
    v33 = 100;
    v34 = 1293;
    goto LABEL_37;
  }
  while ( device_num > v50 )
  {
    (*(void (**)(void))v16[v50])();
    v51 = v16[v50++];
    redirect_nonce_output(*v16, v51);
  }
  for ( m = 0; device_num > m; ++m )
  {
    sub_2B154();
    v53 = (void *(**)(void *))v16[m];
    v54 = &nmemb[m];
    pthread_create(v54, 0, v53[1], v53);
  }
  for ( n = 0; device_num > n; ++n )
  {
    v56 = nmemb[n];
    pthread_join(v56, 0);
  }
  check_and_destroy_abnormal_runtime();
  v57 = (int *)get_all_created_runtime(&device_num);
  if ( device_num <= 0 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
    V_UNLOCK();
    v39 = 100;
    v40 = 1328;
    goto LABEL_42;
  }
  for ( ii = 0; ii < device_num; ++ii )
  {
    v59 = v57[ii];
    redirect_nonce_output(*v57, v59);
  }
  if ( is_check_asic_voltage_enable() )
  {
    if ( opt_algo == 6 )
    {
      set_working_voltage_and_runtime_freq();
    }
    else
    {
      sub_2B154();
      set_working_voltage(1);
    }
  }
  set_baud(3125000);
  start_dag_gen_engine();
  v60 = opt_algo;
  if ( opt_algo == 8 )
    v60 = 2;
  set_frontend_runtime_type(v60);
  while ( total_pools > v23 )
  {
    v61 = opt_algo != 0;
    if ( opt_algo )
      v61 = (unsigned int)(opt_algo - 4) > 1;
    if ( !v61 )
    {
      v62 = *(_DWORD *)(pools + 4 * v23);
      V_LOCK();
      logfmt_raw(v103, 0x1000u, 0, "Using JSON-RPC 2.0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1362,
        40,
        v103);
      *(_BYTE *)(v62 + 1816) = 1;
    }
    ++v23;
  }
  signal(2, (__sighandler_t)sub_2B1A8);
  signal(3, (__sighandler_t)sub_2B1A8);
  signal(15, (__sighandler_t)sub_2B1A8);
  signal(11, (__sighandler_t)sub_2B1A8);
  signal(10, (__sighandler_t)sub_2B1A8);
  signal(13, (__sighandler_t)1);
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "signal");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1379,
    60,
    v103);
  if ( create_pool_stratum_threads() )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    v33 = 100;
    v34 = 1382;
    LOWORD(v32) = -4392;
    goto LABEL_38;
  }
  v63 = 1;
  sleep(1u);
  while ( v63 != 60 && ((unsigned __int8)pools_active ^ 1) & 1 )
  {
    ++v63;
    sleep(1u);
    sub_12CD64(v63, 0xAu);
    if ( !v65 )
      sub_2B154();
  }
  miner_monitor_init();
  godminer_register_status_monitor();
  miner_monitor_start();
  v66 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK();
    logfmt_raw(v103, 0x1000u, v66, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1400,
      100,
      v103);
    V_LOCK();
    logfmt_raw(v103, 0x1000u, v66, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1401,
      100,
      v103);
    V_LOCK();
    logfmt_raw(
      v103,
      0x1000u,
      v66,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "main",
      4,
      1402,
      100,
      v103);
    while ( total_pools > v66 )
    {
      v67 = *(_DWORD *)(pools + 4 * v66);
      V_LOCK();
      logfmt_raw(
        v103,
        0x1000u,
        0,
        "Pool: %d  URL: %s\tUser: %s  Password: %s",
        *(_DWORD *)v67,
        *(_DWORD *)(v67 + 8),
        *(_DWORD *)(v67 + 12),
        *(_DWORD *)(v67 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "main",
        4,
        1408,
        80,
        v103);
      v68 = *(const char **)(v67 + 16);
      if ( v68 )
      {
        s1a = *(char **)(v67 + 12);
        if ( s1a )
        {
          if ( strstr(v68, "stats") )
            v69 = 1;
          else
            v69 = strcmp(s1a, "benchmark") == 0;
          *(_BYTE *)(v67 + 1808) = v69;
        }
      }
      ++v66;
    }
    v5 = 0;
    V_LOCK();
    v70 = 0;
    logfmt_raw(v103, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    v71 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "main",
            4,
            1414,
            100,
            v103);
    while ( device_num > v70 )
    {
      v72 = *(int (__fastcall **)(int))(dev_ctrl(v71) + 28);
      v73 = v70++;
      v71 = v72(v73);
    }
    v74 = 0;
    v93 = 0;
    v75 = get_all_created_runtime(&v93);
    while ( v74 < v93 )
    {
      (*(void (**)(void))(v75[v74] + 8))();
      v76 = v75[v74++];
      (*(void (**)(void))(v76 + 16))();
    }
    fan_pwm_set(0x14u);
    green_led_off();
    red_led_off();
    power_off();
    if ( opt_api_remote && (dword_16CEE0 = 1, sub_21C28((int)&dword_16CEE0, (void *(*)(void *))sub_2BFEC)) )
    {
      V_LOCK();
      logfmt_raw(v103, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "process_no_servers_could_be_used",
        32,
        927,
        100,
        v103);
    }
    else
    {
      set_miner_network_working_status(1);
      while ( !pools_active )
        sleep(1u);
    }
    V_LOCK();
    logfmt_raw(v103, 0x1000u, 0, "Pool is activing, exiting and restart.");
    V_UNLOCK();
    v39 = 60;
    v40 = 1420;
    goto LABEL_42;
  }
  thr_info = 0;
  if ( sub_21C28((int)&thr_info, (void *(*)(void *))work_generator_thread) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "work generator thread %d create failed");
    V_UNLOCK();
    v39 = 100;
    v40 = 1429;
    goto LABEL_42;
  }
  dword_16CEE0 = 1;
  if ( sub_21C28((int)&dword_16CEE0, (void *(*)(void *))nonce_submit_thread) )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "simulation submit thread create failed");
    V_UNLOCK();
    v39 = 100;
    v40 = 1437;
    goto LABEL_42;
  }
  set_miner_start_time();
  dword_16CF10 = 2;
  v5 = sub_21C28((int)&dword_16CF10, (void *(*)(void *))watchpool_thread);
  if ( v5 )
  {
    V_LOCK();
    v5 = 1;
    logfmt_raw(v103, 0x1000u, 0, "watchpool thread create failed");
    V_UNLOCK();
    v39 = 100;
    v40 = 1448;
    goto LABEL_42;
  }
  sleep(5u);
  if ( opt_api_remote )
  {
    dword_16CF40 = 3;
    if ( sub_21C28((int)&dword_16CF40, (void *(*)(void *))sub_2BFEC) )
    {
      V_LOCK();
      v5 = 1;
      logfmt_raw(v103, 0x1000u, 0, "api thread create failed");
      V_UNLOCK();
      v39 = 100;
      v40 = 1459;
      goto LABEL_42;
    }
  }
  http_test_case_init();
  start_http_thread();
  pthread_join(dword_16CEB4, 0);
  V_LOCK();
  logfmt_raw(v103, 0x1000u, 0, "workio threads dead, exiting.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "main",
    4,
    1471,
    80,
    v103);
  print_summary();
  return v5;
}
