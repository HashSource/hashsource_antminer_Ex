int __fastcall stratum_check(int *a1)
{
  __int64 v1; // r0
  _BYTE v5[32]; // [sp+34h] [bp-1060h] BYREF
  _BYTE v6[4]; // [sp+1034h] [bp-60h] BYREF
  _DWORD v7[7]; // [sp+1038h] [bp-5Ch] BYREF
  int v8; // [sp+1054h] [bp-40h]
  _DWORD v9[7]; // [sp+1058h] [bp-3Ch] BYREF
  int v10; // [sp+1074h] [bp-20h]
  int v11; // [sp+1078h] [bp-1Ch]
  unsigned int seconds; // [sp+107Ch] [bp-18h]
  __time_t v13; // [sp+1080h] [bp-14h]
  void *ptr; // [sp+1084h] [bp-10h]

  v11 = frontend_runtime_instance();
  seconds = 30;
  v13 = *(_DWORD *)(*(_DWORD *)(v11 + 72) + 20);
  if ( !a1 || !a1[3] || !a1[4] )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "stratum check, no pool %d, empty url or user", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      359,
      100,
      v5);
LABEL_20:
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Sweep error string = N%d:1", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      441,
      100,
      v5);
    return 0;
  }
  if ( a1[8] )
    free((void *)a1[8]);
  a1[8] = (int)strdup((const char *)a1[3]);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "stratum check pool %d, pool url: %s", *a1, a1[3]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_check",
    13,
    367,
    40,
    v5);
  pool_tset((int)a1, (unsigned __int8 *)a1 + 1904, 0);
  pool_tclear((int)a1, (unsigned __int8 *)a1 + 1916, 0);
  pool_tclear((int)a1, (unsigned __int8 *)a1 + 8, 0);
  if ( (*(unsigned __int8 (__fastcall **)(int *))v11)(a1) != 1 )
  {
    (*(void (__fastcall **)(int *))(v11 + 4))(a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "stratum create tcp connection failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      376,
      100,
      v5);
    goto LABEL_20;
  }
  if ( (*(unsigned __int8 (__fastcall **)(int, int *))(v11 + 16))(v11, a1) != 1 )
  {
    (*(void (__fastcall **)(int *))(v11 + 4))(a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "stratum login failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      383,
      100,
      v5);
    goto LABEL_20;
  }
  while ( 1 )
  {
    wait_pool_to_be_current_timeout((int)a1);
    if ( !stratum_socket_full((int)a1, v13) )
    {
      V_LOCK();
      sub_45774((int)v7, *a1);
      logfmt_raw(v5, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "stratum connection timeout");
      V_UNLOCK();
      v1 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/stratum_handler.c",
             145,
             "stratum_check",
             13,
             393,
             100,
             v5);
      ptr = 0;
    }
    else
    {
      ptr = (void *)(*(int (__fastcall **)(int *))(v11 + 8))(a1);
    }
    if ( ptr )
      break;
    ++total_go;
    ++a1[487];
    (*(void (__fastcall **)(int *, _DWORD))(v11 + 4))(a1, HIDWORD(v1));
    pool_tclear((int)a1, (unsigned __int8 *)a1 + 1916, 0);
    pool_died(a1);
    V_LOCK();
    sub_45774((int)v9, *a1);
    logfmt_raw(
      v5,
      0x1000u,
      0,
      v10,
      v9[0],
      v9[1],
      v9[2],
      v9[3],
      v9[4],
      v9[5],
      v9[6],
      v10,
      "stratum connection interrupted");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      408,
      20,
      v5);
    sleep(seconds);
  }
  if ( !(*(int (__fastcall **)(int, int *, void *, _BYTE *))(v11 + 24))(v11, a1, ptr, v6)
    && !(*(int (__fastcall **)(int, void *, int *))(v11 + 28))(v11, ptr, a1) )
  {
    free(ptr);
    (*(void (__fastcall **)(int *))(v11 + 4))(a1);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "unsuitable pool configuration, notify from pool:%d dose not match the machine", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      426,
      100,
      v5);
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "Sweep error string = N%d:2.", *a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/stratum_handler.c",
      145,
      "stratum_check",
      13,
      427,
      100,
      v5);
    return 0;
  }
  free(ptr);
  pool_tset((int)a1, (unsigned __int8 *)a1 + 8, 0);
  pool_tclear((int)a1, (unsigned __int8 *)a1 + 1904, 0);
  pools_active = 1;
  update_miner_working_status();
  (*(void (__fastcall **)(int *))(v11 + 4))(a1);
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "pool %d is valid, url: \"%s\"", *a1, a1[3]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/stratum_handler.c",
    145,
    "stratum_check",
    13,
    437,
    40,
    v5);
  return 1;
}
