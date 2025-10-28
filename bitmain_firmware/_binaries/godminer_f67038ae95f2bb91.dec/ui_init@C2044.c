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
  char v11[2048]; // [sp+10h] [bp-1800h] BYREF
  char v12[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B361C )
    return 0;
  if ( gpio_init() )
  {
    v0 = -1;
    strcpy(v11, "gpio init failed");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_ui.c",
      173,
      "ui_init",
      7,
      158,
      100,
      v12);
    return v0;
  }
  v2 = hal_led_red_addr();
  gpio_export(v2);
  v3 = hal_led_green_addr();
  gpio_export(v3);
  v4 = hal_key_reset_addr();
  gpio_export(v4);
  v5 = hal_key_ipreport_addr();
  gpio_export(v5);
  v6 = hal_key_ps2pl_rst_addr();
  gpio_export(v6);
  v7 = hal_key_ps2pl_rst_addr();
  gpio_direction(v7, 1);
  v8 = hal_key_ps2pl_rst_addr();
  gpio_write(v8, 1);
  v9 = hal_key_reset_addr();
  gpio_reg_callback(v9, (int)sub_C1C44);
  v10 = hal_key_ipreport_addr();
  gpio_reg_callback(v10, (int)sub_C1C44);
  pthread_mutex_init(&stru_1B35EC, 0);
  off_1B3608 = 0;
  dword_1B360C = 0;
  dword_1B3610 = 0;
  dword_1B3614 = 0;
  dword_1B3618 = 0;
  dword_1B3604 = (int)new_c_map((int)sub_C19B0, 0, 0);
  dword_1B35E8[0] = 1;
  pthread_create((pthread_t *)&dword_1B3620, 0, (void *(*)(void *))sub_C19C0, 0);
  dword_1B361C = 1;
  return 0;
}
