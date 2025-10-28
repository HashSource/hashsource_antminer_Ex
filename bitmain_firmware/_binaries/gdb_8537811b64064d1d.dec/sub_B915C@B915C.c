int sub_B915C()
{
  int result; // r0

  result = dword_47822C;
  if ( !*(_BYTE *)dword_47822C )
  {
    free((void *)dword_47822C);
    result = sub_32727C("$debugdir:$datadir/auto-load");
    dword_47822C = result;
  }
  return result;
}
