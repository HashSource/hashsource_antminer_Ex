int hal_led_green_addr()
{
  if ( dword_16C6BC )
    return 408;
  else
    return -1;
}
