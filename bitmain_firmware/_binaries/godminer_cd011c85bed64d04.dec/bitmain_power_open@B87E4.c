int bitmain_power_open()
{
  int result; // r0

  result = dword_16D658;
  if ( !dword_16D658 || !dword_16D65C )
    return sub_B861C();
  return result;
}
