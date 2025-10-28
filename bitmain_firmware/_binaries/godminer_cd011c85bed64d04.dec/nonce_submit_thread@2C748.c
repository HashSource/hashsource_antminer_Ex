void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r7
  char *v2; // r4
  int v3; // r0
  int v4; // r0
  pthread_t v5; // r0
  int v6; // r6
  int v7; // r4
  const char *v8; // r0
  int v9; // r0
  double v10; // d7
  double v11; // d5
  double v12; // d7
  __int64 v13; // kr08_8
  const void *src; // [sp+10h] [bp-194Ch]
  int srca; // [sp+10h] [bp-194Ch]
  size_t n; // [sp+1Ch] [bp-1940h]
  _BYTE v17[4]; // [sp+34h] [bp-1928h] BYREF
  _QWORD v18[127]; // [sp+38h] [bp-1924h] BYREF
  void *v19[328]; // [sp+438h] [bp-1524h] BYREF
  _BYTE v20[4100]; // [sp+958h] [bp-1004h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(v17);
  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK(v3);
  syscall(224);
  v4 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "nonce_submit_thread",
    19,
    332,
    60,
    v20);
  prctl(15, v2);
  v5 = pthread_self();
  pthread_detach(v5);
  v6 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v6 + 32))(v6, v18);
      if ( v18[0] < (unsigned __int64)total_pools )
      {
        v7 = *(_DWORD *)(pools + 4 * LODWORD(v18[0]));
        if ( v7 )
          break;
      }
      V_LOCK(total_pools);
      v9 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "nonce_submit_thread",
        19,
        347,
        80,
        v20);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v7 + 1760));
    if ( v19[288] )
    {
      free(v19[288]);
      v19[288] = 0;
    }
    if ( v19[290] )
    {
      free(v19[290]);
      v19[290] = 0;
    }
    memcpy(v19, (const void *)(v7 + 448), sizeof(v19));
    v8 = *(const char **)(v7 + 1600);
    if ( v8 )
      v19[288] = _strdup(v8);
    src = *(const void **)(v7 + 1608);
    if ( src )
    {
      n = *(_DWORD *)(v7 + 1604);
      v19[290] = malloc(n);
      memcpy(v19[290], src, n);
    }
    srca = (*(int (__fastcall **)(int, void **, _QWORD *))(v0 + 40))(v7, v19, v18);
    pthread_mutex_unlock((pthread_mutex_t *)(v7 + 1760));
    if ( srca == 1 )
    {
      v10 = *(double *)(v7 + 1976);
      v11 = total_diff_stale + v10;
      v12 = *(double *)(v7 + 1984) + v10;
      v13 = *(_QWORD *)&total_stale + 1LL;
      ++*(_DWORD *)(v7 + 1808);
      total_stale = v13;
      total_diff_stale = v11;
      *(double *)(v7 + 1984) = v12;
      dword_16D864 = HIDWORD(v13);
    }
    else
    {
      workio_submit_work((int)v19, v7);
    }
  }
}
