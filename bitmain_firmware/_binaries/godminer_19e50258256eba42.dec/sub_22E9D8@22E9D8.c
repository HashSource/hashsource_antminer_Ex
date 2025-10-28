int __fastcall sub_22E9D8(int a1, unsigned int a2)
{
  *(_DWORD *)(a1 + 32) += a2;
  *(_DWORD *)(a1 + 36) += a2 > *(_DWORD *)(a1 + 32);
  return 0;
}
