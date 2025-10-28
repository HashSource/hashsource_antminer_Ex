int __fastcall sub_3CE54(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r6
  void *v12; // r0
  size_t v13; // r7
  void *v14; // r0
  void *v15; // r0
  void *v16; // r7
  int v17; // r0
  int v18; // r0
  int v20; // r0
  int v21; // lr
  int v22; // r12
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  _BYTE v29[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v25 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v25);
    v21 = 100;
    v22 = 210;
    v23 = g_zc;
    LOWORD(v24) = 14768;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v26);
    v21 = 100;
    v22 = 215;
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 2) > 0xE )
  {
    V_LOCK(v10);
    v20 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v20);
    v21 = 60;
    v22 = 219;
LABEL_12:
    v23 = g_zc;
    LOWORD(v24) = (unsigned __int16)"stratum_parse_extranonce_dash";
LABEL_13:
    HIWORD(v24) = (unsigned int)"stratum_parse_extranonce_dash" >> 16;
    zlog(
      v23,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dash/frontend_dash.c",
      159,
      v24,
      29,
      v22,
      v21,
      v29);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v12 = *(void **)(a2 + 76);
  if ( v12 )
  {
    free(v12);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v13 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v13;
  v14 = calloc(1u, v13);
  *(_DWORD *)(a2 + 76) = v14;
  if ( v14 )
  {
    hex2bin((int)v14, (unsigned __int8 *)v8, v13);
    v15 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v15 )
      free(v15);
    v16 = calloc(1u, 4u);
    *(_DWORD *)(a2 + 1608) = v16;
    if ( v16 )
    {
      v17 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v17);
      v18 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dash/frontend_dash.c",
        159,
        "stratum_parse_extranonce_dash",
        29,
        248,
        20,
        v29);
      return 1;
    }
    else
    {
      V_LOCK(0);
      v28 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_dash/frontend_dash.c",
        159,
        "stratum_parse_extranonce_dash",
        29,
        240,
        100,
        v29);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_dash/frontend_dash.c",
      159,
      "stratum_parse_extranonce_dash",
      29,
      228,
      100,
      v29);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
