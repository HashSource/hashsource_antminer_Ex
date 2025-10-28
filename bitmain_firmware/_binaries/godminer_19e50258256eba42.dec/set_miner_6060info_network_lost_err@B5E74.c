int __fastcall set_miner_6060info_network_lost_err(char a1)
{
  int v3[3]; // [sp+18h] [bp-108Ch] BYREF
  _BYTE v4[12]; // [sp+98h] [bp-100Ch] BYREF
  struct timeval tv; // [sp+1098h] [bp-Ch] BYREF

  pthread_mutex_lock(&miner_6060info_lock);
  byte_5AD8B0 = a1;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( a1 )
  {
    gettimeofday(&tv, 0);
    dword_5AD8B4 = tv.tv_sec;
  }
  if ( byte_5ADAA0 != 1 && byte_5AD8B0 )
  {
    v3[0] = 3422798;
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Sweep error string = %s", v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "set_miner_6060info_network_lost_err",
      35,
      116,
      100,
      v4);
  }
  byte_5ADAA0 = byte_5AD8B0;
  return pthread_mutex_unlock(&miner_6060info_lock);
}
