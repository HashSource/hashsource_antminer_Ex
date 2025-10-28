int __fastcall sub_341C44(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // [sp+4h] [bp-10h]

  v6 = (a3 << 10) + ((unsigned int)(a2 << 10) >> 22);
  sub_32BAF8(a1, (a2 << 10) + 8 * a4 + a5);
  return sub_32BAF8(a1 + 4, v6);
}
