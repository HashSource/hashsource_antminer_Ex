int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v7[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !a3 )
    return -3;
  pthread_mutex_lock(stru_1B32E8);
  if ( a2 )
  {
    snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      175,
      "high_speed_uart_set_config",
      26,
      576,
      80,
      v7);
  }
  else
  {
    fpga_read(60, v7);
    fpga_write(60, v7[0] & 0xF | (*a3 << 8));
  }
  pthread_mutex_unlock(stru_1B32E8);
  return -5;
}
