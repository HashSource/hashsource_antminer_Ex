int __fastcall sub_45FF0(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  size_t v12; // r8
  void *v13; // r0
  size_t v14; // r7
  void *v15; // r0
  void *v16; // r0
  void *v17; // r7
  int v18; // r0
  int v19; // r0
  int v21; // r0
  int v22; // r12
  int v23; // r2
  int v24; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  _BYTE v30[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v26);
    v22 = 100;
    v23 = 327;
    v24 = g_zc;
    LOWORD(v25) = 19556;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v27);
    v22 = 100;
    v23 = 332;
    goto LABEL_12;
  }
  v12 = v10;
  if ( v10 - 2 > 0x16 )
  {
    V_LOCK(v10);
    v21 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v21);
    v22 = 60;
    v23 = 336;
LABEL_12:
    v24 = g_zc;
    LOWORD(v25) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/"
                                    "release/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c";
LABEL_13:
    HIWORD(v25) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/rele"
                                "ase/build/godminer-origin_master/frontend/frontend_hns/frontend_hns.c" >> 16;
    zlog(v24, v25, 157, "stratum_parse_extranonce_hns", 28, v23, v22, v30);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v13 = *(void **)(a2 + 76);
  if ( v13 )
  {
    free(v13);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v14 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v14;
  v15 = calloc(1u, v14);
  *(_DWORD *)(a2 + 76) = v15;
  if ( v15 )
  {
    hex2bin((int)v15, (unsigned __int8 *)v8, v14);
    v16 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v16 )
    {
      free(v16);
      v12 = *(_DWORD *)(a2 + 1604);
    }
    v17 = calloc(1u, v12);
    *(_DWORD *)(a2 + 1608) = v17;
    if ( v17 )
    {
      v18 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v18);
      v19 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_hns/frontend_hns.c",
        157,
        "stratum_parse_extranonce_hns",
        28,
        361,
        20,
        v30);
      return 1;
    }
    else
    {
      V_LOCK(0);
      v29 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v29);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_hns/frontend_hns.c",
        157,
        "stratum_parse_extranonce_hns",
        28,
        355,
        100,
        v30);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_hns/frontend_hns.c",
      157,
      "stratum_parse_extranonce_hns",
      28,
      345,
      100,
      v30);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
