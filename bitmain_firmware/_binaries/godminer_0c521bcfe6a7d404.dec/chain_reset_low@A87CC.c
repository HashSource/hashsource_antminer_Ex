int __fastcall chain_reset_low(int a1)
{
  int v1; // r0

  v1 = hal_chain_reset_addr(a1);
  return gpio_write(v1, 1);
}
