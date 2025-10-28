int __fastcall sub_1E3B94(int a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r4
  int v6; // r3

  v3 = ((int (*)(void))loc_23DC0C)();
  if ( !*(_DWORD *)(v3 + 248) )
    return 0;
  v4 = v3;
  if ( *(_DWORD *)(((int (*)(void))loc_1E3914)() + 68) != 3 )
    return 0;
  v6 = *(_DWORD *)(((int (__fastcall *)(int))loc_1E3914)(v4) + 72);
  *a2 = v6;
  return 1;
}
