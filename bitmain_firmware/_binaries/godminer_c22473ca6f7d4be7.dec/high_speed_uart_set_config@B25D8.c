int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  pthread_mutex_t *v5; // r6
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v8[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !a3 )
    return -3;
  v5 = (pthread_mutex_t *)((char *)&unk_16C220 + 24 * a1);
  pthread_mutex_lock(v5);
  if ( a2 )
  {
    snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
      169,
      "high_speed_uart_set_config",
      26,
      570,
      80,
      v8);
  }
  else
  {
    fpga_read(60, v8);
    fpga_write(60, v8[0] & 0xF | (*a3 << 8));
  }
  pthread_mutex_unlock(v5);
  return -5;
}
