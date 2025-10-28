int fpga_uninit()
{
  int result; // r0

  if ( dword_16C19C )
  {
    dword_16C19C = 0;
    return close(dword_16C1A0);
  }
  return result;
}
