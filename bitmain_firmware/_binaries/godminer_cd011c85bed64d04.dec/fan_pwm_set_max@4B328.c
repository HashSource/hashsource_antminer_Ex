int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_167340 )
  {
    dword_167344 = pwm_init();
    byte_167340 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_167344, 100);
  return result;
}
