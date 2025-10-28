int __fastcall sub_1A2C7C(int a1, _DWORD *a2)
{
  int v4; // r0
  int result; // r0

  v4 = ((int (__fastcall *)(int))loc_1A34C4)(dword_487A1C);
  result = sub_1A3D7C(v4, -1, a1);
  if ( !result )
    return sub_1A3D7C(*a2, a2[1], a1);
  return result;
}
