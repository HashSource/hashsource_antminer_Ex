int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_195C04 )
  {
    dword_195C08 = pwm_init(0, 100);
    byte_195C04 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_195C08, 0x64u);
  return result;
}
