_BYTE *__fastcall sub_283580(int a1)
{
  _BYTE *result; // r0
  int v3; // r2
  int i; // r3

  result = sub_28354C();
  v3 = 4;
  for ( i = 0; i != 257; ++i )
  {
    result[8 * i] = *(_BYTE *)(a1 + 8 * i);
    *(_DWORD *)&result[v3] = *(_DWORD *)(a1 + v3);
    v3 += 8;
  }
  return result;
}
