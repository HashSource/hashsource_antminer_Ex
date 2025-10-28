int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[4112]; // [sp+10h] [bp-1010h] BYREF

  if ( !a2 )
    return -1;
  V_LOCK(a1);
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/power_api.c",
    143,
    "set_voltage",
    11,
    283,
    60,
    v5);
  return sub_4AE38(a1);
}
