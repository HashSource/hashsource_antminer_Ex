bool is_power_protocal_v2()
{
  bool v0; // cc

  v0 = (unsigned int)dword_18D950 > 0x62;
  if ( dword_18D950 != 98 )
    v0 = (unsigned int)(dword_18D950 - 100) > 2;
  return !v0;
}
