bool __fastcall sub_A1060(int a1)
{
  if ( !a1 || **(_BYTE **)(a1 + 24) != 3 )
    return 0;
  if ( sub_1728B0(a1, "P_BOUNDS", 1) || sub_1728B0(a1, "P_ARRAY", 1) )
    return !sub_A0CBC(a1);
  return 0;
}
