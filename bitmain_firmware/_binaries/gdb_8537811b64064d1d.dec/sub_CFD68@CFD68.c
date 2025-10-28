int __fastcall sub_CFD68(int a1, int a2, int a3, int a4)
{
  int result; // r0

  if ( !a4 )
  {
    result = a2;
    if ( !a2 )
      return result;
    a4 = *(_DWORD *)(a2 + 4);
  }
  return sub_1B7278(*(_DWORD *)(a4 + 4));
}
