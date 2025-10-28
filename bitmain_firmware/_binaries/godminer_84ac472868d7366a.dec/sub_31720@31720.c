int __fastcall sub_31720(int a1)
{
  int v1; // r0
  _BYTE v3[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v3, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.h",
    127,
    "get_value_from_lower_hex",
    24,
    42,
    100,
    v3);
  return -1;
}
