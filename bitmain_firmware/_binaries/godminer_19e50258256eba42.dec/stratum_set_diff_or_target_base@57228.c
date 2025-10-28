int __fastcall stratum_set_diff_or_target_base(int a1, int a2, const json_t *a3)
{
  double v3; // d0
  json_t *v4; // r0
  size_t v6; // r0
  double v7; // r0
  int v9; // [sp+4h] [bp-1058h]
  _BYTE v13[36]; // [sp+38h] [bp-1024h] BYREF
  double v14; // [sp+1038h] [bp-24h]
  int v15; // [sp+1040h] [bp-1Ch]
  char *s; // [sp+1044h] [bp-18h]

  v15 = a2 + 456;
  if ( !json_array_get(a3, 0) || *(_DWORD *)json_array_get(a3, 0) != 2 )
  {
    LODWORD(v7) = json_array_get(a3, 0);
    json_number_value(v7);
    v14 = v3;
    if ( v3 == 0.0 )
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "Stratum set target: invalid parameters");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_base.c",
        152,
        "stratum_set_diff_or_target_base",
        31,
        35,
        100,
        v13);
      return 0;
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    *(double *)(v15 + 1064) = v14;
    *(_QWORD *)(a2 + 448) = *(_QWORD *)(v15 + 1064);
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(a2 + 448);
    (*(void (__fastcall **)(int))(a1 + 64))(v15 + 1032);
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s diff from pool: %lf", "stratum_set_diff_or_target_base", v9, v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_set_diff_or_target_base",
      31,
      42,
      20,
      v13);
    V_LOCK();
    logfmt_raw(
      v13,
      0x1000u,
      0,
      "%s target:%08x %08x %08x %08x %08x %08x %08x %08x ",
      "stratum_set_diff_or_target_base",
      *(_DWORD *)(v15 + 1032),
      *(_DWORD *)(v15 + 1036),
      *(_DWORD *)(v15 + 1040),
      *(_DWORD *)(v15 + 1044),
      *(_DWORD *)(v15 + 1048),
      *(_DWORD *)(v15 + 1052),
      *(_DWORD *)(v15 + 1056),
      *(_DWORD *)(v15 + 1060));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_set_diff_or_target_base",
      31,
      43,
      20,
      v13);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  v4 = json_array_get(a3, 0);
  s = (char *)json_string_value(v4);
  if ( s && strlen(s) == 64 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s target from pool: %s", "stratum_set_diff_or_target_base", s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_base.c",
      152,
      "stratum_set_diff_or_target_base",
      31,
      24,
      20,
      v13);
    v6 = strlen(s);
    hex2bin(v13, s, v6 >> 1);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    memcpy((void *)(v15 + 1032), v13, 0x20u);
    (*(void (__fastcall **)(_BYTE *))(a1 + 68))(v13);
    *(double *)(v15 + 1064) = v3;
    *(_QWORD *)(a2 + 448) = *(_QWORD *)(v15 + 1064);
    *(_QWORD *)(a2 + 1808) = *(_QWORD *)(a2 + 448);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    return 1;
  }
  V_LOCK();
  logfmt_raw(v13, 0x1000u, 0, "Stratum set target: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_base.c",
    152,
    "stratum_set_diff_or_target_base",
    31,
    20,
    100,
    v13);
  return 0;
}
