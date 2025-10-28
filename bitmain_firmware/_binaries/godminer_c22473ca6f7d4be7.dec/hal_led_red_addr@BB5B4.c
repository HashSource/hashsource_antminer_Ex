int hal_led_red_addr()
{
  int result; // r0

  result = 411;
  if ( !dword_16C6BC )
    return -1;
  return result;
}
