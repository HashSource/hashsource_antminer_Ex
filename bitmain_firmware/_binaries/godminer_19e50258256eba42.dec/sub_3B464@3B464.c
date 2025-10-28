int sub_3B464()
{
  int result; // r0
  int v1; // [sp+Ch] [bp-18h] BYREF
  _DWORD *all_created_runtime; // [sp+10h] [bp-14h]
  int i; // [sp+14h] [bp-10h]

  v1 = 0;
  all_created_runtime = get_all_created_runtime(&v1);
  result = is_eeprom_loaded();
  if ( result )
  {
    for ( i = 0; i < v1; ++i )
      result = (*(int (__fastcall **)(_DWORD, int, int, int, int))(all_created_runtime[i] + 176))(
                 all_created_runtime[i],
                 1,
                 opt_custom_freq,
                 1,
                 opt_custom_voltage);
  }
  return result;
}
