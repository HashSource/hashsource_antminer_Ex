void __fastcall __noreturn dag_gen_thread_func(int a1)
{
  int v1; // r0
  int *v2; // r11
  int epoch_number_eth; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r6
  int i; // r5
  int v11; // t1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  bool v15; // zf
  __int64 v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int *v22; // r11
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  unsigned int j; // r0
  int v29; // r0
  int v30; // r0
  unsigned int v31; // r0
  int v32; // r0
  int v33; // r0
  size_t v34; // r0
  int k; // r5
  pthread_t *v36; // r6
  int m; // r5
  const pthread_attr_t *v38; // r1
  int chip_dag_packet_num; // r0
  int v40; // r0
  int *v41; // [sp+28h] [bp-105Ch]
  int all_created_runtime; // [sp+34h] [bp-1050h]
  char v43; // [sp+4Ch] [bp-1038h]
  char v44; // [sp+4Dh] [bp-1037h]
  int v45; // [sp+50h] [bp-1034h] BYREF
  int v46; // [sp+54h] [bp-1030h] BYREF
  int v47; // [sp+58h] [bp-102Ch] BYREF
  int v48; // [sp+5Ch] [bp-1028h] BYREF
  _DWORD s[8]; // [sp+60h] [bp-1024h] BYREF
  _BYTE v50[4100]; // [sp+80h] [bp-1004h] BYREF

  v43 = 0;
  v44 = 0;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/dhash_content/eth/eth_dhash_common.c",
    167,
    "dag_gen_thread_func",
    19,
    161,
    60,
    v50);
  v45 = 5;
  high_speed_uart_set_config(255, 0, &v45, 4);
  v46 = 0;
  v2 = &dword_1716C0;
  all_created_runtime = get_all_created_runtime(&v46);
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      get_cur_seed(s);
      epoch_number_eth = get_epoch_number_eth(s);
      v4 = epoch_number_eth;
      if ( *v2 == epoch_number_eth )
        break;
      V_LOCK(epoch_number_eth);
      v5 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v5);
      epoch_number_eth = zlog(
                           g_zc,
                           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/relea"
                           "se/build/godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                           167,
                           "dag_gen_thread_func",
                           19,
                           209,
                           40,
                           v50);
      if ( !v4 )
        goto LABEL_8;
      if ( *v2 != v4 )
      {
        if ( *v2 <= v4 )
        {
          *v2 = v4;
          V_LOCK(epoch_number_eth);
          v8 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v8);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            227,
            60,
            v50);
          if ( v46 > 0 )
          {
            v9 = all_created_runtime - 4;
            for ( i = 0; i < v46; ++i )
            {
              v11 = *(_DWORD *)(v9 + 4);
              v9 += 4;
              (*(void (**)(void))(v11 + 20))();
            }
          }
          v12 = qword_13A7E0[*v2];
          v13 = *v2;
          v14 = HIDWORD(qword_13A7E0[v13]);
          v15 = (v12 & 0x1F) == 0;
          if ( (v12 & 0x1F) != 0 )
          {
            v12 |= 0x20u;
          }
          else
          {
            v47 = qword_13A7E0[*v2];
            v48 = v14;
          }
          v16 = qword_1367E0[v13];
          if ( !v15 )
          {
            v48 = v14;
            v47 = v12;
          }
          V_LOCK(qword_1367E0);
          v17 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v17);
          v18 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                  167,
                  "dag_gen_thread_func",
                  19,
                  241,
                  60,
                  v50);
          V_LOCK(v18);
          v19 = 0;
          v20 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v20);
          v21 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                  167,
                  "dag_gen_thread_func",
                  19,
                  242,
                  60,
                  v50);
          v41 = v2;
          v22 = &v48;
          do
          {
            ++v22;
            V_LOCK(v21);
            v23 = logfmt_raw((int)v50, 0x1000u);
            V_UNLOCK(v23);
            v19 += 4;
            v21 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                    167,
                    "dag_gen_thread_func",
                    19,
                    247,
                    40,
                    v50);
          }
          while ( v19 != 32 );
          v2 = v41;
          write_seed_val(s);
          set_cache_nodes(v16, HIDWORD(v16));
          set_dag_nodes(v47, v48);
          v24 = set_cache_store_addr(402653184, 0);
          v25 = cache_acc_start(v24);
          v26 = dag_acc_en(v25);
          V_LOCK(v26);
          v27 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v27);
          for ( j = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                      167,
                      "dag_gen_thread_func",
                      19,
                      256,
                      40,
                      v50); ; j = sleep(1u) )
          {
            if ( is_cache_acc_done(j) )
            {
              v29 = is_dag_acc_done();
              if ( v29 )
                break;
            }
          }
          V_LOCK(v29);
          v30 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v30);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            262,
            40,
            v50);
          v31 = sleep(3u);
          v32 = fpga_reset(v31);
          V_LOCK(v32);
          v33 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v33);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            271,
            60,
            v50);
          v34 = v46;
          if ( v46 > 0 )
          {
            for ( k = 0; k < v46; ++k )
            {
              if ( !*(&v43 + k) )
              {
                chip_dag_packet_num = get_chip_dag_packet_num(*(_DWORD *)(all_created_runtime + 4 * k));
                if ( chip_dag_packet_num )
                {
                  *(&v43 + k) = 1;
                  V_LOCK(chip_dag_packet_num);
                  v40 = logfmt_raw((int)v50, 0x1000u);
                  V_UNLOCK(v40);
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/buil"
                    "d/godminer-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
                    167,
                    "dag_gen_thread_func",
                    19,
                    280,
                    40,
                    v50);
                }
              }
              v34 = v46;
            }
          }
          v36 = (pthread_t *)calloc(v34, 4u);
          if ( v46 > 0 )
          {
            for ( m = 0; m < v46; ++m )
            {
              v38 = (const pthread_attr_t *)(unsigned __int8)*(&v43 + m);
              if ( !*(&v43 + m) )
              {
                *(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * m) + 956) = &v47;
                pthread_create(
                  &v36[m],
                  v38,
                  *(void *(**)(void *))(*(_DWORD *)(all_created_runtime + 4 * m) + 24),
                  *(void **)(all_created_runtime + 4 * m));
              }
            }
            if ( v46 > 0 )
            {
              if ( !v43 )
                pthread_join(*v36, 0);
              if ( v46 > 1 && !v44 )
                pthread_join(v36[1], 0);
            }
          }
          free(v36);
        }
        else
        {
          V_LOCK(epoch_number_eth);
          v6 = logfmt_raw((int)v50, 0x1000u);
          V_UNLOCK(v6);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/dhash_content/eth/eth_dhash_common.c",
            167,
            "dag_gen_thread_func",
            19,
            222,
            40,
            v50);
        }
      }
    }
    if ( !*v2 )
    {
LABEL_8:
      V_LOCK(epoch_number_eth);
      v7 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v7);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/eth/eth_dhash_common.c",
        167,
        "dag_gen_thread_func",
        19,
        212,
        40,
        v50);
    }
  }
}
