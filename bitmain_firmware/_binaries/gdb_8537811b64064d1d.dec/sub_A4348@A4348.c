int __fastcall sub_A4348(int a1)
{
  int result; // r0

  if ( !*(_BYTE *)(a1 + 60) )
  {
    sub_A3CBC(a1 + 32, a1);
    *(_BYTE *)(a1 + 60) = 1;
  }
  result = 672088;
  if ( (*(_BYTE *)(a1 + 56) & 2) == 0 )
    return 671900;
  return result;
}
