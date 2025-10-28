int __fastcall sub_1E78F8(int a1, int a2, int a3, int a4)
{
  if ( !sub_99074((int *)(a3 + 4), *(int **)a4) )
    return 1;
  *(_DWORD *)(a4 + 4) = a3;
  ((void (__fastcall *)(int, int))loc_1E77FC)(a1, a2);
  return 0;
}
