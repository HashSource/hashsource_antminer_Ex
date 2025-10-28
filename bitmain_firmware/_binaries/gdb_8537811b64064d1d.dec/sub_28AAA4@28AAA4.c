int __fastcall sub_28AAA4(char *a1)
{
  char *v1; // r2
  char **v2; // r3
  int result; // r0

  v1 = sub_28AA50(a1);
  if ( v1 )
  {
    v2 = (char **)&off_46DED0;
    result = 0;
  }
  else
  {
    result = 1;
  }
  if ( v1 )
    *v2 = v1;
  return result;
}
