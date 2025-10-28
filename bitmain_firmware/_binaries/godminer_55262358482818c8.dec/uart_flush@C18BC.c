int __fastcall uart_flush(int a1)
{
  const char *v1; // r2
  int v3; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v6[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v1) = 21460;
  HIWORD(v1) = (unsigned int)"nbytes = %d, len = %d" >> 16;
  snprintf(s, 0x800u, v1, a1);
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v3) = 20892;
  HIWORD(v3) = (unsigned int)" %d is not supported!!!" >> 16;
  zlog(g_zc, v3, 175, "uart_flush", 10, 691, 20, v6);
  clear_uart_rx_fifo(a1);
  usleep(0x2710u);
  sub_C0B1C(a1);
  return 0;
}
