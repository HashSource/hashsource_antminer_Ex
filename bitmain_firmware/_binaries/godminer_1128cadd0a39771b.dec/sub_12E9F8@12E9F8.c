int __fastcall sub_12E9F8(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_12EA20(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_12EA20(LODWORD(a1), HIDWORD(a1));
}
