int __fastcall uart_set_config(int a1, int a2, _DWORD *a3)
{
  int v4; // r7
  int v6; // r0
  int v7; // r0
  pthread_mutex_t *v8; // r4
  int v9; // r0
  int v10; // r0
  char s[2048]; // [sp+10h] [bp-1820h] BYREF
  _BYTE v13[4128]; // [sp+810h] [bp-1020h] BYREF

  if ( !a3 )
    return -3;
  v4 = *a3 | 0x500;
  v6 = snprintf(s, 0x800u, "uart_get_config return 0x%08x", v4);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
    169,
    "uart_set_config",
    15,
    512,
    20,
    v13);
  v8 = (pthread_mutex_t *)((char *)&unk_16C228 + 24 * a1);
  pthread_mutex_lock(v8);
  if ( a2 )
  {
    v9 = snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK(v9);
    v10 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
      169,
      "uart_set_config",
      15,
      519,
      80,
      v13);
  }
  else
  {
    fpga_write(60, v4);
  }
  pthread_mutex_unlock(v8);
  return -5;
}
