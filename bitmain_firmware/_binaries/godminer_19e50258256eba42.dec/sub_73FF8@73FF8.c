int __fastcall sub_73FF8(const json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  _BYTE *v7; // r3
  _BYTE v11[64]; // [sp+1Ch] [bp-1040h] BYREF
  unsigned __int8 v12; // [sp+101Fh] [bp-3Dh]
  _BYTE *v13; // [sp+1020h] [bp-3Ch]
  void *ptr; // [sp+1024h] [bp-38h]
  int v15; // [sp+1028h] [bp-34h]
  int v16; // [sp+102Ch] [bp-30h]
  unsigned __int64 v17; // [sp+1030h] [bp-2Ch]
  const char *v18; // [sp+103Ch] [bp-20h]
  const char *v19; // [sp+1040h] [bp-1Ch]
  const char *v20; // [sp+1044h] [bp-18h]
  char *nptr; // [sp+1048h] [bp-14h]
  size_t v22; // [sp+104Ch] [bp-10h]
  signed int v23; // [sp+1050h] [bp-Ch]
  size_t v24; // [sp+1054h] [bp-8h]

  v15 = a2 + 456;
  v16 = a2 + 1656;
  v17 = 0;
  if ( *(_BYTE *)(a2 + 1656) != 1 || !a1 || *(_DWORD *)a1 != 1 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "rpc2_job_decode",
      15,
      309,
      100,
      v11);
    return 0;
  }
  v3 = json_array_get(a1, 0);
  v18 = json_string_value(v3);
  v4 = json_array_get(a1, 1u);
  v19 = json_string_value(v4);
  v5 = json_array_get(a1, 2u);
  v20 = json_string_value(v5);
  v6 = json_array_get(a1, 3u);
  nptr = (char *)json_string_value(v6);
  v22 = strlen(v19 + 2);
  v23 = strlen(v18 + 2);
  v24 = strlen(v20 + 2);
  if ( !v22 || !v23 || !v24 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v22, v23, v24);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "rpc2_job_decode",
      15,
      323,
      100,
      v11);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(v16 + 124));
  *(_DWORD *)(v16 + 100) = v23 / 2;
  ptr = malloc(*(_DWORD *)(v16 + 100));
  if ( !hex2bin(ptr, (char *)v18 + 2, *(_DWORD *)(v16 + 100)) )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "rpc2_job_decode",
      15,
      334,
      100,
      v11);
    if ( ptr )
      free(ptr);
LABEL_12:
    pthread_mutex_unlock((pthread_mutex_t *)(v16 + 124));
LABEL_37:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "rpc2_job_decode",
      15,
      397,
      80,
      v11);
    return 0;
  }
  *(_DWORD *)(v16 + 92) = malloc(*(_DWORD *)(v16 + 100));
  if ( !*(_DWORD *)(v16 + 92) )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "rpc2_job_decode",
      15,
      343,
      100,
      v11);
    if ( ptr )
      free(ptr);
    goto LABEL_12;
  }
  memcpy(*(void **)(v16 + 92), ptr, *(_DWORD *)(v16 + 100));
  if ( ptr )
    free(ptr);
  if ( *(_DWORD *)(v16 + 120) )
    free(*(void **)(v16 + 120));
  pthread_mutex_unlock((pthread_mutex_t *)(v16 + 124));
  if ( v15 )
  {
    if ( !*(_DWORD *)(v16 + 92) )
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "Work requested before it was received");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "rpc2_job_decode",
        15,
        360,
        80,
        v11);
      goto LABEL_37;
    }
    memcpy((void *)(v15 + 8), *(const void **)(v16 + 92), *(_DWORD *)(v16 + 100));
    if ( *(_DWORD *)(v15 + 1132) )
    {
      free(*(void **)(v15 + 1132));
      *(_DWORD *)(v15 + 1132) = 0;
    }
    *(_DWORD *)(v15 + 1132) = calloc(1u, 0x68u);
    if ( !*(_DWORD *)(v15 + 1132) )
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
    v13 = *(_BYTE **)(v15 + 1132);
    hex2bin(v13, (char *)v19 + 2, 32);
    hex2bin((_BYTE *)(v15 + 1032), (char *)v20 + 2, v24);
    v12 = target_to_diff_rvn(v15 + 1032);
    *(double *)(v15 + 1064) = (double)v12;
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(v15 + 1064);
    if ( *(_DWORD *)(v15 + 1124) )
      free(*(void **)(v15 + 1124));
    *(_DWORD *)(v15 + 1124) = strdup("HAPPY");
    *(_DWORD *)(v15 + 1080) = get_epoch_number_rvn(v13);
    if ( nptr )
    {
      v17 = strtoull(nptr, 0, 16);
      *((_QWORD *)v13 + 12) = v17;
    }
    else
    {
      v7 = v13;
      v13[96] = 0;
      v7[97] = 0;
      v7[98] = 0;
      v7[99] = 0;
      v7[100] = 0;
      v7[101] = 0;
      v7[102] = 0;
      v7[103] = 0;
    }
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "epoch:%d targetdiff:%d", *(_DWORD *)(v15 + 1080), v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "rpc2_job_decode",
      15,
      388,
      20,
      v11);
  }
  if ( *(_DWORD *)(v16 + 92) )
    free(*(void **)(v16 + 92));
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
