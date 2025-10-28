int __fastcall sub_348000(float a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_348048(LODWORD(a1) ^ 0x80000000);
  else
    return sub_348048(LODWORD(a1));
}
