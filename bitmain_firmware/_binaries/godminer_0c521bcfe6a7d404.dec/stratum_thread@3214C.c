int __fastcall stratum_thread(int a1)
{
  int v2; // r7
  pthread_t v3; // r0
  char *v4; // r0
  pthread_mutex_t *v5; // r4
  int v6; // r0
  char *v7; // r5
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r6
  unsigned int v11; // r5
  int v12; // r0
  bool v13; // zf
  pthread_mutex_t *v14; // r1
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  __int64 v18; // r2
  int v19; // r0
  void *v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r3
  void (__fastcall *v25)(pthread_mutex_t *); // r2
  int v26; // r0
  int v27; // r0
  int v28; // r0
  char *v30; // [sp+30h] [bp-108Ch]
  int v31; // [sp+3Ch] [bp-1080h]
  int v32; // [sp+40h] [bp-107Ch]
  int v33; // [sp+58h] [bp-1064h] BYREF
  _BYTE v34[32]; // [sp+78h] [bp-1044h] BYREF
  _BYTE v35[32]; // [sp+98h] [bp-1024h] BYREF
  _BYTE v36[4100]; // [sp+B8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance(a1);
  v3 = pthread_self();
  pthread_detach(v3);
  v32 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v4 = (char *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  v5 = (pthread_mutex_t *)v4;
  if ( v4 )
  {
    V_LOCK(v4);
    v6 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_thread",
      14,
      249,
      20,
      v36);
    v7 = (char *)calloc(1u, 0x40u);
    v8 = snprintf(v7, 0x40u, "%.10s_%d", "stratum_thread", v5->__lock);
    V_LOCK(v8);
    syscall(224);
    v9 = logfmt_raw((int)v36, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_thread",
      14,
      251,
      40,
      v36);
    prctl(15, v7);
    v4 = _strdup((const char *)v5->__kind);
    v5[1].__owner = (int)v4;
    if ( v4 )
    {
      v30 = &v5[79].__size[20];
      pool_tset((int)v5, &v5[79].__size[8], 0);
      pool_tclear((int)v5, &v5[79].__size[20], 0);
      v31 = 1;
      dword_173DDC = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = 0;
          v11 = 0;
          while ( 1 )
          {
            v12 = (int)v5;
            if ( v5[1].__kind != -1 )
              break;
            while ( 1 )
            {
              v13 = (*(int (__fastcall **)(int))v2)(v12) == 0;
              v14 = v5;
              if ( !v13 )
              {
                v15 = (*(int (__fastcall **)(int, pthread_mutex_t *))(v2 + 16))(v2, v5);
                if ( v15 )
                  break;
              }
              (*(void (__fastcall **)(pthread_mutex_t *, pthread_mutex_t *))(v2 + 4))(v5, v14);
              pool_tclear((int)v5, v30, 0);
              pool_died(v5);
              v16 = v11;
              v11 = (__PAIR64__(v11, v10) + 1) >> 32;
              v17 = sub_12E8A4(v10, v16, 50, 0);
              if ( !v18 )
              {
                V_LOCK(v17);
                V_INT((int)&v33, "poolno");
                v21 = logfmt_raw((int)v36, 0x1000u);
                V_UNLOCK(v21);
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/stratum_handler.c",
                  148,
                  "stratum_thread",
                  14,
                  284,
                  100,
                  v36);
              }
              ++v10;
              sleep(0x1Eu);
              v12 = (int)v5;
              if ( v5[1].__kind != -1 )
                goto LABEL_11;
            }
            V_LOCK(v15);
            get_current_pool();
            v22 = logfmt_raw((int)v36, 0x1000u);
            V_UNLOCK(v22);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/stratum_handler.c",
              148,
              "stratum_thread",
              14,
              290,
              20,
              v36);
            pool_alive(v5);
            if ( v31 )
            {
              v31 = 0;
              switch_pools();
            }
          }
LABEL_11:
          wait_pool_to_be_current_timeout(v12);
          if ( stratum_socket_full((int)v5, v32) )
            break;
          V_LOCK(0);
          V_INT((int)v34, "poolno");
          v23 = logfmt_raw((int)v36, 0x1000u);
          V_UNLOCK(v23);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/stratum_handler.c",
            148,
            "stratum_thread",
            14,
            304,
            100,
            v36);
LABEL_19:
          v24 = v5[81].__count + 1;
          pools_active = 0;
          v25 = *(void (__fastcall **)(pthread_mutex_t *))(v2 + 4);
          ++total_go;
          v5[81].__count = v24;
          v25(v5);
          pool_tclear((int)v5, v30, 0);
          v26 = pool_died(v5);
          V_LOCK(v26);
          V_INT((int)v35, "poolno");
          v27 = logfmt_raw((int)v36, 0x1000u);
          V_UNLOCK(v27);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/stratum_handler.c",
            148,
            "stratum_thread",
            14,
            332,
            20,
            v36);
          sleep(0x1Eu);
        }
        v19 = (*(int (__fastcall **)(pthread_mutex_t *))(v2 + 8))(v5);
        v20 = (void *)v19;
        if ( !v19 )
          goto LABEL_19;
        if ( !(*(int (__fastcall **)(int, pthread_mutex_t *, int))(v2 + 20))(v2, v5, v19) )
          (*(void (__fastcall **)(int, void *, pthread_mutex_t *))(v2 + 28))(v2, v20, v5);
        free(v20);
        pools_active = 1;
      }
    }
  }
  V_LOCK(v4);
  V_INT((int)v35, "poolno");
  v28 = logfmt_raw((int)v36, 0x1000u);
  V_UNLOCK(v28);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/stratum_handler.c",
    148,
    "stratum_thread",
    14,
    339,
    60,
    v36);
  return 0;
}
