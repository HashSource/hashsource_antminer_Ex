int __fastcall sub_E6560(int a1)
{
  int result; // r0

  if ( dword_4788E4 )
    free((void *)dword_4788E4);
  result = a1;
  if ( a1 )
    result = sub_32727C(a1);
  dword_4788E4 = result;
  return result;
}
