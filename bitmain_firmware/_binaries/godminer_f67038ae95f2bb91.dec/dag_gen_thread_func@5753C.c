void __noreturn dag_gen_thread_func()
{
  int epoch_number_eth; // r0
  int v1; // r5
  char *v2; // r8
  int i; // r5
  int v4; // t1
  int v5; // r5
  unsigned int v6; // r2
  unsigned int v7; // r1
  bool v8; // zf
  __int64 v9; // r8
  char *v10; // r8
  int v11; // t1
  _DWORD *v12; // r10
  int v13; // r5
  int v14; // t1
  int v15; // r5
  __int64 dag_nodes; // r0
  size_t v17; // r0
  int j; // r5
  int v19; // r9
  pthread_t *v20; // r8
  int k; // r5
  const pthread_attr_t *v22; // r1
  int v23; // [sp+0h] [bp-10A4h]
  int v24; // [sp+4h] [bp-10A0h]
  int v25; // [sp+4h] [bp-10A0h]
  __int64 cache_nodes; // [sp+18h] [bp-108Ch]
  __int64 v27; // [sp+20h] [bp-1084h]
  _DWORD *all_created_runtime; // [sp+34h] [bp-1070h]
  char v29; // [sp+4Ch] [bp-1058h]
  char v30; // [sp+4Dh] [bp-1057h]
  int v31; // [sp+50h] [bp-1054h] BYREF
  int v32; // [sp+54h] [bp-1050h] BYREF
  __int64 v33; // [sp+58h] [bp-104Ch] BYREF
  _DWORD s[8]; // [sp+60h] [bp-1044h] BYREF
  _DWORD v35[8]; // [sp+80h] [bp-1024h] BYREF
  char v36[4100]; // [sp+A0h] [bp-1004h] BYREF

  v29 = 0;
  v30 = 0;
  V_LOCK();
  logfmt_raw(v36, 0x1000u, 0, "backend setup high baud!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/dhash_content/eth/eth_dhash_common.c",
    167,
    "dag_gen_thread_func",
    19,
    161,
    60,
    v36);
  v31 = 5;
  high_speed_uart_set_config(255, 0, &v31);
  v32 = 0;
  all_created_runtime = get_all_created_runtime(&v32);
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed(s);
      epoch_number_eth = get_epoch_number_eth(s);
      v1 = epoch_number_eth;
      if ( epoch_number_eth == dword_192700 )
        break;
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "cur_epoch-epoch [%d-%d]", dword_192700, v1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/eth/eth_dhash_common.c",
        167,
        "dag_gen_thread_func",
        19,
        211,
        40,
        v36);
      if ( !v1 )
        goto LABEL_9;
      if ( v1 != dword_192700 )
      {
        if ( v1 < dword_192700 )
        {
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "cur_epoch-epoch [%d-%d], only etc mining support, sorry...", dword_192700, v1);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            224,
            40,
            v36);
        }
        else
        {
          dword_192700 = v1;
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            229,
            60,
            v36);
          if ( v32 > 0 )
          {
            v2 = (char *)(all_created_runtime - 1);
            for ( i = 0; i < v32; ++i )
            {
              v4 = *((_DWORD *)v2 + 1);
              v2 += 4;
              (*(void (**)(void))(v4 + 20))();
            }
          }
          v5 = 0;
          v6 = qword_1513B0[dword_192700];
          v7 = HIDWORD(qword_1513B0[dword_192700]);
          v8 = (v6 & 0x1F) == 0;
          if ( (v6 & 0x1F) != 0 )
          {
            v6 |= 0x20u;
          }
          else
          {
            LODWORD(v33) = qword_1513B0[dword_192700];
            HIDWORD(v33) = v7;
          }
          v9 = qword_14D3B0[dword_192700];
          if ( !v8 )
            v33 = __PAIR64__(v7, v6);
          v27 = v9;
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "ethereum epoch changed, start to generate and download dag items");
          V_UNLOCK();
          v10 = (char *)&v33 + 4;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            247,
            60,
            v36);
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "epoch %d, set cache size 0x%llx, dag size 0x%llx", dword_192700, v24, v27, v33);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            248,
            60,
            v36);
          do
          {
            v11 = *((_DWORD *)v10 + 1);
            v10 += 4;
            V_LOCK();
            v23 = v5 >> 2;
            v5 += 4;
            logfmt_raw(v36, 0x1000u, 0, "seed[%d] 0x%08x", v23, v11);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
              167,
              "dag_gen_thread_func",
              19,
              253,
              40,
              v36);
          }
          while ( v5 != 32 );
          v12 = &s[7];
          write_seed_val(s);
          v13 = 0;
          sleep(2u);
          read_seed_val(v35);
          do
          {
            v14 = v12[1];
            ++v12;
            V_LOCK();
            logfmt_raw(v36, 0x1000u, 0, "seed_fb[%d] 0x%08x", v13 >> 2, v14);
            V_UNLOCK();
            v13 += 4;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
              167,
              "dag_gen_thread_func",
              19,
              261,
              40,
              v36);
          }
          while ( v13 != 32 );
          set_cache_nodes(v27);
          set_dag_nodes(v33);
          V_LOCK();
          v15 = dword_192700;
          cache_nodes = get_cache_nodes();
          dag_nodes = get_dag_nodes();
          logfmt_raw(
            v36,
            0x1000u,
            0,
            "epoch %d, get cache size 0x%llx, dag size 0x%llx",
            v15,
            v25,
            cache_nodes,
            dag_nodes);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            266,
            60,
            v36);
          set_cache_store_addr(402653184);
          cache_acc_start();
          dag_acc_en();
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "cache and dag acc start...");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            270,
            40,
            v36);
          while ( !is_cache_acc_done() || !is_dag_acc_done() )
            sleep(1u);
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "cache and dag acc done!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            276,
            40,
            v36);
          sleep(3u);
          fpga_reset();
          V_LOCK();
          logfmt_raw(v36, 0x1000u, 0, "recover mining all backend!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            290,
            60,
            v36);
          v17 = v32;
          if ( v32 > 0 )
          {
            for ( j = 0; j < v32; ++j )
            {
              v19 = (unsigned __int8)*(&v29 + j);
              if ( !*(&v29 + j) && get_chip_dag_packet_num(all_created_runtime[j]) )
              {
                *(&v29 + j) = 1;
                V_LOCK();
                logfmt_raw(v36, 0x1000u, v19, "chain-%d high speed tx check failed, retry_enable: %d", j, v19);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                  167,
                  "dag_gen_thread_func",
                  19,
                  299,
                  40,
                  v36);
              }
              v17 = v32;
            }
          }
          v20 = (pthread_t *)calloc(v17, 4u);
          if ( v32 > 0 )
          {
            for ( k = 0; k < v32; ++k )
            {
              v22 = (const pthread_attr_t *)(unsigned __int8)*(&v29 + k);
              if ( !*(&v29 + k) )
              {
                *(_DWORD *)(all_created_runtime[k] + 1004) = &v33;
                pthread_create(
                  &v20[k],
                  v22,
                  *(void *(**)(void *))(all_created_runtime[k] + 24),
                  (void *)all_created_runtime[k]);
              }
            }
            if ( v32 > 0 )
            {
              if ( !v29 )
                pthread_join(*v20, 0);
              if ( v32 > 1 && !v30 )
                pthread_join(v20[1], 0);
            }
          }
          free(v20);
        }
      }
    }
    if ( !epoch_number_eth )
    {
LABEL_9:
      V_LOCK();
      logfmt_raw(
        v36,
        0x1000u,
        0,
        "cur_epoch-epoch [%d-%d], synchronizing the state of the blockchain and start mining",
        dword_192700,
        0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/eth/eth_dhash_common.c",
        167,
        "dag_gen_thread_func",
        19,
        214,
        40,
        v36);
    }
  }
}
