int __fastcall get_working_voltage(int a1)
{
  int v2; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( byte_166030 )
    return dword_16603C;
  V_LOCK(a1);
  v2 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/power_api.c",
    149,
    "get_working_voltage",
    19,
    471,
    100,
    v3);
  return -1;
}
