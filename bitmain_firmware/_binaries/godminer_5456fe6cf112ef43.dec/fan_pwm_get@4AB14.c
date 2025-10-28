int fan_pwm_get()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  if ( byte_166330 )
  {
    v0 = dword_166334;
  }
  else
  {
    v0 = pwm_init();
    dword_166334 = v0;
    byte_166330 = 1;
  }
  pwm_get(v0, &v2);
  return v2;
}
