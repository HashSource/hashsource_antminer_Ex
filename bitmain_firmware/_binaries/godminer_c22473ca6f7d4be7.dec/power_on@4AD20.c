unsigned int power_on()
{
  bitmain_power_on();
  byte_166354 = 1;
  return sleep(1u);
}
