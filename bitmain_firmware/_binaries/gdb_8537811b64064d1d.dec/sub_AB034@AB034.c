int __fastcall sub_AB034(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r3

  v2 = sub_26BC98(a1);
  v3 = sub_A0898(v2);
  if ( sub_A0CBC(v3) )
  {
    v4 = **(char **)(v3 + 24);
  }
  else
  {
    if ( !sub_A0D24(v3) )
      return sub_AAFBC(a1);
    v4 = **(char **)(v3 + 24);
    if ( v4 == 1 )
      return sub_AAFBC(a1);
  }
  if ( v4 == 23 )
    return sub_A8A64(a1);
  else
    return sub_A8AD4(a1);
}
