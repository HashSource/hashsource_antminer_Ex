int __fastcall sub_3E900(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  void *v11; // r0
  size_t v12; // r7
  void *v13; // r0
  _BOOL4 v14; // r0
  int v15; // r0
  void *v16; // r0
  _DWORD *v17; // r0
  size_t v18; // r2
  int v19; // r0
  int v20; // r0
  int v22; // r0
  int v23; // r12
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r0
  int v28; // r0
  _BYTE v29[4096]; // [sp+10h] [bp-1000h] BYREF

  v7 = json_array_get(a3, a4);
  v8 = (char *)json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v26);
    v23 = 251;
    v24 = g_zc;
    LOWORD(v25) = 14500;
    goto LABEL_13;
  }
  v9 = json_array_get(a3, a4 + 1);
  v10 = json_integer_value((int)v9);
  if ( !v10 )
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v27);
    v23 = 256;
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 2) > 0xE )
  {
    V_LOCK(v10);
    v22 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v22);
    v23 = 260;
LABEL_12:
    v24 = g_zc;
    LOWORD(v25) = (unsigned __int16)"stratum_parse_extranonce_dcr";
LABEL_13:
    HIWORD(v25) = (unsigned int)"stratum_parse_extranonce_dcr" >> 16;
    zlog(
      v24,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      167,
      v25,
      28,
      v23,
      100,
      v29);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v11 = *(void **)(a2 + 80);
  if ( v11 )
  {
    free(v11);
    *(_DWORD *)(a2 + 80) = 0;
  }
  v12 = strlen(v8) >> 1;
  *(_DWORD *)(a2 + 76) = v12;
  v13 = calloc(1u, v12);
  *(_DWORD *)(a2 + 80) = v13;
  if ( v13 )
  {
    v14 = hex2bin((int)v13, (unsigned __int8 *)v8, v12);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v15);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      167,
      "stratum_parse_extranonce_dcr",
      28,
      276,
      20,
      v29);
    v16 = *(void **)(a2 + 1588);
    if ( v16 )
      free(v16);
    v17 = calloc(1u, 0x10u);
    *(_DWORD *)(a2 + 1588) = v17;
    if ( v17 )
    {
      v18 = *(_DWORD *)(a2 + 76);
      *v17 = v18;
      memset(v17 + 1, 0, v18);
      v19 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      V_LOCK(v19);
      v20 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        167,
        "stratum_parse_extranonce_dcr",
        28,
        285,
        20,
        v29);
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
    v28 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
      167,
      "stratum_parse_extranonce_dcr",
      28,
      269,
      100,
      v29);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 0;
  }
}
