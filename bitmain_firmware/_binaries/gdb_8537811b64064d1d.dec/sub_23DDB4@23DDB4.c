int __fastcall sub_23DDB4(int a1, int a2, unsigned int a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 56);
  if ( result )
    return sub_D1870(result, a2, a3) != 0;
  return result;
}
