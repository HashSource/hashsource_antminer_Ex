int hal_led_green_addr()
{
  if ( dword_16D6D4 )
    return 408;
  else
    return -1;
}
