unsigned int power_off()
{
  bitmain_power_off();
  byte_174360 = 0;
  return sleep(1u);
}
