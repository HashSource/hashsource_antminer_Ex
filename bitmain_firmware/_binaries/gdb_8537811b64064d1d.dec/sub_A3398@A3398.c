int __fastcall sub_A3398(int a1, int a2)
{
  int v4; // r0
  int v6; // r0

  v4 = sub_26BC98(a2);
  if ( a1 == sub_A0898(v4) )
    return a2;
  if ( sub_9AAD8(a1) )
  {
    if ( a1 != sub_26BC98(a2) )
      return sub_A3334(a1, a2);
    return a2;
  }
  v6 = sub_26BC98(a2);
  if ( sub_9AAD8(v6) )
    return sub_A32F0(a1, a2);
  else
    return sub_2647F0(a1, a2);
}
