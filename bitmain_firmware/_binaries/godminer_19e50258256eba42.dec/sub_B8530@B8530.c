__int64 sub_B8530()
{
  int (**v0)(); // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _QWORD *v8; // r4
  int (**v9)(); // r0
  int v10; // r0
  int v11; // r0
  char v13[68]; // [sp+20h] [bp-31C4h] BYREF
  char v14[24]; // [sp+1020h] [bp-21C4h] BYREF
  char v15[44]; // [sp+1038h] [bp-21ACh] BYREF
  char v16[32]; // [sp+2038h] [bp-11ACh] BYREF
  char v17[12]; // [sp+2058h] [bp-118Ch] BYREF
  char v18[44]; // [sp+2078h] [bp-116Ch] BYREF
  _BYTE v19[20]; // [sp+3078h] [bp-16Ch] BYREF
  int v20; // [sp+30A8h] [bp-13Ch]
  int v21; // [sp+30ACh] [bp-138h]
  _BYTE v22[8]; // [sp+30B0h] [bp-134h] BYREF
  int v23; // [sp+30F0h] [bp-F4h]
  const char *v24; // [sp+30F4h] [bp-F0h]
  __int64 v25; // [sp+3100h] [bp-E4h]
  int v26; // [sp+318Ch] [bp-58h] BYREF
  int v27; // [sp+3190h] [bp-54h]
  int v28; // [sp+3194h] [bp-50h]
  __int16 v29; // [sp+3198h] [bp-4Ch]
  __int16 v30; // [sp+319Ah] [bp-4Ah]
  int v31; // [sp+319Ch] [bp-48h]
  int v32; // [sp+31A0h] [bp-44h]
  int v33; // [sp+31A4h] [bp-40h]
  _DWORD *all_created_runtime; // [sp+31A8h] [bp-3Ch]
  int v35; // [sp+31ACh] [bp-38h]
  int kk; // [sp+31B0h] [bp-34h]
  int jj; // [sp+31B4h] [bp-30h]
  int ii; // [sp+31B8h] [bp-2Ch]
  int n; // [sp+31BCh] [bp-28h]
  int m; // [sp+31C0h] [bp-24h]
  int v41; // [sp+31C4h] [bp-20h]
  int k; // [sp+31C8h] [bp-1Ch]
  int j; // [sp+31CCh] [bp-18h]
  int i; // [sp+31D0h] [bp-14h]
  int v45; // [sp+31D4h] [bp-10h]

  v26 = 0;
  v35 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v26);
  v45 = 0;
  read_system_status_from_monitor((int)v19);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v35 + 72) + 16), v17);
  format_hashrate_string(*(const char **)(*(_DWORD *)(v35 + 72) + 16), v16);
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "total avg hashrate %s 2min avg hashrate %s hw %llu", v17, v16, v20, v21);
  V_UNLOCK();
  zlog(
    g_hash_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/miner_monitor.c",
    168,
    "task_applog_printer",
    19,
    270,
    40,
    v13);
  for ( i = 0; i < v26; ++i )
  {
    v30 = 0;
    v29 = 0;
    read_status_from_monitor(v22, all_created_runtime[i]);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v35 + 72) + 16), v17);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v35 + 72) + 16), v16);
    v0 = dev_ctrl();
    v1 = ((int (__fastcall *)(_DWORD))v0[15])(*(_DWORD *)(all_created_runtime[i] + 264));
    v45 = snprintf(
            v18,
            0x1000u,
            "chain %d device %d alive chip count %d avg hashrate %s 30min avg hashrate %s hw %llu\n",
            v1,
            *(_DWORD *)(all_created_runtime[i] + 264),
            v23,
            v17,
            v16,
            v25);
    v2 = snprintf(
           &v18[v45],
           4096 - v45,
           "wc %llu nc %llu chip status str %s detail:\n",
           *(_QWORD *)(all_created_runtime[i] + 480),
           *(_QWORD *)(all_created_runtime[i] + 488),
           v24);
    v45 += v2;
    v28 = *(_DWORD *)(all_created_runtime[i] + 372);
    for ( j = 0; j < v28; ++j )
    {
      v27 = *(_DWORD *)(all_created_runtime[i] + 496) + 48 * j;
      v3 = snprintf(&v18[v45], 4096 - v45, "%d:", j + 1);
      v45 += v3;
      for ( k = 0; k <= 5; ++k )
      {
        v4 = snprintf(&v18[v45], 4096 - v45, " %llu", *(_QWORD *)(v27 + 8 * k));
        v45 += v4;
      }
      v5 = snprintf(&v18[v45], 4096 - v45, " /");
      v45 += v5;
    }
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s", v18);
    V_UNLOCK();
    zlog(
      g_hash_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_monitor.c",
      168,
      "task_applog_printer",
      19,
      293,
      40,
      v13);
  }
  v41 = 0;
  v6 = snprintf(v15, 0x1000u, "debug:");
  v41 += v6;
  for ( m = 0; m < v26; ++m )
  {
    v33 = *(_DWORD *)(all_created_runtime[m] + 372);
    for ( n = 0; n < v33; ++n )
    {
      v31 = *(_DWORD *)(all_created_runtime[m] + 496) + 48 * n;
      chip_detail_last[6 * m + n] = *(_QWORD *)(v31 + 8);
      v7 = snprintf(&v15[v41], 4096 - v41, " %llu", chip_detail_last[6 * m + n]);
      v41 += v7;
    }
    for ( ii = 0; ii < v33; ++ii )
    {
      v32 = *(_DWORD *)(all_created_runtime[m] + 496) + 48 * ii;
      for ( jj = 0; jj <= 5; ++jj )
      {
        if ( jj == 1 )
        {
          v8 = (_QWORD *)(v32 + 8);
          v9 = dev_ctrl();
          v10 = ((int (__fastcall *)(_DWORD))v9[15])(*(_DWORD *)(all_created_runtime[m] + 264));
          nonce_count[6 * v10 + ii] = *v8;
        }
        *(_QWORD *)(v32 + 8 * jj) = 0;
      }
      v13[0] = 0;
      for ( kk = 0; kk <= 71; ++kk )
      {
        sprintf(v14, "%2d", core_nonce[432 * m + 72 * ii + kk]);
        strcat(v13, v14);
        if ( kk <= 70 )
          strcat(v13, " ");
      }
    }
    v11 = snprintf(&v15[v41], 4096 - v41, " ");
    v41 += v11;
  }
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "\n%s", v15);
  V_UNLOCK();
  return zlog(
           g_hash_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/miner_util/miner_monitor/miner_monitor.c",
           168,
           "task_applog_printer",
           19,
           371,
           40,
           v13);
}
