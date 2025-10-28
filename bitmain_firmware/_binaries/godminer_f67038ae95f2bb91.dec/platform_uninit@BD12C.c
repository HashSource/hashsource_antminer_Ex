void platform_uninit()
{
  int v0; // r0

  if ( platform_inited[0] )
  {
    uart_uninit();
    v0 = fpga_uninit();
    fan_uninit(v0);
    ui_uninit();
    gpio_uninit();
    platform_inited[0] = 0;
  }
}
