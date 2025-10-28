int create_pool_connect()
{
  bool v1; // r3
  _BYTE v3[20]; // [sp+10h] [bp-1014h] BYREF
  int v4; // [sp+1010h] [bp-14h]
  int v5; // [sp+1014h] [bp-10h]
  int v6; // [sp+1018h] [bp-Ch]
  int i; // [sp+101Ch] [bp-8h]

  v5 = 0;
  sub_ACC10();
  if ( create_pool_stratum_threads() )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "stratum thread create failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_pool.c",
      151,
      "create_pool_connect",
      19,
      153,
      100,
      v3);
    return 1;
  }
  else
  {
    v6 = 0;
    do
    {
      sleep(1u);
      ++v6;
    }
    while ( pools_active != 1 && v6 <= 59 );
    if ( pools_active != 1 )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "No servers were found that could be used to get work from.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_pool.c",
        151,
        "create_pool_connect",
        19,
        165,
        100,
        v3);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "Please check the details from the list below of the servers you have input.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_pool.c",
        151,
        "create_pool_connect",
        19,
        166,
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
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_pool.c",
        151,
        "create_pool_connect",
        19,
        167,
        100,
        v3);
      for ( i = 0; i < total_pools; ++i )
      {
        v4 = *(_DWORD *)(pools + 4 * i);
        V_LOCK();
        logfmt_raw(
          v3,
          0x1000u,
          0,
          "Pool: %d  URL: %s\tUser: %s  Password: %s",
          *(_DWORD *)v4,
          *(_DWORD *)(v4 + 12),
          *(_DWORD *)(v4 + 16),
          *(_DWORD *)(v4 + 20));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_pool.c",
          151,
          "create_pool_connect",
          19,
          173,
          80,
          v3);
        if ( *(_DWORD *)(v4 + 20) && *(_DWORD *)(v4 + 16) )
        {
          v1 = strstr(*(const char **)(v4 + 20), "stats") || !strcmp(*(const char **)(v4 + 16), "benchmark");
          *(_BYTE *)(v4 + 1648) = v1;
        }
      }
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "No servers could be used!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_pool.c",
        151,
        "create_pool_connect",
        19,
        179,
        100,
        v3);
      sub_ACB0C();
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "Pool is activing, exiting and restart.");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_pool.c",
        151,
        "create_pool_connect",
        19,
        181,
        80,
        v3);
      return 0;
    }
    else
    {
      return v5;
    }
  }
}
