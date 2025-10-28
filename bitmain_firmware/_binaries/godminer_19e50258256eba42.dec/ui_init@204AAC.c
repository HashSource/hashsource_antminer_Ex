int ui_init()
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  char v8[2048]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v9[8]; // [sp+814h] [bp-1008h] BYREF
  int i; // [sp+1814h] [bp-8h]

  i = 0;
  if ( dword_C25EB8 )
    return 0;
  if ( gpio_init() )
  {
    strcpy(v8, "gpio init failed");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_ui.c",
      176,
      "ui_init",
      7,
      152,
      100,
      v9);
    return -1;
  }
  else
  {
    v1 = sub_204844(1u);
    gpio_export(v1);
    v2 = sub_204844(2u);
    gpio_export(v2);
    v3 = sub_204844(0x100u);
    gpio_export(v3);
    v4 = sub_204844(0x101u);
    gpio_export(v4);
    v5 = sub_204844(0x100u);
    gpio_reg_callback(v5, 2115900);
    v6 = sub_204844(0x101u);
    gpio_reg_callback(v6, 2115900);
    pthread_mutex_init(&stru_C25E9C, 0);
    for ( i = 0; i <= 4; ++i )
      dword_C25EC4[i] = 0;
    dword_C25EB4 = (int)new_c_map(2115596, 0, 0);
    dword_C25EBC = 1;
    pthread_create((pthread_t *)&dword_C25EC0, 0, (void *(*)(void *))sub_204644, 0);
    dword_C25EB8 = 1;
    return 0;
  }
}
