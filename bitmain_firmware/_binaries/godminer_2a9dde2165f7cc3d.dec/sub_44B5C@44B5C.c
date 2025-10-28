int __fastcall sub_44B5C(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r0
  char *v9; // r8
  int v10; // r0
  int v11; // r12
  int v12; // r0
  int v13; // r3
  _DWORD *v15; // r0
  int v16; // r0
  size_t v17; // r6
  void *v18; // r0
  size_t v19; // r10
  void *v20; // r0
  void *v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  _BYTE v27[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  v9 = v8;
  if ( !v8 || (v8 = (char *)strlen(v8), ((unsigned __int8)v8 & 1) != 0) )
  {
    V_LOCK(v8);
    v10 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v10);
    v11 = 65;
    v12 = g_zc;
    LOWORD(v13) = (unsigned __int16)"stratum_parse_extranonce_kda";
LABEL_4:
    HIWORD(v13) = (unsigned int)"stratum_parse_extranonce_kda" >> 16;
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      167,
      v13,
      28,
      v11,
      100,
      v27);
    return 0;
  }
  v15 = json_array_get(a3, a4 + 1);
  v16 = json_integer_value((int)v15);
  v17 = v16 - 5;
  if ( (unsigned int)(v16 - 5) > 3 )
  {
    V_LOCK(v16);
    v25 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v25);
    v11 = 71;
    v12 = g_zc;
    LOWORD(v13) = 17716;
    goto LABEL_4;
  }
  v18 = *(void **)(a2 + 80);
  if ( v18 )
  {
    free(v18);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v19 = strlen(v9) >> 1;
  *(_DWORD *)(a2 + 76) = v19;
  v20 = calloc(1u, v19);
  *(_DWORD *)(a2 + 80) = v20;
  if ( !v20 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v26);
    v11 = 79;
    v12 = g_zc;
    LOWORD(v13) = 17716;
    goto LABEL_4;
  }
  hex2bin((int)v20, (unsigned __int8 *)v9, v19);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v21 = *(void **)(a2 + 1588);
  if ( v21 )
    free(v21);
  v22 = calloc(1u, 0x14u);
  *(_DWORD *)(a2 + 1588) = v22;
  if ( v22 )
  {
    *(_DWORD *)(a2 + 84) = v17;
    *v22 = v17;
    memset(v22 + 1, 0, v17);
    v23 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK(v23);
    v24 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v24);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_kda/frontend_kda.c",
      167,
      "stratum_parse_extranonce_kda",
      28,
      94,
      20,
      v27);
    return 1;
  }
  else
  {
    printf(aInvalidPointer, "work->private");
    return 0;
  }
}
