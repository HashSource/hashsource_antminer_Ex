int bitmain_power_open()
{
  int result; // r0

  result = dword_1B36F0;
  if ( !dword_1B36F0 || !dword_1B36F4 )
    return sub_C7E8C();
  return result;
}
