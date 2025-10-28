int __fastcall sub_4313C(_DWORD *a1, int a2)
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
  int v14; // r1
  int v15; // r12
  int v16; // r0
  int v17; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r8
  int v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r0
  void *v26; // r0
  char *v27; // r0
  void *v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r2
  void *v32; // r0
  int v33; // r0
  __int64 v34; // r0
  double v35; // r0
  void *v36; // r3
  int v37; // r0
  int v38; // r0
  int v39; // r0
  __int64 sizea; // [sp+18h] [bp-103Ch]
  size_t size; // [sp+18h] [bp-103Ch]
  char *v42; // [sp+20h] [bp-1034h]
  int v43; // [sp+24h] [bp-1030h]
  void *ptr; // [sp+28h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+2Ch] [bp-1028h]
  _DWORD s[7]; // [sp+30h] [bp-1024h] BYREF
  __int16 v47; // [sp+4Ch] [bp-1008h]
  _BYTE v48[4100]; // [sp+50h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1824);
  if ( !*(_BYTE *)(a2 + 1824) )
  {
    V_LOCK(a1);
    v19 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      356,
      100,
      v48);
    return v2;
  }
  v3 = (pthread_mutex_t *)(a2 + 1760);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  v6 = json_object_get(a1, "job_id");
  if ( !v6 )
  {
    V_LOCK(0);
    v20 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      364,
      100,
      v48);
    goto LABEL_12;
  }
  sizea = json_integer_value(v6);
  s[0] = 32;
  v47 = 0;
  memset(&s[1], 0, 24);
  sprintf((char *)s, "%llu", sizea);
  v7 = json_object_get(a1, "height");
  if ( !v7 )
  {
    V_LOCK(0);
    LOWORD(v21) = 19000;
    v25 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v25);
    v23 = g_zc;
    v24 = 373;
    goto LABEL_17;
  }
  v43 = json_integer_value(v7);
  v8 = (_DWORD *)json_object_get(a1, "pre_pow");
  if ( !v8 )
  {
    V_LOCK(0);
    LOWORD(v21) = (unsigned __int16)"rpc2_job_decode";
    v22 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v22);
    v23 = g_zc;
    v24 = 381;
LABEL_17:
    HIWORD(v21) = (unsigned int)"rpc2_job_decode" >> 16;
    zlog(
      v23,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      v21,
      15,
      v24,
      100,
      v48);
    goto LABEL_12;
  }
  v42 = (char *)json_string_value(v8);
  V_LOCK(v42);
  v9 = logfmt_raw((int)v48, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "rpc2_job_decode",
    15,
    386,
    20,
    v48);
  v10 = strlen(v42);
  if ( (v10 & 1) != 0 || (v10 - 1 <= 0x4E ? (v11 = 1) : (v11 = v10 > 0x201), v11) )
  {
    V_LOCK(v10);
    v12 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v12);
    v13 = g_zc;
    v14 = 100;
    v15 = 389;
LABEL_11:
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v15,
      v14,
      v48);
LABEL_12:
    v16 = pthread_mutex_unlock(v3);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      446,
      80,
      v48);
    return 0;
  }
  if ( !v10 )
    goto LABEL_20;
  size = v10 >> 1;
  mutex = (pthread_mutex_t *)(a2 + 1948);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1948));
  ptr = malloc(size);
  if ( !hex2bin((int)ptr, (unsigned __int8 *)v42, size) )
  {
    V_LOCK(0);
    v29 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v29);
    v30 = g_zc;
    v31 = 397;
    goto LABEL_28;
  }
  *(_DWORD *)(a2 + 1924) = size;
  v32 = malloc(size);
  *(_DWORD *)(a2 + 1916) = v32;
  if ( !v32 )
  {
    V_LOCK(0);
    v38 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v38);
    v30 = g_zc;
    v31 = 405;
LABEL_28:
    zlog(
      v30,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      v31,
      100,
      v48);
    if ( ptr )
      free(ptr);
    goto LABEL_30;
  }
  memcpy(v32, ptr, size);
  free(ptr);
  v33 = json_object_get(a1, "difficulty");
  if ( !v33 )
  {
    V_LOCK(0);
    v39 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "rpc2_job_decode",
      15,
      415,
      100,
      v48);
LABEL_30:
    pthread_mutex_unlock(mutex);
    goto LABEL_12;
  }
  v34 = json_integer_value(v33);
  v35 = sub_12E6AC(v34, HIDWORD(v34));
  v36 = *(void **)(a2 + 1944);
  *(double *)(a2 + 1976) = v35;
  if ( v36 )
    free(v36);
  *(_DWORD *)(a2 + 1944) = _strdup((const char *)s);
  v10 = pthread_mutex_unlock(mutex);
LABEL_20:
  if ( !*(_DWORD *)(a2 + 1916) )
  {
    V_LOCK(v10);
    v37 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v37);
    v13 = g_zc;
    v14 = 80;
    v15 = 428;
    goto LABEL_11;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1916), *(_DWORD *)(a2 + 1924));
  memset((void *)(a2 + 1480), 255, 0x20u);
  diff_to_target_grin32(a2 + 1480);
  v26 = *(void **)(a2 + 1600);
  *(_QWORD *)(a2 + 1576) = *(_QWORD *)(a2 + 1976);
  if ( v26 )
    free(v26);
  v27 = _strdup((const char *)s);
  v28 = *(void **)(a2 + 1916);
  *(_DWORD *)(a2 + 1600) = v27;
  *(_DWORD *)(a2 + 1592) = 29;
  *(_DWORD *)(a2 + 1596) = v43;
  if ( v28 )
    free(v28);
  pthread_mutex_unlock(v3);
  return v2;
}
