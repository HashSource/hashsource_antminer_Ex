int __fastcall sub_43E34(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  _DWORD *v5; // r0
  void *v6; // r0
  char *v7; // r6
  size_t v8; // r0
  char *v9; // r8
  int v10; // t1
  int v11; // r9
  unsigned int v12; // r7
  int v13; // r6
  int v14; // r2
  unsigned __int8 *v15; // r6
  int v17; // [sp+4h] [bp-1058h]
  int v18; // [sp+Ch] [bp-1050h]
  unsigned __int8 *v20; // [sp+34h] [bp-1028h] BYREF
  _BYTE v21[31]; // [sp+38h] [bp-1024h] BYREF
  char v22; // [sp+57h] [bp-1005h] BYREF
  char v23[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  json_number_value((int)v5);
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      840,
      100,
      v23);
    return 0;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    (*(void (__fastcall **)(int))(a1 + 64))(a2 + 1488);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "%s diff from pool: %lf", "stratum_set_diff_or_target_eth_2282", v17, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      847,
      40,
      v23);
    V_LOCK();
    logfmt_raw(
      v23,
      0x1000u,
      0,
      "%s target:%08x %08x %08x %08x %08x %08x %08x %08x ",
      "stratum_set_diff_or_target_eth_2282",
      *(_DWORD *)(a2 + 1488),
      *(_DWORD *)(a2 + 1492),
      *(_DWORD *)(a2 + 1496),
      *(_DWORD *)(a2 + 1500),
      *(_DWORD *)(a2 + 1504),
      *(_DWORD *)(a2 + 1508),
      *(_DWORD *)(a2 + 1512),
      *(_DWORD *)(a2 + 1516));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      848,
      40,
      v23);
    V_LOCK();
    v6 = abin2hex(a2 + 1488, 32);
    logfmt_raw(v23, 0x1000u, 0, "%s target:%s", "stratum_set_diff_or_target_eth_2282", v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      850,
      40,
      v23);
    v20 = (unsigned __int8 *)abin2hex(a2 + 1488, 32);
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, "set diff %f, generated target is %s", v3, v20);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      856,
      40,
      v23);
    v7 = (char *)&v20 + 3;
    v8 = strlen((const char *)v20);
    hex2bin((int)v21, v20, v8 >> 1);
    V_LOCK();
    v9 = v21;
    logfmt_raw(v23, 0x1000u, 0, "expect_target: ");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      865,
      60,
      v23);
    do
    {
      V_LOCK();
      v10 = *++v7;
      logfmt_raw(v23, 0x1000u, 0, "%02x", v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        177,
        "stratum_set_diff_or_target_eth_2282",
        35,
        867,
        60,
        v23);
    }
    while ( v7 != &v22 );
    v11 = 0;
    v12 = 0;
LABEL_5:
    v13 = 7;
    while ( 1 )
    {
      v14 = *v9 >> v13--;
      if ( (v14 & 1) != 0 )
        break;
      v12 = (unsigned __int8)(v12 + 1);
      V_LOCK();
      logfmt_raw(v23, 0x1000u, 0, "expect_target[%d]: %02x, expect_diff: %d", v11, *v9, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        177,
        "stratum_set_diff_or_target_eth_2282",
        35,
        878,
        60,
        v23);
      if ( v13 == -1 )
      {
        ++v11;
        ++v9;
        if ( v11 != 32 )
          goto LABEL_5;
        break;
      }
    }
    *(double *)(a2 + 1520) = (double)v12;
    *(double *)(a2 + 448) = (double)v12;
    *(double *)(a2 + 1808) = (double)v12;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    v15 = v20;
    logfmt_raw(
      v23,
      0x1000u,
      0,
      "set diff %f, generated target is %s, targetdiff %lf",
      v3,
      v20,
      v18,
      *(_DWORD *)(a2 + 1520),
      *(_DWORD *)(a2 + 1524));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_set_diff_or_target_eth_2282",
      35,
      889,
      40,
      v23);
    free(v15);
    return 1;
  }
}
