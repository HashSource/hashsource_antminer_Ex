int __fastcall stratum_handle_method_eth(int a1, int a2, int a3)
{
  double *v4; // r0
  double *v5; // r4
  int v6; // r0
  int v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r8
  int v10; // r5
  bool v11; // zf
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v16; // r0
  char *v17; // r5
  _DWORD *v18; // r0
  char *v19; // r7
  _DWORD *v20; // r0
  char *v21; // r8
  size_t v22; // r10
  signed int v23; // r11
  size_t v24; // r0
  _BOOL4 v25; // r3
  int v26; // r9
  void *v27; // r11
  int v28; // r12
  void *v29; // r0
  void *v30; // r0
  unsigned int v31; // r8
  void *v32; // r0
  _WORD *v33; // r0
  _DWORD *v34; // r3
  int v35; // r1
  void *v36; // r0
  pthread_mutex_t *mutex; // [sp+10h] [bp-110Ch]
  size_t sizea; // [sp+14h] [bp-1108h]
  size_t size; // [sp+14h] [bp-1108h]
  char v40[92]; // [sp+1Ch] [bp-1100h] BYREF
  _BYTE v41[160]; // [sp+78h] [bp-10A4h] BYREF
  char v42[4100]; // [sp+118h] [bp-1004h] BYREF

  v4 = json_loads(a3, 0, v40);
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v40, v41);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "stratum_handle_method_eth",
      25,
      444,
      100,
      v42);
    return 0;
  }
  v6 = json_object_get(v4, "id");
  v7 = json_integer_value(v6);
  v8 = (_DWORD *)json_object_get(v5, "result");
  v9 = v8;
  if ( v8 )
  {
    v10 = *(unsigned __int8 *)(a2 + 1816);
    if ( !*(_BYTE *)(a2 + 1816) )
      goto LABEL_11;
    v11 = *v8 == 1;
    if ( *v8 == 1 )
      v11 = v7 == 0;
    v10 = v11;
    if ( !v11 )
      goto LABEL_11;
    v16 = json_array_get(v8, 0);
    v17 = (char *)json_string_value(v16) + 2;
    v18 = json_array_get(v9, 1u);
    v19 = (char *)json_string_value(v18) + 2;
    v20 = json_array_get(v9, 2u);
    v21 = (char *)json_string_value(v20) + 2;
    v22 = strlen(v19);
    v23 = strlen(v17);
    v24 = strlen(v21);
    v25 = v23 == 0;
    if ( !v22 )
      v25 = 1;
    if ( !v24 )
      v25 = 1;
    v26 = v24;
    if ( v25 )
    {
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "invalid job s:h:t(%d:%d%d)", v22, v23, v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_eth/frontend_eth.c",
        157,
        "rpc2_job_decode",
        15,
        377,
        100,
        v42);
LABEL_24:
      pool_tclear(a2, (_BYTE *)(a2 + 2076), 0);
      v10 = 0;
      goto LABEL_11;
    }
    mutex = (pthread_mutex_t *)(a2 + 1940);
    sizea = v23 >> 1;
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1940));
    *(_DWORD *)(a2 + 1916) = v23 >> 1;
    v27 = malloc(v23 >> 1);
    v10 = hex2bin((int)v27, (unsigned __int8 *)v17, sizea);
    if ( v10 )
    {
      size = *(_DWORD *)(a2 + 1916);
      v29 = malloc(size);
      *(_DWORD *)(a2 + 1908) = v29;
      if ( v29 )
      {
        memcpy(v29, v27, size);
        free(v27);
        v30 = *(void **)(a2 + 1936);
        if ( v30 )
          free(v30);
        pthread_mutex_unlock(mutex);
        if ( *(_DWORD *)(a2 + 1908) )
        {
          memcpy((void *)(a2 + 456), *(const void **)(a2 + 1908), *(_DWORD *)(a2 + 1916));
          hex2bin(a2 + 1512, (unsigned __int8 *)v19, 32);
          hex2bin(a2 + 1480, (unsigned __int8 *)v21, v26);
          v31 = target_to_diff_eth(a2 + 1480);
          v32 = *(void **)(a2 + 1600);
          *(double *)(a2 + 1576) = (double)v31;
          *(double *)(a2 + 1968) = (double)v31;
          if ( v32 )
            free(v32);
          v33 = malloc(6u);
          if ( v33 )
            LOWORD(v34) = 10932;
          *(_DWORD *)(a2 + 1600) = v33;
          if ( v33 )
          {
            HIWORD(v34) = 19;
            v35 = v34[1];
            *(_DWORD *)v33 = *v34;
            v33[2] = v35;
          }
          *(_DWORD *)(a2 + 1596) = get_epoch_number_eth((const void *)(a2 + 1512));
          V_LOCK();
          logfmt_raw(v42, 0x1000u, 0, "epoch:%d targetdiff:%d", *(_DWORD *)(a2 + 1596), v31);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_eth/frontend_eth.c",
            157,
            "rpc2_job_decode",
            15,
            417,
            20,
            v42);
          v36 = *(void **)(a2 + 1908);
          if ( v36 )
            free(v36);
          pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
          pool_tset(a2, (_BYTE *)(a2 + 2076), 1);
          goto LABEL_11;
        }
        V_LOCK();
        logfmt_raw(v42, 0x1000u, 0, "Work requested before it was received");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_eth/frontend_eth.c",
          157,
          "rpc2_job_decode",
          15,
          406,
          80,
          v42);
        goto LABEL_30;
      }
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "RPC2 OOM!");
      V_UNLOCK();
      v28 = 394;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v42, 0x1000u, 0, "JSON invalid blob");
      V_UNLOCK();
      v28 = 387;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "rpc2_job_decode",
      15,
      v28,
      100,
      v42);
    if ( v27 )
      free(v27);
    pthread_mutex_unlock(mutex);
LABEL_30:
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
    V_LOCK();
    logfmt_raw(v42, 0x1000u, 0, "%s", "rpc2_job_decode");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_eth/frontend_eth.c",
      157,
      "rpc2_job_decode",
      15,
      425,
      80,
      v42);
    goto LABEL_24;
  }
  v10 = 0;
LABEL_11:
  if ( *((_DWORD *)v5 + 1) == -1 )
    return v10;
  v12 = (unsigned int *)v5 + 1;
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
