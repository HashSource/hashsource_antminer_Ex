void ui_uninit()
{
  int v0; // r0
  int v1; // r0
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

  if ( dword_18D874 )
  {
    dword_18D840 = 0;
    pthread_join(dword_18D878, 0);
    delete_c_map(dword_18D85C);
    v0 = pthread_mutex_destroy(&stru_18D844);
    v1 = hal_key_reset_addr(v0);
    v2 = gpio_unreg_callback(v1, (int)sub_AD250);
    v3 = hal_key_ipreport_addr(v2);
    v4 = gpio_unreg_callback(v3, (int)sub_AD250);
    v5 = hal_led_red_addr(v4);
    v6 = gpio_unexport(v5);
    v7 = hal_led_green_addr(v6);
    v8 = gpio_unexport(v7);
    v9 = hal_key_reset_addr(v8);
    v10 = gpio_unexport(v9);
    v11 = hal_key_ipreport_addr(v10);
    v12 = gpio_unexport(v11);
    v13 = hal_key_ps2pl_rst_addr(v12);
    gpio_unexport(v13);
    gpio_uninit();
    dword_18D874 = 0;
  }
}
