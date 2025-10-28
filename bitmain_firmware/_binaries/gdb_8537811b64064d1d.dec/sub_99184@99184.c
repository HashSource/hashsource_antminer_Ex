_BYTE *__fastcall sub_99184(_BYTE *a1, unsigned __int8 a2)
{
  char v2; // r3

  v2 = a0123456789abcd[a2 & 0xF];
  *a1 = a0123456789abcd[a2 >> 4];
  a1[1] = v2;
  return a1 + 2;
}
