time_t sub_25FC4()
{
  int v0; // r0
  time_t result; // r0
  int v2; // r5
  int v3; // r0
  struct sysinfo info; // [sp+10h] [bp-1044h] BYREF
  _BYTE v5[4100]; // [sp+50h] [bp-1004h] BYREF

  v0 = sysinfo(&info);
  if ( v0 )
  {
    V_LOCK(v0);
    v2 = *_errno_location();
    strerror(v2);
    v3 = logfmt_raw((int)v5, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_miner_elapsed_time",
      22,
      301,
      40,
      v5);
    result = time(0);
    dword_165FF0 = result;
  }
  else
  {
    result = info.uptime;
    dword_165FF0 = info.uptime;
  }
  return result;
}
