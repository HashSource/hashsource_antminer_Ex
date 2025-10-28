int fpga_uninit()
{
  int result; // r0

  if ( dword_18D4D4 )
  {
    dword_18D4D4 = 0;
    return close(dword_18D4D8);
  }
  return result;
}
