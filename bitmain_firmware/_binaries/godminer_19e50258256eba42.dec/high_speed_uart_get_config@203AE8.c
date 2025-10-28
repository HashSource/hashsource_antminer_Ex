int __fastcall high_speed_uart_get_config(int a1, int a2, int *a3, int a4)
{
  char v9[12]; // [sp+20h] [bp-180Ch] BYREF
  _BYTE v10[12]; // [sp+820h] [bp-100Ch] BYREF
  int v11; // [sp+1820h] [bp-Ch] BYREF
  int v12; // [sp+1824h] [bp-8h]

  v12 = -5;
  if ( !a3 || a4 )
    return -3;
  pthread_mutex_lock(&stru_C25B9C[a1]);
  if ( a2 )
  {
    snprintf(v9, 0x800u, "unknown set config type = %d", a2);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "high_speed_uart_get_config",
      26,
      791,
      80,
      v10);
  }
  else
  {
    v11 = 0;
    v12 = fpga_read(60, &v11);
    *a3 = BYTE2(v11) & 0x3F;
    MEMORY[0] = 4;
    snprintf(v9, 0x800u, "uart_get_config return %d", *a3);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_uart.c",
      178,
      "high_speed_uart_get_config",
      26,
      787,
      40,
      v10);
  }
  pthread_mutex_unlock(&stru_C25B9C[a1]);
  return v12;
}
