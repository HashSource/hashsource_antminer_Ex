int frontend_runtime_instance()
{
  int v2; // [sp+10h] [bp-1004h] BYREF

  if ( dword_5AD174 )
    return dword_5AD174;
  V_LOCK();
  logfmt_raw(&v2, 0x1000u, 0, "frontend runtime type not set");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_interface.c",
    157,
    "frontend_runtime_instance",
    25,
    79,
    100,
    &v2);
  return 0;
}
