void __fastcall sub_2F76C(int a1)
{
  int v1; // r0
  pthread_t v2; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r0
  char *v6; // r6
  int v7; // r8
  int v8; // r0
  char *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r6
  int v13; // r0
  int **v14; // r6
  _DWORD *v15; // r9
  pthread_t v16; // r0
  int *v17; // r7
  int v18; // r10
  int v19; // lr
  int *v20; // r2
  int v21; // r12
  int v22; // r1
  int v23; // t1
  int v24; // r3
  int v25; // r3
  _DWORD *v26; // r2
  _DWORD *v27; // r1
  int *all_created_runtime; // r0
  int *v29; // r12
  int v30; // t1
  int v31; // r3
  int v32; // r2
  int v33; // r0
  int v34; // r0
  int v35; // r6
  int v36; // r0
  int v37; // r6
  int v38; // r0
  int v39; // r3
  int *v40; // r0
  int v41; // r6
  int v42; // r6
  int v43; // r0
  void **v44; // r6
  void *v45; // r0
  void *v46; // t1
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // [sp+10h] [bp-1094h]
  int v53; // [sp+14h] [bp-1090h]
  _DWORD v54[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v55[1025]; // [sp+A0h] [bp-1004h] BYREF

  v52 = total_pools;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v55, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/pool.c",
    133,
    "pool_change_function",
    20,
    757,
    20,
    v55);
  v2 = pthread_self();
  pthread_detach(v2);
  v3 = dword_17860C;
  if ( dword_17860C )
  {
    v53 = 1;
    pthread_cancel(dword_17860C);
    dword_17860C = 0;
    v3 = usleep((__useconds_t)&stru_186A0);
  }
  else
  {
    v53 = 0;
  }
  if ( v52 > 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      V_LOCK(v3);
      v5 = logfmt_raw((int)v55, 0x1000u);
      V_UNLOCK(v5);
      v3 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/pool.c",
             133,
             "pool_change_function",
             20,
             773,
             20,
             v55);
    }
    while ( v52 != v4 );
  }
  if ( dword_16520C > 0 )
  {
    v6 = (char *)&unk_165210;
    v7 = 0;
    do
    {
      v8 = sub_2E878();
      ++v7;
      sub_2E1F0((void **)(v8 + 8), (_BYTE *)(v8 + 24), v6);
      set_user(v6 + 256);
      v9 = v6 + 512;
      v6 += 768;
      v3 = set_pass(v9);
    }
    while ( dword_16520C > v7 );
  }
  if ( total_pools == v52 )
  {
    V_LOCK(v3);
    v50 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v50);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/pool.c",
      133,
      "pool_change_function",
      20,
      783,
      100,
      v55);
  }
  else
  {
    V_LOCK(v3);
    v10 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v10);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/pool.c",
            133,
            "pool_change_function",
            20,
            787,
            20,
            v55);
    if ( total_pools > 0 )
    {
      v12 = 0;
      do
      {
        ++v12;
        V_LOCK(v11);
        v13 = logfmt_raw((int)v55, 0x1000u);
        V_UNLOCK(v13);
        v11 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/pool.c",
                133,
                "pool_change_function",
                20,
                790,
                20,
                v55);
      }
      while ( total_pools > v12 );
    }
    if ( v52 > 0 )
    {
      v14 = (int **)v54;
      v15 = &stratum_thr_info;
      do
      {
        v16 = v15[1];
        v17 = *(int **)pools;
        if ( v16 )
        {
          pthread_cancel(v16);
          v15[1] = 0;
        }
        if ( v15[11] )
        {
          tq_free();
          v15[11] = 0;
        }
        pthread_mutex_lock((pthread_mutex_t *)(v17 + 454));
        *((_BYTE *)v17 + 1908) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)(v17 + 454));
        pthread_mutex_lock((pthread_mutex_t *)(v17 + 454));
        *((_BYTE *)v17 + 1896) = 1;
        pthread_mutex_unlock((pthread_mutex_t *)(v17 + 454));
        v18 = total_pools;
        v19 = total_pools - 1;
        --dword_1650E8;
        --dword_1650E4;
        --dword_1650E0;
        if ( total_pools > 0 )
        {
          v20 = (int *)pools;
          v21 = pools + 4 * total_pools;
          do
          {
            v23 = *v20++;
            v22 = v23;
            v24 = *(_DWORD *)(v23 + 4);
            if ( v24 > v17[1] )
              *(_DWORD *)(v22 + 4) = v24 - 1;
          }
          while ( (int *)v21 != v20 );
        }
        v25 = *v17;
        if ( v19 > *v17 )
        {
          v26 = (_DWORD *)(pools + 4 * v25);
          do
          {
            v27 = (_DWORD *)v26[1];
            *v26++ = v27;
            *v27 = v25++;
          }
          while ( v25 != v19 );
        }
        *v14++ = v17;
        *v17 = v18;
        v15 += 12;
        total_pools = v18 - 1;
      }
      while ( v14 != &v54[v52] );
    }
    v55[0] = 0;
    all_created_runtime = (int *)get_all_created_runtime(v55);
    if ( v55[0] > 0 )
    {
      v29 = &all_created_runtime[v55[0]];
      do
      {
        v30 = *all_created_runtime++;
        v31 = v30 + 487;
        v32 = v30 + 519;
        do
          *(_BYTE *)++v31 = 1;
        while ( v32 != v31 );
      }
      while ( v29 != all_created_runtime );
    }
    V_LOCK(all_created_runtime);
    v33 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/pool.c",
            133,
            "pool_change_function",
            20,
            815,
            20,
            v55);
    if ( total_pools > 0 )
    {
      v35 = 0;
      do
      {
        ++v35;
        V_LOCK(v34);
        v36 = logfmt_raw((int)v55, 0x1000u);
        V_UNLOCK(v36);
        v34 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/pool.c",
                133,
                "pool_change_function",
                20,
                818,
                20,
                v55);
      }
      while ( total_pools > v35 );
    }
    V_LOCK(v34);
    v37 = 0;
    v38 = logfmt_raw((int)v55, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/pool.c",
      133,
      "pool_change_function",
      20,
      821,
      40,
      v55);
    pre_pool_stratum_connect();
    sleep(5u);
    create_pool_stratum_threads();
    do
    {
      ++v37;
      sleep(1u);
      if ( v37 == 8 )
        v39 = 0;
      else
        v39 = ((unsigned __int8)pools_active ^ 1) & 1;
    }
    while ( v39 );
    set_miner_start_time();
    v40 = api_flush();
    v41 = (unsigned __int8)pools_active;
    if ( !pools_active )
    {
      V_LOCK(v40);
      v47 = logfmt_raw((int)v55, 0x1000u);
      V_UNLOCK(v47);
      v48 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/pool.c",
              133,
              "pool_change_function",
              20,
              835,
              100,
              v55);
      if ( total_pools > 0 )
      {
        do
        {
          ++v41;
          V_LOCK(v48);
          v49 = logfmt_raw((int)v55, 0x1000u);
          V_UNLOCK(v49);
          v48 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/pool.c",
                  133,
                  "pool_change_function",
                  20,
                  838,
                  100,
                  v55);
        }
        while ( total_pools > v41 );
      }
    }
  }
  if ( v53 )
  {
    dword_178608 = 2;
    pthread_attr_init(&attr);
    v42 = pthread_create((pthread_t *)&dword_17860C, &attr, (void *(*)(void *))watchpool_thread, &dword_178608);
    v43 = pthread_attr_destroy(&attr);
    if ( v42 )
    {
      V_LOCK(v43);
      v51 = logfmt_raw((int)v55, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/pool.c",
        133,
        "pool_change_function",
        20,
        848,
        100,
        v55);
      exit(1);
    }
  }
  sleep(0xAu);
  if ( v52 > 0 )
  {
    v44 = (void **)v54;
    do
    {
      v46 = *v44++;
      v45 = v46;
      if ( v46 )
        free(v45);
    }
    while ( &v54[v52] != v44 );
  }
  newthread = 0;
}
