int __fastcall stratum_parse_extranonce_ae(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r6
  size_t v12; // r8
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
  size_t v24; // r9
  void *v25; // r0
  void *v26; // r0
  void *v27; // r8
  unsigned int v28; // r3
  int v29; // r2
  char v30; // r1
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  _BYTE v35[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v20 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v20);
    v15 = 100;
    v16 = 73;
    v17 = g_zc;
    LOWORD(v18) = 6992;
    goto LABEL_7;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v21);
    v15 = 100;
    v16 = 78;
    goto LABEL_6;
  }
  v12 = v10;
  if ( v10 - 2 > 6 )
  {
    V_LOCK(v10);
    v22 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v22);
    v15 = 40;
    v16 = 82;
    goto LABEL_6;
  }
  v13 = v10 + (strlen(v8) >> 1);
  if ( v13 != 8 )
  {
    V_LOCK(v13);
    v14 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v14);
    v15 = 100;
    v16 = 86;
LABEL_6:
    v17 = g_zc;
    LOWORD(v18) = (unsigned __int16)"stratum_parse_extranonce_ae";
LABEL_7:
    HIWORD(v18) = (unsigned int)"stratum_parse_extranonce_ae" >> 16;
    zlog(
      v17,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      v18,
      27,
      v16,
      v15,
      v35);
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
      if ( *(_DWORD *)(a2 + 72) )
      {
        v28 = 0;
        v29 = a2 + 487;
        do
        {
          v30 = *(_BYTE *)(*(_DWORD *)(a2 + 76) + v28++);
          *(_BYTE *)++v29 = v30;
        }
        while ( *(_DWORD *)(a2 + 72) > v28 );
      }
      v31 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      V_LOCK(v31);
      v32 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ae/frontend_ae.c",
        155,
        "stratum_parse_extranonce_ae",
        27,
        116,
        20,
        v35);
      return 1;
    }
    else
    {
      V_LOCK(0);
      v34 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ae/frontend_ae.c",
        155,
        "stratum_parse_extranonce_ae",
        27,
        105,
        100,
        v35);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v33 = logfmt_raw((int)v35, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_parse_extranonce_ae",
      27,
      95,
      100,
      v35);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    return 0;
  }
}
