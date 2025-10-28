_BYTE *__fastcall hs_to_lower(_BYTE *result)
{
  _BYTE *i; // [sp+Ch] [bp-8h]

  for ( i = result; *i; ++i )
  {
    if ( (unsigned __int8)*i > 0x40u && (unsigned __int8)*i <= 0x5Au )
      *i += 32;
  }
  return result;
}
