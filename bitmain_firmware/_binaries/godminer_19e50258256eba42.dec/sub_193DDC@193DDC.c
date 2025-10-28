int __fastcall sub_193DDC(int a1, int a2)
{
  unsigned __int8 v3; // [sp+Bh] [bp-9h]
  int i; // [sp+Ch] [bp-8h]

  v3 = 1;
  for ( i = 0; i <= 31; ++i )
  {
    if ( *(unsigned __int8 *)(a1 + i) < (unsigned int)*(unsigned __int8 *)(a2 + i) )
      return 1;
    if ( *(unsigned __int8 *)(a1 + i) > (unsigned int)*(unsigned __int8 *)(a2 + i) )
      return 0;
  }
  return v3;
}
