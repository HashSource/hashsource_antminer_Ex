int __fastcall sub_1BCA4(int a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_25A6E4("IVO ", a1);
  if ( (a2 & 2) != 0 )
    sub_25A6E4("DVZ ", a1);
  if ( (a2 & 4) != 0 )
    sub_25A6E4("OFL ", a1);
  if ( (a2 & 8) != 0 )
    sub_25A6E4("UFL ", a1);
  if ( (a2 & 0x10) != 0 )
    sub_25A6E4("INX ", a1);
  return sub_25A524(10, a1);
}
