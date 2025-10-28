time_t set_miner_start_time()
{
  int v0; // r4
  int *v1; // r0
  char *v2; // r0
  time_t result; // r0
  _BYTE v4[12]; // [sp+10h] [bp-114Ch] BYREF
  struct sysinfo info; // [sp+1010h] [bp-14Ch] BYREF
  char s[260]; // [sp+1050h] [bp-10Ch] BYREF

  if ( sysinfo(&info) )
  {
    v0 = *_errno_location();
    v1 = _errno_location();
    v2 = strerror(*v1);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s", v0, v2);
    result = time(0);
    dword_5AC218 = result;
    dword_5AC21C = result + 1;
  }
  else
  {
    dword_5AC218 = info.uptime;
    dword_5AC21C = info.uptime + 1;
    sprintf(s, "%s total_tv_start_sys=%ld total_tv_end_sys=%ld", "set_miner_start_time", info.uptime, info.uptime + 1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "%s", s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/api_new.c",
             137,
             "set_miner_start_time",
             20,
             601,
             60,
             v4);
  }
  return result;
}
