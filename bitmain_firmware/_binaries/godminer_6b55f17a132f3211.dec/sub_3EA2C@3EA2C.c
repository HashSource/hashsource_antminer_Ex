int __fastcall sub_3EA2C(_DWORD *a1, int a2)
{
  int v2; // r4
  int v4; // r0
  _DWORD *v7; // r0
  char *v8; // r6
  _DWORD *v9; // r0
  char *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  size_t v14; // r11
  signed int v15; // r9
  size_t v16; // r0
  _BOOL4 v17; // r3
  int v18; // r10
  int v19; // r0
  void *v20; // r0
  int v21; // r2
  void *v22; // r9
  int v23; // r0
  int v24; // r0
  int v25; // r12
  int v26; // r0
  int v27; // r0
  size_t v28; // r6
  void *v29; // r0
  void *v30; // r0
  int v31; // r0
  void *v32; // r0
  _QWORD *v33; // r0
  _QWORD *v34; // r6
  unsigned int v35; // r8
  int *all_created_runtime; // r0
  int *v37; // r2
  int v38; // t1
  void *v39; // r0
  _WORD *v40; // r0
  int v41; // r1
  int v42; // r2
  unsigned __int64 v43; // r0
  int v44; // r0
  void *v45; // r0
  int v46; // r0
  int v47; // r0
  char *nptr; // [sp+10h] [bp-1014h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-1010h]
  int v50; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v51[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1648) ^ 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 || *a1 != 1 )
  {
    V_LOCK(a1);
    v4 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v4);
    v2 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      295,
      100,
      v51);
    return v2;
  }
  v7 = json_array_get(a1, 0);
  v8 = (char *)json_string_value(v7) + 2;
  v9 = json_array_get(a1, 1u);
  v10 = (char *)json_string_value(v9) + 2;
  v11 = json_array_get(a1, 2u);
  v12 = (char *)json_string_value(v11) + 2;
  v13 = json_array_get(a1, 3u);
  nptr = (char *)json_string_value(v13);
  v14 = strlen(v10);
  v15 = strlen(v8);
  v16 = strlen(v12);
  v17 = v15 == 0;
  if ( !v14 )
    v17 = 1;
  if ( !v16 )
    v17 = 1;
  v18 = v16;
  if ( v17 )
  {
    V_LOCK(v16);
    v19 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      309,
      100,
      v51);
    return v2;
  }
  mutex = (pthread_mutex_t *)(a2 + 1584);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1772));
  *(_DWORD *)(a2 + 1748) = v15 >> 1;
  v20 = malloc(v15 >> 1);
  v21 = v15 >> 1;
  v22 = v20;
  v2 = hex2bin((int)v20, (unsigned __int8 *)v8, v21);
  if ( !v2 )
  {
    V_LOCK(0);
    v23 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v23);
    v24 = g_zc;
    v25 = 320;
LABEL_15:
    zlog(
      v24,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      v25,
      100,
      v51);
    if ( v22 )
      free(v22);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1772));
    goto LABEL_18;
  }
  v28 = *(_DWORD *)(a2 + 1748);
  v29 = malloc(v28);
  *(_DWORD *)(a2 + 1740) = v29;
  if ( !v29 )
  {
    V_LOCK(0);
    v46 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v46);
    v24 = g_zc;
    v25 = 329;
    goto LABEL_15;
  }
  memcpy(v29, v22, v28);
  free(v22);
  v30 = *(void **)(a2 + 1768);
  if ( v30 )
    free(v30);
  v31 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1772));
  if ( !*(_DWORD *)(a2 + 1740) )
  {
    V_LOCK(v31);
    v47 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      346,
      80,
      v51);
LABEL_18:
    v26 = pthread_mutex_unlock(mutex);
    v2 = 0;
    V_LOCK(v26);
    v27 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      392,
      80,
      v51);
    return v2;
  }
  memcpy((void *)(a2 + 456), *(const void **)(a2 + 1740), *(_DWORD *)(a2 + 1748));
  v32 = *(void **)(a2 + 1580);
  if ( v32 )
    free(v32);
  v33 = calloc(1u, 0x68u);
  v34 = v33;
  *(_DWORD *)(a2 + 1580) = v33;
  if ( v33 )
  {
    hex2bin((int)v33, (unsigned __int8 *)v10, 32);
    hex2bin(a2 + 1480, (unsigned __int8 *)v12, v18);
    v35 = target_to_diff_eth(a2 + 1480);
    *(double *)(a2 + 1512) = (double)v35;
    *(double *)(a2 + 1800) = (double)v35;
    sprintf((char *)(a2 + 1968), "%13.2f", (double)v35);
    v50 = 0;
    all_created_runtime = (int *)get_all_created_runtime(&v50);
    if ( v50 > 0 )
    {
      v37 = &all_created_runtime[v50];
      do
      {
        v38 = *all_created_runtime++;
        *(_DWORD *)(v38 + 392) = v35;
      }
      while ( all_created_runtime != v37 );
    }
    v39 = *(void **)(a2 + 1572);
    if ( v39 )
      free(v39);
    v40 = malloc(6u);
    if ( v40 )
      v42 = 30708;
    *(_DWORD *)(a2 + 1572) = v40;
    if ( v40 )
    {
      HIWORD(v42) = 18;
      v41 = *(_DWORD *)(v42 + 4);
      *(_DWORD *)v40 = *(_DWORD *)v42;
      v40[2] = v41;
    }
    LODWORD(v43) = get_epoch_number_eth(v34, v41, v42, v40);
    *(_DWORD *)(a2 + 1528) = v43;
    if ( nptr )
    {
      v43 = strtoull(nptr, 0, 16);
      v34[12] = v43;
    }
    else
    {
      v34[12] = 0;
    }
    V_LOCK(v43);
    v44 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v44);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "rpc2_job_decode",
      15,
      383,
      20,
      v51);
    v45 = *(void **)(a2 + 1740);
    if ( v45 )
      free(v45);
    pthread_mutex_unlock(mutex);
  }
  else
  {
    v2 = 0;
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return v2;
}
