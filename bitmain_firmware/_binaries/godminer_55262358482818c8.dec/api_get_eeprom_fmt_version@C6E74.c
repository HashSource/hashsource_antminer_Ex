int __fastcall api_get_eeprom_fmt_version(int a1)
{
  if ( dword_1B3628[0] && *(_BYTE *)(dword_1B3628[0] + 80) )
    return *(unsigned __int8 *)(*(_DWORD *)(dword_1B3628[0] + 4 * dword_1B3628[a1 + 2]) + 2);
  sub_C3710();
  return 0;
}
