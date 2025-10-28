int fan_pwm_set_max()
{
  int result; // r0

  if ( byte_5AD5E9 != 1 )
  {
    dword_5AD5EC = pwm_init(0, 100);
    byte_5AD5E9 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_5AD5EC, 0x64u);
  return result;
}
