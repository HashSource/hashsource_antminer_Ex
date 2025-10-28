int __fastcall sub_2209E8(int a1)
{
  char v1; // r3
  int result; // r0

  v1 = *(_BYTE *)(a1 + 33);
  result = *(_DWORD *)(a1 + 28);
  if ( (v1 & 1) != 0 )
    return sub_1B7278(*(_DWORD *)(*(_DWORD *)(result + 4) + 4));
  return result;
}
