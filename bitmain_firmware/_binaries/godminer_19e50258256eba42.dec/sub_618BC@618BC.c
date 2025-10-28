int __fastcall sub_618BC(int a1, int a2, const json_t *a3, size_t a4)
{
  json_t *v4; // r0
  _BYTE v8[16]; // [sp+24h] [bp-1010h] BYREF
  int v9; // [sp+1024h] [bp-10h]
  char *s; // [sp+1028h] [bp-Ch]
  int v11; // [sp+102Ch] [bp-8h]

  v11 = a2 + 456;
  v4 = json_array_get(a3, a4);
  s = (char *)json_string_value(v4);
  if ( !s )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_parse_extranonce_eth",
      28,
      794,
      100,
      v8);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  if ( *(_DWORD *)(a2 + 80) )
  {
    free(*(void **)(a2 + 80));
    *(_DWORD *)(a2 + 80) = 0;
  }
  *(_DWORD *)(a2 + 76) = strlen(s) >> 1;
  *(_DWORD *)(a2 + 80) = calloc(1u, *(_DWORD *)(a2 + 76));
  if ( !*(_DWORD *)(a2 + 80) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_parse_extranonce_eth",
      28,
      804,
      100,
      v8);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  hex2bin(*(_BYTE **)(a2 + 80), s, *(_DWORD *)(a2 + 76));
  if ( *(_DWORD *)(v11 + 1132) || (*(_DWORD *)(v11 + 1132) = calloc(1u, 0x6Bu)) != 0 )
  {
    v9 = *(_DWORD *)(v11 + 1132);
    memset((void *)(v9 + 104), 0, 3u);
    memcpy((void *)(v9 + 104), *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
