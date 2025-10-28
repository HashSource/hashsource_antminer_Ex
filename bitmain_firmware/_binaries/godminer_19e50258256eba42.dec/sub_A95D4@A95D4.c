int __fastcall sub_A95D4(unsigned __int64 a1, int a2, int a3)
{
  unsigned __int64 v4; // [sp+8h] [bp-14h]
  int i; // [sp+14h] [bp-8h]

  v4 = a1;
  if ( a3 >= 8 )
    a3 = 8;
  for ( i = 0; i < (a3 & ~(a3 >> 31)); ++i )
  {
    *(_BYTE *)(a2 + i) = v4;
    LODWORD(a1) = v4;
    v4 >>= 8;
  }
  return a1;
}
