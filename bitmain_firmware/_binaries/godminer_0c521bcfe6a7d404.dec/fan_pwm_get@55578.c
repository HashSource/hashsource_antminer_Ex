int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_17433C )
  {
    v0 = dword_174340;
  }
  else
  {
    v0 = pwm_init();
    dword_174340 = v0;
    byte_17433C = 1;
  }
  pwm_get(v0, &v2);
  return v2;
}
