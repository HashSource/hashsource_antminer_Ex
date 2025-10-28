int __fastcall sub_42914(_DWORD *a1, int a2)
{
  int v2; // r5
  pthread_mutex_t *v4; // r11
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  const char *v9; // r9
  size_t v10; // r0
  _BOOL4 v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r12
  int v16; // r0
  int v17; // r1
  void *v18; // r0
  char *v19; // r0
  void *v20; // r3
  int v21; // r0
  int v22; // r2
  void *v23; // r0
  int v24; // r0
  __int64 v25; // r0
  __int64 v26; // r0
  void *v27; // r3
  __int64 size; // [sp+18h] [bp-103Ch]
  size_t sizea; // [sp+18h] [bp-103Ch]
  char *v30; // [sp+20h] [bp-1034h]
  int v31; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-1028h]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v35; // [sp+4Ch] [bp-1008h]
  char v36[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1816);
  if ( !*(_BYTE *)(a2 + 1816) )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, v2, "Tried to decode job without JSON-RPC 2.0");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      356,
      100,
      v36);
    return v2;
  }
  v4 = (pthread_mutex_t *)(a2 + 1752);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
  v6 = json_object_get(a1, "job_id");
  if ( !v6 )
  {
    V_LOCK();
    v9 = "rpc2_job_decode";
    logfmt_raw(v36, 0x1000u, 0, "JSON invalid job id");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      364,
      100,
      v36);
    goto LABEL_12;
  }
  size = json_integer_value(v6);
  s[0] = 32;
  v35 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, "%llu", size);
  v7 = json_object_get(a1, "height");
  if ( !v7 )
  {
    V_LOCK();
    LOWORD(v9) = 12916;
    logfmt_raw(v36, 0x1000u, 0, "JSON invalid height");
    V_UNLOCK();
    v16 = g_zc;
    v17 = 373;
    goto LABEL_17;
  }
  v31 = json_integer_value(v7);
  v8 = (_DWORD *)json_object_get(a1, "pre_pow");
  if ( !v8 )
  {
    V_LOCK();
    LOWORD(v9) = (unsigned __int16)"rpc2_job_decode";
    logfmt_raw(v36, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v16 = g_zc;
    v17 = 381;
LABEL_17:
    HIWORD(v9) = (unsigned int)"rpc2_job_decode" >> 16;
    zlog(
      v16,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      v9,
      15,
      v17,
      100,
      v36);
    goto LABEL_12;
  }
  v30 = (char *)json_string_value(v8);
  V_LOCK();
  v9 = "rpc2_job_decode";
  logfmt_raw(v36, 0x1000u, 0, "Job id: (%lld-%s) Height %llu hexblob %s", size, s, v31, v30);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "rpc2_job_decode",
    15,
    386,
    20,
    v36);
  v10 = strlen(v30);
  if ( (v10 & 1) != 0 || (v10 - 1 <= 0x4E ? (v11 = 1) : (v11 = v10 > 0x201), v11) )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "JSON invalid blob length");
    V_UNLOCK();
    v12 = g_zc;
    v13 = 100;
    v14 = 389;
LABEL_11:
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v14,
      v13,
      v36);
LABEL_12:
    pthread_mutex_unlock(v4);
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "%s", v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      446,
      80,
      v36);
    return 0;
  }
  if ( !v10 )
    goto LABEL_20;
  sizea = v10 >> 1;
  mutex = (pthread_mutex_t *)(a2 + 1940);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1940));
  ptr = malloc(sizea);
  if ( !hex2bin((int)ptr, (unsigned __int8 *)v30, sizea) )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "JSON invalid blob");
    V_UNLOCK();
    v21 = g_zc;
    v22 = 397;
    goto LABEL_28;
  }
  *(_DWORD *)(a2 + 1916) = sizea;
  v23 = malloc(sizea);
  *(_DWORD *)(a2 + 1908) = v23;
  if ( !v23 )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "RPC2 OOM!");
    V_UNLOCK();
    v21 = g_zc;
    v22 = 405;
LABEL_28:
    zlog(
      v21,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v22,
      100,
      v36);
    if ( ptr )
      free(ptr);
    goto LABEL_30;
  }
  memcpy(v23, ptr, sizea);
  free(ptr);
  v24 = json_object_get(a1, "difficulty");
  if ( !v24 )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "JSON invalid difficulty");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      415,
      100,
      v36);
LABEL_30:
    pthread_mutex_unlock(mutex);
    goto LABEL_12;
  }
  v25 = json_integer_value(v24);
  LODWORD(v26) = sub_12D09C(v25);
  v27 = *(void **)(a2 + 1936);
  *(_QWORD *)(a2 + 1968) = v26;
  if ( v27 )
    free(v27);
  *(_DWORD *)(a2 + 1936) = _strdup((const char *)s);
  pthread_mutex_unlock(mutex);
LABEL_20:
  if ( !*(_DWORD *)(a2 + 1908) )
  {
    V_LOCK();
    logfmt_raw(v36, 0x1000u, 0, "Work requested before it was received");
    V_UNLOCK();
    v12 = g_zc;
    v13 = 80;
    v14 = 428;
    goto LABEL_11;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1908), *(_DWORD *)(a2 + 1916));
  memset((void *)(a2 + 1480), 255, 0x20u);
  diff_to_target_grin32((_QWORD *)(a2 + 1480));
  v18 = *(void **)(a2 + 1600);
  *(_QWORD *)(a2 + 1576) = *(_QWORD *)(a2 + 1968);
  if ( v18 )
    free(v18);
  v19 = _strdup((const char *)s);
  v20 = *(void **)(a2 + 1908);
  *(_DWORD *)(a2 + 1600) = v19;
  *(_DWORD *)(a2 + 1592) = 29;
  *(_DWORD *)(a2 + 1596) = v31;
  if ( v20 )
    free(v20);
  pthread_mutex_unlock(v4);
  return v2;
}
