int __fastcall sub_244920(int a1, unsigned int a2)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < a2; ++i )
  {
    if ( *(_BYTE *)(a1 + i) )
      return 0;
  }
  return 1;
}
