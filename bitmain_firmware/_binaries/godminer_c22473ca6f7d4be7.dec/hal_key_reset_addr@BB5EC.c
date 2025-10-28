int hal_key_reset_addr()
{
  int result; // r0

  result = 366;
  if ( !dword_16C6BC )
    return -1;
  return result;
}
