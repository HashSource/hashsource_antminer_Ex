int __fastcall sub_FB8EC(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0

  if ( a2 )
    sub_94708("Too many arguments");
  v4 = sub_231C90(a1);
  result = sub_15D7A0(v4);
  if ( a3 )
    return sub_259F38("No core file now.\n");
  return result;
}
