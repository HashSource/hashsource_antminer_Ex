int get_current_voltage()
{
  if ( byte_16734C )
    return dword_167370;
  else
    return -1;
}
