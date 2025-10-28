int __fastcall uart_set_config(int a1, int a2, _DWORD *a3)
{
  int v4; // r7
  pthread_mutex_t *v6; // r4
  char s[2048]; // [sp+10h] [bp-1820h] BYREF
  char v9[4128]; // [sp+810h] [bp-1020h] BYREF

  if ( !a3 )
    return -3;
  v4 = *a3 | 0x500;
  snprintf(s, 0x800u, "uart_get_config return 0x%08x", v4);
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
    169,
    "uart_set_config",
    15,
    512,
    20,
    v9);
  v6 = (pthread_mutex_t *)((char *)&unk_16C220 + 24 * a1);
  pthread_mutex_lock(v6);
  if ( a2 )
  {
    snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
      169,
      "uart_set_config",
      15,
      519,
      80,
      v9);
  }
  else
  {
    fpga_write(60, v4);
  }
  pthread_mutex_unlock(v6);
  return -5;
}
