int get_miner_elapsed_time()
{
  int result; // r0
  int v1; // r4
  int *v2; // r0
  char *v3; // r0
  _BYTE v4[20]; // [sp+10h] [bp-1054h] BYREF
  struct sysinfo info; // [sp+1010h] [bp-54h] BYREF

  result = sysinfo(&info);
  if ( result )
  {
    V_LOCK();
    v1 = *_errno_location();
    v2 = _errno_location();
    v3 = strerror(*v2);
    logfmt_raw(v4, 0x1000u, 0, "Failed to get sysinfo, errno:%u, reason:%s", v1, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_miner_elapsed_time",
      22,
      566,
      40,
      v4);
    result = time(0);
    dword_5AC21C = result;
  }
  else
  {
    dword_5AC21C = info.uptime;
  }
  return result;
}
