int __fastcall sub_257C4C(int a1, int a2)
{
  int result; // r0

  for ( result = *(_DWORD *)((int (__fastcall *)(int, int))loc_16ECB0)(a1, dword_48A9A8); result && a2; --a2 )
    result = *(_DWORD *)(result + 12);
  return result;
}
