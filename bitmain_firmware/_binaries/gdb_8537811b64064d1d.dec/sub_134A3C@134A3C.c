int __fastcall sub_134A3C(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r4

  result = sub_12E6BC(a2, 8962, a3);
  if ( result )
  {
    result = ((int (__fastcall *)(int, int, int))loc_134408)(a2, result, a3);
    v7 = result;
    if ( result )
    {
      result = sub_1733CC(a1);
      **(_DWORD **)(*(_DWORD *)(a1 + 24) + 28) = v7;
    }
  }
  return result;
}
