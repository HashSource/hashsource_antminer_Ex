void ui_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  if ( dword_1B361C )
  {
    dword_1B35E8[0] = 0;
    pthread_join(dword_1B3620, 0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B3604);
    pthread_mutex_destroy(&stru_1B35EC);
    v0 = hal_key_reset_addr();
    gpio_unreg_callback(v0, (int)sub_C1C5C);
    v1 = hal_key_ipreport_addr();
    gpio_unreg_callback(v1, (int)sub_C1C5C);
    v2 = hal_led_red_addr();
    gpio_unexport(v2);
    v3 = hal_led_green_addr();
    gpio_unexport(v3);
    v4 = hal_key_reset_addr();
    gpio_unexport(v4);
    v5 = hal_key_ipreport_addr();
    gpio_unexport(v5);
    v6 = hal_key_ps2pl_rst_addr();
    gpio_unexport(v6);
    gpio_uninit();
    dword_1B361C = 0;
  }
}
