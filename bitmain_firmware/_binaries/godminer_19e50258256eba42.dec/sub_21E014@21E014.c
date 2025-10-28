int __fastcall sub_21E014(int a1)
{
  int *v1; // r0

  if ( *(_DWORD *)(a1 + 20) )
    v1 = tree_successor(**(int ***)(a1 + 12), *(_DWORD *)(a1 + 20));
  else
    v1 = sub_21DFD4(*(int **)(a1 + 12));
  *(_DWORD *)(a1 + 20) = v1;
  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
  else
    return 0;
}
