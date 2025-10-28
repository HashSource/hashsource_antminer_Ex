void __noreturn dag_gen_thread_func()
{
  unsigned int epoch_number_eth; // r0
  unsigned int v1; // r4
  signed int v2; // r4
  char *all_created_runtime; // r0
  char *v4; // r5
  int v5; // t1
  int v6; // r4
  signed int *v7; // r5
  signed int v8; // t1
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r0
  unsigned int i; // r0
  int v14; // r4
  int hs_uart_send_size; // r0
  signed int v16; // r6
  _DWORD *v17; // r4
  char *v18; // r5
  pthread_t *v19; // r7
  int v20; // t1
  void *v21; // r3
  pthread_t *v22; // r0
  int v23; // r2
  signed int v24; // r4
  char *v25; // r5
  pthread_t v26; // t1
  int v27; // [sp+0h] [bp-1074h]
  unsigned int v28; // [sp+4h] [bp-1070h]
  int v29; // [sp+4h] [bp-1070h]
  int v30; // [sp+18h] [bp-105Ch]
  __int64 newthread; // [sp+20h] [bp-1054h]
  pthread_t *newthreada; // [sp+20h] [bp-1054h]
  _DWORD *arg; // [sp+30h] [bp-1044h]
  int v34; // [sp+34h] [bp-1040h]
  char *v35; // [sp+38h] [bp-103Ch]
  int v36; // [sp+48h] [bp-102Ch] BYREF
  signed int v37; // [sp+4Ch] [bp-1028h] BYREF
  _DWORD s[8]; // [sp+50h] [bp-1024h] BYREF
  char v39[4100]; // [sp+70h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v39, 0x1000u, 0, "backend setup high baud!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/mining/eth/eth_common.c",
    151,
    "dag_gen_thread_func",
    19,
    136,
    60,
    v39);
  v36 = 5;
  high_speed_uart_set_config(255, 0, &v36);
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed(s);
      epoch_number_eth = get_epoch_number_eth(s);
      v1 = epoch_number_eth;
      if ( dword_16D850 < epoch_number_eth )
        break;
      sleep(5u);
    }
    dword_16D850 = epoch_number_eth;
    V_LOCK();
    v28 = v1;
    v2 = 0;
    logfmt_raw(v39, 0x1000u, 0, "dag_gen_thread_func cur_epoch =%d,epoch=%d", dword_16D850, v28);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      172,
      100,
      v39);
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      173,
      60,
      v39);
    v37 = 0;
    all_created_runtime = (char *)get_all_created_runtime(&v37);
    v35 = all_created_runtime;
    if ( v37 > 0 )
    {
      v4 = all_created_runtime - 4;
      do
      {
        v5 = *((_DWORD *)v4 + 1);
        v4 += 4;
        ++v2;
        (*(void (**)(void))(v5 + 8))();
      }
      while ( v37 > v2 );
    }
    v30 = qword_147B90[dword_16D850];
    newthread = qword_143B90[dword_16D850];
    v34 = HIDWORD(qword_147B90[dword_16D850]);
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "ethereum epoch changed, start to genarate and download dag items");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      183,
      60,
      v39);
    V_LOCK();
    v6 = 0;
    logfmt_raw(v39, 0x1000u, 0, "epoch %d, cache size %lld, data size %lld", dword_16D850, v29, newthread, v30, v34);
    v7 = &v37;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      184,
      60,
      v39);
    do
    {
      v8 = v7[1];
      ++v7;
      V_LOCK();
      v27 = v6 >> 2;
      v6 += 4;
      logfmt_raw(v39, 0x1000u, 0, "seed[%d] 0x%08x", v27, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/mining/eth/eth_common.c",
        151,
        "dag_gen_thread_func",
        19,
        189,
        40,
        v39);
    }
    while ( v6 != 32 );
    write_seed_val(s);
    set_cache_nodes(newthread, HIDWORD(newthread));
    v9 = v30 & 0x1F;
    v10 = v9;
    if ( (v30 & 0x1F) != 0 )
    {
      v10 = v30 | 0x20;
      v30 |= 0x20u;
    }
    set_dag_nodes(v30, v34, v9, v10);
    v11 = set_cache_store_addr(939524096, 0);
    v12 = cache_acc_start(v11);
    dag_acc_en(v12);
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "cache and dag acc start...");
    V_UNLOCK();
    for ( i = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/common/mining/eth/eth_common.c",
                151,
                "dag_gen_thread_func",
                19,
                204,
                40,
                v39); !is_cache_acc_done(i) || !is_dag_acc_done(); i = sleep(1u) )
      ;
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "cache and dag acc done!");
    V_UNLOCK();
    v14 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      210,
      40,
      v39);
    do
    {
      V_LOCK();
      hs_uart_send_size = get_hs_uart_send_size((unsigned __int8)v14);
      logfmt_raw(v39, 0x1000u, 0, "hs uart[%d] totally send bytes: %d", v14, hs_uart_send_size);
      V_UNLOCK();
      ++v14;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/mining/eth/eth_common.c",
        151,
        "dag_gen_thread_func",
        19,
        213,
        40,
        v39);
    }
    while ( v14 != 8 );
    sleep(0xFu);
    fpga_reset();
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "recover mining all backend!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      223,
      60,
      v39);
    arg = calloc(v37, 0x10u);
    newthreada = (pthread_t *)calloc(v37, 4u);
    if ( v37 > 0 )
    {
      v16 = 0;
      v17 = arg;
      v18 = v35 - 4;
      v19 = newthreada;
      do
      {
        v20 = *((_DWORD *)v18 + 1);
        v18 += 4;
        v21 = v17;
        v22 = v19;
        v17[2] = v30;
        ++v16;
        *v17 = v20;
        ++v19;
        v23 = *(_DWORD *)v18;
        v17 += 4;
        *(v17 - 1) = v34;
        pthread_create(v22, 0, *(void *(**)(void *))(v23 + 12), v21);
      }
      while ( v37 > v16 );
      if ( v37 > 0 )
      {
        v24 = 0;
        v25 = (char *)(newthreada - 1);
        do
        {
          v26 = *((_DWORD *)v25 + 1);
          v25 += 4;
          pthread_join(v26, 0);
          ++v24;
        }
        while ( v37 > v24 );
      }
    }
    free(newthreada);
    free(arg);
  }
}
