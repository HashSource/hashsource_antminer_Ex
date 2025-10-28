int fpga_uninit()
{
  int result; // r0

  if ( dword_1B327C )
  {
    dword_1B327C = 0;
    return close(dword_1B3280);
  }
  return result;
}
