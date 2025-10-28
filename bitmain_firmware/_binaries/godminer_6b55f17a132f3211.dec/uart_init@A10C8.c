int uart_init()
{
  int v1; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( platform_inited[0] )
    return 0;
  V_LOCK(*(_DWORD *)"form first!!");
  v1 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_uart.c",
    171,
    "uart_init",
    9,
    282,
    100,
    v2);
  return -1;
}
