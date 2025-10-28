int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_16603C, (unsigned __int8)byte_166030);
    if ( !(_WORD)result )
      return result;
    return sub_4FC5C(result);
  }
  result = (unsigned __int16)set_voltage(dword_16603C, (unsigned __int8)byte_166030);
  if ( (_WORD)result )
    return sub_4FC5C(result);
  return result;
}
