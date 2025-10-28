int __fastcall DistinctIndices(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int j; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a4; i += 4 )
  {
    for ( j = 0; j < a4; j += 4 )
    {
      if ( !memcmp((const void *)(a1 + a3 + i), (const void *)(a2 + a3 + j), 4u) )
        return 0;
    }
  }
  return 1;
}
