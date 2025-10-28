int sub_3EA28()
{
  int result; // r0

  result = dword_471BF8;
  if ( !*(_BYTE *)dword_471BF8 )
  {
    free((void *)dword_471BF8);
    result = sub_32727C("$sdir:$pdir");
    dword_471BF8 = result;
  }
  return result;
}
