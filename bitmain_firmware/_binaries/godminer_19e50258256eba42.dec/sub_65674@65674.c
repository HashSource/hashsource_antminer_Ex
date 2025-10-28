int __fastcall sub_65674(const json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  char *v7; // r0
  _BYTE *v8; // r3
  _BYTE v12[8]; // [sp+1Ch] [bp-1048h] BYREF
  _DWORD v13[3]; // [sp+101Ch] [bp-48h] BYREF
  unsigned __int8 v14; // [sp+102Bh] [bp-39h]
  _BYTE *v15; // [sp+102Ch] [bp-38h]
  void *ptr; // [sp+1030h] [bp-34h]
  size_t v17; // [sp+1034h] [bp-30h]
  signed int v18; // [sp+1038h] [bp-2Ch]
  size_t v19; // [sp+103Ch] [bp-28h]
  int v20; // [sp+1040h] [bp-24h]
  int v21; // [sp+1044h] [bp-20h]
  unsigned __int64 v22; // [sp+1048h] [bp-1Ch]
  const char *v23; // [sp+1050h] [bp-14h]
  const char *v24; // [sp+1054h] [bp-10h]
  const char *v25; // [sp+1058h] [bp-Ch]
  char *nptr; // [sp+105Ch] [bp-8h]

  v20 = a2 + 456;
  v21 = a2 + 1656;
  v22 = 0;
  if ( *(_BYTE *)(a2 + 1656) != 1 || !a1 || *(_DWORD *)a1 != 1 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      569,
      100,
      v12);
    return 0;
  }
  v3 = json_array_get(a1, 0);
  v23 = json_string_value(v3);
  v4 = json_array_get(a1, 1u);
  v24 = json_string_value(v4);
  v5 = json_array_get(a1, 2u);
  v25 = json_string_value(v5);
  v6 = json_array_get(a1, 3u);
  nptr = (char *)json_string_value(v6);
  v19 = strlen(v24 + 2);
  v18 = strlen(v23 + 2);
  v17 = strlen(v25 + 2);
  if ( !v19 || !v18 || !v17 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v19, v18, v17);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      583,
      100,
      v12);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(v21 + 124));
  *(_DWORD *)(v21 + 100) = v18 / 2;
  ptr = malloc(*(_DWORD *)(v21 + 100));
  if ( !hex2bin(ptr, (char *)v23 + 2, *(_DWORD *)(v21 + 100)) )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      594,
      100,
      v12);
    if ( ptr )
      free(ptr);
LABEL_12:
    pthread_mutex_unlock((pthread_mutex_t *)(v21 + 124));
LABEL_35:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      682,
      80,
      v12);
    return 0;
  }
  *(_DWORD *)(v21 + 92) = malloc(*(_DWORD *)(v21 + 100));
  if ( !*(_DWORD *)(v21 + 92) )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "rpc2_job_decode",
      15,
      603,
      100,
      v12);
    if ( ptr )
      free(ptr);
    goto LABEL_12;
  }
  memcpy(*(void **)(v21 + 92), ptr, *(_DWORD *)(v21 + 100));
  if ( ptr )
    free(ptr);
  if ( *(_DWORD *)(v21 + 120) )
    free(*(void **)(v21 + 120));
  pthread_mutex_unlock((pthread_mutex_t *)(v21 + 124));
  if ( v20 )
  {
    if ( !*(_DWORD *)(v21 + 92) )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "Work requested before it was received");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "rpc2_job_decode",
        15,
        620,
        80,
        v12);
      goto LABEL_35;
    }
    memcpy((void *)(v20 + 8), *(const void **)(v21 + 92), *(_DWORD *)(v21 + 100));
    if ( !*(_DWORD *)(v20 + 1132) )
    {
      *(_DWORD *)(v20 + 1132) = calloc(1u, 0x6Bu);
      if ( !*(_DWORD *)(v20 + 1132) )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
    }
    v15 = *(_BYTE **)(v20 + 1132);
    hex2bin(v15, (char *)v24 + 2, 32);
    hex2bin((_BYTE *)(v20 + 1032), (char *)v25 + 2, v17);
    v14 = target_to_diff_eth_2282(v20 + 1032);
    *(double *)(v20 + 1064) = (double)v14;
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(v20 + 1064);
    sprintf((char *)(a2 + 1976), "%13.2f", *(double *)(a2 + 1808));
    v13[0] = 0;
    v13[2] = 0;
    v13[1] = get_all_created_runtime(v13);
    if ( *(_DWORD *)(v20 + 1124) )
      free(*(void **)(v20 + 1124));
    v7 = strdup("HAPPY");
    *(_DWORD *)(v20 + 1124) = v7;
    if ( nptr )
    {
      v22 = strtoull(nptr, 0, 16);
      *((_QWORD *)v15 + 12) = v22;
    }
    else
    {
      v8 = v15;
      v15[96] = 0;
      v8[97] = 0;
      v8[98] = 0;
      v8[99] = 0;
      v8[100] = 0;
      v8[101] = 0;
      v8[102] = 0;
      v8[103] = 0;
    }
  }
  if ( *(_DWORD *)(v21 + 92) )
    free(*(void **)(v21 + 92));
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
