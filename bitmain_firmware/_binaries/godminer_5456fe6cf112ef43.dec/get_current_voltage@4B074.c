int get_current_voltage()
{
  if ( byte_16633C )
    return dword_166360;
  else
    return -1;
}
