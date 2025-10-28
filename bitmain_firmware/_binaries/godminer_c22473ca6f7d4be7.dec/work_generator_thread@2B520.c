void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r6
  int *v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // t1
  bool v6; // cc
  unsigned int v7; // r8
  int v8; // r11
  char *v9; // r7
  int v10; // r0
  int *v11; // r12
  int v12; // r3
  struct timespec *v13; // r10
  int v14; // r1
  int v15; // r0
  time_t *v16; // r9
  int *v17; // r8
  char *v18; // r1
  int v19; // r3
  int current_pool; // r0
  pthread_mutex_t *v21; // r7
  int v22; // r0
  int v23; // r3
  int v24; // r2
  int v25; // r1
  int v26; // r6
  char *v27; // r9
  int v28; // r2
  time_t v29; // r0
  void (__fastcall *v30)(int, _DWORD *); // r3
  int v31; // t1
  int v32; // r2
  int v33; // r1
  int v34; // lr
  int v35; // r12
  unsigned __int64 v36; // r0
  unsigned __int64 *v37; // r6
  unsigned __int64 v38; // r2
  unsigned __int64 v39; // t1
  bool v40; // cf
  struct timespec *v41; // r1
  int v42; // r3
  int v43; // r3
  int v44; // r2
  int v45; // r0
  int v46; // r1
  int v47; // r3
  int v48; // r3
  void *v49; // r0
  unsigned int nusers; // r2
  const char *v51; // r0
  const void *lock; // r9
  unsigned __int64 n; // [sp+10h] [bp-1564h]
  size_t na; // [sp+10h] [bp-1564h]
  int *v55; // [sp+18h] [bp-155Ch]
  int v56; // [sp+1Ch] [bp-1558h]
  int v57; // [sp+20h] [bp-1554h]
  char *v58; // [sp+38h] [bp-153Ch]
  time_t *v59; // [sp+3Ch] [bp-1538h]
  int v60; // [sp+40h] [bp-1534h]
  char *v61; // [sp+44h] [bp-1530h]
  int v62; // [sp+4Ch] [bp-1528h] BYREF
  struct timespec v63; // [sp+50h] [bp-1524h] BYREF
  _DWORD s[326]; // [sp+58h] [bp-151Ch] BYREF
  struct timespec v65; // [sp+570h] [bp-1004h] BYREF

  v62 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v62);
  memset(s, 0, sizeof(s));
  if ( v62 <= 0 )
  {
    v57 = 0;
    v56 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
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
    while ( &all_created_runtime[v62] != v2 );
    v57 = v3 / 1000000;
    v56 = 1000 * (v3 % 1000000);
  }
  v8 = 0;
  v9 = (char *)calloc(1u, 0x40u);
  snprintf(v9, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  LOWORD(v13) = -14176;
  v10 = syscall(224);
  LOWORD(v11) = -14512;
  LOWORD(v12) = -3872;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v12) = (unsigned int)"gain in 30sec" >> 16;
  v17 = v11;
  v55 = v11;
  HIWORD(v13) = (unsigned int)&unk_16B6A0 >> 16;
  logfmt_raw((char *)&v65, 0x1000u, 0, v12, v9, v10);
  V_UNLOCK();
  LOWORD(v14) = -4392;
  v15 = *v17;
  HIWORD(v14) = (unsigned int)"ares / min): %.2f/min" >> 16;
  LOWORD(v16) = -14236;
  LOWORD(v17) = -14196;
  zlog(v15, v14, 132, "work_generator_thread", 21, 223, 60, &v65);
  v18 = v9;
  v58 = (char *)(all_created_runtime - 1);
  LOWORD(v9) = -14216;
  prctl(15, v18);
  LOWORD(v19) = 20480;
  HIWORD(v19) = (unsigned int)&unk_163ED8 >> 16;
  v60 = v19;
  HIWORD(v9) = (unsigned int)&unk_16B678 >> 16;
  v61 = v9;
  HIWORD(v16) = (unsigned int)&unk_16B664 >> 16;
  v59 = v16;
  clock_gettime(1, v13);
  while ( 1 )
  {
LABEL_11:
    while ( 1 )
    {
      current_pool = get_current_pool();
      v21 = (pthread_mutex_t *)current_pool;
      if ( current_pool )
        break;
LABEL_36:
      V_LOCK();
      LOWORD(v42) = -3856;
      HIWORD(v42) = (unsigned int)"api bind to port %d, failed (%s)" >> 16;
      logfmt_raw((char *)&v65, 0x1000u, (int)v21, v42);
      V_UNLOCK();
      zlog(
        *v55,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/god-miner.c",
        132,
        "work_generator_thread",
        21,
        243,
        20,
        &v65);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v21[86]) )
        goto LABEL_39;
      clock_gettime(1, &v65);
      v63.tv_nsec = (v56 + v65.tv_nsec) % 1000000000;
      v63.tv_sec = (v56 + v65.tv_nsec) / 1000000000 + v65.tv_sec + v57;
      v22 = pool_twait_to_be_expected_and_set((int)v21, &v21[86].__size[12], 1, 0, &v63);
      if ( v22 == 1 )
        break;
      if ( v22 == 110 )
      {
        V_LOCK();
        LOWORD(v48) = -3792;
        HIWORD(v48) = (unsigned int)")" >> 16;
        logfmt_raw((char *)&v65, 0x1000u, 0, v48);
        V_UNLOCK();
        v24 = 259;
      }
      else
      {
        V_LOCK();
        LOWORD(v23) = -3764;
        HIWORD(v23) = (unsigned int)"%s: exec accept failed (%s)" >> 16;
        logfmt_raw((char *)&v65, 0x1000u, 0, v23);
        V_UNLOCK();
        v24 = 261;
      }
      LOWORD(v25) = -4392;
      HIWORD(v25) = (unsigned int)"ares / min): %.2f/min" >> 16;
      zlog(*v55, v25, 132, "work_generator_thread", 21, v24, 20, &v65);
      pthread_mutex_lock(v21 + 73);
      if ( pool_tget((int)v21, (unsigned __int8 *)&v21[70]) )
      {
        pthread_mutex_unlock(v21 + 73);
        V_LOCK();
        logfmt_raw(
          (char *)&v65,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          v21[66].__nusers,
          (unsigned __int8)v21[70].__size[0]);
        V_UNLOCK();
        v44 = 267;
        v45 = *v55;
        goto LABEL_38;
      }
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 44))(s, v21) == 2 )
      {
        V_LOCK();
        logfmt_raw((char *)&v65, 0x1000u, 0, "work generator switched to new job %s", v21[66].__nusers);
        V_UNLOCK();
        zlog(
          *v55,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/god-miner.c",
          132,
          "work_generator_thread",
          21,
          273,
          20,
          &v65);
        v49 = (void *)s[288];
        nusers = v21[74].__nusers;
        ++*(_QWORD *)v61;
        v21[74].__nusers = nusers + 1;
        if ( v49 )
        {
          free(v49);
          s[288] = 0;
        }
        if ( s[290] )
        {
          free((void *)s[290]);
          s[290] = 0;
        }
        memcpy(s, &v21[18].__align + 4, sizeof(s));
        v51 = (const char *)v21[66].__nusers;
        if ( v51 )
          s[288] = _strdup(v51);
        lock = (const void *)v21[67].__lock;
        v8 = 1;
        if ( lock )
        {
          na = v21[66].__spins;
          s[290] = malloc(na);
          memcpy((void *)s[290], lock, na);
        }
      }
      pthread_mutex_unlock(v21 + 73);
      if ( !s[288] )
        goto LABEL_11;
      if ( v62 > 0 )
      {
        v26 = 0;
        v27 = v58;
        do
        {
          if ( v26 )
            v28 = 0;
          else
            v28 = v8;
          (*(void (__fastcall **)(_DWORD *, pthread_mutex_t *, int))(v0 + 48))(s, v21, v28);
          ++v26;
          HIWORD(v17) = (unsigned int)&unk_16B68C >> 16;
          ++*v17;
          v29 = time(0);
          v30 = *(void (__fastcall **)(int, _DWORD *))(v0 + 32);
          *v59 = v29;
          v31 = *((_DWORD *)v27 + 1);
          v27 += 4;
          v30(v31, s);
        }
        while ( v62 > v26 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v8 )
      {
        logfmt_raw(
          (char *)&v65,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (v13[1].tv_sec - v13->tv_sec) + (v13[1].tv_nsec - v13->tv_nsec) / 1000000);
        V_UNLOCK();
        v32 = 298;
      }
      else
      {
        LOWORD(v47) = -3636;
        HIWORD(v47) = (unsigned int)"vaild param format" >> 16;
        logfmt_raw(
          (char *)&v65,
          0x1000u,
          0,
          v47,
          1000LL * (v13[1].tv_sec - v13->tv_sec) + (v13[1].tv_nsec - v13->tv_nsec) / 1000000);
        V_UNLOCK();
        v32 = 300;
      }
      LOWORD(v33) = -4392;
      HIWORD(v33) = (unsigned int)"ares / min): %.2f/min" >> 16;
      zlog(*v55, v33, 132, "work_generator_thread", 21, v32, 20, &v65);
      clock_gettime(1, &tp);
      v34 = 0;
      v35 = 0;
      v36 = -1;
      v37 = (unsigned __int64 *)&max_timeout_value;
      n = (int)&loc_F4240 * (__int64)(v13[1].tv_sec - v13->tv_sec) + (v13[1].tv_nsec - v13->tv_nsec) / 1000;
      do
      {
        v39 = *v37++;
        v38 = v39;
        v40 = v39 >= v36;
        if ( v39 < v36 )
          v34 = v35;
        ++v35;
        if ( !v40 )
          v36 = v38;
      }
      while ( v35 != 10 );
      if ( n > v36 )
        *(_QWORD *)(v60 + 8 * v34 + 120) = n;
      LOWORD(v41) = -14176;
      HIWORD(v41) = (unsigned int)&unk_16B6A0 >> 16;
      v8 = 0;
      clock_gettime(1, v41);
      current_pool = get_current_pool();
      v21 = (pthread_mutex_t *)current_pool;
      if ( !current_pool )
        goto LABEL_36;
    }
    V_LOCK();
    LOWORD(v43) = -3816;
    HIWORD(v43) = (unsigned int)"exec listen() failed (%s)" >> 16;
    logfmt_raw((char *)&v65, 0x1000u, 0, v43);
    V_UNLOCK();
    v44 = 255;
    v45 = *v55;
LABEL_38:
    LOWORD(v46) = -4392;
    HIWORD(v46) = (unsigned int)"ares / min): %.2f/min" >> 16;
    zlog(v45, v46, 132, "work_generator_thread", 21, v44, 20, &v65);
LABEL_39:
    sleep(0);
  }
}
