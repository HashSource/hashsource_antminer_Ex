int __fastcall uart_set_config(int a1, int a2, _DWORD *a3)
{
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  char s[2048]; // [sp+10h] [bp-1818h] BYREF
  _BYTE v11[4120]; // [sp+810h] [bp-1018h] BYREF

  if ( !a3 )
    return -3;
  v4 = *a3 | 0x500;
  v5 = snprintf(s, 0x800u, "uart_get_config return 0x%08x", v4);
  V_LOCK(v5);
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_uart.c",
    171,
    "uart_set_config",
    15,
    516,
    20,
    v11);
  pthread_mutex_lock(stru_177130);
  if ( a2 )
  {
    v7 = snprintf(s, 0x800u, "unknown set config type = %d", a2);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      171,
      "uart_set_config",
      15,
      523,
      80,
      v11);
  }
  else
  {
    fpga_write(60, v4);
  }
  pthread_mutex_unlock(stru_177130);
  return -5;
}
