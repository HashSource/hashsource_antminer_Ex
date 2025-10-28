int __fastcall stratum_check(pthread_mutex_t *a1)
{
  const char *kind; // r0
  const char *v3; // r7
  void *owner; // r3
  char *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r8
  int v14; // r0
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v19; // r0
  int v20; // r0
  int v21; // r8
  int v22; // r11
  int v23; // r0
  void *v24; // r11
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  void (__fastcall *v30)(pthread_mutex_t *); // r1
  int v31; // r2
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int lock; // [sp+0h] [bp-1084h] BYREF
  int v39; // [sp+4h] [bp-1080h]
  int v40; // [sp+8h] [bp-107Ch]
  int v41; // [sp+Ch] [bp-1078h]
  int v42; // [sp+10h] [bp-1074h]
  int v43; // [sp+14h] [bp-1070h]
  int v44; // [sp+18h] [bp-106Ch]
  int v45; // [sp+1Ch] [bp-1068h]
  const char *v46; // [sp+20h] [bp-1064h]
  int *p_lock; // [sp+28h] [bp-105Ch]
  char *v48; // [sp+2Ch] [bp-1058h]
  char *s; // [sp+30h] [bp-1054h]
  const char *v50; // [sp+34h] [bp-1050h]
  char v51[4]; // [sp+3Ch] [bp-1048h] BYREF
  _DWORD v52[8]; // [sp+40h] [bp-1044h] BYREF
  _DWORD v53[8]; // [sp+60h] [bp-1024h] BYREF
  _BYTE v54[4100]; // [sp+80h] [bp-1004h] BYREF

  kind = (const char *)frontend_runtime_instance(a1);
  if ( !a1 || (v3 = kind, (kind = (const char *)a1->__kind) == 0) || !a1->__nusers )
  {
    V_LOCK(kind);
    v12 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v12);
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/stratum_handler.c",
            148,
            "stratum_check",
            13,
            359,
            100,
            v54);
    goto LABEL_10;
  }
  owner = (void *)a1[1].__owner;
  p_lock = *(int **)(*((_DWORD *)v3 + 18) + 20);
  if ( owner )
  {
    free(owner);
    kind = (const char *)a1->__kind;
  }
  v5 = _strdup(kind);
  a1[1].__owner = (int)v5;
  V_LOCK(v5);
  v6 = logfmt_raw((int)v54, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/stratum_handler.c",
    148,
    "stratum_check",
    13,
    367,
    40,
    v54);
  v48 = &a1->__size[8];
  pool_tset((int)a1, &a1[79].__size[8], 0);
  pool_tclear((int)a1, &a1[79].__size[20], 0);
  pool_tclear((int)a1, &a1->__size[8], 0);
  if ( !(*(int (__fastcall **)(pthread_mutex_t *))v3)(a1) )
  {
    v7 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v8);
    v9 = g_zc;
    v10 = 376;
LABEL_8:
    v11 = zlog(
            v9,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/stratum_handler.c",
            148,
            "stratum_check",
            13,
            v10,
            100,
            v54);
LABEL_10:
    V_LOCK(v11);
    lock = a1->__lock;
    v13 = 0;
    v14 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v14);
    v15 = g_zc;
    v16 = 100;
    v17 = 441;
    goto LABEL_11;
  }
  if ( !(*((int (__fastcall **)(const char *, pthread_mutex_t *))v3 + 4))(v3, a1) )
  {
    v19 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v19);
    v20 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v20);
    v9 = g_zc;
    v10 = 383;
    goto LABEL_8;
  }
  v21 = (int)p_lock;
  s = "poolno";
  v50 = "stratum connection timeout";
  while ( 1 )
  {
    wait_pool_to_be_current_timeout((int)a1);
    v22 = stratum_socket_full((int)a1, v21);
    if ( v22 )
      break;
    V_LOCK(a1);
    V_INT((int)v52, s);
    v46 = v50;
    p_lock = &lock;
    lock = v52[0];
    v39 = v52[1];
    v40 = v52[2];
    v41 = v52[3];
    v42 = v52[4];
    v43 = v52[5];
    v44 = v52[6];
    v45 = v52[7];
    v29 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_check",
      13,
      393,
      100,
      v54);
LABEL_22:
    v30 = (void (__fastcall *)(pthread_mutex_t *))*((_DWORD *)v3 + 1);
    v31 = total_go;
    ++a1[81].__count;
    total_go = v31 + 1;
    v30(a1);
    pool_tclear((int)a1, &a1[79].__size[20], 0);
    v32 = pool_died(a1);
    V_LOCK(v32);
    V_INT((int)v53, s);
    v46 = "stratum connection interrupted";
    lock = v53[0];
    v39 = v53[1];
    v40 = v53[2];
    v41 = v53[3];
    v42 = v53[4];
    v43 = v53[5];
    v44 = v53[6];
    v45 = v53[7];
    v33 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v33);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_check",
      13,
      408,
      20,
      v54);
    sleep(0x1Eu);
  }
  v23 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 2))(a1);
  if ( !v23 )
    goto LABEL_22;
  v13 = v22;
  v24 = (void *)v23;
  if ( (*((int (__fastcall **)(const char *, pthread_mutex_t *, int, char *))v3 + 6))(v3, a1, v23, v51)
    || (*((int (__fastcall **)(const char *, void *, pthread_mutex_t *))v3 + 7))(v3, v24, a1) )
  {
    free(v24);
    pool_tset((int)a1, v48, 0);
    v25 = pool_tclear((int)a1, &a1[79].__size[8], 0);
    pools_active = 1;
    update_miner_working_status(v25);
    v26 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v26);
    v27 = a1->__kind;
    lock = a1->__lock;
    v39 = v27;
    v28 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v28);
    v15 = g_zc;
    v16 = 40;
    v17 = 437;
LABEL_11:
    zlog(
      v15,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_check",
      13,
      v17,
      v16,
      v54);
  }
  else
  {
    free(v24);
    v34 = (*((int (__fastcall **)(pthread_mutex_t *))v3 + 1))(a1);
    V_LOCK(v34);
    lock = a1->__lock;
    v35 = logfmt_raw((int)v54, 0x1000u);
    v13 = 0;
    V_UNLOCK(v35);
    v36 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/stratum_handler.c",
            148,
            "stratum_check",
            13,
            426,
            100,
            v54);
    V_LOCK(v36);
    lock = a1->__lock;
    v37 = logfmt_raw((int)v54, 0x1000u);
    V_UNLOCK(v37);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/stratum_handler.c",
      148,
      "stratum_check",
      13,
      427,
      100,
      v54);
  }
  return v13;
}
