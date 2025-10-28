int __fastcall reverse_hex(int result, unsigned int a2)
{
  char v2; // [sp+Fh] [bp-Dh]
  unsigned int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a2 >> 1; ++i )
  {
    v2 = *(_BYTE *)(result + i);
    *(_BYTE *)(result + i) = *(_BYTE *)(result + a2 - i - 1);
    *(_BYTE *)(result + a2 - i - 1) = v2;
  }
  return result;
}
