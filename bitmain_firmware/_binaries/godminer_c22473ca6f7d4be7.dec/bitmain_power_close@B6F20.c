int bitmain_power_close()
{
  if ( dword_16C640 && dword_16C644 )
    return 0;
  sub_B6E48();
  return 0;
}
