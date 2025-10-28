int get_current_voltage()
{
  if ( byte_195C10 )
    return dword_195C2C;
  else
    return sub_5D6F8();
}
