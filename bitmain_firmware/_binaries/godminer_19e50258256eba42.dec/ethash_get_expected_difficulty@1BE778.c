void *__fastcall ethash_get_expected_difficulty(_BYTE *a1, unsigned int a2)
{
  void *result; // r0
  unsigned int j; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  result = memset(a1, 255, 0x20u);
  for ( i = 0; a2 >> 3 > i; ++i )
    a1[i] = 0;
  for ( j = 0; (a2 & 7) > j; ++j )
  {
    if ( a2 <= 7 )
      *a1 >>= 1;
    else
      a1[i] >>= 1;
  }
  return result;
}
