int __fastcall sub_1BECCC(int a1)
{
  int result; // r0
  int eeprom_chip_ft; // [sp+8h] [bp-Ch]

  api_get_eeprom_chip_bin(*(_DWORD *)(a1 + 264));
  eeprom_chip_ft = api_get_eeprom_chip_ft(*(_DWORD *)(a1 + 264));
  result = strncmp((const char *)(eeprom_chip_ft + 5), "B1C1", 4u);
  if ( result )
    return strncmp((const char *)(eeprom_chip_ft + 5), "B2C1", 4u);
  return result;
}
