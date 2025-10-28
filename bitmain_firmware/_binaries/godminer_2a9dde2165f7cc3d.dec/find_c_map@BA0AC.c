int __fastcall find_c_map(_DWORD *a1, int a2, int a3)
{
  int c_rb; // r0

  if ( !a1 )
    return 0;
  c_rb = find_c_rb(*a1);
  if ( !c_rb )
    return 0;
  get_raw_clib_object(*(_DWORD *)(c_rb + 20), a3);
  return 1;
}
