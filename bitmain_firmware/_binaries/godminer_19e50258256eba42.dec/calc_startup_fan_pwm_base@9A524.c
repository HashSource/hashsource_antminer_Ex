int __fastcall calc_startup_fan_pwm_base(int a1)
{
  int v1; // r3

  v1 = a1;
  if ( a1 != -64 )
  {
    if ( a1 >= -10 )
    {
      if ( a1 > 34 )
        return 80;
      else
        return 60;
    }
    else
    {
      return 40;
    }
  }
  return v1;
}
