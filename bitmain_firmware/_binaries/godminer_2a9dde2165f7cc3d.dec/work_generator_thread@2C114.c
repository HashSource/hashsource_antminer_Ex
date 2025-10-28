void __fastcall __noreturn work_generator_thread(int a1)
{
  int v1; // r5
  int all_created_runtime; // r6
  int *v3; // r0
  unsigned __int64 v4; // r2
  int v5; // t1
  unsigned __int64 v6; // r8
  int v7; // r9
  char *v8; // r7
  int v9; // r0
  int v10; // r0
  int i; // r0
  int current_pool; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r0
  int v16; // r12
  int v17; // r6
  int v18; // r8
  int v19; // r2
  time_t v20; // r0
  int v21; // r3
  int v22; // t1
  int v23; // r0
  unsigned __int64 *v24; // r2
  int v25; // r12
  int v26; // r3
  unsigned __int64 v27; // r6
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r0
  unsigned __int64 v30; // t1
  bool v31; // cf
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r12
  int v36; // r0
  int v37; // r0
  int v38; // r0
  void *v39; // r0
  int v40; // r2
  const char *v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // [sp+1Ch] [bp-14B0h]
  int v45; // [sp+20h] [bp-14ACh]
  int v46; // [sp+3Ch] [bp-1490h]
  int v47; // [sp+4Ch] [bp-1480h] BYREF
  _DWORD v48[2]; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v50[512]; // [sp+4C8h] [bp-1004h] BYREF

  v47 = 0;
  v1 = frontend_runtime_instance(a1);
  all_created_runtime = get_all_created_runtime(&v47);
  memset(s, 0, sizeof(s));
  if ( v47 <= 0 )
  {
    v45 = 0;
    v44 = -1000;
  }
  else
  {
    v3 = (int *)all_created_runtime;
    v4 = -1;
    do
    {
      v5 = *v3++;
      v6 = *(_QWORD *)(v5 + 944);
      if ( v4 > v6 )
        v4 = v6;
    }
    while ( (int *)(all_created_runtime + 4 * v47) != v3 );
    v45 = (int)v4 / 1000000;
    v44 = 1000 * ((int)v4 % 1000000);
  }
  v7 = 0;
  v8 = (char *)calloc(1u, 0x40u);
  v9 = snprintf(v8, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK(v9);
  syscall(224);
  v10 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/god-miner.c",
    142,
    "work_generator_thread",
    21,
    203,
    40,
    v50);
  v46 = all_created_runtime - 4;
  prctl(15, v8);
  for ( i = clock_gettime(1, (struct timespec *)&send_job_timer); ; i = sleep(0) )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = get_current_pool(i);
      v13 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK(current_pool);
      v33 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v33);
      i = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/god-miner.c",
            142,
            "work_generator_thread",
            21,
            222,
            20,
            v50);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, v13 + 1904) )
        goto LABEL_37;
      clock_gettime(1, v50);
      v48[1] = (v44 + v50[0].tv_nsec) % 1000000000;
      v48[0] = (v44 + v50[0].tv_nsec) / 1000000000 + v50[0].tv_sec + v45;
      v14 = pool_twait_to_be_expected_and_set(v13, v13 + 1916, 1, 0, v48);
      if ( v14 == 1 )
        break;
      if ( v14 == 110 )
      {
        V_LOCK(110);
        v37 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v37);
        v16 = 238;
      }
      else
      {
        V_LOCK(v14);
        v15 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v15);
        v16 = 240;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/god-miner.c",
        142,
        "work_generator_thread",
        21,
        v16,
        20,
        v50);
      pthread_mutex_lock((pthread_mutex_t *)(v13 + 1592));
      if ( pool_tget(v13, v13 + 1584) )
      {
        v42 = pthread_mutex_unlock((pthread_mutex_t *)(v13 + 1592));
        V_LOCK(v42);
        v43 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v43);
        v35 = 246;
        v36 = g_zc;
        goto LABEL_36;
      }
      if ( (*(int (__fastcall **)(_DWORD *, int))(v1 + 36))(s, v13) == 2 )
      {
        V_LOCK(2);
        v38 = logfmt_raw((int)v50, 0x1000u);
        V_UNLOCK(v38);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "work_generator_thread",
          21,
          253,
          20,
          v50);
        v39 = (void *)s[281];
        v40 = *(_DWORD *)(v13 + 1632);
        ++*(_QWORD *)&total_getworks;
        *(_DWORD *)(v13 + 1632) = v40 + 1;
        if ( v39 )
        {
          free(v39);
          s[281] = 0;
        }
        v7 = 1;
        memcpy(s, (const void *)(v13 + 456), sizeof(s));
        v41 = *(const char **)(v13 + 1580);
        if ( v41 )
          s[281] = _strdup(v41);
      }
      i = pthread_mutex_unlock((pthread_mutex_t *)(v13 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = *(_DWORD *)(v13 + 80);
      if ( v47 > 0 )
      {
        v17 = 0;
        v18 = v46;
        do
        {
          if ( v17 )
            v19 = 0;
          else
            v19 = v7;
          ++v17;
          (**(void (__fastcall ***)(_DWORD *, int, int))(v1 + 72))(s, v13, v19);
          ++local_work;
          v20 = time(0);
          v21 = *(_DWORD *)(v1 + 72);
          last_getwork = v20;
          v22 = *(_DWORD *)(v18 + 4);
          v18 += 4;
          i = (*(int (__fastcall **)(int, _DWORD *))(v21 + 4))(v22, s);
        }
        while ( v47 > v17 );
      }
      V_LOCK(i);
      clock_gettime(1, &tp);
      v23 = logfmt_raw((int)v50, 0x1000u);
      V_UNLOCK(v23);
      if ( v7 )
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "work_generator_thread",
          21,
          278,
          20,
          v50);
      else
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/god-miner.c",
          142,
          "work_generator_thread",
          21,
          280,
          20,
          v50);
      clock_gettime(1, &tp);
      v24 = max_timeout_value;
      v25 = 0;
      v26 = 0;
      v27 = -1;
      v28 = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18E414) / 1000;
      do
      {
        v30 = *v24++;
        v29 = v30;
        v31 = v30 >= v27;
        if ( v30 < v27 )
          v25 = v26;
        ++v26;
        if ( !v31 )
          v27 = v29;
      }
      while ( v26 != 10 );
      if ( v28 > v27 )
        max_timeout_value[v25] = v28;
      v7 = 0;
      v32 = clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = get_current_pool(v32);
      v13 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    V_LOCK(1);
    v34 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v34);
    v35 = 234;
    v36 = g_zc;
LABEL_36:
    zlog(
      v36,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/god-miner.c",
      142,
      "work_generator_thread",
      21,
      v35,
      20,
      v50);
LABEL_37:
    ;
  }
}
