int __fastcall sub_25A55C(unsigned __int8 a1)
{
  if ( a1 > 0x2Fu && a1 <= 0x39u )
    return a1 - 48;
  if ( a1 > 0x40u && a1 <= 0x46u )
    return a1 - 55;
  if ( a1 <= 0x60u || a1 > 0x66u )
    return -1;
  return a1 - 87;
}
