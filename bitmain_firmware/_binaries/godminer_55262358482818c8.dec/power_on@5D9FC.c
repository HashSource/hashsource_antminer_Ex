unsigned int power_on()
{
  bitmain_power_on();
  byte_195C28 = 1;
  return sleep(1u);
}
