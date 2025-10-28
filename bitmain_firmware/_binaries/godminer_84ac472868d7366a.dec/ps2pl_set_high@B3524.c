int __fastcall ps2pl_set_high(int a1)
{
  int v1; // r0

  v1 = hal_key_ps2pl_rst_addr(a1);
  return gpio_write(v1, 1);
}
