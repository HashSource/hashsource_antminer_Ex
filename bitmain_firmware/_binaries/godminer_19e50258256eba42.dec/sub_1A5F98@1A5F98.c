int __fastcall sub_1A5F98(int a1, int a2)
{
  int i; // [sp+10h] [bp-Ch]
  unsigned __int8 v4; // [sp+17h] [bp-5h]

  v4 = 1;
  for ( i = 7; i >= 0; --i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) > *(_DWORD *)(a2 + 4 * i) )
      return 0;
    if ( *(_DWORD *)(a1 + 4 * i) < *(_DWORD *)(a2 + 4 * i) )
      return 1;
  }
  return v4;
}
