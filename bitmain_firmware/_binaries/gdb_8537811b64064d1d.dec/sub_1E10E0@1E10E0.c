_BYTE *__fastcall sub_1E10E0(int a1)
{
  _BYTE *result; // r0
  int v3; // r3

  result = *(_BYTE **)(a1 + 144);
  if ( !result )
  {
    result = sub_98394(8u);
    v3 = *(_DWORD *)(a1 + 144);
    result[4] = 1;
    *(_DWORD *)(a1 + 144) = result;
    *(_DWORD *)result = off_3D428C;
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      return *(_BYTE **)(a1 + 144);
    }
  }
  return result;
}
