unsigned int __fastcall sub_30D6F4(int a1)
{
  unsigned int v1; // t2

  v1 = __ROR4__(a1, 16);
  return (v1 >> 8) & 0xFFFF00FF | (v1 << 8) & 0xFF00FF00;
}
