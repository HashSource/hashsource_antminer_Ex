void __fastcall pre_stratum_connect(int a1)
{
  int v2; // r5
  char *v3; // r0
  int v4; // r4
  __int64 v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r0
  void *v12; // r7
  const char *v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  void (__fastcall *v22)(int); // r1
  int v23; // r2
  int v24; // r0
  int v25; // r0
  int *v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // [sp+3Ch] [bp-1090h]
  int v32; // [sp+40h] [bp-108Ch]
  _BYTE v33[32]; // [sp+48h] [bp-1084h] BYREF
  int v34; // [sp+68h] [bp-1064h] BYREF
  _BYTE v35[32]; // [sp+88h] [bp-1044h] BYREF
  const char *v36[8]; // [sp+A8h] [bp-1024h] BYREF
  _BYTE v37[4100]; // [sp+C8h] [bp-1004h] BYREF

  v2 = frontend_runtime_instance(a1);
  v32 = *(_DWORD *)(*(_DWORD *)(v2 + 72) + 20);
  v3 = (char *)tq_pop(*(_DWORD *)(a1 + 44), 0);
  v4 = (int)v3;
  if ( !v3 )
    goto LABEL_22;
  if ( ++dword_165B14 <= 3 )
  {
    V_LOCK(v3);
    v20 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "pre_stratum_connect",
      19,
      347,
      40,
      v37);
  }
  v3 = _strdup(*(const char **)(v4 + 8));
  *(_DWORD *)(v4 + 28) = v3;
  if ( !v3 )
  {
LABEL_22:
    V_LOCK(v3);
    V_INT((int)v36, "poolno");
    v14 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/stratum_handler.c",
      144,
      "pre_stratum_connect",
      19,
      472,
      60,
      v37);
    return;
  }
  pool_tset(v4, (_BYTE *)(v4 + 1896), 0);
  pool_tclear(v4, (_BYTE *)(v4 + 1908), 0);
  v31 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = v4;
        if ( *(_DWORD *)(v4 + 32) != -1 )
          break;
        while ( 1 )
        {
          v7 = (*(int (__fastcall **)(int))v2)(v6) == 0;
          v8 = v4;
          if ( !v7 )
          {
            v9 = (*(int (__fastcall **)(int, int))(v2 + 16))(v2, v4);
            if ( v9 )
              break;
          }
          (*(void (__fastcall **)(int, int))(v2 + 4))(v4, v8);
          pool_tclear(v4, (_BYTE *)(v4 + 1908), 0);
          v10 = pool_died(v4);
          if ( v5 >= 3 )
          {
            if ( dword_165B14 <= 3 )
            {
              V_LOCK(v10);
              v17 = logfmt_raw((int)v37, 0x1000u);
              V_UNLOCK(v17);
              v18 = zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/"
                      "godminer-origin_godminer-new/stratum_handler.c",
                      144,
                      "pre_stratum_connect",
                      19,
                      378,
                      100,
                      v37);
              V_LOCK(v18);
              v19 = logfmt_raw((int)v37, 0x1000u);
              V_UNLOCK(v19);
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/stratum_handler.c",
                144,
                "pre_stratum_connect",
                19,
                379,
                100,
                v37);
            }
            return;
          }
          ++v5;
          if ( dword_165B14 <= 3 )
          {
            V_LOCK(v10);
            V_INT((int)v33, "poolno");
            v15 = logfmt_raw((int)v37, 0x1000u);
            V_UNLOCK(v15);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/stratum_handler.c",
              144,
              "pre_stratum_connect",
              19,
              371,
              100,
              v37);
          }
          sleep(5u);
          v6 = v4;
          if ( *(_DWORD *)(v4 + 32) != -1 )
            goto LABEL_14;
        }
        V_LOCK(v9);
        get_current_pool();
        v16 = logfmt_raw((int)v37, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/stratum_handler.c",
          144,
          "pre_stratum_connect",
          19,
          385,
          20,
          v37);
        if ( v31 )
        {
          v31 = 0;
          switch_pools();
        }
      }
LABEL_14:
      if ( v4 != get_current_pool() )
        wait_pool_to_be_current_timeout(v4);
      if ( !stratum_socket_full(v4, v32) )
      {
        V_LOCK(0);
        V_INT((int)&v34, "poolno");
        v21 = logfmt_raw((int)v37, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/stratum_handler.c",
          144,
          "pre_stratum_connect",
          19,
          410,
          100,
          v37);
        goto LABEL_29;
      }
      v11 = (*(int (__fastcall **)(int))(v2 + 8))(v4);
      v12 = (void *)v11;
      if ( v11 )
        break;
LABEL_29:
      v22 = *(void (__fastcall **)(int))(v2 + 4);
      v23 = total_go;
      ++*(_DWORD *)(v4 + 1940);
      total_go = v23 + 1;
      v22(v4);
      pool_tclear(v4, (_BYTE *)(v4 + 1908), 0);
      v24 = pool_died(v4);
      V_LOCK(v24);
      V_INT((int)v35, "poolno");
      v25 = logfmt_raw((int)v37, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/stratum_handler.c",
        144,
        "pre_stratum_connect",
        19,
        422,
        20,
        v37);
      sleep(5u);
    }
    v36[0] = "null";
    if ( !(*(int (__fastcall **)(int, int, int, const char **))(v2 + 24))(v2, v4, v11, v36) )
      break;
    v13 = v36[0];
    if ( !strcmp(v36[0], "notify") )
    {
      v26 = pool_alive(v4);
      pools_active = 1;
      update_miner_working_status(v26);
      (*(void (__fastcall **)(int))(v2 + 4))(v4);
      free(v12);
      return;
    }
    if ( strcmp(v13, "set diff or target") )
      goto LABEL_21;
  }
  if ( (*(int (__fastcall **)(int, void *, int))(v2 + 28))(v2, v12, v4) )
  {
LABEL_21:
    free(v12);
    return;
  }
  free(v12);
  v27 = (*(int (__fastcall **)(int))(v2 + 4))(v4);
  V_LOCK(v27);
  v28 = logfmt_raw((int)v37, 0x1000u);
  V_UNLOCK(v28);
  v29 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/stratum_handler.c",
          144,
          "pre_stratum_connect",
          19,
          462,
          100,
          v37);
  V_LOCK(v29);
  v30 = logfmt_raw((int)v37, 0x1000u);
  V_UNLOCK(v30);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/stratum_handler.c",
    144,
    "pre_stratum_connect",
    19,
    463,
    100,
    v37);
}
