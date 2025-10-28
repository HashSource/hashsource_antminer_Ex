int __fastcall high_speed_uart_get_config(int a1, int a2, int *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r5
  int v8; // r0
  int v9; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _DWORD v12[1024]; // [sp+810h] [bp-1000h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = 1;
  if ( v5 )
    return -3;
  pthread_mutex_lock(stru_18D540);
  if ( !a2 )
  {
    v12[0] = 0;
    fpga_read(60, v12);
    *a3 = (v12[0] >> 8) & 0x3F;
    MEMORY[0] = 0;
    __und(0);
  }
  v8 = snprintf(s, 0x800u, "unknown set config type = %d", a2);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v12, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/platform/7020/7020_uart.c",
    175,
    "high_speed_uart_get_config",
    26,
    599,
    80,
    v12);
  pthread_mutex_unlock(stru_18D540);
  return -5;
}
