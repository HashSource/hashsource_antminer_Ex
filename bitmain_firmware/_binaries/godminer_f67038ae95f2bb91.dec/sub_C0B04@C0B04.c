int __fastcall sub_C0B04(int a1)
{
  int v2; // r4
  unsigned int v3; // r3
  int v5; // r2
  int v6; // [sp+14h] [bp-1818h] BYREF
  int v7; // [sp+18h] [bp-1814h] BYREF
  int v8; // [sp+1Ch] [bp-1810h] BYREF
  unsigned int v9; // [sp+20h] [bp-180Ch] BYREF
  int v10; // [sp+24h] [bp-1808h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  char v12[4100]; // [sp+828h] [bp-1004h] BYREF

  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  pthread_mutex_lock(stru_1B32E8);
  if ( sub_C0750(a1, &v10, &v6, &v7, &v8) )
  {
    snprintf(s, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, s);
    V_UNLOCK();
    v5 = 615;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      175,
      "clear_uart_tx_fifo",
      18,
      v5,
      100,
      v12);
  }
  else
  {
    v2 = 21;
    while ( 1 )
    {
      fpga_read(v6, &v9);
      v3 = (unsigned __int8)(v9 >> v10);
      v9 = v3;
      if ( v3 == 255 )
        break;
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      fpga_write(v7, v9 | 0x80000000);
      usleep(0xBB8u);
      if ( !--v2 )
      {
        snprintf(s, 0x800u, "%s: uart%d always dose not has enough send fifo space, break", "clear_uart_tx_fifo", a1);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, s);
        V_UNLOCK();
        v5 = 636;
        goto LABEL_7;
      }
    }
  }
  return pthread_mutex_unlock(stru_1B32E8);
}
