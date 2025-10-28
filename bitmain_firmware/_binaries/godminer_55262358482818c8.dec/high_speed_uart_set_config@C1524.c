int __fastcall high_speed_uart_set_config(int a1, int a2, _DWORD *a3)
{
  const char *v6; // r2
  int v7; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v9[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !a3 )
    return -3;
  pthread_mutex_lock(stru_1B32E8);
  if ( a2 )
  {
    LOWORD(v6) = 21340;
    HIWORD(v6) = (unsigned int)"_config return 0x%08x" >> 16;
    snprintf(s, 0x800u, v6, a2);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v7) = 20892;
    HIWORD(v7) = (unsigned int)" %d is not supported!!!" >> 16;
    zlog(g_zc, v7, 175, "high_speed_uart_set_config", 26, 576, 80, v9);
  }
  else
  {
    fpga_read(60, v9);
    fpga_write(60, v9[0] & 0xF | (*a3 << 8));
  }
  pthread_mutex_unlock(stru_1B32E8);
  return -5;
}
