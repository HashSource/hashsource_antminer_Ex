int hal_key_ps2pl_rst_addr()
{
  int result; // r0

  result = 367;
  if ( !dword_16C6C4 )
    return -1;
  return result;
}
