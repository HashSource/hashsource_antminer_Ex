int __fastcall check_pool_worker(int a1)
{
  int v1; // r4
  int v2; // r6
  int v3; // r3
  int v4; // r0
  int v6; // r0
  _BYTE v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( total_pools <= 0 )
    goto LABEL_10;
  v1 = 0;
  v2 = 0;
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(pools + 4 * v1);
      if ( **(_BYTE **)(v3 + 8) )
        break;
LABEL_3:
      if ( total_pools <= ++v1 )
        goto LABEL_8;
    }
    if ( **(_BYTE **)(v3 + 12) )
    {
      ++v2;
      goto LABEL_3;
    }
    ++v1;
    V_LOCK(a1);
    v4 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v4);
    a1 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/pool.c",
           127,
           "check_pool_worker",
           17,
           416,
           100,
           v7);
  }
  while ( total_pools > v1 );
LABEL_8:
  if ( v2 )
    return 0;
LABEL_10:
  V_LOCK(a1);
  v6 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
    127,
    "check_pool_worker",
    17,
    422,
    100,
    v7);
  return -1;
}
