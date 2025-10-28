__int64 __fastcall sub_233AE0(int a1, unsigned __int64 a2)
{
  __int64 v3; // r2
  unsigned __int64 v5; // [sp+0h] [bp-1Ch]

  *(_WORD *)a1 = a2;
  *(_BYTE *)(a1 + 2) = BYTE2(a2);
  *(_BYTE *)(a1 + 3) = BYTE3(a2);
  v5 = HIDWORD(a2);
  *(_BYTE *)(a1 + 4) = BYTE4(a2);
  LODWORD(v3) = a2 >> 40;
  HIDWORD(v3) = HIDWORD(v5) >> 8;
  *(_BYTE *)(a1 + 5) = v3;
  LODWORD(v3) = v3 >> 8;
  HIDWORD(v3) = HIWORD(HIDWORD(v5));
  *(_WORD *)(a1 + 6) = v3;
  return v3;
}
