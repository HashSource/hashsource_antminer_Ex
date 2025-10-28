int __fastcall rpc2_job_decode(_DWORD *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v3; // r9
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  size_t v10; // r0
  _BOOL4 v11; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v16; // r0
  int v17; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r2
  int v24; // r0
  void *v25; // r0
  char *v26; // r0
  void *v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r2
  void *v31; // r0
  int v32; // r0
  __int64 v33; // r0
  double v34; // r0
  void *v35; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r0
  __int64 sizea; // [sp+18h] [bp-103Ch]
  size_t size; // [sp+18h] [bp-103Ch]
  char *v41; // [sp+20h] [bp-1034h]
  int v42; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-1028h]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v46; // [sp+4Ch] [bp-1008h]
  _BYTE v47[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1824);
  if ( !*(_BYTE *)(a2 + 1824) )
  {
    V_LOCK(a1);
    v19 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      363,
      100,
      v47);
    return v2;
  }
  v3 = (pthread_mutex_t *)(a2 + 1760);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v6 = json_object_get(a1, "job_id");
  if ( !v6 )
  {
    V_LOCK(0);
    v20 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      371,
      100,
      v47);
    goto LABEL_12;
  }
  sizea = json_integer_value(v6);
  s[0] = 32;
  v46 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, "%llu", sizea);
  v7 = json_object_get(a1, "height");
  if ( !v7 )
  {
    V_LOCK(0);
    v24 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v24);
    v22 = g_zc;
    v23 = 380;
    goto LABEL_17;
  }
  v42 = json_integer_value(v7);
  v8 = (_DWORD *)json_object_get(a1, "pre_pow");
  if ( !v8 )
  {
    V_LOCK(0);
    v21 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v21);
    v22 = g_zc;
    v23 = 388;
LABEL_17:
    zlog(
      v22,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v23,
      100,
      v47);
    goto LABEL_12;
  }
  v41 = (char *)json_string_value(v8);
  V_LOCK(v41);
  v9 = logfmt_raw((int)v47, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin29/frontend_grin29.c",
    163,
    "rpc2_job_decode",
    15,
    393,
    20,
    v47);
  v10 = strlen(v41);
  if ( (v10 & 1) != 0 || (v10 - 1 <= 0x4E ? (v11 = 1) : (v11 = v10 > 0x201), v11) )
  {
    V_LOCK(v10);
    v12 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v12);
    v13 = g_zc;
    v14 = 100;
    v15 = 396;
LABEL_11:
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v15,
      v14,
      v47);
LABEL_12:
    v16 = pthread_mutex_unlock(v3);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      453,
      80,
      v47);
    return 0;
  }
  if ( !v10 )
    goto LABEL_20;
  size = v10 >> 1;
  mutex = (pthread_mutex_t *)(a2 + 1948);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1948));
  ptr = malloc(size);
  if ( !hex2bin((int)ptr, (unsigned __int8 *)v41, size) )
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v28);
    v29 = g_zc;
    v30 = 404;
    goto LABEL_28;
  }
  *(_DWORD *)(a2 + 1924) = size;
  v31 = malloc(size);
  *(_DWORD *)(a2 + 1916) = v31;
  if ( !v31 )
  {
    V_LOCK(0);
    v37 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v37);
    v29 = g_zc;
    v30 = 412;
LABEL_28:
    zlog(
      v29,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      v30,
      100,
      v47);
    if ( ptr )
      free(ptr);
    goto LABEL_30;
  }
  memcpy(v31, ptr, size);
  free(ptr);
  v32 = json_object_get(a1, "difficulty");
  if ( !v32 )
  {
    V_LOCK(0);
    v38 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_job_decode",
      15,
      422,
      100,
      v47);
LABEL_30:
    pthread_mutex_unlock(mutex);
    goto LABEL_12;
  }
  v33 = json_integer_value(v32);
  v34 = sub_12E6AC(v33, HIDWORD(v33));
  v35 = *(void **)(a2 + 1944);
  *(double *)(a2 + 1976) = v34;
  if ( v35 )
    free(v35);
  *(_DWORD *)(a2 + 1944) = _strdup((const char *)s);
  v10 = pthread_mutex_unlock(mutex);
LABEL_20:
  if ( !*(_DWORD *)(a2 + 1916) )
  {
    V_LOCK(v10);
    v36 = logfmt_raw((int)v47, 0x1000u);
    V_UNLOCK(v36);
    v13 = g_zc;
    v14 = 80;
    v15 = 435;
    goto LABEL_11;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1916), *(_DWORD *)(a2 + 1924));
  memset((void *)(a2 + 1480), 255, 0x20u);
  diff_to_target_grin29(a2 + 1480);
  v25 = *(void **)(a2 + 1600);
  *(_QWORD *)(a2 + 1576) = *(_QWORD *)(a2 + 1976);
  if ( v25 )
    free(v25);
  v26 = _strdup((const char *)s);
  v27 = *(void **)(a2 + 1916);
  *(_DWORD *)(a2 + 1600) = v26;
  *(_DWORD *)(a2 + 1592) = 29;
  *(_DWORD *)(a2 + 1596) = v42;
  if ( v27 )
    free(v27);
  pthread_mutex_unlock(v3);
  return v2;
}
