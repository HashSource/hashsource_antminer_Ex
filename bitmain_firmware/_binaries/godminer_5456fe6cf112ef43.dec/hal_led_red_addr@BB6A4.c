int hal_led_red_addr()
{
  int result; // r0

  result = 411;
  if ( !dword_16C6C4 )
    return -1;
  return result;
}
