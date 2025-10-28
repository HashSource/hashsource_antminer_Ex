int bitmain_power_open()
{
  int result; // r0

  result = dword_16C648;
  if ( !dword_16C648 || !dword_16C64C )
    return sub_B71BC();
  return result;
}
