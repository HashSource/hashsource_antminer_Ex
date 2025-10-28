int bitmain_power_off_0()
{
  if ( !is_gpio_exist(dword_5AA694) )
  {
    gpio_export(dword_5AA694);
    gpio_direction(dword_5AA694, 1);
  }
  return gpio_write(dword_5AA694, 0);
}
