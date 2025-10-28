int __fastcall clear_uart_rx_fifo(int a1)
{
  pthread_mutex_t *v2; // r4
  size_t v3; // r0
  unsigned int v4; // r6
  void *v5; // r0
  void *v6; // r7
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r0
  int v11; // r0
  int v12; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v14[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (pthread_mutex_t *)((char *)&unk_16C3A8 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_B1AA0((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_B1E30(a1, (int)v5, v4);
    if ( v4 != v7 )
    {
      v8 = snprintf(
             s,
             0x800u,
             "%s: uart%d clear rx fifo error. nbytes = %d, len = %d",
             "clear_uart_rx_fifo",
             a1,
             v4,
             v7);
      V_LOCK(v8);
      v9 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
        169,
        "clear_uart_rx_fifo",
        18,
        666,
        100,
        v14);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  v11 = snprintf(s, 0x800u, "%s: uart%d malloc buffer error", "clear_uart_rx_fifo", a1);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v14, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
    169,
    "clear_uart_rx_fifo",
    18,
    657,
    100,
    v14);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v2);
}
