int hal_key_reset_addr()
{
  int result; // r0

  result = 366;
  if ( !dword_16D6D4 )
    return -1;
  return result;
}
