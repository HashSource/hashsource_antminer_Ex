int __fastcall sub_47800(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  const char *v6; // r0
  unsigned __int8 *v7; // r7
  size_t v8; // r0
  int v9; // r0
  int v10; // r12
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0
  void *v15; // r6
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _BYTE v20[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (const char *)json_string_value(v5);
  v7 = (unsigned __int8 *)v6;
  if ( !v6 )
  {
    V_LOCK(0);
    v18 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v18);
    v10 = 96;
    goto LABEL_4;
  }
  v8 = strlen(v6);
  if ( v8 != 8 )
  {
    V_LOCK(v8);
    v9 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v9);
    v10 = 102;
LABEL_4:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      167,
      "stratum_parse_extranonce_zec",
      28,
      v10,
      100,
      v20);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v12 = *(void **)(a2 + 80);
  if ( v12 )
    free(v12);
  *(_DWORD *)(a2 + 76) = 4;
  v13 = malloc(4u);
  *(_DWORD *)(a2 + 80) = v13;
  if ( !v13 )
  {
    V_LOCK(0);
    v19 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v19);
    v10 = 112;
    goto LABEL_4;
  }
  hex2bin((int)v13, v7, 4);
  v14 = *(void **)(a2 + 1588);
  *(_DWORD *)(a2 + 84) = 2;
  if ( v14 )
    free(v14);
  v15 = calloc(1u, 0xB28u);
  *(_DWORD *)(a2 + 1588) = v15;
  if ( v15 )
  {
    v16 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK(v16);
    v17 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      167,
      "stratum_parse_extranonce_zec",
      28,
      125,
      20,
      v20);
    return 1;
  }
  else
  {
    printf(aInvalidPointer, "work->private");
    return 0;
  }
}
