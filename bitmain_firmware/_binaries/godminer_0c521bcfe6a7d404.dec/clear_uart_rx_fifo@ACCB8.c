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
  int v13; // r0
  int v14; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v16[4100]; // [sp+810h] [bp-1004h] BYREF

  v2 = (pthread_mutex_t *)((char *)&unk_18D6C0 + 24 * a1);
  pthread_mutex_lock(v2);
  v3 = sub_ABEF0((unsigned __int8)a1);
  v4 = v3;
  if ( !v3 )
    return pthread_mutex_unlock(v2);
  v5 = malloc(v3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_AC278(a1, (int)v5, v4);
    if ( v7 != v4 )
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
      v9 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
        175,
        "clear_uart_rx_fifo",
        18,
        671,
        100,
        v16);
    }
    free(v6);
    usleep(0x2710u);
    return pthread_mutex_unlock(v2);
  }
  v11 = snprintf(s, 0x800u, "%s: uart%d malloc buffer error", "clear_uart_rx_fifo", a1);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v12);
  v13 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
          175,
          "clear_uart_rx_fifo",
          18,
          661,
          100,
          v16);
  V_LOCK(v13);
  v14 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
    175,
    "clear_uart_rx_fifo",
    18,
    662,
    100,
    v16);
  usleep(0x7A120u);
  return pthread_mutex_unlock(v2);
}
