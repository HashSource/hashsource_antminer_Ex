int __fastcall stratum_thread(int a1)
{
  int v2; // r7
  pthread_t v3; // r0
  int *v4; // r4
  _DWORD *v5; // r11
  char *v6; // r5
  int v7; // r0
  int v8; // r3
  char *v9; // r0
  int *v10; // lr
  _BYTE *v11; // r5
  unsigned int v12; // r6
  unsigned int v13; // r5
  int *v14; // r0
  bool v15; // zf
  int *v16; // r1
  signed __int64 v17; // r0
  int v18; // r0
  void *v19; // r5
  char *v20; // r1
  int v21; // r8
  _DWORD *current_pool; // r0
  int v23; // r1
  int v24; // r3
  void (__fastcall *v25)(int *); // r2
  char *v26; // r1
  char *v27; // r1
  _BYTE *v29; // [sp+30h] [bp-108Ch]
  int v30; // [sp+34h] [bp-1088h]
  int v31; // [sp+3Ch] [bp-1080h]
  __time_t v32; // [sp+40h] [bp-107Ch]
  _BYTE *v33; // [sp+44h] [bp-1078h]
  int *v34; // [sp+4Ch] [bp-1070h]
  _DWORD v35[7]; // [sp+58h] [bp-1064h] BYREF
  int v36; // [sp+74h] [bp-1048h]
  _DWORD v37[7]; // [sp+78h] [bp-1044h] BYREF
  int v38; // [sp+94h] [bp-1028h]
  int v39; // [sp+98h] [bp-1024h] BYREF
  int v40; // [sp+9Ch] [bp-1020h]
  int v41; // [sp+A0h] [bp-101Ch]
  int v42; // [sp+A4h] [bp-1018h]
  int v43; // [sp+A8h] [bp-1014h]
  int v44; // [sp+ACh] [bp-1010h]
  int v45; // [sp+B0h] [bp-100Ch]
  int v46; // [sp+B4h] [bp-1008h]
  char v47[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance();
  v3 = pthread_self();
  pthread_detach(v3);
  v32 = *(_DWORD *)(v2 + 88);
  v4 = (int *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  if ( v4 )
  {
    V_LOCK();
    LOWORD(v5) = -14512;
    HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
    logfmt_raw(v47, 0x1000u, 0, 1246740, v4[2]);
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_thread",
      14,
      236,
      20,
      v47);
    v6 = (char *)calloc(1u, 0x40u);
    snprintf(v6, 0x40u, "%.10s_%d", "stratum_thread", *v4);
    V_LOCK();
    v7 = syscall(224);
    LOWORD(v8) = -3872;
    HIWORD(v8) = (unsigned int)"gain in 30sec" >> 16;
    logfmt_raw(v47, 0x1000u, 0, v8, v6, v7);
    V_UNLOCK();
    zlog(
      *v5,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_thread",
      14,
      238,
      60,
      v47);
    prctl(15, v6);
    v9 = _strdup((const char *)v4[2]);
    v4[7] = (int)v9;
    if ( !v9 )
      goto LABEL_23;
    LOWORD(v10) = -14232;
    LOWORD(v11) = 24196;
    HIWORD(v10) = (unsigned int)&unk_16B668 >> 16;
    HIWORD(v11) = (unsigned int)&unk_164D5C >> 16;
    v29 = v4 + 519;
    v34 = v10;
    v33 = v11;
    pool_tset((int)v4, (_BYTE *)v4 + 2064, 0);
    v31 = 1;
    pool_tclear((int)v4, (_BYTE *)v4 + 2076, 0);
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = 0;
        v13 = 0;
        while ( 1 )
        {
          v14 = v4;
          if ( v4[8] != -1 )
            break;
          while ( 1 )
          {
            v15 = (*(int (__fastcall **)(int *))(v2 + 4))(v14) == 0;
            v16 = v4;
            if ( !v15 )
            {
              if ( (*(int (__fastcall **)(int, int *))(v2 + 20))(v2, v4) )
                break;
            }
            (*(void (__fastcall **)(int *, int *))(v2 + 8))(v4, v16);
            pool_tclear((int)v4, v29, 0);
            pool_died(v4);
            v17 = __PAIR64__(v13, v12);
            v13 = (__PAIR64__(v13, v12) + 1) >> 32;
            if ( !(v17 % 50) )
            {
              V_LOCK();
              LOWORD(v20) = -3560;
              HIWORD(v20) = (unsigned int)"DEVS" >> 16;
              V_INT((int)v35, v20, *v4);
              logfmt_raw(
                v47,
                0x1000u,
                0,
                v36,
                v35[0],
                v35[1],
                v35[2],
                v35[3],
                v35[4],
                v35[5],
                v35[6],
                v36,
                1246764,
                30,
                v12 + 1,
                v13);
              V_UNLOCK();
              zlog(
                *v5,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/stratum_handler.c",
                138,
                "stratum_thread",
                14,
                256,
                100,
                v47);
            }
            ++v12;
            sleep(0x1Eu);
            v14 = v4;
            if ( v4[8] != -1 )
              goto LABEL_12;
          }
          V_LOCK();
          v21 = v4[7];
          v30 = *v4;
          current_pool = (_DWORD *)get_current_pool();
          logfmt_raw(v47, 0x1000u, 0, 1246804, v30, v21, *current_pool);
          V_UNLOCK();
          zlog(
            *v5,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_thread",
            14,
            260,
            20,
            v47);
          pool_alive((int)v4);
          if ( v31 )
          {
            v31 = 0;
            switch_pools();
          }
        }
LABEL_12:
        if ( v4 != (int *)get_current_pool() )
          wait_pool_to_be_current_timeout((int)v4);
        if ( stratum_socket_full((int)v4, v32) )
          break;
        V_LOCK();
        V_INT((int)v37, "poolno", *v4);
        logfmt_raw(v47, 0x1000u, 0, v38, v37[0], v37[1], v37[2], v37[3], v37[4], v37[5], v37[6], v38, 1246852);
        V_UNLOCK();
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_thread",
          14,
          292,
          100,
          v47);
LABEL_22:
        v23 = *v34;
        v24 = v4[527] + 1;
        *v33 = 0;
        v25 = *(void (__fastcall **)(int *))(v2 + 8);
        *v34 = v23 + 1;
        v4[527] = v24;
        v25(v4);
        pool_tclear((int)v4, v29, 0);
        pool_died(v4);
        V_LOCK();
        LOWORD(v26) = -3560;
        HIWORD(v26) = (unsigned int)"DEVS" >> 16;
        V_INT((int)&v39, v26, *v4);
        logfmt_raw(v47, 0x1000u, 0, v46, v39, v40, v41, v42, v43, v44, v45, v46, 1246880);
        V_UNLOCK();
        zlog(
          *v5,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_thread",
          14,
          304,
          20,
          v47);
        sleep(0x1Eu);
      }
      v18 = (*(int (__fastcall **)(int *))(v2 + 12))(v4);
      v19 = (void *)v18;
      if ( !v18 )
        goto LABEL_22;
      if ( !(*(int (__fastcall **)(int, int *, int))(v2 + 24))(v2, v4, v18) )
        (*(void (__fastcall **)(int, void *, int *))(v2 + 28))(v2, v19, v4);
      free(v19);
      *v33 = 1;
    }
  }
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
LABEL_23:
  V_LOCK();
  LOWORD(v27) = -3560;
  HIWORD(v27) = (unsigned int)"DEVS" >> 16;
  V_INT((int)&v39, v27, *v4);
  logfmt_raw(v47, 0x1000u, 0, v46, v39, v40, v41, v42, v43, v44, v45, v46, 1246912);
  V_UNLOCK();
  zlog(
    *v5,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/stratum_handler.c",
    138,
    "stratum_thread",
    14,
    317,
    60,
    v47);
  return 0;
}
