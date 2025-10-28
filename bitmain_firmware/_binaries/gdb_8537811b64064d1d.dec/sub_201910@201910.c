int __fastcall sub_201910(int a1, unsigned int a2)
{
  unsigned int *v2; // r3
  unsigned int v3; // r0

  v2 = *(unsigned int **)(a1 + 1048);
  v3 = *(_DWORD *)(a1 + 1052);
  if ( (unsigned int)v2 >= v3 )
    return 0;
  while ( *v2 > a2 || v2[1] <= a2 )
  {
    v2 += 4;
    if ( (unsigned int)v2 >= v3 )
      return 0;
  }
  return 1;
}
