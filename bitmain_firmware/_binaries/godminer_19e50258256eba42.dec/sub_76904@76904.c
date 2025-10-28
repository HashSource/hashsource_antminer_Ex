int __fastcall sub_76904(int a1, int a2, const json_t *a3, size_t a4)
{
  json_t *v4; // r0
  _BYTE v8[12]; // [sp+20h] [bp-100Ch] BYREF
  int v9; // [sp+1020h] [bp-Ch]
  char *s; // [sp+1024h] [bp-8h]

  v9 = a2 + 456;
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
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_parse_extranonce_zec",
      28,
      96,
      100,
      v8);
LABEL_14:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  if ( strlen(s) != 8 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "extranonce1 len is not 8");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_parse_extranonce_zec",
      28,
      102,
      100,
      v8);
    goto LABEL_14;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  if ( *(_DWORD *)(a2 + 80) )
  {
    free(*(void **)(a2 + 80));
    *(_DWORD *)(a2 + 80) = 0;
  }
  *(_DWORD *)(a2 + 76) = 4;
  *(_DWORD *)(a2 + 80) = malloc(*(_DWORD *)(a2 + 76));
  if ( !*(_DWORD *)(a2 + 80) )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Failed to mlloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_parse_extranonce_zec",
      28,
      112,
      100,
      v8);
    goto LABEL_14;
  }
  hex2bin(*(_BYTE **)(a2 + 80), s, *(_DWORD *)(a2 + 76));
  *(_DWORD *)(a2 + 84) = 2;
  if ( *(_DWORD *)(v9 + 1132) )
  {
    free(*(void **)(v9 + 1132));
    *(_DWORD *)(v9 + 1132) = 0;
  }
  *(_DWORD *)(v9 + 1132) = calloc(1u, 0xB28u);
  if ( *(_DWORD *)(v9 + 1132) )
  {
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", s, *(_DWORD *)(a2 + 84));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_parse_extranonce_zec",
      28,
      125,
      20,
      v8);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
