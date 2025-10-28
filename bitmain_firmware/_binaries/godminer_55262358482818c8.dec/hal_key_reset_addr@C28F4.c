int hal_key_reset_addr()
{
  int result; // r0

  result = 953;
  if ( !dword_1B3624 )
    return -1;
  return result;
}
