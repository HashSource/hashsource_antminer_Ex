time_t set_miner_start_time()
{
  int v0; // r0
  int v1; // r0
  time_t result; // r0
  int v3; // r4
  char *v4; // r0
  struct sysinfo info; // [sp+10h] [bp-1140h] BYREF
  char s[256]; // [sp+50h] [bp-1100h] BYREF
  _BYTE v7[4096]; // [sp+150h] [bp-1000h] BYREF

  if ( sysinfo(&info) )
  {
    v3 = *_errno_location();
    v4 = strerror(v3);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s", v3, v4);
    result = time(0);
    dword_164EE8 = result + 1;
    dword_164EEC = result;
  }
  else
  {
    dword_164EEC = info.uptime;
    dword_164EE8 = info.uptime + 1;
    v0 = sprintf(
           s,
           "%s total_tv_start_sys=%ld total_tv_end_sys=%ld",
           "set_miner_start_time",
           info.uptime,
           info.uptime + 1);
    V_LOCK(v0);
    v1 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v1);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/api_new.c",
             136,
             "set_miner_start_time",
             20,
             352,
             60,
             v7);
  }
  return result;
}
