int __fastcall pool_died(int *a1)
{
  int result; // r0
  _BYTE v3[12]; // [sp+30h] [bp-104Ch] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-4Ch] BYREF
  int v5; // [sp+104Ch] [bp-30h]
  _DWORD v6[7]; // [sp+1050h] [bp-2Ch] BYREF
  int v7; // [sp+106Ch] [bp-10h]

  result = pool_tset((int)a1, (unsigned __int8 *)a1 + 1904, 0);
  if ( (unsigned __int8)result != 1 )
  {
    cgtime((struct timeval *)(a1 + 477));
    sub_42C38(a1, 1);
    if ( a1 == (int *)get_current_pool() )
    {
      V_LOCK();
      sub_4138C((int)v4, *a1);
      logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "not responding!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_died",
        9,
        405,
        80,
        v3);
      return switch_pools();
    }
    else
    {
      V_LOCK();
      sub_4138C((int)v6, *a1);
      logfmt_raw(v3, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "failed to return work");
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/pool.c",
               134,
               "pool_died",
               9,
               408,
               20,
               v3);
    }
  }
  return result;
}
