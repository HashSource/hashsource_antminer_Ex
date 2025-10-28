int __fastcall sub_45258(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r8
  int v10; // r0
  int v11; // lr
  int v12; // r12
  int v13; // r0
  int v14; // r3
  _DWORD *v16; // r0
  size_t v17; // r0
  size_t v18; // r5
  void *v19; // r0
  size_t v20; // r9
  void *v21; // r0
  void *v22; // r0
  _DWORD *v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _BYTE v28[4100]; // [sp+10h] [bp-1004h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  if ( !v8 || (v8 = (char *)strlen(v8), ((unsigned __int8)v8 & 1) != 0) )
  {
    V_LOCK(v8);
    v10 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v10);
    v11 = 100;
    v12 = 142;
    v13 = g_zc;
    LOWORD(v14) = (unsigned __int16)"stratum_parse_extranonce_ltc";
LABEL_4:
    HIWORD(v14) = (unsigned int)"stratum_parse_extranonce_ltc" >> 16;
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      166,
      v14,
      28,
      v12,
      v11,
      v28);
    return 0;
  }
  v16 = json_array_get(a3, a4 + 1);
  v17 = json_integer_value((int)v16);
  v18 = v17;
  if ( v17 - 2 > 0xE )
  {
    V_LOCK(v17);
    v26 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v26);
    v11 = 60;
    v12 = 147;
    v13 = g_zc;
    LOWORD(v14) = 18052;
    goto LABEL_4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v19 = *(void **)(a2 + 80);
  if ( v19 )
  {
    free(v19);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v20 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 76) = v20;
  v21 = calloc(1u, v20);
  *(_DWORD *)(a2 + 80) = v21;
  if ( v21 )
  {
    hex2bin((int)v21, (unsigned __int8 *)v9, v20);
    v22 = *(void **)(a2 + 1588);
    *(_DWORD *)(a2 + 84) = v18;
    if ( v22 )
      free(v22);
    v23 = calloc(1u, 0x14u);
    *(_DWORD *)(a2 + 1588) = v23;
    if ( v23 )
    {
      *v23 = v18;
      memset(v23 + 1, 0, v18);
      v24 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v24);
      v25 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        166,
        "stratum_parse_extranonce_ltc",
        28,
        182,
        20,
        v28);
      return 1;
    }
    else
    {
      printf(aInvalidPointer, "work->private");
      return 0;
    }
  }
  else
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      166,
      "stratum_parse_extranonce_ltc",
      28,
      156,
      100,
      v28);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
