int __fastcall sub_4949C(unsigned __int8 a1)
{
  int v1; // r3

  if ( a1 > 0x2Fu && a1 <= 0x39u )
    return (unsigned __int8)(a1 - 48);
  if ( a1 > 0x60u && a1 <= 0x66u )
    return (unsigned __int8)(a1 - 87);
  v1 = a1;
  if ( a1 > 0x40u )
  {
    v1 = a1;
    if ( a1 <= 0x46u )
      return (unsigned __int8)(a1 - 55);
  }
  return v1;
}
