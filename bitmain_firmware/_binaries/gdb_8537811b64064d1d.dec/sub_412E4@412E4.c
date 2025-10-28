int sub_412E4()
{
  int result; // r0

  result = sub_27E560();
  if ( dword_46AF80 )
  {
    dword_46AF80 = 0;
    return sub_27EAC4(result);
  }
  return result;
}
