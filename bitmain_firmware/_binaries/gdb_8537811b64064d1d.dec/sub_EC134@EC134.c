int __fastcall sub_EC134(int a1, int a2)
{
  bool v2; // zf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a2 == 115;
  if ( v2 )
    return sub_EBD58(a1, a2);
  else
    return 0;
}
