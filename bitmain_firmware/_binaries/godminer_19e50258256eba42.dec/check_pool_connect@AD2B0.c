int check_pool_connect()
{
  bool v0; // r1
  int v1; // r3
  _BYTE v3[20]; // [sp+10h] [bp-1014h] BYREF
  int v4; // [sp+1010h] [bp-14h]
  int v5; // [sp+1014h] [bp-10h]
  int v6; // [sp+1018h] [bp-Ch]
  int i; // [sp+101Ch] [bp-8h]

  v6 = 0;
  sub_ACC10();
  if ( check_pools_valid() <= 0 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "No servers were found that could be used to get work from.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      202,
      100,
      v3);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "Please check the details from the list below of the servers you have input.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      203,
      100,
      v3);
    V_LOCK();
    logfmt_raw(
      v3,
      0x1000u,
      0,
      "Most likely you have input the wrong URL, forgotten to add a port, have not set up workers, or the network was disconnected.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      204,
      100,
      v3);
    for ( i = 0; i < total_pools; ++i )
    {
      V_LOCK();
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "Pool: %d  URL: %s\tUser: %s  Password: %s",
        **(_DWORD **)(pools + 4 * i),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * i) + 12),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * i) + 16),
        *(_DWORD *)(*(_DWORD *)(pools + 4 * i) + 20));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_pool.c",
        151,
        "check_pool_connect",
        18,
        208,
        80,
        v3);
      if ( *(_DWORD *)(*(_DWORD *)(pools + 4 * i) + 20) && *(_DWORD *)(*(_DWORD *)(pools + 4 * i) + 16) )
      {
        v0 = strstr(*(const char **)(*(_DWORD *)(pools + 4 * i) + 20), "stats")
          || !strcmp(*(const char **)(*(_DWORD *)(pools + 4 * i) + 16), "benchmark");
        *(_BYTE *)(*(_DWORD *)(pools + 4 * i) + 1648) = v0;
      }
    }
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "No servers could be used!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      212,
      100,
      v3);
    v4 = 1;
    while ( pools_active != 1 )
    {
      v5 = 0;
      while ( pools_active != 1 && v5 < 60 * v4 )
      {
        ++v5;
        sleep(1u);
      }
      v1 = v4 + 1;
      if ( v4 + 1 >= 20 )
        v1 = 20;
      v4 = v1;
      check_pools_valid();
    }
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "Pool is activing.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "check_pool_connect",
      18,
      225,
      80,
      v3);
  }
  return v6;
}
