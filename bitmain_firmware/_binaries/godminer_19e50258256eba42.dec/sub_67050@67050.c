bool __fastcall sub_67050(int a1, int a2, const json_t *a3)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  size_t v6; // r0
  int epoch_number_eth_2282; // r0
  char *v9; // r0
  _BYTE v13[56]; // [sp+24h] [bp-1038h] BYREF
  char src[4]; // [sp+1024h] [bp-38h] BYREF
  _DWORD dest[2]; // [sp+1028h] [bp-34h] BYREF
  _BYTE *v16; // [sp+1030h] [bp-2Ch]
  int v17; // [sp+1034h] [bp-28h]
  size_t v18; // [sp+1038h] [bp-24h]
  int i; // [sp+103Ch] [bp-20h]
  bool v20; // [sp+1042h] [bp-1Ah]
  char v21; // [sp+1043h] [bp-19h]
  int v22; // [sp+1044h] [bp-18h]
  char *s2; // [sp+1048h] [bp-14h]
  char *s; // [sp+104Ch] [bp-10h]
  char *v25; // [sp+1050h] [bp-Ch]
  size_t v26; // [sp+1054h] [bp-8h]

  v20 = 0;
  v21 = 1;
  v22 = a2 + 456;
  v3 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v3);
  v4 = json_array_get(a3, 1u);
  s = (char *)json_string_value(v4);
  v5 = json_array_get(a3, 2u);
  v25 = (char *)json_string_value(v5);
  if ( !s2 || !v25 || !s )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "pool job parse failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_notify_eth_2282",
      23,
      948,
      100,
      v13);
  }
  v26 = strlen(s);
  v18 = strlen(v25);
  if ( !v26 || !v18 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "invalid job hash len");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_notify_eth_2282",
      23,
      954,
      100,
      v13);
LABEL_28:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return v20;
  }
  if ( !v22 )
    goto LABEL_27;
  if ( *(_DWORD *)(v22 + 1124) && !strcmp(*(const char **)(v22 + 1124), s2) )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Stratum notify: new job's job_id does not change, %s, %s", *(_DWORD *)(v22 + 1124), s2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_notify_eth_2282",
      23,
      968,
      80,
      v13);
  }
  if ( strlen(s2) > 0x1F )
  {
    V_LOCK();
    v6 = strlen(s2);
    logfmt_raw(v13, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_notify_eth_2282",
      23,
      971,
      80,
      v13);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v17 = *(_DWORD *)(v22 + 1124);
  *(_BYTE *)(a2 + 444) = v21;
  v20 = hex2bin((_BYTE *)(v22 + 8), v25, v18 >> 1);
  if ( !v20 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "Failed to convert header_hash to header_hash_ptr in parse_notify");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_notify_eth_2282",
      23,
      980,
      100,
      v13);
    goto LABEL_28;
  }
  if ( *(_DWORD *)(v22 + 1132) || (*(_DWORD *)(v22 + 1132) = calloc(1u, 0x6Bu)) != 0 )
  {
    v16 = *(_BYTE **)(v22 + 1132);
    v20 = hex2bin(v16, s, v26 >> 1);
    if ( !v20 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "Failed to convert seed_hash to seed_hash_ptr in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "stratum_notify_eth_2282",
        23,
        992,
        100,
        v13);
      goto LABEL_28;
    }
    epoch_number_eth_2282 = get_epoch_number_eth_2282(v16);
    *(_DWORD *)(v22 + 1080) = epoch_number_eth_2282;
    memset(v16 + 104, 0, 3u);
    memcpy(v16 + 104, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    dest[0] = 0;
    dest[1] = 0;
    *(_WORD *)src = 0;
    for ( i = 0; i <= 2; ++i )
    {
      sprintf(src, "%02x", (unsigned __int8)v16[i + 104]);
      strcat((char *)dest, src);
    }
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "pool %d extranonce_line1: %s", *(_DWORD *)a2, dest);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_notify_eth_2282",
      23,
      1019,
      40,
      v13);
    if ( *(_DWORD *)(v22 + 1124) )
      free(*(void **)(v22 + 1124));
    v9 = strdup(s2);
    *(_DWORD *)(v22 + 1124) = v9;
LABEL_27:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  printf("invalid pointer(%s)!\n", "work->private");
  return 0;
}
