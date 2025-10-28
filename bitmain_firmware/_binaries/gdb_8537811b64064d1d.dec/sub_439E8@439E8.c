int *__fastcall sub_439E8(int a1, int a2)
{
  int *result; // r0

  if ( a2 )
  {
    result = (int *)sub_438C0(1);
    if ( !result )
    {
      sub_152D80(dword_46AF74, sub_41310, 0);
      return sub_40FF4();
    }
  }
  else
  {
    sub_152E54(dword_46AF74);
    return (int *)sub_438C0(0);
  }
  return result;
}
