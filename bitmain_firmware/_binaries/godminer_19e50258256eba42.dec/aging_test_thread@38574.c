int aging_test_thread()
{
  pthread_t v0; // r0
  const char *v1; // r3
  _BYTE v3[48]; // [sp+34h] [bp-1070h] BYREF
  int v4; // [sp+1034h] [bp-70h] BYREF
  _DWORD v5[7]; // [sp+1038h] [bp-6Ch] BYREF
  int v6; // [sp+1054h] [bp-50h]
  _DWORD v7[7]; // [sp+1058h] [bp-4Ch] BYREF
  int v8; // [sp+1074h] [bp-30h]
  int n; // [sp+1078h] [bp-2Ch]
  int ii; // [sp+107Ch] [bp-28h]
  int v11; // [sp+1080h] [bp-24h]
  _DWORD *all_created_runtime; // [sp+1084h] [bp-20h]
  int i; // [sp+1088h] [bp-1Ch]
  int k; // [sp+108Ch] [bp-18h]
  int j; // [sp+1090h] [bp-14h]
  int m; // [sp+1094h] [bp-10h]

  v0 = pthread_self();
  pthread_detach(v0);
  pthread_setcanceltype(1, 0);
  v11 = test_times + 1;
  aging_test_status = 1;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "================aging test[%d] start================", v11);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "aging_test_thread",
    17,
    209,
    40,
    v3);
  v4 = 0;
  all_created_runtime = get_all_created_runtime(&v4);
  if ( v11 <= 15 )
  {
    for ( i = 0; i < v4; ++i )
    {
      (*(void (__fastcall **)(_DWORD, int))(all_created_runtime[i] + 204))(all_created_runtime[i], 1);
      usleep(0x64u);
      (*(void (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[i] + 204))(all_created_runtime[i], 0);
      usleep(0x64u);
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[i] + 4))(all_created_runtime[i]);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "LOW_TEMP-[%d] chain-%d set finish!", v11, i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "aging_test_thread",
        17,
        221,
        40,
        v3);
      *(_DWORD *)(all_created_runtime[i] + 504) = 100;
    }
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "LOW_TEMP-[%d] aging test waitting...", v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "aging_test_thread",
      17,
      225,
      40,
      v3);
    sleep(0x12Cu);
    for ( j = 0; j < v4; ++j )
    {
      if ( (*(int (__fastcall **)(_DWORD))(all_created_runtime[j] + 220))(all_created_runtime[j]) )
      {
        V_LOCK();
        sub_37C40((int)v5, *(int *)(all_created_runtime[j] + 272));
        logfmt_raw(
          v3,
          0x1000u,
          0,
          v6,
          v5[0],
          v5[1],
          v5[2],
          v5[3],
          v5[4],
          v5[5],
          v5[6],
          v6,
          "check asic num failed",
          "aging_test_thread");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "aging_test_thread",
          17,
          230,
          100,
          v3);
        aging_test_status = 0;
      }
    }
    for ( k = 0; k < v4; ++k )
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[k] + 24))(all_created_runtime[k]);
    usleep(0x64u);
    tmp_ctrl_enable = 1;
    for ( m = 0; m < v4; ++m )
    {
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[m] + 28))(all_created_runtime[m]);
      usleep(0x64u);
      (*(void (__fastcall **)(_DWORD, int))(all_created_runtime[m] + 204))(all_created_runtime[m], 1);
      usleep(0x64u);
      (*(void (__fastcall **)(_DWORD, _DWORD))(all_created_runtime[m] + 204))(all_created_runtime[m], 0);
      usleep(0x64u);
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[m] + 4))(all_created_runtime[m]);
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "HIGH_TEMP-[%d] chain-%d set finish!", v11, m);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "aging_test_thread",
        17,
        249,
        40,
        v3);
      *(_DWORD *)(all_created_runtime[m] + 504) = 400;
    }
    while ( !high_tmp_aging_start )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "HIGH_TEMP-[%d] high_tmp_aging_start[%d]", v11, (unsigned __int8)high_tmp_aging_start);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "aging_test_thread",
        17,
        253,
        40,
        v3);
      sleep(0x3Cu);
    }
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "HIGH_TEMP-[%d] reached target temp aging threshold!", v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "aging_test_thread",
      17,
      254,
      40,
      v3);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "HIGH_TEMP-[%d] aging test waitting...", v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "aging_test_thread",
      17,
      255,
      40,
      v3);
    sleep(0x12Cu);
    for ( n = 0; n < v4; ++n )
    {
      if ( (*(int (__fastcall **)(_DWORD))(all_created_runtime[n] + 220))(all_created_runtime[n]) )
      {
        V_LOCK();
        sub_37C40((int)v7, *(int *)(all_created_runtime[n] + 272));
        logfmt_raw(
          v3,
          0x1000u,
          0,
          v8,
          v7[0],
          v7[1],
          v7[2],
          v7[3],
          v7[4],
          v7[5],
          v7[6],
          v8,
          "check asic num failed",
          "aging_test_thread");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "aging_test_thread",
          17,
          260,
          100,
          v3);
        aging_test_status = 0;
      }
    }
    for ( ii = 0; ii < v4; ++ii )
    {
      (*(void (__fastcall **)(_DWORD))(all_created_runtime[ii] + 24))(all_created_runtime[ii]);
      high_tmp_aging_start = 0;
      tmp_ctrl_enable = 0;
    }
    usleep(0x30D40u);
  }
  tmp_ctrl_enable = 0;
  V_LOCK();
  if ( aging_test_status )
    v1 = "SUCCESS";
  else
    v1 = "FAIL";
  logfmt_raw(v3, 0x1000u, 0, "================aging test[%d] %s!================", v11, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "aging_test_thread",
    17,
    272,
    40,
    v3);
  return 0;
}
