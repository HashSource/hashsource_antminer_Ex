void __noreturn dag_gen_thread_func()
{
  unsigned int epoch_number_eth; // r0
  signed int v1; // r4
  char *all_created_runtime; // r0
  char *v3; // r5
  int v4; // t1
  int v5; // r4
  signed int *v6; // r5
  signed int v7; // t1
  __int64 v8; // r0
  int v9; // r4
  int hs_uart_send_size; // r0
  _DWORD *v11; // r4
  pthread_t *v12; // r8
  signed int v13; // r6
  char *v14; // r5
  int v15; // t1
  void *v16; // r3
  pthread_t *v17; // r0
  int v18; // r2
  signed int v19; // r4
  char *v20; // r5
  pthread_t v21; // t1
  int v22; // [sp+0h] [bp-1074h]
  int v23; // [sp+4h] [bp-1070h]
  int v24; // [sp+18h] [bp-105Ch]
  __int64 ptr; // [sp+20h] [bp-1054h]
  pthread_t *ptra; // [sp+20h] [bp-1054h]
  int v27; // [sp+30h] [bp-1044h]
  _DWORD *v28; // [sp+34h] [bp-1040h]
  char *v29; // [sp+38h] [bp-103Ch]
  int v30; // [sp+48h] [bp-102Ch] BYREF
  signed int v31; // [sp+4Ch] [bp-1028h] BYREF
  _DWORD s[8]; // [sp+50h] [bp-1024h] BYREF
  char v33[4100]; // [sp+70h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v33, 0x1000u, 0, "backend setup high baud!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/common/mining/eth/eth_common.c",
    151,
    "dag_gen_thread_func",
    19,
    108,
    60,
    v33);
  v30 = 5;
  high_speed_uart_set_config(255, 0, &v30);
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed(s);
      epoch_number_eth = get_epoch_number_eth(s);
      if ( dword_16C838 < epoch_number_eth )
        break;
      sleep(5u);
    }
    v1 = 0;
    dword_16C838 = epoch_number_eth;
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "stop mining & setup dag gen mode all backend!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      142,
      60,
      v33);
    v31 = 0;
    all_created_runtime = (char *)get_all_created_runtime(&v31);
    v29 = all_created_runtime;
    if ( v31 > 0 )
    {
      v3 = all_created_runtime - 4;
      do
      {
        v4 = *((_DWORD *)v3 + 1);
        v3 += 4;
        ++v1;
        (*(void (**)(void))(v4 + 8))();
      }
      while ( v31 > v1 );
    }
    v24 = qword_1461C8[dword_16C838];
    ptr = qword_1421C8[dword_16C838];
    v27 = HIDWORD(qword_1461C8[dword_16C838]);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "ethereum epoch changed, start to genarate and download dag items");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      151,
      60,
      v33);
    V_LOCK();
    v5 = 0;
    logfmt_raw(v33, 0x1000u, 0, "epoch %d, cache size %lld, data size %lld", dword_16C838, v23, ptr, v24, v27);
    v6 = &v31;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      152,
      60,
      v33);
    do
    {
      v7 = v6[1];
      ++v6;
      V_LOCK();
      v22 = v5 >> 2;
      v5 += 4;
      logfmt_raw(v33, 0x1000u, 0, "seed[%d] 0x%08x", v22, v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/mining/eth/eth_common.c",
        151,
        "dag_gen_thread_func",
        19,
        158,
        40,
        v33);
    }
    while ( v5 != 32 );
    write_seed_val(s);
    set_cache_nodes(ptr);
    HIDWORD(v8) = v27;
    if ( (v24 & 0x1F) != 0 )
      v24 |= 0x20u;
    LODWORD(v8) = v24;
    set_dag_nodes(v8);
    set_cache_store_addr(939524096);
    cache_acc_start();
    dag_acc_en();
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "cache and dag acc start...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      173,
      40,
      v33);
    while ( !is_cache_acc_done() || !is_dag_acc_done() )
      sleep(1u);
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "cache and dag acc done!");
    V_UNLOCK();
    v9 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      179,
      40,
      v33);
    do
    {
      V_LOCK();
      hs_uart_send_size = get_hs_uart_send_size((unsigned __int8)v9);
      logfmt_raw(v33, 0x1000u, 0, "hs uart[%d] totally send bytes: %d", v9, hs_uart_send_size);
      V_UNLOCK();
      ++v9;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/common/mining/eth/eth_common.c",
        151,
        "dag_gen_thread_func",
        19,
        182,
        40,
        v33);
    }
    while ( v9 != 8 );
    fpga_reset();
    V_LOCK();
    logfmt_raw(v33, 0x1000u, 0, "recover mining all backend!\n");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/common/mining/eth/eth_common.c",
      151,
      "dag_gen_thread_func",
      19,
      191,
      60,
      v33);
    v28 = calloc(v31, 0x10u);
    v11 = v28;
    v12 = (pthread_t *)calloc(v31, 4u);
    ptra = v12;
    if ( v31 > 0 )
    {
      v13 = 0;
      v14 = v29 - 4;
      do
      {
        v15 = *((_DWORD *)v14 + 1);
        v14 += 4;
        v16 = v11;
        v17 = v12;
        v11[2] = v24;
        ++v13;
        *v11 = v15;
        ++v12;
        v18 = *(_DWORD *)v14;
        v11 += 4;
        *(v11 - 1) = v27;
        pthread_create(v17, 0, *(void *(**)(void *))(v18 + 12), v16);
      }
      while ( v31 > v13 );
      if ( v31 > 0 )
      {
        v19 = 0;
        v20 = (char *)(ptra - 1);
        do
        {
          v21 = *((_DWORD *)v20 + 1);
          v20 += 4;
          pthread_join(v21, 0);
          ++v19;
        }
        while ( v31 > v19 );
      }
    }
    free(ptra);
    free(v28);
  }
}
