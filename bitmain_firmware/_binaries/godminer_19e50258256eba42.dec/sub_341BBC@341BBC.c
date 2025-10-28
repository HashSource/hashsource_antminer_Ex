int __fastcall sub_341BBC(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // [sp+4h] [bp-10h]

  v6 = (a3 << 9) + ((unsigned int)(a2 << 9) >> 23);
  sub_32BAF8(a1, (a2 << 9) + 8 * a4 + a5);
  return sub_32BAF8(a1 + 4, v6);
}
