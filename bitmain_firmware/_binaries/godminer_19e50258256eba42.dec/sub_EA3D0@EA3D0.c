int __fastcall sub_EA3D0(int a1, int a2)
{
  unsigned __int8 v3; // [sp+13h] [bp-9h]
  int i; // [sp+14h] [bp-8h]

  v3 = 1;
  for ( i = 7; i >= 0; --i )
  {
    if ( *(_DWORD *)(a1 + 4 * i) < *(_DWORD *)(a2 + 4 * i) )
      return 1;
    if ( *(_DWORD *)(a1 + 4 * i) > *(_DWORD *)(a2 + 4 * i) )
      return 0;
  }
  return v3;
}
