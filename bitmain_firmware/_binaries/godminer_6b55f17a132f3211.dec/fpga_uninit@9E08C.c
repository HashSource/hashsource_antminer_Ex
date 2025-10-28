int fpga_uninit()
{
  int result; // r0

  if ( dword_1770C4 )
  {
    dword_1770C4 = 0;
    return close(dword_1770C8);
  }
  return result;
}
