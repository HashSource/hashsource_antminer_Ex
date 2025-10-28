int get_working_voltage()
{
  if ( byte_16734C )
    return dword_167358;
  else
    return -1;
}
