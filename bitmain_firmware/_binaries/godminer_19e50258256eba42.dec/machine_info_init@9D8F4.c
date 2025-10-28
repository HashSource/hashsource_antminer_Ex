int machine_info_init()
{
  _BYTE v2[8]; // [sp+14h] [bp-1008h] BYREF
  int status; // [sp+1014h] [bp-8h]

  status = 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "platform_topol_init");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "machine_info_init",
    17,
    1031,
    60,
    v2);
  status = platform_topol_init();
  if ( status )
    exit(status);
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "check_machine_info");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "machine_info_init",
    17,
    1035,
    60,
    v2);
  status = sub_9D8A0();
  if ( status )
    return status;
  else
    return 0;
}
