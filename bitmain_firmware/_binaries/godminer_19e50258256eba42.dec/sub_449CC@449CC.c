int *sub_449CC()
{
  pthread_t v0; // r0
  _BYTE v2[4224]; // [sp+1Ch] [bp-10B0h] BYREF
  _DWORD *v3; // [sp+109Ch] [bp-30h]
  _DWORD *v5; // [sp+10A4h] [bp-28h]
  unsigned __int8 *v6; // [sp+10A8h] [bp-24h]
  _DWORD *v7; // [sp+10ACh] [bp-20h]
  _DWORD *v8; // [sp+10B0h] [bp-1Ch]
  int v9; // [sp+10B4h] [bp-18h]
  int v10; // [sp+10B8h] [bp-14h]
  int *v11; // [sp+10BCh] [bp-10h]
  char v12; // [sp+10C3h] [bp-9h]
  int i; // [sp+10C4h] [bp-8h]

  v12 = 0;
  v9 = 0;
  v10 = total_pools;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "pool_change_function");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "pool_change_function",
    20,
    879,
    20,
    v2);
  v0 = pthread_self();
  pthread_detach(v0);
  v11 = &dword_C26B48;
  if ( dword_C26B4C )
  {
    pthread_cancel(v11[1]);
    v11[1] = 0;
    usleep((__useconds_t)&stru_186A0);
    v12 = 1;
  }
  for ( i = 0; i < v10; ++i )
  {
    v3 = *(_DWORD **)(pools + 4 * i);
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "before add pool, pool->pool_no = %d, pool->rpc_url = %s", *v3, v3[3]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      895,
      20,
      v2);
  }
  for ( i = 0; i < dword_5ACE70; ++i )
  {
    set_url(&byte_5AC570[768 * i]);
    set_user(&byte_5AC570[768 * i + 256]);
    set_pass(&byte_5AC570[768 * i + 512]);
  }
  if ( v10 == total_pools )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "Input pool error, try again");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      905,
      100,
      v2);
  }
  else
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "total_pools = %d, need to remove %d pools", total_pools, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      909,
      20,
      v2);
    for ( i = 0; i < total_pools; ++i )
    {
      v5 = *(_DWORD **)(pools + 4 * i);
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "after add pool, pool->pool_no = %d, pool->rpc_url = %s", *v5, v5[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        912,
        20,
        v2);
    }
    for ( i = 0; i < v10; ++i )
    {
      v6 = *(unsigned __int8 **)pools;
      v11 = (int *)((char *)&stratum_thr_info + 48 * i);
      if ( v11[1] )
      {
        pthread_cancel(v11[1]);
        v11[1] = 0;
      }
      if ( v11[11] )
      {
        tq_free((char *)v11[11]);
        v11[11] = 0;
      }
      pool_tclear((int)v6, v6 + 1916, 0);
      pool_tset((int)v6, v6 + 1904, 0);
      --dword_5AC568;
      --dword_5AC564;
      --dword_5AC560;
      sub_4484C((int *)v6);
      *(_DWORD *)&v2[4 * i + 4096] = v6;
    }
    sub_42B94();
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "total_pools after removed = %d", total_pools);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      937,
      20,
      v2);
    for ( i = 0; i < total_pools; ++i )
    {
      v7 = *(_DWORD **)(pools + 4 * i);
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "after reload pool, pool->pool_no = %d, pool->rpc_url = %s", *v7, v7[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        940,
        20,
        v2);
    }
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "reload new pool configuration, check pool connect");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      943,
      40,
      v2);
    sleep(5u);
    if ( byte_5ACE78 )
    {
      create_pool_stratum_threads();
    }
    else if ( check_pools_valid() <= 0 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "no new pools could be valid");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        954,
        40,
        v2);
    }
    do
    {
      sleep(1u);
      ++v9;
    }
    while ( pools_active != 1 && v9 <= 7 );
    set_miner_start_time();
    api_flush();
    if ( pools_active != 1 )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "error pool input");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        968,
        100,
        v2);
      for ( i = 0; i < total_pools; ++i )
      {
        v8 = *(_DWORD **)(pools + 4 * i);
        V_LOCK();
        logfmt_raw(v2, 0x1000u, 0, "pool%d, url = %s, user = %s, pass = %s", *v8, v8[3], v8[4], v8[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "pool_change_function",
          20,
          971,
          100,
          v2);
      }
    }
  }
  if ( v12 )
  {
    v11 = &dword_C26B48;
    dword_C26B48 = 2;
    if ( sub_413C0((int)&dword_C26B48, (void *(*)(void *))watchpool_thread) )
    {
      V_LOCK();
      logfmt_raw(v2, 0x1000u, 0, "watchpool thread create failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        981,
        100,
        v2);
      exit(1);
    }
  }
  for ( i = 0; i < v10; ++i )
  {
    if ( *(_DWORD *)&v2[4 * i + 4096] )
      pool_tset(*(_DWORD *)&v2[4 * i + 4096], (unsigned __int8 *)(*(_DWORD *)&v2[4 * i + 4096] + 1904), 1);
  }
  sleep(0xAu);
  for ( i = 0; i < v10; ++i )
  {
    pool_tset(*(_DWORD *)&v2[4 * i + 4096], (unsigned __int8 *)(*(_DWORD *)&v2[4 * i + 4096] + 1904), 1);
    if ( *(_DWORD *)&v2[4 * i + 4096] )
      free(*(void **)&v2[4 * i + 4096]);
  }
  dword_5ACE74 = 0;
  return &dword_5ACE74;
}
