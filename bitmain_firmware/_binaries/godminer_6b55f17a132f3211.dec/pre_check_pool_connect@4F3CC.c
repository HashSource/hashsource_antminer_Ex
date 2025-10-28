int pre_check_pool_connect()
{
  int v0; // r0
  int v1; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r0
  const char *v12; // r6
  bool v13; // zf
  int v14; // r0
  unsigned int i; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  _BYTE v19[4100]; // [sp+18h] [bp-1004h] BYREF

  sub_4E990();
  v0 = pre_pool_stratum_connect();
  if ( v0 )
  {
    V_LOCK(v0);
    v3 = logfmt_raw((int)v19, 0x1000u);
    V_UNLOCK(v3);
    v0 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/miner_util/check_pool.c",
           150,
           "pre_check_pool_connect",
           22,
           198,
           100,
           v19);
  }
  v1 = (unsigned __int8)pools_active;
  if ( pools_active )
    return 0;
  V_LOCK(v0);
  v4 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/miner_util/check_pool.c",
         150,
         "pre_check_pool_connect",
         22,
         202,
         100,
         v19);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v6);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/miner_util/check_pool.c",
         150,
         "pre_check_pool_connect",
         22,
         203,
         100,
         v19);
  V_LOCK(v7);
  v8 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v8);
  v9 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/miner_util/check_pool.c",
         150,
         "pre_check_pool_connect",
         22,
         204,
         100,
         v19);
  if ( total_pools > 0 )
  {
    do
    {
      v10 = *(_DWORD *)(pools + 4 * v1);
      V_LOCK(v9);
      v11 = logfmt_raw((int)v19, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/check_pool.c",
        150,
        "pre_check_pool_connect",
        22,
        210,
        80,
        v19);
      v9 = *(_DWORD *)(v10 + 16);
      if ( v9 )
      {
        v12 = *(const char **)(v10 + 12);
        if ( v12 )
        {
          v13 = strstr((const char *)v9, "stats") == 0;
          v9 = 1;
          if ( v13 )
            v9 = strcmp(v12, "benchmark") == 0;
          *(_BYTE *)(v10 + 1640) = v9;
        }
      }
      ++v1;
    }
    while ( total_pools > v1 );
  }
  V_LOCK(v9);
  v14 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v14);
  for ( i = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/check_pool.c",
              150,
              "pre_check_pool_connect",
              22,
              216,
              100,
              v19); !pools_active; i = sleep(1u) )
    pre_pool_stratum_connect();
  V_LOCK(i);
  v16 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/check_pool.c",
          150,
          "pre_check_pool_connect",
          22,
          222,
          60,
          v19);
  V_LOCK(v17);
  v18 = logfmt_raw((int)v19, 0x1000u);
  V_UNLOCK(v18);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/check_pool.c",
    150,
    "pre_check_pool_connect",
    22,
    223,
    60,
    v19);
  return 35;
}
