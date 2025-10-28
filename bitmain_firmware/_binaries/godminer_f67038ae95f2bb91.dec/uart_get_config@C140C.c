int __fastcall uart_get_config(int a1, int a2, _DWORD *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r5
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v10[4096]; // [sp+810h] [bp-1000h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = 1;
  if ( v5 )
    return -3;
  pthread_mutex_lock(stru_1B32E8);
  if ( !a2 )
  {
    *(_DWORD *)v10 = 0;
    fpga_read(60, v10);
    *a3 = *(_DWORD *)v10;
    MEMORY[0] = 0;
    __und(0);
  }
  snprintf(s, 0x800u, "unknown set config type = %d", a2);
  V_LOCK();
  logfmt_raw(v10, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
    175,
    "uart_get_config",
    15,
    548,
    80,
    v10);
  pthread_mutex_unlock(stru_1B32E8);
  return -5;
}
