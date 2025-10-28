int __fastcall set_check_asic_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = set_voltage_by_steps(dword_166350, (unsigned __int8)byte_16633C);
    if ( !result )
      return result;
    return sub_4ADB0(result);
  }
  result = set_voltage(dword_166350, (unsigned __int8)byte_16633C);
  if ( result )
    return sub_4ADB0(result);
  return result;
}
