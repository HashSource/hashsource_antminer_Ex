int __fastcall sub_3F994(_DWORD *a1, int a2)
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
  _QWORD *v32; // r6
  unsigned int v33; // r8
  void *v34; // r0
  _WORD *v35; // r0
  int v36; // r1
  int v37; // r2
  unsigned __int64 v38; // r0
  int v39; // r0
  void *v40; // r0
  int v41; // r0
  int v42; // r0
  char *nptr; // [sp+10h] [bp-1014h]
  pthread_mutex_t *mutex; // [sp+14h] [bp-1010h]
  int v45; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v46[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656) ^ 1;
  if ( !a1 )
    v2 |= 1u;
  if ( v2 || *a1 != 1 )
  {
    V_LOCK(a1);
    v4 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v4);
    v2 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "rpc2_job_decode",
      15,
      565,
      100,
      v46);
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
    v19 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "rpc2_job_decode",
      15,
      579,
      100,
      v46);
    return v2;
  }
  mutex = (pthread_mutex_t *)(a2 + 1780);
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1780));
  *(_DWORD *)(a2 + 1756) = v15 >> 1;
  v20 = malloc(v15 >> 1);
  v21 = v15 >> 1;
  v22 = v20;
  v2 = hex2bin((int)v20, (unsigned __int8 *)v8, v21);
  if ( !v2 )
  {
    V_LOCK(0);
    v23 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v23);
    v24 = g_zc;
    v25 = 590;
LABEL_15:
    zlog(
      v24,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "rpc2_job_decode",
      15,
      v25,
      100,
      v46);
    if ( v22 )
      free(v22);
    pthread_mutex_unlock(mutex);
    goto LABEL_18;
  }
  v28 = *(_DWORD *)(a2 + 1756);
  v29 = malloc(v28);
  *(_DWORD *)(a2 + 1748) = v29;
  if ( !v29 )
  {
    V_LOCK(0);
    v41 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v41);
    v24 = g_zc;
    v25 = 599;
    goto LABEL_15;
  }
  memcpy(v29, v22, v28);
  free(v22);
  v30 = *(void **)(a2 + 1776);
  if ( v30 )
    free(v30);
  v31 = pthread_mutex_unlock(mutex);
  if ( !*(_DWORD *)(a2 + 1748) )
  {
    V_LOCK(v31);
    v42 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v42);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "rpc2_job_decode",
      15,
      616,
      80,
      v46);
LABEL_18:
    v26 = pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    v2 = 0;
    V_LOCK(v26);
    v27 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "rpc2_job_decode",
      15,
      662,
      80,
      v46);
    return v2;
  }
  memcpy((void *)(a2 + 464), *(const void **)(a2 + 1748), *(_DWORD *)(a2 + 1756));
  v32 = *(_QWORD **)(a2 + 1588);
  if ( v32 || (v32 = calloc(1u, 0x6Bu), (*(_DWORD *)(a2 + 1588) = v32) != 0) )
  {
    hex2bin((int)v32, (unsigned __int8 *)v10, 32);
    hex2bin(a2 + 1488, (unsigned __int8 *)v12, v18);
    v33 = target_to_diff_eth(a2 + 1488);
    *(double *)(a2 + 1520) = (double)v33;
    *(double *)(a2 + 1808) = (double)v33;
    sprintf((char *)(a2 + 1976), "%13.2f", (double)v33);
    v45 = 0;
    get_all_created_runtime(&v45);
    v34 = *(void **)(a2 + 1580);
    if ( v34 )
      free(v34);
    v35 = malloc(6u);
    if ( v35 )
      v37 = 15472;
    *(_DWORD *)(a2 + 1580) = v35;
    if ( v35 )
    {
      HIWORD(v37) = 19;
      v36 = *(_DWORD *)(v37 + 4);
      *(_DWORD *)v35 = *(_DWORD *)v37;
      v35[2] = v36;
    }
    LODWORD(v38) = get_epoch_number_eth(v32, v36, v37, v35);
    *(_DWORD *)(a2 + 1536) = v38;
    if ( nptr )
    {
      v38 = strtoull(nptr, 0, 16);
      v32[12] = v38;
    }
    else
    {
      *((_BYTE *)v32 + 96) = 0;
      *((_BYTE *)v32 + 97) = 0;
      *((_BYTE *)v32 + 98) = 0;
      *((_BYTE *)v32 + 99) = 0;
      *((_BYTE *)v32 + 100) = 0;
      *((_BYTE *)v32 + 101) = 0;
      *((_BYTE *)v32 + 102) = 0;
      *((_BYTE *)v32 + 103) = 0;
    }
    V_LOCK(v38);
    v39 = logfmt_raw((int)v46, 0x1000u);
    V_UNLOCK(v39);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth/frontend_eth.c",
      167,
      "rpc2_job_decode",
      15,
      653,
      20,
      v46);
    v40 = *(void **)(a2 + 1748);
    if ( v40 )
      free(v40);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  }
  else
  {
    v2 = 0;
    printf(aInvalidPointer, "work->private");
  }
  return v2;
}
