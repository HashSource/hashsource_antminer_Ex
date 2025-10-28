unsigned int __fastcall sub_2E419C(int a1, int a2, unsigned int a3, int a4)
{
  *(_BYTE *)a1 = a3;
  *(_WORD *)(a1 + 1) = a3 >> 8;
  *(_BYTE *)(a1 + 3) = HIBYTE(a3);
  *(_DWORD *)(a1 + 4) = a4;
  return a3;
}
