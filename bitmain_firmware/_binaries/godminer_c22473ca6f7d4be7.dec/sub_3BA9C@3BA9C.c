int __fastcall sub_3BA9C(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  size_t v10; // r0
  size_t v11; // r5
  size_t v12; // r6
  size_t v13; // r0
  int v14; // lr
  int v15; // r12
  int v16; // r0
  int v17; // r3
  void *v19; // r0
  size_t v20; // r9
  void *v21; // r0
  void *v22; // r0
  void *v23; // r6
  char v24[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    v14 = 100;
    v15 = 76;
    v16 = g_zc;
    LOWORD(v17) = 8288;
    goto LABEL_7;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  v11 = v10;
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    v14 = 100;
    v15 = 81;
    goto LABEL_6;
  }
  v12 = v10;
  if ( v10 - 4 > 0xB )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v11);
    V_UNLOCK();
    v14 = 60;
    v15 = 85;
    goto LABEL_6;
  }
  if ( v10 + (strlen(v8) >> 1) != 16 )
  {
    V_LOCK();
    v13 = strlen(v8);
    logfmt_raw(v24, 0x1000u, 0, "n1size %d, n2size %d, n1size + n2size != %d, in parse_extranonce", v13 >> 1, v11, 16);
    V_UNLOCK();
    v14 = 100;
    v15 = 89;
LABEL_6:
    v16 = g_zc;
    LOWORD(v17) = (unsigned __int16)"stratum_parse_extranonce_ckb";
LABEL_7:
    HIWORD(v17) = (unsigned int)"stratum_parse_extranonce_ckb" >> 16;
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      v17,
      28,
      v15,
      v14,
      v24);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
  v19 = *(void **)(a2 + 76);
  if ( v19 )
  {
    free(v19);
    *(_DWORD *)(a2 + 76) = 0;
  }
  v20 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 72) = v20;
  v21 = calloc(1u, v20);
  *(_DWORD *)(a2 + 76) = v21;
  if ( v21 )
  {
    hex2bin((int)v21, (unsigned __int8 *)v8, v20);
    memcpy((void *)(a2 + 488), *(const void **)(a2 + 76), *(_DWORD *)(a2 + 72));
    v22 = *(void **)(a2 + 1608);
    *(_DWORD *)(a2 + 1604) = v11;
    *(_DWORD *)(a2 + 80) = v11;
    if ( v22 )
    {
      free(v22);
      v12 = *(_DWORD *)(a2 + 1604);
    }
    v23 = calloc(1u, v12);
    *(_DWORD *)(a2 + 1608) = v23;
    if ( v23 )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", v8, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ckb/frontend_ckb.c",
        157,
        "stratum_parse_extranonce_ckb",
        28,
        116,
        20,
        v24);
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, "Failed to alloc xnonce2");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_ckb/frontend_ckb.c",
        157,
        "stratum_parse_extranonce_ckb",
        28,
        109,
        100,
        v24);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ckb/frontend_ckb.c",
      157,
      "stratum_parse_extranonce_ckb",
      28,
      98,
      100,
      v24);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
    return 0;
  }
}
