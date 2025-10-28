void __fastcall __noreturn nonce_submit_thread(int a1)
{
  int v1; // r0
  pthread_t v2; // r0
  _BYTE v3[44]; // [sp+18h] [bp-206Ch] BYREF
  _QWORD v4[5]; // [sp+1018h] [bp-106Ch] BYREF
  _DWORD v5[284]; // [sp+1BD0h] [bp-4B4h] BYREF
  int v6; // [sp+2040h] [bp-44h] BYREF
  _DWORD *v7; // [sp+2044h] [bp-40h]
  int v8; // [sp+2048h] [bp-3Ch]
  char *s; // [sp+204Ch] [bp-38h]
  int *all_created_runtime; // [sp+2050h] [bp-34h]
  pthread_mutex_t *v11; // [sp+2054h] [bp-30h]
  __int64 v12; // [sp+2058h] [bp-2Ch]
  int v13; // [sp+2064h] [bp-20h]
  int v14; // [sp+2068h] [bp-1Ch]
  int v15; // [sp+206Ch] [bp-18h]

  v12 = 0;
  v14 = a1;
  v13 = 0;
  v15 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v6);
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v3, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner.c",
    135,
    "nonce_submit_thread",
    19,
    235,
    40,
    v3);
  prctl(15, s);
  v2 = pthread_self();
  pthread_detach(v2);
  v8 = *all_created_runtime;
  memset(v5, 0, sizeof(v5));
  while ( 1 )
  {
    (*(void (__fastcall **)(int, _QWORD *))(v8 + 44))(v8, v4);
    v7 = v4;
    if ( v4[0] >= (unsigned __int64)total_pools )
      v11 = 0;
    else
      v11 = *(pthread_mutex_t **)(pools + 4 * *v7);
    if ( v11 )
    {
      pthread_mutex_lock((pthread_mutex_t *)((char *)v11 + 1592));
      sub_401C8((int)v5);
      sub_40210(v5, (const char **)&v11[19]);
      v13 = (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *, _QWORD *))(*(_DWORD *)(v15 + 72) + 8))(v5, v11, v4);
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v11 + 1592));
      if ( v13 == 1 )
      {
        ++*(_QWORD *)&total_stale;
        ++v11[68].__owner;
        *((double *)&v11[75].__align + 2) = *((double *)&v11[75].__align + 2) + *((double *)&v11[75].__align + 1);
        total_diff_stale = *((double *)&v11[75].__align + 1) + total_diff_stale;
      }
      else
      {
        workio_submit_work((int)v5, v11);
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "the pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "nonce_submit_thread",
        19,
        256,
        80,
        v3);
    }
  }
}
