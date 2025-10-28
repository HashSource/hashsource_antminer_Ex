bool __fastcall sub_5E6EC(int a1, int a2)
{
  int v4; // r0

  if ( !a2 )
    return 0;
  if ( a2 == 1 )
    return 1;
  if ( sub_26FFB4() )
    return 1;
  v4 = sub_26FE08(a1);
  if ( !v4 )
    return 1;
  return (unsigned int)**(unsigned __int8 **)(sub_171280(v4) + 24) - 2 > 2;
}
