int __fastcall sub_4722C(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r8
  int v10; // r0
  int v11; // lr
  int v12; // r12
  int v13; // r0
  int v14; // r3
  _DWORD *v16; // r0
  int v17; // r0
  size_t v18; // r6
  void *v19; // r0
  size_t v20; // r10
  void *v21; // r0
  size_t v22; // r1
  void *v23; // r0
  void *v24; // r4
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r12
  int v30; // r0
  _BYTE v31[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  if ( !v8 || (v8 = (char *)strlen(v8), ((unsigned __int8)v8 & 1) != 0) )
  {
    V_LOCK(v8);
    v10 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v10);
    v11 = 100;
    v12 = 67;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"stratum_parse_extranonce_kda";
LABEL_4:
    HIWORD(v14) = (unsigned int)"stratum_parse_extranonce_kda" >> 16;
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_kda/frontend_kda.c",
      157,
      v14,
      28,
      v12,
      v11,
      v31);
    return 0;
  }
  v16 = json_array_get(a3, a4 + 1);
  v17 = json_integer_value((int)v16);
  v18 = v17 - 5;
  if ( (unsigned int)(v17 - 5) > 3 )
  {
    V_LOCK(v17);
    v27 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v27);
    v11 = 60;
    v12 = 72;
    v13 = g_zc;
    LOWORD(v14) = 15088;
    goto LABEL_4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v19 = *(void **)(a2 + 76);
  if ( v19 )
  {
    free(v19);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v20 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 72) = v20;
  v21 = calloc(1u, v20);
  *(_DWORD *)(a2 + 76) = v21;
  if ( v21 )
  {
    hex2bin((int)v21, (unsigned __int8 *)v9, v20);
    v22 = v18;
    *(_DWORD *)(a2 + 1604) = v18;
    *(_DWORD *)(a2 + 80) = v18;
    if ( !v18 )
      goto LABEL_14;
    v23 = *(void **)(a2 + 1608);
    if ( v23 )
    {
      free(v23);
      v22 = *(_DWORD *)(a2 + 1604);
    }
    v24 = calloc(1u, v22);
    *(_DWORD *)(a2 + 1608) = v24;
    if ( v24 )
    {
LABEL_14:
      v25 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v25);
      v26 = logfmt_raw((int)v31, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_kda/frontend_kda.c",
        157,
        "stratum_parse_extranonce_kda",
        28,
        100,
        20,
        v31);
      return 1;
    }
    V_LOCK(0);
    v30 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v30);
    v29 = 92;
  }
  else
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v28);
    v29 = 81;
  }
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_kda/frontend_kda.c",
    157,
    "stratum_parse_extranonce_kda",
    28,
    v29,
    100,
    v31);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  return 0;
}
