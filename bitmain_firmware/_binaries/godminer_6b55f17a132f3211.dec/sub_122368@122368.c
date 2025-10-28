int __fastcall sub_122368(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_122390(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_122390(LODWORD(a1), HIDWORD(a1));
}
