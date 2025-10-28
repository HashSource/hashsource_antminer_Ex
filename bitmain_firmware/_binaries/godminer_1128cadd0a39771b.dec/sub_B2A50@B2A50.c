int __fastcall sub_B2A50(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  unsigned int v4; // r3
  int v6; // r0
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // [sp+14h] [bp-1814h] BYREF
  int v12; // [sp+18h] [bp-1810h] BYREF
  int v13; // [sp+1Ch] [bp-180Ch] BYREF
  unsigned int v14; // [sp+20h] [bp-1808h] BYREF
  int v15; // [sp+24h] [bp-1804h] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  _BYTE v17[4096]; // [sp+828h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_16D23C + 24 * a1);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  pthread_mutex_lock(v1);
  if ( sub_B269C(a1, &v15, &v11, &v12, &v13) )
  {
    v6 = snprintf(s, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v7);
    v8 = 610;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_uart.c",
      169,
      "clear_uart_tx_fifo",
      18,
      v8,
      100,
      v17);
  }
  else
  {
    v3 = 21;
    while ( 1 )
    {
      fpga_read(v11, &v14);
      v4 = (unsigned __int8)(v14 >> v15);
      v14 = v4;
      if ( v4 == 255 )
        break;
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      fpga_write(v12, v14 | 0x80000000);
      usleep(0xBB8u);
      if ( !--v3 )
      {
        v9 = snprintf(
               s,
               0x800u,
               "%s: uart%d always dose not has enough send fifo space, break",
               "clear_uart_tx_fifo",
               a1);
        V_LOCK(v9);
        v10 = logfmt_raw((int)v17, 0x1000u);
        V_UNLOCK(v10);
        v8 = 631;
        goto LABEL_7;
      }
    }
  }
  return pthread_mutex_unlock(v1);
}
