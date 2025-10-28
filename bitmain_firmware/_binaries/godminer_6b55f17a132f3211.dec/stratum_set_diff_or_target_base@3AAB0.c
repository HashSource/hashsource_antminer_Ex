int __fastcall stratum_set_diff_or_target_base(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  double v7; // r0
  int v8; // r0
  void (__fastcall *v9)(int); // r3
  int v11; // r0
  int v12; // r12
  _DWORD *v13; // r0
  const char *v14; // r0
  char *v15; // r4
  int v16; // r0
  int v17; // r0
  size_t v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _DWORD v25[1025]; // [sp+10h] [bp-1004h] BYREF

  if ( json_array_get(a3, 0) && *json_array_get(a3, 0) == 2 )
  {
    v13 = json_array_get(a3, 0);
    v14 = (const char *)json_string_value(v13);
    v15 = (char *)v14;
    if ( v14 )
    {
      v14 = (const char *)strlen(v14);
      if ( v14 == (const char *)64 )
      {
        V_LOCK(64);
        v17 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_base.c",
          151,
          "stratum_set_diff_or_target_base",
          31,
          24,
          20,
          v25);
        v18 = strlen(v15);
        hex2bin((int)v25, (unsigned __int8 *)v15, v18 >> 1);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
        v19 = v25[1];
        v20 = v25[2];
        v21 = v25[3];
        *(_DWORD *)(a2 + 1480) = v25[0];
        *(_DWORD *)(a2 + 1484) = v19;
        *(_DWORD *)(a2 + 1488) = v20;
        *(_DWORD *)(a2 + 1492) = v21;
        v22 = v25[5];
        v23 = v25[6];
        v24 = v25[7];
        *(_DWORD *)(a2 + 1496) = v25[4];
        *(_DWORD *)(a2 + 1500) = v22;
        *(_DWORD *)(a2 + 1504) = v23;
        *(_DWORD *)(a2 + 1508) = v24;
        (*(void (__fastcall **)(_DWORD *))(a1 + 68))(v25);
        *(double *)(a2 + 1512) = v3;
        *(double *)(a2 + 440) = v3;
        *(double *)(a2 + 1800) = v3;
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1584));
        return 1;
      }
    }
    V_LOCK(v14);
    v16 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v16);
    v12 = 20;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "stratum_set_diff_or_target_base",
      31,
      v12,
      100,
      v25);
    return 0;
  }
  LODWORD(v7) = json_array_get(a3, 0);
  v8 = json_number_value(v7);
  if ( v3 == 0.0 )
  {
    V_LOCK(v8);
    v11 = logfmt_raw((int)v25, 0x1000u);
    V_UNLOCK(v11);
    v12 = 36;
    goto LABEL_7;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1584));
  v9 = *(void (__fastcall **)(int))(a1 + 64);
  *(double *)(a2 + 1512) = v3;
  *(double *)(a2 + 440) = v3;
  *(double *)(a2 + 1800) = v3;
  v9(a2 + 1480);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1584));
  return 1;
}
