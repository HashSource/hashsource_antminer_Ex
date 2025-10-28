int hal_led_green_addr()
{
  if ( dword_1B3624 )
    return 944;
  else
    return -1;
}
