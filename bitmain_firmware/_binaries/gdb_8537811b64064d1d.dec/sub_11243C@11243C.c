int __fastcall sub_11243C(int a1, unsigned int a2)
{
  int v2; // r12
  unsigned int v3; // r2

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (*(_DWORD *)(a1 + 8) - v2) >> 3;
  if ( a2 >= v3 )
    sub_94708("Asked for position %d of stack, stack only has %zu elements on it.", a2, v3);
  return *(_DWORD *)(v2 + 8 * (~a2 + v3));
}
