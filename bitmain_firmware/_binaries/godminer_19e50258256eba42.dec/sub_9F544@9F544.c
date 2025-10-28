int sub_9F544()
{
  int v1; // [sp+14h] [bp-18h] BYREF
  _BYTE *eeprom_chip_marking; // [sp+18h] [bp-14h]
  void *all_created_runtime; // [sp+1Ch] [bp-10h]
  int i; // [sp+20h] [bp-Ch]
  int v5; // [sp+24h] [bp-8h]

  v5 = 0;
  all_created_runtime = get_all_created_runtime(&v1);
  for ( i = 0; i < v1; ++i )
  {
    eeprom_chip_marking = (_BYTE *)api_get_eeprom_chip_marking(i);
    if ( *eeprom_chip_marking == 83 )
      v5 = 60;
  }
  return v5;
}
