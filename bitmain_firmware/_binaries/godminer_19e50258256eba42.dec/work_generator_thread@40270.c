void __fastcall __noreturn work_generator_thread(_DWORD *a1)
{
  int v1; // r0
  bool v2; // r3
  _BYTE v3[56]; // [sp+34h] [bp-14F8h] BYREF
  struct timespec v4; // [sp+1034h] [bp-4F8h] BYREF
  struct timespec abstime; // [sp+103Ch] [bp-4F0h] BYREF
  int v6; // [sp+1044h] [bp-4E8h] BYREF
  _DWORD v7[284]; // [sp+1048h] [bp-4E4h] BYREF
  int *v8; // [sp+14B8h] [bp-74h]
  struct timespec *v9; // [sp+14BCh] [bp-70h]
  int *v10; // [sp+14C0h] [bp-6Ch]
  int *v11; // [sp+14C4h] [bp-68h]
  int v12; // [sp+14C8h] [bp-64h]
  struct timespec *p_abstime; // [sp+14CCh] [bp-60h]
  int v14; // [sp+14D0h] [bp-5Ch]
  struct timespec *tp; // [sp+14D4h] [bp-58h]
  int v16; // [sp+14D8h] [bp-54h]
  int v17; // [sp+14DCh] [bp-50h]
  _DWORD *v18; // [sp+14E0h] [bp-4Ch]
  int v19; // [sp+14E4h] [bp-48h]
  _DWORD *all_created_runtime; // [sp+14E8h] [bp-44h]
  int v21; // [sp+14ECh] [bp-40h]
  int i; // [sp+14F0h] [bp-3Ch]
  char v23; // [sp+14F7h] [bp-35h]
  unsigned __int64 v24; // [sp+14F8h] [bp-34h]
  char *s; // [sp+1504h] [bp-28h]
  int current_pool; // [sp+1508h] [bp-24h]
  int v27; // [sp+150Ch] [bp-20h]

  v18 = a1;
  v17 = *a1;
  v6 = 0;
  v21 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v6);
  v19 = 0;
  v24 = -1;
  v23 = 0;
  memset(v7, 0, sizeof(v7));
  for ( i = 0; i < v6; ++i )
  {
    if ( v24 > *(_QWORD *)(all_created_runtime[i] + 1048) )
      v24 = *(_QWORD *)(all_created_runtime[i] + 1048);
  }
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner.c",
    135,
    "work_generator_thread",
    21,
    115,
    40,
    v3);
  prctl(15, s);
  tp = (struct timespec *)&send_job_timer;
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = 0;
          current_pool = get_current_pool();
          if ( current_pool )
            break;
          V_LOCK();
          logfmt_raw(v3, 0x1000u, 0, "work generator: current pool is NULL");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner.c",
            135,
            "work_generator_thread",
            21,
            136,
            20,
            v3);
        }
        if ( !pool_tget((pthread_mutex_t *)current_pool, (unsigned __int8 *)(current_pool + 1904)) )
          break;
        sleep(0);
      }
      v14 = v24;
      p_abstime = &abstime;
      clock_gettime(1, &v4);
      v12 = v4.tv_nsec + 1000 * (v14 % 1000000);
      p_abstime->tv_sec = v4.tv_sec + v12 / 1000000000 + v14 / 1000000;
      p_abstime->tv_nsec = v12 % 1000000000;
      v16 = pool_twait_to_be_expected_and_set(current_pool, (_BYTE *)(current_pool + 1916), 1, 0, &abstime);
      if ( v16 != 1 )
        break;
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "pool has been changed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "work_generator_thread",
        21,
        150,
        20,
        v3);
      sleep(0);
    }
    if ( v16 == 110 )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "Wait for new job timeout");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "work_generator_thread",
        21,
        156,
        20,
        v3);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "New job has come");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "work_generator_thread",
        21,
        160,
        20,
        v3);
    }
    pthread_mutex_lock((pthread_mutex_t *)(current_pool + 1592));
    if ( pool_tget((pthread_mutex_t *)current_pool, (unsigned __int8 *)(current_pool + 1584)) )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(current_pool + 1592));
      V_LOCK();
      logfmt_raw(
        v3,
        0x1000u,
        0,
        "work generator: jobid %p cancel %d",
        *(_DWORD *)(current_pool + 1580),
        *(unsigned __int8 *)(current_pool + 1584));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "work_generator_thread",
        21,
        167,
        20,
        v3);
      sleep(0);
    }
    else
    {
      if ( (*(int (__fastcall **)(_DWORD *, int))(v21 + 36))(v7, current_pool) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          v3,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          *(_DWORD *)current_pool,
          *(_DWORD *)(current_pool + 1580));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner.c",
          135,
          "work_generator_thread",
          21,
          175,
          20,
          v3);
        ++*(_QWORD *)&total_getworks;
        ++*(_DWORD *)(current_pool + 1632);
        sub_401C8((int)v7);
        sub_40210(v7, (const char **)(current_pool + 456));
        v23 = 1;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(current_pool + 1592));
      if ( v7[281] )
      {
        v7[274] = *(_DWORD *)(current_pool + 80);
        for ( i = 0; i < v6; ++i )
        {
          v2 = v23 && !i;
          (**(void (__fastcall ***)(_DWORD *, int, int))(v21 + 72))(v7, current_pool, v2);
          ++local_work;
          last_getwork = time(0);
          (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)(v21 + 72) + 4))(all_created_runtime[i], v7);
        }
        if ( v23 )
        {
          v23 = 0;
          V_LOCK();
          v11 = &send_job_timer;
          clock_gettime(1, (struct timespec *)&dword_C26D40);
          logfmt_raw(
            v3,
            0x1000u,
            0,
            "New job pushed after %lld ms",
            1000LL * (v11[2] - *v11) + (v11[3] - v11[1]) / 1000000);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner.c",
            135,
            "work_generator_thread",
            21,
            205,
            20,
            v3);
        }
        else
        {
          V_LOCK();
          v10 = &send_job_timer;
          clock_gettime(1, (struct timespec *)&dword_C26D40);
          logfmt_raw(
            v3,
            0x1000u,
            0,
            "Updated job pushed after %lld ms",
            1000LL * (v10[2] - *v10) + (v10[3] - v10[1]) / 1000000);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner.c",
            135,
            "work_generator_thread",
            21,
            209,
            20,
            v3);
        }
        v8 = &send_job_timer;
        clock_gettime(1, (struct timespec *)&dword_C26D40);
        update_recorded_timeout_value(1000000LL * (v8[2] - *v8) + (v8[3] - v8[1]) / 1000);
        v9 = (struct timespec *)&send_job_timer;
        clock_gettime(1, (struct timespec *)&send_job_timer);
      }
    }
  }
}
