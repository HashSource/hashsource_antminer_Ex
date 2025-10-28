int __fastcall sub_40310(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r9
  _DWORD *v9; // r0
  char *v10; // r0
  _BOOL4 v11; // r3
  char *v12; // r8
  int v13; // r0
  size_t v14; // r10
  size_t v15; // r0
  _BOOL4 v16; // r4
  size_t v17; // r11
  const char *v18; // r0
  size_t v19; // r0
  _WORD *v20; // r11
  int v21; // r1
  int v22; // r2
  int v23; // r3
  char *v24; // r8
  int v25; // t1
  char *v26; // r0
  int v27; // r0
  void *v28; // r0
  int v30; // r0
  int v31; // r2
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  char s[4]; // [sp+14h] [bp-1010h] BYREF
  _DWORD v39[2]; // [sp+18h] [bp-100Ch] BYREF
  _BYTE v40[4100]; // [sp+20h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = (char *)json_string_value(v9);
  v11 = v10 == 0;
  if ( !v6 )
    v11 = 1;
  if ( !v8 )
    v11 = 1;
  v12 = v10;
  if ( v11 )
  {
    V_LOCK(v10);
    v13 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_notify_eth",
      18,
      896,
      100,
      v40);
  }
  v14 = strlen(v8);
  v15 = strlen(v12);
  v16 = v15 == 0;
  if ( !v14 )
    v16 = 1;
  v17 = v15;
  if ( v16 )
  {
    V_LOCK(v15);
    v30 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v30);
    v31 = 902;
LABEL_24:
    v32 = g_zc;
    LOWORD(v33) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c";
    goto LABEL_25;
  }
  if ( a2 == -456 )
  {
LABEL_22:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  v18 = *(const char **)(a2 + 1580);
  if ( !v18 || strcmp(v18, v6) )
  {
    v19 = strlen(v6);
    if ( v19 <= 0x1F )
      goto LABEL_14;
    goto LABEL_28;
  }
  V_LOCK(0);
  v37 = logfmt_raw((int)v40, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
    167,
    "stratum_notify_eth",
    18,
    914,
    80,
    v40);
  v19 = strlen(v6);
  if ( v19 > 0x1F )
  {
LABEL_28:
    V_LOCK(v19);
    strlen(v6);
    v35 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_notify_eth",
      18,
      917,
      80,
      v40);
  }
LABEL_14:
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  *(_BYTE *)(a2 + 444) = 1;
  if ( !hex2bin(a2 + 464, (unsigned __int8 *)v12, v17 >> 1) )
  {
    V_LOCK(0);
    v34 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v34);
    v31 = 926;
    goto LABEL_24;
  }
  v20 = *(_WORD **)(a2 + 1588);
  if ( !v20 )
  {
    v20 = calloc(1u, 0x6Bu);
    *(_DWORD *)(a2 + 1588) = v20;
    if ( !v20 )
    {
      printf(aInvalidPointer, "work->private");
      return 0;
    }
  }
  if ( hex2bin((int)v20, (unsigned __int8 *)v8, v14 >> 1) )
  {
    *(_DWORD *)(a2 + 1536) = get_epoch_number_eth(v20, v21, v22, v23);
    v24 = (char *)v20 + 103;
    v20[52] = 0;
    *((_BYTE *)v20 + 106) = 0;
    memcpy(v20 + 52, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
    v39[0] = 0;
    *(_WORD *)s = 0;
    v39[1] = 0;
    do
    {
      v25 = (unsigned __int8)*++v24;
      sprintf(s, "%02x", v25);
      v26 = strcat((char *)v39, s);
    }
    while ( v20 + 53 != (_WORD *)v24 );
    V_LOCK(v26);
    v27 = logfmt_raw((int)v40, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "stratum_notify_eth",
      18,
      964,
      40,
      v40);
    v28 = *(void **)(a2 + 1580);
    if ( v28 )
      free(v28);
    *(_DWORD *)(a2 + 1580) = _strdup(v6);
    goto LABEL_22;
  }
  V_LOCK(0);
  v36 = logfmt_raw((int)v40, 0x1000u);
  V_UNLOCK(v36);
  v31 = 938;
  v32 = g_zc;
  LOWORD(v33) = 15212;
LABEL_25:
  HIWORD(v33) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/re"
                              "lease/build/godminer-origin_godminer-new/frontend/frontend_eth/frontend_eth.c" >> 16;
  zlog(v32, v33, 167, "stratum_notify_eth", 18, v31, 100, v40);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 0;
}
