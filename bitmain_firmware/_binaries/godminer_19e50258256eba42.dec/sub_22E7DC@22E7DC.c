unsigned __int64 __fastcall sub_22E7DC(int a1, unsigned __int64 a2)
{
  *(_WORD *)a1 = a2;
  *(_BYTE *)(a1 + 2) = BYTE2(a2);
  *(_BYTE *)(a1 + 3) = BYTE3(a2);
  *(_BYTE *)(a1 + 4) = BYTE4(a2);
  *(_BYTE *)(a1 + 5) = BYTE5(a2);
  return HIDWORD(a2);
}
