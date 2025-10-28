int __fastcall LTC_test_init_hash(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-8h] BYREF

  v5 = 4;
  high_speed_uart_set_config(a1, 0, &v5);
  usleep(0x64u);
  set_ltc_addr();
  usleep(0x64u);
  get_ltc_addr_reset(a1, a2);
  usleep(0x64u);
  reset_ltc_package_count(a1, a2);
  usleep(0x64u);
  return 0;
}
