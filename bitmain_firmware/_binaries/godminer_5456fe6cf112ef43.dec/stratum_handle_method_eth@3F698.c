int __fastcall stratum_handle_method_eth(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r0
  int v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r8
  int v10; // r5
  bool v11; // zf
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v16; // r0
  _DWORD *v17; // r0
  char *v18; // r5
  _DWORD *v19; // r0
  char *v20; // r7
  _DWORD *v21; // r0
  char *v22; // r8
  size_t v23; // r10
  signed int v24; // r11
  size_t v25; // r0
  _BOOL4 v26; // r3
  int v27; // r9
  int v28; // r0
  void *v29; // r11
  int v30; // r0
  int v31; // r12
  int v32; // r0
  int v33; // r0
  void *v34; // r0
  void *v35; // r0
  int v36; // r0
  unsigned int v37; // r8
  void *v38; // r0
  _WORD *v39; // r0
  int v40; // r1
  int v41; // r3
  int epoch_number_eth; // r0
  int v43; // r0
  void *v44; // r0
  int v45; // r0
  int v46; // r0
  pthread_mutex_t *mutex; // [sp+10h] [bp-110Ch]
  size_t sizea; // [sp+14h] [bp-1108h]
  size_t size; // [sp+14h] [bp-1108h]
  char v50[92]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v51[4100]; // [sp+118h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_loads(a3, 0, v50);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v16 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_handle_method_eth",
      25,
      451,
      100,
      v51);
    return 0;
  }
  v6 = json_object_get(v4, "id");
  v7 = json_integer_value(v6);
  v8 = (_DWORD *)json_object_get(v5, "result");
  v9 = v8;
  if ( v8 )
  {
    v10 = *(unsigned __int8 *)(a2 + 1824);
    if ( !*(_BYTE *)(a2 + 1824) )
      goto LABEL_11;
    v11 = *v8 == 1;
    if ( *v8 == 1 )
      v11 = v7 == 0;
    v10 = v11;
    if ( !v11 )
      goto LABEL_11;
    v17 = json_array_get(v8, 0);
    v18 = (char *)json_string_value(v17) + 2;
    v19 = json_array_get(v9, 1u);
    v20 = (char *)json_string_value(v19) + 2;
    v21 = json_array_get(v9, 2u);
    v22 = (char *)json_string_value(v21) + 2;
    v23 = strlen(v20);
    v24 = strlen(v18);
    v25 = strlen(v22);
    v26 = v24 == 0;
    if ( !v23 )
      v26 = 1;
    if ( !v25 )
      v26 = 1;
    v27 = v25;
    if ( v26 )
    {
      V_LOCK(v25);
      v28 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_eth/frontend_eth.c",
        157,
        "rpc2_job_decode",
        15,
        380,
        100,
        v51);
LABEL_24:
      pool_tclear(a2, (_BYTE *)(a2 + 2084), 0);
      v10 = 0;
      goto LABEL_11;
    }
    mutex = (pthread_mutex_t *)(a2 + 1948);
    sizea = v24 >> 1;
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1948));
    *(_DWORD *)(a2 + 1924) = v24 >> 1;
    v29 = malloc(v24 >> 1);
    v10 = hex2bin((int)v29, (unsigned __int8 *)v18, sizea);
    if ( v10 )
    {
      size = *(_DWORD *)(a2 + 1924);
      v34 = malloc(size);
      *(_DWORD *)(a2 + 1916) = v34;
      if ( v34 )
      {
        memcpy(v34, v29, size);
        free(v29);
        v35 = *(void **)(a2 + 1944);
        if ( v35 )
          free(v35);
        v36 = pthread_mutex_unlock(mutex);
        if ( *(_DWORD *)(a2 + 1916) )
        {
          memcpy((void *)(a2 + 456), *(const void **)(a2 + 1916), *(_DWORD *)(a2 + 1924));
          hex2bin(a2 + 1512, (unsigned __int8 *)v20, 32);
          hex2bin(a2 + 1480, (unsigned __int8 *)v22, v27);
          v37 = target_to_diff_eth(a2 + 1480);
          v38 = *(void **)(a2 + 1600);
          *(double *)(a2 + 1576) = (double)v37;
          *(double *)(a2 + 1976) = (double)v37;
          if ( v38 )
            free(v38);
          v39 = malloc(6u);
          if ( v39 )
            v41 = 11432;
          *(_DWORD *)(a2 + 1600) = v39;
          if ( v39 )
          {
            HIWORD(v41) = 19;
            v40 = *(_DWORD *)(v41 + 4);
            *(_DWORD *)v39 = *(_DWORD *)v41;
            v39[2] = v40;
          }
          epoch_number_eth = get_epoch_number_eth(a2 + 1512, v40, v39, v41);
          *(_DWORD *)(a2 + 1596) = epoch_number_eth;
          V_LOCK(epoch_number_eth);
          v43 = logfmt_raw((int)v51, 0x1000u);
          V_UNLOCK(v43);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_eth/frontend_eth.c",
            157,
            "rpc2_job_decode",
            15,
            424,
            20,
            v51);
          v44 = *(void **)(a2 + 1916);
          if ( v44 )
            free(v44);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
          pool_tset(a2, (_BYTE *)(a2 + 2084), 1);
          goto LABEL_11;
        }
        V_LOCK(v36);
        v45 = logfmt_raw((int)v51, 0x1000u);
        V_UNLOCK(v45);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_eth/frontend_eth.c",
          157,
          "rpc2_job_decode",
          15,
          409,
          80,
          v51);
        goto LABEL_30;
      }
      V_LOCK(0);
      v46 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v46);
      v31 = 397;
    }
    else
    {
      V_LOCK(0);
      v30 = logfmt_raw((int)v51, 0x1000u);
      V_UNLOCK(v30);
      v31 = 390;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "rpc2_job_decode",
      15,
      v31,
      100,
      v51);
    if ( v29 )
      free(v29);
    pthread_mutex_unlock(mutex);
LABEL_30:
    v32 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
    V_LOCK(v32);
    v33 = logfmt_raw((int)v51, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "rpc2_job_decode",
      15,
      432,
      80,
      v51);
    goto LABEL_24;
  }
  v10 = 0;
LABEL_11:
  if ( v5[1] == -1 )
    return v10;
  v12 = v5 + 1;
  __dmb(0xBu);
  do
  {
    v13 = __ldrex(v12);
    v14 = v13 - 1;
  }
  while ( __strex(v14, v12) );
  if ( v14 )
    return v10;
  json_delete(v5);
  return v10;
}
