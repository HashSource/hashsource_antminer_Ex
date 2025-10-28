int __fastcall eeprom_verify_fixture_crc(int a1, unsigned __int8 *a2)
{
  return -(sub_AE560(a1, a2) == 0);
}
