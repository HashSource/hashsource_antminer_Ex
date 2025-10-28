int __fastcall sub_429E0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  char *v7; // r9
  _DWORD *v8; // r0
  char *v9; // r10
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  const char *v13; // r11
  size_t v14; // r7
  size_t v15; // r6
  size_t v16; // r0
  _BOOL4 v17; // r4
  size_t v18; // r8
  int v19; // r0
  const char *v21; // r0
  size_t v22; // r0
  size_t v23; // r6
  void *v24; // r0
  void *v25; // r0
  _QWORD *v26; // r0
  _QWORD *v27; // r6
  unsigned int v28; // r4
  int *all_created_runtime; // r0
  int *v30; // r2
  int v31; // t1
  void *v32; // r0
  int epoch_number_rvn; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  __int64 v42; // [sp+10h] [bp-102Ch]
  char *s2; // [sp+18h] [bp-1024h]
  char *v44; // [sp+1Ch] [bp-1020h]
  void *src; // [sp+20h] [bp-101Ch]
  pthread_mutex_t *mutex; // [sp+24h] [bp-1018h]
  int v47; // [sp+34h] [bp-1008h] BYREF
  _BYTE v48[4100]; // [sp+38h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  s2 = (char *)json_string_value(v5);
  v6 = json_array_get(a3, 1u);
  v7 = (char *)json_string_value(v6);
  v8 = json_array_get(a3, 2u);
  v9 = (char *)json_string_value(v8);
  v10 = json_array_get(a3, 3u);
  v44 = (char *)json_string_value(v10);
  v11 = json_array_get(a3, 5u);
  v42 = json_integer_value((int)v11);
  v12 = json_array_get(a3, 6u);
  v13 = (const char *)json_string_value(v12);
  v14 = strlen(v9);
  v15 = strlen(v7);
  v16 = strlen(v44);
  v17 = v15 == 0;
  if ( !v14 )
    v17 = 1;
  if ( !v16 )
    v17 = 1;
  v18 = v16;
  if ( v17 )
  {
    V_LOCK(v16);
    v19 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      163,
      "stratum_notify_rvn",
      18,
      525,
      100,
      v48);
    return 0;
  }
  mutex = (pthread_mutex_t *)(a2 + 1584);
  if ( a2 == -448 )
    goto LABEL_25;
  v21 = *(const char **)(a2 + 1572);
  if ( v21 && !strcmp(v21, s2) )
  {
    V_LOCK(0);
    v38 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      163,
      "stratum_notify_rvn",
      18,
      540,
      80,
      v48);
  }
  v22 = strlen(s2);
  if ( v22 > 0x1F )
  {
    V_LOCK(v22);
    strlen(s2);
    v39 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      163,
      "stratum_notify_rvn",
      18,
      543,
      80,
      v48);
  }
  v23 = v15 >> 1;
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
  snprintf((char *)(a2 + 348), 9u, "%s", v13);
  strcpy((char *)(a2 + 1548), v13);
  *(_BYTE *)(a2 + 436) = 0;
  v24 = calloc(v23, 1u);
  src = v24;
  if ( v24 )
  {
    if ( hex2bin((int)v24, (unsigned __int8 *)v7, v23) )
    {
LABEL_16:
      memcpy((void *)(a2 + 456), src, v23);
      v25 = *(void **)(a2 + 1580);
      if ( v25 )
        free(v25);
      v26 = calloc(1u, 0x68u);
      v27 = v26;
      *(_DWORD *)(a2 + 1580) = v26;
      if ( !v26 )
      {
        printf("invalid pointer(%s)!\n", "work->private");
        return 0;
      }
      hex2bin((int)v26, (unsigned __int8 *)v9, v14 >> 1);
      hex2bin(a2 + 1480, (unsigned __int8 *)v44, v18 >> 1);
      v27[12] = v42;
      v28 = target_to_diff_rvn(a2 + 1480);
      *(double *)(a2 + 1512) = (double)v28;
      *(double *)(a2 + 1800) = (double)v28;
      sprintf((char *)(a2 + 1968), "%13.2f", (double)v28);
      v47 = 0;
      all_created_runtime = (int *)get_all_created_runtime(&v47);
      if ( v47 > 0 )
      {
        v30 = &all_created_runtime[v47];
        do
        {
          v31 = *all_created_runtime++;
          *(_DWORD *)(v31 + 392) = v28;
        }
        while ( v30 != all_created_runtime );
      }
      v32 = *(void **)(a2 + 1572);
      if ( v32 )
        free(v32);
      *(_DWORD *)(a2 + 1572) = _strdup(s2);
      epoch_number_rvn = get_epoch_number_rvn(v27);
      *(_DWORD *)(a2 + 1528) = epoch_number_rvn;
      V_LOCK(epoch_number_rvn);
      v34 = logfmt_raw((int)v48, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        163,
        "stratum_notify_rvn",
        18,
        588,
        40,
        v48);
      free(src);
LABEL_25:
      pthread_mutex_unlock(mutex);
      return 1;
    }
    V_LOCK(0);
    v35 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v35);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      163,
      "stratum_notify_rvn",
      18,
      559,
      100,
      v48);
    free(src);
  }
  else
  {
    V_LOCK(0);
    v40 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v40);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      163,
      "stratum_notify_rvn",
      18,
      553,
      20,
      v48);
    if ( hex2bin(0, (unsigned __int8 *)v7, v23) )
      goto LABEL_16;
    V_LOCK(0);
    v41 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v41);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_rvn/frontend_rvn.c",
      163,
      "stratum_notify_rvn",
      18,
      559,
      100,
      v48);
  }
  v36 = pthread_mutex_unlock(mutex);
  V_LOCK(v36);
  v37 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/frontend/frontend_rvn/frontend_rvn.c",
    163,
    "stratum_notify_rvn",
    18,
    601,
    80,
    v48);
  return 0;
}
