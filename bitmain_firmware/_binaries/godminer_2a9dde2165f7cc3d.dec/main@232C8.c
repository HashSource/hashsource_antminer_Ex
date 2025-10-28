int __fastcall main(int argc, const char **argv, const char **envp)
{
  FILE *v5; // r7
  size_t v6; // r8
  int v7; // r11
  char *v8; // r9
  size_t i; // r7
  const unsigned __int16 **v10; // r0
  int v11; // t1
  int v12; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r7
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int version_file; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r9
  int hardware_version; // r8
  int v27; // r0
  int all_created_runtime; // r10
  int v29; // r0
  int v30; // r0
  int started; // r0
  __sighandler_t v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r8
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  unsigned int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r12
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r3
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // [sp+14h] [bp-1068h]
  char dest[32]; // [sp+18h] [bp-1064h] BYREF
  char command[64]; // [sp+38h] [bp-1044h] BYREF
  char s[4100]; // [sp+78h] [bp-1004h] BYREF

  memset(s, 0, 0x100u);
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", "godminer");
  v5 = popen(command, "r");
  if ( v5 )
  {
    while ( fgets(s, 256, v5) )
      ;
    v6 = 0;
    pclose(v5);
    v7 = 0;
    v8 = s;
    for ( i = 1; strlen(s) >= i; ++i )
    {
      memset(dest, 0, sizeof(dest));
      v10 = _ctype_b_loc();
      v11 = (unsigned __int8)*v8++;
      if ( ((*v10)[v11] & 0x2000) != 0 )
      {
        strncpy(dest, &s[v6], i - v6 - 1);
        v6 = i;
        if ( strtol(dest, 0, 10) > 0 )
          ++v7;
      }
    }
    if ( v7 )
    {
      printf("%d instance of %s is already Running on this machine", v7, "godminer");
      if ( v7 != 1 )
      {
        v12 = 1;
        printf("godminer is forbidden to start again as it is already started, will exit immediately.");
        return v12;
      }
    }
  }
  if ( log_init() )
    puts("log init error!");
  ((void (*)(void))V_LOCK)();
  v14 = logfmt_raw((int)s, 0x1000u);
  V_UNLOCK(v14);
  v15 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "main",
          4,
          1579,
          40,
          s);
  V_LOCK(v15);
  v16 = logfmt_raw((int)s, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/god-miner.c",
    142,
    "main",
    4,
    1584,
    40,
    s);
  while ( 1 )
  {
    v17 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", &off_130050, 0);
    if ( v17 < 0 )
      break;
    parse_arg(v17, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK(v17);
    v56 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v56);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/god-miner.c",
      142,
      "parse_cmdline",
      13,
      555,
      100,
      s);
    exit(1);
  }
  v18 = 4;
  V_LOCK(v17);
  v19 = logfmt_raw((int)s, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "main",
          4,
          1588,
          60,
          s);
  if ( !total_pools )
  {
    V_LOCK(v20);
    v12 = 1;
    v48 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v48);
    v49 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/god-miner.c",
            142,
            "main",
            4,
            1604,
            80,
            s);
    V_LOCK(v49);
    v50 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v50);
    v51 = 1605;
    goto LABEL_42;
  }
  v21 = droa_macro_check(v20);
  if ( opt_version_path )
    version_file = read_version_file(v21);
  else
    version_file = make_fake_version(opt_algo);
  if ( opt_api_remote )
  {
    pools_active = 1;
    start_api_thread(version_file);
  }
  v23 = dhash_content_init(opt_algo);
  v57 = v23;
  if ( !v23 )
  {
    printf(aInvalidPointer, "dhash_content");
    return 3;
  }
  v24 = set_frontend_runtime_type(v23, opt_algo);
  check_pool_worker(v24);
  v12 = hardware_init(opt_algo);
  if ( !v12 )
  {
    v25 = machine_runtime_init(opt_machine_type, opt_algo);
    if ( !v25 )
    {
      printf(aInvalidPointer, "machine_runtime");
      return 3;
    }
    hardware_version = get_hardware_version();
    V_LOCK(hardware_version);
    v27 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/god-miner.c",
      142,
      "init_miner_version",
      18,
      632,
      40,
      s);
    sprintf(g_miner_version, "%d.%d-%s", (unsigned __int8)hardware_version, BYTE2(hardware_version), "2.0.0");
    *(_DWORD *)s = 0;
    all_created_runtime = get_all_created_runtime(s);
    if ( is_eeprom_loaded() )
    {
      while ( v12 < *(int *)s )
      {
        v47 = *(_DWORD *)(all_created_runtime + 4 * v12++);
        (*(void (__fastcall **)(int, int, int))(v47 + 160))(v47, 1, opt_custom_freq);
      }
    }
    v29 = check_sn(*(_DWORD *)(v25 + 108));
    v30 = http_test_case_init(v29);
    started = start_http_thread(v30);
    if ( check_pool_connect(started) == 35 )
      return 1;
    v12 = (*(int (__fastcall **)(int))(v25 + 40))(v25);
    if ( v12 )
      return v12;
    if ( opt_algo == 10 )
    {
      V_LOCK(0);
      v53 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v53);
      v54 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/god-miner.c",
              142,
              "main",
              4,
              1682,
              40,
              s);
      start_dag_gen_engine_rvn(v54);
    }
    start_dag_gen_engine();
    signal(2, (__sighandler_t)sub_2CD90);
    v18 = 4u;
    signal(3, (__sighandler_t)sub_2CD90);
    signal(15, (__sighandler_t)sub_2CD90);
    signal(11, (__sighandler_t)sub_2CD90);
    signal(10, (__sighandler_t)sub_2CD90);
    v32 = signal(13, (__sighandler_t)1);
    V_LOCK(v32);
    v33 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/god-miner.c",
            142,
            "main",
            4u,
            1709,
            40,
            s);
    if ( create_pool_connect(v34) == 35 )
      return 1;
    thr_info = 0;
    pthread_attr_init(&stru_18EA28);
    v35 = pthread_create(dword_18EA24, &stru_18EA28, (void *(*)(void *))work_generator_thread, &thr_info);
    v36 = pthread_attr_destroy(&stru_18EA28);
    if ( v35 )
    {
      V_LOCK(v36);
      v12 = 1;
      v52 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v52);
      v51 = 1719;
    }
    else
    {
      dword_18EA50 = 1;
      pthread_attr_init((pthread_attr_t *)&algn_18EA54[4]);
      v12 = pthread_create(
              (pthread_t *)algn_18EA54,
              (const pthread_attr_t *)&algn_18EA54[4],
              (void *(*)(void *))nonce_submit_thread,
              &dword_18EA50);
      v37 = pthread_attr_destroy((pthread_attr_t *)&algn_18EA54[4]);
      if ( !v12 )
      {
        v38 = miner_monitor_init(v37);
        V_LOCK(v38);
        v39 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v39);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "main",
          4u,
          1740,
          40,
          s);
        add_chip_status_observer(godminer_chip_status_monitor);
        v40 = add_fanspeed_observer(godminer_fan_monitor);
        miner_monitor_start(v40);
        v41 = sleep(5u);
        set_miner_start_time(v41);
        v42 = set_elapsed_time_validity(1);
        start_watchpool_thread(v42);
        sleep(5u);
        (*(void (__fastcall **)(int))(v25 + 12))(v25);
        v43 = pthread_join(dword_18EA24[0], 0);
        V_LOCK(v43);
        v44 = logfmt_raw((int)s, 0x1000u);
        V_UNLOCK(v44);
        v45 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/god-miner.c",
                142,
                "main",
                4u,
                1783,
                80,
                s);
        print_summary(v45);
        v46 = dhash_content_exit(v57);
        (*(void (__fastcall **)(int))(v25 + 20))(v46);
        machine_runtime_exit(0);
        return v12;
      }
      V_LOCK(v37);
      v12 = 1;
      v55 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v55);
      v51 = 1727;
    }
LABEL_42:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/god-miner.c",
      142,
      "main",
      v18,
      v51,
      100,
      s);
  }
  return v12;
}
