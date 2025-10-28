int __fastcall uart_set_config(int a1, int a2, int *a3)
{
  int v3; // r5
  const char *v4; // r2
  int v6; // r5
  int v7; // r1
  const char *v8; // r2
  int v9; // r1
  char s[2048]; // [sp+10h] [bp-1818h] BYREF
  char v12[4120]; // [sp+810h] [bp-1018h] BYREF

  if ( !a3 )
    return -3;
  v3 = *a3;
  LOWORD(v4) = 21308;
  HIWORD(v4) = (unsigned int)"o error, chain_id = %d" >> 16;
  v6 = v3 | 0x500;
  snprintf(s, 0x800u, v4, v6);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v7) = 20892;
  HIWORD(v7) = (unsigned int)" %d is not supported!!!" >> 16;
  zlog(g_zc, v7, 175, "uart_set_config", 15, 517, 20, v12);
  pthread_mutex_lock(stru_1B32E8);
  if ( a2 )
  {
    LOWORD(v8) = 21340;
    HIWORD(v8) = (unsigned int)"_config return 0x%08x" >> 16;
    snprintf(s, 0x800u, v8, a2);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v9) = 20892;
    HIWORD(v9) = (unsigned int)" %d is not supported!!!" >> 16;
    zlog(g_zc, v9, 175, "uart_set_config", 15, 524, 80, v12);
  }
  else
  {
    fpga_write(60, v6);
  }
  pthread_mutex_unlock(stru_1B32E8);
  return -5;
}
