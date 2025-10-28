int __fastcall stratum_thread(int a1)
{
  pthread_t v1; // r0
  int v2; // r0
  char *v3; // r0
  __int64 v4; // r0
  int v5; // r6
  int v6; // r7
  _DWORD *current_pool; // r0
  __int64 v8; // r0
  _BYTE v10[68]; // [sp+38h] [bp-10C4h] BYREF
  _DWORD v11[7]; // [sp+1038h] [bp-C4h] BYREF
  int v12; // [sp+1054h] [bp-A8h]
  _DWORD v13[7]; // [sp+1058h] [bp-A4h] BYREF
  int v14; // [sp+1074h] [bp-88h]
  _DWORD v15[7]; // [sp+1078h] [bp-84h] BYREF
  int v16; // [sp+1094h] [bp-68h]
  _DWORD v17[7]; // [sp+1098h] [bp-64h] BYREF
  int v18; // [sp+10B4h] [bp-48h]
  void *ptr; // [sp+10BCh] [bp-40h]
  __int64 v20; // [sp+10C0h] [bp-3Ch]
  int v21; // [sp+10CCh] [bp-30h]
  unsigned int seconds; // [sp+10D0h] [bp-2Ch]
  char v23; // [sp+10D7h] [bp-25h]
  int v24; // [sp+10D8h] [bp-24h]
  __time_t v25; // [sp+10DCh] [bp-20h]
  unsigned __int8 *v26; // [sp+10E0h] [bp-1Ch]
  char *s; // [sp+10E4h] [bp-18h]

  v21 = a1;
  v24 = frontend_runtime_instance();
  v23 = 1;
  v25 = 0;
  seconds = 30;
  v1 = pthread_self();
  pthread_detach(v1);
  v25 = *(_DWORD *)(*(_DWORD *)(v24 + 72) + 20);
  v26 = (unsigned __int8 *)tq_pop(*(_DWORD *)(v21 + 44), 0);
  if ( v26 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "stratum_thread pool %s", *((_DWORD *)v26 + 3));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_thread",
      14,
      249,
      20,
      v10);
    s = (char *)calloc(1u, 0x40u);
    snprintf(s, 0x40u, "%.10s_%d", "stratum_thread", *(_DWORD *)v26);
    V_LOCK();
    v2 = syscall(224);
    logfmt_raw(v10, 0x1000u, 0, "%s on pid %ld", s, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_thread",
      14,
      251,
      40,
      v10);
    prctl(15, s);
    v3 = strdup(*((const char **)v26 + 3));
    *((_DWORD *)v26 + 8) = v3;
    if ( *((_DWORD *)v26 + 8) )
    {
      pool_tset((int)v26, v26 + 1904, 0);
      pool_tclear((int)v26, v26 + 1916, 0);
      dword_5ACF80 = 0;
      while ( 1 )
      {
        v20 = 0;
        while ( *((_DWORD *)v26 + 9) == -1 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int8 *))v24)(v26) != 1
            || (*(unsigned __int8 (__fastcall **)(int, unsigned __int8 *))(v24 + 16))(v24, v26) != 1 )
          {
            (*(void (__fastcall **)(unsigned __int8 *))(v24 + 4))(v26);
            pool_tclear((int)v26, v26 + 1916, 0);
            pool_died((int *)v26);
            v4 = v20++;
            if ( !(v4 % 50) )
            {
              V_LOCK();
              sub_45774((int)v11, *(int *)v26);
              logfmt_raw(
                v10,
                0x1000u,
                0,
                v12,
                v11[0],
                v11[1],
                v11[2],
                v11[3],
                v11[4],
                v11[5],
                v11[6],
                v12,
                "...retry after %d seconds failures %d",
                seconds,
                v20);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/stratum_handler.c",
                145,
                "stratum_thread",
                14,
                284,
                100,
                v10);
            }
            sleep(seconds);
          }
          else
          {
            V_LOCK();
            v5 = *(_DWORD *)v26;
            v6 = *((_DWORD *)v26 + 8);
            current_pool = (_DWORD *)get_current_pool();
            logfmt_raw(v10, 0x1000u, 0, "pool %d is active, pool url %s, current_pool %d", v5, v6, *current_pool);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/stratum_handler.c",
              145,
              "stratum_thread",
              14,
              290,
              20,
              v10);
            pool_alive((int)v26);
            if ( v23 )
            {
              v23 = 0;
              switch_pools();
            }
          }
        }
        wait_pool_to_be_current_timeout((int)v26);
        if ( !stratum_socket_full((int)v26, v25) )
        {
          V_LOCK();
          sub_45774((int)v13, *(int *)v26);
          logfmt_raw(
            v10,
            0x1000u,
            0,
            v14,
            v13[0],
            v13[1],
            v13[2],
            v13[3],
            v13[4],
            v13[5],
            v13[6],
            v14,
            "stratum connection timeout");
          V_UNLOCK();
          v8 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/stratum_handler.c",
                 145,
                 "stratum_thread",
                 14,
                 304,
                 100,
                 v10);
          ptr = 0;
        }
        else
        {
          ptr = (void *)(*(int (__fastcall **)(unsigned __int8 *))(v24 + 8))(v26);
        }
        if ( ptr )
        {
          if ( !(*(int (__fastcall **)(int, unsigned __int8 *, void *))(v24 + 20))(v24, v26, ptr) )
            (*(void (__fastcall **)(int, void *, unsigned __int8 *))(v24 + 28))(v24, ptr, v26);
          free(ptr);
          pools_active = 1;
        }
        else
        {
          ++total_go;
          ++*((_DWORD *)v26 + 487);
          pools_active = 0;
          (*(void (__fastcall **)(unsigned __int8 *, _DWORD))(v24 + 4))(v26, HIDWORD(v8));
          pool_tclear((int)v26, v26 + 1916, 0);
          pool_died((int *)v26);
          V_LOCK();
          sub_45774((int)v15, *(int *)v26);
          logfmt_raw(
            v10,
            0x1000u,
            0,
            v16,
            v15[0],
            v15[1],
            v15[2],
            v15[3],
            v15[4],
            v15[5],
            v15[6],
            v16,
            "stratum connection interrupted");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/stratum_handler.c",
            145,
            "stratum_thread",
            14,
            332,
            20,
            v10);
          sleep(seconds);
        }
      }
    }
  }
  V_LOCK();
  sub_45774((int)v17, *(int *)v26);
  logfmt_raw(v10, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, "stratum thread out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_thread",
    14,
    339,
    60,
    v10);
  return 0;
}
