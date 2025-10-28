int check_pool_connect()
{
  int v1; // r4
  int v2; // r11
  bool v3; // zf
  bool v4; // r0
  int v5; // r5
  int i; // r7
  int v7; // r4
  char *s1; // [sp+14h] [bp-1008h]
  char v9[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( check_pools_valid() > 0 )
    return 0;
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "No servers were found that could be used to get work from.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "check_pool_connect",
    18,
    202,
    100,
    v9);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "Please check the details from the list below of the servers you have input.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "check_pool_connect",
    18,
    203,
    100,
    v9);
  V_LOCK();
  logfmt_raw(
    v9,
    0x1000u,
    0,
    "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "check_pool_connect",
    18,
    204,
    100,
    v9);
  if ( total_pools > 0 )
  {
    v1 = 0;
    do
    {
      V_LOCK();
      logfmt_raw(
        v9,
        0x1000u,
        0,
        "Pool: %d  URL: %s\tUser: %s  Password: %s",
        **(_DWORD **)(pools + 4 * v1),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v1) + 12),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v1) + 16),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * v1) + 20));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/check_pool.c",
        154,
        "check_pool_connect",
        18,
        208,
        80,
        v9);
      v2 = *(_DWORD *)(pools + 4 * v1);
      if ( *(_DWORD *)(v2 + 20) )
      {
        s1 = *(char **)(v2 + 16);
        if ( s1 )
        {
          v3 = strstr(*(const char **)(v2 + 20), "stats") == 0;
          v4 = 1;
          if ( v3 )
            v4 = strcmp(s1, "benchmark") == 0;
          *(_BYTE *)(v2 + 1648) = v4;
        }
      }
      ++v1;
    }
    while ( total_pools > v1 );
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "No servers could be used!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "check_pool_connect",
    18,
    212,
    100,
    v9);
  if ( !pools_active )
  {
    v5 = 60;
    for ( i = 1; ; v5 = 60 * i )
    {
      v7 = 0;
      do
      {
        ++v7;
        sleep(1u);
      }
      while ( !pools_active && v7 != v5 );
      if ( i >= 19 )
        i = 19;
      check_pools_valid();
      ++i;
      if ( pools_active )
        break;
    }
  }
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "Pool is activing.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "check_pool_connect",
    18,
    225,
    80,
    v9);
  return 0;
}
