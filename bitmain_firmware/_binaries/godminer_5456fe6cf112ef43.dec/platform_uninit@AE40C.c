void platform_uninit()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  if ( platform_inited[0] )
  {
    v0 = uart_uninit();
    v1 = fpga_uninit(v0);
    v2 = fan_uninit(v1);
    v3 = ui_uninit(v2);
    gpio_uninit(v3);
    platform_inited[0] = 0;
  }
}
