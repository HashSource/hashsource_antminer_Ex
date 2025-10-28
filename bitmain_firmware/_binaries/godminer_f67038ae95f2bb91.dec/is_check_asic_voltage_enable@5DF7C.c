int is_check_asic_voltage_enable()
{
  int result; // r0

  result = (unsigned __int8)byte_195C14;
  if ( byte_195C14 )
    return (unsigned __int8)byte_195C20;
  return result;
}
