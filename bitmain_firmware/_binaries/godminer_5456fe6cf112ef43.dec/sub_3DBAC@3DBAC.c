int __fastcall sub_3DBAC(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  size_t v12; // r9
  void *v13; // r0
  size_t v14; // r7
  void *v15; // r0
  _BOOL4 v16; // r0
  int v17; // r0
  void *v18; // r0
  void *v19; // r9
  int v20; // r0
  int v21; // r0
  int v23; // r0
  int v24; // lr
  int v25; // r12
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  _BYTE v32[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v28);
    v24 = 100;
    v25 = 250;
    v26 = g_zc;
    LOWORD(v27) = 10104;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v29 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v29);
    v24 = 100;
    v25 = 255;
    goto LABEL_12;
  }
  v12 = v10;
  if ( v10 - 2 > 0xE )
  {
    V_LOCK(v10);
    v23 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v23);
    v24 = 60;
    v25 = 259;
LABEL_12:
    v26 = g_zc;
    LOWORD(v27) = (unsigned __int16)"stratum_parse_extranonce_dcr";
LABEL_13:
    HIWORD(v27) = (unsigned int)"stratum_parse_extranonce_dcr" >> 16;
    zlog(
      v26,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      v27,
      28,
      v25,
      v24,
      v32);
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
    v16 = hex2bin((int)v15, (unsigned __int8 *)v8, v14);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      "stratum_parse_extranonce_dcr",
      28,
      275,
      20,
      v32);
    v18 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v18 )
    {
      free(v18);
      v12 = *(_DWORD *)(a2 + 1604);
    }
    v19 = calloc(1u, v12);
    *(_DWORD *)(a2 + 1608) = v19;
    if ( v19 )
    {
      v20 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v20);
      v21 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_parse_extranonce_dcr",
        28,
        287,
        20,
        v32);
      return 1;
    }
    else
    {
      V_LOCK(0);
      v31 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v31);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dcr/frontend_dcr.c",
        157,
        "stratum_parse_extranonce_dcr",
        28,
        280,
        100,
        v32);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v30 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v30);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dcr/frontend_dcr.c",
      157,
      "stratum_parse_extranonce_dcr",
      28,
      268,
      100,
      v32);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
