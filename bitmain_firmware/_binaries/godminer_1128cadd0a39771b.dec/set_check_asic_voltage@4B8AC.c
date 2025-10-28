int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = set_voltage_by_steps(dword_167360, (unsigned __int8)byte_16734C);
    if ( !result )
      return result;
    return sub_4B478(result);
  }
  result = set_voltage(dword_167360, (unsigned __int8)byte_16734C);
  if ( result )
    return sub_4B478(result);
  return result;
}
