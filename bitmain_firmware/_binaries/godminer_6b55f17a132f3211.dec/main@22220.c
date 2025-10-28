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
  int factory_pools; // r0
  int v22; // r0
  int version_file; // r0
  int v24; // r0
  int v25; // r8
  int v26; // r0
  int hardware_version; // r9
  int v28; // r0
  int all_created_runtime; // r10
  int v30; // r12
  __sighandler_t v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int started; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r3
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // [sp+10h] [bp-106Ch]
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
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "main",
          4,
          1564,
          40,
          s);
  V_LOCK(v15);
  v16 = logfmt_raw((int)s, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/god-miner.c",
    138,
    "main",
    4,
    1569,
    40,
    s);
  while ( 1 )
  {
    v17 = getopt_long(argc, argv, "a:c:hp:Po:u:v:F", &off_123A54, 0);
    if ( v17 < 0 )
      break;
    parse_arg(v17, (char *)optarg);
  }
  if ( argc > optind )
  {
    V_LOCK(v17);
    v55 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v55);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/god-miner.c",
      138,
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
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "main",
          4,
          1573,
          60,
          s);
  factory_pools = load_factory_pools(v20);
  if ( !total_pools )
  {
    V_LOCK(factory_pools);
    v12 = 1;
    v47 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v47);
    v48 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/god-miner.c",
            138,
            "main",
            4,
            1582,
            80,
            s);
    V_LOCK(v48);
    v49 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v49);
    v50 = 1583;
    goto LABEL_42;
  }
  v22 = droa_macro_check(factory_pools);
  if ( opt_version_path )
    version_file = read_version_file(v22);
  else
    version_file = make_fake_version(opt_algo);
  if ( opt_api_remote )
  {
    pools_active = 1;
    start_api_thread(version_file);
  }
  v24 = dhash_content_init(opt_algo);
  v25 = v24;
  if ( !v24 )
  {
    printf("invalid pointer(%s)!\n", "dhash_content");
    return 3;
  }
  v26 = set_frontend_runtime_type(v24, opt_algo);
  check_pool_worker(v26);
  v12 = hardware_init(opt_algo);
  if ( !v12 )
  {
    if ( pre_check_pool_connect() == 35 )
      return 1;
    v56 = machine_runtime_init(opt_machine_type, opt_algo);
    if ( !v56 )
    {
      printf("invalid pointer(%s)!\n", "machine_runtime");
      return 3;
    }
    hardware_version = get_hardware_version();
    V_LOCK(hardware_version);
    v28 = logfmt_raw((int)s, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/god-miner.c",
      138,
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
        v30 = *(_DWORD *)(all_created_runtime + 4 * v12++);
        (*(void (__fastcall **)(int, int, int))(v30 + 160))(v30, 1, opt_custom_freq);
      }
    }
    check_sn(*(_DWORD *)(v56 + 104));
    v12 = (*(int (__fastcall **)(int))(v56 + 36))(v56);
    if ( !v12 )
    {
      if ( opt_algo != 9
        || (V_LOCK(0),
            v52 = logfmt_raw((int)s, 0x1000u),
            V_UNLOCK(v52),
            v53 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/go"
                    "dminer-origin_godminer-new/god-miner.c",
                    138,
                    "main",
                    4,
                    1655,
                    40,
                    s),
            start_dag_gen_engine_rvn(v53),
            opt_algo != 9) )
      {
        start_dag_gen_engine();
      }
      signal(2, (__sighandler_t)sub_2BC4C);
      v18 = 4u;
      signal(3, (__sighandler_t)sub_2BC4C);
      signal(15, (__sighandler_t)sub_2BC4C);
      signal(11, (__sighandler_t)sub_2BC4C);
      signal(10, (__sighandler_t)sub_2BC4C);
      v31 = signal(13, (__sighandler_t)1);
      V_LOCK(v31);
      v32 = logfmt_raw((int)s, 0x1000u);
      V_UNLOCK(v32);
      v33 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/god-miner.c",
              138,
              "main",
              4u,
              1676,
              40,
              s);
      if ( check_pool_connect(v33) != 35 )
      {
        thr_info = 0;
        pthread_attr_init(&stru_1785B0);
        v57 = pthread_create(dword_1785AC, &stru_1785B0, (void *(*)(void *))work_generator_thread, &thr_info);
        v34 = pthread_attr_destroy(&stru_1785B0);
        if ( v57 )
        {
          V_LOCK(v34);
          v12 = 1;
          v51 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v51);
          v50 = 1686;
        }
        else
        {
          dword_1785D8 = 1;
          pthread_attr_init((pthread_attr_t *)&dword_1785DC[1]);
          v12 = pthread_create(
                  dword_1785DC,
                  (const pthread_attr_t *)&dword_1785DC[1],
                  (void *(*)(void *))nonce_submit_thread,
                  &dword_1785D8);
          v35 = pthread_attr_destroy((pthread_attr_t *)&dword_1785DC[1]);
          if ( !v12 )
          {
            v36 = miner_monitor_init(v35);
            V_LOCK(v36);
            v37 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v37);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/god-miner.c",
              138,
              "main",
              4u,
              1707,
              40,
              s);
            add_chip_status_observer(godminer_chip_status_monitor);
            v38 = add_fanspeed_observer(godminer_fan_monitor);
            miner_monitor_start(v38);
            sleep(5u);
            v39 = set_elapsed_time_validity(1);
            started = set_miner_start_time(v39);
            start_watchpool_thread(started);
            sleep(5u);
            v41 = (*(int (__fastcall **)(int))(v56 + 12))(v56);
            v42 = http_test_case_init(v41);
            start_http_thread(v42);
            v43 = pthread_join(dword_1785AC[0], 0);
            V_LOCK(v43);
            v44 = logfmt_raw((int)s, 0x1000u);
            V_UNLOCK(v44);
            v45 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/go"
                    "dminer-origin_godminer-new/god-miner.c",
                    138,
                    "main",
                    4u,
                    1747,
                    80,
                    s);
            print_summary(v45);
            v46 = dhash_content_exit(v25);
            (*(void (__fastcall **)(int))(v56 + 16))(v46);
            machine_runtime_exit(0);
            return v12;
          }
          V_LOCK(v35);
          v12 = 1;
          v54 = logfmt_raw((int)s, 0x1000u);
          V_UNLOCK(v54);
          v50 = 1694;
        }
LABEL_42:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/god-miner.c",
          138,
          "main",
          v18,
          v50,
          100,
          s);
        return v12;
      }
      return 1;
    }
  }
  return v12;
}
