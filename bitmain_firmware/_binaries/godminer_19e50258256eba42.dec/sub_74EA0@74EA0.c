bool __fastcall sub_74EA0(int a1, int a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  size_t v9; // r0
  char *v11; // r0
  int epoch_number_rvn; // r0
  _BYTE v16[20]; // [sp+20h] [bp-1054h] BYREF
  int v17; // [sp+1020h] [bp-54h] BYREF
  _DWORD *all_created_runtime; // [sp+1024h] [bp-50h]
  unsigned __int8 v19; // [sp+102Bh] [bp-49h]
  _BYTE *v20; // [sp+102Ch] [bp-48h]
  int v21; // [sp+1030h] [bp-44h]
  size_t v22; // [sp+1034h] [bp-40h]
  size_t v23; // [sp+1038h] [bp-3Ch]
  size_t v24; // [sp+103Ch] [bp-38h]
  char *src; // [sp+1040h] [bp-34h]
  int i; // [sp+1044h] [bp-30h]
  int v27; // [sp+1048h] [bp-2Ch]
  char v28; // [sp+104Eh] [bp-26h]
  bool v29; // [sp+104Fh] [bp-25h]
  int v30; // [sp+1050h] [bp-24h]
  void *ptr; // [sp+1054h] [bp-20h]
  char *s2; // [sp+1058h] [bp-1Ch]
  char *v33; // [sp+105Ch] [bp-18h]
  char *s; // [sp+1060h] [bp-14h]
  char *v35; // [sp+1064h] [bp-10h]
  __int64 v36; // [sp+1068h] [bp-Ch]

  v29 = 0;
  v28 = 0;
  v27 = a2 + 456;
  ptr = 0;
  v30 = 0;
  v3 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v3);
  v4 = json_array_get(a3, 1u);
  v33 = (char *)json_string_value(v4);
  v5 = json_array_get(a3, 2u);
  s = (char *)json_string_value(v5);
  v6 = json_array_get(a3, 3u);
  v35 = (char *)json_string_value(v6);
  v7 = json_array_get(a3, 5u);
  v36 = json_integer_value((int)v7);
  v8 = json_array_get(a3, 6u);
  src = (char *)json_string_value(v8);
  v24 = strlen(s);
  v23 = strlen(v33);
  v22 = strlen(v35);
  if ( !v24 || !v23 || !v22 )
  {
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v24, v23, v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      525,
      100,
      v16);
    return v29;
  }
  if ( v27 )
  {
    if ( *(_DWORD *)(v27 + 1124) && !strcmp(*(const char **)(v27 + 1124), s2) )
    {
      V_LOCK();
      logfmt_raw(
        v16,
        0x1000u,
        0,
        "Stratum notify: new job's job_id does not change, %s, %s",
        *(_DWORD *)(v27 + 1124),
        s2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        540,
        80,
        v16);
    }
    if ( strlen(s2) > 0x1F )
    {
      V_LOCK();
      v9 = strlen(s2);
      logfmt_raw(v16, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        543,
        80,
        v16);
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    v21 = *(_DWORD *)(v27 + 1124);
    snprintf((char *)(a2 + 356), 9u, "%s", src);
    strcpy((char *)(v27 + 1100), src);
    *(_BYTE *)(a2 + 444) = v28;
    ptr = calloc(v23 >> 1, 1u);
    if ( !ptr )
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "header_ptr failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        553,
        20,
        v16);
    }
    if ( !v33 )
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "header_hash failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        555,
        20,
        v16);
    }
    v29 = hex2bin(ptr, v33, v23 >> 1);
    if ( !v29 )
    {
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "Failed to convert header to header_ptr in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        559,
        100,
        v16);
      if ( ptr )
      {
        free(ptr);
        ptr = 0;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK();
      logfmt_raw(v16, 0x1000u, 0, "%s", "stratum_notify_rvn");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        164,
        "stratum_notify_rvn",
        18,
        601,
        80,
        v16);
      return v29;
    }
    memcpy((void *)(v27 + 8), ptr, v23 >> 1);
    if ( *(_DWORD *)(v27 + 1132) )
    {
      free(*(void **)(v27 + 1132));
      *(_DWORD *)(v27 + 1132) = 0;
    }
    *(_DWORD *)(v27 + 1132) = calloc(1u, 0x68u);
    if ( !*(_DWORD *)(v27 + 1132) )
    {
      printf("invalid pointer(%s)!\n", "work->private");
      return 0;
    }
    v20 = *(_BYTE **)(v27 + 1132);
    hex2bin(v20, s, v24 >> 1);
    hex2bin((_BYTE *)(v27 + 1032), v35, v22 >> 1);
    *((_QWORD *)v20 + 12) = v36;
    v19 = target_to_diff_rvn(v27 + 1032);
    *(double *)(v27 + 1064) = (double)v19;
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(v27 + 1064);
    sprintf((char *)(a2 + 1976), "%13.2f", *(double *)(a2 + 1808));
    v17 = 0;
    i = 0;
    all_created_runtime = get_all_created_runtime(&v17);
    for ( i = 0; i < v17; ++i )
      *(_DWORD *)(all_created_runtime[i] + 472) = v19;
    if ( *(_DWORD *)(v27 + 1124) )
      free(*(void **)(v27 + 1124));
    v11 = strdup(s2);
    *(_DWORD *)(v27 + 1124) = v11;
    epoch_number_rvn = get_epoch_number_rvn(v20);
    *(_DWORD *)(v27 + 1080) = epoch_number_rvn;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, "epoch:%d targetdiff:%02x", *(_DWORD *)(v27 + 1080), v19);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      164,
      "stratum_notify_rvn",
      18,
      588,
      40,
      v16);
  }
  if ( ptr )
  {
    free(ptr);
    ptr = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
