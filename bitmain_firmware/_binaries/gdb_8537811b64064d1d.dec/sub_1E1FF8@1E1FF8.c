int __fastcall sub_1E1FF8(int a1, int a2, int a3)
{
  int v4; // r0
  int result; // r0

  if ( a2 )
    sub_94708("Argument given to \"disconnect\" when remotely debugging.");
  v4 = sub_231C90(a1);
  result = sub_231A34(v4);
  if ( a3 )
    return sub_259B5C("Ending remote debugging.\n");
  return result;
}
