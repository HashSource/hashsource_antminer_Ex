unsigned int power_off()
{
  bitmain_power_off();
  byte_195C28 = 0;
  return sleep(1u);
}
