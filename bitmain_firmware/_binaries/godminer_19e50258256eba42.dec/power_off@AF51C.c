unsigned int power_off()
{
  bitmain_power_on();
  byte_5AD608 = 0;
  return sleep(1u);
}
