int __fastcall sub_425B0(int a1)
{
  _BYTE v4[16]; // [sp+1Ch] [bp-1010h] BYREF
  int v5; // [sp+101Ch] [bp-10h]
  int i; // [sp+1020h] [bp-Ch]
  int v7; // [sp+1024h] [bp-8h]

  v7 = 0;
  for ( i = 0; i < total_pools; ++i )
  {
    v5 = *(_DWORD *)(pools + 4 * i);
    if ( a1 == *(_DWORD *)(v5 + 4) )
    {
      v7 = v5;
      break;
    }
  }
  if ( v7 )
    return v7;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "WTF No pool %d found!", a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "priority_pool",
    13,
    255,
    100,
    v4);
  return *(_DWORD *)(pools + 4 * a1);
}
