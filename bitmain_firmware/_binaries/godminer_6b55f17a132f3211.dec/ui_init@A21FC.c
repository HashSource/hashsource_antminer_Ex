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

  if ( dword_177464 )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    V_LOCK(*(_DWORD *)"gpio init failed");
    v19 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_ui.c",
      169,
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
  v17 = gpio_reg_callback(v16, (int)sub_A1DFC);
  v18 = hal_key_ipreport_addr(v17);
  gpio_reg_callback(v18, (int)sub_A1DFC);
  pthread_mutex_init(&stru_177434, 0);
  off_177450 = 0;
  dword_177454 = 0;
  dword_177458 = 0;
  dword_17745C = 0;
  dword_177460 = 0;
  dword_17744C = new_c_map(sub_A1B68, 0, 0);
  dword_177430 = 1;
  pthread_create((pthread_t *)&dword_177468, 0, (void *(*)(void *))sub_A1B78, 0);
  dword_177464 = 1;
  return 0;
}
