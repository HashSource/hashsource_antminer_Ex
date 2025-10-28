int sub_5CD60()
{
  char *v0; // r0
  int result; // r0

  v0 = getenv("PATH");
  if ( !v0 )
    v0 = "";
  result = sub_32727C(v0);
  dword_474830 = result;
  return result;
}
