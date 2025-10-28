_DWORD *print_summary()
{
  double v0; // d0
  double v1; // r0
  int v2; // r1
  double v3; // d8
  double v4; // r0
  int v5; // r1
  double v6; // d8
  double v7; // r0
  _DWORD *result; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _BYTE v12[56]; // [sp+44h] [bp-20B8h] BYREF
  char v13[56]; // [sp+1044h] [bp-10B8h] BYREF
  int v14; // [sp+2044h] [bp-B8h] BYREF
  char v15[24]; // [sp+2048h] [bp-B4h] BYREF
  float v16; // [sp+2060h] [bp-9Ch]
  int v17; // [sp+2078h] [bp-84h]
  int v18; // [sp+207Ch] [bp-80h]
  int v19; // [sp+2084h] [bp-78h]
  int v20; // [sp+2088h] [bp-74h]
  _DWORD *v21; // [sp+208Ch] [bp-70h]
  int v22; // [sp+2090h] [bp-6Ch]
  int j; // [sp+2094h] [bp-68h]
  int k; // [sp+2098h] [bp-64h]
  int m; // [sp+209Ch] [bp-60h]
  double v26; // [sp+20A0h] [bp-5Ch]
  double v27; // [sp+20A8h] [bp-54h]
  __int64 v28; // [sp+20B0h] [bp-4Ch]
  double v29; // [sp+20B8h] [bp-44h]
  int v30; // [sp+20C4h] [bp-38h]
  double v31; // [sp+20C8h] [bp-34h]
  int i; // [sp+20D0h] [bp-2Ch]
  int v33; // [sp+20D4h] [bp-28h]

  read_system_status_from_monitor((int)v15);
  v26 = v16 / 1000.0 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  v27 = v0;
  LODWORD(v28) = (int)v0 / 3600;
  HIDWORD(v28) = (int)v0 % 3600 / 60;
  v30 = (int)v0 % 60;
  LODWORD(v1) = sub_345484(total_accepted);
  v29 = v1 / v27 * 60.0;
  v31 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v27 * 60.0;
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2652,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", v28, v30);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2653,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v26);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2654,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_C26AC4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2655,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2656,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Solved blocks: %d", dword_5AC220);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2657,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Share submissions: %lld", total_accepted + total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2658,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2659,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2660,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2661,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2662,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Total Hardware errors %llu", v17, v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2663,
    80,
    v12);
  if ( total_accepted || total_rejected )
  {
    V_LOCK();
    LODWORD(v3) = sub_345484(100 * total_rejected);
    HIDWORD(v3) = v2;
    LODWORD(v4) = sub_345484(total_accepted + total_rejected);
    logfmt_raw(v12, 0x1000u, 0, "Reject ratio: %.1f%%", v3 / v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "print_summary",
      13,
      2666,
      80,
      v12);
  }
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v29);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2668,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v31);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2669,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_C26A84);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2670,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2671,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2672,
    80,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2673,
    80,
    v12);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "print_summary",
      13,
      2677,
      80,
      v12);
    for ( i = 0; i < total_pools; ++i )
    {
      v33 = *(_DWORD *)(pools + 4 * i);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v33 + 12));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2682,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "User: %s", *(_DWORD *)(v33 + 16));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2683,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v33 + 1928) + *(_QWORD *)(v33 + 1936));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2684,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v33 + 1928), *(_DWORD *)(v33 + 1932));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2685,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v33 + 1936), *(_DWORD *)(v33 + 1940));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2686,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Accepted difficulty shares: %1.f", *(_DWORD *)(v33 + 1960), *(_DWORD *)(v33 + 1964));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2687,
        80,
        v12);
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Rejected difficulty shares: %1.f", *(_DWORD *)(v33 + 1968), *(_DWORD *)(v33 + 1972));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "print_summary",
        13,
        2688,
        80,
        v12);
      if ( *(_QWORD *)(v33 + 1928) || *(_QWORD *)(v33 + 1936) )
      {
        V_LOCK();
        LODWORD(v6) = sub_345484(100LL * *(_QWORD *)(v33 + 1936));
        HIDWORD(v6) = v5;
        LODWORD(v7) = sub_345484(*(_QWORD *)(v33 + 1928) + *(_QWORD *)(v33 + 1936));
        logfmt_raw(v12, 0x1000u, 0, "Reject ratio: %.1f%%", v6 / v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "print_summary",
          13,
          2691,
          80,
          v12);
      }
    }
  }
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "print_summary",
    13,
    2696,
    80,
    v12);
  v14 = 0;
  result = get_all_created_runtime(&v14);
  v21 = result;
  v22 = 0;
  for ( j = 0; j < v14; ++j )
  {
    v22 = snprintf(
            v13,
            0x1000u,
            "chain %d device %d wc %llu nc %llu detail: ",
            *(_DWORD *)(v21[j] + 272),
            *(_DWORD *)(v21[j] + 264),
            *(_QWORD *)(v21[j] + 480),
            *(_QWORD *)(v21[j] + 488));
    v20 = *(_DWORD *)(v21[j] + 372);
    for ( k = 0; k < v20; ++k )
    {
      v19 = *(_DWORD *)(v21[j] + 496) + 48 * k;
      v9 = snprintf(&v13[v22], 4096 - v22, "%d:", k + 1);
      v22 += v9;
      for ( m = 0; m <= 5; ++m )
      {
        v10 = snprintf(&v13[v22], 4096 - v22, " %llu", *(_QWORD *)(v19 + 8 * m));
        v22 += v10;
      }
      v11 = snprintf(&v13[v22], 4096 - v22, " /");
      v22 += v11;
    }
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s", v13);
    V_UNLOCK();
    result = (_DWORD *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bu"
                         "ild/godminer-origin_godminer-new/api_new.c",
                         137,
                         "print_summary",
                         13,
                         2716,
                         80,
                         v12);
  }
  return result;
}
