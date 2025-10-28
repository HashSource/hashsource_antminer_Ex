int __fastcall sub_203D7C(int a1)
{
  char v3[28]; // [sp+18h] [bp-181Ch] BYREF
  _BYTE v4[28]; // [sp+818h] [bp-101Ch] BYREF
  int v5; // [sp+1818h] [bp-1Ch] BYREF
  unsigned int v6; // [sp+181Ch] [bp-18h] BYREF
  int v7; // [sp+1820h] [bp-14h] BYREF
  int v8; // [sp+1824h] [bp-10h] BYREF
  int v9; // [sp+1828h] [bp-Ch] BYREF
  unsigned int i; // [sp+182Ch] [bp-8h]

  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  v5 = 0;
  i = 0;
  pthread_mutex_lock(&stru_C25B9C[a1]);
  if ( sub_20157C(a1, &v5, &v9, &v8, &v7) )
  {
    snprintf(v3, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "clear_uart_tx_fifo",
      18,
      807,
      100,
      v4);
    return pthread_mutex_unlock(&stru_C25B9C[a1]);
  }
  else
  {
    for ( i = 0; i <= 0x14; ++i )
    {
      fpga_read(v9, &v6);
      v6 = (unsigned __int8)(v6 >> v5);
      if ( v6 == 255 )
        return pthread_mutex_unlock(&stru_C25B9C[a1]);
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      fpga_write(v8, v6 | 0x80000000);
      usleep(0xBB8u);
    }
    snprintf(v3, 0x800u, "%s: uart%d always dose not has enough send fifo space, break", "clear_uart_tx_fifo", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, v3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "clear_uart_tx_fifo",
      18,
      828,
      100,
      v4);
    return pthread_mutex_unlock(&stru_C25B9C[a1]);
  }
}
