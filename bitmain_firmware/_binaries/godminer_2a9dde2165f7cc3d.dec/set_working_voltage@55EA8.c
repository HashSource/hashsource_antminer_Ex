int __fastcall set_working_voltage(int a1)
{
  int result; // r0

  if ( a1 )
  {
    result = (unsigned __int16)set_voltage_by_steps(dword_174354, (unsigned __int8)byte_174348);
    if ( !(_WORD)result )
      return result;
    return sub_556FC(result);
  }
  result = (unsigned __int16)set_voltage(dword_174354, (unsigned __int8)byte_174348);
  if ( (_WORD)result )
    return sub_556FC(result);
  return result;
}
