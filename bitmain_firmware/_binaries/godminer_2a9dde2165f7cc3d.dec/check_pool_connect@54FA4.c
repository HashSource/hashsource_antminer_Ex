int check_pool_connect()
{
  int v0; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r4
  int v9; // r0
  int v10; // r11
  bool v11; // zf
  int v12; // r0
  unsigned int i; // r0
  int v14; // r0
  char *s1; // [sp+14h] [bp-1008h]
  _BYTE v16[4100]; // [sp+18h] [bp-1004h] BYREF

  v0 = check_pools_valid();
  if ( v0 > 0 )
    return 0;
  V_LOCK(v0);
  v2 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v2);
  v3 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/check_pool.c",
         154,
         "check_pool_connect",
         18,
         200,
         100,
         v16);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v4);
  v5 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/check_pool.c",
         154,
         "check_pool_connect",
         18,
         201,
         100,
         v16);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v6);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/check_pool.c",
         154,
         "check_pool_connect",
         18,
         202,
         100,
         v16);
  if ( total_pools > 0 )
  {
    v8 = 0;
    do
    {
      V_LOCK(v7);
      v9 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/check_pool.c",
        154,
        "check_pool_connect",
        18,
        206,
        80,
        v16);
      v10 = *(_DWORD *)(pools + 4 * v8);
      v7 = *(_DWORD *)(v10 + 20);
      if ( v7 )
      {
        s1 = *(char **)(v10 + 16);
        if ( s1 )
        {
          v11 = strstr((const char *)v7, "stats") == 0;
          v7 = 1;
          if ( v11 )
            v7 = strcmp(s1, "benchmark") == 0;
          *(_BYTE *)(v10 + 1648) = v7;
        }
      }
      ++v8;
    }
    while ( total_pools > v8 );
  }
  V_LOCK(v7);
  v12 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v12);
  for ( i = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/check_pool.c",
              154,
              "check_pool_connect",
              18,
              210,
              100,
              v16); !pools_active; i = sleep(1u) )
    ;
  V_LOCK(i);
  v14 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/check_pool.c",
    154,
    "check_pool_connect",
    18,
    213,
    80,
    v16);
  return 0;
}
