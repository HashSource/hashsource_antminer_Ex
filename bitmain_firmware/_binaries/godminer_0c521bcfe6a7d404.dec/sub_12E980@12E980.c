int __fastcall sub_12E980(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_12E9A8(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_12E9A8(LODWORD(a1), HIDWORD(a1));
}
