int ps2pl_set_high()
{
  int v0; // r0

  v0 = hal_key_ps2pl_rst_addr();
  return gpio_write(v0, 1);
}
