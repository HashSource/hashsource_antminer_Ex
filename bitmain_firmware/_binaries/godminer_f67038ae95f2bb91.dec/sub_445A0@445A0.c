int __fastcall sub_445A0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  char *v7; // r10
  _DWORD *v8; // r0
  char *v9; // r0
  _BOOL4 v10; // r3
  char *v11; // r9
  size_t v12; // r0
  _BOOL4 v13; // r4
  size_t v14; // r8
  int v15; // r0
  int v16; // r2
  const char *v18; // r0
  int v19; // r8
  char *v20; // r9
  int v21; // r8
  int v22; // r5
  int v23; // t1
  char *v24; // r5
  int v25; // t1
  char *v26; // r9
  int v27; // t1
  void *v28; // r0
  size_t v29; // r0
  char *s2; // [sp+14h] [bp-10A8h]
  pthread_mutex_t *mutex; // [sp+18h] [bp-10A4h]
  size_t v32; // [sp+1Ch] [bp-10A0h]
  int v33; // [sp+1Ch] [bp-10A0h]
  char *v34; // [sp+20h] [bp-109Ch]
  __int16 v35; // [sp+28h] [bp-1094h] BYREF
  __int16 src; // [sp+2Ch] [bp-1090h] BYREF
  _DWORD v37[2]; // [sp+30h] [bp-108Ch] BYREF
  char s[64]; // [sp+38h] [bp-1084h] BYREF
  char v39[64]; // [sp+78h] [bp-1044h] BYREF
  char v40[4100]; // [sp+B8h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v5);
  v6 = json_array_get(a3, 1u);
  v7 = (char *)json_string_value(v6);
  v8 = json_array_get(a3, 2u);
  v9 = (char *)json_string_value(v8);
  v10 = v9 == 0;
  if ( !s2 )
    v10 = 1;
  if ( !v7 )
    v10 = 1;
  v11 = v9;
  if ( v10 )
  {
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "pool job parse failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_notify_eth_2282",
      23,
      908,
      100,
      v40);
  }
  v32 = strlen(v7);
  v12 = strlen(v11);
  v13 = v12 == 0;
  if ( !v32 )
    v13 = 1;
  v14 = v12;
  mutex = (pthread_mutex_t *)(a2 + 1592);
  if ( v13 )
  {
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "invalid job hash len");
    V_UNLOCK();
    v15 = g_zc;
    v16 = 914;
LABEL_11:
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_notify_eth_2282",
      23,
      v16,
      100,
      v40);
    pthread_mutex_unlock(mutex);
    return 0;
  }
  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "seed_len header_len %d-%d", v32, v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    177,
    "stratum_notify_eth_2282",
    23,
    919,
    40,
    v40);
  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "job_id: %s", s2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    177,
    "stratum_notify_eth_2282",
    23,
    920,
    40,
    v40);
  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "header_hash: %s", v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    177,
    "stratum_notify_eth_2282",
    23,
    921,
    40,
    v40);
  V_LOCK();
  logfmt_raw(v40, 0x1000u, 0, "seed_hash: %s", v7);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
    177,
    "stratum_notify_eth_2282",
    23,
    922,
    40,
    v40);
  if ( a2 != -456 )
  {
    v18 = *(const char **)(a2 + 1580);
    if ( v18 && !strcmp(v18, s2) )
    {
      V_LOCK();
      logfmt_raw(
        v40,
        0x1000u,
        0,
        "Stratum notify: new job's job_id does not change, %s, %s",
        *(_DWORD *)(a2 + 1580),
        s2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        177,
        "stratum_notify_eth_2282",
        23,
        928,
        80,
        v40);
    }
    if ( strlen(s2) > 0x1F )
    {
      V_LOCK();
      v29 = strlen(s2);
      logfmt_raw(v40, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", s2, v29);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        177,
        "stratum_notify_eth_2282",
        23,
        931,
        80,
        v40);
    }
    v19 = v14 >> 1;
    pthread_mutex_lock(mutex);
    *(_BYTE *)(a2 + 444) = 1;
    if ( !hex2bin(a2 + 464, (unsigned __int8 *)v11, v19) )
    {
      V_LOCK();
      logfmt_raw(v40, 0x1000u, 0, "Failed to convert header_hash to header_hash_ptr in parse_notify");
      V_UNLOCK();
      v15 = g_zc;
      v16 = 940;
      goto LABEL_11;
    }
    v20 = *(char **)(a2 + 1588);
    if ( !v20 )
    {
      v20 = (char *)calloc(1u, 0x6Bu);
      *(_DWORD *)(a2 + 1588) = v20;
      if ( !v20 )
      {
        printf(aInvalidPointer, "work->private");
        return 0;
      }
    }
    v33 = v32 >> 1;
    if ( !hex2bin((int)v20, (unsigned __int8 *)v7, v33) )
    {
      V_LOCK();
      logfmt_raw(v40, 0x1000u, 0, "Failed to convert seed_hash to seed_hash_ptr in parse_notify");
      V_UNLOCK();
      v15 = g_zc;
      v16 = 952;
      goto LABEL_11;
    }
    v34 = v20 + 104;
    *(_DWORD *)(a2 + 1536) = get_epoch_number_eth_2282(v20);
    *((_WORD *)v20 + 52) = 0;
    v20[106] = 0;
    memcpy(v20 + 104, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    memset(s, 0, sizeof(s));
    memset(v39, 0, sizeof(v39));
    v35 = 0;
    if ( v19 )
    {
      v21 = a2 + 463 + v19;
      v22 = a2 + 463;
      do
      {
        v23 = *(unsigned __int8 *)++v22;
        sprintf((char *)&v35, "%02x", v23);
        strcat(s, (const char *)&v35);
      }
      while ( v22 != v21 );
    }
    if ( v33 )
    {
      v24 = v20 - 1;
      do
      {
        v25 = (unsigned __int8)*++v24;
        sprintf((char *)&v35, "%02x", v25);
        strcat(v39, (const char *)&v35);
      }
      while ( &v20[v33 - 1] != v24 );
    }
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "header_hash_line: %s", s);
    v26 = v20 + 103;
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_notify_eth_2282",
      23,
      970,
      40,
      v40);
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "seed_hash_line: %s", v39);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_notify_eth_2282",
      23,
      971,
      40,
      v40);
    v37[1] = 0;
    v37[0] = 0;
    src = 0;
    do
    {
      v27 = (unsigned __int8)*++v26;
      sprintf((char *)&src, "%02x", v27);
      strcat((char *)v37, (const char *)&src);
    }
    while ( v34 + 2 != v26 );
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "pool %d extranonce_line1: %s", *(_DWORD *)a2, v37);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_notify_eth_2282",
      23,
      979,
      40,
      v40);
    v28 = *(void **)(a2 + 1580);
    if ( v28 )
      free(v28);
    *(_DWORD *)(a2 + 1580) = _strdup(s2);
    V_LOCK();
    logfmt_raw(v40, 0x1000u, 0, "job_id: %s, epoch: %d", *(_DWORD *)(a2 + 1580), *(_DWORD *)(a2 + 1536));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_notify_eth_2282",
      23,
      985,
      40,
      v40);
  }
  pthread_mutex_unlock(mutex);
  return 1;
}
