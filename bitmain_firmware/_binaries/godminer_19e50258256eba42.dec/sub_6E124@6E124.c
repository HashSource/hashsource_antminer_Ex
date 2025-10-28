int __fastcall sub_6E124(int a1, int a2, const json_t *a3, size_t a4)
{
  json_t *v4; // r0
  json_t *v5; // r0
  _BYTE v11[20]; // [sp+20h] [bp-1014h] BYREF
  size_t *v12; // [sp+1020h] [bp-14h]
  int v13; // [sp+1024h] [bp-10h]
  char *s; // [sp+1028h] [bp-Ch]
  int v15; // [sp+102Ch] [bp-8h]

  v15 = 0;
  v13 = a2 + 456;
  v4 = json_array_get(a3, a4);
  s = (char *)json_string_value(v4);
  if ( !s || (strlen(s) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_parse_extranonce_kda",
      28,
      65,
      100,
      v11);
    return 0;
  }
  v5 = json_array_get(a3, a4 + 1);
  v15 = json_integer_value((int)v5);
  if ( v15 <= 4 || v15 > 8 )
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Get invalid n2size in parse_extranonce, xn2_size=%d", v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_parse_extranonce_kda",
      28,
      71,
      100,
      v11);
    return 0;
  }
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
    logfmt_raw(v11, 0x1000u, 0, "Failed to alloc xnonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_parse_extranonce_kda",
      28,
      79,
      100,
      v11);
    return 0;
  }
  hex2bin(*(_BYTE **)(a2 + 80), s, *(_DWORD *)(a2 + 76));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  if ( *(_DWORD *)(v13 + 1132) )
  {
    free(*(void **)(v13 + 1132));
    *(_DWORD *)(v13 + 1132) = 0;
  }
  *(_DWORD *)(v13 + 1132) = calloc(1u, 0x14u);
  if ( *(_DWORD *)(v13 + 1132) )
  {
    v12 = *(size_t **)(v13 + 1132);
    *v12 = v15 - 5;
    *(_DWORD *)(a2 + 84) = *v12;
    memset(v12 + 1, 0, *v12);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "Stratum set nonce1 %s, nonce2 size=%d", s, v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_parse_extranonce_kda",
      28,
      94,
      20,
      v11);
    return 1;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
