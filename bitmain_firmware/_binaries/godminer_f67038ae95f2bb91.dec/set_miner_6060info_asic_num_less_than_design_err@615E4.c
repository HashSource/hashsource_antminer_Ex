int __fastcall set_miner_6060info_asic_num_less_than_design_err(int a1, int a2)
{
  int v3; // r6
  char *v4; // r8
  int v6; // r10
  char s[128]; // [sp+10h] [bp-1080h] BYREF
  struct timeval v8[512]; // [sp+90h] [bp-1000h] BYREF

  if ( a1 > 15 )
  {
    V_LOCK();
    logfmt_raw((char *)v8, 0x1000u, 0, "check_chain_index_valid failed, chain_index >= PLATFORM_MAX_CHAIN_NUM");
    V_UNLOCK();
    v3 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      172,
      "set_miner_6060info_asic_num_less_than_design_err",
      48,
      122,
      40,
      v8);
  }
  else
  {
    v3 = a1;
  }
  v4 = (char *)&stru_195CC8 + 8 * v3 + 344;
  pthread_mutex_lock(&miner_6060info_lock);
  v4[24] = a2;
  v8[0].tv_sec = 0;
  v8[0].tv_usec = 0;
  if ( a2 )
  {
    gettimeofday(v8, 0);
    v6 = (unsigned __int8)v4[544];
    a2 = (unsigned __int8)v4[24];
    *((_DWORD *)v4 + 7) = v8[0].tv_sec;
    if ( !v6 )
    {
      if ( a2 )
      {
        snprintf(s, 0x80u, "J%d:2", v3);
        V_LOCK();
        logfmt_raw((char *)v8, 0x1000u, 0, "Sweep error string = %s", s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/miner_6060info.c",
          172,
          "set_miner_6060info_asic_num_less_than_design_err",
          48,
          125,
          100,
          v8);
        LOBYTE(a2) = v4[24];
      }
    }
  }
  *((_BYTE *)&stru_195CC8 + 8 * v3 + 888) = a2;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
