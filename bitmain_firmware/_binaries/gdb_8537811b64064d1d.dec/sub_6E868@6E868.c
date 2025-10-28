int __fastcall sub_6E868(int a1, int a2, int a3, unsigned int a4)
{
  _DWORD *v6; // r6
  int result; // r0
  int v8; // [sp+4h] [bp-4h]

  v6 = (_DWORD *)sub_6E7C0(a1, a4, *(_DWORD *)(a2 + 12));
  v8 = v6[7] + 16;
  sub_BE2E8();
  result = sub_BE0FC(a2, a3);
  *(_DWORD *)(a3 + 4) = *v6;
  return result;
}
