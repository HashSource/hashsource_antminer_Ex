int __fastcall uart_flush(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  int v4; // [sp+818h] [bp-1004h] BYREF

  snprintf(v3, 0x800u, "flush uart %d", a1);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
    178,
    "uart_flush",
    10,
    885,
    20,
    &v4);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_203D7C(a1);
  return 0;
}
