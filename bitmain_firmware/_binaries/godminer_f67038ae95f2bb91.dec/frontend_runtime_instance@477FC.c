int frontend_runtime_instance()
{
  int v0; // r4
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = dword_1957A4;
  if ( !dword_1957A4 )
  {
    V_LOCK();
    logfmt_raw(v2, 0x1000u, 0, "frontend runtime type not set");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_interface.c",
      160,
      "frontend_runtime_instance",
      25,
      79,
      100,
      v2);
  }
  return v0;
}
