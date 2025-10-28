int __fastcall sub_25A5F0(unsigned __int8 a1)
{
  if ( a1 <= 9u )
    return (unsigned __int8)(a1 + 48);
  if ( a1 > 0xFu )
    return 255;
  return (unsigned __int8)(a1 + 87);
}
