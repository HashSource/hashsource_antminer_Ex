// positive sp value has been detected, the output may be wrong!
int __fastcall sub_306E8(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int v13; // r0
  pthread_t v14; // r0
  int v15; // r0
  int v16; // r7
  int v17; // r0
  char *v18; // r7
  int v19; // r8
  int v20; // r0
  char *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r7
  int v25; // r0
  pthread_mutex_t **v26; // r7
  _DWORD *v27; // r10
  pthread_t v28; // r0
  pthread_mutex_t *v29; // r6
  int v30; // r11
  int v31; // lr
  int *v32; // r2
  int v33; // r12
  int v34; // r1
  int v35; // t1
  signed int v36; // r3
  int lock; // r3
  _DWORD *v38; // r2
  _DWORD *v39; // r1
  int *all_created_runtime; // r0
  int *v41; // r12
  int v42; // t1
  int v43; // r3
  int v44; // r2
  int v45; // r0
  int v46; // r0
  int v47; // r7
  int v48; // r0
  int v49; // r0
  unsigned int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v55; // r0
  int v56; // r7
  int v57; // r3
  int v58; // r7
  void **v59; // r6
  void **v60; // r5
  void *v61; // r0
  void *v62; // t1
  int v63; // r0
  int v64; // r0
  int v65; // [sp-1094h] [bp-2138h]
  _DWORD v66[32]; // [sp-1084h] [bp-2128h] BYREF
  _DWORD v67[1025]; // [sp-1004h] [bp-20A8h] BYREF
  int v68; // [sp+34h] [bp-1070h]
  int v69; // [sp+38h] [bp-106Ch]
  int v70; // [sp+3Ch] [bp-1068h]
  _DWORD v71[23]; // [sp+44h] [bp-1060h] BYREF

  v65 = total_pools;
  V_LOCK(a1);
  v13 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/pool.c",
    137,
    "pool_change_function",
    20,
    773,
    20,
    v67);
  v14 = pthread_self();
  pthread_detach(v14);
  v15 = dword_18EA84;
  if ( dword_18EA84 )
  {
    pthread_cancel(dword_18EA84);
    dword_18EA84 = 0;
    v15 = usleep((__useconds_t)&stru_1869C.st_value);
  }
  if ( v65 > 0 )
  {
    v16 = 0;
    do
    {
      ++v16;
      V_LOCK(v15);
      v17 = logfmt_raw((int)v67, 0x1000u);
      V_UNLOCK(v17);
      v15 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/pool.c",
              137,
              "pool_change_function",
              20,
              789,
              20,
              v67);
    }
    while ( v65 != v16 );
  }
  if ( dword_1734D4 > 0 )
  {
    v18 = (char *)&unk_1734D8;
    v19 = 0;
    do
    {
      v20 = sub_2FA44();
      ++v19;
      sub_2F3B8((void **)(v20 + 12), (_BYTE *)(v20 + 28), v18);
      set_user(v18 + 256);
      v21 = v18 + 512;
      v18 += 768;
      v15 = set_pass(v21);
    }
    while ( dword_1734D4 > v19 );
  }
  if ( total_pools == v65 )
  {
    V_LOCK(v15);
    v63 = logfmt_raw((int)v67, 0x1000u);
    V_UNLOCK(v63);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/pool.c",
      137,
      "pool_change_function",
      20,
      799,
      100,
      v67);
    goto LABEL_46;
  }
  V_LOCK(v15);
  v22 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/pool.c",
          137,
          "pool_change_function",
          20,
          803,
          20,
          v67);
  if ( total_pools > 0 )
  {
    v24 = 0;
    do
    {
      ++v24;
      V_LOCK(v23);
      v25 = logfmt_raw((int)v67, 0x1000u);
      V_UNLOCK(v25);
      v23 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/pool.c",
              137,
              "pool_change_function",
              20,
              806,
              20,
              v67);
    }
    while ( total_pools > v24 );
  }
  if ( v65 > 0 )
  {
    v26 = (pthread_mutex_t **)v66;
    v27 = &stratum_thr_info;
    do
    {
      v28 = v27[1];
      v29 = *(pthread_mutex_t **)pools;
      if ( v28 )
      {
        pthread_cancel(v28);
        v27[1] = 0;
      }
      if ( v27[11] )
      {
        tq_free();
        v27[11] = 0;
      }
      pthread_mutex_lock(v29 + 76);
      v29[79].__size[20] = 0;
      pthread_mutex_unlock(v29 + 76);
      pthread_mutex_lock(v29 + 76);
      v29[79].__size[8] = 1;
      pthread_mutex_unlock(v29 + 76);
      v30 = total_pools;
      v31 = total_pools - 1;
      --dword_1733B0;
      --dword_1733AC;
      --dword_1733A8;
      if ( total_pools > 0 )
      {
        v32 = (int *)pools;
        v33 = pools + 4 * total_pools;
        do
        {
          v35 = *v32++;
          v34 = v35;
          v36 = *(_DWORD *)(v35 + 4);
          if ( v36 > (signed int)v29->__count )
            *(_DWORD *)(v34 + 4) = v36 - 1;
        }
        while ( (int *)v33 != v32 );
      }
      lock = v29->__lock;
      if ( v31 > v29->__lock )
      {
        v38 = (_DWORD *)(pools + 4 * lock);
        do
        {
          v39 = (_DWORD *)v38[1];
          *v38++ = v39;
          *v39 = lock++;
        }
        while ( lock != v31 );
      }
      *v26++ = v29;
      v29->__lock = v30;
      v27 += 12;
      total_pools = v30 - 1;
    }
    while ( v26 != &v66[v65] );
  }
  v67[0] = 0;
  all_created_runtime = (int *)get_all_created_runtime(v67);
  if ( v67[0] > 0 )
  {
    v41 = &all_created_runtime[v67[0]];
    do
    {
      v42 = *all_created_runtime++;
      v43 = v42 + 495;
      v44 = v42 + 527;
      do
        *(_BYTE *)++v43 = 1;
      while ( v44 != v43 );
    }
    while ( v41 != all_created_runtime );
  }
  V_LOCK(all_created_runtime);
  v45 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v45);
  v46 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/pool.c",
          137,
          "pool_change_function",
          20,
          831,
          20,
          v67);
  if ( total_pools > 0 )
  {
    v47 = 0;
    do
    {
      ++v47;
      V_LOCK(v46);
      v48 = logfmt_raw((int)v67, 0x1000u);
      V_UNLOCK(v48);
      v46 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/pool.c",
              137,
              "pool_change_function",
              20,
              834,
              20,
              v67);
    }
    while ( total_pools > v47 );
  }
  V_LOCK(v46);
  v49 = logfmt_raw((int)v67, 0x1000u);
  V_UNLOCK(v49);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/pool.c",
    137,
    "pool_change_function",
    20,
    837,
    40,
    v67);
  v50 = sleep(5u);
  if ( !byte_1734D0 )
  {
    v55 = check_pools_valid();
    if ( v55 <= 0 )
    {
      V_LOCK(v55);
      v64 = logfmt_raw((int)v67, 0x1000u);
      V_UNLOCK(v64);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/pool.c",
        137,
        "pool_change_function",
        20,
        848,
        40,
        v67);
    }
    v56 = 0;
    do
    {
      ++v56;
      sleep(1u);
      if ( v56 == 8 )
        v57 = 0;
      else
        v57 = ((unsigned __int8)pools_active ^ 1) & 1;
    }
    while ( v57 );
    set_miner_start_time();
    api_flush();
    if ( !pools_active )
      JUMPOUT(0x30D9C);
LABEL_46:
    if ( !v69
      || (*(_DWORD *)(v70 + 96) = 2,
          pthread_attr_init(&attr),
          v58 = pthread_create((pthread_t *)&dword_18EA84, &attr, (void *(*)(void *))watchpool_thread, &dword_18EA80),
          pthread_attr_destroy(&attr),
          !v58) )
    {
      sleep(0xAu);
      if ( v68 > 0 )
      {
        v59 = (void **)v71;
        v60 = (void **)&v71[v68];
        do
        {
          v62 = *v59++;
          v61 = v62;
          if ( v62 )
            free(v61);
        }
        while ( v60 != v59 );
      }
      newthread = 0;
      __asm { POP             {R4-R11,PC} }
    }
    JUMPOUT(0x30EE0);
  }
  return sub_30D40(v50, v51, v52, v53, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}
