int __fastcall sub_246AB8(int result, int a2, unsigned int a3)
{
  int v3; // [sp+Ch] [bp-10h]
  unsigned int i; // [sp+14h] [bp-8h]

  v3 = result;
  for ( i = 0; i < a3; ++i )
  {
    result = v3;
    *(_BYTE *)(v3 + i) ^= *(_BYTE *)(a2 + i);
  }
  return result;
}
