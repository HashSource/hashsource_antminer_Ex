int miner_6060info_errorcode_init()
{
  _BYTE v2[64]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v3[252]; // [sp+1014h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_5AD6BC);
  if ( byte_5AD6D4 || access(off_59B3E8[0], 0) )
  {
    pthread_mutex_unlock(&stru_5AD6BC);
    return 0;
  }
  else
  {
    dword_5AD6B8 = (int)json_load_file(off_59B3E8[0], 0, (json_error_t *)v3);
    if ( dword_5AD6B8 && !*(_DWORD *)dword_5AD6B8 )
    {
      byte_5AD6D4 = 1;
      pthread_mutex_unlock(&stru_5AD6BC);
      return 1;
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v2,
        0x1000u,
        0,
        "%s, %d bad json format",
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        173);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/miner_6060info.c",
        169,
        "miner_6060info_errorcode_init",
        29,
        173,
        100,
        v2);
      pthread_mutex_unlock(&stru_5AD6BC);
      return 0;
    }
  }
}
