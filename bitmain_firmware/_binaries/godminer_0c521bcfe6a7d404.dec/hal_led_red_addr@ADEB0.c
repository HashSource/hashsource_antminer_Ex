int hal_led_red_addr()
{
  int result; // r0

  result = 943;
  if ( !dword_18D87C )
    return -1;
  return result;
}
