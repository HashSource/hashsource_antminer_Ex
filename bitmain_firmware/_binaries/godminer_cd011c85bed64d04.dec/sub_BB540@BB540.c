int __fastcall sub_BB540(int a1)
{
  int v1; // r1
  _DWORD *v3; // r0
  int result; // r0

  v1 = *(_DWORD *)(a1 + 20);
  v3 = **(_DWORD ***)(a1 + 12);
  if ( v1 )
    result = tree_successor(v3);
  else
    result = minimum_c_rb(v3, *v3);
  *(_DWORD *)(a1 + 20) = result;
  if ( result )
    return *(_DWORD *)(result + 20);
  return result;
}
