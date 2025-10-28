int fpga_uninit()
{
  int result; // r0

  if ( dword_16C1A4 )
  {
    dword_16C1A4 = 0;
    return close(dword_16C1A8);
  }
  return result;
}
