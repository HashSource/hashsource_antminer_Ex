int ui_init()
{
  int v0; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  _BYTE v20[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_16C55C )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    V_LOCK(*(_DWORD *)"gpio init failed");
    v19 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_ui.c",
      167,
      "ui_init",
      7,
      158,
      100,
      v20);
    return v0;
  }
  v2 = hal_led_red_addr();
  v3 = gpio_export(v2);
  v4 = hal_led_green_addr(v3);
  v5 = gpio_export(v4);
  v6 = hal_key_reset_addr(v5);
  v7 = gpio_export(v6);
  v8 = hal_key_ipreport_addr(v7);
  v9 = gpio_export(v8);
  v10 = hal_key_ps2pl_rst_addr(v9);
  v11 = gpio_export(v10);
  v12 = hal_key_ps2pl_rst_addr(v11);
  v13 = gpio_direction(v12, 1);
  v14 = hal_key_ps2pl_rst_addr(v13);
  v15 = gpio_write(v14, 1);
  v16 = hal_key_reset_addr(v15);
  v17 = gpio_reg_callback(v16, (int)sub_B2DD8);
  v18 = hal_key_ipreport_addr(v17);
  gpio_reg_callback(v18, (int)sub_B2DD8);
  pthread_mutex_init(&stru_16C52C, 0);
  off_16C548 = 0;
  dword_16C54C = 0;
  dword_16C550 = 0;
  dword_16C554 = 0;
  dword_16C558 = 0;
  dword_16C544 = new_c_map(sub_B2B44, 0, 0);
  dword_16C528 = 1;
  pthread_create((pthread_t *)&dword_16C560, 0, (void *(*)(void *))sub_B2B54, 0);
  dword_16C55C = 1;
  return 0;
}
