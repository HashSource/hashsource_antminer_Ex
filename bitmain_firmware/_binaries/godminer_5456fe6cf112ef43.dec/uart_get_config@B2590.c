int __fastcall uart_get_config(int a1, int a2, _DWORD *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r5
  pthread_mutex_t *v8; // r7
  int v9; // r0
  int v10; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _DWORD v13[1025]; // [sp+810h] [bp-1004h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = 1;
  if ( v5 )
    return -3;
  v8 = (pthread_mutex_t *)((char *)&unk_16C228 + 24 * a1);
  pthread_mutex_lock(v8);
  if ( !a2 )
  {
    v13[0] = 0;
    fpga_read(60, v13);
    *a3 = v13[0];
    MEMORY[0] = 0;
    __und(0);
  }
  v9 = snprintf(s, 0x800u, "unknown set config type = %d", a2);
  V_LOCK(v9);
  v10 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
    169,
    "uart_get_config",
    15,
    543,
    80,
    v13);
  pthread_mutex_unlock(v8);
  return -5;
}
