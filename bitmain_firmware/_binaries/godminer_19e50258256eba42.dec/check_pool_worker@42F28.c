int check_pool_worker()
{
  _BYTE v1[16]; // [sp+14h] [bp-1010h] BYREF
  int v2; // [sp+1014h] [bp-10h]
  int v3; // [sp+1018h] [bp-Ch]
  int i; // [sp+101Ch] [bp-8h]

  v2 = 0;
  v3 = 0;
  for ( i = 0; i < total_pools; ++i )
  {
    if ( **(_BYTE **)(*(_DWORD *)(pools + 4 * i) + 12) )
    {
      if ( **(_BYTE **)(*(_DWORD *)(pools + 4 * i) + 16) )
      {
        ++v2;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v1, 0x1000u, 0, "Blank worker exists.");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "check_pool_worker",
          17,
          422,
          100,
          v1);
      }
    }
  }
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "No valid pools, please configure them first!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "check_pool_worker",
      17,
      428,
      100,
      v1);
    return -1;
  }
  return v3;
}
