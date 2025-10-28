void __fastcall sub_2FD6C(int a1)
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
  pthread_mutex_t **v14; // r6
  _DWORD *v15; // r9
  pthread_t v16; // r0
  pthread_mutex_t *v17; // r7
  int v18; // r10
  int v19; // lr
  int *v20; // r2
  int v21; // r12
  int v22; // r1
  int v23; // t1
  signed int v24; // r3
  int lock; // r3
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
  int v38; // r3
  int *v39; // r0
  int v40; // r6
  int v41; // r6
  int v42; // r0
  void **v43; // r6
  void *v44; // r0
  void *v45; // t1
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // [sp+10h] [bp-1094h]
  int v52; // [sp+14h] [bp-1090h]
  _DWORD v53[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v54[1025]; // [sp+A0h] [bp-1004h] BYREF

  v51 = total_pools;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v54, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "pool_change_function",
    20,
    675,
    20,
    v54);
  v2 = pthread_self();
  pthread_detach(v2);
  v3 = dword_16DF34;
  if ( dword_16DF34 )
  {
    v52 = 1;
    pthread_cancel(dword_16DF34);
    dword_16DF34 = 0;
    v3 = usleep((__useconds_t)&stru_1869C.st_value);
  }
  else
  {
    v52 = 0;
  }
  if ( v51 > 0 )
  {
    v4 = 0;
    do
    {
      ++v4;
      V_LOCK(v3);
      v5 = logfmt_raw((int)v54, 0x1000u);
      V_UNLOCK(v5);
      v3 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/pool.c",
             127,
             "pool_change_function",
             20,
             691,
             20,
             v54);
    }
    while ( v51 != v4 );
  }
  if ( dword_166590 > 0 )
  {
    v6 = (char *)&unk_166594;
    v7 = 0;
    do
    {
      v8 = sub_2F10C();
      ++v7;
      sub_2EADC((void **)(v8 + 8), (_BYTE *)(v8 + 24), v6);
      set_user(v6 + 256);
      v9 = v6 + 512;
      v6 += 768;
      v3 = set_pass(v9);
    }
    while ( dword_166590 > v7 );
  }
  if ( total_pools == v51 )
  {
    V_LOCK(v3);
    v49 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v49);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "pool_change_function",
      20,
      701,
      100,
      v54);
  }
  else
  {
    V_LOCK(v3);
    v10 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v10);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/pool.c",
            127,
            "pool_change_function",
            20,
            705,
            20,
            v54);
    if ( total_pools > 0 )
    {
      v12 = 0;
      do
      {
        ++v12;
        V_LOCK(v11);
        v13 = logfmt_raw((int)v54, 0x1000u);
        V_UNLOCK(v13);
        v11 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/pool.c",
                127,
                "pool_change_function",
                20,
                708,
                20,
                v54);
      }
      while ( total_pools > v12 );
    }
    if ( v51 > 0 )
    {
      v14 = (pthread_mutex_t **)v53;
      v15 = &stratum_thr_info;
      do
      {
        v16 = v15[1];
        v17 = *(pthread_mutex_t **)pools;
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
        pthread_mutex_lock(v17 + 83);
        v17[86].__size[20] = 0;
        pthread_mutex_unlock(v17 + 83);
        pthread_mutex_lock(v17 + 83);
        v17[86].__size[8] = 1;
        pthread_mutex_unlock(v17 + 83);
        v18 = total_pools;
        v19 = total_pools - 1;
        --dword_166470;
        --dword_16646C;
        --dword_166468;
        if ( total_pools > 0 )
        {
          v20 = (int *)pools;
          v21 = pools + 4 * total_pools;
          do
          {
            v23 = *v20++;
            v22 = v23;
            v24 = *(_DWORD *)(v23 + 4);
            if ( v24 > (signed int)v17->__count )
              *(_DWORD *)(v22 + 4) = v24 - 1;
          }
          while ( (int *)v21 != v20 );
        }
        lock = v17->__lock;
        if ( v19 > v17->__lock )
        {
          v26 = (_DWORD *)(pools + 4 * lock);
          do
          {
            v27 = (_DWORD *)v26[1];
            *v26++ = v27;
            *v27 = lock++;
          }
          while ( lock != v19 );
        }
        *v14++ = v17;
        v17->__lock = v18;
        v15 += 12;
        total_pools = v18 - 1;
      }
      while ( v14 != &v53[v51] );
    }
    v54[0] = 0;
    all_created_runtime = (int *)get_all_created_runtime(v54);
    if ( v54[0] > 0 )
    {
      v29 = &all_created_runtime[v54[0]];
      do
      {
        v30 = *all_created_runtime++;
        v31 = v30 + 343;
        v32 = v30 + 375;
        do
          *(_BYTE *)++v31 = 1;
        while ( v32 != v31 );
      }
      while ( v29 != all_created_runtime );
    }
    V_LOCK(all_created_runtime);
    v33 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/pool.c",
            127,
            "pool_change_function",
            20,
            733,
            20,
            v54);
    if ( total_pools > 0 )
    {
      v35 = 0;
      do
      {
        ++v35;
        V_LOCK(v34);
        v36 = logfmt_raw((int)v54, 0x1000u);
        V_UNLOCK(v36);
        v34 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/pool.c",
                127,
                "pool_change_function",
                20,
                736,
                20,
                v54);
      }
      while ( total_pools > v35 );
    }
    v37 = 0;
    create_pool_stratum_threads();
    do
    {
      ++v37;
      sleep(1u);
      if ( v37 == 8 )
        v38 = 0;
      else
        v38 = ((unsigned __int8)pools_active ^ 1) & 1;
    }
    while ( v38 );
    set_miner_start_time();
    v39 = api_flush();
    v40 = (unsigned __int8)pools_active;
    if ( !pools_active )
    {
      V_LOCK(v39);
      v46 = logfmt_raw((int)v54, 0x1000u);
      V_UNLOCK(v46);
      v47 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/pool.c",
              127,
              "pool_change_function",
              20,
              750,
              100,
              v54);
      if ( total_pools > 0 )
      {
        do
        {
          ++v40;
          V_LOCK(v47);
          v48 = logfmt_raw((int)v54, 0x1000u);
          V_UNLOCK(v48);
          v47 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/pool.c",
                  127,
                  "pool_change_function",
                  20,
                  753,
                  100,
                  v54);
        }
        while ( total_pools > v40 );
      }
    }
  }
  if ( v52 )
  {
    dword_16DF30 = 2;
    pthread_attr_init(&attr);
    v41 = pthread_create((pthread_t *)&dword_16DF34, &attr, (void *(*)(void *))watchpool_thread, &dword_16DF30);
    v42 = pthread_attr_destroy(&attr);
    if ( v41 )
    {
      V_LOCK(v42);
      v50 = logfmt_raw((int)v54, 0x1000u);
      V_UNLOCK(v50);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
        127,
        "pool_change_function",
        20,
        763,
        100,
        v54);
      exit(1);
    }
  }
  sleep(0xAu);
  if ( v51 > 0 )
  {
    v43 = (void **)v53;
    do
    {
      v45 = *v43++;
      v44 = v45;
      if ( v45 )
        free(v44);
    }
    while ( &v53[v51] != v43 );
  }
  newthread = 0;
}
