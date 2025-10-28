int get_working_voltage()
{
  if ( byte_16633C )
    return dword_166348;
  else
    return -1;
}
