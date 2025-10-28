int sub_2BE94()
{
  int result; // r0
  int v1; // r0
  _BYTE v2[4100]; // [sp+10h] [bp-1004h] BYREF

  result = remove("/nvdata/droaswitch");
  if ( result )
  {
    V_LOCK(result);
    v1 = logfmt_raw((int)v2, 0x1000u);
    V_UNLOCK(v1);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/god-miner.c",
             138,
             "droa_macro_check",
             16,
             1538,
             60,
             v2);
  }
  return result;
}
