int __fastcall sub_2518F8(int a1, int a2, int a3)
{
  int v5; // r3
  _BYTE v7[20]; // [sp+0h] [bp-14h] BYREF

  ((void (__fastcall *)(int, int, _BYTE *))loc_25183C)(a1, a2, v7);
  v5 = *(_DWORD *)(a2 + 20);
  if ( v5 == 8 )
    return sub_332D64(v7, a3);
  if ( v5 == 16 )
    return sub_333188(v7, a3);
  if ( v5 != 4 )
    sub_94708("Unknown decimal floating point type.");
  return sub_331CFC(v7, a3);
}
