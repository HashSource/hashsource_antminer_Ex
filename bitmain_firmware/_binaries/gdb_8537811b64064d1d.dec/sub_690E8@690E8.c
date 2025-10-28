int sub_690E8()
{
  int result; // r0
  int v1; // r2
  int v2; // r2
  _BYTE *v3; // r1
  int v4; // r0

  result = ((int (*)(void))loc_68BA8)();
  v1 = *(_DWORD *)(result + 36);
  if ( v1 - *(_DWORD *)(result + 32) == 4 )
  {
    v2 = *(_DWORD *)(v1 - 4);
    v3 = *(_BYTE **)(v2 + 4);
    *(_DWORD *)(v2 + 8) = 0;
    *v3 = 0;
  }
  else
  {
    v4 = ((int (*)(void))loc_15A84)();
    return sub_69120(v4);
  }
  return result;
}
