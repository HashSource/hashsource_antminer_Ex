int bitmain_power_close()
{
  if ( dword_16C648 && dword_16C64C )
    return 0;
  sub_B6F10();
  return 0;
}
