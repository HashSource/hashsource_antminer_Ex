int __fastcall sub_330D2C(int a1, int a2)
{
  sub_32AB94(a1, a2);
  *(_BYTE *)(a1 + 8) = ~(*(_BYTE *)(a1 + 8) ^ 0x7F);
  return a1;
}
