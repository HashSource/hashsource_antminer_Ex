int __fastcall sub_21C7F0(int result)
{
  if ( result )
  {
    if ( (*(_BYTE *)(result + 33) & 1) != 0 )
      JUMPOUT(0x21C208);
  }
  return result;
}
