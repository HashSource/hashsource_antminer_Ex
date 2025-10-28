int __fastcall sub_A2920(int a1)
{
  int result; // r0
  int v2; // r4
  int v3; // r3
  int v4; // r0

  result = sub_A0898(a1);
  v2 = result;
  v3 = **(char **)(result + 24);
  if ( v3 == 3 )
  {
    v4 = sub_A0F00(result);
    if ( v4 )
      return sub_A26F4(v4);
  }
  else
  {
    if ( v3 != 4 )
      return result;
    v4 = sub_A0E60(result, "___XVU");
    if ( v4 )
      return sub_A26F4(v4);
  }
  return sub_A26F4(v2);
}
