int __fastcall hs_header_padding(int result, int a2, unsigned int a3)
{
  int v3; // [sp+Ch] [bp-10h]
  unsigned int i; // [sp+14h] [bp-8h]

  v3 = result;
  for ( i = 0; i < a3; ++i )
  {
    result = a2;
    *(_BYTE *)(a2 + i) = *(_BYTE *)(v3 + (i & 0x1F) + 68) ^ *(_BYTE *)(v3 + (i & 0x1F) + 36);
  }
  return result;
}
