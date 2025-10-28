int __fastcall sub_12E970(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_12E998(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_12E998(LODWORD(a1), HIDWORD(a1));
}
