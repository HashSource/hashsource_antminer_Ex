int __fastcall sub_FAAC4(unsigned int a1, int a2)
{
  _DWORD savedregs[4]; // [sp+0h] [bp-Ch] BYREF

  sub_FA7A0(2, a1, (int)savedregs, *(_DWORD *)(a2 + 20));
  return sub_15AED0(savedregs, a2);
}
