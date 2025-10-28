int __fastcall uart_flush(int a1)
{
  int v2; // r0
  int v3; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v6[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = snprintf(s, 0x800u, "flush uart %d", a1);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
    169,
    "uart_flush",
    10,
    685,
    20,
    v6);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_B1C70(a1);
  return 0;
}
