int __fastcall eeprom_verify_fixture_crc(int a1, int a2)
{
  return -(sub_B4E04(a1, (unsigned __int8 *)(a2 + 1), (unsigned __int8 *)(a2 + 55)) == 0);
}
