int sub_412B8()
{
  int result; // r0

  result = sub_27E6EC();
  if ( !dword_46AF80 )
  {
    result = sub_27EB24(result);
    dword_46AF80 = 1;
  }
  return result;
}
