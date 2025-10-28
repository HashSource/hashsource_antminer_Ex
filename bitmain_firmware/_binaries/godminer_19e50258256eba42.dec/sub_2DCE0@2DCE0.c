int sub_2DCE0()
{
  _BYTE v2[8]; // [sp+1Ch] [bp-1008h] BYREF
  int v3; // [sp+101Ch] [bp-8h]

  v3 = 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "reload_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "reload_config",
    13,
    1448,
    20,
    v2);
  if ( strcmp(byte_5AC208, off_597380) )
    return -2147483643;
  sub_2DA38();
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "reload_config");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/api_new.c",
    137,
    "reload_config",
    13,
    1455,
    20,
    v2);
  return v3;
}
