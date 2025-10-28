char *print_summary()
{
  double v0; // d0
  double v1; // d6
  double v2; // d7
  double v3; // d8
  bool v4; // zf
  char *v5; // r3
  double v6; // d11
  int v7; // r8
  double v8; // r0
  double v9; // d10
  double v10; // d9
  char *result; // r0
  _DWORD *v12; // r12
  int v13; // r0
  int v14; // r3
  int v15; // r6
  int v16; // r8
  int v17; // r5
  __int64 *v18; // r4
  __int64 *v19; // r5
  int v20; // r9
  __int64 v21; // t1
  __int64 v22; // r4
  int v23; // r1
  double v24; // d8
  double v25; // r0
  int v26; // r8
  unsigned int *v27; // r4
  unsigned int v28; // r5
  unsigned int v29; // r6
  int v30; // r1
  double v31; // d8
  double v32; // r0
  int v33; // [sp+4h] [bp-2068h]
  int v34; // [sp+18h] [bp-2054h]
  int v35; // [sp+18h] [bp-2054h]
  int v36; // [sp+1Ch] [bp-2050h]
  char *v37; // [sp+1Ch] [bp-2050h]
  int v38; // [sp+1Ch] [bp-2050h]
  int v39; // [sp+20h] [bp-204Ch]
  char *v40; // [sp+24h] [bp-2048h]
  int i; // [sp+30h] [bp-203Ch]
  int v42; // [sp+3Ch] [bp-2030h] BYREF
  int v43; // [sp+40h] [bp-202Ch] BYREF
  float v44; // [sp+54h] [bp-2018h]
  int v45; // [sp+60h] [bp-200Ch]
  int v46; // [sp+64h] [bp-2008h]
  char v47[4056]; // [sp+68h] [bp-2004h] BYREF
  char v48[4100]; // [sp+1068h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)&v43);
  *(float *)&v2 = v44;
  v4 = opt_algo == 3;
  if ( opt_algo != 3 )
    v4 = opt_algo == 0;
  LOWORD(v5) = (unsigned __int16)&dword_164FC8;
  if ( !v4 )
    v1 = 1000.0;
  HIWORD(v5) = (unsigned int)&dword_164FC8 >> 16;
  if ( v4 )
    v3 = v44;
  else
    v2 = v44;
  v40 = v5;
  if ( !v4 )
    v3 = v2 / v1 / v1 / v1;
  if ( v5[32] )
  {
    sub_25C98();
    v6 = v0;
    v36 = (int)v0 / 3600;
    v7 = (int)v0 % 60;
    v34 = (int)v0 % 3600 / 60;
  }
  else
  {
    v6 = 0.0;
    v7 = 0;
    v36 = 0;
    v34 = 0;
  }
  LODWORD(v8) = sub_12D09C(total_accepted);
  v9 = v8 / v6 * 60.0;
  v10 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v6 * 60.0;
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Summary of runtime statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1753,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Runtime: %d hrs : %d mins : %d secs", v36, v34, v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1754,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Average hashrate: %.1f Ghash/s", v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1755,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Total got job from pools: %lld", total_getworks, dword_16C87C);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1756,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Total generated local work  %d", local_work);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1757,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Solved blocks: %d", *((_DWORD *)v40 + 9));
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1758,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Share submissions: %lld", total_accepted + total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1759,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Accepted shares: %lld", total_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1760,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Rejected shares: %lld", total_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1761,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1762,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Rejected difficulty shares: %1.f", total_diff_rejected);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1763,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Total Hardware errors %llu", v45, v46);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1764,
    80,
    v48);
  if ( total_accepted || total_rejected )
  {
    V_LOCK();
    v22 = total_rejected;
    LODWORD(v24) = sub_12D09C(100 * total_rejected);
    HIDWORD(v24) = v23;
    LODWORD(v25) = sub_12D09C(v22 + total_accepted);
    logfmt_raw(v48, 0x1000u, 0, "Reject ratio: %.1f%%", v24 / v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1767,
      80,
      v48);
  }
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Utility (accepted shares / min): %.2f/min", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1769,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Work Utility (diff1 shares solved / min): %.2f/min", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1770,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Stale submissions discarded due to new blocks: %lld", total_stale, dword_16C844);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1771,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Unable to get work from server occasions: %d", total_go);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1772,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Submitting work remotely delay occasions: %d", total_ro);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1773,
    80,
    v48);
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "New blocks detected on network: %d", new_blocks);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1774,
    80,
    v48);
  if ( total_pools > 0 )
  {
    V_LOCK();
    logfmt_raw(v48, 0x1000u, 0, "Summary of pool statistics:");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "print_summary",
      13,
      1778,
      80,
      v48);
    if ( total_pools > 0 )
    {
      v38 = 0;
      do
      {
        v26 = *(_DWORD *)(pools + 4 * v38);
        V_LOCK();
        v27 = (unsigned int *)(v26 + 2096);
        logfmt_raw(v48, 0x1000u, 0, "Pool: %s", *(_DWORD *)(v26 + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1783,
          80,
          v48);
        V_LOCK();
        logfmt_raw(v48, 0x1000u, 0, "User: %s", *(_DWORD *)(v26 + 12));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1784,
          80,
          v48);
        V_LOCK();
        logfmt_raw(v48, 0x1000u, 0, "Share submissions: %lld", *(_QWORD *)(v26 + 2088) + *(_QWORD *)(v26 + 2096));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1785,
          80,
          v48);
        V_LOCK();
        logfmt_raw(v48, 0x1000u, 0, "Accepted shares: %lld", *(_DWORD *)(v26 + 2088), *(_DWORD *)(v26 + 2092));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1786,
          80,
          v48);
        V_LOCK();
        logfmt_raw(v48, 0x1000u, 0, "Rejected shares: %lld", *(_DWORD *)(v26 + 2096), *(_DWORD *)(v26 + 2100));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1787,
          80,
          v48);
        V_LOCK();
        v26 += 2128;
        logfmt_raw(v48, 0x1000u, 0, "Accepted difficulty shares: %1.f", *(_DWORD *)(v26 - 8), *(_DWORD *)(v26 - 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1788,
          80,
          v48);
        V_LOCK();
        logfmt_raw(v48, 0x1000u, 0, "Rejected difficulty shares: %1.f", *(_DWORD *)v26, *(_DWORD *)(v26 + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1789,
          80,
          v48);
        if ( *((_QWORD *)v27 - 1) || *(_QWORD *)v27 )
        {
          V_LOCK();
          v28 = *v27;
          v29 = v27[1];
          LODWORD(v31) = sub_12D09C(100LL * *(_QWORD *)v27);
          HIDWORD(v31) = v30;
          LODWORD(v32) = sub_12D09C(__PAIR64__(v29, v28) + *((_QWORD *)v27 - 1));
          logfmt_raw(v48, 0x1000u, 0, "Reject ratio: %.1f%%", v31 / v32);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "print_summary",
            13,
            1792,
            80,
            v48);
        }
        ++v38;
      }
      while ( total_pools > v38 );
    }
  }
  V_LOCK();
  logfmt_raw(v48, 0x1000u, 0, "Summary of per device statistics:");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1797,
    80,
    v48);
  v42 = 0;
  result = (char *)get_all_created_runtime(&v42);
  if ( v42 > 0 )
  {
    v37 = result - 4;
    for ( i = 0; i < v42; ++i )
    {
      v12 = (_DWORD *)*((_DWORD *)v37 + 1);
      v37 += 4;
      v13 = snprintf(
              v47,
              0x1000u,
              "chain %d device %d wc %llu nc %llu detail: ",
              v12[35],
              v12[34],
              v33,
              v12[62],
              v12[63],
              v12[64],
              v12[65]);
      v14 = *(_DWORD *)v37;
      v15 = v13;
      v39 = *(_DWORD *)(*(_DWORD *)v37 + 196);
      if ( v39 > 0 )
      {
        v16 = 0;
        v35 = 0;
        while ( 1 )
        {
          v17 = *(_DWORD *)(v14 + 264);
          v18 = (__int64 *)(v17 + v16);
          v16 += 48;
          v19 = (__int64 *)(v17 + v16);
          ++v35;
          v20 = snprintf(&v47[v15], 4096 - v15, "%d:") + v15;
          do
          {
            v21 = *v18++;
            v20 += snprintf(&v47[v20], 4096 - v20, " %llu", v21);
          }
          while ( v19 != v18 );
          v15 = v20 + 2;
          snprintf(&v47[v20], 4096 - v20, " /");
          if ( v35 == v39 )
            break;
          v14 = *(_DWORD *)v37;
        }
      }
      V_LOCK();
      logfmt_raw(v48, 0x1000u, 0, "%s", v47);
      V_UNLOCK();
      result = (char *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/bui"
                         "ld/godminer-origin_master/api_new.c",
                         130,
                         "print_summary",
                         13,
                         1814,
                         80,
                         v48);
    }
  }
  return result;
}
