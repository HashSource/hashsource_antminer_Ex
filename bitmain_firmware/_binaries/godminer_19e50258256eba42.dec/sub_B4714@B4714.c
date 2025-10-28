int __fastcall sub_B4714(char a1)
{
  byte_59B2EC = byte_59B2EC == 0;
  if ( a1 )
  {
    green_led_off();
    if ( byte_59B2EC )
      return red_led_on();
    else
      return red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_59B2EC )
      return green_led_on();
    else
      return green_led_off();
  }
}
