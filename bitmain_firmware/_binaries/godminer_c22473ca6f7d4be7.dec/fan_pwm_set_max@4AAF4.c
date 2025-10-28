int fan_pwm_set_max()
{
  int result; // r0

  if ( !byte_166330 )
  {
    dword_166334 = pwm_init(0, 100);
    byte_166330 = 1;
  }
  result = fan_pwm_get();
  if ( result != 100 )
    return pwm_set(dword_166334, 0x64u);
  return result;
}
