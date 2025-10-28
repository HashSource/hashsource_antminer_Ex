unsigned int __fastcall sub_342604(unsigned int a1)
{
  unsigned int v3; // [sp+4h] [bp-10h]
  unsigned int i; // [sp+Ch] [bp-8h]

  if ( a1 >= 0x80000000 )
    return a1;
  v3 = a1 - 1;
  for ( i = 1; i <= 0x1F; i *= 2 )
    v3 |= v3 >> i;
  return v3 + 1;
}
