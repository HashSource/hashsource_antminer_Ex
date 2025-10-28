int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _DWORD v9[1025]; // [sp+810h] [bp-1004h] BYREF

  if ( !a3 )
    return -3;
  pthread_mutex_lock(stru_177130);
  if ( a2 )
  {
    v6 = snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      171,
      "high_speed_uart_set_config",
      26,
      575,
      80,
      v9);
  }
  else
  {
    fpga_read(60, v9);
    fpga_write(60, v9[0] & 0xF | (*a3 << 8));
  }
  pthread_mutex_unlock(stru_177130);
  return -5;
}
