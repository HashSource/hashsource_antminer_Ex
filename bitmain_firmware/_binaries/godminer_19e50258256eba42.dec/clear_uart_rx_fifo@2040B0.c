int __fastcall clear_uart_rx_fifo(int a1)
{
  char v3[16]; // [sp+1Ch] [bp-1810h] BYREF
  _BYTE v4[16]; // [sp+81Ch] [bp-1010h] BYREF
  size_t size; // [sp+181Ch] [bp-10h]
  int v6; // [sp+1820h] [bp-Ch]
  void *ptr; // [sp+1824h] [bp-8h]

  v6 = 0;
  ptr = 0;
  pthread_mutex_lock(&stru_C25D1C[a1]);
  size = sub_2024B0(a1);
  if ( !size )
    return pthread_mutex_unlock(&stru_C25D1C[a1]);
  ptr = malloc(size);
  if ( ptr )
  {
    v6 = sub_202788(a1, (int)ptr, size);
    if ( v6 == size )
    {
      free(ptr);
      usleep(0x2710u);
      return pthread_mutex_unlock(&stru_C25D1C[a1]);
    }
    else
    {
      snprintf(v3, 0x800u, "%s: uart%d clear rx fifo error. nbytes = %d, len = %d", "clear_uart_rx_fifo", a1, size, v6);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, v3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
        178,
        "clear_uart_rx_fifo",
        18,
        866,
        100,
        v4);
      free(ptr);
      ptr = 0;
      usleep(0x2710u);
      return pthread_mutex_unlock(&stru_C25D1C[a1]);
    }
  }
  else
  {
    snprintf(v3, 0x800u, "%s: uart%d malloc buffer error", "clear_uart_rx_fifo", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "clear_uart_rx_fifo",
      18,
      856,
      100,
      v4);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Sweep error string = %s.", "M:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "clear_uart_rx_fifo",
      18,
      857,
      100,
      v4);
    ptr = 0;
    usleep(0x7A120u);
    return pthread_mutex_unlock(&stru_C25D1C[a1]);
  }
}
