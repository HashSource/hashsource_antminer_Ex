int __fastcall IsZero(int a1, unsigned int a2)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; a2 > i; ++i )
  {
    if ( *(_BYTE *)(a1 + i) )
      return 0;
  }
  return 1;
}
