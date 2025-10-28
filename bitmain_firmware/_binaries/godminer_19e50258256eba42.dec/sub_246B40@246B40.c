int __fastcall sub_246B40(int result, int a2, unsigned int a3)
{
  unsigned int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(a2 + i) = *(_BYTE *)(result + i);
  return result;
}
