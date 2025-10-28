int __fastcall api_get_eeprom_fmt_version(int a1)
{
  unsigned __int8 v3; // [sp+Fh] [bp-5h] BYREF

  v3 = 0;
  if ( eeprom_get_fmt_version(dword_C25F5C[a1], &v3) )
    return 0;
  else
    return v3;
}
