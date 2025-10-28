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
  _DWORD *v12; // r0
  void *(*v13)(void *); // r2
  int *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r12
  int v20; // r1
  _DWORD v21[4]; // [sp+10h] [bp-1800h] BYREF
  char v22; // [sp+20h] [bp-17F0h]
  char v23[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B361C )
    return 0;
  if ( gpio_init() )
  {
    LOWORD(v14) = 17668;
    HIWORD(v14) = (unsigned int)"iled" >> 16;
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v0 = -1;
    v19 = v14[4];
    v21[0] = v15;
    v21[1] = v16;
    v21[2] = v17;
    v21[3] = v18;
    v22 = v19;
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, v21);
    V_UNLOCK();
    LOWORD(v20) = 21676;
    HIWORD(v20) = (unsigned int)"ve %d from flicker list" >> 16;
    zlog(g_zc, v20, 173, "ui_init", 7, 158, 100, v23);
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
  gpio_reg_callback(v9, (int)sub_C1C5C);
  v10 = hal_key_ipreport_addr();
  gpio_reg_callback(v10, (int)sub_C1C5C);
  pthread_mutex_init(&stru_1B35EC, 0);
  LOWORD(v11) = 6600;
  HIWORD(v11) = (unsigned int)&loc_C19B0 >> 16;
  off_1B3608 = 0;
  dword_1B360C = 0;
  dword_1B3610 = 0;
  dword_1B3614 = 0;
  dword_1B3618 = 0;
  v12 = new_c_map(v11, 0, 0);
  LOWORD(v13) = 6616;
  dword_1B3604 = (int)v12;
  HIWORD(v13) = (unsigned int)&locret_C19C0 >> 16;
  dword_1B35E8[0] = 1;
  pthread_create((pthread_t *)&dword_1B3620, 0, v13, 0);
  dword_1B361C = 1;
  return 0;
}
