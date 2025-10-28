int __fastcall utf8_check_string(int a1, unsigned int a2)
{
  size_t v6; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i < a2; ++i )
  {
    v6 = utf8_check_first(*(_BYTE *)(a1 + i));
    if ( !v6 )
      return 0;
    if ( v6 > 1 )
    {
      if ( v6 > a2 - i )
        return 0;
      if ( !utf8_check_full((const char *)(a1 + i), v6, 0) )
        return 0;
      i = v6 + i - 1;
    }
  }
  return 1;
}
