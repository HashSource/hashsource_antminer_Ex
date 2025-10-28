int __fastcall uart_set_config(int a1, int a2, _DWORD *a3)
{
  int v4; // r5
  char s[2048]; // [sp+10h] [bp-1818h] BYREF
  char v7[4120]; // [sp+810h] [bp-1018h] BYREF

  if ( !a3 )
    return -3;
  v4 = *a3 | 0x500;
  snprintf(s, 0x800u, "uart_get_config return 0x%08x", v4);
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
    175,
    "uart_set_config",
    15,
    517,
    20,
    v7);
  pthread_mutex_lock(stru_1B32E8);
  if ( a2 )
  {
    snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      175,
      "uart_set_config",
      15,
      524,
      80,
      v7);
  }
  else
  {
    fpga_write(60, v4);
  }
  pthread_mutex_unlock(stru_1B32E8);
  return -5;
}
