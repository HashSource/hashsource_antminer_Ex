int LTC_test_init_evb()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 4;
  high_speed_uart_set_config(2, 0, &v1);
  usleep(0x64u);
  set_ltc_addr();
  usleep(0x64u);
  get_ltc_addr_reset_evb();
  usleep(0x64u);
  reset_ltc_package_count_evb();
  usleep(0x64u);
  return 0;
}
