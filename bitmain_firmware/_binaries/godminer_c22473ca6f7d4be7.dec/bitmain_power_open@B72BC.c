int bitmain_power_open()
{
  int result; // r0

  result = dword_16C640;
  if ( !dword_16C640 || !dword_16C644 )
    return sub_B70F4();
  return result;
}
