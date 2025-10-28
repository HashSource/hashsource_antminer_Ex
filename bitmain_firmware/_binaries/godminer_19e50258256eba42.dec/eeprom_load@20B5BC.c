int eeprom_load()
{
  int v2; // [sp+1000h] [bp-Ch]
  unsigned __int8 i; // [sp+1007h] [bp-5h]

  v2 = 0;
  if ( dword_C25F58 )
  {
    if ( *(_BYTE *)(dword_C25F58 + 80) )
      return 0;
  }
  else if ( sub_206954() )
  {
    return -1;
  }
  for ( i = 0; i < dword_C25F9C; ++i )
    v2 |= eeprom_load_one_chain(dword_C25F5C[i], dword_C25F58);
  if ( !v2 )
    *(_BYTE *)(dword_C25F58 + 80) = 1;
  return v2;
}
