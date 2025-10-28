int __fastcall main(int argc, const char **argv, const char **envp)
{
  _BYTE v7[44]; // [sp+18h] [bp-102Ch] BYREF
  int v8; // [sp+1018h] [bp-2Ch] BYREF
  int v9; // [sp+101Ch] [bp-28h]
  int *v10; // [sp+1020h] [bp-24h]
  int v11; // [sp+1024h] [bp-20h]
  int v12; // [sp+1028h] [bp-1Ch]
  int v13; // [sp+102Ch] [bp-18h]
  void *v14; // [sp+1030h] [bp-14h]
  _DWORD *v15; // [sp+1034h] [bp-10h]
  void *all_created_runtime; // [sp+1038h] [bp-Ch]
  int v17; // [sp+103Ch] [bp-8h]

  v13 = 0;
  v12 = 0;
  v11 = 0;
  v17 = 0;
  all_created_runtime = 0;
  if ( sub_3B434() )
  {
    puts("godminer is forbidden to start again as it is already started, will exit immediately.");
    return 1;
  }
  else
  {
    if ( log_init() )
      puts("log init error!");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "release version");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4,
      1817,
      40,
      v7);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "asic mode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4,
      1822,
      40,
      v7);
    sub_39CA8(argc, argv);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "opt_algo %d, %s", opt_algo, off_59755C[opt_algo]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "main",
      4,
      1826,
      60,
      v7);
    update_sweep_result();
    if ( total_pools )
    {
      droa_macro_check();
      if ( opt_version_path )
        read_version_file();
      else
        make_fake_version();
      read_FR_version_file();
      if ( opt_api_remote )
      {
        pools_active = 1;
        start_api_thread();
      }
      v14 = dhash_content_init(opt_algo);
      if ( v14 )
      {
        set_frontend_runtime_type((int)v14, opt_algo);
        check_pool_worker();
        v17 = hardware_init(opt_algo);
        if ( v17 )
        {
          return v17;
        }
        else
        {
          v15 = machine_runtime_init(opt_machine_type, opt_algo);
          if ( v15 )
          {
            sub_3A160();
            check_sn(v15[29]);
            sub_3B464();
            http_test_case_init();
            start_http_thread();
            if ( check_pool_connect() == 35 )
            {
              return 1;
            }
            else
            {
              v17 = ((int (__fastcall *)(_DWORD *))v15[12])(v15);
              if ( v17 )
              {
                return v17;
              }
              else
              {
                all_created_runtime = get_all_created_runtime(&v8);
                if ( !strcmp((const char *)(*(_DWORD *)all_created_runtime + 340), "E9 Pro") )
                {
                  V_LOCK();
                  logfmt_raw(v7, 0x1000u, 0, "E9 Pro start_dag_gen!");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/god-miner.c",
                    139,
                    "main",
                    4,
                    1929,
                    40,
                    v7);
                  start_dag_gen_engine();
                }
                else if ( !strcmp((const char *)(*(_DWORD *)all_created_runtime + 340), "E11") )
                {
                  V_LOCK();
                  logfmt_raw(v7, 0x1000u, 0, "E11 start_dag_gen!");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/god-miner.c",
                    139,
                    "main",
                    4,
                    1932,
                    40,
                    v7);
                  start_dag_gen_engine_2282();
                }
                else if ( !strcmp((const char *)(*(_DWORD *)all_created_runtime + 340), "KAWPOW") )
                {
                  V_LOCK();
                  logfmt_raw(v7, 0x1000u, 0, "BM2440 start_dag_gen!");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/god-miner.c",
                    139,
                    "main",
                    4,
                    1935,
                    40,
                    v7);
                  start_dag_gen_engine_rvn();
                }
                signal(2, (__sighandler_t)sub_39E20);
                signal(3, (__sighandler_t)sub_39E20);
                signal(15, (__sighandler_t)sub_39E20);
                signal(11, (__sighandler_t)sub_39E20);
                signal(10, (__sighandler_t)sub_39E20);
                signal(13, (__sighandler_t)1);
                V_LOCK();
                logfmt_raw(v7, 0x1000u, 0, "always catch signal!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/god-miner.c",
                  139,
                  "main",
                  4,
                  1951,
                  40,
                  v7);
                if ( create_pool_connect() == 35 )
                {
                  return 1;
                }
                else
                {
                  v10 = &thr_info;
                  thr_info = 0;
                  v9 = sub_37C74((int)&thr_info, (void *(*)(void *))work_generator_thread);
                  if ( v9 )
                  {
                    V_LOCK();
                    logfmt_raw(v7, 0x1000u, 0, "work generator thread %d create failed");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/god-miner.c",
                      139,
                      "main",
                      4,
                      1964,
                      100,
                      v7);
                    return 1;
                  }
                  else
                  {
                    v10 = &dword_C26B18;
                    dword_C26B18 = 1;
                    v9 = sub_37C74((int)&dword_C26B18, (void *(*)(void *))nonce_submit_thread);
                    if ( v9 )
                    {
                      V_LOCK();
                      logfmt_raw(v7, 0x1000u, 0, "simulation submit thread create failed");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/god-miner.c",
                        139,
                        "main",
                        4,
                        1972,
                        100,
                        v7);
                      return 1;
                    }
                    else
                    {
                      miner_monitor_init();
                      V_LOCK();
                      logfmt_raw(v7, 0x1000u, 0, "Skip DOAROA LOG");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/god-miner.c",
                        139,
                        "main",
                        4,
                        1986,
                        40,
                        v7);
                      godminer_register_status_monitor();
                      miner_monitor_start();
                      sleep(5u);
                      set_miner_start_time();
                      set_elapsed_time_validity(1);
                      start_watchpool_thread();
                      sleep(5u);
                      ((void (__fastcall *)(_DWORD *))v15[3])(v15);
                      pthread_join(dword_C26AEC, 0);
                      V_LOCK();
                      logfmt_raw(v7, 0x1000u, 0, "workio threads dead, exiting.");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/god-miner.c",
                        139,
                        "main",
                        4,
                        2110,
                        80,
                        v7);
                      print_summary();
                      dhash_content_exit(v14);
                      ((void (*)(void))v15[5])();
                      machine_runtime_exit((void *)dword_5AC380);
                      return 0;
                    }
                  }
                }
              }
            }
          }
          else
          {
            printf("invalid pointer(%s)!\n", "machine_runtime");
            return 3;
          }
        }
      }
      else
      {
        printf("invalid pointer(%s)!\n", "dhash_content");
        return 3;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Need to specify at least one pool server.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "main",
        4,
        1845,
        80,
        v7);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "Pool setup failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "main",
        4,
        1846,
        100,
        v7);
      return 1;
    }
  }
}
