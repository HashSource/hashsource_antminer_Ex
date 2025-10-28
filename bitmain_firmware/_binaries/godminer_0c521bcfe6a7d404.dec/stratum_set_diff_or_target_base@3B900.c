int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  double v7; // r0
  int v8; // r0
  int (__fastcall *v9)(int); // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v15; // r0
  int v16; // r12
  _DWORD *v17; // r0
  const char *v18; // r0
  char *v19; // r5
  int v20; // r0
  int v21; // r0
  size_t v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r3
  _DWORD v29[1025]; // [sp+28h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v17 = json_array_get(a3, 0);
    v18 = (const char *)json_string_value(v17);
    v19 = (char *)v18;
    if ( v18 )
    {
      v18 = (const char *)strlen(v18);
      if ( v18 == (const char *)64 )
      {
        V_LOCK(64);
        v21 = logfmt_raw((int)v29, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_base.c",
          155,
          "stratum_set_diff_or_target_base",
          31,
          24,
          20,
          v29);
        v22 = strlen(v19);
        hex2bin((int)v29, (unsigned __int8 *)v19, v22 >> 1);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
        v23 = v29[1];
        v24 = v29[2];
        v25 = v29[3];
        *(_DWORD *)(a2 + 1488) = v29[0];
        *(_DWORD *)(a2 + 1492) = v23;
        *(_DWORD *)(a2 + 1496) = v24;
        *(_DWORD *)(a2 + 1500) = v25;
        v26 = v29[5];
        v27 = v29[6];
        v28 = v29[7];
        *(_DWORD *)(a2 + 1504) = v29[4];
        *(_DWORD *)(a2 + 1508) = v26;
        *(_DWORD *)(a2 + 1512) = v27;
        *(_DWORD *)(a2 + 1516) = v28;
        (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v29);
        *(double *)(a2 + 1520) = v3;
        *(double *)(a2 + 448) = v3;
        *(double *)(a2 + 1808) = v3;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
        return 1;
      }
    }
    V_LOCK(v18);
    v20 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v20);
    v16 = 20;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_base.c",
      155,
      "stratum_set_diff_or_target_base",
      31,
      v16,
      100,
      v29);
    return 0;
  }
  LODWORD(v7) = json_array_get(a3, 0);
  v8 = json_number_value(v7);
  if ( v3 == 0.0 )
  {
    V_LOCK(v8);
    v15 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v15);
    v16 = 35;
    goto LABEL_7;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
  v9 = *(int (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1520) = v3;
  *(double *)(a2 + 448) = v3;
  *(double *)(a2 + 1808) = v3;
  v10 = v9(a2 + 1488);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v11);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_base.c",
          155,
          "stratum_set_diff_or_target_base",
          31,
          42,
          20,
          v29);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_base.c",
    155,
    "stratum_set_diff_or_target_base",
    31,
    43,
    20,
    v29);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
  return 1;
}
