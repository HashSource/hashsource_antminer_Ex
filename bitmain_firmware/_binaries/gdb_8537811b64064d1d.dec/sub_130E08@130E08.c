int __fastcall sub_130E08(int a1)
{
  int result; // r0
  int v3; // r1

  if ( (*(_BYTE *)(a1 + 10) & 4) != 0 )
    result = ((int (*)(void))loc_130D1C)();
  else
    result = ((int (*)(void))loc_12E45C)();
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 )
    return sub_12EF00(*(_DWORD *)(v3 + 148), v3);
  return result;
}
