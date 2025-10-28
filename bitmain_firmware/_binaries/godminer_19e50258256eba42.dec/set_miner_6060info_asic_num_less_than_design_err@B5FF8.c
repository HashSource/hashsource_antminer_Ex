int __fastcall set_miner_6060info_asic_num_less_than_design_err(int a1, char a2)
{
  int v4; // [sp+14h] [bp-1090h]
  char v5[12]; // [sp+18h] [bp-108Ch] BYREF
  _BYTE v6[12]; // [sp+98h] [bp-100Ch] BYREF
  struct timeval tv; // [sp+1098h] [bp-Ch] BYREF

  v4 = a1;
  if ( a1 > 15 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "check_chain_index_valid failed, chain_index >= PLATFORM_MAX_CHAIN_NUM");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "set_miner_6060info_asic_num_less_than_design_err",
      48,
      122,
      40,
      v6);
    v4 = 0;
  }
  pthread_mutex_lock(&miner_6060info_lock);
  byte_5AD6D8[8 * v4 + 344] = a2;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( byte_5AD6D8[8 * v4 + 344] )
  {
    gettimeofday(&tv, 0);
    *(_DWORD *)&byte_5AD6D8[8 * v4 + 348] = tv.tv_sec;
  }
  if ( byte_5AD8C8[8 * v4 + 344] != 1 && byte_5AD6D8[8 * v4 + 344] )
  {
    snprintf(v5, 0x80u, "J%d:2", v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Sweep error string = %s", v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "set_miner_6060info_asic_num_less_than_design_err",
      48,
      125,
      100,
      v6);
  }
  byte_5AD8C8[8 * v4 + 344] = byte_5AD6D8[8 * v4 + 344];
  return pthread_mutex_unlock(&miner_6060info_lock);
}
