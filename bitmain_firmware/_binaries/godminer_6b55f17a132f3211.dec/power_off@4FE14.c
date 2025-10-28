unsigned int power_off()
{
  bitmain_power_off();
  byte_166048 = 0;
  return sleep(1u);
}
