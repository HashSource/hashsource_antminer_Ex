int __fastcall map_next_(_DWORD *a1, _DWORD *a2)
{
  if ( a2[1] )
  {
    a2[1] = *(_DWORD *)(a2[1] + 8);
    if ( a2[1] )
      return a2[1] + 12;
  }
  while ( ++*a2 < a1[1] )
  {
    a2[1] = *(_DWORD *)(*a1 + 4 * *a2);
    if ( a2[1] )
      return a2[1] + 12;
  }
  return 0;
}
