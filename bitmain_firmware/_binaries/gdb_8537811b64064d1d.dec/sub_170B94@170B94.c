int __fastcall sub_170B94(int a1, int a2, int a3)
{
  int v6; // r3
  int v7; // r3
  int result; // r0

  sub_16F730(a1);
  v6 = *(_DWORD *)(a1 + 24);
  *(_BYTE *)v6 = 17;
  *(_DWORD *)(v6 + 20) = a3;
  ((void (__fastcall *)(int, int))loc_1709EC)(a1, a2);
  v7 = *(_DWORD *)(a3 + 24);
  if ( (*(_BYTE *)(v7 + 2) & 0x10) != 0 )
    sub_1B7278(*(_DWORD *)(v7 + 16));
  result = ((int (*)(void))loc_16661C)() / 8;
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
