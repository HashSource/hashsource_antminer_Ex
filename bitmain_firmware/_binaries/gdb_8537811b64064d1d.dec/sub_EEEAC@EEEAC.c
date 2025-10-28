int __fastcall sub_EEEAC(int a1)
{
  if ( a1 == 63 )
    return 127;
  else
    return a1 & 0x9F;
}
