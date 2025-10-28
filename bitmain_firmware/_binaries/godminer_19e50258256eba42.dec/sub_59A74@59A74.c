int __fastcall sub_59A74(int a1, int a2, const json_t *a3, size_t a4)
{
  json_t *v4; // r0
  json_t *v5; // r0
  size_t v6; // r0
  _BYTE v12[20]; // [sp+20h] [bp-1014h] BYREF
  size_t *v13; // [sp+1020h] [bp-14h]
  int v14; // [sp+1024h] [bp-10h]
  char *s; // [sp+1028h] [bp-Ch]
  int v16; // [sp+102Ch] [bp-8h]

  v16 = 0;
  v14 = a2 + 456;
  v4 = json_array_get(a3, a4);
  s = (char *)json_string_value(v4);
  if ( !s )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      73,
      100,
      v12);
    return 0;
  }
  v5 = json_array_get(a3, a4 + 1);
  v16 = json_integer_value((int)v5);
  if ( !v16 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Failed to get extranonce2_size");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      78,
      100,
      v12);
    return 0;
  }
  if ( v16 <= 3 || v16 > 15 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Failed to get valid n2size in parse_extranonce, xn2_size=%d", v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      82,
      100,
      v12);
    return 0;
  }
  if ( (strlen(s) >> 1) + v16 != 16 )
  {
    V_LOCK();
    v6 = strlen(s);
    logfmt_raw(v12, 0x1000u, 0, "n1size %d, n2size %d, n1size + n2size != %d, in parse_extranonce", v6 >> 1, v16, 16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      86,
      100,
      v12);
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
    logfmt_raw(v12, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      95,
      100,
      v12);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  hex2bin(*(_BYTE **)(a2 + 80), s, *(_DWORD *)(a2 + 76));
  memcpy((void *)(v14 + 40), *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
  *(_DWORD *)(a2 + 84) = v16;
  if ( *(_DWORD *)(v14 + 1132) )
  {
    free(*(void **)(v14 + 1132));
    *(_DWORD *)(v14 + 1132) = 0;
  }
  *(_DWORD *)(v14 + 1132) = calloc(1u, 0x14u);
  if ( *(_DWORD *)(v14 + 1132) )
  {
    v13 = *(size_t **)(v14 + 1132);
    *v13 = v16;
    memset(v13 + 1, 0, *v13);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", s, v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_parse_extranonce_ckb",
      28,
      121,
      20,
      v12);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
