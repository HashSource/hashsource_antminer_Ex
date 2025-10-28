void __fastcall __noreturn dag_gen_thread_func_2282(int a1)
{
  int v1; // [sp+4h] [bp-1108h]
  char v2; // [sp+18h] [bp-10F4h] BYREF
  int v3; // [sp+1Ch] [bp-10F0h]
  _DWORD v4[8]; // [sp+24h] [bp-10E8h] BYREF
  _QWORD v5[6]; // [sp+44h] [bp-10C8h] BYREF
  _BYTE v6[24]; // [sp+74h] [bp-1098h] BYREF
  char s[20]; // [sp+1074h] [bp-98h] BYREF
  size_t nmemb; // [sp+1088h] [bp-84h] BYREF
  int v9; // [sp+108Ch] [bp-80h]
  void *v10; // [sp+1090h] [bp-7Ch]
  void *ptr; // [sp+1094h] [bp-78h]
  __int64 dag_size_2282; // [sp+1098h] [bp-74h]
  __int64 cache_size_2282; // [sp+10A0h] [bp-6Ch]
  int epoch_number_eth_2282; // [sp+10ACh] [bp-60h]
  signed int n; // [sp+10B0h] [bp-5Ch]
  signed int kk; // [sp+10B4h] [bp-58h]
  int jj; // [sp+10B8h] [bp-54h]
  signed int ii; // [sp+10BCh] [bp-50h]
  signed int mm; // [sp+10C0h] [bp-4Ch]
  signed int nn; // [sp+10C4h] [bp-48h]
  signed int i1; // [sp+10C8h] [bp-44h]
  size_t v22; // [sp+10CCh] [bp-40h]
  _DWORD *all_created_runtime; // [sp+10D0h] [bp-3Ch]
  char *v24; // [sp+10D4h] [bp-38h]
  FILE *stream; // [sp+10D8h] [bp-34h]
  char *filename; // [sp+10DCh] [bp-30h]
  signed int j; // [sp+10E0h] [bp-2Ch]
  int eeprom_chip_bin; // [sp+10E4h] [bp-28h]
  char *s2; // [sp+10E8h] [bp-24h]
  int i; // [sp+10ECh] [bp-20h]
  size_t v31; // [sp+10F0h] [bp-1Ch]
  char *v32; // [sp+10F4h] [bp-18h]
  signed int k; // [sp+10F8h] [bp-14h]
  signed int m; // [sp+10FCh] [bp-10h]

  v3 = a1;
  nmemb = 0;
  all_created_runtime = get_all_created_runtime(&nmemb);
  v22 = nmemb - 1;
  v24 = &v2;
  if ( case_select == 6 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "ETC_bypass mode, skip dram_init");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
      174,
      "dag_gen_thread_func_2282",
      24,
      214,
      40,
      v6);
  }
  else
  {
    filename = "/nvdata/ltc_sn";
    stream = fopen("/nvdata/ltc_sn", "r");
    if ( !stream )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "Error opening file for ltc sn reading...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        221,
        40,
        v6);
    }
    for ( i = 0; i < (int)nmemb; ++i )
    {
      eeprom_chip_bin = api_get_eeprom_chip_bin(i);
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "Chain [%d] BIN%d", i, eeprom_chip_bin);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        227,
        20,
        v6);
      s2 = (char *)api_get_eeprom_chip_sn(i);
      if ( stream )
        fgets(s, 18, stream);
      if ( s2 )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "get board sn for chain [%d]: %s", i, s2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
          174,
          "dag_gen_thread_func_2282",
          24,
          235,
          20,
          v6);
      }
      else
      {
        sweep_end = i + 100;
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "get board sn for chain [%d] failed", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
          174,
          "dag_gen_thread_func_2282",
          24,
          233,
          20,
          v6);
      }
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "get ltc sn for chain [%d]: %s", i, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        240,
        20,
        v6);
      if ( sweep_end <= 99 && !strcmp(s, s2) )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "Chain [%d] board sn check pass!", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
          174,
          "dag_gen_thread_func_2282",
          24,
          243,
          20,
          v6);
      }
      else
      {
        sweep_end = i + 100;
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "Chain [%d] board sn check failed!", i);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
          174,
          "dag_gen_thread_func_2282",
          24,
          247,
          100,
          v6);
      }
      pthread_create(
        (pthread_t *)&v24[4 * i],
        0,
        *(void *(**)(void *))(all_created_runtime[i] + 252),
        (void *)all_created_runtime[i]);
    }
    if ( stream )
      fclose(stream);
    for ( j = 0; j < (int)nmemb; ++j )
      pthread_join(*(_DWORD *)&v24[4 * j], 0);
  }
  if ( case_select == 6 || case_select == 14 || case_select == 24 )
  {
    v31 = nmemb - 1;
    v32 = &v2;
    for ( k = 0; k < (int)nmemb; ++k )
      pthread_create(
        (pthread_t *)&v32[4 * k],
        0,
        *(void *(**)(void *))(all_created_runtime[k] + 260),
        (void *)all_created_runtime[k]);
    for ( m = 0; m < (int)nmemb; ++m )
      pthread_join(*(_DWORD *)&v32[4 * m], 0);
    if ( case_select == 14 )
    {
      write_sweep_freq_etc_2282();
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "sweep end, result is saved in /nvdata/sweep_result_v2.txt");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        323,
        40,
        v6);
      puts("sweep end, result is saved in /nvdata/sweep_result_v2.txt");
      for ( n = 0; n < (int)nmemb; ++n )
        bad_asic_check_eth_2282(all_created_runtime[n]);
      if ( sweep_end == -1 )
      {
        sweep_end = 18;
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "sweep result: %d", sweep_end);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
          174,
          "dag_gen_thread_func_2282",
          24,
          331,
          40,
          v6);
        printf("sweep result: %d\n", sweep_end);
      }
      while ( 1 )
        ;
    }
  }
  while ( 1 )
  {
    if ( ready_to_restart_dag_gen && start_re_dag_gen )
    {
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "ready_to_restart_dag_gen %d, start_re_dag_gen %d, cur_epoch %d would minus 1 to restart dag_gen",
        (unsigned __int8)ready_to_restart_dag_gen,
        (unsigned __int8)start_re_dag_gen,
        dword_59A014);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        350,
        60,
        v6);
      --dword_59A014;
    }
    memset(v4, 0, sizeof(v4));
    get_cur_seed_2282(v4);
    epoch_number_eth_2282 = get_epoch_number_eth_2282(v4);
    if ( !dword_5AD3D0 )
      dword_5AD3D0 = epoch_number_eth_2282;
    if ( epoch_number_eth_2282 != dword_59A014 )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_59A014, epoch_number_eth_2282);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        366,
        40,
        v6);
    }
    if ( epoch_number_eth_2282 )
    {
      if ( epoch_number_eth_2282 != dword_59A014 )
      {
        if ( epoch_number_eth_2282 != dword_5AD3D0 )
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "epoch changed from %d-%d, exit mining exe...",
            epoch_number_eth_2282,
            dword_5AD3D0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            378,
            40,
            v6);
          reboot_godminer_dhash_2282();
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "rebooting godminer after epoch changed from %d-%d...",
            epoch_number_eth_2282,
            dword_5AD3D0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            381,
            40,
            v6);
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "waiting for reboot..");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            382,
            40,
            v6);
          sleep(0xFu);
        }
        if ( epoch_number_eth_2282 >= dword_59A014 )
        {
          dword_59A014 = epoch_number_eth_2282;
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            393,
            60,
            v6);
          for ( ii = 0; ii < (int)nmemb; ++ii )
            (*(void (__fastcall **)(_DWORD))(all_created_runtime[ii] + 24))(all_created_runtime[ii]);
          cache_size_2282 = get_cache_size_2282(dword_59A014);
          dag_size_2282 = get_dag_size_2282(dword_59A014);
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "ethereum epoch changed, start to generate and download dag items");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            402,
            60,
            v6);
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "epoch %d, set cache size %llx, dag size %llx",
            dword_59A014,
            v1,
            cache_size_2282,
            dag_size_2282);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            404,
            60,
            v6);
          v5[0] = cache_size_2282;
          v5[1] = dag_size_2282;
          for ( jj = 0; jj <= 31; jj += 4 )
          {
            v9 = v4[jj / 4u];
            *((_DWORD *)&v5[2] + jj / 4) = v9;
          }
          ptr = calloc(nmemb, 4u);
          for ( kk = 0; kk < (int)nmemb; ++kk )
          {
            *(_DWORD *)(all_created_runtime[kk] + 1060) = v5;
            pthread_create(
              (pthread_t *)ptr + kk,
              0,
              *(void *(**)(void *))(all_created_runtime[kk] + 248),
              (void *)all_created_runtime[kk]);
          }
          for ( mm = 0; mm < (int)nmemb; ++mm )
            pthread_join(*((_DWORD *)ptr + mm), 0);
          free(ptr);
          V_LOCK();
          logfmt_raw(v6, 0x1000u, 0, "recover mining all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            435,
            60,
            v6);
          v10 = calloc(nmemb, 4u);
          for ( nn = 0; nn < (int)nmemb; ++nn )
            pthread_create(
              (pthread_t *)v10 + nn,
              0,
              *(void *(**)(void *))(all_created_runtime[nn] + 28),
              (void *)all_created_runtime[nn]);
          for ( i1 = 0; i1 < (int)nmemb; ++i1 )
            pthread_join(*((_DWORD *)v10 + i1), 0);
          free(v10);
          if ( ready_to_restart_dag_gen )
            ready_to_restart_dag_gen = 0;
        }
        else
        {
          V_LOCK();
          logfmt_raw(
            v6,
            0x1000u,
            0,
            "cur_epoch-epoch [%d-%d], only etc mining support, sorry...",
            dword_59A014,
            epoch_number_eth_2282);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
            174,
            "dag_gen_thread_func_2282",
            24,
            388,
            40,
            v6);
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v6,
        0x1000u,
        0,
        "cur_epoch-epoch [%d-%d], synchronizing the state of the blockchain and start mining",
        dword_59A014,
        epoch_number_eth_2282);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282_dhash_common.c",
        174,
        "dag_gen_thread_func_2282",
        24,
        369,
        40,
        v6);
    }
  }
}
