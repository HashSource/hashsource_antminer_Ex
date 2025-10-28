int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  pthread_mutex_t *v5; // r6
  int v7; // r0
  int v8; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _DWORD v10[1024]; // [sp+810h] [bp-1000h] BYREF

  if ( !a3 )
    return -3;
  v5 = (pthread_mutex_t *)((char *)&unk_16C228 + 24 * a1);
  pthread_mutex_lock(v5);
  if ( a2 )
  {
    v7 = snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
      169,
      "high_speed_uart_set_config",
      26,
      570,
      80,
      v10);
  }
  else
  {
    fpga_read(60, v10);
    fpga_write(60, v10[0] & 0xF | (*a3 << 8));
  }
  pthread_mutex_unlock(v5);
  return -5;
}
