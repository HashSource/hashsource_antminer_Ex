int __fastcall json_array_extend(int a1, int a2)
{
  unsigned int i; // [sp+1Ch] [bp-8h]

  if ( !a1 || *(_DWORD *)a1 != 1 || !a2 || *(_DWORD *)a2 != 1 )
    return -1;
  if ( !json_array_grow((json_array_t *)a1, *(_DWORD *)(a2 + 12), 1) )
    return -1;
  for ( i = 0; i < *(_DWORD *)(a2 + 12); ++i )
    sub_54738(*(_DWORD *)(*(_DWORD *)(a2 + 16) + 4 * i));
  array_copy(*(json_t ***)(a1 + 16), *(_DWORD *)(a1 + 12), *(json_t ***)(a2 + 16), 0, *(_DWORD *)(a2 + 12));
  *(_DWORD *)(a1 + 12) += *(_DWORD *)(a2 + 12);
  return 0;
}
