int hal_led_red_addr()
{
  int result; // r0

  result = 943;
  if ( !dword_17746C )
    return -1;
  return result;
}
