unsigned int power_on()
{
  bitmain_power_off_0();
  byte_5AD608 = 1;
  return sleep(1u);
}
