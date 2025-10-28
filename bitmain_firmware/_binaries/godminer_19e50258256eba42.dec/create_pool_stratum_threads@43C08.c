int create_pool_stratum_threads()
{
  _BYTE v2[24]; // [sp+14h] [bp-1018h] BYREF
  _DWORD *v4; // [sp+1018h] [bp-14h]
  int v5; // [sp+101Ch] [bp-10h]
  int v6; // [sp+1020h] [bp-Ch]
  int i; // [sp+1024h] [bp-8h]

  v6 = 0;
  byte_5ACE78 = 1;
  set_current_pool(*(_DWORD *)pools);
  for ( i = 0; i < total_pools; ++i )
  {
    v5 = *(_DWORD *)(pools + 4 * i);
    if ( *(_BYTE *)(v5 + 28) )
    {
      v4 = (_DWORD *)((char *)&stratum_thr_info + 48 * i);
      *v4 = i + 4;
      v4[11] = tq_new();
      if ( !v4[11] )
        return -1;
      tq_push(v4[11], v5);
      if ( sub_413C0((int)v4, (void *(*)(void *))stratum_thread) )
      {
        V_LOCK();
        logfmt_raw(v2, 0x1000u, 0, "stratum thread create failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "create_pool_stratum_threads",
          27,
          703,
          100,
          v2);
        return -1;
      }
    }
  }
  return 0;
}
