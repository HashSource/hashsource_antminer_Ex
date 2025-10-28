int hal_led_green_addr()
{
  if ( dword_18D87C )
    return 944;
  else
    return -1;
}
