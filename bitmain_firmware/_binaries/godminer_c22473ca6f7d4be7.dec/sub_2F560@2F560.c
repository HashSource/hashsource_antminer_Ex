void sub_2F560()
{
  pthread_t v0; // r0
  int v1; // r7
  _DWORD *v2; // r8
  char *v3; // r7
  int v4; // r8
  int v5; // r0
  char *v6; // r0
  int v7; // r7
  _DWORD *v8; // r8
  int **v9; // r7
  char *v10; // r10
  pthread_t v11; // r0
  int *v12; // r6
  char *v13; // r0
  int v14; // r11
  int v15; // lr
  int *v16; // r2
  int v17; // r12
  int v18; // r1
  int v19; // t1
  int v20; // r3
  int v21; // r3
  _DWORD *v22; // r2
  _DWORD *v23; // r1
  int *all_created_runtime; // r0
  int *v25; // r12
  int v26; // t1
  int v27; // r3
  int v28; // r2
  int v29; // r7
  _DWORD *v30; // r8
  int v31; // r7
  int v32; // r3
  int v33; // r7
  int v34; // r7
  void **v35; // r6
  void *v36; // r0
  void *v37; // t1
  _DWORD *v38; // r8
  int v39; // [sp+10h] [bp-1094h]
  int v40; // [sp+14h] [bp-1090h]
  _DWORD v41[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v42[1025]; // [sp+A0h] [bp-1004h] BYREF

  v39 = total_pools;
  V_LOCK();
  logfmt_raw((char *)v42, 0x1000u, 0, "pool_change_function");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "pool_change_function",
    20,
    675,
    20,
    v42);
  v0 = pthread_self();
  pthread_detach(v0);
  if ( dword_16CF14 )
  {
    v40 = 1;
    pthread_cancel(dword_16CF14);
    dword_16CF14 = 0;
    usleep((__useconds_t)&stru_18694.st_info);
  }
  else
  {
    v40 = 0;
  }
  if ( v39 > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD **)(pools + 4 * v1++);
      V_LOCK();
      logfmt_raw((char *)v42, 0x1000u, 0, "before add pool, pool->pool_no = %d, pool->rpc_url = %s", *v2, v2[2]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        691,
        20,
        v42);
    }
    while ( v39 != v1 );
  }
  if ( dword_165580 > 0 )
  {
    v3 = (char *)&unk_165584;
    v4 = 0;
    do
    {
      v5 = sub_2E934();
      ++v4;
      sub_2E300((void **)(v5 + 8), (_BYTE *)(v5 + 24), v3);
      set_user(v3 + 256);
      v6 = v3 + 512;
      v3 += 768;
      set_pass(v6);
    }
    while ( dword_165580 > v4 );
  }
  if ( total_pools == v39 )
  {
    V_LOCK();
    logfmt_raw((char *)v42, 0x1000u, 0, "Input pool error, try again");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      701,
      100,
      v42);
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)v42, 0x1000u, 0, "total_pools = %d, need to remove %d pools", total_pools, v39);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      705,
      20,
      v42);
    if ( total_pools > 0 )
    {
      v7 = 0;
      do
      {
        v8 = *(_DWORD **)(pools + 4 * v7++);
        V_LOCK();
        logfmt_raw((char *)v42, 0x1000u, 0, "after add pool, pool->pool_no = %d, pool->rpc_url = %s", *v8, v8[2]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/pool.c",
          127,
          "pool_change_function",
          20,
          708,
          20,
          v42);
      }
      while ( total_pools > v7 );
    }
    if ( v39 > 0 )
    {
      v9 = (int **)v41;
      v10 = (char *)&stratum_thr_info;
      do
      {
        v11 = *((_DWORD *)v10 + 1);
        v12 = *(int **)pools;
        if ( v11 )
        {
          pthread_cancel(v11);
          *((_DWORD *)v10 + 1) = 0;
        }
        v13 = (char *)*((_DWORD *)v10 + 11);
        if ( v13 )
        {
          tq_free(v13);
          *((_DWORD *)v10 + 11) = 0;
        }
        pthread_mutex_lock((pthread_mutex_t *)(v12 + 496));
        *((_BYTE *)v12 + 2076) = 0;
        pthread_mutex_unlock((pthread_mutex_t *)(v12 + 496));
        pthread_mutex_lock((pthread_mutex_t *)(v12 + 496));
        *((_BYTE *)v12 + 2064) = 1;
        pthread_mutex_unlock((pthread_mutex_t *)(v12 + 496));
        v14 = total_pools;
        v15 = total_pools - 1;
        --dword_165460;
        --dword_16545C;
        --dword_165458;
        if ( total_pools > 0 )
        {
          v16 = (int *)pools;
          v17 = pools + 4 * total_pools;
          do
          {
            v19 = *v16++;
            v18 = v19;
            v20 = *(_DWORD *)(v19 + 4);
            if ( v20 > v12[1] )
              *(_DWORD *)(v18 + 4) = v20 - 1;
          }
          while ( (int *)v17 != v16 );
        }
        v21 = *v12;
        if ( v15 > *v12 )
        {
          v22 = (_DWORD *)(pools + 4 * v21);
          do
          {
            v23 = (_DWORD *)v22[1];
            *v22++ = v23;
            *v23 = v21++;
          }
          while ( v21 != v15 );
        }
        *v9++ = v12;
        *v12 = v14;
        v10 += 48;
        total_pools = v14 - 1;
      }
      while ( v9 != &v41[v39] );
    }
    v42[0] = 0;
    all_created_runtime = (int *)get_all_created_runtime(v42);
    if ( v42[0] > 0 )
    {
      v25 = &all_created_runtime[v42[0]];
      do
      {
        v26 = *all_created_runtime++;
        v27 = v26 + 335;
        v28 = v26 + 367;
        do
          *(_BYTE *)++v27 = 1;
        while ( v28 != v27 );
      }
      while ( v25 != all_created_runtime );
    }
    V_LOCK();
    logfmt_raw((char *)v42, 0x1000u, 0, "total_pools after removed = %d", total_pools);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      733,
      20,
      v42);
    if ( total_pools > 0 )
    {
      v29 = 0;
      do
      {
        v30 = *(_DWORD **)(pools + 4 * v29++);
        V_LOCK();
        logfmt_raw((char *)v42, 0x1000u, 0, "after reload pool, pool->pool_no = %d, pool->rpc_url = %s", *v30, v30[2]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/pool.c",
          127,
          "pool_change_function",
          20,
          736,
          20,
          v42);
      }
      while ( total_pools > v29 );
    }
    v31 = 0;
    create_pool_stratum_threads();
    do
    {
      ++v31;
      sleep(1u);
      if ( v31 == 8 )
        v32 = 0;
      else
        v32 = ((unsigned __int8)pools_active ^ 1) & 1;
    }
    while ( v32 );
    set_miner_start_time();
    api_flush();
    v33 = (unsigned __int8)pools_active;
    if ( !pools_active )
    {
      V_LOCK();
      logfmt_raw((char *)v42, 0x1000u, v33, "error pool input");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        750,
        100,
        v42);
      if ( total_pools > 0 )
      {
        do
        {
          v38 = *(_DWORD **)(pools + 4 * v33++);
          V_LOCK();
          logfmt_raw((char *)v42, 0x1000u, 0, "pool%d, url = %s, user = %s, pass = %s", *v38, v38[2], v38[3], v38[4]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/pool.c",
            127,
            "pool_change_function",
            20,
            753,
            100,
            v42);
        }
        while ( total_pools > v33 );
      }
    }
  }
  if ( v40 )
  {
    dword_16CF10 = 2;
    pthread_attr_init(&attr);
    v34 = pthread_create((pthread_t *)&dword_16CF14, &attr, (void *(*)(void *))watchpool_thread, &dword_16CF10);
    pthread_attr_destroy(&attr);
    if ( v34 )
    {
      V_LOCK();
      logfmt_raw((char *)v42, 0x1000u, 0, "watchpool thread create failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        763,
        100,
        v42);
      exit(1);
    }
  }
  sleep(0xAu);
  if ( v39 > 0 )
  {
    v35 = (void **)v41;
    do
    {
      v37 = *v35++;
      v36 = v37;
      if ( v37 )
        free(v36);
    }
    while ( &v41[v39] != v35 );
  }
  newthread = 0;
}
