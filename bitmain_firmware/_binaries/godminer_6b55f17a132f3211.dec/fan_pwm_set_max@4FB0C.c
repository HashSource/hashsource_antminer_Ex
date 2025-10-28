int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_166024 )
  {
    dword_166028 = pwm_init();
    byte_166024 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_166028, 100);
  return result;
}
