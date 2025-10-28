int fpga_uninit()
{
  int result; // r0

  if ( dword_16D1B8 )
  {
    dword_16D1B8 = 0;
    return close(dword_16D1BC);
  }
  return result;
}
