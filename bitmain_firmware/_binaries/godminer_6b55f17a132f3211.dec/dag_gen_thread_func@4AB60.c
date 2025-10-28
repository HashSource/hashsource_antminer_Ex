void __fastcall __noreturn dag_gen_thread_func(int a1)
{
  int v1; // r0
  unsigned int epoch_number_eth; // r0
  _DWORD *v3; // r6
  signed int i; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r0
  int v8; // r6
  signed int j; // r5
  int v10; // t1
  int *v11; // r9
  int v12; // r2
  int v13; // r1
  bool v14; // zf
  __int64 v15; // r6
  int v16; // r0
  int v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  unsigned int k; // r0
  int v27; // r0
  int v28; // r0
  unsigned int v29; // r0
  int v30; // r0
  int v31; // r0
  pthread_t *v32; // r0
  pthread_t *v33; // r9
  void **v34; // r7
  pthread_t *v35; // r6
  signed int v36; // r5
  _DWORD *v37; // t1
  pthread_t *v38; // r0
  char *v39; // r6
  signed int m; // r5
  pthread_t v41; // t1
  int v42; // [sp+38h] [bp-1044h]
  int v43; // [sp+48h] [bp-1034h] BYREF
  signed int v44; // [sp+4Ch] [bp-1030h] BYREF
  int v45; // [sp+50h] [bp-102Ch] BYREF
  int v46; // [sp+54h] [bp-1028h] BYREF
  _DWORD s[8]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v48[4100]; // [sp+78h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/dhash_content/eth/eth_dhash_common.c",
    163,
    "dag_gen_thread_func",
    19,
    150,
    60,
    v48);
  v43 = 5;
  high_speed_uart_set_config(255, 0, &v43, 4);
  v44 = 0;
  v42 = get_all_created_runtime(&v44) - 4;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed(s);
      epoch_number_eth = get_epoch_number_eth(s);
      if ( dword_165E00 < epoch_number_eth )
        break;
      if ( v44 > 0 )
      {
        v3 = (_DWORD *)v42;
        for ( i = 0; i < v44; ++i )
        {
          v5 = v3[1];
          ++v3;
          if ( *(_DWORD *)(v5 + 392) != dword_165E04[i] )
          {
            V_LOCK(epoch_number_eth);
            v6 = logfmt_raw((int)v48, 0x1000u);
            V_UNLOCK(v6);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
              163,
              "dag_gen_thread_func",
              19,
              188,
              60,
              v48);
            epoch_number_eth = (*(int (__fastcall **)(_DWORD, _DWORD))(*v3 + 124))(*v3, *(_DWORD *)(*v3 + 392));
            dword_165E04[i] = *(_DWORD *)(*v3 + 392);
          }
        }
      }
      sleep(5u);
    }
    dword_165E00 = epoch_number_eth;
    V_LOCK(epoch_number_eth);
    v7 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/eth/eth_dhash_common.c",
      163,
      "dag_gen_thread_func",
      19,
      199,
      60,
      v48);
    if ( v44 > 0 )
    {
      v8 = v42;
      for ( j = 0; j < v44; ++j )
      {
        v10 = *(_DWORD *)(v8 + 4);
        v8 += 4;
        (*(void (**)(void))(v10 + 20))();
      }
    }
    v11 = &v46;
    v12 = qword_12D948[dword_165E00];
    v13 = HIDWORD(qword_12D948[dword_165E00]);
    v14 = (v12 & 0x1F) == 0;
    if ( (v12 & 0x1F) != 0 )
    {
      v12 |= 0x20u;
    }
    else
    {
      v45 = qword_12D948[dword_165E00];
      v46 = v13;
    }
    v15 = qword_129948[dword_165E00];
    if ( !v14 )
    {
      v46 = v13;
      v45 = v12;
    }
    V_LOCK(qword_129948);
    v16 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v16);
    v17 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            163,
            "dag_gen_thread_func",
            19,
            213,
            60,
            v48);
    V_LOCK(v17);
    v18 = 0;
    v19 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v19);
    v20 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            163,
            "dag_gen_thread_func",
            19,
            214,
            60,
            v48);
    do
    {
      ++v11;
      V_LOCK(v20);
      v21 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v21);
      v18 += 4;
      v20 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
              163,
              "dag_gen_thread_func",
              19,
              219,
              40,
              v48);
    }
    while ( v18 != 32 );
    write_seed_val(s);
    set_cache_nodes(v15, HIDWORD(v15));
    set_dag_nodes(v45, v46);
    v22 = set_cache_store_addr(402653184, 0);
    v23 = cache_acc_start(v22);
    v24 = dag_acc_en(v23);
    V_LOCK(v24);
    v25 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v25);
    for ( k = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                163,
                "dag_gen_thread_func",
                19,
                228,
                40,
                v48); ; k = sleep(1u) )
    {
      if ( is_cache_acc_done(k) )
      {
        v27 = is_dag_acc_done();
        if ( v27 )
          break;
      }
    }
    V_LOCK(v27);
    v28 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/eth/eth_dhash_common.c",
      163,
      "dag_gen_thread_func",
      19,
      234,
      40,
      v48);
    v29 = sleep(3u);
    v30 = fpga_reset(v29);
    V_LOCK(v30);
    v31 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/eth/eth_dhash_common.c",
      163,
      "dag_gen_thread_func",
      19,
      243,
      60,
      v48);
    v32 = (pthread_t *)calloc(v44, 4u);
    v33 = v32;
    if ( v44 > 0 )
    {
      v34 = (void **)v42;
      v35 = v32;
      v36 = 0;
      do
      {
        v37 = v34[1];
        ++v34;
        v38 = v35;
        ++v36;
        ++v35;
        v37[237] = &v45;
        pthread_create(v38, 0, *((void *(**)(void *))*v34 + 6), *v34);
      }
      while ( v44 > v36 );
      if ( v44 > 0 )
      {
        v39 = (char *)(v33 - 1);
        for ( m = 0; m < v44; ++m )
        {
          v41 = *((_DWORD *)v39 + 1);
          v39 += 4;
          pthread_join(v41, 0);
        }
      }
    }
    free(v33);
  }
}
