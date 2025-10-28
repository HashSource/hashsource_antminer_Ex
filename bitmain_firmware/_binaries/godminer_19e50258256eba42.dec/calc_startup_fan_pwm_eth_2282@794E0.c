int __fastcall calc_startup_fan_pwm_eth_2282(int a1)
{
  int v1; // r3

  v1 = a1;
  if ( a1 != -64 )
  {
    if ( a1 > 69 )
      return 80;
    else
      return 20;
  }
  return v1;
}
