int hal_led_red_addr()
{
  int result; // r0

  result = 411;
  if ( !dword_16D6D4 )
    return -1;
  return result;
}
