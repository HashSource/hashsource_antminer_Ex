int __fastcall hex2char(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v3; // [sp+Fh] [bp-5h]

  if ( a1 <= 0x2Fu || a1 > 0x39u )
  {
    if ( a1 > 0x60u && a1 <= 0x66u )
      v3 = a1 - 87;
  }
  else
  {
    v3 = a1 - 48;
  }
  if ( a2 <= 0x2Fu || a2 > 0x39u )
  {
    if ( a2 > 0x60u && a2 <= 0x66u )
      return (unsigned __int8)(16 * v3) | (unsigned __int8)(a2 - 87);
  }
  else
  {
    return (unsigned __int8)(16 * v3) | (unsigned __int8)(a2 - 48);
  }
  return v3;
}
