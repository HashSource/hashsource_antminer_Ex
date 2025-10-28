int fan_pwm_get()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  if ( byte_5AD5E9 != 1 )
  {
    dword_5AD5EC = pwm_init(0, 1);
    byte_5AD5E9 = 1;
  }
  pwm_get(dword_5AD5EC, &v1);
  return v1;
}
