int hal_key_reset_addr()
{
  int result; // r0

  result = 953;
  if ( !dword_18D87C )
    return -1;
  return result;
}
