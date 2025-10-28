int __fastcall sub_10FCD4(int a1, int a2)
{
  int result; // r0

  result = ((int (__fastcall *)(int, int))loc_16ECB0)(a1, dword_4872C4);
  *(_DWORD *)(result + 8) = a2;
  return result;
}
