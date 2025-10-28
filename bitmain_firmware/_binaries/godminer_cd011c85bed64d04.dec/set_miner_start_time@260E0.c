time_t set_miner_start_time()
{
  int v0; // r0
  int v1; // r0
  time_t result; // r0
  int v3; // r5
  char *v4; // r0
  struct sysinfo info; // [sp+10h] [bp-1144h] BYREF
  char s[256]; // [sp+50h] [bp-1104h] BYREF
  _BYTE v7[4100]; // [sp+150h] [bp-1004h] BYREF

  if ( sysinfo(&info) )
  {
    v3 = *_errno_location();
    v4 = strerror(v3);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s", v3, v4);
    result = time(0);
    LODWORD(flt_165FF4) = result;
    dword_165FF0 = result + 1;
  }
  else
  {
    dword_165FF0 = info.uptime + 1;
    flt_165FF4 = *(float *)&info.uptime;
    v0 = sprintf(
           s,
           "%s total_tv_start_sys=%ld total_tv_end_sys=%ld",
           "set_miner_start_time",
           info.uptime,
           info.uptime + 1);
    V_LOCK(v0);
    v1 = logfmt_raw((int)v7, 0x1000u);
    V_UNLOCK(v1);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/api_new.c",
               130,
               "set_miner_start_time",
               20,
               324,
               60,
               v7);
  }
  byte_165FF8 = 1;
  return result;
}
