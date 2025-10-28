time_t get_miner_elapsed_time()
{
  time_t result; // r0
  int v1; // r5
  char *v2; // r0
  int v3; // r3
  int v4; // r1
  struct sysinfo info; // [sp+10h] [bp-1044h] BYREF
  char v6[4100]; // [sp+50h] [bp-1004h] BYREF

  if ( sysinfo(&info) )
  {
    V_LOCK();
    v1 = *_errno_location();
    v2 = strerror(v1);
    LOWORD(v3) = 22964;
    HIWORD(v3) = (unsigned int)"send (%d:%d) failed %s" >> 16;
    logfmt_raw(v6, 0x1000u, 0, v3, v1, v2);
    V_UNLOCK();
    LOWORD(v4) = 21232;
    HIWORD(v4) = (unsigned int)"%s: input bad api param" >> 16;
    zlog(g_zc, v4, 140, "get_miner_elapsed_time", 22, 320, 40, v6);
    result = time(0);
    dword_194988 = result;
  }
  else
  {
    dword_194988 = info.uptime;
    return info.uptime;
  }
  return result;
}
