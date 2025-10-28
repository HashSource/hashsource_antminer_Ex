int __fastcall sub_AC0C0(int a1)
{
  int v2; // r4
  unsigned int v3; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // [sp+14h] [bp-1818h] BYREF
  int v11; // [sp+18h] [bp-1814h] BYREF
  int v12; // [sp+1Ch] [bp-1810h] BYREF
  unsigned int v13; // [sp+20h] [bp-180Ch] BYREF
  int v14; // [sp+24h] [bp-1808h] BYREF
  char s[2040]; // [sp+28h] [bp-1804h] BYREF
  _BYTE v16[4100]; // [sp+828h] [bp-1004h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  pthread_mutex_lock(stru_18D540);
  if ( sub_ABD0C(a1, &v14, &v10, &v11, &v12) )
  {
    v5 = snprintf(s, 0x800u, "get_send_address_info error, chain_id = %d", a1);
    V_LOCK(v5);
    v6 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v6);
    v7 = 614;
LABEL_7:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
      175,
      "clear_uart_tx_fifo",
      18,
      v7,
      100,
      v16);
  }
  else
  {
    v2 = 21;
    while ( 1 )
    {
      fpga_read(v10, &v13);
      v3 = (unsigned __int8)(v13 >> v14);
      v13 = v3;
      if ( v3 == 255 )
        break;
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      fpga_write(v11, v13 | 0x80000000);
      usleep(0xBB8u);
      if ( !--v2 )
      {
        v8 = snprintf(
               s,
               0x800u,
               "%s: uart%d always dose not has enough send fifo space, break",
               "clear_uart_tx_fifo",
               a1);
        V_LOCK(v8);
        v9 = logfmt_raw((int)v16, 0x1000u);
        V_UNLOCK(v9);
        v7 = 635;
        goto LABEL_7;
      }
    }
  }
  return pthread_mutex_unlock(stru_18D540);
}
