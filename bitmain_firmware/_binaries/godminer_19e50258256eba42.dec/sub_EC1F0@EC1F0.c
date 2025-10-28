int __fastcall sub_EC1F0(unsigned __int8 a1)
{
  int v4; // [sp+18h] [bp-1004h] BYREF

  if ( a1 > 0x2Fu && a1 <= 0x39u )
    return a1 - 48;
  if ( a1 > 0x60u && a1 <= 0x66u )
    return a1 - 87;
  V_LOCK();
  logfmt_raw(
    &v4,
    0x1000u,
    0,
    "The provided character %c is invalid and was not rejected in preliminary hex checks!",
    a1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/./util.h",
    136,
    "get_value_from_lower_hex",
    24,
    41,
    100,
    &v4);
  return -1;
}
