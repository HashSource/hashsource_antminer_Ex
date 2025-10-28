int __fastcall sub_3C2E4(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r5
  size_t v12; // r6
  size_t v13; // r0
  int v14; // r0
  int v15; // lr
  int v16; // r12
  int v17; // r0
  int v18; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r0
  void *v23; // r0
  size_t v24; // r8
  void *v25; // r0
  void *v26; // r0
  void *v27; // r6
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
    v20 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v20);
    v15 = 100;
    v16 = 76;
    v17 = g_zc;
    LOWORD(v18) = 14364;
    goto LABEL_7;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v21);
    v15 = 100;
    v16 = 81;
    goto LABEL_6;
  }
  v12 = v10;
  if ( v10 - 4 > 0xB )
  {
    V_LOCK(v10);
    v22 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v22);
    v15 = 60;
    v16 = 85;
    goto LABEL_6;
  }
  v13 = v10 + (strlen(v8) >> 1);
  if ( v13 != 16 )
  {
    V_LOCK(v13);
    strlen(v8);
    v14 = logfmt_raw((int)v32, 0x1000u);
    V_UNLOCK(v14);
    v15 = 100;
    v16 = 89;
LABEL_6:
    v17 = g_zc;
    LOWORD(v18) = (unsigned __int16)"stratum_parse_extranonce_ckb";
LABEL_7:
    HIWORD(v18) = (unsigned int)"stratum_parse_extranonce_ckb" >> 16;
    zlog(
      v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      v18,
      28,
      v16,
      v15,
      v32);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v23 = *(void **)(a2 + 76);
  if ( v23 )
  {
    free(v23);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v24 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v24;
  v25 = calloc(1u, v24);
  *(_DWORD *)(a2 + 76) = v25;
  if ( v25 )
  {
    hex2bin((int)v25, (unsigned __int8 *)v8, v24);
    memcpy((void *)(a2 + 488), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
    v26 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v26 )
    {
      free(v26);
      v12 = *(_DWORD *)(a2 + 1604);
    }
    v27 = calloc(1u, v12);
    *(_DWORD *)(a2 + 1608) = v27;
    if ( v27 )
    {
      v28 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v28);
      v29 = logfmt_raw((int)v32, 0x1000u);
      V_UNLOCK(v29);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ckb/frontend_ckb.c",
        157,
        "stratum_parse_extranonce_ckb",
        28,
        116,
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
        "n_master/frontend/frontend_ckb/frontend_ckb.c",
        157,
        "stratum_parse_extranonce_ckb",
        28,
        109,
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
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      "stratum_parse_extranonce_ckb",
      28,
      98,
      100,
      v32);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
