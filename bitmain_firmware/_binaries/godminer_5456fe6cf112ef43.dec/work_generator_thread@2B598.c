void __noreturn work_generator_thread()
{
  int v0; // r5
  int all_created_runtime; // r6
  int *v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // t1
  bool v6; // cc
  unsigned int v7; // r8
  int v8; // r11
  char *v9; // r7
  int v10; // r0
  int v11; // r0
  int i; // r0
  int current_pool; // r0
  int v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r6
  int v19; // r9
  int v20; // r2
  time_t v21; // r0
  int (__fastcall *v22)(int, _DWORD *); // r3
  int v23; // t1
  int v24; // r0
  int v25; // r2
  int v26; // lr
  int v27; // r12
  unsigned __int64 v28; // r0
  unsigned __int64 *v29; // r6
  unsigned __int64 v30; // r2
  unsigned __int64 v31; // t1
  bool v32; // cf
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r2
  int v37; // r0
  int v38; // r0
  int v39; // r0
  void *v40; // r0
  int v41; // r2
  const char *v42; // r0
  const void *v43; // r9
  int v44; // r0
  int v45; // r0
  unsigned __int64 n; // [sp+10h] [bp-156Ch]
  size_t na; // [sp+10h] [bp-156Ch]
  int v48; // [sp+1Ch] [bp-1560h]
  int v49; // [sp+20h] [bp-155Ch]
  int v50; // [sp+38h] [bp-1544h]
  int v51; // [sp+4Ch] [bp-1530h] BYREF
  _DWORD v52[2]; // [sp+50h] [bp-152Ch] BYREF
  _DWORD s[328]; // [sp+58h] [bp-1524h] BYREF
  struct timespec v54[512]; // [sp+578h] [bp-1004h] BYREF

  v51 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v51);
  memset(s, 0, sizeof(s));
  if ( v51 <= 0 )
  {
    v49 = 0;
    v48 = -1000;
  }
  else
  {
    v2 = (int *)all_created_runtime;
    v3 = -1;
    v4 = -1;
    do
    {
      v5 = *v2++;
      v6 = v4 != 0;
      v7 = *(_DWORD *)(v5 + 772);
      if ( !v4 )
        v6 = v3 > v7;
      if ( v6 )
      {
        v3 = v7;
        v4 = 0;
      }
    }
    while ( (int *)(all_created_runtime + 4 * v51) != v2 );
    v49 = v3 / 1000000;
    v48 = 1000 * (v3 % 1000000);
  }
  v8 = 0;
  v9 = (char *)calloc(1u, 0x40u);
  v10 = snprintf(v9, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK(v10);
  syscall(224);
  v11 = logfmt_raw((int)v54, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/god-miner.c",
    132,
    "work_generator_thread",
    21,
    223,
    60,
    v54);
  v50 = all_created_runtime - 4;
  prctl(15, v9);
  for ( i = clock_gettime(1, (struct timespec *)&send_job_timer); ; i = sleep(0) )
  {
LABEL_11:
    while ( 1 )
    {
      current_pool = get_current_pool(i);
      v14 = current_pool;
      if ( current_pool )
        break;
LABEL_36:
      V_LOCK(current_pool);
      v34 = logfmt_raw((int)v54, 0x1000u);
      V_UNLOCK(v34);
      i = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/god-miner.c",
            132,
            "work_generator_thread",
            21,
            243,
            20,
            v54);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, v14 + 2072) )
        goto LABEL_39;
      clock_gettime(1, v54);
      v52[1] = (v48 + v54[0].tv_nsec) % 1000000000;
      v52[0] = (v48 + v54[0].tv_nsec) / 1000000000 + v54[0].tv_sec + v49;
      v15 = pool_twait_to_be_expected_and_set(v14, v14 + 2084, 1, 0, v52);
      if ( v15 == 1 )
        break;
      if ( v15 == 110 )
      {
        V_LOCK(110);
        v38 = logfmt_raw((int)v54, 0x1000u);
        V_UNLOCK(v38);
        v17 = 259;
      }
      else
      {
        V_LOCK(v15);
        v16 = logfmt_raw((int)v54, 0x1000u);
        V_UNLOCK(v16);
        v17 = 261;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "work_generator_thread",
        21,
        v17,
        20,
        v54);
      pthread_mutex_lock((pthread_mutex_t *)(v14 + 1760));
      if ( pool_tget(v14, v14 + 1688) )
      {
        v44 = pthread_mutex_unlock((pthread_mutex_t *)(v14 + 1760));
        V_LOCK(v44);
        v45 = logfmt_raw((int)v54, 0x1000u);
        V_UNLOCK(v45);
        v36 = 267;
        v37 = g_zc;
        goto LABEL_38;
      }
      if ( (*(int (__fastcall **)(_DWORD *, int))(v0 + 44))(s, v14) == 2 )
      {
        V_LOCK(2);
        v39 = logfmt_raw((int)v54, 0x1000u);
        V_UNLOCK(v39);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "work_generator_thread",
          21,
          273,
          20,
          v54);
        v40 = (void *)s[288];
        v41 = *(_DWORD *)(v14 + 1800);
        ++*(_QWORD *)&total_getworks;
        *(_DWORD *)(v14 + 1800) = v41 + 1;
        if ( v40 )
        {
          free(v40);
          s[288] = 0;
        }
        if ( s[290] )
        {
          free((void *)s[290]);
          s[290] = 0;
        }
        memcpy(s, (const void *)(v14 + 448), sizeof(s));
        v42 = *(const char **)(v14 + 1600);
        if ( v42 )
          s[288] = _strdup(v42);
        v43 = *(const void **)(v14 + 1608);
        v8 = 1;
        if ( v43 )
        {
          na = *(_DWORD *)(v14 + 1604);
          s[290] = malloc(na);
          memcpy((void *)s[290], v43, na);
        }
      }
      i = pthread_mutex_unlock((pthread_mutex_t *)(v14 + 1760));
      if ( !s[288] )
        goto LABEL_11;
      if ( v51 > 0 )
      {
        v18 = 0;
        v19 = v50;
        do
        {
          if ( v18 )
            v20 = 0;
          else
            v20 = v8;
          (*(void (__fastcall **)(_DWORD *, int, int))(v0 + 48))(s, v14, v20);
          ++v18;
          ++local_work;
          v21 = time(0);
          v22 = *(int (__fastcall **)(int, _DWORD *))(v0 + 32);
          last_getwork = v21;
          v23 = *(_DWORD *)(v19 + 4);
          v19 += 4;
          i = v22(v23, s);
        }
        while ( v51 > v18 );
      }
      V_LOCK(i);
      clock_gettime(1, &tp);
      v24 = logfmt_raw((int)v54, 0x1000u);
      V_UNLOCK(v24);
      if ( v8 )
        v25 = 298;
      else
        v25 = 300;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "work_generator_thread",
        21,
        v25,
        20,
        v54);
      clock_gettime(1, &tp);
      v26 = 0;
      v27 = 0;
      v28 = -1;
      v29 = (unsigned __int64 *)&max_timeout_value;
      n = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_16C8B4) / 1000;
      do
      {
        v31 = *v29++;
        v30 = v31;
        v32 = v31 >= v28;
        if ( v31 < v28 )
          v26 = v27;
        ++v27;
        if ( !v32 )
          v28 = v30;
      }
      while ( v27 != 10 );
      if ( n > v28 )
        *(_QWORD *)&dword_165000[2 * v26 + 30] = n;
      v8 = 0;
      v33 = clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = get_current_pool(v33);
      v14 = current_pool;
      if ( !current_pool )
        goto LABEL_36;
    }
    V_LOCK(1);
    v35 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v35);
    v36 = 255;
    v37 = g_zc;
LABEL_38:
    zlog(
      v37,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "work_generator_thread",
      21,
      v36,
      20,
      v54);
LABEL_39:
    ;
  }
}
