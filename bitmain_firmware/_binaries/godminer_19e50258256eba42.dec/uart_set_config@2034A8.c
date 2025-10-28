int __fastcall uart_set_config(int a1, int a2, _DWORD *a3)
{
  char v8[12]; // [sp+20h] [bp-180Ch] BYREF
  _BYTE v9[12]; // [sp+820h] [bp-100Ch] BYREF
  int v10; // [sp+1820h] [bp-Ch] BYREF
  int v11; // [sp+1824h] [bp-8h]

  v11 = -5;
  if ( !a3 )
    return -3;
  pthread_mutex_lock(&stru_C25B9C[a1]);
  if ( a2 )
  {
    snprintf(v8, 0x800u, "unknown set config type = %d", a2);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "uart_set_config",
      15,
      717,
      80,
      v9);
  }
  else
  {
    v10 = 0;
    fpga_read(60, &v10);
    v10 &= 0xFF00u;
    fpga_write(60, *a3 | v10);
  }
  pthread_mutex_unlock(&stru_C25B9C[a1]);
  return v11;
}
