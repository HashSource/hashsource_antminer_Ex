void __fastcall __noreturn nonce_submit_thread(int a1)
{
  int v1; // r11
  int *all_created_runtime; // r5
  char *v3; // r4
  int v4; // r0
  int v5; // r0
  pthread_t v6; // r0
  int v7; // r6
  pthread_mutex_t *v8; // r0
  int v9; // r4
  const char *v10; // r0
  int v11; // r0
  double v12; // d7
  double v13; // d5
  int v14; // r2
  bool v15; // cf
  double v16; // d7
  int v17; // r1
  int v18; // [sp+14h] [bp-102Ch]
  _BYTE v19[4]; // [sp+2Ch] [bp-1014h] BYREF
  void *dest[284]; // [sp+30h] [bp-1010h] BYREF
  _QWORD v21[375]; // [sp+4A0h] [bp-BA0h] BYREF
  _BYTE v22[4100]; // [sp+1058h] [bp+18h] BYREF

  v1 = frontend_runtime_instance(a1);
  all_created_runtime = (int *)get_all_created_runtime(v19);
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK(v4);
  syscall(224);
  v5 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/god-miner.c",
    142,
    "nonce_submit_thread",
    19,
    306,
    40,
    v22);
  prctl(15, v3);
  v6 = pthread_self();
  pthread_detach(v6);
  v7 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v7 + 40))(v7, v21);
      v8 = (pthread_mutex_t *)v21[0];
      if ( v21[0] < (unsigned __int64)total_pools )
      {
        v9 = *(_DWORD *)(pools + 4 * LODWORD(v21[0]));
        v8 = (pthread_mutex_t *)(v9 + 1592);
        if ( v9 )
          break;
      }
      V_LOCK(v8);
      v11 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/god-miner.c",
        142,
        "nonce_submit_thread",
        19,
        321,
        80,
        v22);
    }
    pthread_mutex_lock(v8);
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v9 + 456), sizeof(dest));
    v10 = *(const char **)(v9 + 1580);
    if ( v10 )
      dest[281] = _strdup(v10);
    v18 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v1 + 72) + 8))(dest, v9, v21);
    pthread_mutex_unlock((pthread_mutex_t *)(v9 + 1592));
    if ( v18 == 1 )
    {
      v12 = *(double *)(v9 + 1808);
      v13 = *(double *)(v9 + 1816) + v12;
      v14 = dword_18E3B4;
      v15 = __CFADD__(total_stale, 1);
      v16 = total_diff_stale + v12;
      v17 = *(_DWORD *)(v9 + 1640) + 1;
      ++total_stale;
      *(_DWORD *)(v9 + 1640) = v17;
      dword_18E3B4 = v15 + v14;
      *(double *)(v9 + 1816) = v13;
      total_diff_stale = v16;
    }
    else
    {
      workio_submit_work((int)dest, v9);
    }
  }
}
