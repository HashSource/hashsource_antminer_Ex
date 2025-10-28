int __fastcall chain_reset(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = hal_chain_reset_addr(a1);
  gpio_write(v2, 1);
  usleep((__useconds_t)&stru_186A0);
  v3 = hal_chain_reset_addr(a1);
  return gpio_write(v3, 0);
}
