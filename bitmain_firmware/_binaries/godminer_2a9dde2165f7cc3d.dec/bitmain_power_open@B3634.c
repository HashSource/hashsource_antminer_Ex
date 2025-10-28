int bitmain_power_open()
{
  int result; // r0

  result = dword_18D948;
  if ( !dword_18D948 || !dword_18D94C )
    return sub_B3474();
  return result;
}
