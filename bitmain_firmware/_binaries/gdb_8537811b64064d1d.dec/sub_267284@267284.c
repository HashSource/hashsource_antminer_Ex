int __fastcall sub_267284(int result, int a2)
{
  bool v2; // zf

  v2 = result >> 31 == a2;
  if ( result >> 31 == a2 )
    v2 = 1;
  if ( !v2 )
    sub_94708("Value out of range.");
  return result;
}
