int __fastcall sub_607B8(const json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  char *v7; // r0
  int epoch_number_eth; // r0
  _BYTE *v9; // r3
  _BYTE v13[12]; // [sp+18h] [bp-104Ch] BYREF
  _DWORD v14[3]; // [sp+1018h] [bp-4Ch] BYREF
  unsigned __int8 v15; // [sp+1027h] [bp-3Dh]
  _BYTE *v16; // [sp+1028h] [bp-3Ch]
  void *ptr; // [sp+102Ch] [bp-38h]
  int v18; // [sp+1030h] [bp-34h]
  int v19; // [sp+1034h] [bp-30h]
  unsigned __int64 v20; // [sp+1038h] [bp-2Ch]
  const char *v21; // [sp+1044h] [bp-20h]
  const char *v22; // [sp+1048h] [bp-1Ch]
  const char *v23; // [sp+104Ch] [bp-18h]
  char *nptr; // [sp+1050h] [bp-14h]
  size_t v25; // [sp+1054h] [bp-10h]
  signed int v26; // [sp+1058h] [bp-Ch]
  size_t v27; // [sp+105Ch] [bp-8h]

  v18 = a2 + 456;
  v19 = a2 + 1656;
  v20 = 0;
  if ( *(_BYTE *)(a2 + 1656) != 1 || !a1 || *(_DWORD *)a1 != 1 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "rpc2_job_decode",
      15,
      565,
      100,
      v13);
    return 0;
  }
  v3 = json_array_get(a1, 0);
  v21 = json_string_value(v3);
  v4 = json_array_get(a1, 1u);
  v22 = json_string_value(v4);
  v5 = json_array_get(a1, 2u);
  v23 = json_string_value(v5);
  v6 = json_array_get(a1, 3u);
  nptr = (char *)json_string_value(v6);
  v25 = strlen(v22 + 2);
  v26 = strlen(v21 + 2);
  v27 = strlen(v23 + 2);
  if ( !v25 || !v26 || !v27 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v25, v26, v27);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "rpc2_job_decode",
      15,
      579,
      100,
      v13);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(v19 + 124));
  *(_DWORD *)(v19 + 100) = v26 / 2;
  ptr = malloc(*(_DWORD *)(v19 + 100));
  if ( !hex2bin(ptr, (char *)v21 + 2, *(_DWORD *)(v19 + 100)) )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "rpc2_job_decode",
      15,
      590,
      100,
      v13);
    if ( ptr )
      free(ptr);
LABEL_12:
    pthread_mutex_unlock((pthread_mutex_t *)(v19 + 124));
LABEL_36:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "rpc2_job_decode",
      15,
      662,
      80,
      v13);
    return 0;
  }
  *(_DWORD *)(v19 + 92) = malloc(*(_DWORD *)(v19 + 100));
  if ( !*(_DWORD *)(v19 + 92) )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "rpc2_job_decode",
      15,
      599,
      100,
      v13);
    if ( ptr )
      free(ptr);
    goto LABEL_12;
  }
  memcpy(*(void **)(v19 + 92), ptr, *(_DWORD *)(v19 + 100));
  if ( ptr )
    free(ptr);
  if ( *(_DWORD *)(v19 + 120) )
    free(*(void **)(v19 + 120));
  pthread_mutex_unlock((pthread_mutex_t *)(v19 + 124));
  if ( v18 )
  {
    if ( !*(_DWORD *)(v19 + 92) )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "Work requested before it was received");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth/frontend_eth.c",
        164,
        "rpc2_job_decode",
        15,
        616,
        80,
        v13);
      goto LABEL_36;
    }
    memcpy((void *)(v18 + 8), *(const void **)(v19 + 92), *(_DWORD *)(v19 + 100));
    if ( !*(_DWORD *)(v18 + 1132) )
    {
      *(_DWORD *)(v18 + 1132) = calloc(1u, 0x6Bu);
      if ( !*(_DWORD *)(v18 + 1132) )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
    }
    v16 = *(_BYTE **)(v18 + 1132);
    hex2bin(v16, (char *)v22 + 2, 32);
    hex2bin((_BYTE *)(v18 + 1032), (char *)v23 + 2, v27);
    v15 = target_to_diff_eth(v18 + 1032);
    *(double *)(v18 + 1064) = (double)v15;
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(v18 + 1064);
    sprintf((char *)(a2 + 1976), "%13.2f", *(double *)(a2 + 1808));
    v14[0] = 0;
    v14[2] = 0;
    v14[1] = get_all_created_runtime(v14);
    if ( *(_DWORD *)(v18 + 1124) )
      free(*(void **)(v18 + 1124));
    v7 = strdup("HAPPY");
    *(_DWORD *)(v18 + 1124) = v7;
    epoch_number_eth = get_epoch_number_eth(v16);
    *(_DWORD *)(v18 + 1080) = epoch_number_eth;
    if ( nptr )
    {
      v20 = strtoull(nptr, 0, 16);
      *((_QWORD *)v16 + 12) = v20;
    }
    else
    {
      v9 = v16;
      v16[96] = 0;
      v9[97] = 0;
      v9[98] = 0;
      v9[99] = 0;
      v9[100] = 0;
      v9[101] = 0;
      v9[102] = 0;
      v9[103] = 0;
    }
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "epoch:%d targetdiff:%d", *(_DWORD *)(v18 + 1080), v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "rpc2_job_decode",
      15,
      653,
      20,
      v13);
  }
  if ( *(_DWORD *)(v19 + 92) )
    free(*(void **)(v19 + 92));
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
