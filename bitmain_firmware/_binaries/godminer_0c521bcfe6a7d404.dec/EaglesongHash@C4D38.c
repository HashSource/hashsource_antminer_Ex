unsigned int __fastcall EaglesongHash(int a1, int a2, unsigned int a3)
{
  return EaglesongSponge(a1, 32, a2, a3, 6u);
}
