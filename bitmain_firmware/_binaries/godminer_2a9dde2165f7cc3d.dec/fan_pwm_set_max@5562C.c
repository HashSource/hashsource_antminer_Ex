int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_17433C )
  {
    dword_174340 = pwm_init();
    byte_17433C = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_174340, 100);
  return result;
}
