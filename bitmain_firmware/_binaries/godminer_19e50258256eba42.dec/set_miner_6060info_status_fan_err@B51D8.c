int __fastcall set_miner_6060info_status_fan_err(int a1, char a2)
{
  int v4; // [sp+14h] [bp-1090h]
  char v5[12]; // [sp+18h] [bp-108Ch] BYREF
  _BYTE v6[12]; // [sp+98h] [bp-100Ch] BYREF
  struct timeval tv; // [sp+1098h] [bp-Ch] BYREF

  v4 = a1;
  if ( a1 > 7 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "check_fan_index_valid failed, fan_index >= FAN_MAX");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "set_miner_6060info_status_fan_err",
      33,
      63,
      40,
      v6);
    v4 = 0;
  }
  pthread_mutex_lock(&miner_6060info_lock);
  byte_5AD6D8[8 * v4 + 24] = a2;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  if ( byte_5AD6D8[8 * v4 + 24] )
  {
    gettimeofday(&tv, 0);
    *(_DWORD *)&byte_5AD6D8[8 * v4 + 28] = tv.tv_sec;
  }
  if ( byte_5AD8C8[8 * v4 + 24] != 1 && byte_5AD6D8[8 * v4 + 24] )
  {
    snprintf(v5, 0x80u, "F%d:1", v4);
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "Sweep error string = %s", v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/miner_6060info.c",
      169,
      "set_miner_6060info_status_fan_err",
      33,
      66,
      100,
      v6);
  }
  byte_5AD8C8[8 * v4 + 24] = byte_5AD6D8[8 * v4 + 24];
  return pthread_mutex_unlock(&miner_6060info_lock);
}
