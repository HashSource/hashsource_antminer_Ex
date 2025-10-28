int __fastcall char2hex(unsigned __int8 a1)
{
  unsigned __int8 v2; // [sp+Fh] [bp-5h]

  v2 = 0;
  if ( a1 > 9u )
  {
    if ( a1 <= 0xFu )
      return (unsigned __int8)(a1 + 87);
  }
  else
  {
    return (unsigned __int8)(a1 + 48);
  }
  return v2;
}
